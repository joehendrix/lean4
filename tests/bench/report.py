#!/usr/bin/env python3

import collections
import os
import re
import subprocess
import sys
import yaml

import temci.utils.library_init
from temci.report import stats, rundata
from temci.utils import number, settings
import numpy

def single(bench, cat, prop):
    f = f"bench/{bench}{cat}.bench"
    with open(f, "r") as f:
        runs = yaml.load(f)
    stats_helper = rundata.RunDataStatsHelper.init_from_dicts(runs)
    stat = stats.TestedPairsAndSingles(stats_helper.valid_runs())
    return stat.singles[0].properties[prop]

mean_by_cat = collections.defaultdict(list)
stddev_by_cat = collections.defaultdict(list)

def pp(bench, cat, prop, norm):
    f = f"bench/{bench}{cat}.bench"
    if not open(f).read():
        return "-"
    s = single(bench, cat, prop)
    norm = 1  #norm if prop == 'etime' else 1
    mean_by_cat[cat].append(s.mean() / norm)
    stddev_by_cat[cat].append(s.std_dev() / norm)
    number.FNumber.settings["min_decimal_places"] = 2 if prop == 'etime' else 0
    number.FNumber.settings["max_decimal_places"] = 2 if prop == 'etime' else 0
    return number.fnumber(s.mean() / norm, abs_deviation=s.std_dev() / norm) + ('%' if prop == 'gc' else '')

def mean(cat, prop):
    mean = numpy.mean(mean_by_cat[cat])
    stddev = numpy.mean(stddev_by_cat[cat])
    number.FNumber.settings["min_decimal_places"] = 2 if prop == 'etime' else 0
    number.FNumber.settings["max_decimal_places"] = 2 if prop == 'etime' else 0
    return number.fnumber(mean, abs_deviation=stddev) + ('%' if prop == 'gc' else '')  #if prop == 'etime' else '-'

CATBAG = {
    '.lean': ("Lean [s]", "etime"),
    '.no_reuse.lean': ("-reuse", "etime"),
    '.no_borrow.lean': ("-borrow", "etime"),
    '.no_st.lean': ("-ST", "etime"),
    '.gcc.lean': ("Lean+GCC9", "etime"),
    '.gc.lean': ("del [%]", "gc"),
    '.lean.perf': ("cache misses (CM) [1M/s]", "cache-misses"),
    '.hs': ("GHC", "etime"),
    '.gc.hs': ("GC [%]", "gc"),
    '.hs.perf': ("CM", "cache-misses"),
    '.llvm.hs': ("GHC -fllvm", "etime"),
    '.ml': ("OCaml", "etime"),
    '.gc.ml': ("GC", "gc"),
    '.ml.perf': ("CM", "cache-misses"),
    '.flambda.ml': ("OCaml+Flambda", "etime"),
    '.mlton': ("MLton", "etime"),
    '.gc.mlton': ("GC", "gc"),
    '.mlton.perf': ("CM", "cache-misses"),
    '.mlkit': ("MLKit", "etime"),
    '.gc.mlkit': ("GC", "gc"),
    '.mlkit.perf': ("CM", "cache-misses"),
    '.swift': ("Swift", "etime"),
    '.gc.swift': ("GC", "gc"),
    '.swift.perf': ("CM", "cache-misses"),
}

benches = os.environ['BENCHES'].split(':')
cats = os.environ['CATS'].split(':')
print(";".join(["Benchmark"] + [CATBAG[cat][0] for cat in cats]))

for bench in benches:
    norm = single(bench, '.lean', 'etime').mean()
    print(";".join([bench] + [pp(bench, cat, CATBAG[cat][1], norm) for cat in cats]))

print(";".join(["mean"] + [mean(cat, CATBAG[cat][1]) for cat in cats]))
