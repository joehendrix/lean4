/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include "runtime/alloc.h"
#include "runtime/debug.h"
#include "runtime/serializer.h"
#include "runtime/thread.h"
#include "runtime/object.h"
#include "runtime/io.h"
#include "runtime/init_module.h"

using namespace lean; //NOLINT

void lean_initialize_runtime_module() {
    initialize_alloc();
    initialize_debug();
    initialize_object();
    initialize_io();
    initialize_serializer();
    initialize_thread();
}
void lean_finalize_runtime_module() {
    finalize_thread();
    finalize_serializer();
    finalize_io();
    finalize_object();
    finalize_debug();
    finalize_alloc();
}
