// Lean compiler output
// Module: init.control.estate
// Imports: init.control.state init.control.except
#include "runtime/object.h"
#include "runtime/apply.h"
typedef lean::object obj;    typedef lean::usize  usize;
typedef lean::uint8  uint8;  typedef lean::uint16 uint16;
typedef lean::uint32 uint32; typedef lean::uint64 uint64;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
obj* l_EState_seqRight___rarg(obj*, obj*, obj*);
obj* l_EState_resultOk_mk___rarg(obj*, obj*);
obj* l_EState_adaptState(obj*, obj*, obj*, obj*, obj*);
obj* l_EState_HasRepr___rarg(obj*, obj*);
obj* l_EState_Monad(obj*, obj*);
obj* l_EState_Result_repr___main(obj*, obj*, obj*);
obj* l_EState_Result_toString___main___rarg___closed__1;
obj* l_EState_set(obj*, obj*);
obj* l_EState_resultOk_mk(obj*, obj*, obj*);
obj* l_EState_Monad___closed__6;
obj* l_EState_MonadState___closed__3;
obj* l_EState_map___rarg(obj*, obj*, obj*);
obj* l_EState_orelse(obj*, obj*, obj*);
obj* l_EState_run_x27(obj*, obj*, obj*);
obj* l_EState_orelse_x27(obj*, obj*, obj*);
obj* l_EState_unreachableError(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_EState_orelse_x27___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_EState_Result_toString___main(obj*, obj*, obj*);
obj* l_EState_run___rarg(obj*, obj*);
obj* l_EState_MonadExcept___closed__2;
obj* l_EState_adaptState___rarg(obj*, obj*, obj*, obj*);
obj* l_EState_Result_toString___main___rarg(obj*, obj*, obj*);
obj* l_EState_Monad___closed__5;
obj* l_EState_throw___rarg(obj*, obj*);
obj* l_EState_Result_toString(obj*, obj*, obj*);
obj* l_EState_adaptExcept___rarg(obj*, obj*, obj*);
obj* l_EState_Result_toString___main___rarg___closed__2;
obj* l_EState_bind(obj*, obj*, obj*, obj*);
obj* l_EState_modify(obj*, obj*);
obj* l_EState_unreachableError___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_EState_Monad___closed__2;
obj* l_EState_Result_repr___main___rarg(obj*, obj*, obj*);
extern obj* l_Option_HasRepr___rarg___closed__3;
obj* l_EState_HasOrelse___closed__1;
obj* l_EState_pure(obj*, obj*, obj*);
obj* l_EState_Monad___closed__4;
extern obj* l_Except_toString___main___rarg___closed__2;
obj* l_EState_HasOrelse(obj*, obj*, obj*);
obj* l_EState_Monad___lambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_EState_MonadExcept___closed__3;
obj* l_EState_modify___rarg(obj*, obj*);
obj* l_EState_Monad___closed__10;
obj* l_EState_catch___rarg(obj*, obj*, obj*);
obj* l_EState_get(obj*, obj*);
obj* l_EState_adaptExcept(obj*, obj*, obj*, obj*);
obj* l_EState_Monad___lambda__2(obj*, obj*, obj*, obj*, obj*);
obj* l_EState_HasRepr(obj*, obj*, obj*);
obj* l_EState_MonadState___closed__2;
obj* l_EState_Monad___closed__3;
obj* l_EState_Monad___closed__9;
obj* l_EState_bind___rarg(obj*, obj*, obj*);
obj* l_EState_Monad___lambda__3(obj*, obj*, obj*, obj*, obj*);
obj* l_EState_Monad___closed__8;
extern obj* l_Except_toString___main___rarg___closed__1;
obj* l_EState_run_x27___rarg(obj*, obj*);
obj* l_EState_Result_repr___rarg(obj*, obj*, obj*);
obj* l_EState_orelse___rarg(obj*, obj*, obj*);
obj* l_EState_MonadState___closed__4;
obj* l_EState_seqRight(obj*, obj*, obj*, obj*);
obj* l_EState_MonadState(obj*, obj*);
obj* l_EState_pure___rarg(obj*, obj*);
obj* l_EState_HasToString(obj*, obj*, obj*);
obj* l_EState_Monad___closed__1;
obj* l_EState_HasToString___rarg(obj*, obj*);
obj* l_EState_map(obj*, obj*, obj*, obj*);
obj* l_EState_orelse_x27___rarg(obj*, obj*, uint8, obj*);
obj* l_EState_Inhabited(obj*, obj*, obj*);
obj* l_EState_MonadExcept___closed__1;
obj* l_EState_MonadExcept(obj*, obj*);
obj* l_EState_catch(obj*, obj*, obj*);
obj* l_EState_MonadState___closed__1;
obj* l_EState_Monad___closed__7;
obj* l_EState_Result_repr(obj*, obj*, obj*);
obj* l_EState_run(obj*, obj*, obj*);
obj* l_EState_set___rarg(obj*, obj*);
obj* l_EState_Inhabited___rarg(obj*, obj*);
obj* l_EState_throw(obj*, obj*, obj*);
obj* l_EState_get___rarg(obj*);
obj* l_EState_Result_toString___rarg(obj*, obj*, obj*);
obj* l_EState_unreachableError(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
lean_unreachable();
}
}
obj* l_EState_unreachableError___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; 
x_8 = l_EState_unreachableError(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean::dec(x_6);
lean::dec(x_5);
return x_8;
}
}
obj* l_EState_resultOk_mk___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_EState_resultOk_mk(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_resultOk_mk___rarg), 2, 0);
return x_4;
}
}
obj* _init_l_EState_Result_toString___main___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("ok: ");
return x_1;
}
}
obj* _init_l_EState_Result_toString___main___rarg___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("error: ");
return x_1;
}
}
obj* l_EState_Result_toString___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
lean::dec(x_1);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_5 = lean::apply_1(x_2, x_4);
x_6 = l_EState_Result_toString___main___rarg___closed__1;
x_7 = lean::string_append(x_6, x_5);
lean::dec(x_5);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
lean::dec(x_2);
x_8 = lean::cnstr_get(x_3, 0);
lean::inc(x_8);
lean::dec(x_3);
x_9 = lean::apply_1(x_1, x_8);
x_10 = l_EState_Result_toString___main___rarg___closed__2;
x_11 = lean::string_append(x_10, x_9);
lean::dec(x_9);
return x_11;
}
}
}
obj* l_EState_Result_toString___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Result_toString___main___rarg), 3, 0);
return x_4;
}
}
obj* l_EState_Result_toString___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_EState_Result_toString___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_EState_Result_toString(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Result_toString___rarg), 3, 0);
return x_4;
}
}
obj* l_EState_Result_repr___main___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
lean::dec(x_1);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
lean::dec(x_3);
x_5 = lean::apply_1(x_2, x_4);
x_6 = l_Except_toString___main___rarg___closed__2;
x_7 = lean::string_append(x_6, x_5);
lean::dec(x_5);
x_8 = l_Option_HasRepr___rarg___closed__3;
x_9 = lean::string_append(x_7, x_8);
return x_9;
}
else
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
lean::dec(x_2);
x_10 = lean::cnstr_get(x_3, 0);
lean::inc(x_10);
lean::dec(x_3);
x_11 = lean::apply_1(x_1, x_10);
x_12 = l_Except_toString___main___rarg___closed__1;
x_13 = lean::string_append(x_12, x_11);
lean::dec(x_11);
x_14 = l_Option_HasRepr___rarg___closed__3;
x_15 = lean::string_append(x_13, x_14);
return x_15;
}
}
}
obj* l_EState_Result_repr___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Result_repr___main___rarg), 3, 0);
return x_4;
}
}
obj* l_EState_Result_repr___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_EState_Result_repr___main___rarg(x_1, x_2, x_3);
return x_4;
}
}
obj* l_EState_Result_repr(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Result_repr___rarg), 3, 0);
return x_4;
}
}
obj* l_EState_HasToString___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Result_toString___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_EState_HasToString(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_HasToString___rarg), 2, 0);
return x_4;
}
}
obj* l_EState_HasRepr___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Result_repr___rarg), 3, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_EState_HasRepr(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_HasRepr___rarg), 2, 0);
return x_4;
}
}
obj* l_EState_Inhabited___rarg(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; 
x_4 = lean::cnstr_get(x_2, 0);
lean::dec(x_4);
lean::cnstr_set_tag(x_2, 1);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
else
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_EState_Inhabited(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Inhabited___rarg), 2, 0);
return x_4;
}
}
obj* l_EState_pure___rarg(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; 
x_4 = lean::cnstr_get(x_2, 0);
lean::dec(x_4);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
else
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_EState_pure(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_pure___rarg), 2, 0);
return x_4;
}
}
obj* l_EState_set___rarg(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::cnstr_get(x_2, 1);
lean::dec(x_4);
x_5 = lean::cnstr_get(x_2, 0);
lean::dec(x_5);
x_6 = lean::box(0);
lean::cnstr_set(x_2, 1, x_1);
lean::cnstr_set(x_2, 0, x_6);
return x_2;
}
else
{
obj* x_7; obj* x_8; 
lean::dec(x_2);
x_7 = lean::box(0);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_7);
lean::cnstr_set(x_8, 1, x_1);
return x_8;
}
}
}
obj* l_EState_set(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_set___rarg), 2, 0);
return x_3;
}
}
obj* l_EState_get___rarg(obj* x_1) {
_start:
{
uint8 x_2; 
x_2 = !lean::is_exclusive(x_1);
if (x_2 == 0)
{
obj* x_3; obj* x_4; 
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::cnstr_get(x_1, 0);
lean::dec(x_4);
lean::inc(x_3);
lean::cnstr_set(x_1, 0, x_3);
return x_1;
}
else
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
lean::inc(x_5);
x_6 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_6, 0, x_5);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_EState_get(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_get___rarg), 1, 0);
return x_3;
}
}
obj* l_EState_modify___rarg(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_2, 1);
x_5 = lean::cnstr_get(x_2, 0);
lean::dec(x_5);
x_6 = lean::apply_1(x_1, x_4);
x_7 = lean::box(0);
lean::cnstr_set(x_2, 1, x_6);
lean::cnstr_set(x_2, 0, x_7);
return x_2;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = lean::cnstr_get(x_2, 1);
lean::inc(x_8);
lean::dec(x_2);
x_9 = lean::apply_1(x_1, x_8);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
}
}
obj* l_EState_modify(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_modify___rarg), 2, 0);
return x_3;
}
}
obj* l_EState_throw___rarg(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; 
x_3 = !lean::is_exclusive(x_2);
if (x_3 == 0)
{
obj* x_4; 
x_4 = lean::cnstr_get(x_2, 0);
lean::dec(x_4);
lean::cnstr_set_tag(x_2, 1);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
else
{
obj* x_5; obj* x_6; 
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_5);
return x_6;
}
}
}
obj* l_EState_throw(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_throw___rarg), 2, 0);
return x_4;
}
}
obj* l_EState_catch___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_2);
return x_4;
}
else
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::box(0);
lean::cnstr_set_tag(x_4, 0);
lean::cnstr_set(x_4, 0, x_7);
x_8 = lean::apply_2(x_2, x_6, x_4);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_4, 0);
x_10 = lean::cnstr_get(x_4, 1);
lean::inc(x_10);
lean::inc(x_9);
lean::dec(x_4);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::apply_2(x_2, x_9, x_12);
return x_13;
}
}
}
}
obj* l_EState_catch(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_catch___rarg), 3, 0);
return x_4;
}
}
obj* l_EState_orelse___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
lean::dec(x_2);
return x_4;
}
else
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
lean::dec(x_6);
x_7 = lean::box(0);
lean::cnstr_set_tag(x_4, 0);
lean::cnstr_set(x_4, 0, x_7);
x_8 = lean::apply_1(x_2, x_4);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::dec(x_4);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::apply_1(x_2, x_11);
return x_12;
}
}
}
}
obj* l_EState_orelse(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_orelse___rarg), 3, 0);
return x_4;
}
}
obj* l_EState_orelse_x27___rarg(obj* x_1, obj* x_2, uint8 x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::apply_1(x_1, x_4);
if (lean::obj_tag(x_5) == 0)
{
lean::dec(x_2);
return x_5;
}
else
{
uint8 x_6; 
x_6 = !lean::is_exclusive(x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_5, 0);
x_8 = lean::box(0);
lean::cnstr_set_tag(x_5, 0);
lean::cnstr_set(x_5, 0, x_8);
x_9 = lean::apply_1(x_2, x_5);
if (lean::obj_tag(x_9) == 0)
{
lean::dec(x_7);
return x_9;
}
else
{
if (x_3 == 0)
{
uint8 x_10; 
lean::dec(x_7);
x_10 = !lean::is_exclusive(x_9);
if (x_10 == 0)
{
return x_9;
}
else
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::cnstr_get(x_9, 0);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
lean::inc(x_11);
lean::dec(x_9);
x_13 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_13, 0, x_11);
lean::cnstr_set(x_13, 1, x_12);
return x_13;
}
}
else
{
uint8 x_14; 
x_14 = !lean::is_exclusive(x_9);
if (x_14 == 0)
{
obj* x_15; 
x_15 = lean::cnstr_get(x_9, 0);
lean::dec(x_15);
lean::cnstr_set(x_9, 0, x_7);
return x_9;
}
else
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_9, 1);
lean::inc(x_16);
lean::dec(x_9);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_7);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_5, 0);
x_19 = lean::cnstr_get(x_5, 1);
lean::inc(x_19);
lean::inc(x_18);
lean::dec(x_5);
x_20 = lean::box(0);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_19);
x_22 = lean::apply_1(x_2, x_21);
if (lean::obj_tag(x_22) == 0)
{
lean::dec(x_18);
return x_22;
}
else
{
if (x_3 == 0)
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_18);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_24 = lean::cnstr_get(x_22, 1);
lean::inc(x_24);
if (lean::is_exclusive(x_22)) {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_25 = x_22;
} else {
 lean::dec_ref(x_22);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_23);
lean::cnstr_set(x_26, 1, x_24);
return x_26;
}
else
{
obj* x_27; obj* x_28; obj* x_29; 
x_27 = lean::cnstr_get(x_22, 1);
lean::inc(x_27);
if (lean::is_exclusive(x_22)) {
 lean::cnstr_release(x_22, 0);
 lean::cnstr_release(x_22, 1);
 x_28 = x_22;
} else {
 lean::dec_ref(x_22);
 x_28 = lean::box(0);
}
if (lean::is_scalar(x_28)) {
 x_29 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_29 = x_28;
}
lean::cnstr_set(x_29, 0, x_18);
lean::cnstr_set(x_29, 1, x_27);
return x_29;
}
}
}
}
}
}
obj* l_EState_orelse_x27(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_orelse_x27___rarg___boxed), 4, 0);
return x_4;
}
}
obj* l_EState_orelse_x27___rarg___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_3);
lean::dec(x_3);
x_6 = l_EState_orelse_x27___rarg(x_1, x_2, x_5, x_4);
return x_6;
}
}
obj* l_EState_adaptExcept___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
lean::dec(x_1);
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
return x_4;
}
else
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::inc(x_6);
lean::dec(x_4);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_6);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
}
else
{
uint8 x_9; 
x_9 = !lean::is_exclusive(x_4);
if (x_9 == 0)
{
obj* x_10; obj* x_11; 
x_10 = lean::cnstr_get(x_4, 0);
x_11 = lean::apply_1(x_1, x_10);
lean::cnstr_set(x_4, 0, x_11);
return x_4;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_12 = lean::cnstr_get(x_4, 0);
x_13 = lean::cnstr_get(x_4, 1);
lean::inc(x_13);
lean::inc(x_12);
lean::dec(x_4);
x_14 = lean::apply_1(x_1, x_12);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_14);
lean::cnstr_set(x_15, 1, x_13);
return x_15;
}
}
}
}
obj* l_EState_adaptExcept(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_adaptExcept___rarg), 3, 0);
return x_5;
}
}
obj* l_EState_bind___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::box(0);
lean::cnstr_set(x_4, 0, x_7);
x_8 = lean::apply_2(x_2, x_6, x_4);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_9 = lean::cnstr_get(x_4, 0);
x_10 = lean::cnstr_get(x_4, 1);
lean::inc(x_10);
lean::inc(x_9);
lean::dec(x_4);
x_11 = lean::box(0);
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_11);
lean::cnstr_set(x_12, 1, x_10);
x_13 = lean::apply_2(x_2, x_9, x_12);
return x_13;
}
}
else
{
uint8 x_14; 
lean::dec(x_2);
x_14 = !lean::is_exclusive(x_4);
if (x_14 == 0)
{
return x_4;
}
else
{
obj* x_15; obj* x_16; obj* x_17; 
x_15 = lean::cnstr_get(x_4, 0);
x_16 = lean::cnstr_get(x_4, 1);
lean::inc(x_16);
lean::inc(x_15);
lean::dec(x_4);
x_17 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_17, 0, x_15);
lean::cnstr_set(x_17, 1, x_16);
return x_17;
}
}
}
}
obj* l_EState_bind(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_bind___rarg), 3, 0);
return x_5;
}
}
obj* l_EState_map___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::apply_1(x_1, x_6);
lean::cnstr_set(x_4, 0, x_7);
return x_4;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = lean::cnstr_get(x_4, 0);
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::inc(x_8);
lean::dec(x_4);
x_10 = lean::apply_1(x_1, x_8);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8 x_12; 
lean::dec(x_1);
x_12 = !lean::is_exclusive(x_4);
if (x_12 == 0)
{
return x_4;
}
else
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = lean::cnstr_get(x_4, 0);
x_14 = lean::cnstr_get(x_4, 1);
lean::inc(x_14);
lean::inc(x_13);
lean::dec(x_4);
x_15 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_15, 0, x_13);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
}
}
obj* l_EState_map(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_map___rarg), 3, 0);
return x_5;
}
}
obj* l_EState_seqRight___rarg(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::apply_1(x_1, x_3);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; 
x_6 = lean::cnstr_get(x_4, 0);
lean::dec(x_6);
x_7 = lean::box(0);
lean::cnstr_set(x_4, 0, x_7);
x_8 = lean::apply_1(x_2, x_4);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::dec(x_4);
x_10 = lean::box(0);
x_11 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
x_12 = lean::apply_1(x_2, x_11);
return x_12;
}
}
else
{
uint8 x_13; 
lean::dec(x_2);
x_13 = !lean::is_exclusive(x_4);
if (x_13 == 0)
{
return x_4;
}
else
{
obj* x_14; obj* x_15; obj* x_16; 
x_14 = lean::cnstr_get(x_4, 0);
x_15 = lean::cnstr_get(x_4, 1);
lean::inc(x_15);
lean::inc(x_14);
lean::dec(x_4);
x_16 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
}
}
obj* l_EState_seqRight(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_seqRight___rarg), 3, 0);
return x_5;
}
}
obj* l_EState_Monad___lambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::apply_1(x_4, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; 
x_8 = lean::cnstr_get(x_6, 0);
lean::dec(x_8);
lean::cnstr_set(x_6, 0, x_3);
return x_6;
}
else
{
obj* x_9; obj* x_10; 
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
lean::dec(x_6);
x_10 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_10, 0, x_3);
lean::cnstr_set(x_10, 1, x_9);
return x_10;
}
}
else
{
uint8 x_11; 
lean::dec(x_3);
x_11 = !lean::is_exclusive(x_6);
if (x_11 == 0)
{
return x_6;
}
else
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_6, 0);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
lean::inc(x_12);
lean::dec(x_6);
x_14 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
}
}
obj* l_EState_Monad___lambda__2(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::apply_1(x_3, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
x_10 = lean::apply_1(x_4, x_6);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_10, 0);
x_13 = lean::apply_1(x_8, x_12);
lean::cnstr_set(x_10, 0, x_13);
return x_10;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_14 = lean::cnstr_get(x_10, 0);
x_15 = lean::cnstr_get(x_10, 1);
lean::inc(x_15);
lean::inc(x_14);
lean::dec(x_10);
x_16 = lean::apply_1(x_8, x_14);
x_17 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_17, 0, x_16);
lean::cnstr_set(x_17, 1, x_15);
return x_17;
}
}
else
{
uint8 x_18; 
lean::dec(x_8);
x_18 = !lean::is_exclusive(x_10);
if (x_18 == 0)
{
return x_10;
}
else
{
obj* x_19; obj* x_20; obj* x_21; 
x_19 = lean::cnstr_get(x_10, 0);
x_20 = lean::cnstr_get(x_10, 1);
lean::inc(x_20);
lean::inc(x_19);
lean::dec(x_10);
x_21 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_22 = lean::cnstr_get(x_6, 0);
x_23 = lean::cnstr_get(x_6, 1);
lean::inc(x_23);
lean::inc(x_22);
lean::dec(x_6);
x_24 = lean::box(0);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_24);
lean::cnstr_set(x_25, 1, x_23);
x_26 = lean::apply_1(x_4, x_25);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_27 = lean::cnstr_get(x_26, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_26, 1);
lean::inc(x_28);
if (lean::is_exclusive(x_26)) {
 lean::cnstr_release(x_26, 0);
 lean::cnstr_release(x_26, 1);
 x_29 = x_26;
} else {
 lean::dec_ref(x_26);
 x_29 = lean::box(0);
}
x_30 = lean::apply_1(x_22, x_27);
if (lean::is_scalar(x_29)) {
 x_31 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_31 = x_29;
}
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_28);
return x_31;
}
else
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_22);
x_32 = lean::cnstr_get(x_26, 0);
lean::inc(x_32);
x_33 = lean::cnstr_get(x_26, 1);
lean::inc(x_33);
if (lean::is_exclusive(x_26)) {
 lean::cnstr_release(x_26, 0);
 lean::cnstr_release(x_26, 1);
 x_34 = x_26;
} else {
 lean::dec_ref(x_26);
 x_34 = lean::box(0);
}
if (lean::is_scalar(x_34)) {
 x_35 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_35 = x_34;
}
lean::cnstr_set(x_35, 0, x_32);
lean::cnstr_set(x_35, 1, x_33);
return x_35;
}
}
}
else
{
uint8 x_36; 
lean::dec(x_4);
x_36 = !lean::is_exclusive(x_6);
if (x_36 == 0)
{
return x_6;
}
else
{
obj* x_37; obj* x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_6, 0);
x_38 = lean::cnstr_get(x_6, 1);
lean::inc(x_38);
lean::inc(x_37);
lean::dec(x_6);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
}
}
obj* l_EState_Monad___lambda__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::apply_1(x_3, x_5);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_7; 
x_7 = !lean::is_exclusive(x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 0);
x_9 = lean::box(0);
lean::cnstr_set(x_6, 0, x_9);
x_10 = lean::apply_1(x_4, x_6);
if (lean::obj_tag(x_10) == 0)
{
uint8 x_11; 
x_11 = !lean::is_exclusive(x_10);
if (x_11 == 0)
{
obj* x_12; 
x_12 = lean::cnstr_get(x_10, 0);
lean::dec(x_12);
lean::cnstr_set(x_10, 0, x_8);
return x_10;
}
else
{
obj* x_13; obj* x_14; 
x_13 = lean::cnstr_get(x_10, 1);
lean::inc(x_13);
lean::dec(x_10);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_8);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
else
{
uint8 x_15; 
lean::dec(x_8);
x_15 = !lean::is_exclusive(x_10);
if (x_15 == 0)
{
return x_10;
}
else
{
obj* x_16; obj* x_17; obj* x_18; 
x_16 = lean::cnstr_get(x_10, 0);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_10);
x_18 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_19 = lean::cnstr_get(x_6, 0);
x_20 = lean::cnstr_get(x_6, 1);
lean::inc(x_20);
lean::inc(x_19);
lean::dec(x_6);
x_21 = lean::box(0);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_21);
lean::cnstr_set(x_22, 1, x_20);
x_23 = lean::apply_1(x_4, x_22);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_25; obj* x_26; 
x_24 = lean::cnstr_get(x_23, 1);
lean::inc(x_24);
if (lean::is_exclusive(x_23)) {
 lean::cnstr_release(x_23, 0);
 lean::cnstr_release(x_23, 1);
 x_25 = x_23;
} else {
 lean::dec_ref(x_23);
 x_25 = lean::box(0);
}
if (lean::is_scalar(x_25)) {
 x_26 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_26 = x_25;
}
lean::cnstr_set(x_26, 0, x_19);
lean::cnstr_set(x_26, 1, x_24);
return x_26;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_19);
x_27 = lean::cnstr_get(x_23, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_23, 1);
lean::inc(x_28);
if (lean::is_exclusive(x_23)) {
 lean::cnstr_release(x_23, 0);
 lean::cnstr_release(x_23, 1);
 x_29 = x_23;
} else {
 lean::dec_ref(x_23);
 x_29 = lean::box(0);
}
if (lean::is_scalar(x_29)) {
 x_30 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_30 = x_29;
}
lean::cnstr_set(x_30, 0, x_27);
lean::cnstr_set(x_30, 1, x_28);
return x_30;
}
}
}
else
{
uint8 x_31; 
lean::dec(x_4);
x_31 = !lean::is_exclusive(x_6);
if (x_31 == 0)
{
return x_6;
}
else
{
obj* x_32; obj* x_33; obj* x_34; 
x_32 = lean::cnstr_get(x_6, 0);
x_33 = lean::cnstr_get(x_6, 1);
lean::inc(x_33);
lean::inc(x_32);
lean::dec(x_6);
x_34 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_34, 0, x_32);
lean::cnstr_set(x_34, 1, x_33);
return x_34;
}
}
}
}
obj* _init_l_EState_Monad___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_map), 4, 2);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
return x_1;
}
}
obj* _init_l_EState_Monad___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Monad___lambda__1), 5, 0);
return x_1;
}
}
obj* _init_l_EState_Monad___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_EState_Monad___closed__1;
x_2 = l_EState_Monad___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_EState_Monad___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_pure), 3, 2);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
return x_1;
}
}
obj* _init_l_EState_Monad___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_seqRight), 4, 2);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
return x_1;
}
}
obj* _init_l_EState_Monad___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Monad___lambda__2), 5, 0);
return x_1;
}
}
obj* _init_l_EState_Monad___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_Monad___lambda__3), 5, 0);
return x_1;
}
}
obj* _init_l_EState_Monad___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_1 = l_EState_Monad___closed__3;
x_2 = l_EState_Monad___closed__4;
x_3 = l_EState_Monad___closed__6;
x_4 = l_EState_Monad___closed__7;
x_5 = l_EState_Monad___closed__5;
x_6 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_6, 0, x_1);
lean::cnstr_set(x_6, 1, x_2);
lean::cnstr_set(x_6, 2, x_3);
lean::cnstr_set(x_6, 3, x_4);
lean::cnstr_set(x_6, 4, x_5);
return x_6;
}
}
obj* _init_l_EState_Monad___closed__9() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_bind), 4, 2);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
return x_1;
}
}
obj* _init_l_EState_Monad___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_EState_Monad___closed__8;
x_2 = l_EState_Monad___closed__9;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_EState_Monad(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_EState_Monad___closed__10;
return x_3;
}
}
obj* _init_l_EState_HasOrelse___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_orelse___rarg), 3, 0);
return x_1;
}
}
obj* l_EState_HasOrelse(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_EState_HasOrelse___closed__1;
return x_4;
}
}
obj* _init_l_EState_MonadState___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_get___rarg), 1, 0);
return x_1;
}
}
obj* _init_l_EState_MonadState___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_set___rarg), 2, 0);
return x_1;
}
}
obj* _init_l_EState_MonadState___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_modify___rarg), 2, 0);
return x_1;
}
}
obj* _init_l_EState_MonadState___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_EState_MonadState___closed__1;
x_2 = l_EState_MonadState___closed__2;
x_3 = l_EState_MonadState___closed__3;
x_4 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_4, 0, x_1);
lean::cnstr_set(x_4, 1, x_2);
lean::cnstr_set(x_4, 2, x_3);
return x_4;
}
}
obj* l_EState_MonadState(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_EState_MonadState___closed__4;
return x_3;
}
}
obj* _init_l_EState_MonadExcept___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_throw), 3, 2);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
return x_1;
}
}
obj* _init_l_EState_MonadExcept___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_catch), 3, 2);
lean::closure_set(x_1, 0, lean::box(0));
lean::closure_set(x_1, 1, lean::box(0));
return x_1;
}
}
obj* _init_l_EState_MonadExcept___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_EState_MonadExcept___closed__1;
x_2 = l_EState_MonadExcept___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_EState_MonadExcept(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_EState_MonadExcept___closed__3;
return x_3;
}
}
obj* l_EState_adaptState___rarg(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_6 = lean::cnstr_get(x_4, 1);
x_7 = lean::cnstr_get(x_4, 0);
lean::dec(x_7);
x_8 = lean::apply_1(x_2, x_6);
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
lean::dec(x_8);
x_11 = lean::box(0);
lean::cnstr_set(x_4, 1, x_9);
lean::cnstr_set(x_4, 0, x_11);
x_12 = lean::apply_1(x_1, x_4);
if (lean::obj_tag(x_12) == 0)
{
uint8 x_13; 
x_13 = !lean::is_exclusive(x_12);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::cnstr_get(x_12, 1);
x_15 = lean::apply_2(x_3, x_14, x_10);
lean::cnstr_set(x_12, 1, x_15);
return x_12;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_16 = lean::cnstr_get(x_12, 0);
x_17 = lean::cnstr_get(x_12, 1);
lean::inc(x_17);
lean::inc(x_16);
lean::dec(x_12);
x_18 = lean::apply_2(x_3, x_17, x_10);
x_19 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_19, 0, x_16);
lean::cnstr_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8 x_20; 
x_20 = !lean::is_exclusive(x_12);
if (x_20 == 0)
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_12, 1);
x_22 = lean::apply_2(x_3, x_21, x_10);
lean::cnstr_set(x_12, 1, x_22);
return x_12;
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_23 = lean::cnstr_get(x_12, 0);
x_24 = lean::cnstr_get(x_12, 1);
lean::inc(x_24);
lean::inc(x_23);
lean::dec(x_12);
x_25 = lean::apply_2(x_3, x_24, x_10);
x_26 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_26, 0, x_23);
lean::cnstr_set(x_26, 1, x_25);
return x_26;
}
}
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_27 = lean::cnstr_get(x_4, 1);
lean::inc(x_27);
lean::dec(x_4);
x_28 = lean::apply_1(x_2, x_27);
x_29 = lean::cnstr_get(x_28, 0);
lean::inc(x_29);
x_30 = lean::cnstr_get(x_28, 1);
lean::inc(x_30);
lean::dec(x_28);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_32, 0, x_31);
lean::cnstr_set(x_32, 1, x_29);
x_33 = lean::apply_1(x_1, x_32);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_34 = lean::cnstr_get(x_33, 0);
lean::inc(x_34);
x_35 = lean::cnstr_get(x_33, 1);
lean::inc(x_35);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_release(x_33, 0);
 lean::cnstr_release(x_33, 1);
 x_36 = x_33;
} else {
 lean::dec_ref(x_33);
 x_36 = lean::box(0);
}
x_37 = lean::apply_2(x_3, x_35, x_30);
if (lean::is_scalar(x_36)) {
 x_38 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_38 = x_36;
}
lean::cnstr_set(x_38, 0, x_34);
lean::cnstr_set(x_38, 1, x_37);
return x_38;
}
else
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_39 = lean::cnstr_get(x_33, 0);
lean::inc(x_39);
x_40 = lean::cnstr_get(x_33, 1);
lean::inc(x_40);
if (lean::is_exclusive(x_33)) {
 lean::cnstr_release(x_33, 0);
 lean::cnstr_release(x_33, 1);
 x_41 = x_33;
} else {
 lean::dec_ref(x_33);
 x_41 = lean::box(0);
}
x_42 = lean::apply_2(x_3, x_40, x_30);
if (lean::is_scalar(x_41)) {
 x_43 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_43 = x_41;
}
lean::cnstr_set(x_43, 0, x_39);
lean::cnstr_set(x_43, 1, x_42);
return x_43;
}
}
}
}
obj* l_EState_adaptState(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_adaptState___rarg), 4, 0);
return x_6;
}
}
obj* l_EState_run___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::apply_1(x_1, x_4);
return x_5;
}
}
obj* l_EState_run(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_run___rarg), 2, 0);
return x_4;
}
}
obj* l_EState_run_x27___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::box(0);
x_4 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_4, 0, x_3);
lean::cnstr_set(x_4, 1, x_2);
x_5 = lean::apply_1(x_1, x_4);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
lean::dec(x_5);
x_7 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_7, 0, x_6);
return x_7;
}
else
{
obj* x_8; 
lean::dec(x_5);
x_8 = lean::box(0);
return x_8;
}
}
}
obj* l_EState_run_x27(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_run_x27___rarg), 2, 0);
return x_4;
}
}
obj* initialize_init_control_state(obj*);
obj* initialize_init_control_except(obj*);
static bool _G_initialized = false;
obj* initialize_init_control_estate(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_control_state(w);
if (io_result_is_error(w)) return w;
w = initialize_init_control_except(w);
if (io_result_is_error(w)) return w;
l_EState_Result_toString___main___rarg___closed__1 = _init_l_EState_Result_toString___main___rarg___closed__1();
lean::mark_persistent(l_EState_Result_toString___main___rarg___closed__1);
l_EState_Result_toString___main___rarg___closed__2 = _init_l_EState_Result_toString___main___rarg___closed__2();
lean::mark_persistent(l_EState_Result_toString___main___rarg___closed__2);
l_EState_Monad___closed__1 = _init_l_EState_Monad___closed__1();
lean::mark_persistent(l_EState_Monad___closed__1);
l_EState_Monad___closed__2 = _init_l_EState_Monad___closed__2();
lean::mark_persistent(l_EState_Monad___closed__2);
l_EState_Monad___closed__3 = _init_l_EState_Monad___closed__3();
lean::mark_persistent(l_EState_Monad___closed__3);
l_EState_Monad___closed__4 = _init_l_EState_Monad___closed__4();
lean::mark_persistent(l_EState_Monad___closed__4);
l_EState_Monad___closed__5 = _init_l_EState_Monad___closed__5();
lean::mark_persistent(l_EState_Monad___closed__5);
l_EState_Monad___closed__6 = _init_l_EState_Monad___closed__6();
lean::mark_persistent(l_EState_Monad___closed__6);
l_EState_Monad___closed__7 = _init_l_EState_Monad___closed__7();
lean::mark_persistent(l_EState_Monad___closed__7);
l_EState_Monad___closed__8 = _init_l_EState_Monad___closed__8();
lean::mark_persistent(l_EState_Monad___closed__8);
l_EState_Monad___closed__9 = _init_l_EState_Monad___closed__9();
lean::mark_persistent(l_EState_Monad___closed__9);
l_EState_Monad___closed__10 = _init_l_EState_Monad___closed__10();
lean::mark_persistent(l_EState_Monad___closed__10);
l_EState_HasOrelse___closed__1 = _init_l_EState_HasOrelse___closed__1();
lean::mark_persistent(l_EState_HasOrelse___closed__1);
l_EState_MonadState___closed__1 = _init_l_EState_MonadState___closed__1();
lean::mark_persistent(l_EState_MonadState___closed__1);
l_EState_MonadState___closed__2 = _init_l_EState_MonadState___closed__2();
lean::mark_persistent(l_EState_MonadState___closed__2);
l_EState_MonadState___closed__3 = _init_l_EState_MonadState___closed__3();
lean::mark_persistent(l_EState_MonadState___closed__3);
l_EState_MonadState___closed__4 = _init_l_EState_MonadState___closed__4();
lean::mark_persistent(l_EState_MonadState___closed__4);
l_EState_MonadExcept___closed__1 = _init_l_EState_MonadExcept___closed__1();
lean::mark_persistent(l_EState_MonadExcept___closed__1);
l_EState_MonadExcept___closed__2 = _init_l_EState_MonadExcept___closed__2();
lean::mark_persistent(l_EState_MonadExcept___closed__2);
l_EState_MonadExcept___closed__3 = _init_l_EState_MonadExcept___closed__3();
lean::mark_persistent(l_EState_MonadExcept___closed__3);
return w;
}
