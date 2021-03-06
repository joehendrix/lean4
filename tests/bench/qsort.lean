abbreviation Elem := UInt32

def badRand (seed : Elem) : Elem :=
seed * 1664525 + 1013904223

def mkRandomArray : Nat → Elem → Array Elem → Array Elem
| 0     seed as := as
| (i+1) seed as := mkRandomArray i (badRand seed) (as.push seed)

partial def checkSortedAux (a : Array Elem) : Nat → IO Unit
| i :=
  if i < a.size - 1 then do
    unless (a.get i <= a.get (i+1)) $ throw (IO.userError "array is not sorted");
    checkSortedAux (i+1)
  else
    pure ()

-- copied from stdlib, but with `UInt32` indices instead of `Nat` (which is more comparable to the other versions)
abbreviation Idx := UInt32
instance : HasLift UInt32 Nat := ⟨UInt32.toNat⟩
prefix `↑`:max := coe

@[specialize] private partial def partitionAux {α : Type} [Inhabited α] (lt : α → α → Bool) (hi : Idx) (pivot : α) : Array α → Idx → Idx → Idx × Array α
| as i j :=
  if j < hi then
    if lt (as.get ↑j) pivot then
      let as := as.swap ↑i ↑j;
      partitionAux as (i+1) (j+1)
    else
      partitionAux as i (j+1)
  else
    let as := as.swap ↑i ↑hi;
    (i, as)

@[inline] def partition {α : Type} [Inhabited α] (as : Array α) (lt : α → α → Bool) (lo hi : Idx) : Idx × Array α :=
let mid := (lo + hi) / 2;
let as  := if lt (as.get ↑mid) (as.get ↑lo) then as.swap ↑lo ↑mid else as;
let as  := if lt (as.get ↑hi)  (as.get ↑lo) then as.swap ↑lo ↑hi  else as;
let as  := if lt (as.get ↑mid) (as.get ↑hi) then as.swap ↑mid ↑hi else as;
let pivot := as.get ↑hi;
partitionAux lt hi pivot as lo lo

@[specialize] partial def qsortAux {α : Type} [Inhabited α] (lt : α → α → Bool) : Array α → Idx → Idx → Array α
| as low high :=
  if low < high then
    let p   := partition as lt low high;
    -- TODO: fix `partial` support in the equation compiler, it breaks if we use `let (mid, as) := partition as lt low high`
    let mid := p.1;
    let as  := p.2;
    let as  := qsortAux as low mid;
    qsortAux as (mid+1) high
  else as

@[inline] def qsort {α : Type} [Inhabited α] (as : Array α) (lt : α → α → Bool) : Array α :=
qsortAux lt as 0 (UInt32.ofNat (as.size - 1))

def main (xs : List String) : IO Unit :=
do
let n := xs.head.toNat;
n.mfor $ fun _ =>
n.mfor $ fun i => do
  let xs := mkRandomArray i (UInt32.ofNat i) Array.empty;
  let xs := qsort xs (fun a b => a < b);
  --IO.println xs;
  checkSortedAux xs 0
