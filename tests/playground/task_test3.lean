def run1 (i : Nat) (n : Nat) (xs : List Nat) : Nat :=
n.repeat (fun r =>
  -- dbgTrace (">> [" ++ toString i ++ "] " ++ toString r) $ λ _,
  xs.foldl (fun a b => a + b) (r+i))
0

def main (xs : List String) : IO UInt32 :=
let ys := (List.replicate xs.head.toNat 1) in
let ts : List (Task Nat) := (List.iota 10).map (fun i => Task.mk $ fun _ => run1 (i+1) xs.head.toNat ys) in
let ns : List Nat := ts.map Task.get in
IO.println (">> " ++ toString ns) *>
pure 0
