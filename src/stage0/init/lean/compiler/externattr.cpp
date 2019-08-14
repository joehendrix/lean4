// Lean compiler output
// Module: init.lean.compiler.externattr
// Imports: init.data.option.basic init.lean.expr init.lean.environment init.lean.attributes init.lean.projfns
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
obj* l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2___boxed(obj*, obj*);
uint32 l_String_Iterator_curr___main(obj*);
obj* l_Lean_getExternEntryForAux___boxed(obj*, obj*);
obj* l_unsafeCast(obj*, obj*, obj*, obj*);
obj* l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2(obj*, obj*);
obj* l_Lean_expandExternPatternAux(obj*, obj*, obj*, obj*);
obj* l_Lean_getExternNameFor(obj*, obj*, obj*);
obj* l_Lean_getExternNameFor___boxed(obj*, obj*, obj*);
extern "C" uint8 lean_name_dec_eq(obj*, obj*);
obj* l_Lean_ExternEntry_backend(obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries(obj*, obj*, obj*);
extern obj* l_Array_empty___closed__1;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3___boxed(obj*, obj*, obj*);
extern obj* l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
obj* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__5(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__5;
obj* l_Lean_addExtern___boxed(obj*, obj*);
extern obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
obj* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(obj*, obj*, obj*);
obj* l_List_intersperse___main___rarg(obj*, obj*);
obj* l_Lean_expandExternEntry(obj*, obj*);
extern obj* l_Lean_AttributeImpl_inhabited___closed__5;
obj* l_Lean_expandExternPattern___boxed(obj*, obj*);
obj* l_List_getOpt___main___rarg(obj*, obj*);
obj* l_List_foldl___main___at_Lean_mkSimpleFnCall___spec__1___boxed(obj*, obj*);
obj* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__7(obj*, obj*);
obj* l_Lean_registerAttribute(obj*, obj*);
obj* l_Lean_mkExternCall___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__5;
obj* l_Lean_mkExternAttr___closed__2;
obj* l_Lean_mkExternCall(obj*, obj*, obj*);
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___closed__1;
obj* l_Lean_mkExternAttr___closed__3;
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10;
obj* l_Lean_Syntax_isNatLitAux___rarg(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__7;
obj* l_String_Iterator_remainingBytes___main(obj*);
extern obj* l_Lean_numLitKind;
obj* l_Lean_mkExternAttr___lambda__1___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__1;
obj* l_Lean_isExtern___boxed(obj*, obj*);
extern obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
obj* l_Lean_Name_toStringWithSep___main(obj*, obj*);
extern obj* l_Lean_Inhabited;
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__7;
obj* l_IO_Prim_Ref_set(obj*, obj*, obj*, obj*);
extern "C" obj* lean_io_initializing(obj*);
obj* l_List_foldl___main___at_Lean_mkSimpleFnCall___spec__1(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_3__parseOptNum___main(obj*, obj*, obj*);
namespace lean {
obj* string_push(obj*, uint32);
}
obj* l_Lean_mkExternAttr___closed__1;
extern obj* l_Lean_registerEnvExtensionUnsafe___at_Lean_registerTagAttribute___spec__6___closed__1;
obj* l_Array_swap(obj*, obj*, obj*, obj*);
extern obj* l_Lean_AttributeImpl_inhabited___closed__4;
obj* l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1;
obj* l_Lean_registerTagAttribute___lambda__5___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_RBNode_find___main___at_Lean_getExternAttrData___spec__2(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___boxed(obj*);
extern obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
obj* l_Lean_PersistentEnvExtension_getState___rarg(obj*, obj*);
obj* l_Lean_ExternEntry_backend___boxed(obj*);
obj* l_Lean_expandExternPatternAux___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___lambda__1(obj*);
obj* l_Lean_expandExternPattern(obj*, obj*);
obj* l_Lean_Environment_getModuleIdxFor(obj*, obj*);
obj* l_String_Iterator_next___main(obj*);
obj* l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___boxed(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* get_extern_attr_data_core(obj*, obj*);
}
uint8 l_Lean_Environment_isConstructor(obj*, obj*);
namespace lean {
obj* string_append(obj*, obj*);
}
uint8 l_UInt32_decLe(uint32, uint32);
extern obj* l_List_reprAux___main___rarg___closed__1;
obj* l_Lean_mkExternAttr___lambda__2(obj*, obj*, obj*);
obj* l_Lean_expandExternPatternAux___main___boxed(obj*, obj*, obj*, obj*);
extern obj* l_Lean_registerParametricAttribute___rarg___closed__2;
extern obj* l_Option_HasRepr___rarg___closed__3;
uint8 l_Lean_isExtern(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__3;
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__8;
namespace lean {
uint8 nat_dec_lt(obj*, obj*);
}
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1(obj*, obj*, obj*, obj*, obj*);
uint8 l_Lean_isExternC(obj*, obj*);
obj* l_Lean_Syntax_isStrLit___rarg(obj*);
extern obj* l_Lean_ParametricAttribute_Inhabited___closed__1;
obj* l_Lean_expandExternPatternAux___main(obj*, obj*, obj*, obj*);
uint8 l_Lean_Environment_isProjectionFn(obj*, obj*);
obj* l_Array_fget(obj*, obj*, obj*);
extern "C" obj* lean_name_mk_string(obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_Lean_PersistentEnvExtension_getModuleEntries___rarg(obj*, obj*, obj*);
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_Array_binSearchAux___main___at_Lean_getExternAttrData___spec__3(obj*, obj*, obj*, obj*);
extern obj* l_Prod_HasRepr___rarg___closed__1;
obj* l_Array_push(obj*, obj*, obj*);
obj* l_Lean_externAttr;
obj* l_Array_binSearchAux___main___at_Lean_getExternAttrData___spec__3___boxed(obj*, obj*, obj*, obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__4;
obj* l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6___boxed(obj*, obj*, obj*);
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l___private_init_lean_compiler_externattr_3__parseOptNum(obj*, obj*, obj*);
uint8 l_UInt32_decEq(uint32, uint32);
obj* l_Lean_registerParametricAttribute___rarg___lambda__4___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_EState_bind___rarg(obj*, obj*, obj*);
obj* l_Lean_getExternEntryFor___boxed(obj*, obj*);
obj* l_Lean_ExternAttrData_inhabited___closed__1;
extern obj* l_System_FilePath_dirName___closed__1;
obj* l_IO_Prim_Ref_get(obj*, obj*, obj*);
obj* l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(obj*, obj*, obj*, obj*, obj*);
uint8 l_Lean_Name_quickLt(obj*, obj*);
uint8 l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6(obj*, obj*, obj*);
obj* l_Lean_mkExternAttr___lambda__2___boxed(obj*, obj*, obj*);
obj* l_Lean_Syntax_isIdOrAtom___rarg(obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__1;
obj* l_Lean_mkExternAttr(obj*);
obj* l_Array_size(obj*, obj*);
obj* l_Lean_getExternEntryForAux(obj*, obj*);
obj* l_Array_get(obj*, obj*, obj*, obj*);
obj* l_Lean_getExternEntryForAux___main___boxed(obj*, obj*);
obj* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1___boxed(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__3;
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__9;
extern obj* l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
uint8 l_String_Iterator_hasNext___main(obj*);
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
obj* l_RBNode_find___main___at_Lean_getExternAttrData___spec__2___boxed(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__8;
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__6;
obj* l_Lean_getExternEntryForAux___main(obj*, obj*);
namespace lean {
obj* nat_div(obj*, obj*);
}
obj* l_Lean_getExternEntryFor(obj*, obj*);
namespace lean {
obj* uint32_to_nat(uint32);
}
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2;
obj* l_Lean_mkExternAttr___closed__5;
obj* l_Lean_mkExternAttr___lambda__1(obj*, obj*, obj*);
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData(obj*);
extern "C" obj* lean_add_extern(obj*, obj*);
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___boxed(obj*, obj*, obj*);
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___lambda__1___boxed(obj*);
extern obj* l___private_init_lean_environment_8__persistentEnvExtensionsRef;
extern obj* l_Lean_mkProjectionFnInfoExtension___closed__3;
obj* l_Lean_mkExternAttr___closed__4;
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__2;
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__6;
namespace lean {
obj* nat_mul(obj*, obj*);
}
obj* l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3(obj*, obj*, obj*);
extern obj* l_Lean_registerTagAttribute___closed__1;
extern obj* l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main(obj*, obj*, obj*);
obj* l_IO_Prim_Ref_reset(obj*, obj*, obj*);
extern obj* l___private_init_lean_environment_5__envExtensionsRef;
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4;
obj* l_Lean_isExternC___boxed(obj*, obj*);
obj* l_Lean_registerTagAttribute___lambda__6___boxed(obj*, obj*, obj*, obj*, obj*);
extern obj* l_String_splitAux___main___closed__1;
obj* l_Lean_ExternAttrData_inhabited;
obj* l_Lean_mkSimpleFnCall(obj*, obj*);
namespace lean {
obj* string_length(obj*);
}
obj* _init_l_Lean_ExternAttrData_inhabited___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = lean::box(0);
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_ExternAttrData_inhabited() {
_start:
{
obj* x_1; 
x_1 = l_Lean_ExternAttrData_inhabited___closed__1;
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("identifier expected");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__1;
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("string literal expected");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__3;
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("adhoc");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("inline");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("string or identifier expected");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__8() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__7;
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_1);
x_5 = lean::nat_dec_eq(x_2, x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; 
x_6 = lean::box(0);
x_7 = lean::array_get(x_6, x_1, x_2);
if (lean::obj_tag(x_7) == 3)
{
obj* x_8; obj* x_9; obj* x_10; uint8 x_11; 
x_8 = lean::cnstr_get(x_7, 2);
lean::inc(x_8);
lean::dec(x_7);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_add(x_2, x_9);
lean::dec(x_2);
x_11 = lean::nat_dec_eq(x_10, x_4);
lean::dec(x_4);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::array_get(x_6, x_1, x_10);
x_13 = l_Lean_Syntax_isIdOrAtom___rarg(x_12);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; 
x_14 = l_Lean_Syntax_isStrLit___rarg(x_12);
lean::dec(x_12);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; 
lean::dec(x_10);
lean::dec(x_8);
lean::dec(x_3);
x_15 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4;
return x_15;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_16 = lean::cnstr_get(x_14, 0);
lean::inc(x_16);
lean::dec(x_14);
x_17 = lean::nat_add(x_10, x_9);
lean::dec(x_10);
x_18 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_18, 0, x_8);
lean::cnstr_set(x_18, 1, x_16);
x_19 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_3);
x_2 = x_17;
x_3 = x_19;
goto _start;
}
}
else
{
obj* x_21; obj* x_22; uint8 x_23; 
x_21 = lean::cnstr_get(x_13, 0);
lean::inc(x_21);
lean::dec(x_13);
x_22 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__5;
x_23 = lean::string_dec_eq(x_21, x_22);
if (x_23 == 0)
{
obj* x_24; uint8 x_25; 
x_24 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__6;
x_25 = lean::string_dec_eq(x_21, x_24);
lean::dec(x_21);
if (x_25 == 0)
{
obj* x_26; 
x_26 = l_Lean_Syntax_isStrLit___rarg(x_12);
lean::dec(x_12);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; 
lean::dec(x_10);
lean::dec(x_8);
lean::dec(x_3);
x_27 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4;
return x_27;
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_28 = lean::cnstr_get(x_26, 0);
lean::inc(x_28);
lean::dec(x_26);
x_29 = lean::nat_add(x_10, x_9);
lean::dec(x_10);
x_30 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_30, 0, x_8);
lean::cnstr_set(x_30, 1, x_28);
x_31 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_31, 0, x_30);
lean::cnstr_set(x_31, 1, x_3);
x_2 = x_29;
x_3 = x_31;
goto _start;
}
}
else
{
obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_12);
x_33 = lean::nat_add(x_10, x_9);
lean::dec(x_10);
x_34 = lean::array_get(x_6, x_1, x_33);
x_35 = l_Lean_Syntax_isStrLit___rarg(x_34);
lean::dec(x_34);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; 
lean::dec(x_33);
lean::dec(x_8);
lean::dec(x_3);
x_36 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4;
return x_36;
}
else
{
obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_37 = lean::cnstr_get(x_35, 0);
lean::inc(x_37);
lean::dec(x_35);
x_38 = lean::nat_add(x_33, x_9);
lean::dec(x_33);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_8);
lean::cnstr_set(x_39, 1, x_37);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_3);
x_2 = x_38;
x_3 = x_40;
goto _start;
}
}
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
lean::dec(x_21);
lean::dec(x_12);
x_42 = lean::nat_add(x_10, x_9);
lean::dec(x_10);
x_43 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_43, 0, x_8);
x_44 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_3);
x_2 = x_42;
x_3 = x_44;
goto _start;
}
}
}
else
{
obj* x_46; 
lean::dec(x_10);
lean::dec(x_8);
lean::dec(x_3);
x_46 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__8;
return x_46;
}
}
else
{
obj* x_47; 
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
x_47 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__2;
return x_47;
}
}
else
{
obj* x_48; 
lean::dec(x_4);
lean::dec(x_2);
x_48 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_48, 0, x_3);
return x_48;
}
}
}
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main(x_1, x_2, x_3);
return x_4;
}
}
obj* l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("all");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2;
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__3;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__5;
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("invalid extern attribute");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__8() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__7;
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__9() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("unexpected kind of argument");
return x_1;
}
}
obj* _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__9;
x_2 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData(obj* x_1) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_2; 
x_2 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__6;
return x_2;
}
case 1:
{
obj* x_3; obj* x_4; obj* x_5; uint8 x_6; 
x_3 = lean::cnstr_get(x_1, 1);
x_4 = lean::array_get_size(x_3);
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_4, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
x_36 = lean::box(0);
x_37 = lean::array_get(x_36, x_3, x_5);
x_38 = l_Lean_numLitKind;
x_39 = l_Lean_Syntax_isNatLitAux___rarg(x_38, x_37);
lean::dec(x_37);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; 
x_40 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_40, 0, x_39);
lean::cnstr_set(x_40, 1, x_5);
x_7 = x_40;
goto block_35;
}
else
{
obj* x_41; obj* x_42; 
x_41 = lean::mk_nat_obj(1u);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_39);
lean::cnstr_set(x_42, 1, x_41);
x_7 = x_42;
goto block_35;
}
block_35:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::cnstr_get(x_7, 1);
lean::inc(x_9);
lean::dec(x_7);
x_10 = lean::box(0);
x_11 = lean::array_get(x_10, x_3, x_9);
x_12 = l_Lean_Syntax_isStrLit___rarg(x_11);
lean::dec(x_11);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_4);
x_13 = lean::box(0);
x_14 = l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main(x_3, x_9, x_13);
if (lean::obj_tag(x_14) == 0)
{
uint8 x_15; 
lean::dec(x_8);
x_15 = !lean::is_exclusive(x_14);
if (x_15 == 0)
{
return x_14;
}
else
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_14, 0);
lean::inc(x_16);
lean::dec(x_14);
x_17 = lean::alloc_cnstr(0, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
}
else
{
uint8 x_18; 
x_18 = !lean::is_exclusive(x_14);
if (x_18 == 0)
{
obj* x_19; obj* x_20; 
x_19 = lean::cnstr_get(x_14, 0);
x_20 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_20, 0, x_8);
lean::cnstr_set(x_20, 1, x_19);
lean::cnstr_set(x_14, 0, x_20);
return x_14;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = lean::cnstr_get(x_14, 0);
lean::inc(x_21);
lean::dec(x_14);
x_22 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_22, 0, x_8);
lean::cnstr_set(x_22, 1, x_21);
x_23 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_23, 0, x_22);
return x_23;
}
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; uint8 x_27; 
x_24 = lean::cnstr_get(x_12, 0);
lean::inc(x_24);
lean::dec(x_12);
x_25 = lean::mk_nat_obj(1u);
x_26 = lean::nat_add(x_9, x_25);
lean::dec(x_9);
x_27 = lean::nat_dec_eq(x_4, x_26);
lean::dec(x_26);
lean::dec(x_4);
if (x_27 == 0)
{
obj* x_28; 
lean::dec(x_24);
lean::dec(x_8);
x_28 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__8;
return x_28;
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
x_29 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2;
x_30 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_30, 0, x_29);
lean::cnstr_set(x_30, 1, x_24);
x_31 = lean::box(0);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_31);
x_33 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_33, 0, x_8);
lean::cnstr_set(x_33, 1, x_32);
x_34 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_34, 0, x_33);
return x_34;
}
}
}
}
else
{
obj* x_43; 
lean::dec(x_4);
x_43 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10;
return x_43;
}
}
default: 
{
obj* x_44; 
x_44 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10;
return x_44;
}
}
}
}
obj* l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_addExtern___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_add_extern(x_1, x_2);
return x_3;
}
}
obj* l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = lean::cnstr_get(x_2, 2);
x_6 = lean::cnstr_get(x_2, 3);
x_7 = l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2(x_1, x_3);
lean::inc(x_5);
lean::inc(x_4);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_5);
x_9 = lean::array_push(x_7, x_8);
x_1 = x_9;
x_2 = x_6;
goto _start;
}
}
}
obj* _init_l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Inhabited;
x_2 = l_Lean_ExternAttrData_inhabited;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; 
x_6 = lean::nat_dec_lt(x_5, x_1);
if (x_6 == 0)
{
obj* x_7; obj* x_8; 
lean::dec(x_5);
x_7 = lean::array_swap(x_3, x_4, x_1);
x_8 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_8, 0, x_4);
lean::cnstr_set(x_8, 1, x_7);
return x_8;
}
else
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; uint8 x_13; 
x_9 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1;
x_10 = lean::array_get(x_9, x_3, x_5);
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
lean::dec(x_10);
x_12 = lean::cnstr_get(x_2, 0);
x_13 = l_Lean_Name_quickLt(x_11, x_12);
lean::dec(x_11);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_add(x_5, x_14);
lean::dec(x_5);
x_5 = x_15;
goto _start;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_17 = lean::array_swap(x_3, x_4, x_5);
x_18 = lean::mk_nat_obj(1u);
x_19 = lean::nat_add(x_4, x_18);
lean::dec(x_4);
x_20 = lean::nat_add(x_5, x_18);
lean::dec(x_5);
x_3 = x_17;
x_4 = x_19;
x_5 = x_20;
goto _start;
}
}
}
}
obj* l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_13; 
x_13 = lean::nat_dec_lt(x_2, x_3);
if (x_13 == 0)
{
lean::dec(x_2);
return x_1;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; uint8 x_47; 
x_14 = lean::nat_add(x_2, x_3);
x_15 = lean::mk_nat_obj(2u);
x_16 = lean::nat_div(x_14, x_15);
lean::dec(x_14);
x_42 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1;
x_43 = lean::array_get(x_42, x_1, x_16);
x_44 = lean::array_get(x_42, x_1, x_2);
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
lean::dec(x_43);
x_46 = lean::cnstr_get(x_44, 0);
lean::inc(x_46);
lean::dec(x_44);
x_47 = l_Lean_Name_quickLt(x_45, x_46);
lean::dec(x_46);
lean::dec(x_45);
if (x_47 == 0)
{
x_17 = x_1;
goto block_41;
}
else
{
obj* x_48; 
x_48 = lean::array_swap(x_1, x_2, x_16);
x_17 = x_48;
goto block_41;
}
block_41:
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; uint8 x_23; 
x_18 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1;
x_19 = lean::array_get(x_18, x_17, x_3);
x_20 = lean::array_get(x_18, x_17, x_2);
x_21 = lean::cnstr_get(x_19, 0);
lean::inc(x_21);
x_22 = lean::cnstr_get(x_20, 0);
lean::inc(x_22);
lean::dec(x_20);
x_23 = l_Lean_Name_quickLt(x_21, x_22);
lean::dec(x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; uint8 x_26; 
x_24 = lean::array_get(x_18, x_17, x_16);
x_25 = lean::cnstr_get(x_24, 0);
lean::inc(x_25);
lean::dec(x_24);
x_26 = l_Lean_Name_quickLt(x_25, x_21);
lean::dec(x_21);
lean::dec(x_25);
if (x_26 == 0)
{
obj* x_27; 
lean::dec(x_16);
lean::inc(x_2, 2);
x_27 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(x_3, x_19, x_17, x_2, x_2);
lean::dec(x_19);
x_4 = x_27;
goto block_12;
}
else
{
obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_19);
x_28 = lean::array_swap(x_17, x_16, x_3);
lean::dec(x_16);
x_29 = lean::array_get(x_18, x_28, x_3);
lean::inc(x_2, 2);
x_30 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(x_3, x_29, x_28, x_2, x_2);
lean::dec(x_29);
x_4 = x_30;
goto block_12;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; obj* x_35; uint8 x_36; 
lean::dec(x_21);
lean::dec(x_19);
x_31 = lean::array_swap(x_17, x_2, x_3);
x_32 = lean::array_get(x_18, x_31, x_16);
x_33 = lean::array_get(x_18, x_31, x_3);
x_34 = lean::cnstr_get(x_32, 0);
lean::inc(x_34);
lean::dec(x_32);
x_35 = lean::cnstr_get(x_33, 0);
lean::inc(x_35);
x_36 = l_Lean_Name_quickLt(x_34, x_35);
lean::dec(x_35);
lean::dec(x_34);
if (x_36 == 0)
{
obj* x_37; 
lean::dec(x_16);
lean::inc(x_2, 2);
x_37 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(x_3, x_33, x_31, x_2, x_2);
lean::dec(x_33);
x_4 = x_37;
goto block_12;
}
else
{
obj* x_38; obj* x_39; obj* x_40; 
lean::dec(x_33);
x_38 = lean::array_swap(x_31, x_16, x_3);
lean::dec(x_16);
x_39 = lean::array_get(x_18, x_38, x_3);
lean::inc(x_2, 2);
x_40 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(x_3, x_39, x_38, x_2, x_2);
lean::dec(x_39);
x_4 = x_40;
goto block_12;
}
}
}
}
block_12:
{
obj* x_5; obj* x_6; uint8 x_7; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_4, 1);
lean::inc(x_6);
lean::dec(x_4);
x_7 = lean::nat_dec_le(x_3, x_5);
if (x_7 == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3(x_6, x_2, x_5);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_add(x_5, x_9);
lean::dec(x_5);
x_1 = x_8;
x_2 = x_10;
goto _start;
}
else
{
lean::dec(x_5);
lean::dec(x_2);
return x_6;
}
}
}
}
uint8 l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::array_get_size(x_2);
x_5 = lean::nat_dec_lt(x_3, x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
lean::dec(x_3);
x_6 = 0;
return x_6;
}
else
{
obj* x_7; obj* x_8; obj* x_9; uint8 x_10; 
x_7 = lean::array_fget(x_2, x_3);
x_8 = lean::cnstr_get(x_7, 1);
lean::inc(x_8);
lean::dec(x_7);
x_9 = lean::cnstr_get(x_1, 0);
x_10 = lean_name_dec_eq(x_8, x_9);
lean::dec(x_8);
if (x_10 == 0)
{
obj* x_11; obj* x_12; 
x_11 = lean::mk_nat_obj(1u);
x_12 = lean::nat_add(x_3, x_11);
lean::dec(x_3);
x_3 = x_12;
goto _start;
}
else
{
lean::dec(x_3);
return x_10;
}
}
}
}
obj* l_Lean_registerEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__7(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = lean_io_initializing(x_2);
if (lean::obj_tag(x_3) == 0)
{
obj* x_4; uint8 x_5; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::unbox(x_4);
lean::dec(x_4);
if (x_5 == 0)
{
uint8 x_6; 
lean::dec(x_1);
x_6 = !lean::is_exclusive(x_3);
if (x_6 == 0)
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_3, 0);
lean::dec(x_7);
x_8 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
lean::cnstr_set_tag(x_3, 1);
lean::cnstr_set(x_3, 0, x_8);
return x_3;
}
else
{
obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_3, 1);
lean::inc(x_9);
lean::dec(x_3);
x_10 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__1;
x_11 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_11, 0, x_10);
lean::cnstr_set(x_11, 1, x_9);
return x_11;
}
}
else
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_3);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = lean::cnstr_get(x_3, 0);
lean::dec(x_13);
x_14 = lean::box(0);
lean::cnstr_set(x_3, 0, x_14);
x_15 = l___private_init_lean_environment_5__envExtensionsRef;
x_16 = lean::io_ref_get(x_15, x_3);
if (lean::obj_tag(x_16) == 0)
{
uint8 x_17; 
x_17 = !lean::is_exclusive(x_16);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_18 = lean::cnstr_get(x_16, 0);
lean::cnstr_set(x_16, 0, x_14);
x_19 = lean::array_get_size(x_18);
lean::dec(x_18);
x_20 = l_Lean_registerEnvExtensionUnsafe___at_Lean_registerTagAttribute___spec__6___closed__1;
x_21 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_1);
lean::cnstr_set(x_21, 2, x_20);
x_22 = lean::io_ref_get(x_15, x_16);
if (lean::obj_tag(x_22) == 0)
{
uint8 x_23; 
x_23 = !lean::is_exclusive(x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_22, 0);
lean::cnstr_set(x_22, 0, x_14);
x_25 = lean::io_ref_reset(x_15, x_22);
if (lean::obj_tag(x_25) == 0)
{
uint8 x_26; 
x_26 = !lean::is_exclusive(x_25);
if (x_26 == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
x_27 = lean::cnstr_get(x_25, 0);
lean::dec(x_27);
lean::cnstr_set(x_25, 0, x_14);
x_28 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_21);
x_29 = x_21;
x_30 = lean::array_push(x_24, x_29);
x_31 = lean::io_ref_set(x_15, x_30, x_25);
if (lean::obj_tag(x_31) == 0)
{
uint8 x_32; 
x_32 = !lean::is_exclusive(x_31);
if (x_32 == 0)
{
obj* x_33; 
x_33 = lean::cnstr_get(x_31, 0);
lean::dec(x_33);
lean::cnstr_set(x_31, 0, x_21);
return x_31;
}
else
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_31, 1);
lean::inc(x_34);
lean::dec(x_31);
x_35 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_35, 0, x_21);
lean::cnstr_set(x_35, 1, x_34);
return x_35;
}
}
else
{
uint8 x_36; 
lean::dec(x_21);
x_36 = !lean::is_exclusive(x_31);
if (x_36 == 0)
{
return x_31;
}
else
{
obj* x_37; obj* x_38; obj* x_39; 
x_37 = lean::cnstr_get(x_31, 0);
x_38 = lean::cnstr_get(x_31, 1);
lean::inc(x_38);
lean::inc(x_37);
lean::dec(x_31);
x_39 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_39, 0, x_37);
lean::cnstr_set(x_39, 1, x_38);
return x_39;
}
}
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_40 = lean::cnstr_get(x_25, 1);
lean::inc(x_40);
lean::dec(x_25);
x_41 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_41, 0, x_14);
lean::cnstr_set(x_41, 1, x_40);
x_42 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_21);
x_43 = x_21;
x_44 = lean::array_push(x_24, x_43);
x_45 = lean::io_ref_set(x_15, x_44, x_41);
if (lean::obj_tag(x_45) == 0)
{
obj* x_46; obj* x_47; obj* x_48; 
x_46 = lean::cnstr_get(x_45, 1);
lean::inc(x_46);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 lean::cnstr_release(x_45, 1);
 x_47 = x_45;
} else {
 lean::dec_ref(x_45);
 x_47 = lean::box(0);
}
if (lean::is_scalar(x_47)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_47;
}
lean::cnstr_set(x_48, 0, x_21);
lean::cnstr_set(x_48, 1, x_46);
return x_48;
}
else
{
obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::dec(x_21);
x_49 = lean::cnstr_get(x_45, 0);
lean::inc(x_49);
x_50 = lean::cnstr_get(x_45, 1);
lean::inc(x_50);
if (lean::is_exclusive(x_45)) {
 lean::cnstr_release(x_45, 0);
 lean::cnstr_release(x_45, 1);
 x_51 = x_45;
} else {
 lean::dec_ref(x_45);
 x_51 = lean::box(0);
}
if (lean::is_scalar(x_51)) {
 x_52 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_52 = x_51;
}
lean::cnstr_set(x_52, 0, x_49);
lean::cnstr_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8 x_53; 
lean::dec(x_24);
lean::dec(x_21);
x_53 = !lean::is_exclusive(x_25);
if (x_53 == 0)
{
return x_25;
}
else
{
obj* x_54; obj* x_55; obj* x_56; 
x_54 = lean::cnstr_get(x_25, 0);
x_55 = lean::cnstr_get(x_25, 1);
lean::inc(x_55);
lean::inc(x_54);
lean::dec(x_25);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_54);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
}
}
else
{
obj* x_57; obj* x_58; obj* x_59; obj* x_60; 
x_57 = lean::cnstr_get(x_22, 0);
x_58 = lean::cnstr_get(x_22, 1);
lean::inc(x_58);
lean::inc(x_57);
lean::dec(x_22);
x_59 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_59, 0, x_14);
lean::cnstr_set(x_59, 1, x_58);
x_60 = lean::io_ref_reset(x_15, x_59);
if (lean::obj_tag(x_60) == 0)
{
obj* x_61; obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_61 = lean::cnstr_get(x_60, 1);
lean::inc(x_61);
if (lean::is_exclusive(x_60)) {
 lean::cnstr_release(x_60, 0);
 lean::cnstr_release(x_60, 1);
 x_62 = x_60;
} else {
 lean::dec_ref(x_60);
 x_62 = lean::box(0);
}
if (lean::is_scalar(x_62)) {
 x_63 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_63 = x_62;
}
lean::cnstr_set(x_63, 0, x_14);
lean::cnstr_set(x_63, 1, x_61);
x_64 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_21);
x_65 = x_21;
x_66 = lean::array_push(x_57, x_65);
x_67 = lean::io_ref_set(x_15, x_66, x_63);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; obj* x_70; 
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_69 = x_67;
} else {
 lean::dec_ref(x_67);
 x_69 = lean::box(0);
}
if (lean::is_scalar(x_69)) {
 x_70 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_70 = x_69;
}
lean::cnstr_set(x_70, 0, x_21);
lean::cnstr_set(x_70, 1, x_68);
return x_70;
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
lean::dec(x_21);
x_71 = lean::cnstr_get(x_67, 0);
lean::inc(x_71);
x_72 = lean::cnstr_get(x_67, 1);
lean::inc(x_72);
if (lean::is_exclusive(x_67)) {
 lean::cnstr_release(x_67, 0);
 lean::cnstr_release(x_67, 1);
 x_73 = x_67;
} else {
 lean::dec_ref(x_67);
 x_73 = lean::box(0);
}
if (lean::is_scalar(x_73)) {
 x_74 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_74 = x_73;
}
lean::cnstr_set(x_74, 0, x_71);
lean::cnstr_set(x_74, 1, x_72);
return x_74;
}
}
else
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_57);
lean::dec(x_21);
x_75 = lean::cnstr_get(x_60, 0);
lean::inc(x_75);
x_76 = lean::cnstr_get(x_60, 1);
lean::inc(x_76);
if (lean::is_exclusive(x_60)) {
 lean::cnstr_release(x_60, 0);
 lean::cnstr_release(x_60, 1);
 x_77 = x_60;
} else {
 lean::dec_ref(x_60);
 x_77 = lean::box(0);
}
if (lean::is_scalar(x_77)) {
 x_78 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_78 = x_77;
}
lean::cnstr_set(x_78, 0, x_75);
lean::cnstr_set(x_78, 1, x_76);
return x_78;
}
}
}
else
{
uint8 x_79; 
lean::dec(x_21);
x_79 = !lean::is_exclusive(x_22);
if (x_79 == 0)
{
return x_22;
}
else
{
obj* x_80; obj* x_81; obj* x_82; 
x_80 = lean::cnstr_get(x_22, 0);
x_81 = lean::cnstr_get(x_22, 1);
lean::inc(x_81);
lean::inc(x_80);
lean::dec(x_22);
x_82 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_82, 0, x_80);
lean::cnstr_set(x_82, 1, x_81);
return x_82;
}
}
}
else
{
obj* x_83; obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
x_83 = lean::cnstr_get(x_16, 0);
x_84 = lean::cnstr_get(x_16, 1);
lean::inc(x_84);
lean::inc(x_83);
lean::dec(x_16);
x_85 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_85, 0, x_14);
lean::cnstr_set(x_85, 1, x_84);
x_86 = lean::array_get_size(x_83);
lean::dec(x_83);
x_87 = l_Lean_registerEnvExtensionUnsafe___at_Lean_registerTagAttribute___spec__6___closed__1;
x_88 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_88, 0, x_86);
lean::cnstr_set(x_88, 1, x_1);
lean::cnstr_set(x_88, 2, x_87);
x_89 = lean::io_ref_get(x_15, x_85);
if (lean::obj_tag(x_89) == 0)
{
obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
x_90 = lean::cnstr_get(x_89, 0);
lean::inc(x_90);
x_91 = lean::cnstr_get(x_89, 1);
lean::inc(x_91);
if (lean::is_exclusive(x_89)) {
 lean::cnstr_release(x_89, 0);
 lean::cnstr_release(x_89, 1);
 x_92 = x_89;
} else {
 lean::dec_ref(x_89);
 x_92 = lean::box(0);
}
if (lean::is_scalar(x_92)) {
 x_93 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_93 = x_92;
}
lean::cnstr_set(x_93, 0, x_14);
lean::cnstr_set(x_93, 1, x_91);
x_94 = lean::io_ref_reset(x_15, x_93);
if (lean::obj_tag(x_94) == 0)
{
obj* x_95; obj* x_96; obj* x_97; obj* x_98; obj* x_99; obj* x_100; obj* x_101; 
x_95 = lean::cnstr_get(x_94, 1);
lean::inc(x_95);
if (lean::is_exclusive(x_94)) {
 lean::cnstr_release(x_94, 0);
 lean::cnstr_release(x_94, 1);
 x_96 = x_94;
} else {
 lean::dec_ref(x_94);
 x_96 = lean::box(0);
}
if (lean::is_scalar(x_96)) {
 x_97 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_97 = x_96;
}
lean::cnstr_set(x_97, 0, x_14);
lean::cnstr_set(x_97, 1, x_95);
x_98 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_88);
x_99 = x_88;
x_100 = lean::array_push(x_90, x_99);
x_101 = lean::io_ref_set(x_15, x_100, x_97);
if (lean::obj_tag(x_101) == 0)
{
obj* x_102; obj* x_103; obj* x_104; 
x_102 = lean::cnstr_get(x_101, 1);
lean::inc(x_102);
if (lean::is_exclusive(x_101)) {
 lean::cnstr_release(x_101, 0);
 lean::cnstr_release(x_101, 1);
 x_103 = x_101;
} else {
 lean::dec_ref(x_101);
 x_103 = lean::box(0);
}
if (lean::is_scalar(x_103)) {
 x_104 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_104 = x_103;
}
lean::cnstr_set(x_104, 0, x_88);
lean::cnstr_set(x_104, 1, x_102);
return x_104;
}
else
{
obj* x_105; obj* x_106; obj* x_107; obj* x_108; 
lean::dec(x_88);
x_105 = lean::cnstr_get(x_101, 0);
lean::inc(x_105);
x_106 = lean::cnstr_get(x_101, 1);
lean::inc(x_106);
if (lean::is_exclusive(x_101)) {
 lean::cnstr_release(x_101, 0);
 lean::cnstr_release(x_101, 1);
 x_107 = x_101;
} else {
 lean::dec_ref(x_101);
 x_107 = lean::box(0);
}
if (lean::is_scalar(x_107)) {
 x_108 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_108 = x_107;
}
lean::cnstr_set(x_108, 0, x_105);
lean::cnstr_set(x_108, 1, x_106);
return x_108;
}
}
else
{
obj* x_109; obj* x_110; obj* x_111; obj* x_112; 
lean::dec(x_90);
lean::dec(x_88);
x_109 = lean::cnstr_get(x_94, 0);
lean::inc(x_109);
x_110 = lean::cnstr_get(x_94, 1);
lean::inc(x_110);
if (lean::is_exclusive(x_94)) {
 lean::cnstr_release(x_94, 0);
 lean::cnstr_release(x_94, 1);
 x_111 = x_94;
} else {
 lean::dec_ref(x_94);
 x_111 = lean::box(0);
}
if (lean::is_scalar(x_111)) {
 x_112 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_112 = x_111;
}
lean::cnstr_set(x_112, 0, x_109);
lean::cnstr_set(x_112, 1, x_110);
return x_112;
}
}
else
{
obj* x_113; obj* x_114; obj* x_115; obj* x_116; 
lean::dec(x_88);
x_113 = lean::cnstr_get(x_89, 0);
lean::inc(x_113);
x_114 = lean::cnstr_get(x_89, 1);
lean::inc(x_114);
if (lean::is_exclusive(x_89)) {
 lean::cnstr_release(x_89, 0);
 lean::cnstr_release(x_89, 1);
 x_115 = x_89;
} else {
 lean::dec_ref(x_89);
 x_115 = lean::box(0);
}
if (lean::is_scalar(x_115)) {
 x_116 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_116 = x_115;
}
lean::cnstr_set(x_116, 0, x_113);
lean::cnstr_set(x_116, 1, x_114);
return x_116;
}
}
}
else
{
uint8 x_117; 
lean::dec(x_1);
x_117 = !lean::is_exclusive(x_16);
if (x_117 == 0)
{
return x_16;
}
else
{
obj* x_118; obj* x_119; obj* x_120; 
x_118 = lean::cnstr_get(x_16, 0);
x_119 = lean::cnstr_get(x_16, 1);
lean::inc(x_119);
lean::inc(x_118);
lean::dec(x_16);
x_120 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_120, 0, x_118);
lean::cnstr_set(x_120, 1, x_119);
return x_120;
}
}
}
else
{
obj* x_121; obj* x_122; obj* x_123; obj* x_124; obj* x_125; 
x_121 = lean::cnstr_get(x_3, 1);
lean::inc(x_121);
lean::dec(x_3);
x_122 = lean::box(0);
x_123 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_123, 0, x_122);
lean::cnstr_set(x_123, 1, x_121);
x_124 = l___private_init_lean_environment_5__envExtensionsRef;
x_125 = lean::io_ref_get(x_124, x_123);
if (lean::obj_tag(x_125) == 0)
{
obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; obj* x_131; obj* x_132; obj* x_133; 
x_126 = lean::cnstr_get(x_125, 0);
lean::inc(x_126);
x_127 = lean::cnstr_get(x_125, 1);
lean::inc(x_127);
if (lean::is_exclusive(x_125)) {
 lean::cnstr_release(x_125, 0);
 lean::cnstr_release(x_125, 1);
 x_128 = x_125;
} else {
 lean::dec_ref(x_125);
 x_128 = lean::box(0);
}
if (lean::is_scalar(x_128)) {
 x_129 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_129 = x_128;
}
lean::cnstr_set(x_129, 0, x_122);
lean::cnstr_set(x_129, 1, x_127);
x_130 = lean::array_get_size(x_126);
lean::dec(x_126);
x_131 = l_Lean_registerEnvExtensionUnsafe___at_Lean_registerTagAttribute___spec__6___closed__1;
x_132 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_132, 0, x_130);
lean::cnstr_set(x_132, 1, x_1);
lean::cnstr_set(x_132, 2, x_131);
x_133 = lean::io_ref_get(x_124, x_129);
if (lean::obj_tag(x_133) == 0)
{
obj* x_134; obj* x_135; obj* x_136; obj* x_137; obj* x_138; 
x_134 = lean::cnstr_get(x_133, 0);
lean::inc(x_134);
x_135 = lean::cnstr_get(x_133, 1);
lean::inc(x_135);
if (lean::is_exclusive(x_133)) {
 lean::cnstr_release(x_133, 0);
 lean::cnstr_release(x_133, 1);
 x_136 = x_133;
} else {
 lean::dec_ref(x_133);
 x_136 = lean::box(0);
}
if (lean::is_scalar(x_136)) {
 x_137 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_137 = x_136;
}
lean::cnstr_set(x_137, 0, x_122);
lean::cnstr_set(x_137, 1, x_135);
x_138 = lean::io_ref_reset(x_124, x_137);
if (lean::obj_tag(x_138) == 0)
{
obj* x_139; obj* x_140; obj* x_141; obj* x_142; obj* x_143; obj* x_144; obj* x_145; 
x_139 = lean::cnstr_get(x_138, 1);
lean::inc(x_139);
if (lean::is_exclusive(x_138)) {
 lean::cnstr_release(x_138, 0);
 lean::cnstr_release(x_138, 1);
 x_140 = x_138;
} else {
 lean::dec_ref(x_138);
 x_140 = lean::box(0);
}
if (lean::is_scalar(x_140)) {
 x_141 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_141 = x_140;
}
lean::cnstr_set(x_141, 0, x_122);
lean::cnstr_set(x_141, 1, x_139);
x_142 = l_Lean_registerEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_132);
x_143 = x_132;
x_144 = lean::array_push(x_134, x_143);
x_145 = lean::io_ref_set(x_124, x_144, x_141);
if (lean::obj_tag(x_145) == 0)
{
obj* x_146; obj* x_147; obj* x_148; 
x_146 = lean::cnstr_get(x_145, 1);
lean::inc(x_146);
if (lean::is_exclusive(x_145)) {
 lean::cnstr_release(x_145, 0);
 lean::cnstr_release(x_145, 1);
 x_147 = x_145;
} else {
 lean::dec_ref(x_145);
 x_147 = lean::box(0);
}
if (lean::is_scalar(x_147)) {
 x_148 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_148 = x_147;
}
lean::cnstr_set(x_148, 0, x_132);
lean::cnstr_set(x_148, 1, x_146);
return x_148;
}
else
{
obj* x_149; obj* x_150; obj* x_151; obj* x_152; 
lean::dec(x_132);
x_149 = lean::cnstr_get(x_145, 0);
lean::inc(x_149);
x_150 = lean::cnstr_get(x_145, 1);
lean::inc(x_150);
if (lean::is_exclusive(x_145)) {
 lean::cnstr_release(x_145, 0);
 lean::cnstr_release(x_145, 1);
 x_151 = x_145;
} else {
 lean::dec_ref(x_145);
 x_151 = lean::box(0);
}
if (lean::is_scalar(x_151)) {
 x_152 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_152 = x_151;
}
lean::cnstr_set(x_152, 0, x_149);
lean::cnstr_set(x_152, 1, x_150);
return x_152;
}
}
else
{
obj* x_153; obj* x_154; obj* x_155; obj* x_156; 
lean::dec(x_134);
lean::dec(x_132);
x_153 = lean::cnstr_get(x_138, 0);
lean::inc(x_153);
x_154 = lean::cnstr_get(x_138, 1);
lean::inc(x_154);
if (lean::is_exclusive(x_138)) {
 lean::cnstr_release(x_138, 0);
 lean::cnstr_release(x_138, 1);
 x_155 = x_138;
} else {
 lean::dec_ref(x_138);
 x_155 = lean::box(0);
}
if (lean::is_scalar(x_155)) {
 x_156 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_156 = x_155;
}
lean::cnstr_set(x_156, 0, x_153);
lean::cnstr_set(x_156, 1, x_154);
return x_156;
}
}
else
{
obj* x_157; obj* x_158; obj* x_159; obj* x_160; 
lean::dec(x_132);
x_157 = lean::cnstr_get(x_133, 0);
lean::inc(x_157);
x_158 = lean::cnstr_get(x_133, 1);
lean::inc(x_158);
if (lean::is_exclusive(x_133)) {
 lean::cnstr_release(x_133, 0);
 lean::cnstr_release(x_133, 1);
 x_159 = x_133;
} else {
 lean::dec_ref(x_133);
 x_159 = lean::box(0);
}
if (lean::is_scalar(x_159)) {
 x_160 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_160 = x_159;
}
lean::cnstr_set(x_160, 0, x_157);
lean::cnstr_set(x_160, 1, x_158);
return x_160;
}
}
else
{
obj* x_161; obj* x_162; obj* x_163; obj* x_164; 
lean::dec(x_1);
x_161 = lean::cnstr_get(x_125, 0);
lean::inc(x_161);
x_162 = lean::cnstr_get(x_125, 1);
lean::inc(x_162);
if (lean::is_exclusive(x_125)) {
 lean::cnstr_release(x_125, 0);
 lean::cnstr_release(x_125, 1);
 x_163 = x_125;
} else {
 lean::dec_ref(x_125);
 x_163 = lean::box(0);
}
if (lean::is_scalar(x_163)) {
 x_164 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_164 = x_163;
}
lean::cnstr_set(x_164, 0, x_161);
lean::cnstr_set(x_164, 1, x_162);
return x_164;
}
}
}
}
else
{
uint8 x_165; 
lean::dec(x_1);
x_165 = !lean::is_exclusive(x_3);
if (x_165 == 0)
{
return x_3;
}
else
{
obj* x_166; obj* x_167; obj* x_168; 
x_166 = lean::cnstr_get(x_3, 0);
x_167 = lean::cnstr_get(x_3, 1);
lean::inc(x_167);
lean::inc(x_166);
lean::dec(x_3);
x_168 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_168, 0, x_166);
lean::cnstr_set(x_168, 1, x_167);
return x_168;
}
}
}
}
obj* l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__5(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l___private_init_lean_environment_8__persistentEnvExtensionsRef;
x_4 = lean::io_ref_get(x_3, x_2);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = !lean::is_exclusive(x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; uint8 x_8; 
x_6 = lean::cnstr_get(x_4, 0);
x_7 = lean::mk_nat_obj(0u);
x_8 = l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6(x_1, x_6, x_7);
lean::dec(x_6);
if (x_8 == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_9 = lean::box(0);
lean::cnstr_set(x_4, 0, x_9);
x_10 = lean::cnstr_get(x_1, 1);
lean::inc(x_10);
x_11 = l_Array_empty___closed__1;
lean::inc(x_10);
x_12 = lean::apply_1(x_10, x_11);
x_13 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_bind___rarg), 3, 2);
lean::closure_set(x_14, 0, x_12);
lean::closure_set(x_14, 1, x_13);
x_15 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__7(x_14, x_4);
if (lean::obj_tag(x_15) == 0)
{
uint8 x_16; 
x_16 = !lean::is_exclusive(x_15);
if (x_16 == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_17 = lean::cnstr_get(x_15, 0);
lean::cnstr_set(x_15, 0, x_9);
x_18 = lean::cnstr_get(x_1, 0);
lean::inc(x_18);
x_19 = lean::cnstr_get(x_1, 2);
lean::inc(x_19);
x_20 = lean::cnstr_get(x_1, 3);
lean::inc(x_20);
x_21 = lean::cnstr_get(x_1, 4);
lean::inc(x_21);
lean::dec(x_1);
x_22 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_22, 0, x_17);
lean::cnstr_set(x_22, 1, x_18);
lean::cnstr_set(x_22, 2, x_10);
lean::cnstr_set(x_22, 3, x_19);
lean::cnstr_set(x_22, 4, x_20);
lean::cnstr_set(x_22, 5, x_21);
x_23 = lean::io_ref_get(x_3, x_15);
if (lean::obj_tag(x_23) == 0)
{
uint8 x_24; 
x_24 = !lean::is_exclusive(x_23);
if (x_24 == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::cnstr_get(x_23, 0);
lean::cnstr_set(x_23, 0, x_9);
x_26 = lean::io_ref_reset(x_3, x_23);
if (lean::obj_tag(x_26) == 0)
{
uint8 x_27; 
x_27 = !lean::is_exclusive(x_26);
if (x_27 == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
x_28 = lean::cnstr_get(x_26, 0);
lean::dec(x_28);
lean::cnstr_set(x_26, 0, x_9);
x_29 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_22);
x_30 = x_22;
x_31 = lean::array_push(x_25, x_30);
x_32 = lean::io_ref_set(x_3, x_31, x_26);
if (lean::obj_tag(x_32) == 0)
{
uint8 x_33; 
x_33 = !lean::is_exclusive(x_32);
if (x_33 == 0)
{
obj* x_34; 
x_34 = lean::cnstr_get(x_32, 0);
lean::dec(x_34);
lean::cnstr_set(x_32, 0, x_22);
return x_32;
}
else
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_32, 1);
lean::inc(x_35);
lean::dec(x_32);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_22);
lean::cnstr_set(x_36, 1, x_35);
return x_36;
}
}
else
{
uint8 x_37; 
lean::dec(x_22);
x_37 = !lean::is_exclusive(x_32);
if (x_37 == 0)
{
return x_32;
}
else
{
obj* x_38; obj* x_39; obj* x_40; 
x_38 = lean::cnstr_get(x_32, 0);
x_39 = lean::cnstr_get(x_32, 1);
lean::inc(x_39);
lean::inc(x_38);
lean::dec(x_32);
x_40 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_40, 0, x_38);
lean::cnstr_set(x_40, 1, x_39);
return x_40;
}
}
}
else
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_41 = lean::cnstr_get(x_26, 1);
lean::inc(x_41);
lean::dec(x_26);
x_42 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_42, 0, x_9);
lean::cnstr_set(x_42, 1, x_41);
x_43 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_22);
x_44 = x_22;
x_45 = lean::array_push(x_25, x_44);
x_46 = lean::io_ref_set(x_3, x_45, x_42);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_48; obj* x_49; 
x_47 = lean::cnstr_get(x_46, 1);
lean::inc(x_47);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 lean::cnstr_release(x_46, 1);
 x_48 = x_46;
} else {
 lean::dec_ref(x_46);
 x_48 = lean::box(0);
}
if (lean::is_scalar(x_48)) {
 x_49 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_49 = x_48;
}
lean::cnstr_set(x_49, 0, x_22);
lean::cnstr_set(x_49, 1, x_47);
return x_49;
}
else
{
obj* x_50; obj* x_51; obj* x_52; obj* x_53; 
lean::dec(x_22);
x_50 = lean::cnstr_get(x_46, 0);
lean::inc(x_50);
x_51 = lean::cnstr_get(x_46, 1);
lean::inc(x_51);
if (lean::is_exclusive(x_46)) {
 lean::cnstr_release(x_46, 0);
 lean::cnstr_release(x_46, 1);
 x_52 = x_46;
} else {
 lean::dec_ref(x_46);
 x_52 = lean::box(0);
}
if (lean::is_scalar(x_52)) {
 x_53 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_53 = x_52;
}
lean::cnstr_set(x_53, 0, x_50);
lean::cnstr_set(x_53, 1, x_51);
return x_53;
}
}
}
else
{
uint8 x_54; 
lean::dec(x_25);
lean::dec(x_22);
x_54 = !lean::is_exclusive(x_26);
if (x_54 == 0)
{
return x_26;
}
else
{
obj* x_55; obj* x_56; obj* x_57; 
x_55 = lean::cnstr_get(x_26, 0);
x_56 = lean::cnstr_get(x_26, 1);
lean::inc(x_56);
lean::inc(x_55);
lean::dec(x_26);
x_57 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_57, 0, x_55);
lean::cnstr_set(x_57, 1, x_56);
return x_57;
}
}
}
else
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; 
x_58 = lean::cnstr_get(x_23, 0);
x_59 = lean::cnstr_get(x_23, 1);
lean::inc(x_59);
lean::inc(x_58);
lean::dec(x_23);
x_60 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_60, 0, x_9);
lean::cnstr_set(x_60, 1, x_59);
x_61 = lean::io_ref_reset(x_3, x_60);
if (lean::obj_tag(x_61) == 0)
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_66; obj* x_67; obj* x_68; 
x_62 = lean::cnstr_get(x_61, 1);
lean::inc(x_62);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_63 = x_61;
} else {
 lean::dec_ref(x_61);
 x_63 = lean::box(0);
}
if (lean::is_scalar(x_63)) {
 x_64 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_64 = x_63;
}
lean::cnstr_set(x_64, 0, x_9);
lean::cnstr_set(x_64, 1, x_62);
x_65 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_22);
x_66 = x_22;
x_67 = lean::array_push(x_58, x_66);
x_68 = lean::io_ref_set(x_3, x_67, x_64);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_70; obj* x_71; 
x_69 = lean::cnstr_get(x_68, 1);
lean::inc(x_69);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 lean::cnstr_release(x_68, 1);
 x_70 = x_68;
} else {
 lean::dec_ref(x_68);
 x_70 = lean::box(0);
}
if (lean::is_scalar(x_70)) {
 x_71 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_71 = x_70;
}
lean::cnstr_set(x_71, 0, x_22);
lean::cnstr_set(x_71, 1, x_69);
return x_71;
}
else
{
obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_22);
x_72 = lean::cnstr_get(x_68, 0);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_68, 1);
lean::inc(x_73);
if (lean::is_exclusive(x_68)) {
 lean::cnstr_release(x_68, 0);
 lean::cnstr_release(x_68, 1);
 x_74 = x_68;
} else {
 lean::dec_ref(x_68);
 x_74 = lean::box(0);
}
if (lean::is_scalar(x_74)) {
 x_75 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_75 = x_74;
}
lean::cnstr_set(x_75, 0, x_72);
lean::cnstr_set(x_75, 1, x_73);
return x_75;
}
}
else
{
obj* x_76; obj* x_77; obj* x_78; obj* x_79; 
lean::dec(x_58);
lean::dec(x_22);
x_76 = lean::cnstr_get(x_61, 0);
lean::inc(x_76);
x_77 = lean::cnstr_get(x_61, 1);
lean::inc(x_77);
if (lean::is_exclusive(x_61)) {
 lean::cnstr_release(x_61, 0);
 lean::cnstr_release(x_61, 1);
 x_78 = x_61;
} else {
 lean::dec_ref(x_61);
 x_78 = lean::box(0);
}
if (lean::is_scalar(x_78)) {
 x_79 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_79 = x_78;
}
lean::cnstr_set(x_79, 0, x_76);
lean::cnstr_set(x_79, 1, x_77);
return x_79;
}
}
}
else
{
uint8 x_80; 
lean::dec(x_22);
x_80 = !lean::is_exclusive(x_23);
if (x_80 == 0)
{
return x_23;
}
else
{
obj* x_81; obj* x_82; obj* x_83; 
x_81 = lean::cnstr_get(x_23, 0);
x_82 = lean::cnstr_get(x_23, 1);
lean::inc(x_82);
lean::inc(x_81);
lean::dec(x_23);
x_83 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_83, 0, x_81);
lean::cnstr_set(x_83, 1, x_82);
return x_83;
}
}
}
else
{
obj* x_84; obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; obj* x_90; obj* x_91; obj* x_92; 
x_84 = lean::cnstr_get(x_15, 0);
x_85 = lean::cnstr_get(x_15, 1);
lean::inc(x_85);
lean::inc(x_84);
lean::dec(x_15);
x_86 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_86, 0, x_9);
lean::cnstr_set(x_86, 1, x_85);
x_87 = lean::cnstr_get(x_1, 0);
lean::inc(x_87);
x_88 = lean::cnstr_get(x_1, 2);
lean::inc(x_88);
x_89 = lean::cnstr_get(x_1, 3);
lean::inc(x_89);
x_90 = lean::cnstr_get(x_1, 4);
lean::inc(x_90);
lean::dec(x_1);
x_91 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_91, 0, x_84);
lean::cnstr_set(x_91, 1, x_87);
lean::cnstr_set(x_91, 2, x_10);
lean::cnstr_set(x_91, 3, x_88);
lean::cnstr_set(x_91, 4, x_89);
lean::cnstr_set(x_91, 5, x_90);
x_92 = lean::io_ref_get(x_3, x_86);
if (lean::obj_tag(x_92) == 0)
{
obj* x_93; obj* x_94; obj* x_95; obj* x_96; obj* x_97; 
x_93 = lean::cnstr_get(x_92, 0);
lean::inc(x_93);
x_94 = lean::cnstr_get(x_92, 1);
lean::inc(x_94);
if (lean::is_exclusive(x_92)) {
 lean::cnstr_release(x_92, 0);
 lean::cnstr_release(x_92, 1);
 x_95 = x_92;
} else {
 lean::dec_ref(x_92);
 x_95 = lean::box(0);
}
if (lean::is_scalar(x_95)) {
 x_96 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_96 = x_95;
}
lean::cnstr_set(x_96, 0, x_9);
lean::cnstr_set(x_96, 1, x_94);
x_97 = lean::io_ref_reset(x_3, x_96);
if (lean::obj_tag(x_97) == 0)
{
obj* x_98; obj* x_99; obj* x_100; obj* x_101; obj* x_102; obj* x_103; obj* x_104; 
x_98 = lean::cnstr_get(x_97, 1);
lean::inc(x_98);
if (lean::is_exclusive(x_97)) {
 lean::cnstr_release(x_97, 0);
 lean::cnstr_release(x_97, 1);
 x_99 = x_97;
} else {
 lean::dec_ref(x_97);
 x_99 = lean::box(0);
}
if (lean::is_scalar(x_99)) {
 x_100 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_100 = x_99;
}
lean::cnstr_set(x_100, 0, x_9);
lean::cnstr_set(x_100, 1, x_98);
x_101 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_91);
x_102 = x_91;
x_103 = lean::array_push(x_93, x_102);
x_104 = lean::io_ref_set(x_3, x_103, x_100);
if (lean::obj_tag(x_104) == 0)
{
obj* x_105; obj* x_106; obj* x_107; 
x_105 = lean::cnstr_get(x_104, 1);
lean::inc(x_105);
if (lean::is_exclusive(x_104)) {
 lean::cnstr_release(x_104, 0);
 lean::cnstr_release(x_104, 1);
 x_106 = x_104;
} else {
 lean::dec_ref(x_104);
 x_106 = lean::box(0);
}
if (lean::is_scalar(x_106)) {
 x_107 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_107 = x_106;
}
lean::cnstr_set(x_107, 0, x_91);
lean::cnstr_set(x_107, 1, x_105);
return x_107;
}
else
{
obj* x_108; obj* x_109; obj* x_110; obj* x_111; 
lean::dec(x_91);
x_108 = lean::cnstr_get(x_104, 0);
lean::inc(x_108);
x_109 = lean::cnstr_get(x_104, 1);
lean::inc(x_109);
if (lean::is_exclusive(x_104)) {
 lean::cnstr_release(x_104, 0);
 lean::cnstr_release(x_104, 1);
 x_110 = x_104;
} else {
 lean::dec_ref(x_104);
 x_110 = lean::box(0);
}
if (lean::is_scalar(x_110)) {
 x_111 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_111 = x_110;
}
lean::cnstr_set(x_111, 0, x_108);
lean::cnstr_set(x_111, 1, x_109);
return x_111;
}
}
else
{
obj* x_112; obj* x_113; obj* x_114; obj* x_115; 
lean::dec(x_93);
lean::dec(x_91);
x_112 = lean::cnstr_get(x_97, 0);
lean::inc(x_112);
x_113 = lean::cnstr_get(x_97, 1);
lean::inc(x_113);
if (lean::is_exclusive(x_97)) {
 lean::cnstr_release(x_97, 0);
 lean::cnstr_release(x_97, 1);
 x_114 = x_97;
} else {
 lean::dec_ref(x_97);
 x_114 = lean::box(0);
}
if (lean::is_scalar(x_114)) {
 x_115 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_115 = x_114;
}
lean::cnstr_set(x_115, 0, x_112);
lean::cnstr_set(x_115, 1, x_113);
return x_115;
}
}
else
{
obj* x_116; obj* x_117; obj* x_118; obj* x_119; 
lean::dec(x_91);
x_116 = lean::cnstr_get(x_92, 0);
lean::inc(x_116);
x_117 = lean::cnstr_get(x_92, 1);
lean::inc(x_117);
if (lean::is_exclusive(x_92)) {
 lean::cnstr_release(x_92, 0);
 lean::cnstr_release(x_92, 1);
 x_118 = x_92;
} else {
 lean::dec_ref(x_92);
 x_118 = lean::box(0);
}
if (lean::is_scalar(x_118)) {
 x_119 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_119 = x_118;
}
lean::cnstr_set(x_119, 0, x_116);
lean::cnstr_set(x_119, 1, x_117);
return x_119;
}
}
}
else
{
uint8 x_120; 
lean::dec(x_10);
lean::dec(x_1);
x_120 = !lean::is_exclusive(x_15);
if (x_120 == 0)
{
return x_15;
}
else
{
obj* x_121; obj* x_122; obj* x_123; 
x_121 = lean::cnstr_get(x_15, 0);
x_122 = lean::cnstr_get(x_15, 1);
lean::inc(x_122);
lean::inc(x_121);
lean::dec(x_15);
x_123 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_123, 0, x_121);
lean::cnstr_set(x_123, 1, x_122);
return x_123;
}
}
}
else
{
obj* x_124; obj* x_125; obj* x_126; obj* x_127; obj* x_128; obj* x_129; obj* x_130; 
x_124 = lean::cnstr_get(x_1, 0);
lean::inc(x_124);
lean::dec(x_1);
x_125 = l_System_FilePath_dirName___closed__1;
x_126 = l_Lean_Name_toStringWithSep___main(x_125, x_124);
x_127 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_128 = lean::string_append(x_127, x_126);
lean::dec(x_126);
x_129 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_130 = lean::string_append(x_128, x_129);
lean::cnstr_set_tag(x_4, 1);
lean::cnstr_set(x_4, 0, x_130);
return x_4;
}
}
else
{
obj* x_131; obj* x_132; obj* x_133; uint8 x_134; 
x_131 = lean::cnstr_get(x_4, 0);
x_132 = lean::cnstr_get(x_4, 1);
lean::inc(x_132);
lean::inc(x_131);
lean::dec(x_4);
x_133 = lean::mk_nat_obj(0u);
x_134 = l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6(x_1, x_131, x_133);
lean::dec(x_131);
if (x_134 == 0)
{
obj* x_135; obj* x_136; obj* x_137; obj* x_138; obj* x_139; obj* x_140; obj* x_141; obj* x_142; 
x_135 = lean::box(0);
x_136 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_136, 0, x_135);
lean::cnstr_set(x_136, 1, x_132);
x_137 = lean::cnstr_get(x_1, 1);
lean::inc(x_137);
x_138 = l_Array_empty___closed__1;
lean::inc(x_137);
x_139 = lean::apply_1(x_137, x_138);
x_140 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__1;
x_141 = lean::alloc_closure(reinterpret_cast<void*>(l_EState_bind___rarg), 3, 2);
lean::closure_set(x_141, 0, x_139);
lean::closure_set(x_141, 1, x_140);
x_142 = l_Lean_registerEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__7(x_141, x_136);
if (lean::obj_tag(x_142) == 0)
{
obj* x_143; obj* x_144; obj* x_145; obj* x_146; obj* x_147; obj* x_148; obj* x_149; obj* x_150; obj* x_151; obj* x_152; 
x_143 = lean::cnstr_get(x_142, 0);
lean::inc(x_143);
x_144 = lean::cnstr_get(x_142, 1);
lean::inc(x_144);
if (lean::is_exclusive(x_142)) {
 lean::cnstr_release(x_142, 0);
 lean::cnstr_release(x_142, 1);
 x_145 = x_142;
} else {
 lean::dec_ref(x_142);
 x_145 = lean::box(0);
}
if (lean::is_scalar(x_145)) {
 x_146 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_146 = x_145;
}
lean::cnstr_set(x_146, 0, x_135);
lean::cnstr_set(x_146, 1, x_144);
x_147 = lean::cnstr_get(x_1, 0);
lean::inc(x_147);
x_148 = lean::cnstr_get(x_1, 2);
lean::inc(x_148);
x_149 = lean::cnstr_get(x_1, 3);
lean::inc(x_149);
x_150 = lean::cnstr_get(x_1, 4);
lean::inc(x_150);
lean::dec(x_1);
x_151 = lean::alloc_cnstr(0, 6, 0);
lean::cnstr_set(x_151, 0, x_143);
lean::cnstr_set(x_151, 1, x_147);
lean::cnstr_set(x_151, 2, x_137);
lean::cnstr_set(x_151, 3, x_148);
lean::cnstr_set(x_151, 4, x_149);
lean::cnstr_set(x_151, 5, x_150);
x_152 = lean::io_ref_get(x_3, x_146);
if (lean::obj_tag(x_152) == 0)
{
obj* x_153; obj* x_154; obj* x_155; obj* x_156; obj* x_157; 
x_153 = lean::cnstr_get(x_152, 0);
lean::inc(x_153);
x_154 = lean::cnstr_get(x_152, 1);
lean::inc(x_154);
if (lean::is_exclusive(x_152)) {
 lean::cnstr_release(x_152, 0);
 lean::cnstr_release(x_152, 1);
 x_155 = x_152;
} else {
 lean::dec_ref(x_152);
 x_155 = lean::box(0);
}
if (lean::is_scalar(x_155)) {
 x_156 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_156 = x_155;
}
lean::cnstr_set(x_156, 0, x_135);
lean::cnstr_set(x_156, 1, x_154);
x_157 = lean::io_ref_reset(x_3, x_156);
if (lean::obj_tag(x_157) == 0)
{
obj* x_158; obj* x_159; obj* x_160; obj* x_161; obj* x_162; obj* x_163; obj* x_164; 
x_158 = lean::cnstr_get(x_157, 1);
lean::inc(x_158);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_159 = x_157;
} else {
 lean::dec_ref(x_157);
 x_159 = lean::box(0);
}
if (lean::is_scalar(x_159)) {
 x_160 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_160 = x_159;
}
lean::cnstr_set(x_160, 0, x_135);
lean::cnstr_set(x_160, 1, x_158);
x_161 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__2;
lean::inc(x_151);
x_162 = x_151;
x_163 = lean::array_push(x_153, x_162);
x_164 = lean::io_ref_set(x_3, x_163, x_160);
if (lean::obj_tag(x_164) == 0)
{
obj* x_165; obj* x_166; obj* x_167; 
x_165 = lean::cnstr_get(x_164, 1);
lean::inc(x_165);
if (lean::is_exclusive(x_164)) {
 lean::cnstr_release(x_164, 0);
 lean::cnstr_release(x_164, 1);
 x_166 = x_164;
} else {
 lean::dec_ref(x_164);
 x_166 = lean::box(0);
}
if (lean::is_scalar(x_166)) {
 x_167 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_167 = x_166;
}
lean::cnstr_set(x_167, 0, x_151);
lean::cnstr_set(x_167, 1, x_165);
return x_167;
}
else
{
obj* x_168; obj* x_169; obj* x_170; obj* x_171; 
lean::dec(x_151);
x_168 = lean::cnstr_get(x_164, 0);
lean::inc(x_168);
x_169 = lean::cnstr_get(x_164, 1);
lean::inc(x_169);
if (lean::is_exclusive(x_164)) {
 lean::cnstr_release(x_164, 0);
 lean::cnstr_release(x_164, 1);
 x_170 = x_164;
} else {
 lean::dec_ref(x_164);
 x_170 = lean::box(0);
}
if (lean::is_scalar(x_170)) {
 x_171 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_171 = x_170;
}
lean::cnstr_set(x_171, 0, x_168);
lean::cnstr_set(x_171, 1, x_169);
return x_171;
}
}
else
{
obj* x_172; obj* x_173; obj* x_174; obj* x_175; 
lean::dec(x_153);
lean::dec(x_151);
x_172 = lean::cnstr_get(x_157, 0);
lean::inc(x_172);
x_173 = lean::cnstr_get(x_157, 1);
lean::inc(x_173);
if (lean::is_exclusive(x_157)) {
 lean::cnstr_release(x_157, 0);
 lean::cnstr_release(x_157, 1);
 x_174 = x_157;
} else {
 lean::dec_ref(x_157);
 x_174 = lean::box(0);
}
if (lean::is_scalar(x_174)) {
 x_175 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_175 = x_174;
}
lean::cnstr_set(x_175, 0, x_172);
lean::cnstr_set(x_175, 1, x_173);
return x_175;
}
}
else
{
obj* x_176; obj* x_177; obj* x_178; obj* x_179; 
lean::dec(x_151);
x_176 = lean::cnstr_get(x_152, 0);
lean::inc(x_176);
x_177 = lean::cnstr_get(x_152, 1);
lean::inc(x_177);
if (lean::is_exclusive(x_152)) {
 lean::cnstr_release(x_152, 0);
 lean::cnstr_release(x_152, 1);
 x_178 = x_152;
} else {
 lean::dec_ref(x_152);
 x_178 = lean::box(0);
}
if (lean::is_scalar(x_178)) {
 x_179 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_179 = x_178;
}
lean::cnstr_set(x_179, 0, x_176);
lean::cnstr_set(x_179, 1, x_177);
return x_179;
}
}
else
{
obj* x_180; obj* x_181; obj* x_182; obj* x_183; 
lean::dec(x_137);
lean::dec(x_1);
x_180 = lean::cnstr_get(x_142, 0);
lean::inc(x_180);
x_181 = lean::cnstr_get(x_142, 1);
lean::inc(x_181);
if (lean::is_exclusive(x_142)) {
 lean::cnstr_release(x_142, 0);
 lean::cnstr_release(x_142, 1);
 x_182 = x_142;
} else {
 lean::dec_ref(x_142);
 x_182 = lean::box(0);
}
if (lean::is_scalar(x_182)) {
 x_183 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_183 = x_182;
}
lean::cnstr_set(x_183, 0, x_180);
lean::cnstr_set(x_183, 1, x_181);
return x_183;
}
}
else
{
obj* x_184; obj* x_185; obj* x_186; obj* x_187; obj* x_188; obj* x_189; obj* x_190; obj* x_191; 
x_184 = lean::cnstr_get(x_1, 0);
lean::inc(x_184);
lean::dec(x_1);
x_185 = l_System_FilePath_dirName___closed__1;
x_186 = l_Lean_Name_toStringWithSep___main(x_185, x_184);
x_187 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__3;
x_188 = lean::string_append(x_187, x_186);
lean::dec(x_186);
x_189 = l_Lean_registerPersistentEnvExtensionUnsafe___rarg___closed__4;
x_190 = lean::string_append(x_188, x_189);
x_191 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_191, 0, x_190);
lean::cnstr_set(x_191, 1, x_132);
return x_191;
}
}
}
else
{
uint8 x_192; 
lean::dec(x_1);
x_192 = !lean::is_exclusive(x_4);
if (x_192 == 0)
{
return x_4;
}
else
{
obj* x_193; obj* x_194; obj* x_195; 
x_193 = lean::cnstr_get(x_4, 0);
x_194 = lean::cnstr_get(x_4, 1);
lean::inc(x_194);
lean::inc(x_193);
lean::dec(x_4);
x_195 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_195, 0, x_193);
lean::cnstr_set(x_195, 1, x_194);
return x_195;
}
}
}
}
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___lambda__1(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_2 = l_Array_empty___closed__1;
x_3 = l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2(x_2, x_1);
x_4 = lean::array_get_size(x_3);
x_5 = lean::mk_nat_obj(1u);
x_6 = lean::nat_sub(x_4, x_5);
lean::dec(x_4);
x_7 = lean::mk_nat_obj(0u);
x_8 = l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3(x_3, x_7, x_6);
lean::dec(x_6);
return x_8;
}
}
obj* _init_l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___lambda__1___boxed), 1, 0);
return x_1;
}
}
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_6 = l_Lean_registerTagAttribute___closed__1;
x_7 = l_Lean_mkProjectionFnInfoExtension___closed__3;
x_8 = l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___closed__1;
x_9 = l_Lean_registerParametricAttribute___rarg___closed__2;
lean::inc(x_1);
x_10 = lean::alloc_cnstr(0, 5, 0);
lean::cnstr_set(x_10, 0, x_1);
lean::cnstr_set(x_10, 1, x_6);
lean::cnstr_set(x_10, 2, x_7);
lean::cnstr_set(x_10, 3, x_8);
lean::cnstr_set(x_10, 4, x_9);
x_11 = l_Lean_registerPersistentEnvExtensionUnsafe___at_Lean_mkExternAttr___spec__5(x_10, x_5);
if (lean::obj_tag(x_11) == 0)
{
uint8 x_12; 
x_12 = !lean::is_exclusive(x_11);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; uint8 x_20; obj* x_21; obj* x_22; 
x_13 = lean::cnstr_get(x_11, 0);
x_14 = lean::box(0);
lean::cnstr_set(x_11, 0, x_14);
lean::inc(x_13);
lean::inc(x_1);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerParametricAttribute___rarg___lambda__4___boxed), 9, 4);
lean::closure_set(x_15, 0, x_1);
lean::closure_set(x_15, 1, x_3);
lean::closure_set(x_15, 2, x_13);
lean::closure_set(x_15, 3, x_4);
lean::inc(x_1);
x_16 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean::closure_set(x_16, 0, x_1);
lean::inc(x_1);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean::closure_set(x_17, 0, x_1);
x_18 = l_Lean_AttributeImpl_inhabited___closed__4;
x_19 = l_Lean_AttributeImpl_inhabited___closed__5;
x_20 = 0;
x_21 = lean::alloc_cnstr(0, 8, 1);
lean::cnstr_set(x_21, 0, x_1);
lean::cnstr_set(x_21, 1, x_2);
lean::cnstr_set(x_21, 2, x_15);
lean::cnstr_set(x_21, 3, x_16);
lean::cnstr_set(x_21, 4, x_17);
lean::cnstr_set(x_21, 5, x_18);
lean::cnstr_set(x_21, 6, x_19);
lean::cnstr_set(x_21, 7, x_19);
lean::cnstr_set_scalar(x_21, sizeof(void*)*8, x_20);
lean::inc(x_21);
x_22 = l_Lean_registerAttribute(x_21, x_11);
if (lean::obj_tag(x_22) == 0)
{
uint8 x_23; 
x_23 = !lean::is_exclusive(x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_22, 0);
lean::dec(x_24);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_21);
lean::cnstr_set(x_25, 1, x_13);
lean::cnstr_set(x_22, 0, x_25);
return x_22;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_22, 1);
lean::inc(x_26);
lean::dec(x_22);
x_27 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_27, 0, x_21);
lean::cnstr_set(x_27, 1, x_13);
x_28 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_28, 0, x_27);
lean::cnstr_set(x_28, 1, x_26);
return x_28;
}
}
else
{
uint8 x_29; 
lean::dec(x_21);
lean::dec(x_13);
x_29 = !lean::is_exclusive(x_22);
if (x_29 == 0)
{
return x_22;
}
else
{
obj* x_30; obj* x_31; obj* x_32; 
x_30 = lean::cnstr_get(x_22, 0);
x_31 = lean::cnstr_get(x_22, 1);
lean::inc(x_31);
lean::inc(x_30);
lean::dec(x_22);
x_32 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_32, 0, x_30);
lean::cnstr_set(x_32, 1, x_31);
return x_32;
}
}
}
else
{
obj* x_33; obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; uint8 x_42; obj* x_43; obj* x_44; 
x_33 = lean::cnstr_get(x_11, 0);
x_34 = lean::cnstr_get(x_11, 1);
lean::inc(x_34);
lean::inc(x_33);
lean::dec(x_11);
x_35 = lean::box(0);
x_36 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_36, 0, x_35);
lean::cnstr_set(x_36, 1, x_34);
lean::inc(x_33);
lean::inc(x_1);
x_37 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerParametricAttribute___rarg___lambda__4___boxed), 9, 4);
lean::closure_set(x_37, 0, x_1);
lean::closure_set(x_37, 1, x_3);
lean::closure_set(x_37, 2, x_33);
lean::closure_set(x_37, 3, x_4);
lean::inc(x_1);
x_38 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerTagAttribute___lambda__5___boxed), 5, 1);
lean::closure_set(x_38, 0, x_1);
lean::inc(x_1);
x_39 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_registerTagAttribute___lambda__6___boxed), 5, 1);
lean::closure_set(x_39, 0, x_1);
x_40 = l_Lean_AttributeImpl_inhabited___closed__4;
x_41 = l_Lean_AttributeImpl_inhabited___closed__5;
x_42 = 0;
x_43 = lean::alloc_cnstr(0, 8, 1);
lean::cnstr_set(x_43, 0, x_1);
lean::cnstr_set(x_43, 1, x_2);
lean::cnstr_set(x_43, 2, x_37);
lean::cnstr_set(x_43, 3, x_38);
lean::cnstr_set(x_43, 4, x_39);
lean::cnstr_set(x_43, 5, x_40);
lean::cnstr_set(x_43, 6, x_41);
lean::cnstr_set(x_43, 7, x_41);
lean::cnstr_set_scalar(x_43, sizeof(void*)*8, x_42);
lean::inc(x_43);
x_44 = l_Lean_registerAttribute(x_43, x_36);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
x_45 = lean::cnstr_get(x_44, 1);
lean::inc(x_45);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_46 = x_44;
} else {
 lean::dec_ref(x_44);
 x_46 = lean::box(0);
}
x_47 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_47, 0, x_43);
lean::cnstr_set(x_47, 1, x_33);
if (lean::is_scalar(x_46)) {
 x_48 = lean::alloc_cnstr(0, 2, 0);
} else {
 x_48 = x_46;
}
lean::cnstr_set(x_48, 0, x_47);
lean::cnstr_set(x_48, 1, x_45);
return x_48;
}
else
{
obj* x_49; obj* x_50; obj* x_51; obj* x_52; 
lean::dec(x_43);
lean::dec(x_33);
x_49 = lean::cnstr_get(x_44, 0);
lean::inc(x_49);
x_50 = lean::cnstr_get(x_44, 1);
lean::inc(x_50);
if (lean::is_exclusive(x_44)) {
 lean::cnstr_release(x_44, 0);
 lean::cnstr_release(x_44, 1);
 x_51 = x_44;
} else {
 lean::dec_ref(x_44);
 x_51 = lean::box(0);
}
if (lean::is_scalar(x_51)) {
 x_52 = lean::alloc_cnstr(1, 2, 0);
} else {
 x_52 = x_51;
}
lean::cnstr_set(x_52, 0, x_49);
lean::cnstr_set(x_52, 1, x_50);
return x_52;
}
}
}
else
{
uint8 x_53; 
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
x_53 = !lean::is_exclusive(x_11);
if (x_53 == 0)
{
return x_11;
}
else
{
obj* x_54; obj* x_55; obj* x_56; 
x_54 = lean::cnstr_get(x_11, 0);
x_55 = lean::cnstr_get(x_11, 1);
lean::inc(x_55);
lean::inc(x_54);
lean::dec(x_11);
x_56 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_56, 0, x_54);
lean::cnstr_set(x_56, 1, x_55);
return x_56;
}
}
}
}
obj* l_Lean_mkExternAttr___lambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData(x_3);
return x_4;
}
}
obj* l_Lean_mkExternAttr___lambda__2(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; 
lean::inc(x_2);
x_4 = l_Lean_Environment_isProjectionFn(x_1, x_2);
if (x_4 == 0)
{
uint8 x_5; 
lean::inc(x_2);
lean::inc(x_1);
x_5 = l_Lean_Environment_isConstructor(x_1, x_2);
if (x_5 == 0)
{
obj* x_6; 
lean::dec(x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_1);
return x_6;
}
else
{
obj* x_7; 
x_7 = lean_add_extern(x_1, x_2);
return x_7;
}
}
else
{
obj* x_8; 
x_8 = lean_add_extern(x_1, x_2);
return x_8;
}
}
}
obj* _init_l_Lean_mkExternAttr___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("extern");
return x_1;
}
}
obj* _init_l_Lean_mkExternAttr___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_mkExternAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_mkExternAttr___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("builtin and foreign functions");
return x_1;
}
}
obj* _init_l_Lean_mkExternAttr___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_mkExternAttr___lambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_mkExternAttr___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_mkExternAttr___lambda__2___boxed), 3, 0);
return x_1;
}
}
obj* l_Lean_mkExternAttr(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_Lean_mkExternAttr___closed__2;
x_3 = l_Lean_mkExternAttr___closed__3;
x_4 = l_Lean_mkExternAttr___closed__4;
x_5 = l_Lean_mkExternAttr___closed__5;
x_6 = l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
obj* l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_RBNode_fold___main___at_Lean_mkExternAttr___spec__2(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; 
x_6 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4(x_1, x_2, x_3, x_4, x_5);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
obj* l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Array_qsortAux___main___at_Lean_mkExternAttr___spec__3(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
uint8 x_4; obj* x_5; 
x_4 = l_Array_anyMAux___main___at_Lean_mkExternAttr___spec__6(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
x_5 = lean::box(x_4);
return x_5;
}
}
obj* l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___lambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___lambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_mkExternAttr___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_mkExternAttr___lambda__1(x_1, x_2, x_3);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_mkExternAttr___lambda__2___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_mkExternAttr___lambda__2(x_1, x_2, x_3);
lean::dec(x_3);
return x_4;
}
}
obj* l_RBNode_find___main___at_Lean_getExternAttrData___spec__2(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_1) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_1, 0);
x_5 = lean::cnstr_get(x_1, 1);
x_6 = lean::cnstr_get(x_1, 2);
x_7 = lean::cnstr_get(x_1, 3);
x_8 = l_Lean_Name_quickLt(x_2, x_5);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = l_Lean_Name_quickLt(x_5, x_2);
if (x_9 == 0)
{
obj* x_10; 
lean::inc(x_6);
x_10 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_10, 0, x_6);
return x_10;
}
else
{
x_1 = x_7;
goto _start;
}
}
else
{
x_1 = x_4;
goto _start;
}
}
}
}
obj* l_Array_binSearchAux___main___at_Lean_getExternAttrData___spec__3(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; 
x_5 = lean::nat_dec_le(x_3, x_4);
if (x_5 == 0)
{
obj* x_6; 
lean::dec(x_4);
lean::dec(x_3);
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; uint8 x_14; 
x_7 = lean::nat_add(x_3, x_4);
x_8 = lean::mk_nat_obj(2u);
x_9 = lean::nat_div(x_7, x_8);
lean::dec(x_7);
x_10 = l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1;
x_11 = lean::array_get(x_10, x_1, x_9);
x_12 = lean::cnstr_get(x_11, 0);
lean::inc(x_12);
x_13 = lean::cnstr_get(x_2, 0);
x_14 = l_Lean_Name_quickLt(x_12, x_13);
if (x_14 == 0)
{
uint8 x_15; 
lean::dec(x_4);
x_15 = l_Lean_Name_quickLt(x_13, x_12);
lean::dec(x_12);
if (x_15 == 0)
{
obj* x_16; 
lean::dec(x_9);
lean::dec(x_3);
x_16 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_16, 0, x_11);
return x_16;
}
else
{
obj* x_17; uint8 x_18; 
lean::dec(x_11);
x_17 = lean::mk_nat_obj(0u);
x_18 = lean::nat_dec_eq(x_9, x_17);
if (x_18 == 0)
{
obj* x_19; obj* x_20; 
x_19 = lean::mk_nat_obj(1u);
x_20 = lean::nat_sub(x_9, x_19);
lean::dec(x_9);
x_4 = x_20;
goto _start;
}
else
{
obj* x_22; 
lean::dec(x_9);
lean::dec(x_3);
x_22 = lean::box(0);
return x_22;
}
}
}
else
{
obj* x_23; obj* x_24; 
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_3);
x_23 = lean::mk_nat_obj(1u);
x_24 = lean::nat_add(x_9, x_23);
lean::dec(x_9);
x_3 = x_24;
goto _start;
}
}
}
}
obj* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Environment_getModuleIdxFor(x_2, x_3);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = lean::cnstr_get(x_1, 1);
lean::inc(x_5);
lean::dec(x_1);
x_6 = l_Lean_PersistentEnvExtension_getState___rarg(x_5, x_2);
x_7 = l_RBNode_find___main___at_Lean_getExternAttrData___spec__2(x_6, x_3);
lean::dec(x_3);
lean::dec(x_6);
return x_7;
}
else
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_8 = lean::cnstr_get(x_4, 0);
lean::inc(x_8);
lean::dec(x_4);
x_9 = lean::cnstr_get(x_1, 1);
lean::inc(x_9);
lean::dec(x_1);
x_10 = l_Lean_PersistentEnvExtension_getModuleEntries___rarg(x_9, x_2, x_8);
lean::dec(x_8);
x_11 = l_Lean_ExternAttrData_inhabited___closed__1;
x_12 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_12, 0, x_3);
lean::cnstr_set(x_12, 1, x_11);
x_13 = lean::array_get_size(x_10);
x_14 = lean::mk_nat_obj(1u);
x_15 = lean::nat_sub(x_13, x_14);
lean::dec(x_13);
x_16 = lean::mk_nat_obj(0u);
x_17 = l_Array_binSearchAux___main___at_Lean_getExternAttrData___spec__3(x_10, x_12, x_16, x_15);
lean::dec(x_12);
lean::dec(x_10);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; 
x_18 = lean::box(0);
return x_18;
}
else
{
uint8 x_19; 
x_19 = !lean::is_exclusive(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::cnstr_get(x_17, 0);
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
lean::dec(x_20);
lean::cnstr_set(x_17, 0, x_21);
return x_17;
}
else
{
obj* x_22; obj* x_23; obj* x_24; 
x_22 = lean::cnstr_get(x_17, 0);
lean::inc(x_22);
lean::dec(x_17);
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
lean::dec(x_22);
x_24 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_24, 0, x_23);
return x_24;
}
}
}
}
}
namespace lean {
obj* get_extern_attr_data_core(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_externAttr;
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_3, x_1, x_2);
lean::dec(x_1);
return x_4;
}
}
}
obj* l_RBNode_find___main___at_Lean_getExternAttrData___spec__2___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_RBNode_find___main___at_Lean_getExternAttrData___spec__2(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Array_binSearchAux___main___at_Lean_getExternAttrData___spec__3___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Array_binSearchAux___main___at_Lean_getExternAttrData___spec__3(x_1, x_2, x_3, x_4);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_1, x_2, x_3);
lean::dec(x_2);
return x_4;
}
}
obj* l___private_init_lean_compiler_externattr_3__parseOptNum___main(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::nat_dec_eq(x_1, x_4);
if (x_5 == 0)
{
obj* x_6; obj* x_7; uint8 x_8; 
x_6 = lean::mk_nat_obj(1u);
x_7 = lean::nat_sub(x_1, x_6);
lean::dec(x_1);
x_8 = l_String_Iterator_hasNext___main(x_2);
if (x_8 == 0)
{
obj* x_9; 
lean::dec(x_7);
x_9 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_9, 0, x_2);
lean::cnstr_set(x_9, 1, x_3);
return x_9;
}
else
{
uint32 x_10; uint32 x_11; uint8 x_12; 
x_10 = l_String_Iterator_curr___main(x_2);
x_11 = 48;
x_12 = x_11 <= x_10;
if (x_12 == 0)
{
obj* x_13; 
lean::dec(x_7);
x_13 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_13, 0, x_2);
lean::cnstr_set(x_13, 1, x_3);
return x_13;
}
else
{
uint32 x_14; uint8 x_15; 
x_14 = 57;
x_15 = x_10 <= x_14;
if (x_15 == 0)
{
obj* x_16; 
lean::dec(x_7);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_2);
lean::cnstr_set(x_16, 1, x_3);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_17 = l_String_Iterator_next___main(x_2);
x_18 = lean::mk_nat_obj(10u);
x_19 = lean::nat_mul(x_3, x_18);
lean::dec(x_3);
x_20 = lean::uint32_to_nat(x_10);
x_21 = lean::mk_nat_obj(48u);
x_22 = lean::nat_sub(x_20, x_21);
lean::dec(x_20);
x_23 = lean::nat_add(x_19, x_22);
lean::dec(x_22);
lean::dec(x_19);
x_1 = x_7;
x_2 = x_17;
x_3 = x_23;
goto _start;
}
}
}
}
else
{
obj* x_25; 
lean::dec(x_1);
x_25 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_25, 0, x_2);
lean::cnstr_set(x_25, 1, x_3);
return x_25;
}
}
}
obj* l___private_init_lean_compiler_externattr_3__parseOptNum(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l___private_init_lean_compiler_externattr_3__parseOptNum___main(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_expandExternPatternAux___main(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; uint8 x_6; 
x_5 = lean::mk_nat_obj(0u);
x_6 = lean::nat_dec_eq(x_2, x_5);
if (x_6 == 0)
{
obj* x_7; obj* x_8; uint8 x_9; 
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_2, x_7);
lean::dec(x_2);
x_9 = l_String_Iterator_hasNext___main(x_3);
if (x_9 == 0)
{
lean::dec(x_8);
lean::dec(x_3);
return x_4;
}
else
{
uint32 x_10; uint32 x_11; uint8 x_12; 
x_10 = l_String_Iterator_curr___main(x_3);
x_11 = 35;
x_12 = x_10 == x_11;
if (x_12 == 0)
{
obj* x_13; obj* x_14; 
x_13 = l_String_Iterator_next___main(x_3);
x_14 = lean::string_push(x_4, x_10);
x_2 = x_8;
x_3 = x_13;
x_4 = x_14;
goto _start;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_16 = l_String_Iterator_next___main(x_3);
x_17 = l_String_Iterator_remainingBytes___main(x_16);
x_18 = l___private_init_lean_compiler_externattr_3__parseOptNum___main(x_17, x_16, x_5);
x_19 = lean::cnstr_get(x_18, 0);
lean::inc(x_19);
x_20 = lean::cnstr_get(x_18, 1);
lean::inc(x_20);
lean::dec(x_18);
x_21 = lean::nat_sub(x_20, x_7);
lean::dec(x_20);
x_22 = l_List_getOpt___main___rarg(x_21, x_1);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_String_splitAux___main___closed__1;
x_24 = lean::string_append(x_4, x_23);
x_2 = x_8;
x_3 = x_19;
x_4 = x_24;
goto _start;
}
else
{
obj* x_26; obj* x_27; 
x_26 = lean::cnstr_get(x_22, 0);
lean::inc(x_26);
lean::dec(x_22);
x_27 = lean::string_append(x_4, x_26);
lean::dec(x_26);
x_2 = x_8;
x_3 = x_19;
x_4 = x_27;
goto _start;
}
}
}
}
else
{
lean::dec(x_3);
lean::dec(x_2);
return x_4;
}
}
}
obj* l_Lean_expandExternPatternAux___main___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_expandExternPatternAux___main(x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_expandExternPatternAux(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_expandExternPatternAux___main(x_1, x_2, x_3, x_4);
return x_5;
}
}
obj* l_Lean_expandExternPatternAux___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_expandExternPatternAux(x_1, x_2, x_3, x_4);
lean::dec(x_1);
return x_5;
}
}
obj* l_Lean_expandExternPattern(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::string_length(x_1);
x_4 = lean::mk_nat_obj(0u);
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_1);
lean::cnstr_set(x_5, 1, x_4);
x_6 = l_String_splitAux___main___closed__1;
x_7 = l_Lean_expandExternPatternAux___main(x_2, x_3, x_5, x_6);
return x_7;
}
}
obj* l_Lean_expandExternPattern___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_expandExternPattern(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_List_foldl___main___at_Lean_mkSimpleFnCall___spec__1(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
return x_1;
}
else
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::cnstr_get(x_2, 0);
x_4 = lean::cnstr_get(x_2, 1);
x_5 = lean::string_append(x_1, x_3);
x_1 = x_5;
x_2 = x_4;
goto _start;
}
}
}
obj* l_Lean_mkSimpleFnCall(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_3 = l_Prod_HasRepr___rarg___closed__1;
x_4 = lean::string_append(x_1, x_3);
x_5 = l_List_reprAux___main___rarg___closed__1;
x_6 = l_List_intersperse___main___rarg(x_5, x_2);
x_7 = l_String_splitAux___main___closed__1;
x_8 = l_List_foldl___main___at_Lean_mkSimpleFnCall___spec__1(x_7, x_6);
lean::dec(x_6);
x_9 = lean::string_append(x_4, x_8);
lean::dec(x_8);
x_10 = l_Option_HasRepr___rarg___closed__3;
x_11 = lean::string_append(x_9, x_10);
return x_11;
}
}
obj* l_List_foldl___main___at_Lean_mkSimpleFnCall___spec__1___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_List_foldl___main___at_Lean_mkSimpleFnCall___spec__1(x_1, x_2);
lean::dec(x_2);
return x_3;
}
}
obj* l_Lean_expandExternEntry(obj* x_1, obj* x_2) {
_start:
{
switch (lean::obj_tag(x_1)) {
case 0:
{
obj* x_3; 
lean::dec(x_2);
lean::dec(x_1);
x_3 = lean::box(0);
return x_3;
}
case 1:
{
obj* x_4; obj* x_5; obj* x_6; 
x_4 = lean::cnstr_get(x_1, 1);
lean::inc(x_4);
lean::dec(x_1);
x_5 = l_Lean_expandExternPattern(x_4, x_2);
lean::dec(x_2);
x_6 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_6, 0, x_5);
return x_6;
}
default: 
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = lean::cnstr_get(x_1, 1);
lean::inc(x_7);
lean::dec(x_1);
x_8 = l_Lean_mkSimpleFnCall(x_7, x_2);
x_9 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_9, 0, x_8);
return x_9;
}
}
}
}
obj* l_Lean_ExternEntry_backend(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
return x_2;
}
}
obj* l_Lean_ExternEntry_backend___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_ExternEntry_backend(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_getExternEntryForAux___main(obj* x_1, obj* x_2) {
_start:
{
if (lean::obj_tag(x_2) == 0)
{
obj* x_3; 
x_3 = lean::box(0);
return x_3;
}
else
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; uint8 x_8; 
x_4 = lean::cnstr_get(x_2, 0);
x_5 = lean::cnstr_get(x_2, 1);
x_6 = l_Lean_ExternEntry_backend(x_4);
x_7 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2;
x_8 = lean_name_dec_eq(x_6, x_7);
if (x_8 == 0)
{
uint8 x_9; 
x_9 = lean_name_dec_eq(x_6, x_1);
lean::dec(x_6);
if (x_9 == 0)
{
x_2 = x_5;
goto _start;
}
else
{
obj* x_11; 
lean::inc(x_4);
x_11 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_11, 0, x_4);
return x_11;
}
}
else
{
obj* x_12; 
lean::dec(x_6);
lean::inc(x_4);
x_12 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_12, 0, x_4);
return x_12;
}
}
}
}
obj* l_Lean_getExternEntryForAux___main___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_getExternEntryForAux___main(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_getExternEntryForAux(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_getExternEntryForAux___main(x_1, x_2);
return x_3;
}
}
obj* l_Lean_getExternEntryForAux___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_getExternEntryForAux(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_getExternEntryFor(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = lean::cnstr_get(x_1, 1);
x_4 = l_Lean_getExternEntryForAux___main(x_2, x_3);
return x_4;
}
}
obj* l_Lean_getExternEntryFor___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_getExternEntryFor(x_1, x_2);
lean::dec(x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_mkExternCall(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_getExternEntryFor(x_1, x_2);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; 
lean::dec(x_3);
x_5 = lean::box(0);
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_7 = l_Lean_expandExternEntry(x_6, x_3);
return x_7;
}
}
}
obj* l_Lean_mkExternCall___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_mkExternCall(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
uint8 l_Lean_isExtern(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_externAttr;
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_3, x_1, x_2);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = 0;
return x_5;
}
else
{
uint8 x_6; 
lean::dec(x_4);
x_6 = 1;
return x_6;
}
}
}
obj* l_Lean_isExtern___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_Lean_isExtern(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
uint8 l_Lean_isExternC(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; 
x_3 = l_Lean_externAttr;
x_4 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_3, x_1, x_2);
if (lean::obj_tag(x_4) == 0)
{
uint8 x_5; 
x_5 = 0;
return x_5;
}
else
{
obj* x_6; obj* x_7; 
x_6 = lean::cnstr_get(x_4, 0);
lean::inc(x_6);
lean::dec(x_4);
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
lean::dec(x_6);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; 
x_8 = 0;
return x_8;
}
else
{
obj* x_9; 
x_9 = lean::cnstr_get(x_7, 0);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; obj* x_12; uint8 x_13; 
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::dec(x_7);
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
lean::dec(x_9);
x_12 = l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2;
x_13 = lean_name_dec_eq(x_11, x_12);
lean::dec(x_11);
if (x_13 == 0)
{
uint8 x_14; 
lean::dec(x_10);
x_14 = 0;
return x_14;
}
else
{
if (lean::obj_tag(x_10) == 0)
{
uint8 x_15; 
x_15 = 1;
return x_15;
}
else
{
uint8 x_16; 
lean::dec(x_10);
x_16 = 0;
return x_16;
}
}
}
else
{
uint8 x_17; 
lean::dec(x_9);
lean::dec(x_7);
x_17 = 0;
return x_17;
}
}
}
}
}
obj* l_Lean_isExternC___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = l_Lean_isExternC(x_1, x_2);
lean::dec(x_1);
x_4 = lean::box(x_3);
return x_4;
}
}
obj* l_Lean_getExternNameFor(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; 
x_4 = l_Lean_externAttr;
x_5 = l_Lean_ParametricAttribute_getParam___at_Lean_getExternAttrData___spec__1(x_4, x_1, x_3);
if (lean::obj_tag(x_5) == 0)
{
obj* x_6; 
x_6 = lean::box(0);
return x_6;
}
else
{
obj* x_7; obj* x_8; 
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
lean::dec(x_5);
x_8 = l_Lean_getExternEntryFor(x_7, x_2);
lean::dec(x_7);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; 
x_9 = lean::box(0);
return x_9;
}
else
{
uint8 x_10; 
x_10 = !lean::is_exclusive(x_8);
if (x_10 == 0)
{
obj* x_11; 
x_11 = lean::cnstr_get(x_8, 0);
switch (lean::obj_tag(x_11)) {
case 2:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
lean::dec(x_11);
lean::cnstr_set(x_8, 0, x_12);
return x_8;
}
case 3:
{
obj* x_13; 
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
lean::dec(x_11);
lean::cnstr_set(x_8, 0, x_13);
return x_8;
}
default: 
{
obj* x_14; 
lean::free_heap_obj(x_8);
lean::dec(x_11);
x_14 = lean::box(0);
return x_14;
}
}
}
else
{
obj* x_15; 
x_15 = lean::cnstr_get(x_8, 0);
lean::inc(x_15);
lean::dec(x_8);
switch (lean::obj_tag(x_15)) {
case 2:
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_15, 1);
lean::inc(x_16);
lean::dec(x_15);
x_17 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_17, 0, x_16);
return x_17;
}
case 3:
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_15, 1);
lean::inc(x_18);
lean::dec(x_15);
x_19 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_19, 0, x_18);
return x_19;
}
default: 
{
obj* x_20; 
lean::dec(x_15);
x_20 = lean::box(0);
return x_20;
}
}
}
}
}
}
}
obj* l_Lean_getExternNameFor___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_getExternNameFor(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* initialize_init_data_option_basic(obj*);
obj* initialize_init_lean_expr(obj*);
obj* initialize_init_lean_environment(obj*);
obj* initialize_init_lean_attributes(obj*);
obj* initialize_init_lean_projfns(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_compiler_externattr(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_data_option_basic(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_expr(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_environment(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_attributes(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_projfns(w);
if (io_result_is_error(w)) return w;
l_Lean_ExternAttrData_inhabited___closed__1 = _init_l_Lean_ExternAttrData_inhabited___closed__1();
lean::mark_persistent(l_Lean_ExternAttrData_inhabited___closed__1);
l_Lean_ExternAttrData_inhabited = _init_l_Lean_ExternAttrData_inhabited();
lean::mark_persistent(l_Lean_ExternAttrData_inhabited);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__1 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__1();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__1);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__2 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__2();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__2);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__3 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__3();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__3);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__4);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__5 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__5();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__5);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__6 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__6();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__6);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__7 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__7();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__7);
l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__8 = _init_l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__8();
lean::mark_persistent(l___private_init_lean_compiler_externattr_1__syntaxToExternEntries___main___closed__8);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__1 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__1();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__1);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__2);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__3 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__3();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__3);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__4 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__4();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__4);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__5 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__5();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__5);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__6 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__6();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__6);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__7 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__7();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__7);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__8 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__8();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__8);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__9 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__9();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__9);
l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10 = _init_l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10();
lean::mark_persistent(l___private_init_lean_compiler_externattr_2__syntaxToExternAttrData___closed__10);
l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1 = _init_l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1();
lean::mark_persistent(l___private_init_data_array_qsort_1__partitionAux___main___at_Lean_mkExternAttr___spec__4___closed__1);
l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___closed__1 = _init_l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___closed__1();
lean::mark_persistent(l_Lean_registerParametricAttribute___at_Lean_mkExternAttr___spec__1___closed__1);
l_Lean_mkExternAttr___closed__1 = _init_l_Lean_mkExternAttr___closed__1();
lean::mark_persistent(l_Lean_mkExternAttr___closed__1);
l_Lean_mkExternAttr___closed__2 = _init_l_Lean_mkExternAttr___closed__2();
lean::mark_persistent(l_Lean_mkExternAttr___closed__2);
l_Lean_mkExternAttr___closed__3 = _init_l_Lean_mkExternAttr___closed__3();
lean::mark_persistent(l_Lean_mkExternAttr___closed__3);
l_Lean_mkExternAttr___closed__4 = _init_l_Lean_mkExternAttr___closed__4();
lean::mark_persistent(l_Lean_mkExternAttr___closed__4);
l_Lean_mkExternAttr___closed__5 = _init_l_Lean_mkExternAttr___closed__5();
lean::mark_persistent(l_Lean_mkExternAttr___closed__5);
w = l_Lean_mkExternAttr(w);
if (io_result_is_error(w)) return w;
l_Lean_externAttr = io_result_get_value(w);
lean::mark_persistent(l_Lean_externAttr);
return w;
}
