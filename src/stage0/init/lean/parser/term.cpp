// Lean compiler output
// Module: init.lean.parser.term
// Imports: init.lean.parser.parser init.lean.parser.level
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
obj* l_Lean_Parser_Term_namedPattern___closed__3;
obj* l_Lean_Parser_Term_have___closed__6;
obj* l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_dollar(obj*);
obj* l_Lean_Parser_Term_sortApp___closed__4;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_bnot___closed__3;
obj* l_Lean_Parser_Term_id___closed__2;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__11;
obj* l_Lean_Parser_Term_num___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_match___elambda__1___closed__12;
obj* l_Lean_Parser_Term_simpleBinder___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_or___elambda__1___closed__5;
obj* l_Lean_Parser_Term_arrow___elambda__1___closed__1;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_haveAssign___closed__1;
obj* l_Lean_Parser_Term_fun___closed__4;
obj* l_Lean_Parser_Term_cons___elambda__1___closed__1;
obj* l_Lean_Parser_Term_inaccessible___closed__5;
obj* l_Lean_Parser_Term_let___closed__2;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__9;
uint8 l_Lean_Parser_checkTailNoWs(obj*);
obj* l_Lean_Parser_Term_typeAscription___closed__2;
obj* l_Lean_Parser_Term_emptyC___closed__1;
obj* l_Lean_Parser_Term_le___closed__2;
obj* l_Lean_Parser_Term_let___closed__4;
obj* l_Lean_Parser_Term_lt___elambda__1___closed__1;
extern obj* l_Lean_Parser_checkLeadingFn___closed__1;
obj* l_Lean_Parser_Term_or___closed__3;
obj* l_Lean_Parser_mkTermParserAttribute___closed__3;
obj* l_Lean_Parser_Term_bnot___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_checkIsSort___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_ge___elambda__1___closed__5;
obj* l_Lean_Parser_Term_arrow;
obj* l_Lean_Parser_Term_structInstSource;
obj* l_Lean_Parser_Term_ge___elambda__1___closed__4;
obj* l_Lean_Parser_regBuiltinTermParserAttr(obj*);
obj* l_Lean_Parser_Term_subtype___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_letPatDecl___closed__5;
obj* l_Lean_Parser_Term_mapConstRev;
obj* l_Lean_Parser_Term_add___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_subtype___closed__2;
obj* l_Lean_Parser_unicodeSymbolFnAux(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_mapRev(obj*);
obj* l_Lean_Parser_termParser(uint8, obj*);
obj* l_Lean_Parser_Term_tupleTail___elambda__1___closed__1;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13;
obj* l_Lean_Parser_Term_optType___closed__3;
obj* l_Lean_Parser_Term_match___closed__1;
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10;
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_parser_x21___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_borrowed(obj*);
obj* l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_have___closed__11;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_match___closed__5;
obj* l_Lean_Parser_Term_hole___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_eq___elambda__1___closed__2;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_orelseFn___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_borrowed;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_subtype___closed__9;
obj* l_Lean_Parser_Term_if___closed__12;
obj* l_Lean_Parser_Term_num;
obj* l_Lean_Parser_Term_heq___elambda__1___closed__1;
obj* l_Lean_Parser_Term_bracketedDoSeq___closed__1;
obj* l_Lean_Parser_Term_inaccessible___closed__1;
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_anonymousCtor___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_suffices___closed__6;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_depArrow___closed__7;
obj* l___regBuiltinParser_Lean_Parser_Term_parser_x21(obj*);
obj* l_Lean_Parser_Term_orelse___closed__1;
obj* l_Lean_Parser_Term_mapRev___elambda__1___closed__3;
obj* l_Lean_Parser_Term_id___closed__5;
obj* l_Lean_Parser_Term_andthen___closed__2;
extern obj* l_Lean_Parser_Error_toString___closed__2;
obj* l_Lean_Parser_Term_namedPattern___closed__4;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_doPat___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
obj* l_Lean_Parser_addBuiltinLeadingParser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__6;
obj* l_Lean_Parser_Term_andthen___elambda__1___closed__2;
obj* l_Lean_Parser_Term_seqRight;
obj* l_Lean_Parser_Term_uminus___closed__4;
obj* l_Lean_Parser_Term_app___elambda__1___closed__1;
obj* l_Lean_Parser_Term_optType;
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__9;
obj* l_Lean_Parser_Term_type___closed__3;
obj* l_Lean_Parser_Term_namedArgument;
obj* l_Lean_Parser_rawIdentFn(obj*, obj*);
obj* l_Lean_Parser_Term_array;
obj* l_Lean_Parser_Term_lt___elambda__1___closed__3;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__6;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_andM;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_show___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_orelse___closed__3;
obj* l_Lean_Parser_Term_list___elambda__1___closed__3;
obj* l_Lean_Parser_Term_hole___elambda__1(obj*);
obj* l_Lean_Parser_Term_hole___closed__4;
obj* l_Lean_Parser_Term_cons___elambda__1___closed__3;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1;
obj* l_Lean_Parser_Term_quotedName___closed__1;
obj* l_Lean_Parser_Term_doElem___closed__1;
obj* l_Lean_Parser_Term_equiv___elambda__1___closed__4;
obj* l_Lean_Parser_Term_array___closed__6;
obj* l_Lean_Parser_Term_id___closed__3;
obj* l_Lean_Parser_Term_doPat___closed__2;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__18;
namespace lean {
obj* nat_sub(obj*, obj*);
}
obj* l_Lean_Parser_Term_not___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_typeSpec___closed__1;
obj* l_Lean_Parser_Term_modN___closed__3;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_doSeq___closed__3;
obj* l_Lean_Parser_Term_unicodeInfixL(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_optIdent___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_anonymousCtor___elambda__1___spec__1(uint8, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_let___elambda__1___closed__4;
obj* l_Lean_Parser_Term_modN___closed__1;
extern obj* l_Sigma_HasRepr___rarg___closed__1;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__2;
obj* l_Lean_Parser_Term_hole___closed__1;
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_ne___elambda__1___closed__4;
extern obj* l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__1;
obj* l_Lean_Parser_Term_not;
obj* l_Lean_Parser_Term_map;
extern obj* l_Lean_Parser_unicodeSymbolFn___rarg___closed__1;
obj* l_Lean_Parser_Term_namedArgument___closed__2;
obj* l_Lean_Parser_Term_beq___closed__2;
obj* l_Lean_Parser_Term_bor___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_orelse___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_show___closed__1;
obj* l_Lean_Parser_Term_tparser_x21___closed__3;
obj* l_Lean_Parser_Term_gt___elambda__1___closed__2;
obj* l_Lean_Parser_Term_letIdDecl___elambda__1___closed__1;
obj* l_Lean_Parser_Term_band___elambda__1___closed__1;
obj* l_Lean_Parser_regBuiltinTermParserAttr___closed__3;
obj* l_Lean_Parser_Term_sorry___elambda__1___boxed(obj*);
obj* l_Lean_Parser_ParserState_restore(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__10;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__11;
obj* l_Lean_Parser_Term_fromTerm;
extern obj* l_Lean_Parser_Level_hole___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_proj___elambda__1___closed__5;
obj* l_Lean_Parser_Term_binderTactic___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__11;
obj* l___regBuiltinParser_Lean_Parser_Term_add(obj*);
obj* l_Lean_Parser_Term_bracketedDoSeq;
obj* l_Lean_Parser_Term_haveAssign___elambda__1(obj*);
obj* l_Lean_Parser_Term_let___closed__6;
obj* l_Lean_Parser_Term_letEqns___closed__3;
obj* l_Lean_Parser_Term_haveAssign___closed__5;
obj* l_Lean_Parser_Term_char___elambda__1(obj*);
obj* l_Lean_Parser_Term_prop___closed__1;
obj* l_Lean_Parser_Term_app___closed__5;
obj* l_Lean_Parser_Term_array___elambda__1___closed__2;
obj* l_Lean_Parser_Term_instBinder___closed__4;
obj* l_Lean_Parser_Term_subst___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_andM___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_andthenFn___rarg(obj*, obj*, obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_forall(obj*);
obj* l_Lean_Parser_Term_infixR___boxed(obj*, obj*);
obj* l_Lean_Parser_Term_letPatDecl___elambda__1(obj*);
obj* l_Lean_Parser_Term_le;
obj* l_Lean_Parser_Term_band___elambda__1___closed__3;
obj* l_Lean_Parser_Term_matchAlt___closed__5;
obj* l_Lean_Parser_Term_bracketedDoSeq___closed__4;
extern obj* l_Lean_Parser_unicodeSymbolCheckPrecFn___closed__2;
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_seqLeft(obj*);
obj* l_Lean_Parser_Term_doId___closed__5;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_orelse___elambda__1___closed__3;
obj* l_Lean_Parser_Term_list___closed__4;
obj* l_Lean_Parser_Term_mod___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_list___elambda__1___closed__10;
obj* l_Lean_Parser_Term_anonymousCtor___closed__4;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_show___closed__4;
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__10;
obj* l_Lean_Parser_mergeOrElseErrors(obj*, obj*, obj*);
obj* l_Lean_Parser_symbolInfo(obj*, obj*);
obj* l_Lean_Parser_Term_nomatch___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_bnot___closed__2;
obj* l_Lean_Parser_Term_andM___elambda__1___closed__2;
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_binderIdent___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_anonymousCtor___closed__1;
obj* l_Lean_Parser_Term_sub___elambda__1___closed__1;
obj* l_Lean_Parser_Term_or___closed__1;
obj* l_Lean_Parser_Term_cons;
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_id___closed__6;
obj* l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(obj*);
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_pow___elambda__1___closed__1;
obj* l_Lean_Parser_Term_list___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_cdot___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_let;
obj* l_Lean_Parser_andthenInfo(obj*, obj*);
obj* l_Lean_Parser_Term_structInst___closed__5;
extern obj* l_Lean_Parser_declareLeadingBuiltinParser___closed__1;
obj* l_Lean_Parser_Term_proj___closed__3;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_parenSpecial;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_seqLeft___closed__2;
obj* l_Lean_Parser_Term_and___closed__2;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1;
obj* l_Lean_Parser_Term_bnot;
obj* l_Lean_Parser_orelseInfo(obj*, obj*);
obj* l_Lean_Parser_Term_doPat___closed__5;
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__9;
obj* l_Lean_Parser_Term_show___closed__3;
obj* l_Lean_Parser_Term_dollar;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_termParser___lambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_add___elambda__1___closed__1;
obj* l_Lean_Parser_Term_and;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_typeSpec___closed__2;
obj* l_Lean_Parser_Term_nomatch___closed__2;
obj* l_Lean_Parser_Term_hole;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__2;
obj* l_Lean_Parser_Term_doLet___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_doSeq___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4;
obj* l_Lean_Parser_ParserAttribute_runParser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_ne___closed__2;
obj* l_Lean_Parser_Term_mul___elambda__1___closed__4;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_have;
obj* l_Lean_Parser_Term_doPat___closed__6;
obj* l_Lean_Parser_Term_structInst___closed__3;
obj* l_Lean_Parser_Term_seqLeft___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_modN;
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_anonymousCtor___closed__8;
obj* l_Lean_Parser_Term_sort___elambda__1(obj*);
obj* l_Lean_Parser_Term_subtype___closed__3;
obj* l_Lean_Parser_Term_optIdent___elambda__1___boxed(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_seq(obj*);
obj* l_Lean_Parser_Term_beq___elambda__1___closed__1;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6;
obj* l_Lean_Parser_Term_explicit___elambda__1___closed__1;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__14;
obj* l_Lean_Parser_Term_namedArgument___elambda__1(obj*);
obj* l_Lean_Parser_Term_doId___closed__1;
obj* l_Lean_Parser_Term_explicit___closed__4;
obj* l_Lean_Parser_Term_letPatDecl___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_inaccessible(obj*);
obj* l_Lean_Parser_Term_proj___closed__9;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__2;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_binderTactic___closed__4;
obj* l_Lean_Parser_Term_tparser_x21___closed__2;
obj* l_Lean_Parser_Term_seqRight___closed__2;
obj* l_Lean_Parser_Term_letEqns___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_subtype___elambda__1(obj*);
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__15;
obj* l_Lean_Parser_Term_leftArrow___closed__3;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_emptyC___closed__2;
obj* l_Lean_Parser_Term_binderType___closed__2;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__7;
obj* l_Lean_Parser_termParser___lambda__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_quotedName___elambda__1(obj*);
obj* l_Lean_Parser_Term_prod___closed__2;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_binderIdent___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_forall___elambda__1___closed__3;
obj* l_Lean_Parser_Term_app___closed__3;
obj* l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_doId___elambda__1(obj*);
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_list___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_if(obj*);
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__8;
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_anonymousCtor___closed__3;
obj* l_Lean_Parser_Term_proj___closed__6;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_instBinder___closed__1;
obj* l_Lean_Parser_Term_bracketedDoSeq___closed__5;
obj* l_Lean_Parser_Term_sortApp___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_fun(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_fcomp(obj*);
obj* l_Lean_Parser_Term_binderType___elambda__2(obj*);
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_tparser_x21___closed__4;
obj* l_Lean_Parser_Term_type___elambda__1(obj*);
obj* l_Lean_Parser_Term_simpleBinder___closed__1;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_sepBy1Info(obj*, obj*);
obj* l_Lean_Parser_Term_infixR___elambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_equiv;
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_doLet___closed__2;
extern obj* l_Lean_List_format___rarg___closed__2;
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_type___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_do(obj*);
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_inaccessible___closed__4;
obj* l_Lean_Parser_Term_heq___closed__1;
obj* l_Lean_Parser_Term_sortApp;
obj* l_Lean_Parser_Term_cons___elambda__1___closed__2;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg(obj*, obj*);
extern obj* l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
obj* l_Lean_Parser_Term_bne;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__4;
obj* l_Lean_Parser_Term_gt___closed__3;
obj* l_Lean_Parser_builtinTermParsingTable;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_fun___elambda__1___spec__1(uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_iff___elambda__1___closed__3;
obj* l_Lean_Parser_Term_seqLeft___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_orM(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_hole(obj*);
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_cdot(obj*);
obj* l_Lean_Parser_Term_structInst___closed__8;
obj* l_Lean_Parser_Term_ge___closed__3;
obj* l_Lean_Parser_Term_binderType___closed__1;
obj* l_Lean_Parser_ParserState_mkUnexpectedError(obj*, obj*);
obj* l_Lean_Parser_Term_namedArgument___closed__6;
obj* l_Lean_Parser_Term_optType___closed__2;
obj* l_Lean_Parser_Term_namedPattern___closed__6;
obj* l_Lean_Parser_mkTermParserAttribute(obj*);
obj* l_Lean_Parser_Term_equiv___closed__2;
obj* l_Lean_Parser_Term_gt___elambda__1___closed__4;
obj* l_Lean_Parser_Term_seqLeft;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__1;
obj* l_Lean_Parser_Term_tupleTail;
obj* l_Lean_Parser_Term_quotedName___closed__2;
obj* l_Lean_Parser_Term_paren___elambda__1___closed__1;
obj* l_Lean_Parser_Term_proj___closed__8;
obj* l_Lean_Parser_Term_orelse___elambda__1___closed__1;
obj* l_Lean_Parser_Term_mod___closed__3;
obj* l_Lean_Parser_Term_doSeq___closed__4;
obj* l_Lean_Parser_Term_depArrow___closed__1;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__10;
obj* l_Lean_Parser_Term_fun___closed__3;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__3;
obj* l_Lean_Parser_Term_mapConstRev___elambda__1(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_map(obj*);
obj* l_Lean_Parser_Term_and___elambda__1___closed__3;
obj* l_Lean_Parser_Term_parenSpecial___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_depArrow___closed__5;
obj* l_Lean_Parser_Term_structInst___closed__1;
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_suffices___closed__1;
obj* l_Lean_Parser_Term_seqRight___closed__3;
obj* l_Lean_Parser_Term_or___elambda__1___closed__3;
obj* l_Lean_Parser_Term_map___elambda__1___closed__1;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_doSeq;
obj* l_Lean_Parser_Term_bor___closed__2;
obj* l_Lean_Parser_Term_app___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_char___closed__2;
obj* l_Lean_Parser_Term_structInst___closed__11;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_uminus(obj*);
obj* l_Lean_Parser_Term_subst___elambda__1___closed__2;
obj* l_Lean_Parser_Term_namedPattern___closed__5;
obj* l_Lean_Parser_Term_tupleTail___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_fun___closed__8;
obj* l_Lean_Parser_Term_div___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_str___closed__2;
obj* l_Lean_Parser_Term_or___elambda__1___closed__4;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_beq___elambda__1___closed__3;
obj* l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
obj* l_Lean_Parser_Term_doElem___closed__3;
obj* l_Lean_Parser_Term_doPat___elambda__1(obj*);
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__8;
obj* l_Lean_Parser_Term_namedArgument___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_parenSpecial___closed__2;
obj* l_Lean_Parser_Term_seq___closed__3;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_div___elambda__1___closed__1;
obj* l_Lean_Parser_Term_and___elambda__1___closed__1;
obj* l_Lean_Parser_Term_infixR(obj*, obj*);
obj* l_Lean_Parser_Term_str___closed__2;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_doLet___closed__1;
extern obj* l_Lean_Parser_unicodeSymbolCheckPrecFn___closed__1;
obj* l_Lean_Parser_Term_fcomp___elambda__1___closed__1;
obj* l_Lean_Parser_Term_doPat___closed__1;
extern obj* l_Lean_Parser_appPrec;
obj* l_Lean_Parser_Term_num___closed__1;
obj* l_Lean_Parser_Term_suffices___closed__3;
obj* l_Lean_Parser_Term_binderTactic;
obj* l_Lean_Parser_Term_sortApp___closed__1;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__3;
obj* l_Lean_Parser_Term_dollar___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__12;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_prop___closed__4;
obj* l_Lean_Parser_Term_sub___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_optType___closed__1;
obj* l_Lean_Parser_Term_tupleTail___elambda__1___boxed(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_anonymousCtor(obj*);
obj* l_Lean_Parser_Term_binderType___elambda__2___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_beq___closed__1;
obj* l_Lean_Parser_Term_uminus___closed__3;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_explicitUniv___closed__8;
obj* l_Lean_Parser_registerBuiltinParserAttribute(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_mod___elambda__1___closed__4;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__5;
obj* l_Lean_Parser_Term_sort___closed__2;
obj* l_Lean_Parser_Term_beq;
extern obj* l_Lean_Parser_Level_paren___closed__3;
obj* l_Lean_Parser_Term_suffices;
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_bind(obj*);
obj* l_Lean_Parser_Term_doElem___closed__4;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__10;
obj* l_Lean_Parser_Term_quotedName;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_mul___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_have___closed__5;
obj* l_Lean_Parser_Term_arrow___closed__1;
obj* l_Lean_Parser_Term_paren___closed__2;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__3;
obj* l_Lean_Parser_Term_suffices___closed__4;
obj* l_Lean_Parser_Term_explicitBinder___elambda__1(obj*, obj*, obj*, obj*);
extern obj* l_Lean_formatDataValue___closed__1;
obj* l_Lean_Parser_Term_implicitBinder(uint8);
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_letEqns___closed__1;
obj* l_Lean_Parser_Term_sub;
obj* l_Lean_Parser_Term_eq___elambda__1___closed__3;
obj* l_Lean_Parser_Term_mul;
obj* l_Lean_Parser_Term_parenSpecial___closed__1;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_orM___elambda__1___closed__4;
obj* l_Lean_Parser_Term_structInstField___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_match___elambda__1___closed__2;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_paren___closed__7;
obj* l_Lean_Parser_Term_doId___closed__4;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8;
obj* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
obj* l_Lean_Parser_Term_map___elambda__1___closed__2;
obj* l_Lean_Parser_Term_explicitBinder___closed__10;
obj* l_Lean_Parser_Term_prop___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_letPatDecl___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_ne;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__8;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_list___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_modN___elambda__1___closed__3;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__4;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__13;
obj* l_Lean_Parser_Term_explicit___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_seq___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_heq___elambda__1___closed__3;
extern obj* l_Lean_Parser_charLit___closed__1;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__17;
obj* l_Lean_Parser_Term_tparser_x21;
obj* l_Lean_Parser_Term_arrow___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_subst___closed__3;
obj* l_Lean_Parser_Term_show___elambda__1(obj*);
obj* l_Lean_Parser_registerParserAttribute(obj*, obj*, obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_bnot(obj*);
obj* l_Lean_Parser_termParserAttribute;
obj* l_Lean_Parser_Term_sortApp___closed__3;
obj* l_Lean_Parser_Term_andthen___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_match___closed__6;
obj* l_Lean_Parser_Term_letIdDecl___closed__4;
obj* l_Lean_Parser_Term_iff___elambda__1___closed__5;
obj* l_Lean_Parser_Term_div___closed__3;
obj* l_Lean_Parser_Term_typeAscription___closed__4;
obj* l_Lean_Parser_Term_mapConst___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_prod___closed__1;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__5;
obj* l_Lean_Parser_Term_ge___elambda__1___closed__3;
obj* l_Lean_Parser_Term_leftArrow___closed__2;
obj* l_Lean_Parser_Term_ge___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_eq___elambda__1___closed__1;
obj* l_Lean_Parser_Term_band___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_let___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_implicitBinder___closed__2;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_equiv___elambda__1___closed__1;
obj* l_Lean_Parser_Term_structInst;
obj* l_Lean_Parser_Term_le___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_ne___elambda__1___closed__2;
obj* l_Lean_Parser_Term_seqRight___elambda__1___closed__4;
obj* l_Lean_Parser_Term_doSeq___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_tparser_x21(obj*);
obj* l_Lean_Parser_mkTermParserAttribute___closed__1;
obj* l_Lean_Parser_Term_mul___closed__2;
obj* l_Lean_Parser_Term_do___elambda__1___closed__7;
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_match___elambda__1___closed__6;
extern obj* l_Lean_Parser_Level_paren___closed__4;
obj* l_Lean_Parser_Term_add___closed__1;
obj* l_Lean_Parser_Term_arrow___closed__2;
obj* l_Lean_Parser_Term_letIdLhs___closed__3;
obj* l_Lean_Parser_Term_doId___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_show___closed__2;
obj* l_Lean_Parser_Term_letIdDecl;
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_matchAlt___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_id___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_infixL(obj*, obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_simpleBinder___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_letPatDecl___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_match___elambda__1___closed__7;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__19;
obj* l_Lean_Parser_Term_str;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_subtype___closed__6;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_doSeq___elambda__1___spec__2(uint8, uint8, obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bind___closed__2;
obj* l_Lean_Parser_Term_borrowed___closed__5;
obj* l_Lean_Parser_Term_type___closed__2;
obj* l_Lean_Parser_Term_doPat___closed__3;
obj* l_Lean_Parser_Term_modN___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1;
obj* l_Lean_Parser_Term_le___closed__3;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_mul___elambda__1___closed__3;
obj* l_Lean_Parser_Term_binderDefault___closed__1;
obj* l_Lean_Parser_Term_cons___elambda__1___closed__4;
obj* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
obj* l_Lean_Parser_Term_letIdLhs___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_letDecl;
obj* l_Lean_Parser_fieldIdxFn(obj*, obj*);
obj* l_Lean_Parser_Term_matchAlt___closed__4;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bnot___closed__1;
extern obj* l_Lean_Parser_Level_paren___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_modN(obj*);
obj* l_Lean_Parser_Term_bne___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_equation;
obj* l_Lean_Parser_Term_ne___elambda__1___closed__3;
obj* l_Lean_Parser_Term_dollar___elambda__1___closed__2;
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_andM___elambda__1___closed__3;
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__5;
obj* l_Lean_Parser_Term_proj___elambda__1___closed__1;
obj* l_Lean_Parser_Term_namedArgument___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_div___elambda__1___closed__4;
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_do___elambda__1___closed__3;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__7;
obj* l_Lean_Parser_Term_eq___closed__3;
obj* l_Lean_Parser_Term_id;
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_eq___closed__1;
obj* l_Lean_Parser_Term_structInst___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_add;
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_type___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_haveAssign;
obj* l_Lean_Parser_Term_letDecl___closed__1;
obj* l_Lean_Parser_Term_instBinder___closed__2;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__3;
obj* l_Lean_Parser_Term_mapConst___elambda__1___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_proj(obj*);
obj* l_Lean_Parser_Term_match___elambda__1___closed__8;
obj* l_Lean_Parser_Term_char___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_borrowed___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_str(obj*);
obj* l_Lean_Parser_Term_structInst___closed__2;
obj* l_Lean_Parser_checkNoWsBeforeFn(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_cons___closed__1;
obj* l_Lean_Parser_Term_explicitBinder___closed__8;
obj* l_Lean_Parser_Term_if___closed__2;
obj* l_Lean_Parser_Term_depArrow;
obj* l_Lean_Parser_Term_list___elambda__1___closed__4;
extern obj* l_Lean_Parser_Level_paren___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_have___closed__10;
obj* l_Lean_Parser_Term_list___closed__7;
obj* l_Lean_Parser_Term_sorry___closed__2;
obj* l_Lean_Parser_Term_suffices___closed__8;
obj* l_Lean_Parser_Term_have___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_bor(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_char(obj*);
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_add___closed__2;
obj* l_Lean_Parser_Term_checkIsSort___closed__1;
obj* l_Lean_Parser_Term_mapRev___elambda__1___closed__1;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2(uint8, uint8, obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_structInstField___closed__4;
obj* l_Lean_Parser_Term_forall___closed__4;
obj* l_Lean_Parser_Term_bind___elambda__1___closed__1;
obj* l_Lean_Parser_Term_list___elambda__1___closed__1;
obj* l_Lean_Parser_Term_mapConst___closed__1;
obj* l_Lean_Parser_Term_uminus___elambda__1(obj*);
obj* l_Lean_Parser_Term_app___closed__2;
obj* l_Lean_Parser_Term_namedArgument___closed__1;
obj* l_Lean_Parser_Term_if___closed__8;
obj* l_Lean_Parser_Term_iff___closed__1;
obj* l_Lean_Parser_Term_type___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_le(obj*);
obj* l_Lean_Parser_Term_sorry___closed__1;
obj* l_Lean_Parser_Term_append___closed__2;
obj* l_Lean_Parser_Term_matchAlt___closed__2;
obj* l_Lean_Parser_Term_le___elambda__1___closed__2;
obj* l_Lean_Parser_Term_binderDefault___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_binderTactic___closed__3;
obj* l_Lean_Parser_Term_fcomp;
obj* l_Lean_Parser_Term_band___elambda__1___closed__2;
obj* l_Lean_Parser_Term_structInst___closed__12;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_seqRight(obj*);
obj* l_Lean_Parser_Term_sub___elambda__1___closed__3;
obj* l_Lean_Parser_ParserState_mkNode(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_doLet___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_suffices(obj*);
extern obj* l_List_repr___main___rarg___closed__3;
obj* l_Lean_Parser_Term_doLet___elambda__1___closed__1;
obj* l_Lean_Parser_regBuiltinTermParserAttr___closed__2;
obj* l_Lean_Parser_Term_parser_x21___closed__1;
obj* l_Lean_Parser_Term_lt___closed__3;
obj* l_Lean_Parser_Term_letIdDecl___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_leftArrow___closed__1;
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_typeSpec___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_binderIdent;
obj* l_Lean_Parser_Term_str___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_equiv___closed__1;
obj* l_Lean_Parser_Term_explicit___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_str___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_mod___elambda__1___closed__3;
obj* l_Lean_Parser_Term_structInstField___elambda__1(obj*);
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_not___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_dollar___closed__1;
obj* l_Lean_Parser_Term_match___elambda__1___closed__10;
obj* l_Lean_Parser_Term_not___closed__4;
obj* l_Lean_Parser_Term_mapRev___closed__1;
obj* l_Lean_Parser_Term_unicodeInfixR(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_pow___elambda__1___closed__3;
obj* l_Lean_Parser_Term_bind;
obj* l_Lean_Parser_Term_binderType(uint8);
obj* l_Lean_Parser_Term_bor___closed__3;
extern obj* l_Lean_Parser_manyAux___main___closed__1;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__12;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2(uint8, uint8, obj*, uint8, obj*, obj*, obj*);
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__2;
obj* l_Lean_Parser_Term_borrowed___closed__3;
extern obj* l_Lean_Parser_Parser_inhabited___closed__1;
obj* l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_doPat___closed__8;
obj* l_Lean_Parser_Term_doLet;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__1;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
extern obj* l_Lean_Parser_Level_num___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_list___closed__8;
obj* l___regBuiltinParser_Lean_Parser_Term_eq(obj*);
obj* l_Lean_Parser_Term_mapRev___closed__3;
obj* l_Lean_Parser_Term_subst___elambda__1___closed__1;
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_quotedName___closed__4;
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_namedArgument___closed__4;
obj* l_Lean_Parser_Term_fromTerm___closed__4;
obj* l_Lean_Parser_Term_paren___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__6;
obj* l_Lean_Parser_Term_array___closed__2;
namespace lean {
obj* string_append(obj*, obj*);
}
obj* l_Lean_Parser_Term_fun___elambda__1___closed__1;
obj* l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_cdot___closed__4;
obj* l_Lean_Parser_many1Fn___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_pow___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_nomatch___elambda__1(obj*);
obj* l_Lean_Parser_manyAux___main(uint8, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_orM;
obj* l_Lean_Parser_Term_bind___elambda__1___closed__4;
obj* l_Lean_Parser_Term_doSeq___elambda__1___closed__1;
obj* l_Lean_Parser_Term_append___elambda__1___closed__3;
obj* l_Lean_Parser_Term_let___closed__5;
obj* l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__9;
obj* l_Lean_Parser_Term_sub___elambda__1___closed__2;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_array(obj*);
obj* l_Lean_Parser_Term_mul___closed__3;
obj* l_Lean_Parser_Term_paren___closed__1;
obj* l_Lean_Parser_Term_if;
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_do___elambda__1___closed__1;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_iff(obj*);
obj* l_Lean_Parser_Term_proj___elambda__1___closed__3;
uint8 l_Lean_Syntax_isOfKind___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_letDecl___closed__4;
extern obj* l_List_reprAux___main___rarg___closed__1;
obj* l_Lean_Parser_Term_doPat___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_or___elambda__1___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_str___closed__1;
obj* l_Lean_Parser_Term_typeSpec___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_typeAscription___closed__1;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_eq___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_do___closed__2;
obj* l_Lean_Parser_Term_iff;
obj* l_Lean_Parser_Term_do;
obj* l_Lean_Parser_Term_sort___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_type(obj*);
obj* l_Lean_Parser_Term_forall___closed__3;
obj* l_Lean_Parser_Term_beq___closed__3;
obj* l_Lean_Parser_Term_typeAscription___elambda__1(obj*);
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_binderType___closed__3;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__5;
extern obj* l_PersistentHashMap_Stats_toString___closed__5;
obj* l_Lean_Parser_Term_letIdDecl___closed__1;
obj* l_Lean_Parser_Term_doPat;
obj* l_Lean_Parser_Term_emptyC___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_match___elambda__1___closed__3;
obj* l_Lean_Parser_Term_add___elambda__1___closed__2;
obj* l_Lean_Parser_Term_simpleBinder;
obj* l_Lean_Parser_Term_uminus___closed__2;
obj* l_Lean_Parser_Term_if___closed__4;
obj* l_Lean_Parser_Term_binderType___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_tupleTail___elambda__1___closed__2;
obj* l_Lean_Parser_Term_str___closed__1;
obj* l_Lean_Parser_Term_letEqns___closed__2;
obj* l_Lean_Parser_Term_list___closed__6;
obj* l_Lean_Parser_termParser___boxed(obj*, obj*);
obj* l_Lean_Parser_Term_suffices___elambda__1(obj*);
obj* l_Lean_Parser_Term_letIdLhs;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1;
obj* l_Lean_Parser_Term_mod___elambda__1___closed__1;
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_tupleTail___closed__4;
obj* l_Lean_Parser_Term_proj___closed__5;
obj* l_Lean_Parser_Term_doExpr___elambda__1(obj*);
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_if___closed__11;
obj* l_Lean_Parser_Term_bne___elambda__1___closed__3;
obj* l_Lean_Parser_Term_andthen___elambda__1___closed__1;
obj* l_Lean_Parser_Term_mul___elambda__1___closed__2;
obj* l_Lean_Parser_Term_seq___elambda__1___closed__3;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1(uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_pow___closed__2;
obj* l_Lean_Parser_Term_pow;
obj* l_Lean_Parser_Term_bne___elambda__1___closed__1;
obj* l_Lean_Parser_Term_list___elambda__1___closed__5;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__7;
obj* l_Lean_Parser_Term_append___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_list___elambda__1___closed__6;
obj* l_Lean_Parser_Term_explicitBinder___closed__6;
obj* l___regBuiltinParser_Lean_Parser_Term_quotedName(obj*);
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__1;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3;
obj* l_Lean_Parser_Term_bind___elambda__1___closed__3;
obj* l_Lean_Parser_Term_bne___closed__2;
obj* l_Lean_Parser_Term_fun___closed__6;
obj* l_Lean_Parser_Term_match___elambda__1___closed__4;
obj* l_Lean_Parser_tokenFn(obj*, obj*);
obj* l_Lean_Parser_Term_id___closed__4;
obj* l_Lean_Parser_Term_heq___elambda__1(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_let(obj*);
extern obj* l_Char_HasRepr___closed__1;
obj* l_Lean_Parser_Term_equiv___elambda__1___closed__3;
obj* l_Lean_Parser_mkTermParserAttribute___closed__4;
obj* l_Lean_Parser_Term_cdot;
obj* l_Lean_Parser_Term_letEqns;
obj* l_Lean_Parser_Term_leftArrow___elambda__1(obj*);
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__9;
obj* l___regBuiltinParser_Lean_Parser_Term_subst(obj*);
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_gt;
extern obj* l_Lean_Parser_levelParserAttribute;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_sortApp(obj*);
obj* l_Lean_Parser_Term_str___elambda__1(obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bor___elambda__1___closed__1;
extern obj* l_Lean_getBuiltinSearchPath___closed__1;
obj* l_Lean_Parser_Term_mapConst;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__4;
obj* l_Lean_Parser_Term_paren;
obj* l_Lean_Parser_Term_proj___closed__1;
obj* l_Lean_Parser_Term_bracketedDoSeq___closed__3;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_sorry(obj*);
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__4;
extern "C" obj* lean_name_mk_string(obj*, obj*);
obj* l_Lean_Parser_Term_explicit___elambda__1___closed__2;
obj* l_Lean_Parser_Term_list___elambda__1___closed__2;
obj* l_Lean_Parser_Term_uminus___closed__1;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__15;
obj* l_Lean_Parser_Term_bne___elambda__1___closed__4;
obj* l_Lean_Parser_Term_dollar___closed__2;
obj* l_Lean_Parser_Term_binderTactic___closed__1;
obj* l_Lean_Parser_Term_explicitUniv___closed__6;
obj* l_Lean_Parser_Term_doExpr___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_ge___elambda__1___closed__2;
obj* l_Lean_Parser_Term_sort;
obj* l_Lean_Parser_Term_forall___closed__7;
obj* l_Lean_Parser_Term_binderIdent___closed__2;
obj* l_Lean_Parser_Term_append___closed__3;
obj* l_Lean_Parser_Term_dollar___elambda__1___closed__3;
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_structInstSource___closed__2;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_list___closed__1;
obj* l_Lean_Parser_Term_infixL___boxed(obj*, obj*);
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_gt___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bind___closed__1;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_doSeq___elambda__1___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_match(obj*);
obj* l_Lean_Parser_Term_subst;
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__1(uint8, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_num___elambda__1(obj*);
obj* l_Lean_Parser_Term_subtype___closed__4;
obj* l_Lean_Parser_Term_fun___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_structInst___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
namespace lean {
obj* nat_add(obj*, obj*);
}
obj* l_Lean_Parser_Term_char___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_fromTerm___closed__1;
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_fromTerm___elambda__1(obj*);
extern obj* l_Lean_nullKind;
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_explicitUniv___closed__9;
obj* l_Lean_Parser_Term_mod___closed__2;
obj* l_Lean_Parser_strLitFn___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_sorry;
obj* l_Lean_Parser_Term_mapConst___closed__3;
obj* l_Lean_Parser_Term_typeAscription___closed__5;
obj* l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
obj* l_Lean_Parser_Term_orM___closed__3;
obj* l_Lean_Parser_addBuiltinTrailingParser(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_seqLeft___elambda__1___closed__3;
obj* l_Lean_Parser_Term_match;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_add___elambda__1___closed__4;
obj* l_Lean_Parser_Term_ge___closed__1;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__12;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_do___elambda__1___closed__4;
obj* l_Lean_Parser_Term_iff___elambda__1___closed__1;
obj* l_Lean_Parser_Term_explicitBinder___closed__1;
namespace lean {
uint8 nat_dec_eq(obj*, obj*);
}
obj* l_Lean_Parser_Term_band___elambda__1___closed__4;
obj* l_Lean_Parser_Term_fcomp___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_structInstSource___closed__5;
obj* l_Lean_Parser_Term_parser_x21___elambda__1(obj*);
obj* l_Lean_Parser_Term_match___closed__2;
obj* l_Lean_Parser_Term_bne___closed__1;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_binderType___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_fun___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__14;
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_iff___elambda__1___closed__4;
obj* l_Lean_Parser_Term_anonymousCtor___closed__5;
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
obj* l_Lean_Parser_Term_structInst___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_cons___closed__3;
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_seqRight___closed__1;
obj* l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_heq___elambda__1___closed__2;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__4;
obj* l_Lean_Parser_Term_parser_x21___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_prod___elambda__1___closed__3;
obj* l_Lean_Parser_Term_beq___elambda__1___closed__2;
obj* l_Lean_Parser_Term_matchAlt___elambda__1___closed__1;
obj* l_Lean_Parser_Term_let___elambda__1___closed__3;
extern obj* l_Lean_Parser_Level_hole___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_list___closed__9;
obj* l_Lean_Parser_Term_letPatDecl___closed__3;
obj* l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_structInst(obj*);
obj* l_Lean_Parser_Term_fun___elambda__1___closed__8;
obj* l_Lean_Parser_Term_namedArgument___closed__3;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_inaccessible___elambda__1(obj*);
extern obj* l_Lean_Parser_ident___closed__1;
obj* l_Lean_Parser_Term_optIdent___elambda__1(obj*);
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_append;
obj* l_Lean_Parser_Term_depArrow___closed__3;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__5;
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_instBinder___closed__5;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_list___elambda__1___spec__1(uint8, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_tparser_x21___closed__1;
extern obj* l_Lean_Parser_Level_paren___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_have___closed__9;
obj* l_Lean_Parser_Term_explicitUniv;
obj* l_Lean_Parser_Term_explicitUniv___closed__3;
obj* l_Lean_Parser_Term_have___closed__1;
obj* l_Lean_Parser_Term_unicodeInfixL___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_sortApp___elambda__1___closed__1;
extern obj* l_Lean_Parser_Level_hole___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__2(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_symbolFn___rarg___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_parenSpecial___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_seq___elambda__1___closed__2;
obj* l_Lean_Parser_Term_mul___closed__1;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_ne___closed__3;
obj* l_Lean_Parser_Term_paren___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_forall___closed__1;
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_show___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_mkTermParserAttribute___closed__5;
obj* l___regBuiltinParser_Lean_Parser_Term_num___closed__1;
obj* l_Lean_Parser_Term_bind___closed__3;
obj* l_Lean_Parser_Term_orM___elambda__1___closed__1;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_suffices___closed__2;
obj* l_Lean_Parser_Term_band___closed__2;
obj* l_Lean_Parser_Term_have___elambda__1(obj*);
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__6;
obj* l_Lean_Parser_Term_depArrow___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_structInstField___closed__1;
obj* l_Lean_Parser_unicodeSymbolCheckPrecFnAux(obj*, obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_forall___elambda__1___closed__6;
obj* l_Lean_Parser_Term_proj___closed__7;
obj* l_Lean_Parser_Term_letEqns___closed__6;
obj* l_Lean_Parser_Term_doSeq___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_orM___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_beq___elambda__1___closed__4;
obj* l_Lean_Parser_Term_have___elambda__1___boxed(obj*);
obj* l_Lean_Parser_strAux___main(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_fcomp___elambda__1___closed__3;
obj* l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_subst___elambda__1___closed__3;
obj* l_Lean_Parser_Term_checkIsSort___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_subtype;
obj* l_Lean_Parser_Term_fun___closed__7;
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_infixL___elambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_if___elambda__1(obj*);
obj* l_Lean_Parser_Term_emptyC;
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_cdot___closed__3;
obj* l_Lean_Parser_Term_hole___closed__2;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_bor___closed__1;
obj* l_Lean_Parser_Term_borrowed___closed__1;
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_inaccessible___closed__3;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_structInst___elambda__1___spec__2(uint8, uint8, obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_if___closed__9;
obj* l_Lean_Parser_Term_haveAssign___closed__3;
obj* l_Lean_Parser_Term_forall;
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__3;
namespace lean {
uint8 string_dec_eq(obj*, obj*);
}
obj* l_Lean_Parser_Term_parser_x21___closed__5;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_match___elambda__1___closed__1;
obj* l_Lean_Parser_Term_ge___elambda__1___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_band(obj*);
obj* l_Lean_Parser_Term_explicitUniv___closed__1;
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_doSeq___elambda__1___spec__1(uint8, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
obj* l_Lean_Parser_Term_structInstSource___closed__4;
obj* l_Lean_Parser_Term_parenSpecial___closed__3;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_structInst___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_nomatch___closed__5;
obj* l_Lean_Parser_Term_explicitBinder___closed__3;
obj* l_Lean_Parser_Term_subtype___closed__5;
obj* l___regBuiltinParser_Lean_Parser_Term_and(obj*);
obj* l_Lean_Parser_Term_letIdLhs___closed__1;
obj* l_Lean_Parser_Term_mod;
obj* l___regBuiltinParser_Lean_Parser_Term_mapConstRev(obj*);
obj* l_Lean_Parser_Term_do___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_proj;
obj* l_Lean_Parser_Term_bor___elambda__1___closed__4;
obj* l_Lean_Parser_Term_forall___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4;
obj* l_Lean_Parser_Term_not___closed__6;
obj* l___regBuiltinParser_Lean_Parser_Term_sort(obj*);
obj* l_Lean_Parser_numLitFn___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_letIdLhs___closed__4;
extern obj* l_Lean_Parser_Level_paren___closed__2;
obj* l_Lean_Parser_Term_do___elambda__1___closed__5;
obj* l_Lean_Parser_Term_le___elambda__1___closed__5;
obj* l_Lean_Parser_Term_letDecl___closed__3;
obj* l_Lean_Parser_Term_nomatch___closed__3;
obj* l_Lean_Parser_Term_bracketedDoSeq___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_fcomp___elambda__1___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_sub(obj*);
obj* l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_explicit___closed__1;
obj* l_Lean_Parser_Term_binderIdent___closed__3;
obj* l_Lean_Parser_noFirstTokenInfo(obj*);
obj* l_Lean_Parser_Term_eq___elambda__1___closed__4;
obj* l_Lean_Parser_Term_mapConstRev___elambda__1___closed__1;
obj* l_Lean_Parser_ParserState_pushSyntax(obj*, obj*);
obj* l_Lean_Parser_Term_num___closed__2;
obj* l_Lean_Parser_Term_mapConstRev___elambda__1___closed__3;
obj* l_Lean_Parser_Term_depArrow___closed__6;
obj* l_Lean_Parser_Term_ne___elambda__1___closed__1;
obj* l_Lean_Parser_Term_do___elambda__1___closed__6;
obj* l_Lean_Parser_Term_typeAscription___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_nomatch(obj*);
obj* l_Lean_Parser_Term_explicitBinder___closed__2;
obj* l_Lean_Parser_Term_fun___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_andthen;
obj* l_Lean_Parser_Term_emptyC___closed__4;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_do___closed__6;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__1(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_haveAssign___closed__4;
obj* l_Lean_Parser_Term_instBinder___closed__7;
obj* l_Lean_Parser_Term_and___elambda__1___closed__4;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__5;
obj* l_Lean_Parser_Term_and___elambda__1___closed__5;
obj* l_Lean_Parser_Term_iff___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_tparser_x21___closed__5;
obj* l_Lean_Parser_Term_bind___elambda__1___closed__2;
obj* l_Lean_Parser_optionaInfo(obj*);
obj* l_Lean_Parser_Term_letIdLhs___elambda__1___closed__1;
obj* l_Lean_Parser_Term_match___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_doLet___elambda__1___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_id(obj*);
obj* l_Lean_Parser_Term_forall___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_explicit(obj*);
obj* l_Lean_Parser_Term_structInstSource___closed__3;
obj* l_Lean_Parser_Term_sorry___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_bne(obj*);
obj* l_Lean_Parser_Term_add___elambda__1___closed__3;
obj* l_Lean_Parser_Term_binderIdent___elambda__1(obj*);
obj* l_Lean_Parser_Term_letEqns___closed__5;
obj* l_Lean_Parser_Term_mod___elambda__1___closed__2;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__15;
obj* l_Lean_Parser_Term_if___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_depArrow(obj*);
obj* l_Lean_Parser_Term_gt___closed__1;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__2(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_suffices___closed__7;
obj* l_Lean_Parser_Term_if___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_parenSpecial___closed__4;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_doSeq___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_prod;
obj* l_Lean_Parser_Term_letDecl___closed__2;
obj* l_Lean_Parser_Term_doElem___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_orelse___closed__2;
obj* l_Lean_Parser_Term_instBinder___elambda__1(obj*);
obj* l_Lean_Parser_Term_structInstSource___closed__1;
obj* l_Lean_Parser_Term_explicitUniv___closed__4;
extern obj* l_Lean_Parser_numLit___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_div(obj*);
obj* l_Lean_Parser_Term_andM___closed__1;
obj* l_Lean_Parser_Term_app___elambda__1___closed__2;
obj* l_Lean_Parser_Term_sub___closed__3;
obj* l_Lean_Parser_Term_parser_x21___closed__3;
obj* l_Lean_Parser_Term_append___elambda__1___closed__1;
obj* l_Lean_Parser_Term_optType___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_num___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_modN___elambda__1___closed__2;
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_pow___closed__1;
obj* l_Lean_Parser_Term_emptyC___closed__3;
obj* l_Lean_Parser_Term_mapRev___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_app___closed__4;
obj* l_Lean_Parser_Term_proj___closed__4;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_unicodeInfixL___elambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_fcomp___elambda__1___closed__4;
obj* l_Lean_Parser_Term_prod___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_paren(obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_fcomp___closed__1;
obj* l_Lean_Parser_Term_match___elambda__1___closed__5;
obj* l_Lean_Parser_Term_haveAssign___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_orelse(obj*);
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_show___closed__6;
obj* l___regBuiltinParser_Lean_Parser_Term_prop(obj*);
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__8;
obj* l_Lean_Parser_identFn___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_optIdent___closed__3;
obj* l_Lean_Parser_Term_unicodeInfixR___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__6;
extern obj* l_Sigma_HasRepr___rarg___closed__2;
obj* l_Lean_Parser_Term_uminus;
obj* l_Lean_Parser_Term_subtype___closed__7;
obj* l_String_trim(obj*);
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_structInst___closed__10;
obj* l_Lean_Parser_Term_sortApp___closed__5;
obj* l_Lean_Parser_Term_explicit___closed__3;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__2(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_andM___closed__2;
obj* l_Lean_Parser_Term_letPatDecl___closed__4;
obj* l_Lean_Parser_optionalFn___rarg(obj*, obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_append(obj*);
obj* l_Lean_Parser_Term_heq___elambda__1___closed__4;
obj* l_Lean_Parser_regBuiltinTermParserAttr___closed__4;
obj* l_Lean_Parser_Term_ne___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_andM___elambda__1___closed__4;
obj* l_Lean_Parser_Term_bor___elambda__1___closed__2;
extern obj* l_System_FilePath_dirName___closed__1;
extern obj* l_Lean_Parser_symbolNoWsFn___closed__1;
obj* l_Array_shrink___main___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_borrowed___elambda__1(obj*);
obj* l_Lean_Parser_Term_or;
obj* l_Lean_Parser_Term_id___elambda__1___closed__2;
obj* l_Lean_Parser_Term_simpleBinder___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_binderDefault;
obj* l_Lean_Parser_Term_explicitBinder___closed__4;
obj* l_Lean_Parser_regBuiltinTermParserAttr___closed__1;
obj* l_Lean_Parser_Term_array___closed__3;
obj* l_Lean_Parser_Term_show___closed__5;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_simpleBinder___elambda__1___spec__1(uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__3;
extern obj* l_Int_repr___main___closed__1;
obj* l_Lean_Parser_Term_sortApp___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_have___closed__7;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__9;
obj* l_Lean_Parser_Term_borrowed___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_seqLeft___elambda__1___closed__4;
obj* l_Lean_Parser_Term_show;
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_explicitBinder(uint8);
obj* l_Lean_Parser_Term_heq___elambda__1___closed__5;
obj* l_Lean_Parser_Term_pow___elambda__1___closed__2;
obj* l_Lean_Parser_Term_band___closed__1;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__3;
obj* l_Lean_Parser_Term_match___closed__8;
obj* l_Lean_Parser_Term_instBinder___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_div___elambda__1___closed__2;
obj* l_Lean_Parser_Term_prod___elambda__1___closed__1;
obj* l_Lean_Parser_Term_uminus___closed__5;
obj* l_Lean_Parser_Term_doId___closed__3;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_let___elambda__1___closed__6;
obj* l___regBuiltinParser_Lean_Parser_Term_char___closed__1;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___boxed(obj*, obj*, obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_explicitBinder___closed__5;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_simpleBinder___elambda__1___closed__1;
obj* l_Lean_Parser_symbolNoWsInfo(obj*, obj*);
obj* l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_instBinder___closed__6;
obj* l_Lean_Parser_Term_tupleTail___closed__3;
obj* l_Lean_Parser_unicodeSymbolFn___rarg___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_fun___elambda__1___closed__17;
obj* l_Lean_Parser_Term_have___closed__4;
obj* l_Lean_Parser_Term_doElem___closed__2;
obj* l_Lean_Parser_Term_fcomp___closed__2;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2(uint8, uint8, obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_structInstField___closed__2;
obj* l_Lean_Parser_Term_id___elambda__1(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_mapConst(obj*);
obj* l_Lean_Parser_Term_doExpr___closed__2;
obj* l_Lean_Parser_Term_seq___elambda__1___closed__1;
obj* l_Lean_Parser_Term_not___elambda__1___rarg___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_or(obj*);
obj* l_Lean_Parser_Term_ge___closed__2;
obj* l_Lean_Parser_Term_matchAlt___closed__3;
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__8;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__7;
obj* l_Lean_Parser_Term_structInstSource___closed__6;
obj* l_Lean_Parser_Term_seqRight___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_proj___elambda__1___closed__6;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__14;
obj* l_Lean_Parser_Term_instBinder;
obj* l___regBuiltinParser_Lean_Parser_Term_arrow(obj*);
obj* l_Lean_Parser_Term_char___closed__1;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_subst___elambda__1___closed__4;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__11;
obj* l_Lean_Parser_Term_div___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_parser_x21___closed__2;
obj* l_Lean_Parser_Term_binderDefault___closed__3;
obj* l_Lean_Parser_Term_arrow___elambda__1___closed__3;
obj* l_Lean_Parser_Term_parser_x21;
obj* l_Lean_Parser_Term_mod___closed__1;
obj* l_Lean_Parser_Term_structInstField___closed__3;
obj* l_Lean_Parser_Term_seqRight___elambda__1___closed__2;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__2(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_seq___closed__2;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__11;
obj* l_Lean_Parser_Term_map___closed__1;
obj* l_Lean_Parser_Term_bne___elambda__1___closed__2;
obj* l_Lean_Parser_Term_lt___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_letPatDecl___closed__6;
obj* l_Lean_Parser_Term_paren___closed__5;
obj* l_Lean_Parser_Term_map___closed__2;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__16;
obj* l_Lean_Parser_ParserState_mkError(obj*, obj*);
obj* l_Lean_Parser_Term_dollar___elambda__1___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_have(obj*);
obj* l_Lean_Parser_Term_arrow___elambda__1___closed__2;
obj* l_Lean_Parser_Term_sub___closed__2;
obj* l_Lean_Parser_Term_and___closed__3;
obj* l_Lean_Parser_Term_list;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4;
obj* l_Lean_Parser_Term_gt___elambda__1___closed__1;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_fromTerm___closed__5;
obj* l_Lean_Parser_Term_doExpr___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_nodeInfo(obj*, obj*);
obj* l_Lean_Parser_Term_subst___closed__2;
obj* l_Lean_Parser_Term_optIdent___closed__4;
obj* l_Lean_Parser_Term_proj___elambda__1___closed__2;
obj* l_Lean_Parser_Term_have___closed__2;
obj* l_Lean_Parser_Term_implicitBinder___elambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_proj___elambda__1(obj*, obj*, obj*);
obj* l_Array_size(obj*, obj*);
obj* l_Lean_Parser_Term_letPatDecl;
obj* l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__1;
obj* l_Lean_Parser_Term_list___closed__3;
obj* l_Lean_Parser_Term_seq___elambda__1___closed__4;
obj* l_Lean_Parser_Term_bne___closed__3;
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_array___elambda__1___closed__4;
obj* l_Lean_Parser_Term_mapConst___elambda__1___closed__4;
obj* l_Lean_Parser_Term_mapConstRev___closed__1;
obj* l_Lean_Parser_Term_anonymousCtor___closed__2;
obj* l_Lean_Parser_Term_binderTactic___elambda__1(obj*);
obj* l_Lean_Parser_Term_fromTerm___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_seqRight___elambda__1___closed__3;
obj* l_Lean_Parser_Term_append___closed__1;
obj* l_Lean_Parser_Term_binderDefault___closed__2;
obj* l_Lean_Parser_Term_fromTerm___closed__2;
obj* l_Lean_Parser_Term_binderType___elambda__2___boxed(obj*);
obj* l_Lean_Parser_Term_typeAscription;
obj* l_Lean_Parser_Term_orM___elambda__1___closed__3;
obj* l_Lean_Parser_Term_mapConst___elambda__1___closed__1;
obj* l_Lean_Parser_Term_binderTactic___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1(uint8, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_append___elambda__1___closed__4;
obj* l_Lean_Parser_Term_mapConstRev___closed__2;
obj* l_Lean_Parser_Term_inaccessible;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__10;
obj* l_Lean_Parser_Term_unicodeInfixR___elambda__1(obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_let___elambda__1___closed__1;
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
obj* l_Lean_Parser_Term_matchAlt___closed__1;
obj* l_Lean_Parser_Term_if___closed__6;
obj* l_Lean_Parser_Term_structInstSource___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7;
obj* l_Lean_Parser_Term_have___closed__8;
obj* l_Lean_Parser_Term_gt___elambda__1___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_not(obj*);
obj* l_Lean_Parser_Term_fun___closed__1;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_lt___elambda__1___closed__4;
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_structInst___elambda__1___spec__1(uint8, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_lt___closed__1;
obj* l_Lean_Parser_Term_prod___elambda__1___closed__2;
obj* l_Lean_Parser_Term_modN___closed__2;
extern obj* l_Lean_Parser_strLit___closed__1;
obj* l_Lean_Parser_Term_andthen___elambda__1___closed__3;
obj* l_Lean_Parser_Term_equiv___elambda__1___closed__2;
obj* l_Lean_Parser_Term_heq;
obj* l_Lean_Parser_Term_depArrow___closed__4;
obj* l_Lean_Parser_Term_andM___closed__3;
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_iff___elambda__1___closed__2;
obj* l_Lean_Parser_Term_tupleTail___closed__5;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_borrowed___closed__2;
obj* l_Lean_Parser_Term_forall___closed__8;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_cdot___closed__1;
extern obj* l_Lean_Parser_Level_paren___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_explicit;
obj* l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_letEqns___closed__4;
obj* l_Lean_Parser_Term_doId___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_orM___elambda__1___closed__2;
obj* l_Lean_Parser_Term_pow___elambda__1___closed__4;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__1___boxed(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_append___elambda__1___closed__2;
obj* l_Lean_Parser_Term_quotedName___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_binderType___closed__4;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__12;
obj* l_Lean_Parser_Term_structInst___closed__7;
extern obj* l_Lean_Parser_ParserAttribute_inhabited___closed__4;
obj* l_Lean_Parser_Term_bnot___elambda__1(obj*);
obj* l_Lean_Parser_Term_prop___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_subtype___closed__1;
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_nomatch___closed__1;
obj* l_Lean_Parser_Term_bnot___closed__5;
obj* l_Lean_Parser_Term_explicitUniv___closed__7;
obj* l_Lean_Parser_Term_optType___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_map___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_array___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_app(obj*);
obj* l_Lean_Parser_Term_beq___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_seq___closed__1;
obj* l_Lean_Parser_Term_list___closed__5;
obj* l_Lean_Parser_Term_do___elambda__1___closed__2;
obj* l_Lean_Parser_Term_explicit___closed__2;
obj* l_Lean_Parser_Term_hole___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_paren___closed__6;
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_orelse;
obj* l_Lean_Parser_Term_implicitBinder___boxed(obj*);
obj* l_Lean_Parser_Term_anonymousCtor___closed__7;
obj* l___regBuiltinParser_Lean_Parser_Term_equiv(obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
obj* l_Lean_Parser_Term_depArrow___closed__2;
obj* l_Lean_Parser_Term_paren___closed__3;
obj* l_Lean_Parser_Term_have___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_let___closed__3;
obj* l_Lean_Parser_Term_bind___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__5;
obj* l_Lean_Parser_Term_match___elambda__1___closed__11;
obj* l_Lean_Parser_Term_sorry___closed__4;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_suffices___closed__5;
obj* l_Lean_Parser_Term_bracktedBinder(uint8);
obj* l_Lean_Parser_Term_prop___closed__3;
obj* l_Lean_Parser_Term_orelse___elambda__1___closed__4;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_list___closed__2;
obj* l_Lean_Parser_Term_sort___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_equiv___closed__3;
obj* l_Lean_Parser_Term_match___closed__9;
obj* l_Lean_Parser_Term_bor___elambda__1___closed__3;
obj* l_Lean_Parser_Term_match___elambda__1___closed__9;
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_optType___elambda__1(obj*);
obj* l_Lean_Parser_Term_namedPattern___closed__1;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__9;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__2;
obj* l_Lean_Parser_Term_doPat___closed__7;
obj* l_Lean_Parser_Term_optIdent;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_not___closed__5;
namespace lean {
uint8 nat_dec_le(obj*, obj*);
}
obj* l_Lean_Parser_Term_quotedName___closed__5;
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_mapRev___elambda__1___closed__4;
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_list___elambda__1___closed__9;
obj* l_Lean_Parser_Term_checkIsSort___closed__2;
obj* l_Lean_Parser_Term_sub___elambda__1___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_show(obj*);
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__9;
obj* l___regBuiltinParser_Lean_Parser_Term_prod(obj*);
obj* l_Lean_Parser_Term_bracketedDoSeq___closed__2;
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_char;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__1;
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_array___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_andthen___elambda__1___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_beq(obj*);
obj* l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
obj* l_Lean_Parser_Term_binderTactic___closed__2;
obj* l_Lean_Parser_charLitFn___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_show___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_do___closed__5;
obj* l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_structInst___elambda__1___closed__8;
obj* l_Lean_Parser_Term_mapRev___elambda__1___closed__2;
obj* l_Lean_Parser_Term_le___elambda__1___closed__4;
obj* l_Lean_Parser_Term_modN___elambda__1___closed__4;
obj* l_Lean_Parser_Term_mapRev___closed__2;
obj* l_Lean_Parser_Term_match___elambda__1___boxed(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_id___elambda__1___closed__1;
obj* l_Lean_Parser_Term_instBinder___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_cons___closed__2;
obj* l___regBuiltinParser_Lean_Parser_Term_list(obj*);
obj* l_Lean_Parser_Term_if___closed__7;
obj* l_Lean_Parser_Term_equiv___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_andthen___closed__1;
namespace lean {
obj* string_utf8_byte_size(obj*);
}
obj* l_Lean_Parser_Term_ne___closed__1;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__8;
obj* l_Lean_Parser_Term_seqLeft___closed__1;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_gt___closed__2;
obj* l_Lean_Parser_Term_tupleTail___closed__1;
obj* l_Lean_Parser_Term_doExpr___closed__1;
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_letIdDecl___closed__3;
obj* l_Lean_Parser_Term_explicitBinder___boxed(obj*);
obj* l_Lean_Parser_Term_do___closed__4;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__6;
obj* l_Lean_Parser_Term_binderType___elambda__1(obj*);
obj* l_Lean_Parser_Term_nomatch;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__4;
obj* l_Lean_Parser_Term_leftArrow;
obj* l_Lean_Parser_Term_letIdLhs___closed__6;
obj* l___regBuiltinParser_Lean_Parser_Term_ge(obj*);
obj* l_Lean_Parser_Term_subtype___closed__10;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__13;
obj* l_Lean_Parser_Term_namedPattern___elambda__1(obj*);
obj* l_Lean_Parser_Term_doPat___closed__4;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_orM___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_num(obj*);
obj* l_Lean_Parser_Term_prop;
obj* l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_namedPattern___closed__2;
obj* l_Lean_Parser_Term_prod___elambda__1___closed__4;
obj* l_Lean_Parser_Term_match___closed__4;
obj* l_Lean_Parser_Term_namedPattern;
obj* l_Lean_Parser_Term_optIdent___closed__1;
obj* l_Lean_Parser_Term_matchAlt;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_list___elambda__1___closed__8;
obj* l_Lean_Parser_Term_instBinder___closed__3;
extern obj* l_Lean_formatEntry___closed__1;
obj* l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2;
obj* l_Lean_Parser_Term_or___elambda__1___closed__2;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__16;
obj* l_Lean_Parser_Term_le___elambda__1___closed__1;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_explicit___closed__5;
obj* l_Lean_Parser_Term_matchAlt___closed__6;
obj* l_Lean_Parser_Term_typeSpec___closed__3;
obj* l_Lean_Parser_unicodeSymbolInfo(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_type;
obj* l___regBuiltinParser_Lean_Parser_Term_subtype(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_mod(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_emptyC(obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_cons(obj*);
obj* l_Lean_Parser_Term_tparser_x21___elambda__1(obj*);
obj* l_Lean_Parser_Term_explicitUniv___closed__2;
obj* l_Lean_Parser_Term_le___elambda__1___closed__3;
obj* l_Lean_Parser_Term_nomatch___closed__4;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_structInstField___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_array___closed__4;
obj* l_Lean_Parser_Term_pow___closed__3;
obj* l_Lean_FileMap_toPosition(obj*, obj*);
obj* l_Lean_Parser_Term_eq___closed__2;
obj* l_Lean_Parser_Term_modN___elambda__1___closed__1;
obj* l___regBuiltinParser_Lean_Parser_Term_pow(obj*);
obj* l_Lean_Parser_Term_binderType___boxed(obj*);
obj* l_Lean_Parser_Term_anonymousCtor;
obj* l_Lean_Parser_Term_fun___closed__2;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_forall___closed__6;
obj* l_Lean_Parser_Term_implicitBinder___closed__1;
obj* l_Lean_Parser_Term_inaccessible___closed__2;
obj* l_Lean_Parser_Term_subst___closed__1;
obj* l_Lean_Parser_Term_binderDefault___elambda__1(obj*);
obj* l_Lean_Parser_Term_structInst___closed__4;
obj* l___regBuiltinParser_Lean_Parser_Term_char___closed__2;
obj* l_Lean_Parser_Term_binderType___closed__5;
extern obj* l_Lean_Parser_epsilonInfo;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__11;
obj* l_Lean_Parser_Term_namedArgument___closed__5;
obj* l_Lean_Parser_Term_letIdLhs___closed__2;
obj* l_Lean_Parser_Term_cdot___closed__2;
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_proj___closed__2;
obj* l_Lean_Parser_Term_and___closed__1;
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_checkWsBeforeFn(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_do___closed__1;
obj* l_Lean_Parser_Term_seqLeft___elambda__1___closed__2;
obj* l_Lean_Parser_Term_dollar___closed__3;
obj* l_Lean_Parser_Term_letIdDecl___closed__5;
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
obj* l_Lean_Parser_Term_doSeq___closed__2;
obj* l_Lean_Parser_Term_add___closed__3;
obj* l_Lean_Parser_Term_hole___closed__3;
obj* l_Lean_Parser_Term_letIdDecl___closed__2;
obj* l_Lean_Parser_Term_type___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_eq;
obj* l_Lean_Parser_Term_explicitUniv___closed__5;
obj* l___regBuiltinParser_Lean_Parser_Term_heq(obj*);
obj* l_Lean_Parser_Term_prop___elambda__1(obj*);
obj* l_Lean_Parser_Term_paren___closed__4;
obj* l_Lean_Parser_Term_mapRev;
obj* l_Lean_Parser_Term_doId___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_let___elambda__1___closed__2;
obj* l_Lean_Parser_Term_structInst___closed__9;
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg(obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_ne(obj*);
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_if___closed__3;
obj* l_Lean_Parser_Term_sorry___elambda__1(obj*);
obj* l_Lean_Parser_Term_simpleBinder___closed__2;
obj* l_Lean_Parser_Term_checkIsSort;
obj* l_Lean_Parser_Term_or___closed__2;
obj* l_Lean_Parser_Term_typeSpec___elambda__1(obj*);
obj* l_Lean_Parser_Term_not___closed__2;
obj* l_Lean_Parser_Term_or___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_not___elambda__1(obj*);
obj* l_Lean_Parser_Term_le___closed__1;
obj* l_Lean_Parser_Term_bracktedBinder___boxed(obj*);
obj* l_Lean_Parser_Term_tupleTail___closed__2;
obj* l_Lean_Parser_Term_structInstField;
obj* l_Lean_Parser_Term_seq;
extern obj* l_List_repr___main___rarg___closed__2;
obj* l_Lean_Parser_Term_andthen___closed__3;
obj* l_Lean_Parser_Term_doId___closed__6;
obj* l_Lean_Parser_Term_binderDefault___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_forall___elambda__1___closed__1;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_cons___elambda__1(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_andM(obj*);
obj* l_Lean_Parser_Term_arrow___closed__3;
obj* l_Lean_Parser_Term_not___closed__3;
obj* l_Lean_Parser_Term_bnot___closed__4;
obj* l_Lean_Parser_Term_doId;
obj* l_Lean_Parser_Term_mapConst___closed__2;
obj* l_Lean_Parser_Term_simpleBinder___closed__3;
obj* l_Lean_Parser_Term_explicitBinder___closed__7;
obj* l_Lean_Parser_Term_dollar___elambda__1___closed__1;
obj* l_Lean_Parser_Term_array___closed__5;
obj* l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
obj* l_Lean_Parser_Term_lt___closed__2;
obj* l_Lean_Parser_Term_let___closed__1;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
obj* l_Lean_Parser_Term_match___closed__3;
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__1(obj*, uint8, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_mapConstRev___closed__3;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__9;
obj* l_Lean_Parser_Term_forall___closed__5;
obj* l_Lean_Parser_Term_prop___closed__2;
obj* l_Lean_Parser_Term_doElem;
obj* l_Lean_Parser_Term_emptyC___elambda__1(obj*);
obj* l_Lean_Parser_Term_sub___closed__1;
obj* l_Lean_Parser_Term_array___elambda__1___closed__1;
obj* l_Lean_Parser_Term_do___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_andthen(obj*);
obj* l_Lean_Parser_Term_leftArrow___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
obj* l_Lean_Parser_Term_if___elambda__1___rarg___closed__12;
obj* l___regBuiltinParser_Lean_Parser_Term_gt(obj*);
obj* l_Lean_Parser_Term_div;
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_quotedName___closed__3;
obj* l_Lean_Parser_Term_if___closed__5;
obj* l_Lean_Parser_Term_div___elambda__1___closed__3;
obj* l_Lean_Parser_Term_iff___closed__3;
obj* l_Lean_Parser_Term_mapConst___elambda__1___closed__2;
obj* l_Lean_Parser_Term_iff___closed__2;
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7;
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_explicitBinder___closed__9;
obj* l_Lean_Parser_Term_doExpr___closed__3;
obj* l_Lean_Parser_Term_structInst___closed__6;
obj* l_Lean_Parser_Term_sort___closed__1;
obj* l_Lean_Parser_Term_app___closed__1;
obj* l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
obj* l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_mkTermParserAttribute___closed__2;
obj* l_Lean_Parser_Term_mul___elambda__1___closed__1;
obj* l_Lean_Parser_Term_proj___elambda__1___closed__4;
obj* l_Lean_Parser_Term_suffices___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_if___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_let___closed__7;
obj* l_Lean_Parser_Term_typeSpec;
obj* l_Lean_Parser_Term_bracktedBinder___elambda__1(obj*, obj*, obj*, obj*, obj*);
obj* l_Lean_Parser_Term_div___closed__1;
obj* l_Lean_Parser_Term_binderIdent___closed__1;
obj* l_Lean_Parser_Term_array___elambda__1___closed__3;
obj* l_Lean_Parser_Term_letPatDecl___closed__1;
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_doElem___closed__5;
obj* l_Lean_Parser_Term_structInstSource___elambda__1(obj*);
obj* l_Lean_Parser_ParserState_mkErrorsAt(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__3;
obj* l_Lean_Parser_Term_letDecl___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_bor;
obj* l_Lean_Parser_Term_ge;
obj* l_Lean_Parser_Term_orM___closed__2;
obj* l_Lean_Parser_Term_orelse___elambda__1___closed__2;
obj* l_Lean_Parser_Term_id___closed__1;
obj* l_Lean_Parser_Term_andM___elambda__1___closed__1;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__7;
obj* l_Lean_Parser_Term_uminus___elambda__1___boxed(obj*);
obj* l_Lean_Parser_Term_doLet___closed__3;
obj* l_Lean_Parser_Term_sort___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__5;
obj* l_Lean_Parser_Term_fcomp___closed__3;
obj* l_Lean_Parser_Term_fun___closed__5;
obj* l_Lean_Parser_Term_fun;
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_and___elambda__1___closed__2;
obj* l_Lean_Parser_Term_map___closed__3;
obj* l_Lean_Parser_Term_prod___elambda__1(obj*, obj*, obj*);
obj* l_Lean_Parser_Term_not___closed__1;
extern obj* l_Lean_Parser_fieldIdx___closed__1;
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__6;
obj* l_Lean_Parser_Term_doId___closed__2;
obj* l_Lean_Parser_Term_fun___elambda__1___closed__2;
obj* l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__1;
obj* l_Lean_Parser_Term_letIdLhs___closed__5;
obj* l_Lean_Parser_Term_subtype___closed__8;
obj* l_Lean_Parser_Term_type___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_and___elambda__1(obj*, obj*, obj*);
obj* l___regBuiltinParser_Lean_Parser_Term_mul(obj*);
obj* l_Lean_Parser_Term_band;
obj* l_Lean_Parser_Term_cdot___elambda__1(obj*);
obj* l_Lean_Parser_Term_doExpr;
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_Term_depArrow___elambda__1___closed__13;
obj* l_Lean_Parser_Term_fromTerm___closed__3;
obj* l_Lean_Parser_Term_map___elambda__1___closed__4;
obj* l_Lean_Parser_Term_letEqns___elambda__1___closed__1;
obj* l_Lean_Parser_Term_forall___elambda__1___closed__10;
obj* l_Lean_Parser_Term_match___closed__10;
obj* l_Lean_Parser_Term_anonymousCtor___closed__6;
obj* l_Lean_Parser_Term_seqLeft___elambda__1___closed__1;
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg(obj*, obj*);
obj* l_Lean_Parser_Term_fun___elambda__1___closed__3;
obj* l_Lean_Parser_sepByInfo(obj*, obj*);
obj* l_Lean_Parser_Term_lt___elambda__1___closed__2;
obj* l_Lean_Parser_Term_match___closed__7;
obj* l_Lean_Parser_Term_if___closed__10;
obj* l_Lean_Parser_Term_sort___closed__3;
obj* l___regBuiltinParser_Lean_Parser_Term_lt(obj*);
obj* l_Lean_Parser_Term_let___elambda__1___closed__7;
obj* l_Lean_Parser_Term_let___elambda__1___closed__5;
obj* l_Lean_Parser_Term_map___elambda__1___closed__3;
obj* l_Lean_Parser_Term_lt;
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4;
obj* l_Lean_Parser_mkBuiltinParsingTablesRef(obj*);
obj* l_Lean_Parser_Term_heq___closed__2;
obj* l_Lean_Parser_Term_heq___closed__3;
obj* l_Lean_Parser_Term_list___elambda__1___closed__7;
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__3;
obj* l_Lean_Parser_Term_band___closed__3;
obj* l_Lean_Parser_Term_app;
obj* l_Lean_Parser_Term_optIdent___closed__2;
obj* l_Lean_Parser_Term_seqRight___elambda__1___closed__1;
obj* _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("builtinTermParser");
return x_1;
}
}
obj* _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_regBuiltinTermParserAttr___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("builtinTermParsingTable");
return x_1;
}
}
obj* _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_declareLeadingBuiltinParser___closed__1;
x_2 = l_Lean_Parser_regBuiltinTermParserAttr___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_regBuiltinTermParserAttr(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; 
x_2 = l_Lean_Parser_regBuiltinTermParserAttr___closed__2;
x_3 = l_Lean_Parser_regBuiltinTermParserAttr___closed__4;
x_4 = l_Lean_Parser_registerBuiltinParserAttribute(x_2, x_3, x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_mkTermParserAttribute___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("termParser");
return x_1;
}
}
obj* _init_l_Lean_Parser_mkTermParserAttribute___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_mkTermParserAttribute___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_mkTermParserAttribute___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_builtinTermParsingTable;
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_mkTermParserAttribute___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("term");
return x_1;
}
}
obj* _init_l_Lean_Parser_mkTermParserAttribute___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("term parser");
return x_1;
}
}
obj* l_Lean_Parser_mkTermParserAttribute(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_2 = l_Lean_Parser_mkTermParserAttribute___closed__2;
x_3 = l_Lean_Parser_mkTermParserAttribute___closed__4;
x_4 = l_Lean_Parser_mkTermParserAttribute___closed__5;
x_5 = l_Lean_Parser_mkTermParserAttribute___closed__3;
x_6 = l_Lean_Parser_registerParserAttribute(x_2, x_3, x_4, x_5, x_1);
return x_6;
}
}
obj* l_Lean_Parser_termParser___lambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
x_5 = l_Lean_Parser_termParserAttribute;
x_6 = l_Lean_Parser_ParserAttribute_runParser(x_5, x_1, x_3, x_4);
return x_6;
}
}
obj* l_Lean_Parser_termParser(uint8 x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; 
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser___lambda__1___boxed), 4, 1);
lean::closure_set(x_3, 0, x_2);
x_4 = l_Lean_Parser_Parser_inhabited___closed__1;
x_5 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_5, 0, x_4);
lean::cnstr_set(x_5, 1, x_3);
return x_5;
}
}
obj* l_Lean_Parser_termParser___lambda__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; 
x_5 = l_Lean_Parser_termParser___lambda__1(x_1, x_2, x_3, x_4);
lean::dec(x_2);
return x_5;
}
}
obj* l_Lean_Parser_termParser___boxed(obj* x_1, obj* x_2) {
_start:
{
uint8 x_3; obj* x_4; 
x_3 = lean::unbox(x_1);
lean::dec(x_1);
x_4 = l_Lean_Parser_termParser(x_3, x_2);
return x_4;
}
}
obj* l_Lean_Parser_Term_unicodeInfixR___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_2);
lean::inc(x_4);
x_5 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_2);
x_6 = lean::cnstr_get(x_4, 3);
lean::inc(x_6);
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
x_7 = lean::apply_3(x_1, x_2, x_3, x_5);
return x_7;
}
else
{
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
}
obj* l_Lean_Parser_Term_unicodeInfixR(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
lean::inc(x_3);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = l_String_trim(x_1);
x_6 = l_String_trim(x_2);
lean::inc(x_6);
lean::inc(x_5);
x_7 = l_Lean_Parser_unicodeSymbolInfo(x_5, x_6, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_unicodeSymbolFn___rarg___boxed), 5, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_6);
x_9 = lean::mk_nat_obj(1u);
x_10 = lean::nat_sub(x_3, x_9);
lean::dec(x_3);
x_11 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser___lambda__1___boxed), 4, 1);
lean::closure_set(x_11, 0, x_10);
x_12 = l_Lean_Parser_Parser_inhabited___closed__1;
x_13 = l_Lean_Parser_andthenInfo(x_7, x_12);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_14, 0, x_8);
lean::closure_set(x_14, 1, x_11);
x_15 = l_Lean_Parser_epsilonInfo;
x_16 = l_Lean_Parser_andthenInfo(x_15, x_13);
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_unicodeInfixR___elambda__1), 4, 1);
lean::closure_set(x_17, 0, x_14);
x_18 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_18, 0, x_16);
lean::cnstr_set(x_18, 1, x_17);
return x_18;
}
}
obj* l_Lean_Parser_Term_unicodeInfixR___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_unicodeInfixR(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Parser_Term_infixR___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_2);
lean::inc(x_4);
x_5 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_2);
x_6 = lean::cnstr_get(x_4, 3);
lean::inc(x_6);
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
x_7 = lean::apply_3(x_1, x_2, x_3, x_5);
return x_7;
}
else
{
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
}
obj* l_Lean_Parser_Term_infixR(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::inc(x_2);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = l_String_trim(x_1);
lean::inc(x_4);
x_5 = l_Lean_Parser_symbolInfo(x_4, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolFn___rarg___boxed), 4, 1);
lean::closure_set(x_6, 0, x_4);
x_7 = lean::mk_nat_obj(1u);
x_8 = lean::nat_sub(x_2, x_7);
lean::dec(x_2);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser___lambda__1___boxed), 4, 1);
lean::closure_set(x_9, 0, x_8);
x_10 = l_Lean_Parser_Parser_inhabited___closed__1;
x_11 = l_Lean_Parser_andthenInfo(x_5, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_12, 0, x_6);
lean::closure_set(x_12, 1, x_9);
x_13 = l_Lean_Parser_epsilonInfo;
x_14 = l_Lean_Parser_andthenInfo(x_13, x_11);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_infixR___elambda__1), 4, 1);
lean::closure_set(x_15, 0, x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
obj* l_Lean_Parser_Term_infixR___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_unicodeInfixL___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_2);
lean::inc(x_4);
x_5 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_2);
x_6 = lean::cnstr_get(x_4, 3);
lean::inc(x_6);
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
x_7 = lean::apply_3(x_1, x_2, x_3, x_5);
return x_7;
}
else
{
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
}
obj* l_Lean_Parser_Term_unicodeInfixL(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::inc(x_3);
x_4 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_4, 0, x_3);
x_5 = l_String_trim(x_1);
x_6 = l_String_trim(x_2);
lean::inc(x_6);
lean::inc(x_5);
x_7 = l_Lean_Parser_unicodeSymbolInfo(x_5, x_6, x_4);
x_8 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_unicodeSymbolFn___rarg___boxed), 5, 2);
lean::closure_set(x_8, 0, x_5);
lean::closure_set(x_8, 1, x_6);
x_9 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser___lambda__1___boxed), 4, 1);
lean::closure_set(x_9, 0, x_3);
x_10 = l_Lean_Parser_Parser_inhabited___closed__1;
x_11 = l_Lean_Parser_andthenInfo(x_7, x_10);
x_12 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_12, 0, x_8);
lean::closure_set(x_12, 1, x_9);
x_13 = l_Lean_Parser_epsilonInfo;
x_14 = l_Lean_Parser_andthenInfo(x_13, x_11);
x_15 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_unicodeInfixL___elambda__1), 4, 1);
lean::closure_set(x_15, 0, x_12);
x_16 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_16, 0, x_14);
lean::cnstr_set(x_16, 1, x_15);
return x_16;
}
}
obj* l_Lean_Parser_Term_unicodeInfixL___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_unicodeInfixL(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Parser_Term_infixL___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; 
lean::inc(x_2);
lean::inc(x_4);
x_5 = l_Lean_Parser_ParserState_pushSyntax(x_4, x_2);
x_6 = lean::cnstr_get(x_4, 3);
lean::inc(x_6);
lean::dec(x_4);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; 
x_7 = lean::apply_3(x_1, x_2, x_3, x_5);
return x_7;
}
else
{
lean::dec(x_6);
lean::dec(x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_5;
}
}
}
obj* l_Lean_Parser_Term_infixL(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
lean::inc(x_2);
x_3 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_3, 0, x_2);
x_4 = l_String_trim(x_1);
lean::inc(x_4);
x_5 = l_Lean_Parser_symbolInfo(x_4, x_3);
x_6 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolFn___rarg___boxed), 4, 1);
lean::closure_set(x_6, 0, x_4);
x_7 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_termParser___lambda__1___boxed), 4, 1);
lean::closure_set(x_7, 0, x_2);
x_8 = l_Lean_Parser_Parser_inhabited___closed__1;
x_9 = l_Lean_Parser_andthenInfo(x_5, x_8);
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_10, 0, x_6);
lean::closure_set(x_10, 1, x_7);
x_11 = l_Lean_Parser_epsilonInfo;
x_12 = l_Lean_Parser_andthenInfo(x_11, x_9);
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_infixL___elambda__1), 4, 1);
lean::closure_set(x_13, 0, x_10);
x_14 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_14, 0, x_12);
lean::cnstr_set(x_14, 1, x_13);
return x_14;
}
}
obj* l_Lean_Parser_Term_infixL___boxed(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
lean::dec(x_1);
return x_3;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_List_reprAux___main___rarg___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__2;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__3;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2(uint8 x_1, uint8 x_2, obj* x_3, uint8 x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_11 = l_Lean_Parser_levelParserAttribute;
x_12 = lean::mk_nat_obj(0u);
lean::inc(x_6);
x_13 = l_Lean_Parser_ParserAttribute_runParser(x_11, x_12, x_6, x_7);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = lean::array_get_size(x_15);
lean::dec(x_15);
x_17 = lean::cnstr_get(x_13, 1);
lean::inc(x_17);
lean::inc(x_6);
x_25 = l_Lean_Parser_tokenFn(x_6, x_13);
x_26 = lean::cnstr_get(x_25, 3);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
x_28 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_27);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 2)
{
obj* x_29; obj* x_30; uint8 x_31; 
x_29 = lean::cnstr_get(x_28, 1);
lean::inc(x_29);
lean::dec(x_28);
x_30 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_31 = lean::string_dec_eq(x_29, x_30);
lean::dec(x_29);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_32, x_17);
x_18 = x_33;
goto block_24;
}
else
{
x_18 = x_25;
goto block_24;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_28);
x_34 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_35 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_34, x_17);
x_18 = x_35;
goto block_24;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_26);
x_36 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_37 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_36, x_17);
x_18 = x_37;
goto block_24;
}
block_24:
{
obj* x_19; 
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
lean::dec(x_17);
lean::dec(x_16);
{
uint8 _tmp_3 = x_2;
obj* _tmp_6 = x_18;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_19);
lean::dec(x_6);
x_21 = l_Lean_Parser_ParserState_restore(x_18, x_16, x_17);
lean::dec(x_16);
x_22 = l_Lean_nullKind;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_3);
return x_23;
}
}
}
else
{
lean::dec(x_14);
lean::dec(x_6);
if (x_4 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_10);
lean::dec(x_9);
x_38 = lean::box(0);
x_39 = l_Lean_Parser_ParserState_pushSyntax(x_13, x_38);
x_40 = l_Lean_nullKind;
x_41 = l_Lean_Parser_ParserState_mkNode(x_39, x_40, x_3);
return x_41;
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
x_43 = l_Lean_nullKind;
x_44 = l_Lean_Parser_ParserState_mkNode(x_42, x_43, x_3);
return x_44;
}
}
}
}
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__1(uint8 x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = 0;
x_9 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2(x_1, x_2, x_7, x_8, x_3, x_4, x_5);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("Term");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_declareLeadingBuiltinParser___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("explicitUniv");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(".{");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_PersistentHashMap_Stats_toString___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__8;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__9;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__11;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__12;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_explicitUniv___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_39; obj* x_40; obj* x_41; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_39 = lean::cnstr_get(x_3, 1);
lean::inc(x_39);
lean::inc(x_2);
x_40 = l_Lean_Parser_tokenFn(x_2, x_3);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_40, 0);
lean::inc(x_42);
x_43 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_42);
lean::dec(x_42);
if (lean::obj_tag(x_43) == 2)
{
obj* x_44; obj* x_45; uint8 x_46; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
lean::dec(x_43);
x_45 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6;
x_46 = lean::string_dec_eq(x_44, x_45);
lean::dec(x_44);
if (x_46 == 0)
{
obj* x_47; obj* x_48; 
x_47 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_47, x_39);
x_6 = x_48;
goto block_38;
}
else
{
lean::dec(x_39);
x_6 = x_40;
goto block_38;
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_43);
x_49 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13;
x_50 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_49, x_39);
x_6 = x_50;
goto block_38;
}
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_41);
x_51 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13;
x_52 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_51, x_39);
x_6 = x_52;
goto block_38;
}
block_38:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; uint8 x_9; obj* x_10; obj* x_11; 
x_8 = 0;
x_9 = 0;
lean::inc(x_2);
x_10 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__1(x_8, x_9, x_1, x_2, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = l_Lean_Parser_tokenFn(x_2, x_10);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_15);
lean::dec(x_15);
if (lean::obj_tag(x_16) == 2)
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
x_18 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_19 = lean::string_dec_eq(x_17, x_18);
lean::dec(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_21 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_20, x_12);
x_22 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_5);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_12);
x_24 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_25 = l_Lean_Parser_ParserState_mkNode(x_13, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_26, x_12);
x_28 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_5);
return x_29;
}
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_14);
x_30 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_30, x_12);
x_32 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_5);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_2);
x_34 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_35 = l_Lean_Parser_ParserState_mkNode(x_10, x_34, x_5);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_7);
lean::dec(x_2);
x_36 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_37 = l_Lean_Parser_ParserState_mkNode(x_6, x_36, x_5);
return x_37;
}
}
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__2;
x_3 = l_Lean_Parser_sepBy1Info(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__3;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__6;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__8() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_explicitUniv___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__7;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__8;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitUniv() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__9;
return x_1;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; uint8 x_9; uint8 x_10; obj* x_11; 
x_8 = lean::unbox(x_1);
lean::dec(x_1);
x_9 = lean::unbox(x_2);
lean::dec(x_2);
x_10 = lean::unbox(x_4);
lean::dec(x_4);
x_11 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2(x_8, x_9, x_3, x_10, x_5, x_6, x_7);
lean::dec(x_5);
return x_11;
}
}
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; uint8 x_7; obj* x_8; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = lean::unbox(x_2);
lean::dec(x_2);
x_8 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__1(x_6, x_7, x_3, x_4, x_5);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_Term_explicitUniv___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_explicitUniv___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("namedPattern");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("@");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("no space before '@'");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__6;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__7;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_namedPattern___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__5;
x_16 = l_Lean_Parser_checkNoWsBeforeFn(x_15, x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; obj* x_20; 
x_18 = lean::cnstr_get(x_16, 1);
lean::inc(x_18);
lean::inc(x_1);
x_19 = l_Lean_Parser_tokenFn(x_1, x_16);
x_20 = lean::cnstr_get(x_19, 3);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_22; 
x_21 = lean::cnstr_get(x_19, 0);
lean::inc(x_21);
x_22 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_21);
lean::dec(x_21);
if (lean::obj_tag(x_22) == 2)
{
obj* x_23; obj* x_24; uint8 x_25; 
x_23 = lean::cnstr_get(x_22, 1);
lean::inc(x_23);
lean::dec(x_22);
x_24 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4;
x_25 = lean::string_dec_eq(x_23, x_24);
lean::dec(x_23);
if (x_25 == 0)
{
obj* x_26; obj* x_27; 
x_26 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_19, x_26, x_18);
x_5 = x_27;
goto block_14;
}
else
{
lean::dec(x_18);
x_5 = x_19;
goto block_14;
}
}
else
{
obj* x_28; obj* x_29; 
lean::dec(x_22);
x_28 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_19, x_28, x_18);
x_5 = x_29;
goto block_14;
}
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_20);
x_30 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_19, x_30, x_18);
x_5 = x_31;
goto block_14;
}
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_17);
lean::dec(x_1);
x_32 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_16, x_32, x_4);
return x_33;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = l_Lean_Parser_appPrec;
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_namedPattern___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_namedPattern___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedPattern___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_namedPattern___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_namedPattern___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_namedPattern___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedPattern___closed__4;
x_2 = l_Lean_Parser_Term_namedPattern___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedPattern() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_namedPattern___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_namedPattern___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_namedPattern___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_id___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("id");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_id___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_id___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_id___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_2);
x_6 = l_Lean_Parser_identFn___rarg(x_2, x_3);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_6, 1);
lean::inc(x_10);
lean::inc(x_2);
x_11 = l_Lean_Parser_Term_explicitUniv___elambda__1(x_1, x_2, x_6);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::dec(x_10);
lean::dec(x_2);
x_13 = l_Lean_nullKind;
x_14 = l_Lean_Parser_ParserState_mkNode(x_11, x_13, x_9);
x_15 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_5);
return x_16;
}
else
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_12, 0);
lean::inc(x_17);
lean::dec(x_12);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_18, x_10);
lean::dec(x_18);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_17);
lean::dec(x_10);
lean::dec(x_2);
x_20 = l_Lean_nullKind;
x_21 = l_Lean_Parser_ParserState_mkNode(x_11, x_20, x_9);
x_22 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_5);
return x_23;
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
lean::inc(x_10);
x_24 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
x_25 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg(x_2, x_24);
x_26 = l_Lean_Parser_mergeOrElseErrors(x_25, x_17, x_10);
x_27 = lean::cnstr_get(x_26, 3);
lean::inc(x_27);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_10);
x_28 = l_Lean_nullKind;
x_29 = l_Lean_Parser_ParserState_mkNode(x_26, x_28, x_9);
x_30 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_31 = l_Lean_Parser_ParserState_mkNode(x_29, x_30, x_5);
return x_31;
}
else
{
obj* x_32; uint8 x_33; 
lean::dec(x_27);
x_32 = lean::cnstr_get(x_26, 1);
lean::inc(x_32);
x_33 = lean::nat_dec_eq(x_32, x_10);
lean::dec(x_32);
if (x_33 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_10);
x_34 = l_Lean_nullKind;
x_35 = l_Lean_Parser_ParserState_mkNode(x_26, x_34, x_9);
x_36 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_35, x_36, x_5);
return x_37;
}
else
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_38 = l_Lean_Parser_ParserState_restore(x_26, x_9, x_10);
x_39 = l_Lean_nullKind;
x_40 = l_Lean_Parser_ParserState_mkNode(x_38, x_39, x_9);
x_41 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_42 = l_Lean_Parser_ParserState_mkNode(x_40, x_41, x_5);
return x_42;
}
}
}
}
}
else
{
obj* x_43; obj* x_44; 
lean::dec(x_7);
lean::dec(x_2);
x_43 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_44 = l_Lean_Parser_ParserState_mkNode(x_6, x_43, x_5);
return x_44;
}
}
}
obj* _init_l_Lean_Parser_Term_id___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_explicitUniv;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_namedPattern;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_id___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_id___closed__1;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_id___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_id___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_id___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_id___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_id___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_id___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_id___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_id___closed__4;
x_2 = l_Lean_Parser_Term_id___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_id() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_id___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_id___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_id___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_id(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_id___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_id;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_Term_num___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Parser_numLitFn___rarg(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_num___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_num___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_num___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_num___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_num___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_numLit___closed__1;
x_2 = l_Lean_Parser_Term_num___closed__1;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_num() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_num___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_Term_num___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_num___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l___regBuiltinParser_Lean_Parser_Term_num___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Level_num___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_num(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l___regBuiltinParser_Lean_Parser_Term_num___closed__1;
x_4 = l_Lean_Parser_Term_num;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_Term_str___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Parser_strLitFn___rarg(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_str___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_str___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_str___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_str___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_str___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_strLit___closed__1;
x_2 = l_Lean_Parser_Term_str___closed__1;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_str() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_str___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_Term_str___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_str___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l___regBuiltinParser_Lean_Parser_Term_str___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("str");
return x_1;
}
}
obj* _init_l___regBuiltinParser_Lean_Parser_Term_str___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Term_str___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_str(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l___regBuiltinParser_Lean_Parser_Term_str___closed__2;
x_4 = l_Lean_Parser_Term_str;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_Term_char___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; 
x_3 = l_Lean_Parser_charLitFn___rarg(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_char___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_char___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_char___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_char___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_char___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_charLit___closed__1;
x_2 = l_Lean_Parser_Term_char___closed__1;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_char() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_char___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_Term_char___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_char___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l___regBuiltinParser_Lean_Parser_Term_char___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("char");
return x_1;
}
}
obj* _init_l___regBuiltinParser_Lean_Parser_Term_char___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l___regBuiltinParser_Lean_Parser_Term_char___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_char(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l___regBuiltinParser_Lean_Parser_Term_char___closed__2;
x_4 = l_Lean_Parser_Term_char;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("type");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("Type");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_type___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__4;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__7;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__7;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_type___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_type___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_type___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_type___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_type___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_type___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_type___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_type___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_type___closed__2;
x_2 = l_Lean_Parser_Term_type___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_type() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_type___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_type___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_type___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_type(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_type;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("sort");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("Sort");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_sort___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_sort___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_sort___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_sort___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sort___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_sort___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sort___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_sort___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sort___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sort___closed__2;
x_2 = l_Lean_Parser_Term_sort___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sort() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_sort___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_sort___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_sort___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_sort(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_sort;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("prop");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("Prop");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_prop___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_prop___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_prop___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_prop___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prop___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_prop___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prop___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_prop___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_prop___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_prop___closed__2;
x_2 = l_Lean_Parser_Term_prop___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prop() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_prop___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_prop___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_prop___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_prop(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_prop;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Level_hole___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_hole___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Level_hole___elambda__1___rarg___closed__3;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Level_hole___elambda__1___rarg___closed__6;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Level_hole___elambda__1___rarg___closed__6;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Level_hole___elambda__1___rarg___closed__6;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_hole___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_hole___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_hole___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Level_hole___elambda__1___rarg___closed__3;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_hole___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
x_2 = l_Lean_Parser_Term_hole___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_hole___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_hole___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_hole___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_hole___closed__2;
x_2 = l_Lean_Parser_Term_hole___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_hole() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_hole___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_hole___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_hole___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_hole(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1;
x_4 = l_Lean_Parser_Term_hole;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("sorry");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__4;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__5;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_sorry___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_sorry___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_sorry___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_sorry___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sorry___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_sorry___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sorry___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_sorry___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sorry___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sorry___closed__2;
x_2 = l_Lean_Parser_Term_sorry___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sorry() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_sorry___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_sorry___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_sorry___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_sorry(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_sorry;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("cdot");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("·");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_cdot___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_cdot___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_cdot___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_cdot___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cdot___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_cdot___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cdot___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_cdot___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_cdot___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_cdot___closed__2;
x_2 = l_Lean_Parser_Term_cdot___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cdot() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_cdot___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_cdot___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_cdot___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_cdot(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_cdot;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("emptyC");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("∅");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_emptyC___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_tokenFn(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_8);
lean::dec(x_8);
if (lean::obj_tag(x_9) == 2)
{
obj* x_10; obj* x_11; uint8 x_12; 
x_10 = lean::cnstr_get(x_9, 1);
lean::inc(x_10);
lean::dec(x_9);
x_11 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4;
x_12 = lean::string_dec_eq(x_10, x_11);
lean::dec(x_10);
if (x_12 == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_13 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7;
x_14 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_13, x_5);
x_15 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_5);
x_17 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_6, x_17, x_4);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_9);
x_19 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_19, x_5);
x_21 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
}
else
{
obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::dec(x_7);
x_23 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_6, x_23, x_5);
x_25 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_4);
return x_26;
}
}
}
obj* l_Lean_Parser_Term_emptyC___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_emptyC___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_emptyC___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_emptyC___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_emptyC___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_emptyC___closed__2;
x_2 = l_Lean_Parser_Term_emptyC___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_emptyC() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_emptyC___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_emptyC___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_emptyC___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_emptyC(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_emptyC;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("typeAscription");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" : ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_typeAscription___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_typeAscription___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_typeAscription___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeAscription___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_typeAscription___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_typeAscription___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeAscription___closed__3;
x_2 = l_Lean_Parser_Term_typeAscription___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeAscription() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_typeAscription___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_typeAscription___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_typeAscription___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2(uint8 x_1, uint8 x_2, obj* x_3, uint8 x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_11 = l_Lean_Parser_termParserAttribute;
x_12 = lean::mk_nat_obj(0u);
lean::inc(x_6);
x_13 = l_Lean_Parser_ParserAttribute_runParser(x_11, x_12, x_6, x_7);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = lean::array_get_size(x_15);
lean::dec(x_15);
x_17 = lean::cnstr_get(x_13, 1);
lean::inc(x_17);
lean::inc(x_6);
x_25 = l_Lean_Parser_tokenFn(x_6, x_13);
x_26 = lean::cnstr_get(x_25, 3);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
x_28 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_27);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 2)
{
obj* x_29; obj* x_30; uint8 x_31; 
x_29 = lean::cnstr_get(x_28, 1);
lean::inc(x_29);
lean::dec(x_28);
x_30 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_31 = lean::string_dec_eq(x_29, x_30);
lean::dec(x_29);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_32, x_17);
x_18 = x_33;
goto block_24;
}
else
{
x_18 = x_25;
goto block_24;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_28);
x_34 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_35 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_34, x_17);
x_18 = x_35;
goto block_24;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_26);
x_36 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_37 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_36, x_17);
x_18 = x_37;
goto block_24;
}
block_24:
{
obj* x_19; 
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
lean::dec(x_17);
lean::dec(x_16);
{
uint8 _tmp_3 = x_2;
obj* _tmp_6 = x_18;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_19);
lean::dec(x_6);
x_21 = l_Lean_Parser_ParserState_restore(x_18, x_16, x_17);
lean::dec(x_16);
x_22 = l_Lean_nullKind;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_3);
return x_23;
}
}
}
else
{
lean::dec(x_14);
lean::dec(x_6);
if (x_4 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_10);
lean::dec(x_9);
x_38 = lean::box(0);
x_39 = l_Lean_Parser_ParserState_pushSyntax(x_13, x_38);
x_40 = l_Lean_nullKind;
x_41 = l_Lean_Parser_ParserState_mkNode(x_39, x_40, x_3);
return x_41;
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
x_43 = l_Lean_nullKind;
x_44 = l_Lean_Parser_ParserState_mkNode(x_42, x_43, x_3);
return x_44;
}
}
}
}
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1(uint8 x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = 0;
x_9 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2(x_1, x_2, x_7, x_8, x_3, x_4, x_5);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("tupleTail");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_tupleTail___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_tupleTail___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_16; obj* x_17; obj* x_18; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_16 = lean::cnstr_get(x_3, 1);
lean::inc(x_16);
lean::inc(x_2);
x_17 = l_Lean_Parser_tokenFn(x_2, x_3);
x_18 = lean::cnstr_get(x_17, 3);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; 
x_19 = lean::cnstr_get(x_17, 0);
lean::inc(x_19);
x_20 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_19);
lean::dec(x_19);
if (lean::obj_tag(x_20) == 2)
{
obj* x_21; obj* x_22; uint8 x_23; 
x_21 = lean::cnstr_get(x_20, 1);
lean::inc(x_21);
lean::dec(x_20);
x_22 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_23 = lean::string_dec_eq(x_21, x_22);
lean::dec(x_21);
if (x_23 == 0)
{
obj* x_24; obj* x_25; 
x_24 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
x_25 = l_Lean_Parser_ParserState_mkErrorsAt(x_17, x_24, x_16);
x_6 = x_25;
goto block_15;
}
else
{
lean::dec(x_16);
x_6 = x_17;
goto block_15;
}
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_20);
x_26 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_17, x_26, x_16);
x_6 = x_27;
goto block_15;
}
}
else
{
obj* x_28; obj* x_29; 
lean::dec(x_18);
x_28 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_17, x_28, x_16);
x_6 = x_29;
goto block_15;
}
block_15:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; uint8 x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = 0;
x_9 = 0;
x_10 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1(x_8, x_9, x_1, x_2, x_6);
x_11 = l_Lean_Parser_Term_tupleTail___elambda__1___closed__2;
x_12 = l_Lean_Parser_ParserState_mkNode(x_10, x_11, x_5);
return x_12;
}
else
{
obj* x_13; obj* x_14; 
lean::dec(x_7);
lean::dec(x_2);
x_13 = l_Lean_Parser_Term_tupleTail___elambda__1___closed__2;
x_14 = l_Lean_Parser_ParserState_mkNode(x_6, x_13, x_5);
return x_14;
}
}
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__2;
x_3 = l_Lean_Parser_sepBy1Info(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__2;
x_2 = l_Lean_Parser_Term_tupleTail___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_tupleTail___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_tupleTail___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_tupleTail___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_tupleTail___closed__3;
x_2 = l_Lean_Parser_Term_tupleTail___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tupleTail() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_tupleTail___closed__5;
return x_1;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; uint8 x_9; uint8 x_10; obj* x_11; 
x_8 = lean::unbox(x_1);
lean::dec(x_1);
x_9 = lean::unbox(x_2);
lean::dec(x_2);
x_10 = lean::unbox(x_4);
lean::dec(x_4);
x_11 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2(x_8, x_9, x_3, x_10, x_5, x_6, x_7);
lean::dec(x_5);
return x_11;
}
}
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; uint8 x_7; obj* x_8; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = lean::unbox(x_2);
lean::dec(x_2);
x_8 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1(x_6, x_7, x_3, x_4, x_5);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_Term_tupleTail___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_tupleTail___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Parser_Term_parenSpecial___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::inc(x_2);
x_7 = l_Lean_Parser_Term_tupleTail___elambda__1(x_1, x_2, x_3);
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; 
lean::dec(x_6);
lean::dec(x_2);
x_9 = l_Lean_nullKind;
x_10 = l_Lean_Parser_ParserState_mkNode(x_7, x_9, x_5);
return x_10;
}
else
{
obj* x_11; obj* x_12; uint8 x_13; 
x_11 = lean::cnstr_get(x_8, 0);
lean::inc(x_11);
lean::dec(x_8);
x_12 = lean::cnstr_get(x_7, 1);
lean::inc(x_12);
x_13 = lean::nat_dec_eq(x_12, x_6);
lean::dec(x_12);
if (x_13 == 0)
{
obj* x_14; obj* x_15; 
lean::dec(x_11);
lean::dec(x_6);
lean::dec(x_2);
x_14 = l_Lean_nullKind;
x_15 = l_Lean_Parser_ParserState_mkNode(x_7, x_14, x_5);
return x_15;
}
else
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
lean::inc(x_6);
x_16 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
x_17 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg(x_2, x_16);
x_18 = l_Lean_Parser_mergeOrElseErrors(x_17, x_11, x_6);
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_6);
x_20 = l_Lean_nullKind;
x_21 = l_Lean_Parser_ParserState_mkNode(x_18, x_20, x_5);
return x_21;
}
else
{
obj* x_22; uint8 x_23; 
lean::dec(x_19);
x_22 = lean::cnstr_get(x_18, 1);
lean::inc(x_22);
x_23 = lean::nat_dec_eq(x_22, x_6);
lean::dec(x_22);
if (x_23 == 0)
{
obj* x_24; obj* x_25; 
lean::dec(x_6);
x_24 = l_Lean_nullKind;
x_25 = l_Lean_Parser_ParserState_mkNode(x_18, x_24, x_5);
return x_25;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = l_Lean_Parser_ParserState_restore(x_18, x_5, x_6);
x_27 = l_Lean_nullKind;
x_28 = l_Lean_Parser_ParserState_mkNode(x_26, x_27, x_5);
return x_28;
}
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_parenSpecial___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_tupleTail;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_typeAscription;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_parenSpecial___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_parenSpecial___closed__1;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_parenSpecial___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_parenSpecial___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_parenSpecial___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_parenSpecial___closed__2;
x_2 = l_Lean_Parser_Term_parenSpecial___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parenSpecial() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_parenSpecial___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_parenSpecial___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_parenSpecial___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_paren___elambda__1___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__3;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_paren___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_33; obj* x_63; obj* x_64; obj* x_65; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_63 = lean::cnstr_get(x_3, 1);
lean::inc(x_63);
lean::inc(x_2);
x_64 = l_Lean_Parser_tokenFn(x_2, x_3);
x_65 = lean::cnstr_get(x_64, 3);
lean::inc(x_65);
if (lean::obj_tag(x_65) == 0)
{
obj* x_66; obj* x_67; 
x_66 = lean::cnstr_get(x_64, 0);
lean::inc(x_66);
x_67 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_66);
lean::dec(x_66);
if (lean::obj_tag(x_67) == 2)
{
obj* x_68; obj* x_69; uint8 x_70; 
x_68 = lean::cnstr_get(x_67, 1);
lean::inc(x_68);
lean::dec(x_67);
x_69 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__5;
x_70 = lean::string_dec_eq(x_68, x_69);
lean::dec(x_68);
if (x_70 == 0)
{
obj* x_71; obj* x_72; 
x_71 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
x_72 = l_Lean_Parser_ParserState_mkErrorsAt(x_64, x_71, x_63);
x_33 = x_72;
goto block_62;
}
else
{
lean::dec(x_63);
x_33 = x_64;
goto block_62;
}
}
else
{
obj* x_73; obj* x_74; 
lean::dec(x_67);
x_73 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
x_74 = l_Lean_Parser_ParserState_mkErrorsAt(x_64, x_73, x_63);
x_33 = x_74;
goto block_62;
}
}
else
{
obj* x_75; obj* x_76; 
lean::dec(x_65);
x_75 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
x_76 = l_Lean_Parser_ParserState_mkErrorsAt(x_64, x_75, x_63);
x_33 = x_76;
goto block_62;
}
block_32:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = lean::cnstr_get(x_6, 1);
lean::inc(x_8);
x_9 = l_Lean_Parser_tokenFn(x_2, x_6);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_12 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_11);
lean::dec(x_11);
if (lean::obj_tag(x_12) == 2)
{
obj* x_13; obj* x_14; uint8 x_15; 
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
lean::dec(x_12);
x_14 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__6;
x_15 = lean::string_dec_eq(x_13, x_14);
lean::dec(x_13);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; obj* x_19; 
x_16 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_17 = l_Lean_Parser_ParserState_mkErrorsAt(x_9, x_16, x_8);
x_18 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_19 = l_Lean_Parser_ParserState_mkNode(x_17, x_18, x_5);
return x_19;
}
else
{
obj* x_20; obj* x_21; 
lean::dec(x_8);
x_20 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_21 = l_Lean_Parser_ParserState_mkNode(x_9, x_20, x_5);
return x_21;
}
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::dec(x_12);
x_22 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_23 = l_Lean_Parser_ParserState_mkErrorsAt(x_9, x_22, x_8);
x_24 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_25 = l_Lean_Parser_ParserState_mkNode(x_23, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_10);
x_26 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_9, x_26, x_8);
x_28 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_5);
return x_29;
}
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_7);
lean::dec(x_2);
x_30 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_31 = l_Lean_Parser_ParserState_mkNode(x_6, x_30, x_5);
return x_31;
}
}
block_62:
{
obj* x_34; 
x_34 = lean::cnstr_get(x_33, 3);
lean::inc(x_34);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_35 = lean::cnstr_get(x_33, 0);
lean::inc(x_35);
x_36 = lean::array_get_size(x_35);
lean::dec(x_35);
x_37 = lean::cnstr_get(x_33, 1);
lean::inc(x_37);
x_38 = l_Lean_Parser_termParserAttribute;
x_39 = lean::mk_nat_obj(0u);
lean::inc(x_2);
x_40 = l_Lean_Parser_ParserAttribute_runParser(x_38, x_39, x_2, x_33);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
lean::inc(x_2);
x_42 = l_Lean_Parser_Term_parenSpecial___elambda__1(x_1, x_2, x_40);
x_43 = lean::cnstr_get(x_42, 3);
lean::inc(x_43);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; 
lean::dec(x_37);
x_44 = l_Lean_nullKind;
x_45 = l_Lean_Parser_ParserState_mkNode(x_42, x_44, x_36);
x_6 = x_45;
goto block_32;
}
else
{
obj* x_46; uint8 x_47; 
lean::dec(x_43);
x_46 = lean::cnstr_get(x_42, 1);
lean::inc(x_46);
x_47 = lean::nat_dec_eq(x_46, x_37);
lean::dec(x_46);
if (x_47 == 0)
{
obj* x_48; obj* x_49; 
lean::dec(x_37);
x_48 = l_Lean_nullKind;
x_49 = l_Lean_Parser_ParserState_mkNode(x_42, x_48, x_36);
x_6 = x_49;
goto block_32;
}
else
{
obj* x_50; obj* x_51; obj* x_52; 
x_50 = l_Lean_Parser_ParserState_restore(x_42, x_36, x_37);
x_51 = l_Lean_nullKind;
x_52 = l_Lean_Parser_ParserState_mkNode(x_50, x_51, x_36);
x_6 = x_52;
goto block_32;
}
}
}
else
{
obj* x_53; uint8 x_54; 
lean::dec(x_41);
x_53 = lean::cnstr_get(x_40, 1);
lean::inc(x_53);
x_54 = lean::nat_dec_eq(x_53, x_37);
lean::dec(x_53);
if (x_54 == 0)
{
obj* x_55; obj* x_56; 
lean::dec(x_37);
x_55 = l_Lean_nullKind;
x_56 = l_Lean_Parser_ParserState_mkNode(x_40, x_55, x_36);
x_6 = x_56;
goto block_32;
}
else
{
obj* x_57; obj* x_58; obj* x_59; 
x_57 = l_Lean_Parser_ParserState_restore(x_40, x_36, x_37);
x_58 = l_Lean_nullKind;
x_59 = l_Lean_Parser_ParserState_mkNode(x_57, x_58, x_36);
x_6 = x_59;
goto block_32;
}
}
}
else
{
obj* x_60; obj* x_61; 
lean::dec(x_34);
lean::dec(x_2);
x_60 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_61 = l_Lean_Parser_ParserState_mkNode(x_33, x_60, x_5);
return x_61;
}
}
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_parenSpecial;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_paren___closed__1;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_paren___closed__2;
x_2 = l_Lean_Parser_Level_paren___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Level_paren___closed__2;
x_2 = l_Lean_Parser_Term_paren___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_2 = l_Lean_Parser_Term_paren___closed__4;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_paren___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_paren___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_paren___closed__5;
x_2 = l_Lean_Parser_Term_paren___closed__6;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_paren() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_paren___closed__7;
return x_1;
}
}
obj* l_Lean_Parser_Term_paren___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_paren___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_paren(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_paren___elambda__1___closed__1;
x_4 = l_Lean_Parser_Term_paren;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_anonymousCtor___elambda__1___spec__1(uint8 x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = 1;
x_9 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_tupleTail___elambda__1___spec__2(x_1, x_2, x_7, x_8, x_3, x_4, x_5);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("anonymousCtor");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Sigma_HasRepr___rarg___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Sigma_HasRepr___rarg___closed__2;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__8;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__9;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_39; obj* x_40; obj* x_41; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_39 = lean::cnstr_get(x_3, 1);
lean::inc(x_39);
lean::inc(x_2);
x_40 = l_Lean_Parser_tokenFn(x_2, x_3);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_40, 0);
lean::inc(x_42);
x_43 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_42);
lean::dec(x_42);
if (lean::obj_tag(x_43) == 2)
{
obj* x_44; obj* x_45; uint8 x_46; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
lean::dec(x_43);
x_45 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3;
x_46 = lean::string_dec_eq(x_44, x_45);
lean::dec(x_44);
if (x_46 == 0)
{
obj* x_47; obj* x_48; 
x_47 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_47, x_39);
x_6 = x_48;
goto block_38;
}
else
{
lean::dec(x_39);
x_6 = x_40;
goto block_38;
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_43);
x_49 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10;
x_50 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_49, x_39);
x_6 = x_50;
goto block_38;
}
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_41);
x_51 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10;
x_52 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_51, x_39);
x_6 = x_52;
goto block_38;
}
block_38:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; uint8 x_9; obj* x_10; obj* x_11; 
x_8 = 0;
x_9 = 0;
lean::inc(x_2);
x_10 = l_Lean_Parser_sepByFn___at_Lean_Parser_Term_anonymousCtor___elambda__1___spec__1(x_8, x_9, x_1, x_2, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = l_Lean_Parser_tokenFn(x_2, x_10);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_15);
lean::dec(x_15);
if (lean::obj_tag(x_16) == 2)
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
x_18 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4;
x_19 = lean::string_dec_eq(x_17, x_18);
lean::dec(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7;
x_21 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_20, x_12);
x_22 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_5);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_12);
x_24 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_13, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_26, x_12);
x_28 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_5);
return x_29;
}
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_14);
x_30 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_30, x_12);
x_32 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_5);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_2);
x_34 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_10, x_34, x_5);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_7);
lean::dec(x_2);
x_36 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_6, x_36, x_5);
return x_37;
}
}
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__2;
x_3 = l_Lean_Parser_sepByInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___closed__2;
x_2 = l_Lean_Parser_Term_anonymousCtor___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___closed__1;
x_2 = l_Lean_Parser_Term_anonymousCtor___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_anonymousCtor___closed__5;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_anonymousCtor___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_anonymousCtor___closed__6;
x_2 = l_Lean_Parser_Term_anonymousCtor___closed__7;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_anonymousCtor() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_anonymousCtor___closed__8;
return x_1;
}
}
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_anonymousCtor___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; uint8 x_7; obj* x_8; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = lean::unbox(x_2);
lean::dec(x_2);
x_8 = l_Lean_Parser_sepByFn___at_Lean_Parser_Term_anonymousCtor___elambda__1___spec__1(x_6, x_7, x_3, x_4, x_5);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_Term_anonymousCtor___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_anonymousCtor___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_anonymousCtor(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_anonymousCtor;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_Term_optIdent___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_29; obj* x_30; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_2, 1);
lean::inc(x_4);
x_5 = lean::array_get_size(x_3);
lean::dec(x_3);
lean::inc(x_1);
x_29 = l_Lean_Parser_identFn___rarg(x_1, x_2);
x_30 = lean::cnstr_get(x_29, 3);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; obj* x_32; obj* x_33; 
x_31 = lean::cnstr_get(x_29, 1);
lean::inc(x_31);
x_32 = l_Lean_Parser_tokenFn(x_1, x_29);
x_33 = lean::cnstr_get(x_32, 3);
lean::inc(x_33);
if (lean::obj_tag(x_33) == 0)
{
obj* x_34; obj* x_35; 
x_34 = lean::cnstr_get(x_32, 0);
lean::inc(x_34);
x_35 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_34);
lean::dec(x_34);
if (lean::obj_tag(x_35) == 2)
{
obj* x_36; obj* x_37; uint8 x_38; 
x_36 = lean::cnstr_get(x_35, 1);
lean::inc(x_36);
lean::dec(x_35);
x_37 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_38 = lean::string_dec_eq(x_36, x_37);
lean::dec(x_36);
if (x_38 == 0)
{
obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_43; 
x_39 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_40 = l_Lean_Parser_ParserState_mkErrorsAt(x_32, x_39, x_31);
x_41 = lean::cnstr_get(x_40, 0);
lean::inc(x_41);
x_42 = lean::cnstr_get(x_40, 2);
lean::inc(x_42);
x_43 = lean::cnstr_get(x_40, 3);
lean::inc(x_43);
x_6 = x_40;
x_7 = x_41;
x_8 = x_42;
x_9 = x_43;
goto block_28;
}
else
{
obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_31);
x_44 = lean::cnstr_get(x_32, 0);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_32, 2);
lean::inc(x_45);
x_46 = lean::cnstr_get(x_32, 3);
lean::inc(x_46);
x_6 = x_32;
x_7 = x_44;
x_8 = x_45;
x_9 = x_46;
goto block_28;
}
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_35);
x_47 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_32, x_47, x_31);
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_50 = lean::cnstr_get(x_48, 2);
lean::inc(x_50);
x_51 = lean::cnstr_get(x_48, 3);
lean::inc(x_51);
x_6 = x_48;
x_7 = x_49;
x_8 = x_50;
x_9 = x_51;
goto block_28;
}
}
else
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; 
lean::dec(x_33);
x_52 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_53 = l_Lean_Parser_ParserState_mkErrorsAt(x_32, x_52, x_31);
x_54 = lean::cnstr_get(x_53, 0);
lean::inc(x_54);
x_55 = lean::cnstr_get(x_53, 2);
lean::inc(x_55);
x_56 = lean::cnstr_get(x_53, 3);
lean::inc(x_56);
x_6 = x_53;
x_7 = x_54;
x_8 = x_55;
x_9 = x_56;
goto block_28;
}
}
else
{
obj* x_57; obj* x_58; obj* x_59; 
lean::dec(x_30);
lean::dec(x_1);
x_57 = lean::cnstr_get(x_29, 0);
lean::inc(x_57);
x_58 = lean::cnstr_get(x_29, 2);
lean::inc(x_58);
x_59 = lean::cnstr_get(x_29, 3);
lean::inc(x_59);
x_6 = x_29;
x_7 = x_57;
x_8 = x_58;
x_9 = x_59;
goto block_28;
}
block_28:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; 
lean::dec(x_8);
lean::dec(x_7);
x_10 = lean::cnstr_get(x_6, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::dec(x_4);
x_11 = l_Lean_nullKind;
x_12 = l_Lean_Parser_ParserState_mkNode(x_6, x_11, x_5);
return x_12;
}
else
{
obj* x_13; uint8 x_14; 
lean::dec(x_10);
x_13 = lean::cnstr_get(x_6, 1);
lean::inc(x_13);
x_14 = lean::nat_dec_eq(x_13, x_4);
lean::dec(x_13);
if (x_14 == 0)
{
obj* x_15; obj* x_16; 
lean::dec(x_4);
x_15 = l_Lean_nullKind;
x_16 = l_Lean_Parser_ParserState_mkNode(x_6, x_15, x_5);
return x_16;
}
else
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = l_Lean_Parser_ParserState_restore(x_6, x_5, x_4);
x_18 = l_Lean_nullKind;
x_19 = l_Lean_Parser_ParserState_mkNode(x_17, x_18, x_5);
return x_19;
}
}
}
else
{
obj* x_20; obj* x_21; uint8 x_22; 
lean::dec(x_6);
x_20 = l_Array_shrink___main___rarg(x_7, x_5);
lean::inc(x_4);
x_21 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_21, 0, x_20);
lean::cnstr_set(x_21, 1, x_4);
lean::cnstr_set(x_21, 2, x_8);
lean::cnstr_set(x_21, 3, x_9);
x_22 = lean::nat_dec_eq(x_4, x_4);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
lean::dec(x_4);
x_23 = l_Lean_nullKind;
x_24 = l_Lean_Parser_ParserState_mkNode(x_21, x_23, x_5);
return x_24;
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_Lean_Parser_ParserState_restore(x_21, x_5, x_4);
x_26 = l_Lean_nullKind;
x_27 = l_Lean_Parser_ParserState_mkNode(x_25, x_26, x_5);
return x_27;
}
}
}
}
}
obj* l_Lean_Parser_Term_optIdent___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_optIdent___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_optIdent___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_typeAscription___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_optIdent___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_optIdent___closed__1;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_optIdent___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_optIdent___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_optIdent___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_optIdent___closed__2;
x_2 = l_Lean_Parser_Term_optIdent___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_optIdent() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_optIdent___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_optIdent___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_optIdent___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("if");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("if ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" then ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" else ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__8() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__7;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__8;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__9;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__10;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__6;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__13() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__12;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__14() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__13;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__15() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__16() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__15;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__17() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__16;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_if___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_40; obj* x_69; obj* x_70; obj* x_71; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_69 = lean::cnstr_get(x_2, 1);
lean::inc(x_69);
lean::inc(x_1);
x_70 = l_Lean_Parser_tokenFn(x_1, x_2);
x_71 = lean::cnstr_get(x_70, 3);
lean::inc(x_71);
if (lean::obj_tag(x_71) == 0)
{
obj* x_72; obj* x_73; 
x_72 = lean::cnstr_get(x_70, 0);
lean::inc(x_72);
x_73 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_72);
lean::dec(x_72);
if (lean::obj_tag(x_73) == 2)
{
obj* x_74; obj* x_75; uint8 x_76; 
x_74 = lean::cnstr_get(x_73, 1);
lean::inc(x_74);
lean::dec(x_73);
x_75 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__4;
x_76 = lean::string_dec_eq(x_74, x_75);
lean::dec(x_74);
if (x_76 == 0)
{
obj* x_77; obj* x_78; 
x_77 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__17;
x_78 = l_Lean_Parser_ParserState_mkErrorsAt(x_70, x_77, x_69);
x_40 = x_78;
goto block_68;
}
else
{
lean::dec(x_69);
x_40 = x_70;
goto block_68;
}
}
else
{
obj* x_79; obj* x_80; 
lean::dec(x_73);
x_79 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__17;
x_80 = l_Lean_Parser_ParserState_mkErrorsAt(x_70, x_79, x_69);
x_40 = x_80;
goto block_68;
}
}
else
{
obj* x_81; obj* x_82; 
lean::dec(x_71);
x_81 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__17;
x_82 = l_Lean_Parser_ParserState_mkErrorsAt(x_70, x_81, x_69);
x_40 = x_82;
goto block_68;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
block_39:
{
obj* x_16; 
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; 
x_17 = l_Lean_Parser_termParserAttribute;
x_18 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_19 = l_Lean_Parser_ParserAttribute_runParser(x_17, x_18, x_1, x_15);
x_20 = lean::cnstr_get(x_19, 3);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = lean::cnstr_get(x_19, 1);
lean::inc(x_21);
lean::inc(x_1);
x_22 = l_Lean_Parser_tokenFn(x_1, x_19);
x_23 = lean::cnstr_get(x_22, 3);
lean::inc(x_23);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_22, 0);
lean::inc(x_24);
x_25 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_24);
lean::dec(x_24);
if (lean::obj_tag(x_25) == 2)
{
obj* x_26; obj* x_27; uint8 x_28; 
x_26 = lean::cnstr_get(x_25, 1);
lean::inc(x_26);
lean::dec(x_25);
x_27 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__8;
x_28 = lean::string_dec_eq(x_26, x_27);
lean::dec(x_26);
if (x_28 == 0)
{
obj* x_29; obj* x_30; 
x_29 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__11;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_22, x_29, x_21);
x_5 = x_30;
goto block_14;
}
else
{
lean::dec(x_21);
x_5 = x_22;
goto block_14;
}
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_25);
x_31 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__11;
x_32 = l_Lean_Parser_ParserState_mkErrorsAt(x_22, x_31, x_21);
x_5 = x_32;
goto block_14;
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_23);
x_33 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__11;
x_34 = l_Lean_Parser_ParserState_mkErrorsAt(x_22, x_33, x_21);
x_5 = x_34;
goto block_14;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_20);
lean::dec(x_1);
x_35 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_36 = l_Lean_Parser_ParserState_mkNode(x_19, x_35, x_4);
return x_36;
}
}
else
{
obj* x_37; obj* x_38; 
lean::dec(x_16);
lean::dec(x_1);
x_37 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_38 = l_Lean_Parser_ParserState_mkNode(x_15, x_37, x_4);
return x_38;
}
}
block_68:
{
obj* x_41; 
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
lean::inc(x_1);
x_42 = l_Lean_Parser_Term_optIdent___elambda__1___rarg(x_1, x_40);
x_43 = lean::cnstr_get(x_42, 3);
lean::inc(x_43);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; obj* x_46; obj* x_47; 
x_44 = l_Lean_Parser_termParserAttribute;
x_45 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_46 = l_Lean_Parser_ParserAttribute_runParser(x_44, x_45, x_1, x_42);
x_47 = lean::cnstr_get(x_46, 3);
lean::inc(x_47);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; obj* x_49; obj* x_50; 
x_48 = lean::cnstr_get(x_46, 1);
lean::inc(x_48);
lean::inc(x_1);
x_49 = l_Lean_Parser_tokenFn(x_1, x_46);
x_50 = lean::cnstr_get(x_49, 3);
lean::inc(x_50);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_49, 0);
lean::inc(x_51);
x_52 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_51);
lean::dec(x_51);
if (lean::obj_tag(x_52) == 2)
{
obj* x_53; obj* x_54; uint8 x_55; 
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
lean::dec(x_52);
x_54 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__6;
x_55 = lean::string_dec_eq(x_53, x_54);
lean::dec(x_53);
if (x_55 == 0)
{
obj* x_56; obj* x_57; 
x_56 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__14;
x_57 = l_Lean_Parser_ParserState_mkErrorsAt(x_49, x_56, x_48);
x_15 = x_57;
goto block_39;
}
else
{
lean::dec(x_48);
x_15 = x_49;
goto block_39;
}
}
else
{
obj* x_58; obj* x_59; 
lean::dec(x_52);
x_58 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__14;
x_59 = l_Lean_Parser_ParserState_mkErrorsAt(x_49, x_58, x_48);
x_15 = x_59;
goto block_39;
}
}
else
{
obj* x_60; obj* x_61; 
lean::dec(x_50);
x_60 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__14;
x_61 = l_Lean_Parser_ParserState_mkErrorsAt(x_49, x_60, x_48);
x_15 = x_61;
goto block_39;
}
}
else
{
obj* x_62; obj* x_63; 
lean::dec(x_47);
lean::dec(x_1);
x_62 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_63 = l_Lean_Parser_ParserState_mkNode(x_46, x_62, x_4);
return x_63;
}
}
else
{
obj* x_64; obj* x_65; 
lean::dec(x_43);
lean::dec(x_1);
x_64 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_65 = l_Lean_Parser_ParserState_mkNode(x_42, x_64, x_4);
return x_65;
}
}
else
{
obj* x_66; obj* x_67; 
lean::dec(x_41);
lean::dec(x_1);
x_66 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_67 = l_Lean_Parser_ParserState_mkNode(x_40, x_66, x_4);
return x_67;
}
}
}
}
obj* l_Lean_Parser_Term_if___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_if___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__6;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__8;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___closed__3;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_if___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___closed__2;
x_2 = l_Lean_Parser_Term_if___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_if___closed__6;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optIdent;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_if___closed__7;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___closed__1;
x_2 = l_Lean_Parser_Term_if___closed__8;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_if___closed__9;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__11() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_if___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_if___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_if___closed__10;
x_2 = l_Lean_Parser_Term_if___closed__11;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_if() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_if___closed__12;
return x_1;
}
}
obj* l_Lean_Parser_Term_if___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_if___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_if(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_if___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_if;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("fromTerm");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" from ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_fromTerm___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_fromTerm___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_fromTerm___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fromTerm___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_fromTerm___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_fromTerm___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fromTerm___closed__3;
x_2 = l_Lean_Parser_Term_fromTerm___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fromTerm() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_fromTerm___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_fromTerm___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_fromTerm___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("haveAssign");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_formatEntry___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__4;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__5;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_haveAssign___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_haveAssign___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_haveAssign___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_haveAssign___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_haveAssign___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_haveAssign___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_haveAssign___closed__3;
x_2 = l_Lean_Parser_Term_haveAssign___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_haveAssign() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_haveAssign___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_haveAssign___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_haveAssign___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("have");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("have ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Error_toString___closed__2;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__6;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__7;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__9;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__10;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_have___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_34; obj* x_60; obj* x_61; obj* x_62; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_60 = lean::cnstr_get(x_2, 1);
lean::inc(x_60);
lean::inc(x_1);
x_61 = l_Lean_Parser_tokenFn(x_1, x_2);
x_62 = lean::cnstr_get(x_61, 3);
lean::inc(x_62);
if (lean::obj_tag(x_62) == 0)
{
obj* x_63; obj* x_64; 
x_63 = lean::cnstr_get(x_61, 0);
lean::inc(x_63);
x_64 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_63);
lean::dec(x_63);
if (lean::obj_tag(x_64) == 2)
{
obj* x_65; obj* x_66; uint8 x_67; 
x_65 = lean::cnstr_get(x_64, 1);
lean::inc(x_65);
lean::dec(x_64);
x_66 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__4;
x_67 = lean::string_dec_eq(x_65, x_66);
lean::dec(x_65);
if (x_67 == 0)
{
obj* x_68; obj* x_69; 
x_68 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__11;
x_69 = l_Lean_Parser_ParserState_mkErrorsAt(x_61, x_68, x_60);
x_34 = x_69;
goto block_59;
}
else
{
lean::dec(x_60);
x_34 = x_61;
goto block_59;
}
}
else
{
obj* x_70; obj* x_71; 
lean::dec(x_64);
x_70 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__11;
x_71 = l_Lean_Parser_ParserState_mkErrorsAt(x_61, x_70, x_60);
x_34 = x_71;
goto block_59;
}
}
else
{
obj* x_72; obj* x_73; 
lean::dec(x_62);
x_72 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__11;
x_73 = l_Lean_Parser_ParserState_mkErrorsAt(x_61, x_72, x_60);
x_34 = x_73;
goto block_59;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
block_33:
{
obj* x_16; 
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_15, 1);
lean::inc(x_17);
lean::inc(x_1);
x_18 = l_Lean_Parser_tokenFn(x_1, x_15);
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::cnstr_get(x_18, 0);
lean::inc(x_20);
x_21 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_20);
lean::dec(x_20);
if (lean::obj_tag(x_21) == 2)
{
obj* x_22; obj* x_23; uint8 x_24; 
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
x_23 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
x_24 = lean::string_dec_eq(x_22, x_23);
lean::dec(x_22);
if (x_24 == 0)
{
obj* x_25; obj* x_26; 
x_25 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_18, x_25, x_17);
x_5 = x_26;
goto block_14;
}
else
{
lean::dec(x_17);
x_5 = x_18;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_21);
x_27 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_18, x_27, x_17);
x_5 = x_28;
goto block_14;
}
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_19);
x_29 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_18, x_29, x_17);
x_5 = x_30;
goto block_14;
}
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_16);
lean::dec(x_1);
x_31 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_32 = l_Lean_Parser_ParserState_mkNode(x_15, x_31, x_4);
return x_32;
}
}
block_59:
{
obj* x_35; 
x_35 = lean::cnstr_get(x_34, 3);
lean::inc(x_35);
if (lean::obj_tag(x_35) == 0)
{
obj* x_36; obj* x_37; 
lean::inc(x_1);
x_36 = l_Lean_Parser_Term_optIdent___elambda__1___rarg(x_1, x_34);
x_37 = lean::cnstr_get(x_36, 3);
lean::inc(x_37);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_38 = l_Lean_Parser_termParserAttribute;
x_39 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_40 = l_Lean_Parser_ParserAttribute_runParser(x_38, x_39, x_1, x_36);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_42 = lean::cnstr_get(x_40, 0);
lean::inc(x_42);
x_43 = lean::array_get_size(x_42);
lean::dec(x_42);
x_44 = lean::cnstr_get(x_40, 1);
lean::inc(x_44);
lean::inc(x_1);
x_45 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg(x_1, x_40);
x_46 = lean::cnstr_get(x_45, 3);
lean::inc(x_46);
if (lean::obj_tag(x_46) == 0)
{
lean::dec(x_44);
lean::dec(x_43);
x_15 = x_45;
goto block_33;
}
else
{
obj* x_47; obj* x_48; uint8 x_49; 
x_47 = lean::cnstr_get(x_46, 0);
lean::inc(x_47);
lean::dec(x_46);
x_48 = lean::cnstr_get(x_45, 1);
lean::inc(x_48);
x_49 = lean::nat_dec_eq(x_48, x_44);
lean::dec(x_48);
if (x_49 == 0)
{
lean::dec(x_47);
lean::dec(x_44);
lean::dec(x_43);
x_15 = x_45;
goto block_33;
}
else
{
obj* x_50; obj* x_51; obj* x_52; 
lean::inc(x_44);
x_50 = l_Lean_Parser_ParserState_restore(x_45, x_43, x_44);
lean::dec(x_43);
lean::inc(x_1);
x_51 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg(x_1, x_50);
x_52 = l_Lean_Parser_mergeOrElseErrors(x_51, x_47, x_44);
lean::dec(x_44);
x_15 = x_52;
goto block_33;
}
}
}
else
{
obj* x_53; obj* x_54; 
lean::dec(x_41);
lean::dec(x_1);
x_53 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_54 = l_Lean_Parser_ParserState_mkNode(x_40, x_53, x_4);
return x_54;
}
}
else
{
obj* x_55; obj* x_56; 
lean::dec(x_37);
lean::dec(x_1);
x_55 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_56 = l_Lean_Parser_ParserState_mkNode(x_36, x_55, x_4);
return x_56;
}
}
else
{
obj* x_57; obj* x_58; 
lean::dec(x_35);
lean::dec(x_1);
x_57 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_58 = l_Lean_Parser_ParserState_mkNode(x_34, x_57, x_4);
return x_58;
}
}
}
}
obj* l_Lean_Parser_Term_have___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_have___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_haveAssign;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_fromTerm;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___closed__3;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___closed__2;
x_2 = l_Lean_Parser_Term_have___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_have___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optIdent;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_have___closed__6;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___closed__1;
x_2 = l_Lean_Parser_Term_have___closed__7;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_have___closed__8;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__10() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_have___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_have___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___closed__9;
x_2 = l_Lean_Parser_Term_have___closed__10;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_have() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_have___closed__11;
return x_1;
}
}
obj* l_Lean_Parser_Term_have___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_have___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_have(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_have;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("suffices");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("suffices ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_suffices___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_48; obj* x_49; obj* x_50; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_48 = lean::cnstr_get(x_2, 1);
lean::inc(x_48);
lean::inc(x_1);
x_49 = l_Lean_Parser_tokenFn(x_1, x_2);
x_50 = lean::cnstr_get(x_49, 3);
lean::inc(x_50);
if (lean::obj_tag(x_50) == 0)
{
obj* x_51; obj* x_52; 
x_51 = lean::cnstr_get(x_49, 0);
lean::inc(x_51);
x_52 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_51);
lean::dec(x_51);
if (lean::obj_tag(x_52) == 2)
{
obj* x_53; obj* x_54; uint8 x_55; 
x_53 = lean::cnstr_get(x_52, 1);
lean::inc(x_53);
lean::dec(x_52);
x_54 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4;
x_55 = lean::string_dec_eq(x_53, x_54);
lean::dec(x_53);
if (x_55 == 0)
{
obj* x_56; obj* x_57; 
x_56 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7;
x_57 = l_Lean_Parser_ParserState_mkErrorsAt(x_49, x_56, x_48);
x_15 = x_57;
goto block_47;
}
else
{
lean::dec(x_48);
x_15 = x_49;
goto block_47;
}
}
else
{
obj* x_58; obj* x_59; 
lean::dec(x_52);
x_58 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7;
x_59 = l_Lean_Parser_ParserState_mkErrorsAt(x_49, x_58, x_48);
x_15 = x_59;
goto block_47;
}
}
else
{
obj* x_60; obj* x_61; 
lean::dec(x_50);
x_60 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7;
x_61 = l_Lean_Parser_ParserState_mkErrorsAt(x_49, x_60, x_48);
x_15 = x_61;
goto block_47;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
block_47:
{
obj* x_16; 
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; 
lean::inc(x_1);
x_17 = l_Lean_Parser_Term_optIdent___elambda__1___rarg(x_1, x_15);
x_18 = lean::cnstr_get(x_17, 3);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_19 = l_Lean_Parser_termParserAttribute;
x_20 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_21 = l_Lean_Parser_ParserAttribute_runParser(x_19, x_20, x_1, x_17);
x_22 = lean::cnstr_get(x_21, 3);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
lean::inc(x_1);
x_23 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg(x_1, x_21);
x_24 = lean::cnstr_get(x_23, 3);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = lean::cnstr_get(x_23, 1);
lean::inc(x_25);
lean::inc(x_1);
x_26 = l_Lean_Parser_tokenFn(x_1, x_23);
x_27 = lean::cnstr_get(x_26, 3);
lean::inc(x_27);
if (lean::obj_tag(x_27) == 0)
{
obj* x_28; obj* x_29; 
x_28 = lean::cnstr_get(x_26, 0);
lean::inc(x_28);
x_29 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_28);
lean::dec(x_28);
if (lean::obj_tag(x_29) == 2)
{
obj* x_30; obj* x_31; uint8 x_32; 
x_30 = lean::cnstr_get(x_29, 1);
lean::inc(x_30);
lean::dec(x_29);
x_31 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
x_32 = lean::string_dec_eq(x_30, x_31);
lean::dec(x_30);
if (x_32 == 0)
{
obj* x_33; obj* x_34; 
x_33 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_34 = l_Lean_Parser_ParserState_mkErrorsAt(x_26, x_33, x_25);
x_5 = x_34;
goto block_14;
}
else
{
lean::dec(x_25);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_29);
x_35 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_36 = l_Lean_Parser_ParserState_mkErrorsAt(x_26, x_35, x_25);
x_5 = x_36;
goto block_14;
}
}
else
{
obj* x_37; obj* x_38; 
lean::dec(x_27);
x_37 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_38 = l_Lean_Parser_ParserState_mkErrorsAt(x_26, x_37, x_25);
x_5 = x_38;
goto block_14;
}
}
else
{
obj* x_39; obj* x_40; 
lean::dec(x_24);
lean::dec(x_1);
x_39 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_40 = l_Lean_Parser_ParserState_mkNode(x_23, x_39, x_4);
return x_40;
}
}
else
{
obj* x_41; obj* x_42; 
lean::dec(x_22);
lean::dec(x_1);
x_41 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_42 = l_Lean_Parser_ParserState_mkNode(x_21, x_41, x_4);
return x_42;
}
}
else
{
obj* x_43; obj* x_44; 
lean::dec(x_18);
lean::dec(x_1);
x_43 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_44 = l_Lean_Parser_ParserState_mkNode(x_17, x_43, x_4);
return x_44;
}
}
else
{
obj* x_45; obj* x_46; 
lean::dec(x_16);
lean::dec(x_1);
x_45 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_46 = l_Lean_Parser_ParserState_mkNode(x_15, x_45, x_4);
return x_46;
}
}
}
}
obj* l_Lean_Parser_Term_suffices___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_suffices___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_fromTerm;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_have___closed__4;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_suffices___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optIdent;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_suffices___closed__3;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_suffices___closed__1;
x_2 = l_Lean_Parser_Term_suffices___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_suffices___closed__5;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_suffices___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_suffices___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_suffices___closed__6;
x_2 = l_Lean_Parser_Term_suffices___closed__7;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_suffices() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_suffices___closed__8;
return x_1;
}
}
obj* l_Lean_Parser_Term_suffices___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_suffices___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_suffices(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_suffices;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("show");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("show ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_show___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_19; obj* x_20; obj* x_21; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_19 = lean::cnstr_get(x_2, 1);
lean::inc(x_19);
lean::inc(x_1);
x_20 = l_Lean_Parser_tokenFn(x_1, x_2);
x_21 = lean::cnstr_get(x_20, 3);
lean::inc(x_21);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_23; 
x_22 = lean::cnstr_get(x_20, 0);
lean::inc(x_22);
x_23 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_22);
lean::dec(x_22);
if (lean::obj_tag(x_23) == 2)
{
obj* x_24; obj* x_25; uint8 x_26; 
x_24 = lean::cnstr_get(x_23, 1);
lean::inc(x_24);
lean::dec(x_23);
x_25 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__4;
x_26 = lean::string_dec_eq(x_24, x_25);
lean::dec(x_24);
if (x_26 == 0)
{
obj* x_27; obj* x_28; 
x_27 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_20, x_27, x_19);
x_5 = x_28;
goto block_18;
}
else
{
lean::dec(x_19);
x_5 = x_20;
goto block_18;
}
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_23);
x_29 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__7;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_20, x_29, x_19);
x_5 = x_30;
goto block_18;
}
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_21);
x_31 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__7;
x_32 = l_Lean_Parser_ParserState_mkErrorsAt(x_20, x_31, x_19);
x_5 = x_32;
goto block_18;
}
block_18:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = l_Lean_Parser_Term_fromTerm___elambda__1___rarg(x_1, x_9);
x_12 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_11, x_12, x_4);
return x_13;
}
else
{
obj* x_14; obj* x_15; 
lean::dec(x_10);
lean::dec(x_1);
x_14 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__2;
x_15 = l_Lean_Parser_ParserState_mkNode(x_9, x_14, x_4);
return x_15;
}
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_6);
lean::dec(x_1);
x_16 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__2;
x_17 = l_Lean_Parser_ParserState_mkNode(x_5, x_16, x_4);
return x_17;
}
}
}
}
obj* l_Lean_Parser_Term_show___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_show___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_show___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_fromTerm;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_show___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_show___closed__1;
x_2 = l_Lean_Parser_Term_show___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_show___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_show___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_show___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_show___closed__4;
x_2 = l_Lean_Parser_Term_show___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_show() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_show___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_show___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_show___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_show(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_show___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_show;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_fun___elambda__1___spec__1(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::array_get_size(x_5);
lean::dec(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
x_8 = l_Lean_Parser_termParserAttribute;
x_9 = l_Lean_Parser_appPrec;
lean::inc(x_3);
x_10 = l_Lean_Parser_ParserAttribute_runParser(x_8, x_9, x_3, x_4);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; uint8 x_13; 
lean::dec(x_6);
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = lean::nat_dec_eq(x_7, x_12);
lean::dec(x_12);
lean::dec(x_7);
if (x_13 == 0)
{
x_4 = x_10;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
lean::dec(x_3);
x_15 = l_Lean_Parser_manyAux___main___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_10, x_15);
return x_16;
}
}
else
{
obj* x_17; uint8 x_18; 
lean::dec(x_11);
lean::dec(x_3);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
x_18 = lean::nat_dec_eq(x_7, x_17);
lean::dec(x_17);
if (x_18 == 0)
{
lean::dec(x_7);
lean::dec(x_6);
return x_10;
}
else
{
obj* x_19; 
x_19 = l_Lean_Parser_ParserState_restore(x_10, x_6, x_7);
lean::dec(x_6);
return x_19;
}
}
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("fun");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("λ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("⇒");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__6;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__8() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("=>");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__8;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__10;
x_2 = l_Lean_Parser_unicodeSymbolFn___rarg___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__11;
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__5;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__13() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__12;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__14() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__13;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__15() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__7;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__16() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__15;
x_2 = l_Lean_Parser_unicodeSymbolFn___rarg___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__17() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__16;
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__9;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__18() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__17;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___elambda__1___closed__19() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__18;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_fun___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_6 = l_Lean_Parser_Term_fun___elambda__1___closed__4;
x_7 = l_Lean_Parser_Term_fun___elambda__1___closed__5;
x_8 = l_Lean_Parser_Term_fun___elambda__1___closed__14;
lean::inc(x_2);
x_9 = l_Lean_Parser_unicodeSymbolFnAux(x_6, x_7, x_8, x_2, x_3);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_12 = lean::array_get_size(x_11);
lean::dec(x_11);
x_13 = l_Lean_Parser_termParserAttribute;
x_14 = l_Lean_Parser_appPrec;
lean::inc(x_2);
x_15 = l_Lean_Parser_ParserAttribute_runParser(x_13, x_14, x_2, x_9);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
uint8 x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_17 = 0;
lean::inc(x_2);
x_18 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_fun___elambda__1___spec__1(x_17, x_1, x_2, x_15);
x_19 = l_Lean_nullKind;
x_20 = l_Lean_Parser_ParserState_mkNode(x_18, x_19, x_12);
x_21 = lean::cnstr_get(x_20, 3);
lean::inc(x_21);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_22 = l_Lean_Parser_Term_fun___elambda__1___closed__7;
x_23 = l_Lean_Parser_Term_fun___elambda__1___closed__9;
x_24 = l_Lean_Parser_Term_fun___elambda__1___closed__19;
lean::inc(x_2);
x_25 = l_Lean_Parser_unicodeSymbolFnAux(x_22, x_23, x_24, x_2, x_20);
x_26 = lean::cnstr_get(x_25, 3);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
x_27 = lean::mk_nat_obj(0u);
x_28 = l_Lean_Parser_ParserAttribute_runParser(x_13, x_27, x_2, x_25);
x_29 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_30 = l_Lean_Parser_ParserState_mkNode(x_28, x_29, x_5);
return x_30;
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_26);
lean::dec(x_2);
x_31 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_32 = l_Lean_Parser_ParserState_mkNode(x_25, x_31, x_5);
return x_32;
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_21);
lean::dec(x_2);
x_33 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_20, x_33, x_5);
return x_34;
}
}
else
{
obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_16);
x_35 = l_Lean_nullKind;
x_36 = l_Lean_Parser_ParserState_mkNode(x_15, x_35, x_12);
x_37 = lean::cnstr_get(x_36, 3);
lean::inc(x_37);
if (lean::obj_tag(x_37) == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_38 = l_Lean_Parser_Term_fun___elambda__1___closed__7;
x_39 = l_Lean_Parser_Term_fun___elambda__1___closed__9;
x_40 = l_Lean_Parser_Term_fun___elambda__1___closed__19;
lean::inc(x_2);
x_41 = l_Lean_Parser_unicodeSymbolFnAux(x_38, x_39, x_40, x_2, x_36);
x_42 = lean::cnstr_get(x_41, 3);
lean::inc(x_42);
if (lean::obj_tag(x_42) == 0)
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_43 = lean::mk_nat_obj(0u);
x_44 = l_Lean_Parser_ParserAttribute_runParser(x_13, x_43, x_2, x_41);
x_45 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_46 = l_Lean_Parser_ParserState_mkNode(x_44, x_45, x_5);
return x_46;
}
else
{
obj* x_47; obj* x_48; 
lean::dec(x_42);
lean::dec(x_2);
x_47 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_48 = l_Lean_Parser_ParserState_mkNode(x_41, x_47, x_5);
return x_48;
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_37);
lean::dec(x_2);
x_49 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_50 = l_Lean_Parser_ParserState_mkNode(x_36, x_49, x_5);
return x_50;
}
}
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_10);
lean::dec(x_2);
x_51 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_52 = l_Lean_Parser_ParserState_mkNode(x_9, x_51, x_5);
return x_52;
}
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__4;
x_3 = l_Lean_Parser_Term_fun___elambda__1___closed__5;
x_4 = l_Lean_Parser_unicodeSymbolInfo(x_2, x_3, x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__7;
x_3 = l_Lean_Parser_Term_fun___elambda__1___closed__9;
x_4 = l_Lean_Parser_unicodeSymbolInfo(x_2, x_3, x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_fun___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___closed__1;
x_2 = l_Lean_Parser_Term_fun___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_fun___closed__5;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_fun___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fun___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fun___closed__6;
x_2 = l_Lean_Parser_Term_fun___closed__7;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fun() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_fun___closed__8;
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_fun___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_fun___elambda__1___spec__1(x_5, x_2, x_3, x_4);
lean::dec(x_2);
return x_6;
}
}
obj* l_Lean_Parser_Term_fun___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_fun___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_fun(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_fun___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_fun;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("structInstField");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_structInstField___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
lean::inc(x_1);
x_15 = l_Lean_Parser_identFn___rarg(x_1, x_2);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; 
x_17 = lean::cnstr_get(x_15, 1);
lean::inc(x_17);
lean::inc(x_1);
x_18 = l_Lean_Parser_tokenFn(x_1, x_15);
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; 
x_20 = lean::cnstr_get(x_18, 0);
lean::inc(x_20);
x_21 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_20);
lean::dec(x_20);
if (lean::obj_tag(x_21) == 2)
{
obj* x_22; obj* x_23; uint8 x_24; 
x_22 = lean::cnstr_get(x_21, 1);
lean::inc(x_22);
lean::dec(x_21);
x_23 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_24 = lean::string_dec_eq(x_22, x_23);
lean::dec(x_22);
if (x_24 == 0)
{
obj* x_25; obj* x_26; 
x_25 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_18, x_25, x_17);
x_5 = x_26;
goto block_14;
}
else
{
lean::dec(x_17);
x_5 = x_18;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_21);
x_27 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_18, x_27, x_17);
x_5 = x_28;
goto block_14;
}
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_19);
x_29 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_18, x_29, x_17);
x_5 = x_30;
goto block_14;
}
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_16);
lean::dec(x_1);
x_31 = l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2;
x_32 = l_Lean_Parser_ParserState_mkNode(x_15, x_31, x_4);
return x_32;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_structInstField___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_structInstField___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInstField___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_haveAssign___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstField___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_structInstField___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstField___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_structInstField___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInstField___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInstField___closed__2;
x_2 = l_Lean_Parser_Term_structInstField___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstField() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_structInstField___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_structInstField___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_structInstField___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("structInstSource");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_getBuiltinSearchPath___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__4;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__5;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_structInstSource___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_32; obj* x_33; obj* x_34; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_32 = lean::cnstr_get(x_2, 1);
lean::inc(x_32);
lean::inc(x_1);
x_33 = l_Lean_Parser_tokenFn(x_1, x_2);
x_34 = lean::cnstr_get(x_33, 3);
lean::inc(x_34);
if (lean::obj_tag(x_34) == 0)
{
obj* x_35; obj* x_36; 
x_35 = lean::cnstr_get(x_33, 0);
lean::inc(x_35);
x_36 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_35);
lean::dec(x_35);
if (lean::obj_tag(x_36) == 2)
{
obj* x_37; obj* x_38; uint8 x_39; 
x_37 = lean::cnstr_get(x_36, 1);
lean::inc(x_37);
lean::dec(x_36);
x_38 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3;
x_39 = lean::string_dec_eq(x_37, x_38);
lean::dec(x_37);
if (x_39 == 0)
{
obj* x_40; obj* x_41; 
x_40 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6;
x_41 = l_Lean_Parser_ParserState_mkErrorsAt(x_33, x_40, x_32);
x_5 = x_41;
goto block_31;
}
else
{
lean::dec(x_32);
x_5 = x_33;
goto block_31;
}
}
else
{
obj* x_42; obj* x_43; 
lean::dec(x_36);
x_42 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6;
x_43 = l_Lean_Parser_ParserState_mkErrorsAt(x_33, x_42, x_32);
x_5 = x_43;
goto block_31;
}
}
else
{
obj* x_44; obj* x_45; 
lean::dec(x_34);
x_44 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6;
x_45 = l_Lean_Parser_ParserState_mkErrorsAt(x_33, x_44, x_32);
x_5 = x_45;
goto block_31;
}
block_31:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_7 = lean::cnstr_get(x_5, 0);
lean::inc(x_7);
x_8 = lean::array_get_size(x_7);
lean::dec(x_7);
x_9 = lean::cnstr_get(x_5, 1);
lean::inc(x_9);
x_10 = l_Lean_Parser_termParserAttribute;
x_11 = lean::mk_nat_obj(0u);
x_12 = l_Lean_Parser_ParserAttribute_runParser(x_10, x_11, x_1, x_5);
x_13 = lean::cnstr_get(x_12, 3);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_9);
x_14 = l_Lean_nullKind;
x_15 = l_Lean_Parser_ParserState_mkNode(x_12, x_14, x_8);
x_16 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2;
x_17 = l_Lean_Parser_ParserState_mkNode(x_15, x_16, x_4);
return x_17;
}
else
{
obj* x_18; uint8 x_19; 
lean::dec(x_13);
x_18 = lean::cnstr_get(x_12, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_18, x_9);
lean::dec(x_18);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_9);
x_20 = l_Lean_nullKind;
x_21 = l_Lean_Parser_ParserState_mkNode(x_12, x_20, x_8);
x_22 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_4);
return x_23;
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
x_24 = l_Lean_Parser_ParserState_restore(x_12, x_8, x_9);
x_25 = l_Lean_nullKind;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_8);
x_27 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2;
x_28 = l_Lean_Parser_ParserState_mkNode(x_26, x_27, x_4);
return x_28;
}
}
}
else
{
obj* x_29; obj* x_30; 
lean::dec(x_6);
lean::dec(x_1);
x_29 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2;
x_30 = l_Lean_Parser_ParserState_mkNode(x_5, x_29, x_4);
return x_30;
}
}
}
}
obj* l_Lean_Parser_Term_structInstSource___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_structInstSource___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInstSource___closed__1;
x_2 = l_Lean_Parser_Term_structInstSource___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_structInstSource___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_structInstSource___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInstSource___closed__4;
x_2 = l_Lean_Parser_Term_structInstSource___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInstSource() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_structInstSource___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_structInstSource___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_structInstSource___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_structInst___elambda__1___spec__2(uint8 x_1, uint8 x_2, obj* x_3, uint8 x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_44; obj* x_45; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::inc(x_6);
x_44 = l_Lean_Parser_Term_structInstField___elambda__1___rarg(x_6, x_7);
x_45 = lean::cnstr_get(x_44, 3);
lean::inc(x_45);
if (lean::obj_tag(x_45) == 0)
{
x_11 = x_44;
goto block_43;
}
else
{
obj* x_46; obj* x_47; uint8 x_48; 
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
lean::dec(x_45);
x_47 = lean::cnstr_get(x_44, 1);
lean::inc(x_47);
x_48 = lean::nat_dec_eq(x_47, x_10);
lean::dec(x_47);
if (x_48 == 0)
{
lean::dec(x_46);
x_11 = x_44;
goto block_43;
}
else
{
obj* x_49; obj* x_50; obj* x_51; 
lean::inc(x_10);
x_49 = l_Lean_Parser_ParserState_restore(x_44, x_9, x_10);
lean::inc(x_6);
x_50 = l_Lean_Parser_Term_structInstSource___elambda__1___rarg(x_6, x_49);
x_51 = l_Lean_Parser_mergeOrElseErrors(x_50, x_46, x_10);
x_11 = x_51;
goto block_43;
}
}
block_43:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_23; obj* x_24; 
lean::dec(x_10);
lean::dec(x_9);
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
x_14 = lean::array_get_size(x_13);
lean::dec(x_13);
x_15 = lean::cnstr_get(x_11, 1);
lean::inc(x_15);
lean::inc(x_6);
x_23 = l_Lean_Parser_tokenFn(x_6, x_11);
x_24 = lean::cnstr_get(x_23, 3);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
x_26 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_25);
lean::dec(x_25);
if (lean::obj_tag(x_26) == 2)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
lean::dec(x_26);
x_28 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_29 = lean::string_dec_eq(x_27, x_28);
lean::dec(x_27);
if (x_29 == 0)
{
obj* x_30; obj* x_31; 
x_30 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_15);
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_23, x_30, x_15);
x_16 = x_31;
goto block_22;
}
else
{
x_16 = x_23;
goto block_22;
}
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_26);
x_32 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_15);
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_23, x_32, x_15);
x_16 = x_33;
goto block_22;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_24);
x_34 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
lean::inc(x_15);
x_35 = l_Lean_Parser_ParserState_mkErrorsAt(x_23, x_34, x_15);
x_16 = x_35;
goto block_22;
}
block_22:
{
obj* x_17; 
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
lean::dec(x_15);
lean::dec(x_14);
{
uint8 _tmp_3 = x_2;
obj* _tmp_6 = x_16;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_17);
lean::dec(x_6);
x_19 = l_Lean_Parser_ParserState_restore(x_16, x_14, x_15);
lean::dec(x_14);
x_20 = l_Lean_nullKind;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_3);
return x_21;
}
}
}
else
{
lean::dec(x_12);
lean::dec(x_6);
if (x_4 == 0)
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_10);
lean::dec(x_9);
x_36 = lean::box(0);
x_37 = l_Lean_Parser_ParserState_pushSyntax(x_11, x_36);
x_38 = l_Lean_nullKind;
x_39 = l_Lean_Parser_ParserState_mkNode(x_37, x_38, x_3);
return x_39;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
x_41 = l_Lean_nullKind;
x_42 = l_Lean_Parser_ParserState_mkNode(x_40, x_41, x_3);
return x_42;
}
}
}
}
}
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_structInst___elambda__1___spec__1(uint8 x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = 1;
x_9 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_structInst___elambda__1___spec__2(x_1, x_2, x_7, x_8, x_3, x_4, x_5);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("structInst");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("{");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" . ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__6;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__7;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__8;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__10;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___elambda__1___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__11;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_structInst___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_39; obj* x_101; obj* x_102; obj* x_103; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_101 = lean::cnstr_get(x_3, 1);
lean::inc(x_101);
lean::inc(x_2);
x_102 = l_Lean_Parser_tokenFn(x_2, x_3);
x_103 = lean::cnstr_get(x_102, 3);
lean::inc(x_103);
if (lean::obj_tag(x_103) == 0)
{
obj* x_104; obj* x_105; 
x_104 = lean::cnstr_get(x_102, 0);
lean::inc(x_104);
x_105 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_104);
lean::dec(x_104);
if (lean::obj_tag(x_105) == 2)
{
obj* x_106; obj* x_107; uint8 x_108; 
x_106 = lean::cnstr_get(x_105, 1);
lean::inc(x_106);
lean::dec(x_105);
x_107 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_108 = lean::string_dec_eq(x_106, x_107);
lean::dec(x_106);
if (x_108 == 0)
{
obj* x_109; obj* x_110; 
x_109 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_110 = l_Lean_Parser_ParserState_mkErrorsAt(x_102, x_109, x_101);
x_39 = x_110;
goto block_100;
}
else
{
lean::dec(x_101);
x_39 = x_102;
goto block_100;
}
}
else
{
obj* x_111; obj* x_112; 
lean::dec(x_105);
x_111 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_112 = l_Lean_Parser_ParserState_mkErrorsAt(x_102, x_111, x_101);
x_39 = x_112;
goto block_100;
}
}
else
{
obj* x_113; obj* x_114; 
lean::dec(x_103);
x_113 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_114 = l_Lean_Parser_ParserState_mkErrorsAt(x_102, x_113, x_101);
x_39 = x_114;
goto block_100;
}
block_38:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; uint8 x_9; obj* x_10; obj* x_11; 
x_8 = 0;
x_9 = 1;
lean::inc(x_2);
x_10 = l_Lean_Parser_sepByFn___at_Lean_Parser_Term_structInst___elambda__1___spec__1(x_8, x_9, x_1, x_2, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = l_Lean_Parser_tokenFn(x_2, x_10);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_15);
lean::dec(x_15);
if (lean::obj_tag(x_16) == 2)
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
x_18 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_19 = lean::string_dec_eq(x_17, x_18);
lean::dec(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_21 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_20, x_12);
x_22 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_5);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_12);
x_24 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_13, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_26, x_12);
x_28 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_5);
return x_29;
}
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_14);
x_30 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_30, x_12);
x_32 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_5);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_2);
x_34 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_10, x_34, x_5);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_7);
lean::dec(x_2);
x_36 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_6, x_36, x_5);
return x_37;
}
}
block_100:
{
obj* x_40; 
x_40 = lean::cnstr_get(x_39, 3);
lean::inc(x_40);
if (lean::obj_tag(x_40) == 0)
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_67; obj* x_68; 
x_41 = lean::cnstr_get(x_39, 0);
lean::inc(x_41);
x_42 = lean::cnstr_get(x_39, 1);
lean::inc(x_42);
x_43 = lean::array_get_size(x_41);
lean::dec(x_41);
lean::inc(x_2);
x_67 = l_Lean_Parser_identFn___rarg(x_2, x_39);
x_68 = lean::cnstr_get(x_67, 3);
lean::inc(x_68);
if (lean::obj_tag(x_68) == 0)
{
obj* x_69; obj* x_70; obj* x_71; 
x_69 = lean::cnstr_get(x_67, 1);
lean::inc(x_69);
lean::inc(x_2);
x_70 = l_Lean_Parser_tokenFn(x_2, x_67);
x_71 = lean::cnstr_get(x_70, 3);
lean::inc(x_71);
if (lean::obj_tag(x_71) == 0)
{
obj* x_72; obj* x_73; 
x_72 = lean::cnstr_get(x_70, 0);
lean::inc(x_72);
x_73 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_72);
lean::dec(x_72);
if (lean::obj_tag(x_73) == 2)
{
obj* x_74; obj* x_75; uint8 x_76; 
x_74 = lean::cnstr_get(x_73, 1);
lean::inc(x_74);
lean::dec(x_73);
x_75 = l_Lean_Parser_Term_structInst___elambda__1___closed__6;
x_76 = lean::string_dec_eq(x_74, x_75);
lean::dec(x_74);
if (x_76 == 0)
{
obj* x_77; obj* x_78; obj* x_79; obj* x_80; obj* x_81; 
x_77 = l_Lean_Parser_Term_structInst___elambda__1___closed__9;
x_78 = l_Lean_Parser_ParserState_mkErrorsAt(x_70, x_77, x_69);
x_79 = lean::cnstr_get(x_78, 0);
lean::inc(x_79);
x_80 = lean::cnstr_get(x_78, 2);
lean::inc(x_80);
x_81 = lean::cnstr_get(x_78, 3);
lean::inc(x_81);
x_44 = x_78;
x_45 = x_79;
x_46 = x_80;
x_47 = x_81;
goto block_66;
}
else
{
obj* x_82; obj* x_83; obj* x_84; 
lean::dec(x_69);
x_82 = lean::cnstr_get(x_70, 0);
lean::inc(x_82);
x_83 = lean::cnstr_get(x_70, 2);
lean::inc(x_83);
x_84 = lean::cnstr_get(x_70, 3);
lean::inc(x_84);
x_44 = x_70;
x_45 = x_82;
x_46 = x_83;
x_47 = x_84;
goto block_66;
}
}
else
{
obj* x_85; obj* x_86; obj* x_87; obj* x_88; obj* x_89; 
lean::dec(x_73);
x_85 = l_Lean_Parser_Term_structInst___elambda__1___closed__9;
x_86 = l_Lean_Parser_ParserState_mkErrorsAt(x_70, x_85, x_69);
x_87 = lean::cnstr_get(x_86, 0);
lean::inc(x_87);
x_88 = lean::cnstr_get(x_86, 2);
lean::inc(x_88);
x_89 = lean::cnstr_get(x_86, 3);
lean::inc(x_89);
x_44 = x_86;
x_45 = x_87;
x_46 = x_88;
x_47 = x_89;
goto block_66;
}
}
else
{
obj* x_90; obj* x_91; obj* x_92; obj* x_93; obj* x_94; 
lean::dec(x_71);
x_90 = l_Lean_Parser_Term_structInst___elambda__1___closed__9;
x_91 = l_Lean_Parser_ParserState_mkErrorsAt(x_70, x_90, x_69);
x_92 = lean::cnstr_get(x_91, 0);
lean::inc(x_92);
x_93 = lean::cnstr_get(x_91, 2);
lean::inc(x_93);
x_94 = lean::cnstr_get(x_91, 3);
lean::inc(x_94);
x_44 = x_91;
x_45 = x_92;
x_46 = x_93;
x_47 = x_94;
goto block_66;
}
}
else
{
obj* x_95; obj* x_96; obj* x_97; 
lean::dec(x_68);
x_95 = lean::cnstr_get(x_67, 0);
lean::inc(x_95);
x_96 = lean::cnstr_get(x_67, 2);
lean::inc(x_96);
x_97 = lean::cnstr_get(x_67, 3);
lean::inc(x_97);
x_44 = x_67;
x_45 = x_95;
x_46 = x_96;
x_47 = x_97;
goto block_66;
}
block_66:
{
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; 
lean::dec(x_46);
lean::dec(x_45);
x_48 = lean::cnstr_get(x_44, 3);
lean::inc(x_48);
if (lean::obj_tag(x_48) == 0)
{
obj* x_49; obj* x_50; 
lean::dec(x_42);
x_49 = l_Lean_nullKind;
x_50 = l_Lean_Parser_ParserState_mkNode(x_44, x_49, x_43);
x_6 = x_50;
goto block_38;
}
else
{
obj* x_51; uint8 x_52; 
lean::dec(x_48);
x_51 = lean::cnstr_get(x_44, 1);
lean::inc(x_51);
x_52 = lean::nat_dec_eq(x_51, x_42);
lean::dec(x_51);
if (x_52 == 0)
{
obj* x_53; obj* x_54; 
lean::dec(x_42);
x_53 = l_Lean_nullKind;
x_54 = l_Lean_Parser_ParserState_mkNode(x_44, x_53, x_43);
x_6 = x_54;
goto block_38;
}
else
{
obj* x_55; obj* x_56; obj* x_57; 
x_55 = l_Lean_Parser_ParserState_restore(x_44, x_43, x_42);
x_56 = l_Lean_nullKind;
x_57 = l_Lean_Parser_ParserState_mkNode(x_55, x_56, x_43);
x_6 = x_57;
goto block_38;
}
}
}
else
{
obj* x_58; obj* x_59; uint8 x_60; 
lean::dec(x_44);
x_58 = l_Array_shrink___main___rarg(x_45, x_43);
lean::inc(x_42);
x_59 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_59, 0, x_58);
lean::cnstr_set(x_59, 1, x_42);
lean::cnstr_set(x_59, 2, x_46);
lean::cnstr_set(x_59, 3, x_47);
x_60 = lean::nat_dec_eq(x_42, x_42);
if (x_60 == 0)
{
obj* x_61; obj* x_62; 
lean::dec(x_42);
x_61 = l_Lean_nullKind;
x_62 = l_Lean_Parser_ParserState_mkNode(x_59, x_61, x_43);
x_6 = x_62;
goto block_38;
}
else
{
obj* x_63; obj* x_64; obj* x_65; 
x_63 = l_Lean_Parser_ParserState_restore(x_59, x_43, x_42);
x_64 = l_Lean_nullKind;
x_65 = l_Lean_Parser_ParserState_mkNode(x_63, x_64, x_43);
x_6 = x_65;
goto block_38;
}
}
}
}
else
{
obj* x_98; obj* x_99; 
lean::dec(x_40);
lean::dec(x_2);
x_98 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_99 = l_Lean_Parser_ParserState_mkNode(x_39, x_98, x_5);
return x_99;
}
}
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__6;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_structInst___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_structInst___closed__3;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_structInstField;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_structInstSource;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___closed__5;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__2;
x_3 = l_Lean_Parser_sepByInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___closed__6;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___closed__4;
x_2 = l_Lean_Parser_Term_structInst___closed__7;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___closed__1;
x_2 = l_Lean_Parser_Term_structInst___closed__8;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_structInst___closed__9;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__11() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_structInst___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_structInst___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___closed__10;
x_2 = l_Lean_Parser_Term_structInst___closed__11;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_structInst() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_structInst___closed__12;
return x_1;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_structInst___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; uint8 x_9; uint8 x_10; obj* x_11; 
x_8 = lean::unbox(x_1);
lean::dec(x_1);
x_9 = lean::unbox(x_2);
lean::dec(x_2);
x_10 = lean::unbox(x_4);
lean::dec(x_4);
x_11 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_structInst___elambda__1___spec__2(x_8, x_9, x_3, x_10, x_5, x_6, x_7);
lean::dec(x_5);
return x_11;
}
}
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_structInst___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; uint8 x_7; obj* x_8; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = lean::unbox(x_2);
lean::dec(x_2);
x_8 = l_Lean_Parser_sepByFn___at_Lean_Parser_Term_structInst___elambda__1___spec__1(x_6, x_7, x_3, x_4, x_5);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_Term_structInst___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_structInst___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_structInst(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_structInst___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_structInst;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("typeSpec");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_typeSpec___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_typeSpec___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_typeSpec___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_typeSpec___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_typeAscription___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeSpec___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_typeSpec___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_typeSpec___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeSpec___closed__1;
x_2 = l_Lean_Parser_Term_typeSpec___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_typeSpec() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_typeSpec___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_Term_typeSpec___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_typeSpec___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_optType___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
x_6 = l_Lean_Parser_Term_typeSpec___elambda__1___rarg(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
lean::dec(x_5);
x_8 = l_Lean_nullKind;
x_9 = l_Lean_Parser_ParserState_mkNode(x_6, x_8, x_4);
return x_9;
}
else
{
obj* x_10; uint8 x_11; 
lean::dec(x_7);
x_10 = lean::cnstr_get(x_6, 1);
lean::inc(x_10);
x_11 = lean::nat_dec_eq(x_10, x_5);
lean::dec(x_10);
if (x_11 == 0)
{
obj* x_12; obj* x_13; 
lean::dec(x_5);
x_12 = l_Lean_nullKind;
x_13 = l_Lean_Parser_ParserState_mkNode(x_6, x_12, x_4);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; 
x_14 = l_Lean_Parser_ParserState_restore(x_6, x_4, x_5);
x_15 = l_Lean_nullKind;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_4);
return x_16;
}
}
}
}
obj* l_Lean_Parser_Term_optType___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_optType___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_optType___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeSpec;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_optionaInfo(x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_optType___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_optType___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_optType___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_optType___closed__1;
x_2 = l_Lean_Parser_Term_optType___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_optType() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_optType___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_Term_optType___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_optType___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("subtype");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" // ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_subtype___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_38; obj* x_65; obj* x_66; obj* x_67; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_65 = lean::cnstr_get(x_2, 1);
lean::inc(x_65);
lean::inc(x_1);
x_66 = l_Lean_Parser_tokenFn(x_1, x_2);
x_67 = lean::cnstr_get(x_66, 3);
lean::inc(x_67);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; 
x_68 = lean::cnstr_get(x_66, 0);
lean::inc(x_68);
x_69 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_68);
lean::dec(x_68);
if (lean::obj_tag(x_69) == 2)
{
obj* x_70; obj* x_71; uint8 x_72; 
x_70 = lean::cnstr_get(x_69, 1);
lean::inc(x_70);
lean::dec(x_69);
x_71 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_72 = lean::string_dec_eq(x_70, x_71);
lean::dec(x_70);
if (x_72 == 0)
{
obj* x_73; obj* x_74; 
x_73 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_74 = l_Lean_Parser_ParserState_mkErrorsAt(x_66, x_73, x_65);
x_38 = x_74;
goto block_64;
}
else
{
lean::dec(x_65);
x_38 = x_66;
goto block_64;
}
}
else
{
obj* x_75; obj* x_76; 
lean::dec(x_69);
x_75 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_76 = l_Lean_Parser_ParserState_mkErrorsAt(x_66, x_75, x_65);
x_38 = x_76;
goto block_64;
}
}
else
{
obj* x_77; obj* x_78; 
lean::dec(x_67);
x_77 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_78 = l_Lean_Parser_ParserState_mkErrorsAt(x_66, x_77, x_65);
x_38 = x_78;
goto block_64;
}
block_37:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
x_12 = l_Lean_Parser_tokenFn(x_1, x_9);
x_13 = lean::cnstr_get(x_12, 3);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
x_15 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_14);
lean::dec(x_14);
if (lean::obj_tag(x_15) == 2)
{
obj* x_16; obj* x_17; uint8 x_18; 
x_16 = lean::cnstr_get(x_15, 1);
lean::inc(x_16);
lean::dec(x_15);
x_17 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_18 = lean::string_dec_eq(x_16, x_17);
lean::dec(x_16);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_19 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_12, x_19, x_11);
x_21 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
else
{
obj* x_23; obj* x_24; 
lean::dec(x_11);
x_23 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_24 = l_Lean_Parser_ParserState_mkNode(x_12, x_23, x_4);
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_15);
x_25 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_12, x_25, x_11);
x_27 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_28 = l_Lean_Parser_ParserState_mkNode(x_26, x_27, x_4);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_13);
x_29 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_12, x_29, x_11);
x_31 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_32 = l_Lean_Parser_ParserState_mkNode(x_30, x_31, x_4);
return x_32;
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_10);
lean::dec(x_1);
x_33 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_9, x_33, x_4);
return x_34;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_6);
lean::dec(x_1);
x_35 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_36 = l_Lean_Parser_ParserState_mkNode(x_5, x_35, x_4);
return x_36;
}
}
block_64:
{
obj* x_39; 
x_39 = lean::cnstr_get(x_38, 3);
lean::inc(x_39);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_41; 
lean::inc(x_1);
x_40 = l_Lean_Parser_identFn___rarg(x_1, x_38);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
lean::inc(x_1);
x_42 = l_Lean_Parser_Term_optType___elambda__1___rarg(x_1, x_40);
x_43 = lean::cnstr_get(x_42, 3);
lean::inc(x_43);
if (lean::obj_tag(x_43) == 0)
{
obj* x_44; obj* x_45; obj* x_46; 
x_44 = lean::cnstr_get(x_42, 1);
lean::inc(x_44);
lean::inc(x_1);
x_45 = l_Lean_Parser_tokenFn(x_1, x_42);
x_46 = lean::cnstr_get(x_45, 3);
lean::inc(x_46);
if (lean::obj_tag(x_46) == 0)
{
obj* x_47; obj* x_48; 
x_47 = lean::cnstr_get(x_45, 0);
lean::inc(x_47);
x_48 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_47);
lean::dec(x_47);
if (lean::obj_tag(x_48) == 2)
{
obj* x_49; obj* x_50; uint8 x_51; 
x_49 = lean::cnstr_get(x_48, 1);
lean::inc(x_49);
lean::dec(x_48);
x_50 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4;
x_51 = lean::string_dec_eq(x_49, x_50);
lean::dec(x_49);
if (x_51 == 0)
{
obj* x_52; obj* x_53; 
x_52 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7;
x_53 = l_Lean_Parser_ParserState_mkErrorsAt(x_45, x_52, x_44);
x_5 = x_53;
goto block_37;
}
else
{
lean::dec(x_44);
x_5 = x_45;
goto block_37;
}
}
else
{
obj* x_54; obj* x_55; 
lean::dec(x_48);
x_54 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7;
x_55 = l_Lean_Parser_ParserState_mkErrorsAt(x_45, x_54, x_44);
x_5 = x_55;
goto block_37;
}
}
else
{
obj* x_56; obj* x_57; 
lean::dec(x_46);
x_56 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7;
x_57 = l_Lean_Parser_ParserState_mkErrorsAt(x_45, x_56, x_44);
x_5 = x_57;
goto block_37;
}
}
else
{
obj* x_58; obj* x_59; 
lean::dec(x_43);
lean::dec(x_1);
x_58 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_59 = l_Lean_Parser_ParserState_mkNode(x_42, x_58, x_4);
return x_59;
}
}
else
{
obj* x_60; obj* x_61; 
lean::dec(x_41);
lean::dec(x_1);
x_60 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_61 = l_Lean_Parser_ParserState_mkNode(x_40, x_60, x_4);
return x_61;
}
}
else
{
obj* x_62; obj* x_63; 
lean::dec(x_39);
lean::dec(x_1);
x_62 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_63 = l_Lean_Parser_ParserState_mkNode(x_38, x_62, x_4);
return x_63;
}
}
}
}
obj* l_Lean_Parser_Term_subtype___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_subtype___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_explicitUniv___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subtype___closed__2;
x_2 = l_Lean_Parser_Term_subtype___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_subtype___closed__4;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_subtype___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subtype___closed__1;
x_2 = l_Lean_Parser_Term_subtype___closed__6;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_subtype___closed__7;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__9() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_subtype___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_subtype___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subtype___closed__8;
x_2 = l_Lean_Parser_Term_subtype___closed__9;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subtype() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_subtype___closed__10;
return x_1;
}
}
obj* l_Lean_Parser_Term_subtype___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_subtype___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_subtype(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_subtype;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_List_format___rarg___closed__2;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__2;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__3;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2(uint8 x_1, uint8 x_2, obj* x_3, uint8 x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_11 = l_Lean_Parser_termParserAttribute;
x_12 = lean::mk_nat_obj(0u);
lean::inc(x_6);
x_13 = l_Lean_Parser_ParserAttribute_runParser(x_11, x_12, x_6, x_7);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_25; obj* x_26; 
lean::dec(x_10);
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = lean::array_get_size(x_15);
lean::dec(x_15);
x_17 = lean::cnstr_get(x_13, 1);
lean::inc(x_17);
lean::inc(x_6);
x_25 = l_Lean_Parser_tokenFn(x_6, x_13);
x_26 = lean::cnstr_get(x_25, 3);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; 
x_27 = lean::cnstr_get(x_25, 0);
lean::inc(x_27);
x_28 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_27);
lean::dec(x_27);
if (lean::obj_tag(x_28) == 2)
{
obj* x_29; obj* x_30; uint8 x_31; 
x_29 = lean::cnstr_get(x_28, 1);
lean::inc(x_29);
lean::dec(x_28);
x_30 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1;
x_31 = lean::string_dec_eq(x_29, x_30);
lean::dec(x_29);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_32, x_17);
x_18 = x_33;
goto block_24;
}
else
{
x_18 = x_25;
goto block_24;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_28);
x_34 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_35 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_34, x_17);
x_18 = x_35;
goto block_24;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_26);
x_36 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4;
lean::inc(x_17);
x_37 = l_Lean_Parser_ParserState_mkErrorsAt(x_25, x_36, x_17);
x_18 = x_37;
goto block_24;
}
block_24:
{
obj* x_19; 
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
lean::dec(x_17);
lean::dec(x_16);
{
uint8 _tmp_3 = x_2;
obj* _tmp_6 = x_18;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
obj* x_21; obj* x_22; obj* x_23; 
lean::dec(x_19);
lean::dec(x_6);
x_21 = l_Lean_Parser_ParserState_restore(x_18, x_16, x_17);
lean::dec(x_16);
x_22 = l_Lean_nullKind;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_3);
return x_23;
}
}
}
else
{
lean::dec(x_14);
lean::dec(x_6);
if (x_4 == 0)
{
obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_10);
lean::dec(x_9);
x_38 = lean::box(0);
x_39 = l_Lean_Parser_ParserState_pushSyntax(x_13, x_38);
x_40 = l_Lean_nullKind;
x_41 = l_Lean_Parser_ParserState_mkNode(x_39, x_40, x_3);
return x_41;
}
else
{
obj* x_42; obj* x_43; obj* x_44; 
x_42 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
x_43 = l_Lean_nullKind;
x_44 = l_Lean_Parser_ParserState_mkNode(x_42, x_43, x_3);
return x_44;
}
}
}
}
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_list___elambda__1___spec__1(uint8 x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = 1;
x_9 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2(x_1, x_2, x_7, x_8, x_3, x_4, x_5);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("list");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_List_repr___main___rarg___closed__2;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_List_repr___main___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__8;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__9;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_list___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_39; obj* x_40; obj* x_41; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_39 = lean::cnstr_get(x_3, 1);
lean::inc(x_39);
lean::inc(x_2);
x_40 = l_Lean_Parser_tokenFn(x_2, x_3);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_40, 0);
lean::inc(x_42);
x_43 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_42);
lean::dec(x_42);
if (lean::obj_tag(x_43) == 2)
{
obj* x_44; obj* x_45; uint8 x_46; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
lean::dec(x_43);
x_45 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_46 = lean::string_dec_eq(x_44, x_45);
lean::dec(x_44);
if (x_46 == 0)
{
obj* x_47; obj* x_48; 
x_47 = l_Lean_Parser_Term_list___elambda__1___closed__10;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_47, x_39);
x_6 = x_48;
goto block_38;
}
else
{
lean::dec(x_39);
x_6 = x_40;
goto block_38;
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_43);
x_49 = l_Lean_Parser_Term_list___elambda__1___closed__10;
x_50 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_49, x_39);
x_6 = x_50;
goto block_38;
}
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_41);
x_51 = l_Lean_Parser_Term_list___elambda__1___closed__10;
x_52 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_51, x_39);
x_6 = x_52;
goto block_38;
}
block_38:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; uint8 x_9; obj* x_10; obj* x_11; 
x_8 = 0;
x_9 = 1;
lean::inc(x_2);
x_10 = l_Lean_Parser_sepByFn___at_Lean_Parser_Term_list___elambda__1___spec__1(x_8, x_9, x_1, x_2, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = l_Lean_Parser_tokenFn(x_2, x_10);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_15);
lean::dec(x_15);
if (lean::obj_tag(x_16) == 2)
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
x_18 = l_Lean_Parser_Term_list___elambda__1___closed__4;
x_19 = lean::string_dec_eq(x_17, x_18);
lean::dec(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_21 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_20, x_12);
x_22 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_5);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_12);
x_24 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_13, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_26, x_12);
x_28 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_5);
return x_29;
}
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_14);
x_30 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_30, x_12);
x_32 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_5);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_2);
x_34 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_10, x_34, x_5);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_7);
lean::dec(x_2);
x_36 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_6, x_36, x_5);
return x_37;
}
}
}
}
obj* _init_l_Lean_Parser_Term_list___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_list___closed__2;
x_3 = l_Lean_Parser_sepByInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___closed__3;
x_2 = l_Lean_Parser_Term_list___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___closed__1;
x_2 = l_Lean_Parser_Term_list___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_list___closed__6;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__8() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_list___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_list___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___closed__7;
x_2 = l_Lean_Parser_Term_list___closed__8;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_list() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_list___closed__9;
return x_1;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; uint8 x_9; uint8 x_10; obj* x_11; 
x_8 = lean::unbox(x_1);
lean::dec(x_1);
x_9 = lean::unbox(x_2);
lean::dec(x_2);
x_10 = lean::unbox(x_4);
lean::dec(x_4);
x_11 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2(x_8, x_9, x_3, x_10, x_5, x_6, x_7);
lean::dec(x_5);
return x_11;
}
}
obj* l_Lean_Parser_sepByFn___at_Lean_Parser_Term_list___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; uint8 x_7; obj* x_8; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = lean::unbox(x_2);
lean::dec(x_2);
x_8 = l_Lean_Parser_sepByFn___at_Lean_Parser_Term_list___elambda__1___spec__1(x_6, x_7, x_3, x_4, x_5);
lean::dec(x_3);
return x_8;
}
}
obj* l_Lean_Parser_Term_list___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_list___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_list(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_list___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_list;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_explicit___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("explicit");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicit___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_explicit___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_explicit___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_14; obj* x_15; obj* x_16; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_14 = lean::cnstr_get(x_3, 1);
lean::inc(x_14);
lean::inc(x_2);
x_15 = l_Lean_Parser_tokenFn(x_2, x_3);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; 
x_17 = lean::cnstr_get(x_15, 0);
lean::inc(x_17);
x_18 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_17);
lean::dec(x_17);
if (lean::obj_tag(x_18) == 2)
{
obj* x_19; obj* x_20; uint8 x_21; 
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
x_20 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4;
x_21 = lean::string_dec_eq(x_19, x_20);
lean::dec(x_19);
if (x_21 == 0)
{
obj* x_22; obj* x_23; 
x_22 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
x_23 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_22, x_14);
x_6 = x_23;
goto block_13;
}
else
{
lean::dec(x_14);
x_6 = x_15;
goto block_13;
}
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_18);
x_24 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
x_25 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_24, x_14);
x_6 = x_25;
goto block_13;
}
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_26, x_14);
x_6 = x_27;
goto block_13;
}
block_13:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = l_Lean_Parser_Term_id___elambda__1(x_1, x_2, x_6);
x_9 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_5);
return x_10;
}
else
{
obj* x_11; obj* x_12; 
lean::dec(x_7);
lean::dec(x_2);
x_11 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
x_12 = l_Lean_Parser_ParserState_mkNode(x_6, x_11, x_5);
return x_12;
}
}
}
}
obj* _init_l_Lean_Parser_Term_explicit___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicit___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_id;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_explicit___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_explicit___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_explicit___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicit___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_explicit___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicit___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicit___closed__3;
x_2 = l_Lean_Parser_Term_explicit___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicit() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_explicit___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_explicit___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_explicit___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_explicit(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_explicit___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_explicit;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("inaccessible");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(".(");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_inaccessible___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_38; obj* x_39; obj* x_40; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_38 = lean::cnstr_get(x_2, 1);
lean::inc(x_38);
lean::inc(x_1);
x_39 = l_Lean_Parser_tokenFn(x_1, x_2);
x_40 = lean::cnstr_get(x_39, 3);
lean::inc(x_40);
if (lean::obj_tag(x_40) == 0)
{
obj* x_41; obj* x_42; 
x_41 = lean::cnstr_get(x_39, 0);
lean::inc(x_41);
x_42 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_41);
lean::dec(x_41);
if (lean::obj_tag(x_42) == 2)
{
obj* x_43; obj* x_44; uint8 x_45; 
x_43 = lean::cnstr_get(x_42, 1);
lean::inc(x_43);
lean::dec(x_42);
x_44 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4;
x_45 = lean::string_dec_eq(x_43, x_44);
lean::dec(x_43);
if (x_45 == 0)
{
obj* x_46; obj* x_47; 
x_46 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7;
x_47 = l_Lean_Parser_ParserState_mkErrorsAt(x_39, x_46, x_38);
x_5 = x_47;
goto block_37;
}
else
{
lean::dec(x_38);
x_5 = x_39;
goto block_37;
}
}
else
{
obj* x_48; obj* x_49; 
lean::dec(x_42);
x_48 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7;
x_49 = l_Lean_Parser_ParserState_mkErrorsAt(x_39, x_48, x_38);
x_5 = x_49;
goto block_37;
}
}
else
{
obj* x_50; obj* x_51; 
lean::dec(x_40);
x_50 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7;
x_51 = l_Lean_Parser_ParserState_mkErrorsAt(x_39, x_50, x_38);
x_5 = x_51;
goto block_37;
}
block_37:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; 
x_11 = lean::cnstr_get(x_9, 1);
lean::inc(x_11);
x_12 = l_Lean_Parser_tokenFn(x_1, x_9);
x_13 = lean::cnstr_get(x_12, 3);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; 
x_14 = lean::cnstr_get(x_12, 0);
lean::inc(x_14);
x_15 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_14);
lean::dec(x_14);
if (lean::obj_tag(x_15) == 2)
{
obj* x_16; obj* x_17; uint8 x_18; 
x_16 = lean::cnstr_get(x_15, 1);
lean::inc(x_16);
lean::dec(x_15);
x_17 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__6;
x_18 = lean::string_dec_eq(x_16, x_17);
lean::dec(x_16);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
x_19 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_12, x_19, x_11);
x_21 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_4);
return x_22;
}
else
{
obj* x_23; obj* x_24; 
lean::dec(x_11);
x_23 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_24 = l_Lean_Parser_ParserState_mkNode(x_12, x_23, x_4);
return x_24;
}
}
else
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_15);
x_25 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_12, x_25, x_11);
x_27 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_28 = l_Lean_Parser_ParserState_mkNode(x_26, x_27, x_4);
return x_28;
}
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; 
lean::dec(x_13);
x_29 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_12, x_29, x_11);
x_31 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_32 = l_Lean_Parser_ParserState_mkNode(x_30, x_31, x_4);
return x_32;
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_10);
lean::dec(x_1);
x_33 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_9, x_33, x_4);
return x_34;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_6);
lean::dec(x_1);
x_35 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_36 = l_Lean_Parser_ParserState_mkNode(x_5, x_35, x_4);
return x_36;
}
}
}
}
obj* l_Lean_Parser_Term_inaccessible___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_inaccessible___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_inaccessible___closed__1;
x_2 = l_Lean_Parser_Level_paren___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_inaccessible___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_inaccessible___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_inaccessible___closed__3;
x_2 = l_Lean_Parser_Term_inaccessible___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_inaccessible() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_inaccessible___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_inaccessible___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_inaccessible___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_inaccessible(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_inaccessible;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_Term_binderIdent___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::inc(x_1);
x_6 = l_Lean_Parser_identFn___rarg(x_1, x_2);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
return x_6;
}
else
{
obj* x_8; obj* x_9; uint8 x_10; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
lean::dec(x_7);
x_9 = lean::cnstr_get(x_6, 1);
lean::inc(x_9);
x_10 = lean::nat_dec_eq(x_9, x_5);
lean::dec(x_9);
if (x_10 == 0)
{
lean::dec(x_8);
lean::dec(x_5);
lean::dec(x_4);
lean::dec(x_1);
return x_6;
}
else
{
obj* x_11; obj* x_12; obj* x_13; 
lean::inc(x_5);
x_11 = l_Lean_Parser_ParserState_restore(x_6, x_4, x_5);
lean::dec(x_4);
x_12 = l_Lean_Parser_Term_hole___elambda__1___rarg(x_1, x_11);
x_13 = l_Lean_Parser_mergeOrElseErrors(x_12, x_8, x_5);
lean::dec(x_5);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_binderIdent___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderIdent___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_binderIdent___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_hole;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_ident___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_binderIdent___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderIdent___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderIdent___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderIdent___closed__1;
x_2 = l_Lean_Parser_Term_binderIdent___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderIdent() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_binderIdent___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_Term_binderIdent___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_binderIdent___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_binderType___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_29; obj* x_30; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = lean::cnstr_get(x_2, 1);
lean::inc(x_5);
lean::inc(x_1);
x_29 = l_Lean_Parser_tokenFn(x_1, x_2);
x_30 = lean::cnstr_get(x_29, 3);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; obj* x_32; 
x_31 = lean::cnstr_get(x_29, 0);
lean::inc(x_31);
x_32 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_31);
lean::dec(x_31);
if (lean::obj_tag(x_32) == 2)
{
obj* x_33; obj* x_34; uint8 x_35; 
x_33 = lean::cnstr_get(x_32, 1);
lean::inc(x_33);
lean::dec(x_32);
x_34 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_35 = lean::string_dec_eq(x_33, x_34);
lean::dec(x_33);
if (x_35 == 0)
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
lean::inc(x_5);
x_37 = l_Lean_Parser_ParserState_mkErrorsAt(x_29, x_36, x_5);
x_6 = x_37;
goto block_28;
}
else
{
x_6 = x_29;
goto block_28;
}
}
else
{
obj* x_38; obj* x_39; 
lean::dec(x_32);
x_38 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
lean::inc(x_5);
x_39 = l_Lean_Parser_ParserState_mkErrorsAt(x_29, x_38, x_5);
x_6 = x_39;
goto block_28;
}
}
else
{
obj* x_40; obj* x_41; 
lean::dec(x_30);
x_40 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
lean::inc(x_5);
x_41 = l_Lean_Parser_ParserState_mkErrorsAt(x_29, x_40, x_5);
x_6 = x_41;
goto block_28;
}
block_28:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = l_Lean_Parser_termParserAttribute;
x_9 = lean::mk_nat_obj(0u);
x_10 = l_Lean_Parser_ParserAttribute_runParser(x_8, x_9, x_1, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
lean::dec(x_5);
x_12 = l_Lean_nullKind;
x_13 = l_Lean_Parser_ParserState_mkNode(x_10, x_12, x_4);
return x_13;
}
else
{
obj* x_14; uint8 x_15; 
lean::dec(x_11);
x_14 = lean::cnstr_get(x_10, 1);
lean::inc(x_14);
x_15 = lean::nat_dec_eq(x_14, x_5);
lean::dec(x_14);
if (x_15 == 0)
{
obj* x_16; obj* x_17; 
lean::dec(x_5);
x_16 = l_Lean_nullKind;
x_17 = l_Lean_Parser_ParserState_mkNode(x_10, x_16, x_4);
return x_17;
}
else
{
obj* x_18; obj* x_19; obj* x_20; 
x_18 = l_Lean_Parser_ParserState_restore(x_10, x_4, x_5);
x_19 = l_Lean_nullKind;
x_20 = l_Lean_Parser_ParserState_mkNode(x_18, x_19, x_4);
return x_20;
}
}
}
else
{
obj* x_21; uint8 x_22; 
lean::dec(x_7);
lean::dec(x_1);
x_21 = lean::cnstr_get(x_6, 1);
lean::inc(x_21);
x_22 = lean::nat_dec_eq(x_21, x_5);
lean::dec(x_21);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
lean::dec(x_5);
x_23 = l_Lean_nullKind;
x_24 = l_Lean_Parser_ParserState_mkNode(x_6, x_23, x_4);
return x_24;
}
else
{
obj* x_25; obj* x_26; obj* x_27; 
x_25 = l_Lean_Parser_ParserState_restore(x_6, x_4, x_5);
x_26 = l_Lean_nullKind;
x_27 = l_Lean_Parser_ParserState_mkNode(x_25, x_26, x_4);
return x_27;
}
}
}
}
}
obj* l_Lean_Parser_Term_binderType___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderType___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* l_Lean_Parser_Term_binderType___elambda__2___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_9; obj* x_10; obj* x_11; 
x_9 = lean::cnstr_get(x_2, 1);
lean::inc(x_9);
lean::inc(x_1);
x_10 = l_Lean_Parser_tokenFn(x_1, x_2);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; 
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
x_13 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_12);
lean::dec(x_12);
if (lean::obj_tag(x_13) == 2)
{
obj* x_14; obj* x_15; uint8 x_16; 
x_14 = lean::cnstr_get(x_13, 1);
lean::inc(x_14);
lean::dec(x_13);
x_15 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4;
x_16 = lean::string_dec_eq(x_14, x_15);
lean::dec(x_14);
if (x_16 == 0)
{
obj* x_17; obj* x_18; 
x_17 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_18 = l_Lean_Parser_ParserState_mkErrorsAt(x_10, x_17, x_9);
x_3 = x_18;
goto block_8;
}
else
{
lean::dec(x_9);
x_3 = x_10;
goto block_8;
}
}
else
{
obj* x_19; obj* x_20; 
lean::dec(x_13);
x_19 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_20 = l_Lean_Parser_ParserState_mkErrorsAt(x_10, x_19, x_9);
x_3 = x_20;
goto block_8;
}
}
else
{
obj* x_21; obj* x_22; 
lean::dec(x_11);
x_21 = l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7;
x_22 = l_Lean_Parser_ParserState_mkErrorsAt(x_10, x_21, x_9);
x_3 = x_22;
goto block_8;
}
block_8:
{
obj* x_4; 
x_4 = lean::cnstr_get(x_3, 3);
lean::inc(x_4);
if (lean::obj_tag(x_4) == 0)
{
obj* x_5; obj* x_6; obj* x_7; 
x_5 = l_Lean_Parser_termParserAttribute;
x_6 = lean::mk_nat_obj(0u);
x_7 = l_Lean_Parser_ParserAttribute_runParser(x_5, x_6, x_1, x_3);
return x_7;
}
else
{
lean::dec(x_4);
lean::dec(x_1);
return x_3;
}
}
}
}
obj* l_Lean_Parser_Term_binderType___elambda__2(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderType___elambda__2___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_binderType___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_typeAscription___closed__2;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_binderType___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderType___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderType___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderType___closed__1;
x_2 = l_Lean_Parser_Term_binderType___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderType___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderType___elambda__2___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderType___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_typeAscription___closed__2;
x_2 = l_Lean_Parser_Term_binderType___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_binderType(uint8 x_1) {
_start:
{
if (x_1 == 0)
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_binderType___closed__3;
return x_2;
}
else
{
obj* x_3; 
x_3 = l_Lean_Parser_Term_binderType___closed__5;
return x_3;
}
}
}
obj* l_Lean_Parser_Term_binderType___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_binderType___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_binderType___elambda__2___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_binderType___elambda__2(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_binderType___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Parser_Term_binderType(x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("binderDefault");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_binderDefault___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_binderDefault___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderDefault___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_binderDefault___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_haveAssign___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderDefault___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderDefault___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderDefault___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderDefault___closed__1;
x_2 = l_Lean_Parser_Term_binderDefault___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderDefault() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_binderDefault___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_Term_binderDefault___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_binderDefault___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("binderTactic");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_binderTactic___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_structInst___elambda__1___closed__6;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_structInst___elambda__1___closed__9;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_structInst___elambda__1___closed__9;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_structInst___elambda__1___closed__9;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_binderTactic___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderTactic___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_structInst___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_binderTactic___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_binderTactic___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderTactic___closed__2;
x_2 = l_Lean_Parser_Term_binderTactic___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_binderTactic() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_binderTactic___closed__4;
return x_1;
}
}
obj* l_Lean_Parser_Term_binderTactic___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_binderTactic___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("explicitBinder");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_explicitBinder___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::array_get_size(x_5);
lean::dec(x_5);
x_7 = lean::apply_3(x_1, x_2, x_3, x_4);
x_8 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_9 = l_Lean_Parser_ParserState_mkNode(x_7, x_8, x_6);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__5;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__5;
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolFn___rarg___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__3() {
_start:
{
uint8 x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = 0;
x_2 = l_Lean_Parser_Term_binderIdent___closed__2;
x_3 = lean::box(x_1);
x_4 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_many1Fn___boxed), 5, 2);
lean::closure_set(x_4, 0, x_3);
lean::closure_set(x_4, 1, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_binderDefault;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_binderTactic;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_binderDefault___closed__2;
x_2 = l_Lean_Parser_Term_binderTactic___closed__3;
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_orelseFn___rarg), 5, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_explicitBinder___closed__4;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__7() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_explicitBinder___closed__5;
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_optionalFn___rarg), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__8() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__6;
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolFn___rarg___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitBinder___closed__6;
x_2 = l_Lean_Parser_Level_paren___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_explicitBinder___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitBinder___closed__7;
x_2 = l_Lean_Parser_Term_explicitBinder___closed__8;
x_3 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_3, 0, x_1);
lean::closure_set(x_3, 1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_explicitBinder(uint8 x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_2 = l_Lean_Parser_Term_binderIdent;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = l_Lean_Parser_Term_binderType(x_1);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = l_Lean_Parser_Term_explicitBinder___closed__9;
x_7 = l_Lean_Parser_andthenInfo(x_5, x_6);
x_8 = lean::cnstr_get(x_4, 1);
lean::inc(x_8);
lean::dec(x_4);
x_9 = l_Lean_Parser_Term_explicitBinder___closed__10;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = l_Lean_Parser_andthenInfo(x_3, x_7);
x_12 = l_Lean_Parser_Term_explicitBinder___closed__3;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_13, 0, x_12);
lean::closure_set(x_13, 1, x_10);
x_14 = l_Lean_Parser_Term_explicitBinder___closed__1;
x_15 = l_Lean_Parser_andthenInfo(x_14, x_11);
x_16 = l_Lean_Parser_Term_explicitBinder___closed__2;
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_17, 0, x_16);
lean::closure_set(x_17, 1, x_13);
x_18 = l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2;
x_19 = l_Lean_Parser_nodeInfo(x_18, x_15);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_explicitBinder___elambda__1), 4, 1);
lean::closure_set(x_20, 0, x_17);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
obj* l_Lean_Parser_Term_explicitBinder___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Parser_Term_explicitBinder(x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("implicitBinder");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_implicitBinder___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::array_get_size(x_5);
lean::dec(x_5);
x_7 = lean::apply_3(x_1, x_2, x_3, x_4);
x_8 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
x_9 = l_Lean_Parser_ParserState_mkNode(x_7, x_8, x_6);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_implicitBinder___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolFn___rarg___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_implicitBinder___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_symbolFn___rarg___boxed), 4, 1);
lean::closure_set(x_2, 0, x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_implicitBinder(uint8 x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_2 = l_Lean_Parser_Term_binderIdent;
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = l_Lean_Parser_Term_binderType(x_1);
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = l_Lean_Parser_Term_explicitUniv___closed__4;
x_7 = l_Lean_Parser_andthenInfo(x_5, x_6);
x_8 = lean::cnstr_get(x_4, 1);
lean::inc(x_8);
lean::dec(x_4);
x_9 = l_Lean_Parser_Term_implicitBinder___closed__2;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = l_Lean_Parser_andthenInfo(x_3, x_7);
x_12 = l_Lean_Parser_Term_explicitBinder___closed__3;
x_13 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_13, 0, x_12);
lean::closure_set(x_13, 1, x_10);
x_14 = l_Lean_Parser_Term_subtype___closed__1;
x_15 = l_Lean_Parser_andthenInfo(x_14, x_11);
x_16 = l_Lean_Parser_Term_implicitBinder___closed__1;
x_17 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_andthenFn___rarg), 5, 2);
lean::closure_set(x_17, 0, x_16);
lean::closure_set(x_17, 1, x_13);
x_18 = l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2;
x_19 = l_Lean_Parser_nodeInfo(x_18, x_15);
x_20 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_implicitBinder___elambda__1), 4, 1);
lean::closure_set(x_20, 0, x_17);
x_21 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_21, 0, x_19);
lean::cnstr_set(x_21, 1, x_20);
return x_21;
}
}
obj* l_Lean_Parser_Term_implicitBinder___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Parser_Term_implicitBinder(x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("instBinder");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_instBinder___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_42; obj* x_43; obj* x_44; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_42 = lean::cnstr_get(x_2, 1);
lean::inc(x_42);
lean::inc(x_1);
x_43 = l_Lean_Parser_tokenFn(x_1, x_2);
x_44 = lean::cnstr_get(x_43, 3);
lean::inc(x_44);
if (lean::obj_tag(x_44) == 0)
{
obj* x_45; obj* x_46; 
x_45 = lean::cnstr_get(x_43, 0);
lean::inc(x_45);
x_46 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_45);
lean::dec(x_45);
if (lean::obj_tag(x_46) == 2)
{
obj* x_47; obj* x_48; uint8 x_49; 
x_47 = lean::cnstr_get(x_46, 1);
lean::inc(x_47);
lean::dec(x_46);
x_48 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_49 = lean::string_dec_eq(x_47, x_48);
lean::dec(x_47);
if (x_49 == 0)
{
obj* x_50; obj* x_51; 
x_50 = l_Lean_Parser_Term_list___elambda__1___closed__10;
x_51 = l_Lean_Parser_ParserState_mkErrorsAt(x_43, x_50, x_42);
x_5 = x_51;
goto block_41;
}
else
{
lean::dec(x_42);
x_5 = x_43;
goto block_41;
}
}
else
{
obj* x_52; obj* x_53; 
lean::dec(x_46);
x_52 = l_Lean_Parser_Term_list___elambda__1___closed__10;
x_53 = l_Lean_Parser_ParserState_mkErrorsAt(x_43, x_52, x_42);
x_5 = x_53;
goto block_41;
}
}
else
{
obj* x_54; obj* x_55; 
lean::dec(x_44);
x_54 = l_Lean_Parser_Term_list___elambda__1___closed__10;
x_55 = l_Lean_Parser_ParserState_mkErrorsAt(x_43, x_54, x_42);
x_5 = x_55;
goto block_41;
}
block_41:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; 
lean::inc(x_1);
x_7 = l_Lean_Parser_Term_optIdent___elambda__1___rarg(x_1, x_5);
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_9 = l_Lean_Parser_termParserAttribute;
x_10 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_11 = l_Lean_Parser_ParserAttribute_runParser(x_9, x_10, x_1, x_7);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; 
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
x_14 = l_Lean_Parser_tokenFn(x_1, x_11);
x_15 = lean::cnstr_get(x_14, 3);
lean::inc(x_15);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_14, 0);
lean::inc(x_16);
x_17 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_16);
lean::dec(x_16);
if (lean::obj_tag(x_17) == 2)
{
obj* x_18; obj* x_19; uint8 x_20; 
x_18 = lean::cnstr_get(x_17, 1);
lean::inc(x_18);
lean::dec(x_17);
x_19 = l_Lean_Parser_Term_list___elambda__1___closed__4;
x_20 = lean::string_dec_eq(x_18, x_19);
lean::dec(x_18);
if (x_20 == 0)
{
obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
x_21 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_22 = l_Lean_Parser_ParserState_mkErrorsAt(x_14, x_21, x_13);
x_23 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_24 = l_Lean_Parser_ParserState_mkNode(x_22, x_23, x_4);
return x_24;
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_13);
x_25 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_14, x_25, x_4);
return x_26;
}
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_14, x_27, x_13);
x_29 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_30 = l_Lean_Parser_ParserState_mkNode(x_28, x_29, x_4);
return x_30;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_15);
x_31 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_32 = l_Lean_Parser_ParserState_mkErrorsAt(x_14, x_31, x_13);
x_33 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_32, x_33, x_4);
return x_34;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_12);
lean::dec(x_1);
x_35 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_36 = l_Lean_Parser_ParserState_mkNode(x_11, x_35, x_4);
return x_36;
}
}
else
{
obj* x_37; obj* x_38; 
lean::dec(x_8);
lean::dec(x_1);
x_37 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_38 = l_Lean_Parser_ParserState_mkNode(x_7, x_37, x_4);
return x_38;
}
}
else
{
obj* x_39; obj* x_40; 
lean::dec(x_6);
lean::dec(x_1);
x_39 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_40 = l_Lean_Parser_ParserState_mkNode(x_5, x_39, x_4);
return x_40;
}
}
}
}
obj* l_Lean_Parser_Term_instBinder___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_instBinder___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_list___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optIdent;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_instBinder___closed__2;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_instBinder___closed__1;
x_2 = l_Lean_Parser_Term_instBinder___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_instBinder___closed__4;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_instBinder___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_instBinder___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_instBinder___closed__5;
x_2 = l_Lean_Parser_Term_instBinder___closed__6;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_instBinder() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_instBinder___closed__7;
return x_1;
}
}
obj* l_Lean_Parser_Term_instBinder___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_instBinder___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_bracktedBinder___elambda__1(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
lean::inc(x_4);
lean::inc(x_3);
x_9 = lean::apply_3(x_2, x_3, x_4, x_5);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_9;
}
else
{
obj* x_11; obj* x_12; uint8 x_13; 
x_11 = lean::cnstr_get(x_10, 0);
lean::inc(x_11);
lean::dec(x_10);
x_12 = lean::cnstr_get(x_9, 1);
lean::inc(x_12);
x_13 = lean::nat_dec_eq(x_12, x_8);
lean::dec(x_12);
if (x_13 == 0)
{
lean::dec(x_11);
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
lean::dec(x_1);
return x_9;
}
else
{
obj* x_14; obj* x_15; obj* x_16; 
lean::inc(x_8);
x_14 = l_Lean_Parser_ParserState_restore(x_9, x_7, x_8);
lean::dec(x_7);
x_15 = lean::apply_3(x_1, x_3, x_4, x_14);
x_16 = l_Lean_Parser_mergeOrElseErrors(x_15, x_11, x_8);
lean::dec(x_8);
return x_16;
}
}
}
}
obj* l_Lean_Parser_Term_bracktedBinder(uint8 x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_2 = l_Lean_Parser_Term_explicitBinder(x_1);
x_3 = l_Lean_Parser_Term_implicitBinder(x_1);
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_Term_instBinder;
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = l_Lean_Parser_orelseInfo(x_4, x_6);
x_8 = lean::cnstr_get(x_3, 1);
lean::inc(x_8);
lean::dec(x_3);
x_9 = l_Lean_Parser_Term_instBinder___closed__6;
x_10 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_orelseFn___rarg), 5, 2);
lean::closure_set(x_10, 0, x_8);
lean::closure_set(x_10, 1, x_9);
x_11 = lean::cnstr_get(x_2, 0);
lean::inc(x_11);
x_12 = l_Lean_Parser_orelseInfo(x_11, x_7);
x_13 = lean::cnstr_get(x_2, 1);
lean::inc(x_13);
lean::dec(x_2);
x_14 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bracktedBinder___elambda__1), 5, 2);
lean::closure_set(x_14, 0, x_10);
lean::closure_set(x_14, 1, x_13);
x_15 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_15, 0, x_12);
lean::cnstr_set(x_15, 1, x_14);
return x_15;
}
}
obj* l_Lean_Parser_Term_bracktedBinder___boxed(obj* x_1) {
_start:
{
uint8 x_2; obj* x_3; 
x_2 = lean::unbox(x_1);
lean::dec(x_1);
x_3 = l_Lean_Parser_Term_bracktedBinder(x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("depArrow");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__3() {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = 1;
x_2 = l_Lean_Parser_Term_bracktedBinder(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" → ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__4;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" -> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__6;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__5;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__8;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__7;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__10;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__11;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__13() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__9;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__12;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__14() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_unicodeSymbolCheckPrecFn___closed__1;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__5;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__15() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__14;
x_2 = l_Lean_Parser_unicodeSymbolCheckPrecFn___closed__2;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_depArrow___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_4 = l_Lean_Parser_Term_depArrow___elambda__1___closed__3;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
lean::inc(x_2);
lean::inc(x_1);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_10 = l_Lean_Parser_Term_depArrow___elambda__1___closed__5;
x_11 = l_Lean_Parser_Term_depArrow___elambda__1___closed__7;
x_12 = lean::mk_nat_obj(25u);
x_13 = l_Lean_Parser_Term_depArrow___elambda__1___closed__13;
x_14 = l_Lean_Parser_Term_depArrow___elambda__1___closed__15;
lean::inc(x_2);
x_15 = l_Lean_Parser_unicodeSymbolCheckPrecFnAux(x_10, x_11, x_12, x_13, x_14, x_1, x_2, x_8);
lean::dec(x_1);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_17 = l_Lean_Parser_termParserAttribute;
x_18 = lean::mk_nat_obj(0u);
x_19 = l_Lean_Parser_ParserAttribute_runParser(x_17, x_18, x_2, x_15);
x_20 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_7);
return x_21;
}
else
{
obj* x_22; obj* x_23; 
lean::dec(x_16);
lean::dec(x_2);
x_22 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_15, x_22, x_7);
return x_23;
}
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_9);
lean::dec(x_2);
lean::dec(x_1);
x_24 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_8, x_24, x_7);
return x_25;
}
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_nat_obj(25u);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__5;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__7;
x_3 = l_Lean_Parser_Term_depArrow___closed__1;
x_4 = l_Lean_Parser_unicodeSymbolInfo(x_1, x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__3;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_depArrow___closed__3;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_depArrow___closed__4;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_depArrow___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_depArrow___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_depArrow___closed__5;
x_2 = l_Lean_Parser_Term_depArrow___closed__6;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_depArrow() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_depArrow___closed__7;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_depArrow(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_depArrow___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_depArrow;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_simpleBinder___elambda__1___spec__1(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_5 = lean::cnstr_get(x_4, 0);
lean::inc(x_5);
x_6 = lean::array_get_size(x_5);
lean::dec(x_5);
x_7 = lean::cnstr_get(x_4, 1);
lean::inc(x_7);
lean::inc(x_3);
x_8 = l_Lean_Parser_Term_binderIdent___elambda__1___rarg(x_3, x_4);
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; uint8 x_11; 
lean::dec(x_6);
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
x_11 = lean::nat_dec_eq(x_7, x_10);
lean::dec(x_10);
lean::dec(x_7);
if (x_11 == 0)
{
x_4 = x_8;
goto _start;
}
else
{
obj* x_13; obj* x_14; 
lean::dec(x_3);
x_13 = l_Lean_Parser_manyAux___main___closed__1;
x_14 = l_Lean_Parser_ParserState_mkUnexpectedError(x_8, x_13);
return x_14;
}
}
else
{
obj* x_15; uint8 x_16; 
lean::dec(x_9);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_8, 1);
lean::inc(x_15);
x_16 = lean::nat_dec_eq(x_7, x_15);
lean::dec(x_15);
if (x_16 == 0)
{
lean::dec(x_7);
lean::dec(x_6);
return x_8;
}
else
{
obj* x_17; 
x_17 = l_Lean_Parser_ParserState_restore(x_8, x_6, x_7);
lean::dec(x_6);
return x_17;
}
}
}
}
obj* _init_l_Lean_Parser_Term_simpleBinder___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("simpleBinder");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_simpleBinder___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_simpleBinder___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_2);
x_6 = l_Lean_Parser_Term_binderIdent___elambda__1___rarg(x_2, x_3);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_8 = 0;
x_9 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_simpleBinder___elambda__1___spec__1(x_8, x_1, x_2, x_6);
x_10 = l_Lean_nullKind;
lean::inc(x_5);
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_5);
x_12 = l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_11, x_12, x_5);
return x_13;
}
else
{
obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
lean::dec(x_7);
lean::dec(x_2);
x_14 = l_Lean_nullKind;
lean::inc(x_5);
x_15 = l_Lean_Parser_ParserState_mkNode(x_6, x_14, x_5);
x_16 = l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
x_17 = l_Lean_Parser_ParserState_mkNode(x_15, x_16, x_5);
return x_17;
}
}
}
obj* _init_l_Lean_Parser_Term_simpleBinder___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_binderIdent;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_simpleBinder___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_simpleBinder___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_simpleBinder___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_simpleBinder___closed__1;
x_2 = l_Lean_Parser_Term_simpleBinder___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_simpleBinder() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_simpleBinder___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_simpleBinder___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_simpleBinder___elambda__1___spec__1(x_5, x_2, x_3, x_4);
lean::dec(x_2);
return x_6;
}
}
obj* l_Lean_Parser_Term_simpleBinder___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_simpleBinder___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1() {
_start:
{
uint8 x_1; obj* x_2; 
x_1 = 0;
x_2 = l_Lean_Parser_Term_bracktedBinder(x_1);
return x_2;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1(uint8 x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_21; obj* x_22; 
x_5 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1;
x_6 = lean::cnstr_get(x_5, 1);
lean::inc(x_6);
x_7 = lean::cnstr_get(x_4, 0);
lean::inc(x_7);
x_8 = lean::array_get_size(x_7);
lean::dec(x_7);
x_9 = lean::cnstr_get(x_4, 1);
lean::inc(x_9);
lean::inc(x_3);
x_21 = l_Lean_Parser_Term_simpleBinder___elambda__1(x_2, x_3, x_4);
x_22 = lean::cnstr_get(x_21, 3);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
lean::dec(x_6);
x_10 = x_21;
goto block_20;
}
else
{
obj* x_23; obj* x_24; uint8 x_25; 
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
lean::dec(x_22);
x_24 = lean::cnstr_get(x_21, 1);
lean::inc(x_24);
x_25 = lean::nat_dec_eq(x_24, x_9);
lean::dec(x_24);
if (x_25 == 0)
{
lean::dec(x_23);
lean::dec(x_6);
x_10 = x_21;
goto block_20;
}
else
{
obj* x_26; obj* x_27; obj* x_28; 
lean::inc(x_9);
x_26 = l_Lean_Parser_ParserState_restore(x_21, x_8, x_9);
lean::inc(x_3);
lean::inc(x_2);
x_27 = lean::apply_3(x_6, x_2, x_3, x_26);
x_28 = l_Lean_Parser_mergeOrElseErrors(x_27, x_23, x_9);
x_10 = x_28;
goto block_20;
}
}
block_20:
{
obj* x_11; 
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; uint8 x_13; 
lean::dec(x_8);
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = lean::nat_dec_eq(x_9, x_12);
lean::dec(x_12);
lean::dec(x_9);
if (x_13 == 0)
{
x_4 = x_10;
goto _start;
}
else
{
obj* x_15; obj* x_16; 
lean::dec(x_3);
lean::dec(x_2);
x_15 = l_Lean_Parser_manyAux___main___closed__1;
x_16 = l_Lean_Parser_ParserState_mkUnexpectedError(x_10, x_15);
return x_16;
}
}
else
{
obj* x_17; uint8 x_18; 
lean::dec(x_11);
lean::dec(x_3);
lean::dec(x_2);
x_17 = lean::cnstr_get(x_10, 1);
lean::inc(x_17);
x_18 = lean::nat_dec_eq(x_9, x_17);
lean::dec(x_17);
if (x_18 == 0)
{
lean::dec(x_9);
lean::dec(x_8);
return x_10;
}
else
{
obj* x_19; 
x_19 = l_Lean_Parser_ParserState_restore(x_10, x_8, x_9);
lean::dec(x_8);
return x_19;
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("forall");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("∀");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_forall___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_forall___elambda__1___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___elambda__1___closed__6;
x_2 = l_Lean_Parser_unicodeSymbolFn___rarg___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___elambda__1___closed__7;
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__5;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___elambda__1___closed__8;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__9;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_forall___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_18; obj* x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; 
x_4 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_37 = l_Lean_Parser_Term_forall___elambda__1___closed__4;
x_38 = l_Lean_Parser_Term_forall___elambda__1___closed__5;
x_39 = l_Lean_Parser_Term_forall___elambda__1___closed__10;
lean::inc(x_2);
x_40 = l_Lean_Parser_unicodeSymbolFnAux(x_37, x_38, x_39, x_2, x_3);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
x_42 = lean::cnstr_get(x_40, 0);
lean::inc(x_42);
x_43 = lean::array_get_size(x_42);
lean::dec(x_42);
x_44 = lean::cnstr_get(x_40, 1);
lean::inc(x_44);
lean::inc(x_2);
x_45 = l_Lean_Parser_Term_simpleBinder___elambda__1(x_1, x_2, x_40);
x_46 = lean::cnstr_get(x_45, 3);
lean::inc(x_46);
if (lean::obj_tag(x_46) == 0)
{
uint8 x_47; obj* x_48; obj* x_49; obj* x_50; 
lean::dec(x_44);
lean::dec(x_5);
x_47 = 0;
lean::inc(x_2);
x_48 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1(x_47, x_1, x_2, x_45);
x_49 = l_Lean_nullKind;
x_50 = l_Lean_Parser_ParserState_mkNode(x_48, x_49, x_43);
x_18 = x_50;
goto block_36;
}
else
{
obj* x_51; obj* x_52; uint8 x_53; 
x_51 = lean::cnstr_get(x_46, 0);
lean::inc(x_51);
lean::dec(x_46);
x_52 = lean::cnstr_get(x_45, 1);
lean::inc(x_52);
x_53 = lean::nat_dec_eq(x_52, x_44);
lean::dec(x_52);
if (x_53 == 0)
{
obj* x_54; obj* x_55; 
lean::dec(x_51);
lean::dec(x_44);
lean::dec(x_5);
lean::dec(x_1);
x_54 = l_Lean_nullKind;
x_55 = l_Lean_Parser_ParserState_mkNode(x_45, x_54, x_43);
x_18 = x_55;
goto block_36;
}
else
{
obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::inc(x_44);
x_56 = l_Lean_Parser_ParserState_restore(x_45, x_43, x_44);
lean::inc(x_2);
lean::inc(x_1);
x_57 = lean::apply_3(x_5, x_1, x_2, x_56);
x_58 = l_Lean_Parser_mergeOrElseErrors(x_57, x_51, x_44);
lean::dec(x_44);
x_59 = lean::cnstr_get(x_58, 3);
lean::inc(x_59);
if (lean::obj_tag(x_59) == 0)
{
uint8 x_60; obj* x_61; obj* x_62; obj* x_63; 
x_60 = 0;
lean::inc(x_2);
x_61 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1(x_60, x_1, x_2, x_58);
x_62 = l_Lean_nullKind;
x_63 = l_Lean_Parser_ParserState_mkNode(x_61, x_62, x_43);
x_18 = x_63;
goto block_36;
}
else
{
obj* x_64; obj* x_65; 
lean::dec(x_59);
lean::dec(x_1);
x_64 = l_Lean_nullKind;
x_65 = l_Lean_Parser_ParserState_mkNode(x_58, x_64, x_43);
x_18 = x_65;
goto block_36;
}
}
}
}
else
{
obj* x_66; obj* x_67; 
lean::dec(x_41);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
x_66 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_67 = l_Lean_Parser_ParserState_mkNode(x_40, x_66, x_7);
return x_67;
}
block_17:
{
obj* x_9; 
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = l_Lean_Parser_termParserAttribute;
x_11 = lean::mk_nat_obj(0u);
x_12 = l_Lean_Parser_ParserAttribute_runParser(x_10, x_11, x_2, x_8);
x_13 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_14 = l_Lean_Parser_ParserState_mkNode(x_12, x_13, x_7);
return x_14;
}
else
{
obj* x_15; obj* x_16; 
lean::dec(x_9);
lean::dec(x_2);
x_15 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_8, x_15, x_7);
return x_16;
}
}
block_36:
{
obj* x_19; 
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; obj* x_22; 
x_20 = lean::cnstr_get(x_18, 1);
lean::inc(x_20);
lean::inc(x_2);
x_21 = l_Lean_Parser_tokenFn(x_2, x_18);
x_22 = lean::cnstr_get(x_21, 3);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::cnstr_get(x_21, 0);
lean::inc(x_23);
x_24 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_23);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 2)
{
obj* x_25; obj* x_26; uint8 x_27; 
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
lean::dec(x_24);
x_26 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1;
x_27 = lean::string_dec_eq(x_25, x_26);
lean::dec(x_25);
if (x_27 == 0)
{
obj* x_28; obj* x_29; 
x_28 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_21, x_28, x_20);
x_8 = x_29;
goto block_17;
}
else
{
lean::dec(x_20);
x_8 = x_21;
goto block_17;
}
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_24);
x_30 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_21, x_30, x_20);
x_8 = x_31;
goto block_17;
}
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_22);
x_32 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4;
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_21, x_32, x_20);
x_8 = x_33;
goto block_17;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_19);
lean::dec(x_2);
x_34 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_18, x_34, x_7);
return x_35;
}
}
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_forall___elambda__1___closed__4;
x_3 = l_Lean_Parser_Term_forall___elambda__1___closed__5;
x_4 = l_Lean_Parser_unicodeSymbolInfo(x_2, x_3, x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_simpleBinder;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___closed__2;
x_2 = l_Lean_Parser_Term_forall___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___closed__1;
x_2 = l_Lean_Parser_Term_forall___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_forall___closed__5;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_forall___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_forall___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_forall___closed__6;
x_2 = l_Lean_Parser_Term_forall___closed__7;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_forall() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_forall___closed__8;
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4) {
_start:
{
uint8 x_5; obj* x_6; 
x_5 = lean::unbox(x_1);
lean::dec(x_1);
x_6 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1(x_5, x_2, x_3, x_4);
return x_6;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_forall(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_forall___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_forall;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("matchAlt");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" | ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_fun___elambda__1___closed__18;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__6;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__7;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_matchAlt___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_29; obj* x_30; obj* x_31; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_29 = lean::cnstr_get(x_3, 1);
lean::inc(x_29);
lean::inc(x_2);
x_30 = l_Lean_Parser_tokenFn(x_2, x_3);
x_31 = lean::cnstr_get(x_30, 3);
lean::inc(x_31);
if (lean::obj_tag(x_31) == 0)
{
obj* x_32; obj* x_33; 
x_32 = lean::cnstr_get(x_30, 0);
lean::inc(x_32);
x_33 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_32);
lean::dec(x_32);
if (lean::obj_tag(x_33) == 2)
{
obj* x_34; obj* x_35; uint8 x_36; 
x_34 = lean::cnstr_get(x_33, 1);
lean::inc(x_34);
lean::dec(x_33);
x_35 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__4;
x_36 = lean::string_dec_eq(x_34, x_35);
lean::dec(x_34);
if (x_36 == 0)
{
obj* x_37; obj* x_38; 
x_37 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
x_38 = l_Lean_Parser_ParserState_mkErrorsAt(x_30, x_37, x_29);
x_6 = x_38;
goto block_28;
}
else
{
lean::dec(x_29);
x_6 = x_30;
goto block_28;
}
}
else
{
obj* x_39; obj* x_40; 
lean::dec(x_33);
x_39 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
x_40 = l_Lean_Parser_ParserState_mkErrorsAt(x_30, x_39, x_29);
x_6 = x_40;
goto block_28;
}
}
else
{
obj* x_41; obj* x_42; 
lean::dec(x_31);
x_41 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
x_42 = l_Lean_Parser_ParserState_mkErrorsAt(x_30, x_41, x_29);
x_6 = x_42;
goto block_28;
}
block_28:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
uint8 x_8; uint8 x_9; obj* x_10; obj* x_11; 
x_8 = 0;
x_9 = 0;
lean::inc(x_2);
x_10 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1(x_8, x_9, x_1, x_2, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = l_Lean_Parser_Term_fun___elambda__1___closed__7;
x_13 = l_Lean_Parser_Term_fun___elambda__1___closed__9;
x_14 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__5;
lean::inc(x_2);
x_15 = l_Lean_Parser_unicodeSymbolFnAux(x_12, x_13, x_14, x_2, x_10);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_17 = l_Lean_Parser_termParserAttribute;
x_18 = lean::mk_nat_obj(0u);
x_19 = l_Lean_Parser_ParserAttribute_runParser(x_17, x_18, x_2, x_15);
x_20 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__2;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_5);
return x_21;
}
else
{
obj* x_22; obj* x_23; 
lean::dec(x_16);
lean::dec(x_2);
x_22 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_15, x_22, x_5);
return x_23;
}
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_11);
lean::dec(x_2);
x_24 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_10, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_7);
lean::dec(x_2);
x_26 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__2;
x_27 = l_Lean_Parser_ParserState_mkNode(x_6, x_26, x_5);
return x_27;
}
}
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__3;
x_2 = l_Lean_Parser_Term_fun___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_matchAlt___closed__1;
x_2 = l_Lean_Parser_Term_matchAlt___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_matchAlt___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_matchAlt___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_matchAlt___closed__4;
x_2 = l_Lean_Parser_Term_matchAlt___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_matchAlt() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_matchAlt___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_matchAlt___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_matchAlt___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("'match' alternatives must be indented");
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_25; obj* x_26; obj* x_27; obj* x_28; uint8 x_29; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_25 = lean::cnstr_get(x_4, 0);
lean::inc(x_25);
x_26 = lean::cnstr_get(x_25, 2);
lean::inc(x_26);
lean::dec(x_25);
x_27 = l_Lean_FileMap_toPosition(x_26, x_8);
lean::dec(x_26);
x_28 = lean::cnstr_get(x_27, 1);
lean::inc(x_28);
lean::dec(x_27);
x_29 = lean::nat_dec_le(x_1, x_28);
lean::dec(x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1;
x_31 = l_Lean_Parser_ParserState_mkError(x_5, x_30);
x_9 = x_31;
goto block_24;
}
else
{
x_9 = x_5;
goto block_24;
}
block_24:
{
obj* x_10; 
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::inc(x_4);
x_11 = l_Lean_Parser_Term_matchAlt___elambda__1(x_3, x_4, x_9);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
lean::dec(x_7);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
x_14 = lean::nat_dec_eq(x_8, x_13);
lean::dec(x_13);
lean::dec(x_8);
if (x_14 == 0)
{
x_5 = x_11;
goto _start;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_4);
x_16 = l_Lean_Parser_manyAux___main___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_11, x_16);
return x_17;
}
}
else
{
obj* x_18; uint8 x_19; 
lean::dec(x_12);
lean::dec(x_4);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_8, x_18);
lean::dec(x_18);
if (x_19 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_11;
}
else
{
obj* x_20; 
x_20 = l_Lean_Parser_ParserState_restore(x_11, x_7, x_8);
lean::dec(x_7);
return x_20;
}
}
}
else
{
obj* x_21; uint8 x_22; 
lean::dec(x_10);
lean::dec(x_4);
x_21 = lean::cnstr_get(x_9, 1);
lean::inc(x_21);
x_22 = lean::nat_dec_eq(x_8, x_21);
lean::dec(x_21);
if (x_22 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_9;
}
else
{
obj* x_23; 
x_23 = l_Lean_Parser_ParserState_restore(x_9, x_7, x_8);
lean::dec(x_7);
return x_23;
}
}
}
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__2(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_25; obj* x_26; obj* x_27; obj* x_28; uint8 x_29; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_25 = lean::cnstr_get(x_4, 0);
lean::inc(x_25);
x_26 = lean::cnstr_get(x_25, 2);
lean::inc(x_26);
lean::dec(x_25);
x_27 = l_Lean_FileMap_toPosition(x_26, x_8);
lean::dec(x_26);
x_28 = lean::cnstr_get(x_27, 1);
lean::inc(x_28);
lean::dec(x_27);
x_29 = lean::nat_dec_le(x_1, x_28);
lean::dec(x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1;
x_31 = l_Lean_Parser_ParserState_mkError(x_5, x_30);
x_9 = x_31;
goto block_24;
}
else
{
x_9 = x_5;
goto block_24;
}
block_24:
{
obj* x_10; 
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::inc(x_4);
x_11 = l_Lean_Parser_Term_matchAlt___elambda__1(x_3, x_4, x_9);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
lean::dec(x_7);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
x_14 = lean::nat_dec_eq(x_8, x_13);
lean::dec(x_13);
lean::dec(x_8);
if (x_14 == 0)
{
x_5 = x_11;
goto _start;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_4);
x_16 = l_Lean_Parser_manyAux___main___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_11, x_16);
return x_17;
}
}
else
{
obj* x_18; uint8 x_19; 
lean::dec(x_12);
lean::dec(x_4);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_8, x_18);
lean::dec(x_18);
if (x_19 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_11;
}
else
{
obj* x_20; 
x_20 = l_Lean_Parser_ParserState_restore(x_11, x_7, x_8);
lean::dec(x_7);
return x_20;
}
}
}
else
{
obj* x_21; uint8 x_22; 
lean::dec(x_10);
lean::dec(x_4);
x_21 = lean::cnstr_get(x_9, 1);
lean::inc(x_21);
x_22 = lean::nat_dec_eq(x_8, x_21);
lean::dec(x_21);
if (x_22 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_9;
}
else
{
obj* x_23; 
x_23 = l_Lean_Parser_ParserState_restore(x_9, x_7, x_8);
lean::dec(x_7);
return x_23;
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("match");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("match ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" with ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__5;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__6;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__7;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__8;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__11() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__10;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___elambda__1___closed__12() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__11;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_match___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_50; obj* x_79; obj* x_80; obj* x_81; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_79 = lean::cnstr_get(x_3, 1);
lean::inc(x_79);
lean::inc(x_2);
x_80 = l_Lean_Parser_tokenFn(x_2, x_3);
x_81 = lean::cnstr_get(x_80, 3);
lean::inc(x_81);
if (lean::obj_tag(x_81) == 0)
{
obj* x_82; obj* x_83; 
x_82 = lean::cnstr_get(x_80, 0);
lean::inc(x_82);
x_83 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_82);
lean::dec(x_82);
if (lean::obj_tag(x_83) == 2)
{
obj* x_84; obj* x_85; uint8 x_86; 
x_84 = lean::cnstr_get(x_83, 1);
lean::inc(x_84);
lean::dec(x_83);
x_85 = l_Lean_Parser_Term_match___elambda__1___closed__4;
x_86 = lean::string_dec_eq(x_84, x_85);
lean::dec(x_84);
if (x_86 == 0)
{
obj* x_87; obj* x_88; 
x_87 = l_Lean_Parser_Term_match___elambda__1___closed__12;
x_88 = l_Lean_Parser_ParserState_mkErrorsAt(x_80, x_87, x_79);
x_50 = x_88;
goto block_78;
}
else
{
lean::dec(x_79);
x_50 = x_80;
goto block_78;
}
}
else
{
obj* x_89; obj* x_90; 
lean::dec(x_83);
x_89 = l_Lean_Parser_Term_match___elambda__1___closed__12;
x_90 = l_Lean_Parser_ParserState_mkErrorsAt(x_80, x_89, x_79);
x_50 = x_90;
goto block_78;
}
}
else
{
obj* x_91; obj* x_92; 
lean::dec(x_81);
x_91 = l_Lean_Parser_Term_match___elambda__1___closed__12;
x_92 = l_Lean_Parser_ParserState_mkErrorsAt(x_80, x_91, x_79);
x_50 = x_92;
goto block_78;
}
block_49:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; uint8 x_15; 
x_8 = lean::cnstr_get(x_2, 0);
lean::inc(x_8);
x_9 = lean::cnstr_get(x_8, 2);
lean::inc(x_9);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_6, 1);
lean::inc(x_10);
x_11 = l_Lean_FileMap_toPosition(x_9, x_10);
lean::dec(x_10);
lean::dec(x_9);
x_12 = lean::cnstr_get(x_11, 1);
lean::inc(x_12);
lean::dec(x_11);
x_13 = lean::cnstr_get(x_6, 0);
lean::inc(x_13);
x_14 = lean::array_get_size(x_13);
lean::dec(x_13);
x_15 = lean::nat_dec_le(x_12, x_12);
if (x_15 == 0)
{
obj* x_16; obj* x_17; obj* x_18; 
x_16 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1;
x_17 = l_Lean_Parser_ParserState_mkError(x_6, x_16);
x_18 = lean::cnstr_get(x_17, 3);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; 
lean::inc(x_2);
x_19 = l_Lean_Parser_Term_matchAlt___elambda__1(x_1, x_2, x_17);
x_20 = lean::cnstr_get(x_19, 3);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 0)
{
uint8 x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
x_21 = 0;
x_22 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1(x_12, x_21, x_1, x_2, x_19);
lean::dec(x_12);
x_23 = l_Lean_nullKind;
x_24 = l_Lean_Parser_ParserState_mkNode(x_22, x_23, x_14);
x_25 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_5);
return x_26;
}
else
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::dec(x_20);
lean::dec(x_12);
lean::dec(x_2);
x_27 = l_Lean_nullKind;
x_28 = l_Lean_Parser_ParserState_mkNode(x_19, x_27, x_14);
x_29 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_30 = l_Lean_Parser_ParserState_mkNode(x_28, x_29, x_5);
return x_30;
}
}
else
{
obj* x_31; obj* x_32; obj* x_33; obj* x_34; 
lean::dec(x_18);
lean::dec(x_12);
lean::dec(x_2);
x_31 = l_Lean_nullKind;
x_32 = l_Lean_Parser_ParserState_mkNode(x_17, x_31, x_14);
x_33 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_34 = l_Lean_Parser_ParserState_mkNode(x_32, x_33, x_5);
return x_34;
}
}
else
{
obj* x_35; obj* x_36; 
lean::inc(x_2);
x_35 = l_Lean_Parser_Term_matchAlt___elambda__1(x_1, x_2, x_6);
x_36 = lean::cnstr_get(x_35, 3);
lean::inc(x_36);
if (lean::obj_tag(x_36) == 0)
{
uint8 x_37; obj* x_38; obj* x_39; obj* x_40; obj* x_41; obj* x_42; 
x_37 = 0;
x_38 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__2(x_12, x_37, x_1, x_2, x_35);
lean::dec(x_12);
x_39 = l_Lean_nullKind;
x_40 = l_Lean_Parser_ParserState_mkNode(x_38, x_39, x_14);
x_41 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_42 = l_Lean_Parser_ParserState_mkNode(x_40, x_41, x_5);
return x_42;
}
else
{
obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_36);
lean::dec(x_12);
lean::dec(x_2);
x_43 = l_Lean_nullKind;
x_44 = l_Lean_Parser_ParserState_mkNode(x_35, x_43, x_14);
x_45 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_46 = l_Lean_Parser_ParserState_mkNode(x_44, x_45, x_5);
return x_46;
}
}
}
else
{
obj* x_47; obj* x_48; 
lean::dec(x_7);
lean::dec(x_2);
x_47 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_48 = l_Lean_Parser_ParserState_mkNode(x_6, x_47, x_5);
return x_48;
}
}
block_78:
{
obj* x_51; 
x_51 = lean::cnstr_get(x_50, 3);
lean::inc(x_51);
if (lean::obj_tag(x_51) == 0)
{
uint8 x_52; uint8 x_53; obj* x_54; obj* x_55; 
x_52 = 0;
x_53 = 0;
lean::inc(x_2);
x_54 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_tupleTail___elambda__1___spec__1(x_52, x_53, x_1, x_2, x_50);
x_55 = lean::cnstr_get(x_54, 3);
lean::inc(x_55);
if (lean::obj_tag(x_55) == 0)
{
obj* x_56; obj* x_57; 
lean::inc(x_2);
x_56 = l_Lean_Parser_Term_optType___elambda__1___rarg(x_2, x_54);
x_57 = lean::cnstr_get(x_56, 3);
lean::inc(x_57);
if (lean::obj_tag(x_57) == 0)
{
obj* x_58; obj* x_59; obj* x_60; 
x_58 = lean::cnstr_get(x_56, 1);
lean::inc(x_58);
lean::inc(x_2);
x_59 = l_Lean_Parser_tokenFn(x_2, x_56);
x_60 = lean::cnstr_get(x_59, 3);
lean::inc(x_60);
if (lean::obj_tag(x_60) == 0)
{
obj* x_61; obj* x_62; 
x_61 = lean::cnstr_get(x_59, 0);
lean::inc(x_61);
x_62 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_61);
lean::dec(x_61);
if (lean::obj_tag(x_62) == 2)
{
obj* x_63; obj* x_64; uint8 x_65; 
x_63 = lean::cnstr_get(x_62, 1);
lean::inc(x_63);
lean::dec(x_62);
x_64 = l_Lean_Parser_Term_match___elambda__1___closed__6;
x_65 = lean::string_dec_eq(x_63, x_64);
lean::dec(x_63);
if (x_65 == 0)
{
obj* x_66; obj* x_67; 
x_66 = l_Lean_Parser_Term_match___elambda__1___closed__9;
x_67 = l_Lean_Parser_ParserState_mkErrorsAt(x_59, x_66, x_58);
x_6 = x_67;
goto block_49;
}
else
{
lean::dec(x_58);
x_6 = x_59;
goto block_49;
}
}
else
{
obj* x_68; obj* x_69; 
lean::dec(x_62);
x_68 = l_Lean_Parser_Term_match___elambda__1___closed__9;
x_69 = l_Lean_Parser_ParserState_mkErrorsAt(x_59, x_68, x_58);
x_6 = x_69;
goto block_49;
}
}
else
{
obj* x_70; obj* x_71; 
lean::dec(x_60);
x_70 = l_Lean_Parser_Term_match___elambda__1___closed__9;
x_71 = l_Lean_Parser_ParserState_mkErrorsAt(x_59, x_70, x_58);
x_6 = x_71;
goto block_49;
}
}
else
{
obj* x_72; obj* x_73; 
lean::dec(x_57);
lean::dec(x_2);
x_72 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_73 = l_Lean_Parser_ParserState_mkNode(x_56, x_72, x_5);
return x_73;
}
}
else
{
obj* x_74; obj* x_75; 
lean::dec(x_55);
lean::dec(x_2);
x_74 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_75 = l_Lean_Parser_ParserState_mkNode(x_54, x_74, x_5);
return x_75;
}
}
else
{
obj* x_76; obj* x_77; 
lean::dec(x_51);
lean::dec(x_2);
x_76 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_77 = l_Lean_Parser_ParserState_mkNode(x_50, x_76, x_5);
return x_77;
}
}
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_25; obj* x_26; obj* x_27; obj* x_28; uint8 x_29; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_25 = lean::cnstr_get(x_4, 0);
lean::inc(x_25);
x_26 = lean::cnstr_get(x_25, 2);
lean::inc(x_26);
lean::dec(x_25);
x_27 = l_Lean_FileMap_toPosition(x_26, x_8);
lean::dec(x_26);
x_28 = lean::cnstr_get(x_27, 1);
lean::inc(x_28);
lean::dec(x_27);
x_29 = lean::nat_dec_le(x_1, x_28);
lean::dec(x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1;
x_31 = l_Lean_Parser_ParserState_mkError(x_5, x_30);
x_9 = x_31;
goto block_24;
}
else
{
x_9 = x_5;
goto block_24;
}
block_24:
{
obj* x_10; 
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::inc(x_4);
x_11 = l_Lean_Parser_Term_matchAlt___elambda__1(x_3, x_4, x_9);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
lean::dec(x_7);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
x_14 = lean::nat_dec_eq(x_8, x_13);
lean::dec(x_13);
lean::dec(x_8);
if (x_14 == 0)
{
x_5 = x_11;
goto _start;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_4);
x_16 = l_Lean_Parser_manyAux___main___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_11, x_16);
return x_17;
}
}
else
{
obj* x_18; uint8 x_19; 
lean::dec(x_12);
lean::dec(x_4);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_8, x_18);
lean::dec(x_18);
if (x_19 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_11;
}
else
{
obj* x_20; 
x_20 = l_Lean_Parser_ParserState_restore(x_11, x_7, x_8);
lean::dec(x_7);
return x_20;
}
}
}
else
{
obj* x_21; uint8 x_22; 
lean::dec(x_10);
lean::dec(x_4);
x_21 = lean::cnstr_get(x_9, 1);
lean::inc(x_21);
x_22 = lean::nat_dec_eq(x_8, x_21);
lean::dec(x_21);
if (x_22 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_9;
}
else
{
obj* x_23; 
x_23 = l_Lean_Parser_ParserState_restore(x_9, x_7, x_8);
lean::dec(x_7);
return x_23;
}
}
}
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__2(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_25; obj* x_26; obj* x_27; obj* x_28; uint8 x_29; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::cnstr_get(x_5, 1);
lean::inc(x_8);
x_25 = lean::cnstr_get(x_4, 0);
lean::inc(x_25);
x_26 = lean::cnstr_get(x_25, 2);
lean::inc(x_26);
lean::dec(x_25);
x_27 = l_Lean_FileMap_toPosition(x_26, x_8);
lean::dec(x_26);
x_28 = lean::cnstr_get(x_27, 1);
lean::inc(x_28);
lean::dec(x_27);
x_29 = lean::nat_dec_le(x_1, x_28);
lean::dec(x_28);
if (x_29 == 0)
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1;
x_31 = l_Lean_Parser_ParserState_mkError(x_5, x_30);
x_9 = x_31;
goto block_24;
}
else
{
x_9 = x_5;
goto block_24;
}
block_24:
{
obj* x_10; 
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; 
lean::inc(x_4);
x_11 = l_Lean_Parser_Term_matchAlt___elambda__1(x_3, x_4, x_9);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; uint8 x_14; 
lean::dec(x_7);
x_13 = lean::cnstr_get(x_11, 1);
lean::inc(x_13);
x_14 = lean::nat_dec_eq(x_8, x_13);
lean::dec(x_13);
lean::dec(x_8);
if (x_14 == 0)
{
x_5 = x_11;
goto _start;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_4);
x_16 = l_Lean_Parser_manyAux___main___closed__1;
x_17 = l_Lean_Parser_ParserState_mkUnexpectedError(x_11, x_16);
return x_17;
}
}
else
{
obj* x_18; uint8 x_19; 
lean::dec(x_12);
lean::dec(x_4);
x_18 = lean::cnstr_get(x_11, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_8, x_18);
lean::dec(x_18);
if (x_19 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_11;
}
else
{
obj* x_20; 
x_20 = l_Lean_Parser_ParserState_restore(x_11, x_7, x_8);
lean::dec(x_7);
return x_20;
}
}
}
else
{
obj* x_21; uint8 x_22; 
lean::dec(x_10);
lean::dec(x_4);
x_21 = lean::cnstr_get(x_9, 1);
lean::inc(x_21);
x_22 = lean::nat_dec_eq(x_8, x_21);
lean::dec(x_21);
if (x_22 == 0)
{
lean::dec(x_8);
lean::dec(x_7);
return x_9;
}
else
{
obj* x_23; 
x_23 = l_Lean_Parser_ParserState_restore(x_9, x_7, x_8);
lean::dec(x_7);
return x_23;
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_match___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_match___elambda__1___closed__6;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_matchAlt;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_match___closed__2;
x_2 = l_Lean_Parser_Term_match___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_match___closed__4;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___closed__3;
x_2 = l_Lean_Parser_Term_match___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_match___closed__1;
x_2 = l_Lean_Parser_Term_match___closed__6;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_match___closed__7;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__9() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_match___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_match___closed__10() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_match___closed__8;
x_2 = l_Lean_Parser_Term_match___closed__9;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_match() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_match___closed__10;
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__2(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_Parser_Term_match___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_match___elambda__1(x_1, x_2, x_3);
lean::dec(x_1);
return x_4;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__1(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___spec__2(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_3);
lean::dec(x_1);
return x_7;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_match(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_match___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_match;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("nomatch");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("nomatch ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_nomatch___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_nomatch___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_nomatch___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_nomatch___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_nomatch___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_nomatch___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_nomatch___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_nomatch___closed__3;
x_2 = l_Lean_Parser_Term_nomatch___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_nomatch() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_nomatch___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_nomatch___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_nomatch___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_nomatch(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_nomatch;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("parser!");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("parser! ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_parser_x21___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_parser_x21___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_parser_x21___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_parser_x21___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_parser_x21___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_parser_x21___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_parser_x21___closed__3;
x_2 = l_Lean_Parser_Term_parser_x21___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_parser_x21() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_parser_x21___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_parser_x21___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_parser_x21___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_parser_x21(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_parser_x21;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("tparser!");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("tparser! ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_tparser_x21___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_tparser_x21___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_tparser_x21___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_tparser_x21___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_tparser_x21___closed__3;
x_2 = l_Lean_Parser_Term_tparser_x21___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_tparser_x21() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_tparser_x21___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_tparser_x21___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_tparser_x21___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_tparser_x21(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_tparser_x21;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("borrowed");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("@&");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_appPrec;
x_2 = lean::mk_nat_obj(1u);
x_3 = lean::nat_sub(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__6;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__7;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_borrowed___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__5;
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_borrowed___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_borrowed___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_borrowed___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_borrowed___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_borrowed___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_borrowed___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_borrowed___closed__3;
x_2 = l_Lean_Parser_Term_borrowed___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_borrowed() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_borrowed___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_borrowed___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_borrowed___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_borrowed(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_borrowed;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("quotedName");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_formatDataValue___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__4;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__5;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_quotedName___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_13; obj* x_14; obj* x_15; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_13 = lean::cnstr_get(x_2, 1);
lean::inc(x_13);
lean::inc(x_1);
x_14 = l_Lean_Parser_tokenFn(x_1, x_2);
x_15 = lean::cnstr_get(x_14, 3);
lean::inc(x_15);
if (lean::obj_tag(x_15) == 0)
{
obj* x_16; obj* x_17; 
x_16 = lean::cnstr_get(x_14, 0);
lean::inc(x_16);
x_17 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_16);
lean::dec(x_16);
if (lean::obj_tag(x_17) == 2)
{
obj* x_18; obj* x_19; uint8 x_20; 
x_18 = lean::cnstr_get(x_17, 1);
lean::inc(x_18);
lean::dec(x_17);
x_19 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3;
x_20 = lean::string_dec_eq(x_18, x_19);
lean::dec(x_18);
if (x_20 == 0)
{
obj* x_21; obj* x_22; 
x_21 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6;
x_22 = l_Lean_Parser_ParserState_mkErrorsAt(x_14, x_21, x_13);
x_5 = x_22;
goto block_12;
}
else
{
lean::dec(x_13);
x_5 = x_14;
goto block_12;
}
}
else
{
obj* x_23; obj* x_24; 
lean::dec(x_17);
x_23 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_14, x_23, x_13);
x_5 = x_24;
goto block_12;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_15);
x_25 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_14, x_25, x_13);
x_5 = x_26;
goto block_12;
}
block_12:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; 
x_7 = l_Lean_Parser_rawIdentFn(x_1, x_5);
lean::dec(x_1);
x_8 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2;
x_9 = l_Lean_Parser_ParserState_mkNode(x_7, x_8, x_4);
return x_9;
}
else
{
obj* x_10; obj* x_11; 
lean::dec(x_6);
lean::dec(x_1);
x_10 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_5, x_10, x_4);
return x_11;
}
}
}
}
obj* l_Lean_Parser_Term_quotedName___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_quotedName___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3;
x_2 = l_Lean_Parser_Level_paren___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_quotedName___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_quotedName___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_quotedName___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_quotedName___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_quotedName___closed__3;
x_2 = l_Lean_Parser_Term_quotedName___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_quotedName() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_quotedName___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_quotedName___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_quotedName___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_quotedName(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_quotedName;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("expected space before binders");
return x_1;
}
}
obj* l_Lean_Parser_Term_letIdLhs___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
lean::inc(x_2);
x_6 = l_Lean_Parser_identFn___rarg(x_2, x_3);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = l_Lean_Parser_Term_letIdLhs___elambda__1___closed__1;
x_9 = l_Lean_Parser_checkWsBeforeFn(x_8, x_2, x_6);
x_10 = lean::cnstr_get(x_9, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; uint8 x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; 
x_11 = lean::cnstr_get(x_9, 0);
lean::inc(x_11);
x_12 = lean::array_get_size(x_11);
lean::dec(x_11);
x_13 = 0;
lean::inc(x_2);
x_14 = l_Lean_Parser_manyAux___main(x_13, x_5, x_1, x_2, x_9);
x_15 = l_Lean_nullKind;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_12);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; 
x_18 = l_Lean_Parser_Term_optType___elambda__1___rarg(x_2, x_16);
return x_18;
}
else
{
lean::dec(x_17);
lean::dec(x_2);
return x_16;
}
}
else
{
lean::dec(x_10);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
return x_9;
}
}
else
{
lean::dec(x_7);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
return x_6;
}
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_noFirstTokenInfo(x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_letIdLhs___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_letIdLhs___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_letIdLhs___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_letIdLhs___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letIdLhs___closed__4;
x_2 = l_Lean_Parser_Term_letIdLhs___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdLhs() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_letIdLhs___closed__6;
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("letIdDecl");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_letIdDecl___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_24; obj* x_25; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_6 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_2);
x_24 = l_Lean_Parser_Term_letIdLhs___elambda__1(x_1, x_2, x_3);
x_25 = lean::cnstr_get(x_24, 3);
lean::inc(x_25);
if (lean::obj_tag(x_25) == 0)
{
obj* x_26; obj* x_27; obj* x_28; 
x_26 = lean::cnstr_get(x_24, 1);
lean::inc(x_26);
lean::inc(x_2);
x_27 = l_Lean_Parser_tokenFn(x_2, x_24);
x_28 = lean::cnstr_get(x_27, 3);
lean::inc(x_28);
if (lean::obj_tag(x_28) == 0)
{
obj* x_29; obj* x_30; 
x_29 = lean::cnstr_get(x_27, 0);
lean::inc(x_29);
x_30 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_29);
lean::dec(x_29);
if (lean::obj_tag(x_30) == 2)
{
obj* x_31; obj* x_32; uint8 x_33; 
x_31 = lean::cnstr_get(x_30, 1);
lean::inc(x_31);
lean::dec(x_30);
x_32 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_33 = lean::string_dec_eq(x_31, x_32);
lean::dec(x_31);
if (x_33 == 0)
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
x_34 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_35 = l_Lean_Parser_ParserState_mkErrorsAt(x_27, x_34, x_26);
x_36 = lean::cnstr_get(x_35, 0);
lean::inc(x_36);
x_37 = lean::cnstr_get(x_35, 2);
lean::inc(x_37);
x_38 = lean::cnstr_get(x_35, 3);
lean::inc(x_38);
x_7 = x_35;
x_8 = x_36;
x_9 = x_37;
x_10 = x_38;
goto block_23;
}
else
{
obj* x_39; obj* x_40; obj* x_41; 
lean::dec(x_26);
x_39 = lean::cnstr_get(x_27, 0);
lean::inc(x_39);
x_40 = lean::cnstr_get(x_27, 2);
lean::inc(x_40);
x_41 = lean::cnstr_get(x_27, 3);
lean::inc(x_41);
x_7 = x_27;
x_8 = x_39;
x_9 = x_40;
x_10 = x_41;
goto block_23;
}
}
else
{
obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; 
lean::dec(x_30);
x_42 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_43 = l_Lean_Parser_ParserState_mkErrorsAt(x_27, x_42, x_26);
x_44 = lean::cnstr_get(x_43, 0);
lean::inc(x_44);
x_45 = lean::cnstr_get(x_43, 2);
lean::inc(x_45);
x_46 = lean::cnstr_get(x_43, 3);
lean::inc(x_46);
x_7 = x_43;
x_8 = x_44;
x_9 = x_45;
x_10 = x_46;
goto block_23;
}
}
else
{
obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
lean::dec(x_28);
x_47 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_27, x_47, x_26);
x_49 = lean::cnstr_get(x_48, 0);
lean::inc(x_49);
x_50 = lean::cnstr_get(x_48, 2);
lean::inc(x_50);
x_51 = lean::cnstr_get(x_48, 3);
lean::inc(x_51);
x_7 = x_48;
x_8 = x_49;
x_9 = x_50;
x_10 = x_51;
goto block_23;
}
}
else
{
obj* x_52; obj* x_53; obj* x_54; 
lean::dec(x_25);
x_52 = lean::cnstr_get(x_24, 0);
lean::inc(x_52);
x_53 = lean::cnstr_get(x_24, 2);
lean::inc(x_53);
x_54 = lean::cnstr_get(x_24, 3);
lean::inc(x_54);
x_7 = x_24;
x_8 = x_52;
x_9 = x_53;
x_10 = x_54;
goto block_23;
}
block_23:
{
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; 
lean::dec(x_9);
lean::dec(x_8);
lean::dec(x_5);
x_11 = lean::cnstr_get(x_7, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
x_12 = l_Lean_Parser_termParserAttribute;
x_13 = lean::mk_nat_obj(0u);
x_14 = l_Lean_Parser_ParserAttribute_runParser(x_12, x_13, x_2, x_7);
x_15 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_14, x_15, x_6);
return x_16;
}
else
{
obj* x_17; obj* x_18; 
lean::dec(x_11);
lean::dec(x_2);
x_17 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_18 = l_Lean_Parser_ParserState_mkNode(x_7, x_17, x_6);
return x_18;
}
}
else
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_7);
lean::dec(x_2);
x_19 = l_Array_shrink___main___rarg(x_8, x_6);
x_20 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_20, 0, x_19);
lean::cnstr_set(x_20, 1, x_5);
lean::cnstr_set(x_20, 2, x_9);
lean::cnstr_set(x_20, 3, x_10);
x_21 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_6);
return x_22;
}
}
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_letIdLhs;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_haveAssign___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letIdDecl___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_letIdDecl___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_letIdDecl___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letIdDecl___closed__3;
x_2 = l_Lean_Parser_Term_letIdDecl___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letIdDecl() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_letIdDecl___closed__5;
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_equation() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_matchAlt;
return x_1;
}
}
obj* _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("equations must be indented");
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_27; obj* x_28; obj* x_29; obj* x_30; uint8 x_31; 
x_6 = l_Lean_Parser_Term_equation;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_27 = lean::cnstr_get(x_4, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_27, 2);
lean::inc(x_28);
lean::dec(x_27);
x_29 = l_Lean_FileMap_toPosition(x_28, x_10);
lean::dec(x_28);
x_30 = lean::cnstr_get(x_29, 1);
lean::inc(x_30);
lean::dec(x_29);
x_31 = lean::nat_dec_le(x_1, x_30);
lean::dec(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_5, x_32);
x_11 = x_33;
goto block_26;
}
else
{
x_11 = x_5;
goto block_26;
}
block_26:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::inc(x_4);
lean::inc(x_3);
x_13 = lean::apply_3(x_7, x_3, x_4, x_11);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; uint8 x_16; 
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
x_16 = lean::nat_dec_eq(x_10, x_15);
lean::dec(x_15);
lean::dec(x_10);
if (x_16 == 0)
{
x_5 = x_13;
goto _start;
}
else
{
obj* x_18; obj* x_19; 
lean::dec(x_4);
lean::dec(x_3);
x_18 = l_Lean_Parser_manyAux___main___closed__1;
x_19 = l_Lean_Parser_ParserState_mkUnexpectedError(x_13, x_18);
return x_19;
}
}
else
{
obj* x_20; uint8 x_21; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
x_21 = lean::nat_dec_eq(x_10, x_20);
lean::dec(x_20);
if (x_21 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_13;
}
else
{
obj* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
return x_22;
}
}
}
else
{
obj* x_23; uint8 x_24; 
lean::dec(x_12);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
x_23 = lean::cnstr_get(x_11, 1);
lean::inc(x_23);
x_24 = lean::nat_dec_eq(x_10, x_23);
lean::dec(x_23);
if (x_24 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_11;
}
else
{
obj* x_25; 
x_25 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
return x_25;
}
}
}
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__2(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_27; obj* x_28; obj* x_29; obj* x_30; uint8 x_31; 
x_6 = l_Lean_Parser_Term_equation;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_27 = lean::cnstr_get(x_4, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_27, 2);
lean::inc(x_28);
lean::dec(x_27);
x_29 = l_Lean_FileMap_toPosition(x_28, x_10);
lean::dec(x_28);
x_30 = lean::cnstr_get(x_29, 1);
lean::inc(x_30);
lean::dec(x_29);
x_31 = lean::nat_dec_le(x_1, x_30);
lean::dec(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_5, x_32);
x_11 = x_33;
goto block_26;
}
else
{
x_11 = x_5;
goto block_26;
}
block_26:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::inc(x_4);
lean::inc(x_3);
x_13 = lean::apply_3(x_7, x_3, x_4, x_11);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; uint8 x_16; 
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
x_16 = lean::nat_dec_eq(x_10, x_15);
lean::dec(x_15);
lean::dec(x_10);
if (x_16 == 0)
{
x_5 = x_13;
goto _start;
}
else
{
obj* x_18; obj* x_19; 
lean::dec(x_4);
lean::dec(x_3);
x_18 = l_Lean_Parser_manyAux___main___closed__1;
x_19 = l_Lean_Parser_ParserState_mkUnexpectedError(x_13, x_18);
return x_19;
}
}
else
{
obj* x_20; uint8 x_21; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
x_21 = lean::nat_dec_eq(x_10, x_20);
lean::dec(x_20);
if (x_21 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_13;
}
else
{
obj* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
return x_22;
}
}
}
else
{
obj* x_23; uint8 x_24; 
lean::dec(x_12);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
x_23 = lean::cnstr_get(x_11, 1);
lean::inc(x_23);
x_24 = lean::nat_dec_eq(x_10, x_23);
lean::dec(x_23);
if (x_24 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_11;
}
else
{
obj* x_25; 
x_25 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
return x_25;
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_letEqns___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("letEqns");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letEqns___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_letEqns___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_letEqns___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_60; obj* x_61; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_6 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_2);
lean::inc(x_1);
x_60 = l_Lean_Parser_Term_letIdLhs___elambda__1(x_1, x_2, x_3);
x_61 = lean::cnstr_get(x_60, 3);
lean::inc(x_61);
if (lean::obj_tag(x_61) == 0)
{
obj* x_62; obj* x_63; obj* x_64; obj* x_65; obj* x_75; obj* x_76; 
x_62 = lean::cnstr_get(x_60, 0);
lean::inc(x_62);
x_63 = lean::array_get_size(x_62);
lean::dec(x_62);
x_64 = lean::cnstr_get(x_60, 1);
lean::inc(x_64);
lean::inc(x_2);
x_75 = l_Lean_Parser_tokenFn(x_2, x_60);
x_76 = lean::cnstr_get(x_75, 3);
lean::inc(x_76);
if (lean::obj_tag(x_76) == 0)
{
obj* x_77; obj* x_78; 
x_77 = lean::cnstr_get(x_75, 0);
lean::inc(x_77);
x_78 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_77);
lean::dec(x_77);
if (lean::obj_tag(x_78) == 2)
{
obj* x_79; obj* x_80; uint8 x_81; 
x_79 = lean::cnstr_get(x_78, 1);
lean::inc(x_79);
lean::dec(x_78);
x_80 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__4;
x_81 = lean::string_dec_eq(x_79, x_80);
lean::dec(x_79);
if (x_81 == 0)
{
obj* x_82; obj* x_83; 
x_82 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
lean::inc(x_64);
x_83 = l_Lean_Parser_ParserState_mkErrorsAt(x_75, x_82, x_64);
x_65 = x_83;
goto block_74;
}
else
{
x_65 = x_75;
goto block_74;
}
}
else
{
obj* x_84; obj* x_85; 
lean::dec(x_78);
x_84 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
lean::inc(x_64);
x_85 = l_Lean_Parser_ParserState_mkErrorsAt(x_75, x_84, x_64);
x_65 = x_85;
goto block_74;
}
}
else
{
obj* x_86; obj* x_87; 
lean::dec(x_76);
x_86 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
lean::inc(x_64);
x_87 = l_Lean_Parser_ParserState_mkErrorsAt(x_75, x_86, x_64);
x_65 = x_87;
goto block_74;
}
block_74:
{
obj* x_66; 
x_66 = lean::cnstr_get(x_65, 3);
lean::inc(x_66);
if (lean::obj_tag(x_66) == 0)
{
obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
x_67 = l_Lean_Parser_ParserState_restore(x_65, x_63, x_64);
lean::dec(x_63);
x_68 = lean::cnstr_get(x_67, 0);
lean::inc(x_68);
x_69 = lean::cnstr_get(x_67, 2);
lean::inc(x_69);
x_70 = lean::cnstr_get(x_67, 3);
lean::inc(x_70);
x_53 = x_67;
x_54 = x_68;
x_55 = x_69;
x_56 = x_70;
goto block_59;
}
else
{
obj* x_71; obj* x_72; obj* x_73; 
lean::dec(x_66);
lean::dec(x_64);
lean::dec(x_63);
x_71 = lean::cnstr_get(x_65, 0);
lean::inc(x_71);
x_72 = lean::cnstr_get(x_65, 2);
lean::inc(x_72);
x_73 = lean::cnstr_get(x_65, 3);
lean::inc(x_73);
x_53 = x_65;
x_54 = x_71;
x_55 = x_72;
x_56 = x_73;
goto block_59;
}
}
}
else
{
obj* x_88; obj* x_89; obj* x_90; 
lean::dec(x_61);
x_88 = lean::cnstr_get(x_60, 0);
lean::inc(x_88);
x_89 = lean::cnstr_get(x_60, 2);
lean::inc(x_89);
x_90 = lean::cnstr_get(x_60, 3);
lean::inc(x_90);
x_53 = x_60;
x_54 = x_88;
x_55 = x_89;
x_56 = x_90;
goto block_59;
}
block_52:
{
obj* x_8; 
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_17; uint8 x_18; 
x_9 = lean::cnstr_get(x_2, 0);
lean::inc(x_9);
x_10 = lean::cnstr_get(x_9, 2);
lean::inc(x_10);
lean::dec(x_9);
x_11 = lean::cnstr_get(x_7, 1);
lean::inc(x_11);
x_12 = l_Lean_FileMap_toPosition(x_10, x_11);
lean::dec(x_11);
lean::dec(x_10);
x_13 = lean::cnstr_get(x_12, 1);
lean::inc(x_13);
lean::dec(x_12);
x_14 = l_Lean_Parser_Term_equation;
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
x_16 = lean::cnstr_get(x_7, 0);
lean::inc(x_16);
x_17 = lean::array_get_size(x_16);
lean::dec(x_16);
x_18 = lean::nat_dec_le(x_13, x_13);
if (x_18 == 0)
{
obj* x_19; obj* x_20; obj* x_21; 
x_19 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1;
x_20 = l_Lean_Parser_ParserState_mkError(x_7, x_19);
x_21 = lean::cnstr_get(x_20, 3);
lean::inc(x_21);
if (lean::obj_tag(x_21) == 0)
{
obj* x_22; obj* x_23; 
lean::inc(x_2);
lean::inc(x_1);
x_22 = lean::apply_3(x_15, x_1, x_2, x_20);
x_23 = lean::cnstr_get(x_22, 3);
lean::inc(x_23);
if (lean::obj_tag(x_23) == 0)
{
uint8 x_24; obj* x_25; obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
x_24 = 0;
x_25 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1(x_13, x_24, x_1, x_2, x_22);
lean::dec(x_13);
x_26 = l_Lean_nullKind;
x_27 = l_Lean_Parser_ParserState_mkNode(x_25, x_26, x_17);
x_28 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_6);
return x_29;
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_23);
lean::dec(x_13);
lean::dec(x_2);
lean::dec(x_1);
x_30 = l_Lean_nullKind;
x_31 = l_Lean_Parser_ParserState_mkNode(x_22, x_30, x_17);
x_32 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_6);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
lean::dec(x_21);
lean::dec(x_15);
lean::dec(x_13);
lean::dec(x_2);
lean::dec(x_1);
x_34 = l_Lean_nullKind;
x_35 = l_Lean_Parser_ParserState_mkNode(x_20, x_34, x_17);
x_36 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_35, x_36, x_6);
return x_37;
}
}
else
{
obj* x_38; obj* x_39; 
lean::inc(x_2);
lean::inc(x_1);
x_38 = lean::apply_3(x_15, x_1, x_2, x_7);
x_39 = lean::cnstr_get(x_38, 3);
lean::inc(x_39);
if (lean::obj_tag(x_39) == 0)
{
uint8 x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; 
x_40 = 0;
x_41 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__2(x_13, x_40, x_1, x_2, x_38);
lean::dec(x_13);
x_42 = l_Lean_nullKind;
x_43 = l_Lean_Parser_ParserState_mkNode(x_41, x_42, x_17);
x_44 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_45 = l_Lean_Parser_ParserState_mkNode(x_43, x_44, x_6);
return x_45;
}
else
{
obj* x_46; obj* x_47; obj* x_48; obj* x_49; 
lean::dec(x_39);
lean::dec(x_13);
lean::dec(x_2);
lean::dec(x_1);
x_46 = l_Lean_nullKind;
x_47 = l_Lean_Parser_ParserState_mkNode(x_38, x_46, x_17);
x_48 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_49 = l_Lean_Parser_ParserState_mkNode(x_47, x_48, x_6);
return x_49;
}
}
}
else
{
obj* x_50; obj* x_51; 
lean::dec(x_8);
lean::dec(x_2);
lean::dec(x_1);
x_50 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_51 = l_Lean_Parser_ParserState_mkNode(x_7, x_50, x_6);
return x_51;
}
}
block_59:
{
if (lean::obj_tag(x_56) == 0)
{
lean::dec(x_55);
lean::dec(x_54);
lean::dec(x_5);
x_7 = x_53;
goto block_52;
}
else
{
obj* x_57; obj* x_58; 
lean::dec(x_53);
x_57 = l_Array_shrink___main___rarg(x_54, x_6);
x_58 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_5);
lean::cnstr_set(x_58, 2, x_55);
lean::cnstr_set(x_58, 3, x_56);
x_7 = x_58;
goto block_52;
}
}
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__1(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_27; obj* x_28; obj* x_29; obj* x_30; uint8 x_31; 
x_6 = l_Lean_Parser_Term_equation;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_27 = lean::cnstr_get(x_4, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_27, 2);
lean::inc(x_28);
lean::dec(x_27);
x_29 = l_Lean_FileMap_toPosition(x_28, x_10);
lean::dec(x_28);
x_30 = lean::cnstr_get(x_29, 1);
lean::inc(x_30);
lean::dec(x_29);
x_31 = lean::nat_dec_le(x_1, x_30);
lean::dec(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_5, x_32);
x_11 = x_33;
goto block_26;
}
else
{
x_11 = x_5;
goto block_26;
}
block_26:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::inc(x_4);
lean::inc(x_3);
x_13 = lean::apply_3(x_7, x_3, x_4, x_11);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; uint8 x_16; 
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
x_16 = lean::nat_dec_eq(x_10, x_15);
lean::dec(x_15);
lean::dec(x_10);
if (x_16 == 0)
{
x_5 = x_13;
goto _start;
}
else
{
obj* x_18; obj* x_19; 
lean::dec(x_4);
lean::dec(x_3);
x_18 = l_Lean_Parser_manyAux___main___closed__1;
x_19 = l_Lean_Parser_ParserState_mkUnexpectedError(x_13, x_18);
return x_19;
}
}
else
{
obj* x_20; uint8 x_21; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
x_21 = lean::nat_dec_eq(x_10, x_20);
lean::dec(x_20);
if (x_21 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_13;
}
else
{
obj* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
return x_22;
}
}
}
else
{
obj* x_23; uint8 x_24; 
lean::dec(x_12);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
x_23 = lean::cnstr_get(x_11, 1);
lean::inc(x_23);
x_24 = lean::nat_dec_eq(x_10, x_23);
lean::dec(x_23);
if (x_24 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_11;
}
else
{
obj* x_25; 
x_25 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
return x_25;
}
}
}
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__2(obj* x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_27; obj* x_28; obj* x_29; obj* x_30; uint8 x_31; 
x_6 = l_Lean_Parser_Term_equation;
x_7 = lean::cnstr_get(x_6, 1);
lean::inc(x_7);
x_8 = lean::cnstr_get(x_5, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_5, 1);
lean::inc(x_10);
x_27 = lean::cnstr_get(x_4, 0);
lean::inc(x_27);
x_28 = lean::cnstr_get(x_27, 2);
lean::inc(x_28);
lean::dec(x_27);
x_29 = l_Lean_FileMap_toPosition(x_28, x_10);
lean::dec(x_28);
x_30 = lean::cnstr_get(x_29, 1);
lean::inc(x_30);
lean::dec(x_29);
x_31 = lean::nat_dec_le(x_1, x_30);
lean::dec(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
x_32 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1;
x_33 = l_Lean_Parser_ParserState_mkError(x_5, x_32);
x_11 = x_33;
goto block_26;
}
else
{
x_11 = x_5;
goto block_26;
}
block_26:
{
obj* x_12; 
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::inc(x_4);
lean::inc(x_3);
x_13 = lean::apply_3(x_7, x_3, x_4, x_11);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; uint8 x_16; 
lean::dec(x_9);
x_15 = lean::cnstr_get(x_13, 1);
lean::inc(x_15);
x_16 = lean::nat_dec_eq(x_10, x_15);
lean::dec(x_15);
lean::dec(x_10);
if (x_16 == 0)
{
x_5 = x_13;
goto _start;
}
else
{
obj* x_18; obj* x_19; 
lean::dec(x_4);
lean::dec(x_3);
x_18 = l_Lean_Parser_manyAux___main___closed__1;
x_19 = l_Lean_Parser_ParserState_mkUnexpectedError(x_13, x_18);
return x_19;
}
}
else
{
obj* x_20; uint8 x_21; 
lean::dec(x_14);
lean::dec(x_4);
lean::dec(x_3);
x_20 = lean::cnstr_get(x_13, 1);
lean::inc(x_20);
x_21 = lean::nat_dec_eq(x_10, x_20);
lean::dec(x_20);
if (x_21 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_13;
}
else
{
obj* x_22; 
x_22 = l_Lean_Parser_ParserState_restore(x_13, x_9, x_10);
lean::dec(x_9);
return x_22;
}
}
}
else
{
obj* x_23; uint8 x_24; 
lean::dec(x_12);
lean::dec(x_7);
lean::dec(x_4);
lean::dec(x_3);
x_23 = lean::cnstr_get(x_11, 1);
lean::inc(x_23);
x_24 = lean::nat_dec_eq(x_10, x_23);
lean::dec(x_23);
if (x_24 == 0)
{
lean::dec(x_10);
lean::dec(x_9);
return x_11;
}
else
{
obj* x_25; 
x_25 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
return x_25;
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_letEqns___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_letIdLhs;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_matchAlt___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_letEqns___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_equation;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_letEqns___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letEqns___closed__1;
x_2 = l_Lean_Parser_Term_letEqns___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letEqns___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letEqns___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_letEqns___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letEqns___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_letEqns___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letEqns___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letEqns___closed__4;
x_2 = l_Lean_Parser_Term_letEqns___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letEqns() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_letEqns___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__2(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__1(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_1);
return x_7;
}
}
obj* l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; obj* x_7; 
x_6 = lean::unbox(x_2);
lean::dec(x_2);
x_7 = l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___spec__2(x_1, x_6, x_3, x_4, x_5);
lean::dec(x_1);
return x_7;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("letPatDecl");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_letPatDecl___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; obj* x_18; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = l_Lean_Parser_termParserAttribute;
x_16 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_17 = l_Lean_Parser_ParserAttribute_runParser(x_15, x_16, x_1, x_2);
x_18 = lean::cnstr_get(x_17, 3);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; 
lean::inc(x_1);
x_19 = l_Lean_Parser_Term_optType___elambda__1___rarg(x_1, x_17);
x_20 = lean::cnstr_get(x_19, 3);
lean::inc(x_20);
if (lean::obj_tag(x_20) == 0)
{
obj* x_21; obj* x_22; obj* x_23; 
x_21 = lean::cnstr_get(x_19, 1);
lean::inc(x_21);
lean::inc(x_1);
x_22 = l_Lean_Parser_tokenFn(x_1, x_19);
x_23 = lean::cnstr_get(x_22, 3);
lean::inc(x_23);
if (lean::obj_tag(x_23) == 0)
{
obj* x_24; obj* x_25; 
x_24 = lean::cnstr_get(x_22, 0);
lean::inc(x_24);
x_25 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_24);
lean::dec(x_24);
if (lean::obj_tag(x_25) == 2)
{
obj* x_26; obj* x_27; uint8 x_28; 
x_26 = lean::cnstr_get(x_25, 1);
lean::inc(x_26);
lean::dec(x_25);
x_27 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_28 = lean::string_dec_eq(x_26, x_27);
lean::dec(x_26);
if (x_28 == 0)
{
obj* x_29; obj* x_30; 
x_29 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_30 = l_Lean_Parser_ParserState_mkErrorsAt(x_22, x_29, x_21);
x_5 = x_30;
goto block_14;
}
else
{
lean::dec(x_21);
x_5 = x_22;
goto block_14;
}
}
else
{
obj* x_31; obj* x_32; 
lean::dec(x_25);
x_31 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_32 = l_Lean_Parser_ParserState_mkErrorsAt(x_22, x_31, x_21);
x_5 = x_32;
goto block_14;
}
}
else
{
obj* x_33; obj* x_34; 
lean::dec(x_23);
x_33 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_34 = l_Lean_Parser_ParserState_mkErrorsAt(x_22, x_33, x_21);
x_5 = x_34;
goto block_14;
}
}
else
{
obj* x_35; obj* x_36; 
lean::dec(x_20);
lean::dec(x_1);
x_35 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2;
x_36 = l_Lean_Parser_ParserState_mkNode(x_19, x_35, x_4);
return x_36;
}
}
else
{
obj* x_37; obj* x_38; 
lean::dec(x_18);
lean::dec(x_1);
x_37 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2;
x_38 = l_Lean_Parser_ParserState_mkNode(x_17, x_37, x_4);
return x_38;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(0u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_letPatDecl___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_letPatDecl___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_haveAssign___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_letPatDecl___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_letPatDecl___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_letPatDecl___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_letPatDecl___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letPatDecl___closed__4;
x_2 = l_Lean_Parser_Term_letPatDecl___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letPatDecl() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_letPatDecl___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_letPatDecl___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_letPatDecl___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_letDecl___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_27; obj* x_28; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_6 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_2);
lean::inc(x_1);
x_27 = l_Lean_Parser_Term_letIdDecl___elambda__1(x_1, x_2, x_3);
x_28 = lean::cnstr_get(x_27, 3);
lean::inc(x_28);
if (lean::obj_tag(x_28) == 0)
{
x_7 = x_27;
goto block_26;
}
else
{
uint8 x_29; 
x_29 = !lean::is_exclusive(x_27);
if (x_29 == 0)
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_30 = lean::cnstr_get(x_27, 0);
x_31 = lean::cnstr_get(x_27, 3);
lean::dec(x_31);
x_32 = lean::cnstr_get(x_27, 1);
lean::dec(x_32);
x_33 = l_Array_shrink___main___rarg(x_30, x_6);
lean::inc(x_5);
lean::cnstr_set(x_27, 1, x_5);
lean::cnstr_set(x_27, 0, x_33);
x_7 = x_27;
goto block_26;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; 
x_34 = lean::cnstr_get(x_27, 0);
x_35 = lean::cnstr_get(x_27, 2);
lean::inc(x_35);
lean::inc(x_34);
lean::dec(x_27);
x_36 = l_Array_shrink___main___rarg(x_34, x_6);
lean::inc(x_5);
x_37 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_37, 0, x_36);
lean::cnstr_set(x_37, 1, x_5);
lean::cnstr_set(x_37, 2, x_35);
lean::cnstr_set(x_37, 3, x_28);
x_7 = x_37;
goto block_26;
}
}
block_26:
{
obj* x_8; 
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
else
{
obj* x_9; obj* x_10; uint8 x_11; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_11 = lean::nat_dec_eq(x_10, x_5);
lean::dec(x_10);
if (x_11 == 0)
{
lean::dec(x_9);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
return x_7;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::inc(x_5);
x_12 = l_Lean_Parser_ParserState_restore(x_7, x_6, x_5);
lean::dec(x_6);
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::array_get_size(x_13);
lean::dec(x_13);
lean::inc(x_2);
x_15 = l_Lean_Parser_Term_letEqns___elambda__1(x_1, x_2, x_12);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; 
lean::dec(x_14);
lean::dec(x_2);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_15, x_9, x_5);
lean::dec(x_5);
return x_17;
}
else
{
obj* x_18; obj* x_19; uint8 x_20; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
lean::dec(x_16);
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
x_20 = lean::nat_dec_eq(x_19, x_5);
lean::dec(x_19);
if (x_20 == 0)
{
obj* x_21; 
lean::dec(x_18);
lean::dec(x_14);
lean::dec(x_2);
x_21 = l_Lean_Parser_mergeOrElseErrors(x_15, x_9, x_5);
lean::dec(x_5);
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
lean::inc(x_5);
x_22 = l_Lean_Parser_ParserState_restore(x_15, x_14, x_5);
lean::dec(x_14);
x_23 = l_Lean_Parser_Term_letPatDecl___elambda__1___rarg(x_2, x_22);
x_24 = l_Lean_Parser_mergeOrElseErrors(x_23, x_18, x_5);
x_25 = l_Lean_Parser_mergeOrElseErrors(x_24, x_9, x_5);
lean::dec(x_5);
return x_25;
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_letDecl___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_letEqns;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_letPatDecl;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_letDecl___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_letIdDecl;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_letDecl___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_letDecl___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_letDecl___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_letDecl___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_letDecl___closed__2;
x_2 = l_Lean_Parser_Term_letDecl___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_letDecl() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_letDecl___closed__4;
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("let");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_let___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("let ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_let___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_let___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_let___elambda__1___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_let___elambda__1___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_let___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_16; obj* x_39; obj* x_40; obj* x_41; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_39 = lean::cnstr_get(x_3, 1);
lean::inc(x_39);
lean::inc(x_2);
x_40 = l_Lean_Parser_tokenFn(x_2, x_3);
x_41 = lean::cnstr_get(x_40, 3);
lean::inc(x_41);
if (lean::obj_tag(x_41) == 0)
{
obj* x_42; obj* x_43; 
x_42 = lean::cnstr_get(x_40, 0);
lean::inc(x_42);
x_43 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_42);
lean::dec(x_42);
if (lean::obj_tag(x_43) == 2)
{
obj* x_44; obj* x_45; uint8 x_46; 
x_44 = lean::cnstr_get(x_43, 1);
lean::inc(x_44);
lean::dec(x_43);
x_45 = l_Lean_Parser_Term_let___elambda__1___closed__4;
x_46 = lean::string_dec_eq(x_44, x_45);
lean::dec(x_44);
if (x_46 == 0)
{
obj* x_47; obj* x_48; 
x_47 = l_Lean_Parser_Term_let___elambda__1___closed__7;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_47, x_39);
x_16 = x_48;
goto block_38;
}
else
{
lean::dec(x_39);
x_16 = x_40;
goto block_38;
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_43);
x_49 = l_Lean_Parser_Term_let___elambda__1___closed__7;
x_50 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_49, x_39);
x_16 = x_50;
goto block_38;
}
}
else
{
obj* x_51; obj* x_52; 
lean::dec(x_41);
x_51 = l_Lean_Parser_Term_let___elambda__1___closed__7;
x_52 = l_Lean_Parser_ParserState_mkErrorsAt(x_40, x_51, x_39);
x_16 = x_52;
goto block_38;
}
block_15:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = l_Lean_Parser_termParserAttribute;
x_9 = lean::mk_nat_obj(0u);
x_10 = l_Lean_Parser_ParserAttribute_runParser(x_8, x_9, x_2, x_6);
x_11 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_12 = l_Lean_Parser_ParserState_mkNode(x_10, x_11, x_5);
return x_12;
}
else
{
obj* x_13; obj* x_14; 
lean::dec(x_7);
lean::dec(x_2);
x_13 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_14 = l_Lean_Parser_ParserState_mkNode(x_6, x_13, x_5);
return x_14;
}
}
block_38:
{
obj* x_17; 
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
lean::inc(x_2);
x_18 = l_Lean_Parser_Term_letDecl___elambda__1(x_1, x_2, x_16);
x_19 = lean::cnstr_get(x_18, 3);
lean::inc(x_19);
if (lean::obj_tag(x_19) == 0)
{
obj* x_20; obj* x_21; obj* x_22; 
x_20 = lean::cnstr_get(x_18, 1);
lean::inc(x_20);
lean::inc(x_2);
x_21 = l_Lean_Parser_tokenFn(x_2, x_18);
x_22 = lean::cnstr_get(x_21, 3);
lean::inc(x_22);
if (lean::obj_tag(x_22) == 0)
{
obj* x_23; obj* x_24; 
x_23 = lean::cnstr_get(x_21, 0);
lean::inc(x_23);
x_24 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_23);
lean::dec(x_23);
if (lean::obj_tag(x_24) == 2)
{
obj* x_25; obj* x_26; uint8 x_27; 
x_25 = lean::cnstr_get(x_24, 1);
lean::inc(x_25);
lean::dec(x_24);
x_26 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
x_27 = lean::string_dec_eq(x_25, x_26);
lean::dec(x_25);
if (x_27 == 0)
{
obj* x_28; obj* x_29; 
x_28 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_21, x_28, x_20);
x_6 = x_29;
goto block_15;
}
else
{
lean::dec(x_20);
x_6 = x_21;
goto block_15;
}
}
else
{
obj* x_30; obj* x_31; 
lean::dec(x_24);
x_30 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_21, x_30, x_20);
x_6 = x_31;
goto block_15;
}
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_22);
x_32 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_21, x_32, x_20);
x_6 = x_33;
goto block_15;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_19);
lean::dec(x_2);
x_34 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_18, x_34, x_5);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_17);
lean::dec(x_2);
lean::dec(x_1);
x_36 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_16, x_36, x_5);
return x_37;
}
}
}
}
obj* _init_l_Lean_Parser_Term_let___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_let___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_have___closed__3;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_letDecl;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_let___closed__2;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_let___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_let___closed__1;
x_2 = l_Lean_Parser_Term_let___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_let___closed__4;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let___closed__6() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_let___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_let___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_let___closed__5;
x_2 = l_Lean_Parser_Term_let___closed__6;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_let() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_let___closed__7;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_let(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_let___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_let;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ← ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <- ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__5;
x_2 = l_Lean_Parser_unicodeSymbolFn___rarg___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__6;
x_2 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__7;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__8;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_leftArrow___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; 
x_3 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4;
x_5 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__9;
x_6 = l_Lean_Parser_unicodeSymbolFnAux(x_3, x_4, x_5, x_1, x_2);
return x_6;
}
}
obj* l_Lean_Parser_Term_leftArrow___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_leftArrow___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2;
x_3 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4;
x_4 = l_Lean_Parser_unicodeSymbolInfo(x_2, x_3, x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_leftArrow___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_leftArrow___closed__1;
x_2 = l_Lean_Parser_Term_leftArrow___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_leftArrow() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_leftArrow___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_Term_leftArrow___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_leftArrow___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doLet___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("doLet");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doLet___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doLet___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_doLet___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_14; obj* x_15; obj* x_16; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_14 = lean::cnstr_get(x_3, 1);
lean::inc(x_14);
lean::inc(x_2);
x_15 = l_Lean_Parser_tokenFn(x_2, x_3);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; 
x_17 = lean::cnstr_get(x_15, 0);
lean::inc(x_17);
x_18 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_17);
lean::dec(x_17);
if (lean::obj_tag(x_18) == 2)
{
obj* x_19; obj* x_20; uint8 x_21; 
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
x_20 = l_Lean_Parser_Term_let___elambda__1___closed__4;
x_21 = lean::string_dec_eq(x_19, x_20);
lean::dec(x_19);
if (x_21 == 0)
{
obj* x_22; obj* x_23; 
x_22 = l_Lean_Parser_Term_let___elambda__1___closed__7;
x_23 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_22, x_14);
x_6 = x_23;
goto block_13;
}
else
{
lean::dec(x_14);
x_6 = x_15;
goto block_13;
}
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_18);
x_24 = l_Lean_Parser_Term_let___elambda__1___closed__7;
x_25 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_24, x_14);
x_6 = x_25;
goto block_13;
}
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Term_let___elambda__1___closed__7;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_26, x_14);
x_6 = x_27;
goto block_13;
}
block_13:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; 
x_8 = l_Lean_Parser_Term_letDecl___elambda__1(x_1, x_2, x_6);
x_9 = l_Lean_Parser_Term_doLet___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_5);
return x_10;
}
else
{
obj* x_11; obj* x_12; 
lean::dec(x_7);
lean::dec(x_2);
lean::dec(x_1);
x_11 = l_Lean_Parser_Term_doLet___elambda__1___closed__2;
x_12 = l_Lean_Parser_ParserState_mkNode(x_6, x_11, x_5);
return x_12;
}
}
}
}
obj* _init_l_Lean_Parser_Term_doLet___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_letDecl;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_let___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_doLet___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doLet___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doLet___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doLet___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doLet___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doLet___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doLet___closed__2;
x_2 = l_Lean_Parser_Term_doLet___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doLet() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_doLet___closed__4;
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doId___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("doId");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doId___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_doId___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_23; obj* x_24; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_2, 1);
lean::inc(x_4);
x_5 = lean::array_get_size(x_3);
lean::dec(x_3);
lean::inc(x_1);
x_23 = l_Lean_Parser_identFn___rarg(x_1, x_2);
x_24 = lean::cnstr_get(x_23, 3);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; 
lean::inc(x_1);
x_25 = l_Lean_Parser_Term_optType___elambda__1___rarg(x_1, x_23);
x_26 = lean::cnstr_get(x_25, 3);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; obj* x_29; obj* x_30; 
lean::inc(x_1);
x_27 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg(x_1, x_25);
x_28 = lean::cnstr_get(x_27, 0);
lean::inc(x_28);
x_29 = lean::cnstr_get(x_27, 2);
lean::inc(x_29);
x_30 = lean::cnstr_get(x_27, 3);
lean::inc(x_30);
x_6 = x_27;
x_7 = x_28;
x_8 = x_29;
x_9 = x_30;
goto block_22;
}
else
{
obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_26);
x_31 = lean::cnstr_get(x_25, 0);
lean::inc(x_31);
x_32 = lean::cnstr_get(x_25, 2);
lean::inc(x_32);
x_33 = lean::cnstr_get(x_25, 3);
lean::inc(x_33);
x_6 = x_25;
x_7 = x_31;
x_8 = x_32;
x_9 = x_33;
goto block_22;
}
}
else
{
obj* x_34; obj* x_35; obj* x_36; 
lean::dec(x_24);
x_34 = lean::cnstr_get(x_23, 0);
lean::inc(x_34);
x_35 = lean::cnstr_get(x_23, 2);
lean::inc(x_35);
x_36 = lean::cnstr_get(x_23, 3);
lean::inc(x_36);
x_6 = x_23;
x_7 = x_34;
x_8 = x_35;
x_9 = x_36;
goto block_22;
}
block_22:
{
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; 
lean::dec(x_8);
lean::dec(x_7);
lean::dec(x_4);
x_10 = lean::cnstr_get(x_6, 3);
lean::inc(x_10);
if (lean::obj_tag(x_10) == 0)
{
obj* x_11; obj* x_12; obj* x_13; obj* x_14; obj* x_15; 
x_11 = l_Lean_Parser_termParserAttribute;
x_12 = lean::mk_nat_obj(0u);
x_13 = l_Lean_Parser_ParserAttribute_runParser(x_11, x_12, x_1, x_6);
x_14 = l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2;
x_15 = l_Lean_Parser_ParserState_mkNode(x_13, x_14, x_5);
return x_15;
}
else
{
obj* x_16; obj* x_17; 
lean::dec(x_10);
lean::dec(x_1);
x_16 = l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2;
x_17 = l_Lean_Parser_ParserState_mkNode(x_6, x_16, x_5);
return x_17;
}
}
else
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_6);
lean::dec(x_1);
x_18 = l_Array_shrink___main___rarg(x_7, x_5);
x_19 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_19, 0, x_18);
lean::cnstr_set(x_19, 1, x_4);
lean::cnstr_set(x_19, 2, x_8);
lean::cnstr_set(x_19, 3, x_9);
x_20 = l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_5);
return x_21;
}
}
}
}
obj* l_Lean_Parser_Term_doId___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doId___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doId___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_optType;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_leftArrow;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_andthenInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_doId___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_doId___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doId___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doId___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doId___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_doId___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doId___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doId___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doId___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doId___closed__4;
x_2 = l_Lean_Parser_Term_doId___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doId() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_doId___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_doId___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_doId___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("doPat");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_doPat___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_64; obj* x_65; obj* x_66; obj* x_67; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_2, 1);
lean::inc(x_4);
x_5 = lean::array_get_size(x_3);
lean::dec(x_3);
x_64 = l_Lean_Parser_termParserAttribute;
x_65 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_66 = l_Lean_Parser_ParserAttribute_runParser(x_64, x_65, x_1, x_2);
x_67 = lean::cnstr_get(x_66, 3);
lean::inc(x_67);
if (lean::obj_tag(x_67) == 0)
{
obj* x_68; obj* x_69; 
lean::inc(x_1);
x_68 = l_Lean_Parser_Term_leftArrow___elambda__1___rarg(x_1, x_66);
x_69 = lean::cnstr_get(x_68, 3);
lean::inc(x_69);
if (lean::obj_tag(x_69) == 0)
{
lean::dec(x_4);
x_6 = x_68;
goto block_63;
}
else
{
uint8 x_70; 
x_70 = !lean::is_exclusive(x_68);
if (x_70 == 0)
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; 
x_71 = lean::cnstr_get(x_68, 0);
x_72 = lean::cnstr_get(x_68, 3);
lean::dec(x_72);
x_73 = lean::cnstr_get(x_68, 1);
lean::dec(x_73);
x_74 = l_Array_shrink___main___rarg(x_71, x_5);
lean::cnstr_set(x_68, 1, x_4);
lean::cnstr_set(x_68, 0, x_74);
x_6 = x_68;
goto block_63;
}
else
{
obj* x_75; obj* x_76; obj* x_77; obj* x_78; 
x_75 = lean::cnstr_get(x_68, 0);
x_76 = lean::cnstr_get(x_68, 2);
lean::inc(x_76);
lean::inc(x_75);
lean::dec(x_68);
x_77 = l_Array_shrink___main___rarg(x_75, x_5);
x_78 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_78, 0, x_77);
lean::cnstr_set(x_78, 1, x_4);
lean::cnstr_set(x_78, 2, x_76);
lean::cnstr_set(x_78, 3, x_69);
x_6 = x_78;
goto block_63;
}
}
}
else
{
obj* x_79; 
lean::dec(x_67);
x_79 = lean::cnstr_get(x_66, 3);
lean::inc(x_79);
if (lean::obj_tag(x_79) == 0)
{
lean::dec(x_4);
x_6 = x_66;
goto block_63;
}
else
{
uint8 x_80; 
x_80 = !lean::is_exclusive(x_66);
if (x_80 == 0)
{
obj* x_81; obj* x_82; obj* x_83; obj* x_84; 
x_81 = lean::cnstr_get(x_66, 0);
x_82 = lean::cnstr_get(x_66, 3);
lean::dec(x_82);
x_83 = lean::cnstr_get(x_66, 1);
lean::dec(x_83);
x_84 = l_Array_shrink___main___rarg(x_81, x_5);
lean::cnstr_set(x_66, 1, x_4);
lean::cnstr_set(x_66, 0, x_84);
x_6 = x_66;
goto block_63;
}
else
{
obj* x_85; obj* x_86; obj* x_87; obj* x_88; 
x_85 = lean::cnstr_get(x_66, 0);
x_86 = lean::cnstr_get(x_66, 2);
lean::inc(x_86);
lean::inc(x_85);
lean::dec(x_66);
x_87 = l_Array_shrink___main___rarg(x_85, x_5);
x_88 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_88, 0, x_87);
lean::cnstr_set(x_88, 1, x_4);
lean::cnstr_set(x_88, 2, x_86);
lean::cnstr_set(x_88, 3, x_79);
x_6 = x_88;
goto block_63;
}
}
}
block_63:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = l_Lean_Parser_termParserAttribute;
x_9 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_10 = l_Lean_Parser_ParserAttribute_runParser(x_8, x_9, x_1, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_46; obj* x_47; 
x_12 = lean::cnstr_get(x_10, 0);
lean::inc(x_12);
x_13 = lean::array_get_size(x_12);
lean::dec(x_12);
x_14 = lean::cnstr_get(x_10, 1);
lean::inc(x_14);
lean::inc(x_1);
x_46 = l_Lean_Parser_tokenFn(x_1, x_10);
x_47 = lean::cnstr_get(x_46, 3);
lean::inc(x_47);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; obj* x_49; 
x_48 = lean::cnstr_get(x_46, 0);
lean::inc(x_48);
x_49 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_48);
lean::dec(x_48);
if (lean::obj_tag(x_49) == 2)
{
obj* x_50; obj* x_51; uint8 x_52; 
x_50 = lean::cnstr_get(x_49, 1);
lean::inc(x_50);
lean::dec(x_49);
x_51 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__4;
x_52 = lean::string_dec_eq(x_50, x_51);
lean::dec(x_50);
if (x_52 == 0)
{
obj* x_53; obj* x_54; 
x_53 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
lean::inc(x_14);
x_54 = l_Lean_Parser_ParserState_mkErrorsAt(x_46, x_53, x_14);
x_15 = x_54;
goto block_45;
}
else
{
x_15 = x_46;
goto block_45;
}
}
else
{
obj* x_55; obj* x_56; 
lean::dec(x_49);
x_55 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
lean::inc(x_14);
x_56 = l_Lean_Parser_ParserState_mkErrorsAt(x_46, x_55, x_14);
x_15 = x_56;
goto block_45;
}
}
else
{
obj* x_57; obj* x_58; 
lean::dec(x_47);
x_57 = l_Lean_Parser_Term_matchAlt___elambda__1___closed__8;
lean::inc(x_14);
x_58 = l_Lean_Parser_ParserState_mkErrorsAt(x_46, x_57, x_14);
x_15 = x_58;
goto block_45;
}
block_45:
{
obj* x_16; 
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; 
x_17 = l_Lean_Parser_ParserAttribute_runParser(x_8, x_9, x_1, x_15);
x_18 = lean::cnstr_get(x_17, 3);
lean::inc(x_18);
if (lean::obj_tag(x_18) == 0)
{
obj* x_19; obj* x_20; obj* x_21; obj* x_22; 
lean::dec(x_14);
x_19 = l_Lean_nullKind;
x_20 = l_Lean_Parser_ParserState_mkNode(x_17, x_19, x_13);
x_21 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_22 = l_Lean_Parser_ParserState_mkNode(x_20, x_21, x_5);
return x_22;
}
else
{
obj* x_23; uint8 x_24; 
lean::dec(x_18);
x_23 = lean::cnstr_get(x_17, 1);
lean::inc(x_23);
x_24 = lean::nat_dec_eq(x_23, x_14);
lean::dec(x_23);
if (x_24 == 0)
{
obj* x_25; obj* x_26; obj* x_27; obj* x_28; 
lean::dec(x_14);
x_25 = l_Lean_nullKind;
x_26 = l_Lean_Parser_ParserState_mkNode(x_17, x_25, x_13);
x_27 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_28 = l_Lean_Parser_ParserState_mkNode(x_26, x_27, x_5);
return x_28;
}
else
{
obj* x_29; obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
x_29 = l_Lean_Parser_ParserState_restore(x_17, x_13, x_14);
x_30 = l_Lean_nullKind;
x_31 = l_Lean_Parser_ParserState_mkNode(x_29, x_30, x_13);
x_32 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_5);
return x_33;
}
}
}
else
{
obj* x_34; uint8 x_35; 
lean::dec(x_16);
lean::dec(x_1);
x_34 = lean::cnstr_get(x_15, 1);
lean::inc(x_34);
x_35 = lean::nat_dec_eq(x_34, x_14);
lean::dec(x_34);
if (x_35 == 0)
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_14);
x_36 = l_Lean_nullKind;
x_37 = l_Lean_Parser_ParserState_mkNode(x_15, x_36, x_13);
x_38 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_39 = l_Lean_Parser_ParserState_mkNode(x_37, x_38, x_5);
return x_39;
}
else
{
obj* x_40; obj* x_41; obj* x_42; obj* x_43; obj* x_44; 
x_40 = l_Lean_Parser_ParserState_restore(x_15, x_13, x_14);
x_41 = l_Lean_nullKind;
x_42 = l_Lean_Parser_ParserState_mkNode(x_40, x_41, x_13);
x_43 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_44 = l_Lean_Parser_ParserState_mkNode(x_42, x_43, x_5);
return x_44;
}
}
}
}
else
{
obj* x_59; obj* x_60; 
lean::dec(x_11);
lean::dec(x_1);
x_59 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_60 = l_Lean_Parser_ParserState_mkNode(x_10, x_59, x_5);
return x_60;
}
}
else
{
obj* x_61; obj* x_62; 
lean::dec(x_7);
lean::dec(x_1);
x_61 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_62 = l_Lean_Parser_ParserState_mkNode(x_6, x_61, x_5);
return x_62;
}
}
}
}
obj* l_Lean_Parser_Term_doPat___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doPat___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_leftArrow;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_andthenInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_matchAlt___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_doPat___closed__2;
x_2 = l_Lean_Parser_optionaInfo(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Parser_inhabited___closed__1;
x_2 = l_Lean_Parser_Term_doPat___closed__3;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doPat___closed__1;
x_2 = l_Lean_Parser_Term_doPat___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_doPat___closed__5;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__7() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doPat___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doPat___closed__8() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doPat___closed__6;
x_2 = l_Lean_Parser_Term_doPat___closed__7;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doPat() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_doPat___closed__8;
return x_1;
}
}
obj* l_Lean_Parser_Term_doPat___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_doPat___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("doExpr");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_doExpr___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_5 = l_Lean_Parser_termParserAttribute;
x_6 = lean::mk_nat_obj(0u);
x_7 = l_Lean_Parser_ParserAttribute_runParser(x_5, x_6, x_1, x_2);
x_8 = l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2;
x_9 = l_Lean_Parser_ParserState_mkNode(x_7, x_8, x_4);
return x_9;
}
}
obj* l_Lean_Parser_Term_doExpr___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doExpr___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_doExpr___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doExpr___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doExpr___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doExpr___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doExpr___closed__1;
x_2 = l_Lean_Parser_Term_doExpr___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doExpr() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_doExpr___closed__3;
return x_1;
}
}
obj* l_Lean_Parser_Term_doExpr___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_doExpr___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_doElem___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_6 = lean::cnstr_get(x_3, 1);
lean::inc(x_6);
lean::inc(x_2);
x_7 = l_Lean_Parser_Term_doLet___elambda__1(x_1, x_2, x_3);
x_8 = lean::cnstr_get(x_7, 3);
lean::inc(x_8);
if (lean::obj_tag(x_8) == 0)
{
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_2);
return x_7;
}
else
{
obj* x_9; obj* x_10; uint8 x_11; 
x_9 = lean::cnstr_get(x_8, 0);
lean::inc(x_9);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
x_11 = lean::nat_dec_eq(x_10, x_6);
lean::dec(x_10);
if (x_11 == 0)
{
lean::dec(x_9);
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_2);
return x_7;
}
else
{
obj* x_12; obj* x_13; obj* x_14; obj* x_15; obj* x_16; 
lean::inc(x_6);
x_12 = l_Lean_Parser_ParserState_restore(x_7, x_5, x_6);
lean::dec(x_5);
x_13 = lean::cnstr_get(x_12, 0);
lean::inc(x_13);
x_14 = lean::array_get_size(x_13);
lean::dec(x_13);
lean::inc(x_2);
x_15 = l_Lean_Parser_Term_doId___elambda__1___rarg(x_2, x_12);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; 
lean::dec(x_14);
lean::dec(x_2);
x_17 = l_Lean_Parser_mergeOrElseErrors(x_15, x_9, x_6);
lean::dec(x_6);
return x_17;
}
else
{
obj* x_18; obj* x_19; uint8 x_20; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
lean::dec(x_16);
x_19 = lean::cnstr_get(x_15, 1);
lean::inc(x_19);
x_20 = lean::nat_dec_eq(x_19, x_6);
lean::dec(x_19);
if (x_20 == 0)
{
obj* x_21; 
lean::dec(x_18);
lean::dec(x_14);
lean::dec(x_2);
x_21 = l_Lean_Parser_mergeOrElseErrors(x_15, x_9, x_6);
lean::dec(x_6);
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::inc(x_6);
x_22 = l_Lean_Parser_ParserState_restore(x_15, x_14, x_6);
lean::dec(x_14);
x_23 = lean::cnstr_get(x_22, 0);
lean::inc(x_23);
x_24 = lean::array_get_size(x_23);
lean::dec(x_23);
lean::inc(x_2);
x_25 = l_Lean_Parser_Term_doPat___elambda__1___rarg(x_2, x_22);
x_26 = lean::cnstr_get(x_25, 3);
lean::inc(x_26);
if (lean::obj_tag(x_26) == 0)
{
obj* x_27; obj* x_28; 
lean::dec(x_24);
lean::dec(x_2);
x_27 = l_Lean_Parser_mergeOrElseErrors(x_25, x_18, x_6);
x_28 = l_Lean_Parser_mergeOrElseErrors(x_27, x_9, x_6);
lean::dec(x_6);
return x_28;
}
else
{
obj* x_29; obj* x_30; uint8 x_31; 
x_29 = lean::cnstr_get(x_26, 0);
lean::inc(x_29);
lean::dec(x_26);
x_30 = lean::cnstr_get(x_25, 1);
lean::inc(x_30);
x_31 = lean::nat_dec_eq(x_30, x_6);
lean::dec(x_30);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
lean::dec(x_29);
lean::dec(x_24);
lean::dec(x_2);
x_32 = l_Lean_Parser_mergeOrElseErrors(x_25, x_18, x_6);
x_33 = l_Lean_Parser_mergeOrElseErrors(x_32, x_9, x_6);
lean::dec(x_6);
return x_33;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; 
lean::inc(x_6);
x_34 = l_Lean_Parser_ParserState_restore(x_25, x_24, x_6);
lean::dec(x_24);
x_35 = l_Lean_Parser_Term_doExpr___elambda__1___rarg(x_2, x_34);
x_36 = l_Lean_Parser_mergeOrElseErrors(x_35, x_29, x_6);
x_37 = l_Lean_Parser_mergeOrElseErrors(x_36, x_18, x_6);
x_38 = l_Lean_Parser_mergeOrElseErrors(x_37, x_9, x_6);
lean::dec(x_6);
return x_38;
}
}
}
}
}
}
}
}
obj* _init_l_Lean_Parser_Term_doElem___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_doPat;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_doExpr;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_doElem___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_doId;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_doElem___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_doElem___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_doLet;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_doElem___closed__2;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_doElem___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doElem___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doElem___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doElem___closed__3;
x_2 = l_Lean_Parser_Term_doElem___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doElem() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_doElem___closed__5;
return x_1;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_doSeq___elambda__1___spec__2(uint8 x_1, uint8 x_2, obj* x_3, uint8 x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_7, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_7, 1);
lean::inc(x_10);
lean::inc(x_6);
lean::inc(x_5);
x_11 = l_Lean_Parser_Term_doElem___elambda__1(x_5, x_6, x_7);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; obj* x_15; obj* x_16; obj* x_23; obj* x_24; 
lean::dec(x_10);
lean::dec(x_9);
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
x_14 = lean::array_get_size(x_13);
lean::dec(x_13);
x_15 = lean::cnstr_get(x_11, 1);
lean::inc(x_15);
lean::inc(x_6);
x_23 = l_Lean_Parser_tokenFn(x_6, x_11);
x_24 = lean::cnstr_get(x_23, 3);
lean::inc(x_24);
if (lean::obj_tag(x_24) == 0)
{
obj* x_25; obj* x_26; 
x_25 = lean::cnstr_get(x_23, 0);
lean::inc(x_25);
x_26 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_25);
lean::dec(x_25);
if (lean::obj_tag(x_26) == 2)
{
obj* x_27; obj* x_28; uint8 x_29; 
x_27 = lean::cnstr_get(x_26, 1);
lean::inc(x_27);
lean::dec(x_26);
x_28 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__5;
x_29 = lean::string_dec_eq(x_27, x_28);
lean::dec(x_27);
if (x_29 == 0)
{
obj* x_30; obj* x_31; 
x_30 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
lean::inc(x_15);
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_23, x_30, x_15);
x_16 = x_31;
goto block_22;
}
else
{
x_16 = x_23;
goto block_22;
}
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_26);
x_32 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
lean::inc(x_15);
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_23, x_32, x_15);
x_16 = x_33;
goto block_22;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_24);
x_34 = l_Lean_Parser_Term_have___elambda__1___rarg___closed__8;
lean::inc(x_15);
x_35 = l_Lean_Parser_ParserState_mkErrorsAt(x_23, x_34, x_15);
x_16 = x_35;
goto block_22;
}
block_22:
{
obj* x_17; 
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
lean::dec(x_15);
lean::dec(x_14);
{
uint8 _tmp_3 = x_2;
obj* _tmp_6 = x_16;
x_4 = _tmp_3;
x_7 = _tmp_6;
}
goto _start;
}
else
{
obj* x_19; obj* x_20; obj* x_21; 
lean::dec(x_17);
lean::dec(x_6);
lean::dec(x_5);
x_19 = l_Lean_Parser_ParserState_restore(x_16, x_14, x_15);
lean::dec(x_14);
x_20 = l_Lean_nullKind;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_3);
return x_21;
}
}
}
else
{
lean::dec(x_12);
lean::dec(x_6);
lean::dec(x_5);
if (x_4 == 0)
{
obj* x_36; obj* x_37; obj* x_38; obj* x_39; 
lean::dec(x_10);
lean::dec(x_9);
x_36 = lean::box(0);
x_37 = l_Lean_Parser_ParserState_pushSyntax(x_11, x_36);
x_38 = l_Lean_nullKind;
x_39 = l_Lean_Parser_ParserState_mkNode(x_37, x_38, x_3);
return x_39;
}
else
{
obj* x_40; obj* x_41; obj* x_42; 
x_40 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
x_41 = l_Lean_nullKind;
x_42 = l_Lean_Parser_ParserState_mkNode(x_40, x_41, x_3);
return x_42;
}
}
}
}
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_doSeq___elambda__1___spec__1(uint8 x_1, uint8 x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
obj* x_6; obj* x_7; uint8 x_8; obj* x_9; 
x_6 = lean::cnstr_get(x_5, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = 0;
x_9 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_doSeq___elambda__1___spec__2(x_1, x_2, x_7, x_8, x_3, x_4, x_5);
return x_9;
}
}
obj* _init_l_Lean_Parser_Term_doSeq___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("doSeq");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doSeq___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doSeq___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_doSeq___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; uint8 x_6; uint8 x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_6 = 0;
x_7 = 0;
x_8 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_doSeq___elambda__1___spec__1(x_6, x_7, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_doSeq___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_5);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_doSeq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_doElem;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_have___closed__3;
x_4 = l_Lean_Parser_sepBy1Info(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_doSeq___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doSeq___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_doSeq___closed__1;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doSeq___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_doSeq___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_doSeq___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_doSeq___closed__2;
x_2 = l_Lean_Parser_Term_doSeq___closed__3;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_doSeq() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_doSeq___closed__4;
return x_1;
}
}
obj* l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_doSeq___elambda__1___spec__2___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5, obj* x_6, obj* x_7) {
_start:
{
uint8 x_8; uint8 x_9; uint8 x_10; obj* x_11; 
x_8 = lean::unbox(x_1);
lean::dec(x_1);
x_9 = lean::unbox(x_2);
lean::dec(x_2);
x_10 = lean::unbox(x_4);
lean::dec(x_4);
x_11 = l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_doSeq___elambda__1___spec__2(x_8, x_9, x_3, x_10, x_5, x_6, x_7);
return x_11;
}
}
obj* l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_doSeq___elambda__1___spec__1___boxed(obj* x_1, obj* x_2, obj* x_3, obj* x_4, obj* x_5) {
_start:
{
uint8 x_6; uint8 x_7; obj* x_8; 
x_6 = lean::unbox(x_1);
lean::dec(x_1);
x_7 = lean::unbox(x_2);
lean::dec(x_2);
x_8 = l_Lean_Parser_sepBy1Fn___at_Lean_Parser_Term_doSeq___elambda__1___spec__1(x_6, x_7, x_3, x_4, x_5);
return x_8;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("bracketedDoSeq");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_bracketedDoSeq___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_37; obj* x_38; obj* x_39; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_37 = lean::cnstr_get(x_3, 1);
lean::inc(x_37);
lean::inc(x_2);
x_38 = l_Lean_Parser_tokenFn(x_2, x_3);
x_39 = lean::cnstr_get(x_38, 3);
lean::inc(x_39);
if (lean::obj_tag(x_39) == 0)
{
obj* x_40; obj* x_41; 
x_40 = lean::cnstr_get(x_38, 0);
lean::inc(x_40);
x_41 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_40);
lean::dec(x_40);
if (lean::obj_tag(x_41) == 2)
{
obj* x_42; obj* x_43; uint8 x_44; 
x_42 = lean::cnstr_get(x_41, 1);
lean::inc(x_42);
lean::dec(x_41);
x_43 = l_Lean_Parser_Term_structInst___elambda__1___closed__4;
x_44 = lean::string_dec_eq(x_42, x_43);
lean::dec(x_42);
if (x_44 == 0)
{
obj* x_45; obj* x_46; 
x_45 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_46 = l_Lean_Parser_ParserState_mkErrorsAt(x_38, x_45, x_37);
x_6 = x_46;
goto block_36;
}
else
{
lean::dec(x_37);
x_6 = x_38;
goto block_36;
}
}
else
{
obj* x_47; obj* x_48; 
lean::dec(x_41);
x_47 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_48 = l_Lean_Parser_ParserState_mkErrorsAt(x_38, x_47, x_37);
x_6 = x_48;
goto block_36;
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_39);
x_49 = l_Lean_Parser_Term_structInst___elambda__1___closed__12;
x_50 = l_Lean_Parser_ParserState_mkErrorsAt(x_38, x_49, x_37);
x_6 = x_50;
goto block_36;
}
block_36:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; 
lean::inc(x_2);
x_8 = l_Lean_Parser_Term_doSeq___elambda__1(x_1, x_2, x_6);
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; 
x_10 = lean::cnstr_get(x_8, 1);
lean::inc(x_10);
x_11 = l_Lean_Parser_tokenFn(x_2, x_8);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
x_13 = lean::cnstr_get(x_11, 0);
lean::inc(x_13);
x_14 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_13);
lean::dec(x_13);
if (lean::obj_tag(x_14) == 2)
{
obj* x_15; obj* x_16; uint8 x_17; 
x_15 = lean::cnstr_get(x_14, 1);
lean::inc(x_15);
lean::dec(x_14);
x_16 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7;
x_17 = lean::string_dec_eq(x_15, x_16);
lean::dec(x_15);
if (x_17 == 0)
{
obj* x_18; obj* x_19; obj* x_20; obj* x_21; 
x_18 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_19 = l_Lean_Parser_ParserState_mkErrorsAt(x_11, x_18, x_10);
x_20 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_21 = l_Lean_Parser_ParserState_mkNode(x_19, x_20, x_5);
return x_21;
}
else
{
obj* x_22; obj* x_23; 
lean::dec(x_10);
x_22 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_11, x_22, x_5);
return x_23;
}
}
else
{
obj* x_24; obj* x_25; obj* x_26; obj* x_27; 
lean::dec(x_14);
x_24 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_25 = l_Lean_Parser_ParserState_mkErrorsAt(x_11, x_24, x_10);
x_26 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_27 = l_Lean_Parser_ParserState_mkNode(x_25, x_26, x_5);
return x_27;
}
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_12);
x_28 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_11, x_28, x_10);
x_30 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_31 = l_Lean_Parser_ParserState_mkNode(x_29, x_30, x_5);
return x_31;
}
}
else
{
obj* x_32; obj* x_33; 
lean::dec(x_9);
lean::dec(x_2);
x_32 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_8, x_32, x_5);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_7);
lean::dec(x_2);
lean::dec(x_1);
x_34 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_6, x_34, x_5);
return x_35;
}
}
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_doSeq;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_explicitUniv___closed__4;
x_4 = l_Lean_Parser_andthenInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subtype___closed__1;
x_2 = l_Lean_Parser_Term_bracketedDoSeq___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_bracketedDoSeq___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bracketedDoSeq___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bracketedDoSeq___closed__3;
x_2 = l_Lean_Parser_Term_bracketedDoSeq___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bracketedDoSeq() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_bracketedDoSeq___closed__5;
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("do");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_do___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("do ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_do___elambda__1___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_do___elambda__1___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_do___elambda__1___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do___elambda__1___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_do___elambda__1___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_do___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_28; obj* x_29; obj* x_30; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_28 = lean::cnstr_get(x_3, 1);
lean::inc(x_28);
lean::inc(x_2);
x_29 = l_Lean_Parser_tokenFn(x_2, x_3);
x_30 = lean::cnstr_get(x_29, 3);
lean::inc(x_30);
if (lean::obj_tag(x_30) == 0)
{
obj* x_31; obj* x_32; 
x_31 = lean::cnstr_get(x_29, 0);
lean::inc(x_31);
x_32 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_31);
lean::dec(x_31);
if (lean::obj_tag(x_32) == 2)
{
obj* x_33; obj* x_34; uint8 x_35; 
x_33 = lean::cnstr_get(x_32, 1);
lean::inc(x_33);
lean::dec(x_32);
x_34 = l_Lean_Parser_Term_do___elambda__1___closed__4;
x_35 = lean::string_dec_eq(x_33, x_34);
lean::dec(x_33);
if (x_35 == 0)
{
obj* x_36; obj* x_37; 
x_36 = l_Lean_Parser_Term_do___elambda__1___closed__7;
x_37 = l_Lean_Parser_ParserState_mkErrorsAt(x_29, x_36, x_28);
x_6 = x_37;
goto block_27;
}
else
{
lean::dec(x_28);
x_6 = x_29;
goto block_27;
}
}
else
{
obj* x_38; obj* x_39; 
lean::dec(x_32);
x_38 = l_Lean_Parser_Term_do___elambda__1___closed__7;
x_39 = l_Lean_Parser_ParserState_mkErrorsAt(x_29, x_38, x_28);
x_6 = x_39;
goto block_27;
}
}
else
{
obj* x_40; obj* x_41; 
lean::dec(x_30);
x_40 = l_Lean_Parser_Term_do___elambda__1___closed__7;
x_41 = l_Lean_Parser_ParserState_mkErrorsAt(x_29, x_40, x_28);
x_6 = x_41;
goto block_27;
}
block_27:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_6, 1);
lean::inc(x_10);
lean::inc(x_2);
lean::inc(x_1);
x_11 = l_Lean_Parser_Term_bracketedDoSeq___elambda__1(x_1, x_2, x_6);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_10);
lean::dec(x_9);
lean::dec(x_2);
lean::dec(x_1);
x_13 = l_Lean_Parser_Term_do___elambda__1___closed__2;
x_14 = l_Lean_Parser_ParserState_mkNode(x_11, x_13, x_5);
return x_14;
}
else
{
obj* x_15; obj* x_16; uint8 x_17; 
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_16 = lean::cnstr_get(x_11, 1);
lean::inc(x_16);
x_17 = lean::nat_dec_eq(x_16, x_10);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_18; obj* x_19; 
lean::dec(x_15);
lean::dec(x_10);
lean::dec(x_9);
lean::dec(x_2);
lean::dec(x_1);
x_18 = l_Lean_Parser_Term_do___elambda__1___closed__2;
x_19 = l_Lean_Parser_ParserState_mkNode(x_11, x_18, x_5);
return x_19;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; 
lean::inc(x_10);
x_20 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
x_21 = l_Lean_Parser_Term_doSeq___elambda__1(x_1, x_2, x_20);
x_22 = l_Lean_Parser_mergeOrElseErrors(x_21, x_15, x_10);
lean::dec(x_10);
x_23 = l_Lean_Parser_Term_do___elambda__1___closed__2;
x_24 = l_Lean_Parser_ParserState_mkNode(x_22, x_23, x_5);
return x_24;
}
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_7);
lean::dec(x_2);
lean::dec(x_1);
x_25 = l_Lean_Parser_Term_do___elambda__1___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_6, x_25, x_5);
return x_26;
}
}
}
}
obj* _init_l_Lean_Parser_Term_do___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_do___elambda__1___closed__4;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_1 = l_Lean_Parser_Term_bracketedDoSeq;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_doSeq;
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = l_Lean_Parser_orelseInfo(x_2, x_4);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_do___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_do___closed__1;
x_2 = l_Lean_Parser_Term_do___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_do___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_do___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_do___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_do___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_do___closed__4;
x_2 = l_Lean_Parser_Term_do___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_do() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_do___closed__6;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_do(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_do___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_do;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("not");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("¬");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_not___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(40u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_not___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_not___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_not___closed__1() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = lean::mk_nat_obj(40u);
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_not___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Term_not___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_not___closed__2;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_not___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_not___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_not___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_not___closed__4;
x_2 = l_Lean_Parser_Term_not___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_not() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_not___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_not___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_not___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_not(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_not___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_not;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("bnot");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("!");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__3;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__5;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__6;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_bnot___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(40u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_bnot___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bnot___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_bnot___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4;
x_2 = l_Lean_Parser_Term_not___closed__1;
x_3 = l_Lean_Parser_symbolInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bnot___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_bnot___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bnot___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bnot___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bnot___closed__3;
x_2 = l_Lean_Parser_Term_bnot___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bnot() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_bnot___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_bnot___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_bnot___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_bnot(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_bnot;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("uminus");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Int_repr___main___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__4;
x_2 = l_Char_HasRepr___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__5;
x_3 = lean::alloc_cnstr(1, 2, 0);
lean::cnstr_set(x_3, 0, x_2);
lean::cnstr_set(x_3, 1, x_1);
return x_3;
}
}
obj* l_Lean_Parser_Term_uminus___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_15; obj* x_16; obj* x_17; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::array_get_size(x_3);
lean::dec(x_3);
x_15 = lean::cnstr_get(x_2, 1);
lean::inc(x_15);
lean::inc(x_1);
x_16 = l_Lean_Parser_tokenFn(x_1, x_2);
x_17 = lean::cnstr_get(x_16, 3);
lean::inc(x_17);
if (lean::obj_tag(x_17) == 0)
{
obj* x_18; obj* x_19; 
x_18 = lean::cnstr_get(x_16, 0);
lean::inc(x_18);
x_19 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_18);
lean::dec(x_18);
if (lean::obj_tag(x_19) == 2)
{
obj* x_20; obj* x_21; uint8 x_22; 
x_20 = lean::cnstr_get(x_19, 1);
lean::inc(x_20);
lean::dec(x_19);
x_21 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3;
x_22 = lean::string_dec_eq(x_20, x_21);
lean::dec(x_20);
if (x_22 == 0)
{
obj* x_23; obj* x_24; 
x_23 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6;
x_24 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_23, x_15);
x_5 = x_24;
goto block_14;
}
else
{
lean::dec(x_15);
x_5 = x_16;
goto block_14;
}
}
else
{
obj* x_25; obj* x_26; 
lean::dec(x_19);
x_25 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6;
x_26 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_25, x_15);
x_5 = x_26;
goto block_14;
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_17);
x_27 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6;
x_28 = l_Lean_Parser_ParserState_mkErrorsAt(x_16, x_27, x_15);
x_5 = x_28;
goto block_14;
}
block_14:
{
obj* x_6; 
x_6 = lean::cnstr_get(x_5, 3);
lean::inc(x_6);
if (lean::obj_tag(x_6) == 0)
{
obj* x_7; obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_7 = l_Lean_Parser_termParserAttribute;
x_8 = lean::mk_nat_obj(100u);
x_9 = l_Lean_Parser_ParserAttribute_runParser(x_7, x_8, x_1, x_5);
x_10 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2;
x_11 = l_Lean_Parser_ParserState_mkNode(x_9, x_10, x_4);
return x_11;
}
else
{
obj* x_12; obj* x_13; 
lean::dec(x_6);
lean::dec(x_1);
x_12 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_5, x_12, x_4);
return x_13;
}
}
}
}
obj* l_Lean_Parser_Term_uminus___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_uminus___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_uminus___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = lean::box(0);
x_2 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3;
x_3 = l_Lean_Parser_symbolInfo(x_2, x_1);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_uminus___closed__1;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_uminus___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_uminus___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_uminus___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_uminus___closed__3;
x_2 = l_Lean_Parser_Term_uminus___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_uminus() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_uminus___closed__5;
return x_1;
}
}
obj* l_Lean_Parser_Term_uminus___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_uminus___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_uminus(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2;
x_4 = l_Lean_Parser_Term_uminus;
x_5 = l_Lean_Parser_addBuiltinLeadingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("namedArgument");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_namedArgument___elambda__1___rarg(obj* x_1, obj* x_2) {
_start:
{
obj* x_3; obj* x_4; obj* x_5; obj* x_6; obj* x_39; obj* x_40; obj* x_41; obj* x_42; obj* x_46; obj* x_83; obj* x_84; 
x_3 = lean::cnstr_get(x_2, 0);
lean::inc(x_3);
x_4 = lean::cnstr_get(x_2, 1);
lean::inc(x_4);
x_5 = lean::array_get_size(x_3);
lean::dec(x_3);
lean::inc(x_1);
x_83 = l_Lean_Parser_tokenFn(x_1, x_2);
x_84 = lean::cnstr_get(x_83, 3);
lean::inc(x_84);
if (lean::obj_tag(x_84) == 0)
{
obj* x_85; obj* x_86; 
x_85 = lean::cnstr_get(x_83, 0);
lean::inc(x_85);
x_86 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_85);
lean::dec(x_85);
if (lean::obj_tag(x_86) == 2)
{
obj* x_87; obj* x_88; uint8 x_89; 
x_87 = lean::cnstr_get(x_86, 1);
lean::inc(x_87);
lean::dec(x_86);
x_88 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__5;
x_89 = lean::string_dec_eq(x_87, x_88);
lean::dec(x_87);
if (x_89 == 0)
{
obj* x_90; obj* x_91; 
x_90 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
lean::inc(x_4);
x_91 = l_Lean_Parser_ParserState_mkErrorsAt(x_83, x_90, x_4);
x_46 = x_91;
goto block_82;
}
else
{
x_46 = x_83;
goto block_82;
}
}
else
{
obj* x_92; obj* x_93; 
lean::dec(x_86);
x_92 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
lean::inc(x_4);
x_93 = l_Lean_Parser_ParserState_mkErrorsAt(x_83, x_92, x_4);
x_46 = x_93;
goto block_82;
}
}
else
{
obj* x_94; obj* x_95; 
lean::dec(x_84);
x_94 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__12;
lean::inc(x_4);
x_95 = l_Lean_Parser_ParserState_mkErrorsAt(x_83, x_94, x_4);
x_46 = x_95;
goto block_82;
}
block_38:
{
obj* x_7; 
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; 
x_8 = l_Lean_Parser_termParserAttribute;
x_9 = lean::mk_nat_obj(0u);
lean::inc(x_1);
x_10 = l_Lean_Parser_ParserAttribute_runParser(x_8, x_9, x_1, x_6);
x_11 = lean::cnstr_get(x_10, 3);
lean::inc(x_11);
if (lean::obj_tag(x_11) == 0)
{
obj* x_12; obj* x_13; obj* x_14; 
x_12 = lean::cnstr_get(x_10, 1);
lean::inc(x_12);
x_13 = l_Lean_Parser_tokenFn(x_1, x_10);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; 
x_15 = lean::cnstr_get(x_13, 0);
lean::inc(x_15);
x_16 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_15);
lean::dec(x_15);
if (lean::obj_tag(x_16) == 2)
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_16, 1);
lean::inc(x_17);
lean::dec(x_16);
x_18 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__6;
x_19 = lean::string_dec_eq(x_17, x_18);
lean::dec(x_17);
if (x_19 == 0)
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; 
x_20 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_21 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_20, x_12);
x_22 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_23 = l_Lean_Parser_ParserState_mkNode(x_21, x_22, x_5);
return x_23;
}
else
{
obj* x_24; obj* x_25; 
lean::dec(x_12);
x_24 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_13, x_24, x_5);
return x_25;
}
}
else
{
obj* x_26; obj* x_27; obj* x_28; obj* x_29; 
lean::dec(x_16);
x_26 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_27 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_26, x_12);
x_28 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_29 = l_Lean_Parser_ParserState_mkNode(x_27, x_28, x_5);
return x_29;
}
}
else
{
obj* x_30; obj* x_31; obj* x_32; obj* x_33; 
lean::dec(x_14);
x_30 = l_Lean_Parser_Level_paren___elambda__1___rarg___closed__9;
x_31 = l_Lean_Parser_ParserState_mkErrorsAt(x_13, x_30, x_12);
x_32 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_33 = l_Lean_Parser_ParserState_mkNode(x_31, x_32, x_5);
return x_33;
}
}
else
{
obj* x_34; obj* x_35; 
lean::dec(x_11);
lean::dec(x_1);
x_34 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_10, x_34, x_5);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_7);
lean::dec(x_1);
x_36 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_6, x_36, x_5);
return x_37;
}
}
block_45:
{
if (lean::obj_tag(x_42) == 0)
{
lean::dec(x_41);
lean::dec(x_40);
lean::dec(x_4);
x_6 = x_39;
goto block_38;
}
else
{
obj* x_43; obj* x_44; 
lean::dec(x_39);
x_43 = l_Array_shrink___main___rarg(x_40, x_5);
x_44 = lean::alloc_cnstr(0, 4, 0);
lean::cnstr_set(x_44, 0, x_43);
lean::cnstr_set(x_44, 1, x_4);
lean::cnstr_set(x_44, 2, x_41);
lean::cnstr_set(x_44, 3, x_42);
x_6 = x_44;
goto block_38;
}
}
block_82:
{
obj* x_47; 
x_47 = lean::cnstr_get(x_46, 3);
lean::inc(x_47);
if (lean::obj_tag(x_47) == 0)
{
obj* x_48; obj* x_49; 
lean::inc(x_1);
x_48 = l_Lean_Parser_identFn___rarg(x_1, x_46);
x_49 = lean::cnstr_get(x_48, 3);
lean::inc(x_49);
if (lean::obj_tag(x_49) == 0)
{
obj* x_50; obj* x_51; obj* x_52; 
x_50 = lean::cnstr_get(x_48, 1);
lean::inc(x_50);
lean::inc(x_1);
x_51 = l_Lean_Parser_tokenFn(x_1, x_48);
x_52 = lean::cnstr_get(x_51, 3);
lean::inc(x_52);
if (lean::obj_tag(x_52) == 0)
{
obj* x_53; obj* x_54; 
x_53 = lean::cnstr_get(x_51, 0);
lean::inc(x_53);
x_54 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_53);
lean::dec(x_53);
if (lean::obj_tag(x_54) == 2)
{
obj* x_55; obj* x_56; uint8 x_57; 
x_55 = lean::cnstr_get(x_54, 1);
lean::inc(x_55);
lean::dec(x_54);
x_56 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3;
x_57 = lean::string_dec_eq(x_55, x_56);
lean::dec(x_55);
if (x_57 == 0)
{
obj* x_58; obj* x_59; obj* x_60; obj* x_61; obj* x_62; 
x_58 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_59 = l_Lean_Parser_ParserState_mkErrorsAt(x_51, x_58, x_50);
x_60 = lean::cnstr_get(x_59, 0);
lean::inc(x_60);
x_61 = lean::cnstr_get(x_59, 2);
lean::inc(x_61);
x_62 = lean::cnstr_get(x_59, 3);
lean::inc(x_62);
x_39 = x_59;
x_40 = x_60;
x_41 = x_61;
x_42 = x_62;
goto block_45;
}
else
{
obj* x_63; obj* x_64; obj* x_65; 
lean::dec(x_50);
x_63 = lean::cnstr_get(x_51, 0);
lean::inc(x_63);
x_64 = lean::cnstr_get(x_51, 2);
lean::inc(x_64);
x_65 = lean::cnstr_get(x_51, 3);
lean::inc(x_65);
x_39 = x_51;
x_40 = x_63;
x_41 = x_64;
x_42 = x_65;
goto block_45;
}
}
else
{
obj* x_66; obj* x_67; obj* x_68; obj* x_69; obj* x_70; 
lean::dec(x_54);
x_66 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_67 = l_Lean_Parser_ParserState_mkErrorsAt(x_51, x_66, x_50);
x_68 = lean::cnstr_get(x_67, 0);
lean::inc(x_68);
x_69 = lean::cnstr_get(x_67, 2);
lean::inc(x_69);
x_70 = lean::cnstr_get(x_67, 3);
lean::inc(x_70);
x_39 = x_67;
x_40 = x_68;
x_41 = x_69;
x_42 = x_70;
goto block_45;
}
}
else
{
obj* x_71; obj* x_72; obj* x_73; obj* x_74; obj* x_75; 
lean::dec(x_52);
x_71 = l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6;
x_72 = l_Lean_Parser_ParserState_mkErrorsAt(x_51, x_71, x_50);
x_73 = lean::cnstr_get(x_72, 0);
lean::inc(x_73);
x_74 = lean::cnstr_get(x_72, 2);
lean::inc(x_74);
x_75 = lean::cnstr_get(x_72, 3);
lean::inc(x_75);
x_39 = x_72;
x_40 = x_73;
x_41 = x_74;
x_42 = x_75;
goto block_45;
}
}
else
{
obj* x_76; obj* x_77; obj* x_78; 
lean::dec(x_49);
x_76 = lean::cnstr_get(x_48, 0);
lean::inc(x_76);
x_77 = lean::cnstr_get(x_48, 2);
lean::inc(x_77);
x_78 = lean::cnstr_get(x_48, 3);
lean::inc(x_78);
x_39 = x_48;
x_40 = x_76;
x_41 = x_77;
x_42 = x_78;
goto block_45;
}
}
else
{
obj* x_79; obj* x_80; obj* x_81; 
lean::dec(x_47);
x_79 = lean::cnstr_get(x_46, 0);
lean::inc(x_79);
x_80 = lean::cnstr_get(x_46, 2);
lean::inc(x_80);
x_81 = lean::cnstr_get(x_46, 3);
lean::inc(x_81);
x_39 = x_46;
x_40 = x_79;
x_41 = x_80;
x_42 = x_81;
goto block_45;
}
}
}
}
obj* l_Lean_Parser_Term_namedArgument___elambda__1(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_namedArgument___elambda__1___rarg), 2, 0);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_ident___closed__1;
x_2 = l_Lean_Parser_Term_haveAssign___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitBinder___closed__1;
x_2 = l_Lean_Parser_Term_namedArgument___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedArgument___closed__2;
x_2 = l_Lean_Parser_Level_paren___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2;
x_2 = l_Lean_Parser_Term_namedArgument___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_namedArgument___elambda__1___boxed), 1, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_namedArgument___closed__4;
x_2 = l_Lean_Parser_Term_namedArgument___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_namedArgument() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_namedArgument___closed__6;
return x_1;
}
}
obj* l_Lean_Parser_Term_namedArgument___elambda__1___boxed(obj* x_1) {
_start:
{
obj* x_2; 
x_2 = l_Lean_Parser_Term_namedArgument___elambda__1(x_1);
lean::dec(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_app___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("app");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_app___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_app___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_app___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_3);
x_6 = l_Lean_Parser_ParserState_pushSyntax(x_3, x_1);
x_7 = lean::cnstr_get(x_3, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; 
x_8 = lean::cnstr_get(x_6, 0);
lean::inc(x_8);
x_9 = lean::array_get_size(x_8);
lean::dec(x_8);
x_10 = lean::cnstr_get(x_3, 1);
lean::inc(x_10);
lean::dec(x_3);
lean::inc(x_2);
x_11 = l_Lean_Parser_Term_namedArgument___elambda__1___rarg(x_2, x_6);
x_12 = lean::cnstr_get(x_11, 3);
lean::inc(x_12);
if (lean::obj_tag(x_12) == 0)
{
obj* x_13; obj* x_14; 
lean::dec(x_10);
lean::dec(x_9);
lean::dec(x_2);
x_13 = l_Lean_Parser_Term_app___elambda__1___closed__2;
x_14 = l_Lean_Parser_ParserState_mkNode(x_11, x_13, x_5);
return x_14;
}
else
{
obj* x_15; obj* x_16; uint8 x_17; 
x_15 = lean::cnstr_get(x_12, 0);
lean::inc(x_15);
lean::dec(x_12);
x_16 = lean::cnstr_get(x_11, 1);
lean::inc(x_16);
x_17 = lean::nat_dec_eq(x_16, x_10);
lean::dec(x_16);
if (x_17 == 0)
{
obj* x_18; obj* x_19; 
lean::dec(x_15);
lean::dec(x_10);
lean::dec(x_9);
lean::dec(x_2);
x_18 = l_Lean_Parser_Term_app___elambda__1___closed__2;
x_19 = l_Lean_Parser_ParserState_mkNode(x_11, x_18, x_5);
return x_19;
}
else
{
obj* x_20; obj* x_21; obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::inc(x_10);
x_20 = l_Lean_Parser_ParserState_restore(x_11, x_9, x_10);
lean::dec(x_9);
x_21 = l_Lean_Parser_termParserAttribute;
x_22 = l_Lean_Parser_appPrec;
x_23 = l_Lean_Parser_ParserAttribute_runParser(x_21, x_22, x_2, x_20);
x_24 = l_Lean_Parser_mergeOrElseErrors(x_23, x_15, x_10);
lean::dec(x_10);
x_25 = l_Lean_Parser_Term_app___elambda__1___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_5);
return x_26;
}
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_7);
lean::dec(x_3);
lean::dec(x_2);
x_27 = l_Lean_Parser_Term_app___elambda__1___closed__2;
x_28 = l_Lean_Parser_ParserState_mkNode(x_6, x_27, x_5);
return x_28;
}
}
}
obj* _init_l_Lean_Parser_Term_app___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_namedArgument;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Parser_inhabited___closed__1;
x_4 = l_Lean_Parser_orelseInfo(x_2, x_3);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_app___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_app___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_app___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_app___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_app___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_app___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_app___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_app___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_app___closed__3;
x_2 = l_Lean_Parser_Term_app___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_app() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_app___closed__5;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_app(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_app___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_app;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* l_Lean_Parser_Term_checkIsSort___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; uint8 x_5; 
x_4 = l_Lean_Parser_Term_type___elambda__1___rarg___closed__2;
x_5 = l_Lean_Syntax_isOfKind___rarg(x_1, x_4);
if (x_5 == 0)
{
obj* x_6; uint8 x_7; 
x_6 = l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2;
x_7 = l_Lean_Syntax_isOfKind___rarg(x_1, x_6);
if (x_7 == 0)
{
obj* x_8; obj* x_9; 
x_8 = l_Lean_Parser_checkLeadingFn___closed__1;
x_9 = l_Lean_Parser_ParserState_mkUnexpectedError(x_3, x_8);
return x_9;
}
else
{
return x_3;
}
}
else
{
return x_3;
}
}
}
obj* _init_l_Lean_Parser_Term_checkIsSort___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_checkIsSort___elambda__1___boxed), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_checkIsSort___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_checkIsSort___closed__1;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_checkIsSort() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_checkIsSort___closed__2;
return x_1;
}
}
obj* l_Lean_Parser_Term_checkIsSort___elambda__1___boxed(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; 
x_4 = l_Lean_Parser_Term_checkIsSort___elambda__1(x_1, x_2, x_3);
lean::dec(x_2);
lean::dec(x_1);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_sortApp___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("sortApp");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sortApp___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_sortApp___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_sortApp___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::array_get_size(x_4);
lean::dec(x_4);
x_6 = l_Lean_Parser_Term_checkIsSort___elambda__1(x_1, x_2, x_3);
x_7 = lean::cnstr_get(x_6, 3);
lean::inc(x_7);
if (lean::obj_tag(x_7) == 0)
{
obj* x_8; obj* x_9; obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_8 = l_Lean_Parser_ParserState_pushSyntax(x_6, x_1);
x_9 = l_Lean_Parser_levelParserAttribute;
x_10 = l_Lean_Parser_appPrec;
x_11 = l_Lean_Parser_ParserAttribute_runParser(x_9, x_10, x_2, x_8);
x_12 = l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
x_13 = l_Lean_Parser_ParserState_mkNode(x_11, x_12, x_5);
return x_13;
}
else
{
obj* x_14; obj* x_15; 
lean::dec(x_7);
lean::dec(x_2);
lean::dec(x_1);
x_14 = l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
x_15 = l_Lean_Parser_ParserState_mkNode(x_6, x_14, x_5);
return x_15;
}
}
}
obj* _init_l_Lean_Parser_Term_sortApp___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Parser_inhabited___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sortApp___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_sortApp___closed__1;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sortApp___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_sortApp___closed__2;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sortApp___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_sortApp___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sortApp___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sortApp___closed__3;
x_2 = l_Lean_Parser_Term_sortApp___closed__4;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sortApp() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_sortApp___closed__5;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_sortApp(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_sortApp___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_sortApp;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_proj___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("proj");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_proj___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_proj___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___elambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_System_FilePath_dirName___closed__1;
x_2 = l_String_trim(x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_proj___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Char_HasRepr___closed__1;
x_2 = l_Lean_Parser_Term_proj___elambda__1___closed__3;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_proj___elambda__1___closed__4;
x_2 = l_Lean_Parser_symbolNoWsFn___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___elambda__1___closed__6() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_proj___elambda__1___closed__3;
x_2 = lean::string_utf8_byte_size(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_proj___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_30; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 3);
lean::inc(x_6);
x_7 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_1);
x_30 = l_Lean_Parser_ParserState_pushSyntax(x_3, x_1);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_31; 
x_31 = l_Lean_Parser_checkTailNoWs(x_1);
lean::dec(x_1);
if (x_31 == 0)
{
obj* x_32; obj* x_33; 
lean::dec(x_5);
x_32 = l_Lean_Parser_Term_proj___elambda__1___closed__5;
x_33 = l_Lean_Parser_ParserState_mkError(x_30, x_32);
x_8 = x_33;
goto block_29;
}
else
{
obj* x_34; obj* x_35; obj* x_36; obj* x_37; obj* x_38; obj* x_39; obj* x_40; 
x_34 = lean::cnstr_get(x_2, 0);
lean::inc(x_34);
x_35 = lean::cnstr_get(x_34, 0);
lean::inc(x_35);
lean::dec(x_34);
x_36 = l_Lean_Parser_Term_proj___elambda__1___closed__3;
x_37 = l_Lean_Parser_Term_proj___elambda__1___closed__5;
x_38 = lean::mk_nat_obj(0u);
x_39 = l_Lean_Parser_strAux___main(x_36, x_37, x_38, x_2, x_30);
x_40 = lean::cnstr_get(x_39, 3);
lean::inc(x_40);
if (lean::obj_tag(x_40) == 0)
{
obj* x_41; obj* x_42; obj* x_43; obj* x_44; obj* x_45; obj* x_46; obj* x_47; obj* x_48; 
lean::inc(x_5, 2);
lean::inc(x_35);
x_41 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_41, 0, x_35);
lean::cnstr_set(x_41, 1, x_5);
lean::cnstr_set(x_41, 2, x_5);
x_42 = l_Lean_Parser_Term_proj___elambda__1___closed__6;
x_43 = lean::nat_add(x_5, x_42);
lean::inc(x_43);
x_44 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_44, 0, x_35);
lean::cnstr_set(x_44, 1, x_43);
lean::cnstr_set(x_44, 2, x_43);
x_45 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_45, 0, x_41);
lean::cnstr_set(x_45, 1, x_5);
lean::cnstr_set(x_45, 2, x_44);
x_46 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_46, 0, x_45);
x_47 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_47, 0, x_46);
lean::cnstr_set(x_47, 1, x_36);
x_48 = l_Lean_Parser_ParserState_pushSyntax(x_39, x_47);
x_8 = x_48;
goto block_29;
}
else
{
lean::dec(x_40);
lean::dec(x_35);
lean::dec(x_5);
x_8 = x_39;
goto block_29;
}
}
}
else
{
obj* x_49; obj* x_50; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
x_49 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_50 = l_Lean_Parser_ParserState_mkNode(x_30, x_49, x_7);
return x_50;
}
block_29:
{
obj* x_9; 
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; obj* x_14; 
x_10 = lean::cnstr_get(x_8, 0);
lean::inc(x_10);
x_11 = lean::array_get_size(x_10);
lean::dec(x_10);
x_12 = lean::cnstr_get(x_8, 1);
lean::inc(x_12);
x_13 = l_Lean_Parser_fieldIdxFn(x_2, x_8);
x_14 = lean::cnstr_get(x_13, 3);
lean::inc(x_14);
if (lean::obj_tag(x_14) == 0)
{
obj* x_15; obj* x_16; 
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_2);
x_15 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_16 = l_Lean_Parser_ParserState_mkNode(x_13, x_15, x_7);
return x_16;
}
else
{
obj* x_17; obj* x_18; uint8 x_19; 
x_17 = lean::cnstr_get(x_14, 0);
lean::inc(x_17);
lean::dec(x_14);
x_18 = lean::cnstr_get(x_13, 1);
lean::inc(x_18);
x_19 = lean::nat_dec_eq(x_18, x_12);
lean::dec(x_18);
if (x_19 == 0)
{
obj* x_20; obj* x_21; 
lean::dec(x_17);
lean::dec(x_12);
lean::dec(x_11);
lean::dec(x_2);
x_20 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_21 = l_Lean_Parser_ParserState_mkNode(x_13, x_20, x_7);
return x_21;
}
else
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; obj* x_26; 
lean::inc(x_12);
x_22 = l_Lean_Parser_ParserState_restore(x_13, x_11, x_12);
lean::dec(x_11);
x_23 = l_Lean_Parser_identFn___rarg(x_2, x_22);
x_24 = l_Lean_Parser_mergeOrElseErrors(x_23, x_17, x_12);
lean::dec(x_12);
x_25 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_26 = l_Lean_Parser_ParserState_mkNode(x_24, x_25, x_7);
return x_26;
}
}
}
else
{
obj* x_27; obj* x_28; 
lean::dec(x_9);
lean::dec(x_2);
x_27 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_28 = l_Lean_Parser_ParserState_mkNode(x_8, x_27, x_7);
return x_28;
}
}
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_appPrec;
x_2 = lean::mk_nat_obj(1u);
x_3 = lean::nat_add(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__2() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_proj___closed__1;
x_2 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_2, 0, x_1);
return x_2;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_proj___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_proj___closed__2;
x_3 = l_Lean_Parser_symbolNoWsInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_fieldIdx___closed__1;
x_2 = l_Lean_Parser_ident___closed__1;
x_3 = l_Lean_Parser_orelseInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_proj___closed__3;
x_2 = l_Lean_Parser_Term_proj___closed__4;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_proj___closed__5;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__7() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_proj___closed__6;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__8() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_proj___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_proj___closed__9() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_proj___closed__7;
x_2 = l_Lean_Parser_Term_proj___closed__8;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_proj() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_proj___closed__9;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_proj(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_proj___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_proj;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_arrow___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("arrow");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_arrow___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_arrow___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_arrow___elambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_depArrow___elambda__1___closed__4;
x_2 = l_Lean_Parser_Term_depArrow___elambda__1___closed__6;
x_3 = lean::mk_nat_obj(25u);
x_4 = l_Lean_Parser_Term_unicodeInfixR(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_arrow___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_arrow___elambda__1___closed__3;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_arrow___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_arrow___elambda__1___closed__3;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_arrow___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_arrow___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_arrow___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_arrow___closed__1;
x_2 = l_Lean_Parser_Term_arrow___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_arrow() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_arrow___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_arrow(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_arrow___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_arrow;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_array___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("array");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_array___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_array___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array___elambda__1___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__8;
x_2 = l_Lean_Parser_symbolNoWsFn___closed__1;
x_3 = lean::string_append(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_2 = lean::string_utf8_byte_size(x_1);
return x_2;
}
}
obj* l_Lean_Parser_Term_array___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_41; 
x_4 = lean::cnstr_get(x_3, 0);
lean::inc(x_4);
x_5 = lean::cnstr_get(x_3, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 3);
lean::inc(x_6);
x_7 = lean::array_get_size(x_4);
lean::dec(x_4);
lean::inc(x_1);
x_41 = l_Lean_Parser_ParserState_pushSyntax(x_3, x_1);
if (lean::obj_tag(x_6) == 0)
{
uint8 x_42; 
x_42 = l_Lean_Parser_checkTailNoWs(x_1);
lean::dec(x_1);
if (x_42 == 0)
{
obj* x_43; obj* x_44; 
lean::dec(x_5);
x_43 = l_Lean_Parser_Term_array___elambda__1___closed__3;
x_44 = l_Lean_Parser_ParserState_mkError(x_41, x_43);
x_8 = x_44;
goto block_40;
}
else
{
obj* x_45; obj* x_46; obj* x_47; obj* x_48; obj* x_49; obj* x_50; obj* x_51; 
x_45 = lean::cnstr_get(x_2, 0);
lean::inc(x_45);
x_46 = lean::cnstr_get(x_45, 0);
lean::inc(x_46);
lean::dec(x_45);
x_47 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_48 = l_Lean_Parser_Term_array___elambda__1___closed__3;
x_49 = lean::mk_nat_obj(0u);
x_50 = l_Lean_Parser_strAux___main(x_47, x_48, x_49, x_2, x_41);
x_51 = lean::cnstr_get(x_50, 3);
lean::inc(x_51);
if (lean::obj_tag(x_51) == 0)
{
obj* x_52; obj* x_53; obj* x_54; obj* x_55; obj* x_56; obj* x_57; obj* x_58; obj* x_59; 
lean::inc(x_5, 2);
lean::inc(x_46);
x_52 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_52, 0, x_46);
lean::cnstr_set(x_52, 1, x_5);
lean::cnstr_set(x_52, 2, x_5);
x_53 = l_Lean_Parser_Term_array___elambda__1___closed__4;
x_54 = lean::nat_add(x_5, x_53);
lean::inc(x_54);
x_55 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_55, 0, x_46);
lean::cnstr_set(x_55, 1, x_54);
lean::cnstr_set(x_55, 2, x_54);
x_56 = lean::alloc_cnstr(0, 3, 0);
lean::cnstr_set(x_56, 0, x_52);
lean::cnstr_set(x_56, 1, x_5);
lean::cnstr_set(x_56, 2, x_55);
x_57 = lean::alloc_cnstr(1, 1, 0);
lean::cnstr_set(x_57, 0, x_56);
x_58 = lean::alloc_cnstr(2, 2, 0);
lean::cnstr_set(x_58, 0, x_57);
lean::cnstr_set(x_58, 1, x_47);
x_59 = l_Lean_Parser_ParserState_pushSyntax(x_50, x_58);
x_8 = x_59;
goto block_40;
}
else
{
lean::dec(x_51);
lean::dec(x_46);
lean::dec(x_5);
x_8 = x_50;
goto block_40;
}
}
}
else
{
obj* x_60; obj* x_61; 
lean::dec(x_6);
lean::dec(x_5);
lean::dec(x_2);
lean::dec(x_1);
x_60 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_61 = l_Lean_Parser_ParserState_mkNode(x_41, x_60, x_7);
return x_61;
}
block_40:
{
obj* x_9; 
x_9 = lean::cnstr_get(x_8, 3);
lean::inc(x_9);
if (lean::obj_tag(x_9) == 0)
{
obj* x_10; obj* x_11; obj* x_12; obj* x_13; 
x_10 = l_Lean_Parser_termParserAttribute;
x_11 = lean::mk_nat_obj(0u);
lean::inc(x_2);
x_12 = l_Lean_Parser_ParserAttribute_runParser(x_10, x_11, x_2, x_8);
x_13 = lean::cnstr_get(x_12, 3);
lean::inc(x_13);
if (lean::obj_tag(x_13) == 0)
{
obj* x_14; obj* x_15; obj* x_16; 
x_14 = lean::cnstr_get(x_12, 1);
lean::inc(x_14);
x_15 = l_Lean_Parser_tokenFn(x_2, x_12);
x_16 = lean::cnstr_get(x_15, 3);
lean::inc(x_16);
if (lean::obj_tag(x_16) == 0)
{
obj* x_17; obj* x_18; 
x_17 = lean::cnstr_get(x_15, 0);
lean::inc(x_17);
x_18 = l_Array_back___at___private_init_lean_parser_parser_6__updateCache___spec__1(x_17);
lean::dec(x_17);
if (lean::obj_tag(x_18) == 2)
{
obj* x_19; obj* x_20; uint8 x_21; 
x_19 = lean::cnstr_get(x_18, 1);
lean::inc(x_19);
lean::dec(x_18);
x_20 = l_Lean_Parser_Term_list___elambda__1___closed__4;
x_21 = lean::string_dec_eq(x_19, x_20);
lean::dec(x_19);
if (x_21 == 0)
{
obj* x_22; obj* x_23; obj* x_24; obj* x_25; 
x_22 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_23 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_22, x_14);
x_24 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_25 = l_Lean_Parser_ParserState_mkNode(x_23, x_24, x_7);
return x_25;
}
else
{
obj* x_26; obj* x_27; 
lean::dec(x_14);
x_26 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_27 = l_Lean_Parser_ParserState_mkNode(x_15, x_26, x_7);
return x_27;
}
}
else
{
obj* x_28; obj* x_29; obj* x_30; obj* x_31; 
lean::dec(x_18);
x_28 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_29 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_28, x_14);
x_30 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_31 = l_Lean_Parser_ParserState_mkNode(x_29, x_30, x_7);
return x_31;
}
}
else
{
obj* x_32; obj* x_33; obj* x_34; obj* x_35; 
lean::dec(x_16);
x_32 = l_Lean_Parser_Term_list___elambda__1___closed__7;
x_33 = l_Lean_Parser_ParserState_mkErrorsAt(x_15, x_32, x_14);
x_34 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_35 = l_Lean_Parser_ParserState_mkNode(x_33, x_34, x_7);
return x_35;
}
}
else
{
obj* x_36; obj* x_37; 
lean::dec(x_13);
lean::dec(x_2);
x_36 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_37 = l_Lean_Parser_ParserState_mkNode(x_12, x_36, x_7);
return x_37;
}
}
else
{
obj* x_38; obj* x_39; 
lean::dec(x_9);
lean::dec(x_2);
x_38 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_39 = l_Lean_Parser_ParserState_mkNode(x_8, x_38, x_7);
return x_39;
}
}
}
}
obj* _init_l_Lean_Parser_Term_array___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_list___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_proj___closed__2;
x_3 = l_Lean_Parser_symbolNoWsInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_array___closed__1;
x_2 = l_Lean_Parser_Term_instBinder___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_epsilonInfo;
x_2 = l_Lean_Parser_Term_array___closed__2;
x_3 = l_Lean_Parser_andthenInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_array___closed__3;
x_3 = l_Lean_Parser_nodeInfo(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array___closed__5() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_array___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_array___closed__6() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_array___closed__4;
x_2 = l_Lean_Parser_Term_array___closed__5;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_array() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_array___closed__6;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_array(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_array___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_array;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_dollar___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("dollar");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_dollar___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_dollar___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_dollar___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" $ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_dollar___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_dollar___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(1u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_dollar___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_dollar___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_dollar___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_dollar___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_dollar___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_dollar___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_dollar___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_dollar___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_dollar___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_dollar___closed__1;
x_2 = l_Lean_Parser_Term_dollar___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_dollar() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_dollar___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_dollar(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_dollar___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_dollar;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("fcomp");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_fcomp___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ∘ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fcomp___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(90u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_fcomp___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_fcomp___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_fcomp___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_fcomp___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_fcomp___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_fcomp___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_fcomp___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_fcomp___closed__1;
x_2 = l_Lean_Parser_Term_fcomp___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_fcomp() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_fcomp___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_fcomp(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_fcomp___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_fcomp;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_prod___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("prod");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_prod___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_prod___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prod___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" × ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_prod___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_prod___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(35u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_prod___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_prod___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_prod___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_prod___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_prod___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_prod___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_prod___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_prod___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_prod___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_prod___closed__1;
x_2 = l_Lean_Parser_Term_prod___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_prod() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_prod___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_prod(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_prod___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_prod;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_add___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("add");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_add___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_add___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_add___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" + ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_add___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_add___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(65u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_add___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_add___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_add___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_add___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_add___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_add___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_add___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_add___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_add___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_add___closed__1;
x_2 = l_Lean_Parser_Term_add___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_add() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_add___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_add(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_add___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_add;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_sub___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("sub");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sub___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_sub___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sub___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" - ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sub___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sub___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(65u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_sub___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_sub___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_sub___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_sub___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_sub___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_sub___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_sub___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_sub___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_sub___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_sub___closed__1;
x_2 = l_Lean_Parser_Term_sub___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_sub() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_sub___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_sub(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_sub___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_sub;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_mul___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("mul");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mul___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_mul___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mul___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" * ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mul___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mul___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(70u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_mul___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_mul___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_mul___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_mul___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_mul___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_mul___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_mul___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_mul___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mul___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mul___closed__1;
x_2 = l_Lean_Parser_Term_mul___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mul() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_mul___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_mul(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_mul___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_mul;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_div___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("div");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_div___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_div___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_div___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" / ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_div___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_div___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(70u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_div___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_div___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_div___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_div___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_div___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_div___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_div___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_div___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_div___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_div___closed__1;
x_2 = l_Lean_Parser_Term_div___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_div() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_div___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_div(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_div___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_div;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_mod___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("mod");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mod___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_mod___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mod___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" % ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mod___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mod___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(70u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_mod___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_mod___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_mod___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_mod___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_mod___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_mod___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_mod___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_mod___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mod___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mod___closed__1;
x_2 = l_Lean_Parser_Term_mod___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mod() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_mod___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_mod(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_mod___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_mod;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_modN___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("modN");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_modN___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_modN___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_modN___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" %ₙ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_modN___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_modN___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(70u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_modN___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_modN___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_modN___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_modN___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_modN___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_modN___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_modN___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_modN___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_modN___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_modN___closed__1;
x_2 = l_Lean_Parser_Term_modN___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_modN() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_modN___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_modN(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_modN___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_modN;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_pow___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("pow");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_pow___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_pow___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_pow___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ^ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_pow___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_pow___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(80u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_pow___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_pow___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_pow___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_pow___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_pow___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_pow___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_pow___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_pow___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_pow___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_pow___closed__1;
x_2 = l_Lean_Parser_Term_pow___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_pow() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_pow___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_pow(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_pow___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_pow;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_le___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("le");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_le___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_le___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_le___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ≤ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_le___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <= ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_le___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_le___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_le___elambda__1___closed__4;
x_3 = lean::mk_nat_obj(50u);
x_4 = l_Lean_Parser_Term_unicodeInfixL(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_le___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_le___elambda__1___closed__5;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_le___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_le___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_le___elambda__1___closed__5;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_le___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_le___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_le___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_le___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_le___closed__1;
x_2 = l_Lean_Parser_Term_le___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_le() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_le___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_le(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_le___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_le;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_ge___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("ge");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ge___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_ge___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_ge___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ≥ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ge___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" >= ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ge___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_ge___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_ge___elambda__1___closed__4;
x_3 = lean::mk_nat_obj(50u);
x_4 = l_Lean_Parser_Term_unicodeInfixL(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_ge___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_ge___elambda__1___closed__5;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_ge___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_ge___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_ge___elambda__1___closed__5;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_ge___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_ge___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_ge___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ge___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_ge___closed__1;
x_2 = l_Lean_Parser_Term_ge___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_ge() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_ge___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_ge(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_ge___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_ge;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_lt___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("lt");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_lt___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_lt___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_lt___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" < ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_lt___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_lt___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_lt___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_lt___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_lt___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_lt___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_lt___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_lt___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_lt___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_lt___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_lt___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_lt___closed__1;
x_2 = l_Lean_Parser_Term_lt___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_lt() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_lt___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_lt(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_lt___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_lt;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_gt___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("gt");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_gt___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_gt___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_gt___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" > ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_gt___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_gt___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_gt___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_gt___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_gt___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_gt___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_gt___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_gt___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_gt___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_gt___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_gt___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_gt___closed__1;
x_2 = l_Lean_Parser_Term_gt___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_gt() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_gt___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_gt(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_gt___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_gt;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_eq___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("eq");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_eq___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_eq___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_eq___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" = ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_eq___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_eq___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_eq___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_eq___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_eq___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_eq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_eq___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_eq___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_eq___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_eq___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_eq___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_eq___closed__1;
x_2 = l_Lean_Parser_Term_eq___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_eq() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_eq___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_eq(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_eq___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_eq;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_ne___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("ne");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ne___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_ne___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_ne___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ≠ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ne___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_ne___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_ne___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_ne___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_ne___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_ne___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_ne___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_ne___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_ne___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_ne___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_ne___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_ne___closed__1;
x_2 = l_Lean_Parser_Term_ne___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_ne() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_ne___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_ne(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_ne___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_ne;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_beq___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("beq");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_beq___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_beq___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_beq___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" == ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_beq___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_beq___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_beq___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_beq___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_beq___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_beq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_beq___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_beq___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_beq___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_beq___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_beq___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_beq___closed__1;
x_2 = l_Lean_Parser_Term_beq___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_beq() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_beq___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_beq(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_beq___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_beq;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_bne___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("bne");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bne___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_bne___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bne___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" != ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bne___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bne___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_bne___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_bne___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_bne___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_bne___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_bne___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_bne___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_bne___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bne___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bne___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bne___closed__1;
x_2 = l_Lean_Parser_Term_bne___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bne() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_bne___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_bne(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_bne___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_bne;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_heq___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("heq");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_heq___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_heq___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_heq___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ≅ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_heq___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ~= ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_heq___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_heq___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_heq___elambda__1___closed__4;
x_3 = lean::mk_nat_obj(50u);
x_4 = l_Lean_Parser_Term_unicodeInfixL(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_heq___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_heq___elambda__1___closed__5;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_heq___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_heq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_heq___elambda__1___closed__5;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_heq___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_heq___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_heq___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_heq___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_heq___closed__1;
x_2 = l_Lean_Parser_Term_heq___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_heq() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_heq___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_heq(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_heq___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_heq;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_equiv___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("equiv");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_equiv___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_equiv___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_equiv___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ≈ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_equiv___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_equiv___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(50u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_equiv___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_equiv___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_equiv___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_equiv___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_equiv___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_equiv___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_equiv___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_equiv___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_equiv___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_equiv___closed__1;
x_2 = l_Lean_Parser_Term_equiv___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_equiv() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_equiv___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_equiv(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_equiv___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_equiv;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_subst___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("subst");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_subst___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_subst___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subst___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ▸ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_subst___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subst___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(75u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_subst___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_subst___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_subst___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_subst___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_subst___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_subst___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_subst___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_subst___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_subst___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_subst___closed__1;
x_2 = l_Lean_Parser_Term_subst___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_subst() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_subst___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_subst(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_subst___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_subst;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_and___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("and");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_and___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_and___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_and___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ∧ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_and___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" /\\ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_and___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_and___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_and___elambda__1___closed__4;
x_3 = lean::mk_nat_obj(35u);
x_4 = l_Lean_Parser_Term_unicodeInfixR(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_and___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_and___elambda__1___closed__5;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_and___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_and___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_and___elambda__1___closed__5;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_and___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_and___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_and___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_and___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_and___closed__1;
x_2 = l_Lean_Parser_Term_and___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_and() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_and___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_and(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_and___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_and;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_or___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("or");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_or___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_or___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_or___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ∨ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_or___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" \\/ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_or___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_or___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_or___elambda__1___closed__4;
x_3 = lean::mk_nat_obj(30u);
x_4 = l_Lean_Parser_Term_unicodeInfixR(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_or___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_or___elambda__1___closed__5;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_or___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_or___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_or___elambda__1___closed__5;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_or___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_or___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_or___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_or___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_or___closed__1;
x_2 = l_Lean_Parser_Term_or___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_or() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_or___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_or(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_or___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_or;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_iff___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("iff");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_iff___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_iff___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_iff___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ↔ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_iff___elambda__1___closed__4() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <-> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_iff___elambda__1___closed__5() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_iff___elambda__1___closed__3;
x_2 = l_Lean_Parser_Term_iff___elambda__1___closed__4;
x_3 = lean::mk_nat_obj(20u);
x_4 = l_Lean_Parser_Term_unicodeInfixL(x_1, x_2, x_3);
return x_4;
}
}
obj* l_Lean_Parser_Term_iff___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_iff___elambda__1___closed__5;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_iff___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_iff___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_iff___elambda__1___closed__5;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_iff___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_iff___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_iff___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_iff___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_iff___closed__1;
x_2 = l_Lean_Parser_Term_iff___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_iff() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_iff___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_iff(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_iff___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_iff;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_band___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("band");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_band___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_band___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_band___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" && ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_band___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_band___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(35u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_band___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_band___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_band___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_band___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_band___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_band___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_band___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_band___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_band___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_band___closed__1;
x_2 = l_Lean_Parser_Term_band___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_band() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_band___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_band(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_band___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_band;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_bor___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("bor");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bor___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_bor___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bor___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" || ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bor___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bor___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(30u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_bor___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_bor___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_bor___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_bor___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_bor___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_bor___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_bor___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bor___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bor___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bor___closed__1;
x_2 = l_Lean_Parser_Term_bor___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bor() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_bor___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_bor(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_bor___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_bor;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_append___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("append");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_append___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_append___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_append___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" ++ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_append___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_append___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(65u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_append___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_append___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_append___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_append___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_append___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_append___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_append___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_append___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_append___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_append___closed__1;
x_2 = l_Lean_Parser_Term_append___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_append() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_append___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_append(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_append___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_append;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_cons___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("cons");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_cons___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_cons___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cons___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" :: ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_cons___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_cons___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(67u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_cons___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_cons___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_cons___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_cons___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_cons___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_cons___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_cons___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_cons___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_cons___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_cons___closed__1;
x_2 = l_Lean_Parser_Term_cons___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_cons() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_cons___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_cons(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_cons___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_cons;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_orelse___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("orelse");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_orelse___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_orelse___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_orelse___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <|> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_orelse___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_orelse___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(2u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_orelse___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_orelse___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_orelse___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_orelse___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_orelse___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_orelse___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_orelse___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_orelse___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_orelse___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_orelse___closed__1;
x_2 = l_Lean_Parser_Term_orelse___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_orelse() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_orelse___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_orelse(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_orelse___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_orelse;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_orM___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("orM");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_orM___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_orM___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_orM___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <||> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_orM___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_orM___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(30u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_orM___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_orM___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_orM___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_orM___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_orM___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_orM___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_orM___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_orM___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_orM___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_orM___closed__1;
x_2 = l_Lean_Parser_Term_orM___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_orM() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_orM___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_orM(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_orM___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_orM;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_andM___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("andM");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_andM___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_andM___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_andM___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <&&> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_andM___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_andM___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(35u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_andM___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_andM___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_andM___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_andM___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_andM___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_andM___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_andM___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_andM___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_andM___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_andM___closed__1;
x_2 = l_Lean_Parser_Term_andM___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_andM() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_andM___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_andM(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_andM___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_andM;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_andthen___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("andthen");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_andthen___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_andthen___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_andthen___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" >> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_andthen___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_andthen___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(60u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_andthen___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_andthen___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_andthen___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_andthen___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_andthen___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_andthen___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_andthen___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_andthen___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_andthen___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_andthen___closed__1;
x_2 = l_Lean_Parser_Term_andthen___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_andthen() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_andthen___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_andthen(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_andthen___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_andthen;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_bind___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("bind");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bind___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_bind___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bind___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" >>= ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bind___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bind___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(55u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_bind___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_bind___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_bind___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_bind___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_bind___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_bind___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_bind___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_bind___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_bind___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_bind___closed__1;
x_2 = l_Lean_Parser_Term_bind___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_bind() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_bind___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_bind(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_bind___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_bind;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("mapRev");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_mapRev___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <&> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mapRev___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(100u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_mapRev___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_mapRev___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_mapRev___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_mapRev___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_mapRev___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_mapRev___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapRev___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mapRev___closed__1;
x_2 = l_Lean_Parser_Term_mapRev___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mapRev() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_mapRev___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_mapRev(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_mapRev___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_mapRev;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_seq___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("seq");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seq___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_seq___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_seq___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <*> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seq___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_seq___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(60u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_seq___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_seq___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_seq___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_seq___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_seq___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_seq___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_seq___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_seq___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seq___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_seq___closed__1;
x_2 = l_Lean_Parser_Term_seq___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_seq() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_seq___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_seq(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_seq___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_seq;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("seqLeft");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <* ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(60u);
x_3 = l_Lean_Parser_Term_infixL(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_seqLeft___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_seqLeft___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_seqLeft___closed__1;
x_2 = l_Lean_Parser_Term_seqLeft___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_seqLeft() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_seqLeft___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_seqLeft(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_seqLeft___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_seqLeft;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("seqRight");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_seqRight___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" *> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_seqRight___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(60u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_seqRight___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_seqRight___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_seqRight___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_seqRight___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_seqRight___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_seqRight___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_seqRight___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_seqRight___closed__1;
x_2 = l_Lean_Parser_Term_seqRight___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_seqRight() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_seqRight___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_seqRight(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_seqRight___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_seqRight;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_map___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("map");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_map___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_map___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_map___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <$> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_map___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_map___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(100u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_map___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_map___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_map___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_map___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_map___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_map___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_map___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_map___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_map___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_map___closed__1;
x_2 = l_Lean_Parser_Term_map___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_map() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_map___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_map(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_map___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_map;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("mapConst");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_mapConst___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" <$ ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mapConst___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(100u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_mapConst___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_mapConst___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_mapConst___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_mapConst___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_mapConst___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_mapConst___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapConst___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mapConst___closed__1;
x_2 = l_Lean_Parser_Term_mapConst___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mapConst() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_mapConst___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_mapConst(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_mapConst___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_mapConst;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__1() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string("mapConstRev");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2;
x_2 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__1;
x_3 = lean_name_mk_string(x_1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__3() {
_start:
{
obj* x_1; 
x_1 = lean::mk_string(" $> ");
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__3;
x_2 = lean::mk_nat_obj(100u);
x_3 = l_Lean_Parser_Term_infixR(x_1, x_2);
return x_3;
}
}
obj* l_Lean_Parser_Term_mapConstRev___elambda__1(obj* x_1, obj* x_2, obj* x_3) {
_start:
{
obj* x_4; obj* x_5; obj* x_6; obj* x_7; obj* x_8; obj* x_9; obj* x_10; 
x_4 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4;
x_5 = lean::cnstr_get(x_4, 1);
lean::inc(x_5);
x_6 = lean::cnstr_get(x_3, 0);
lean::inc(x_6);
x_7 = lean::array_get_size(x_6);
lean::dec(x_6);
x_8 = lean::apply_3(x_5, x_1, x_2, x_3);
x_9 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2;
x_10 = l_Lean_Parser_ParserState_mkNode(x_8, x_9, x_7);
return x_10;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___closed__1() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; obj* x_4; 
x_1 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4;
x_2 = lean::cnstr_get(x_1, 0);
lean::inc(x_2);
x_3 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2;
x_4 = l_Lean_Parser_nodeInfo(x_3, x_2);
return x_4;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___closed__2() {
_start:
{
obj* x_1; 
x_1 = lean::alloc_closure(reinterpret_cast<void*>(l_Lean_Parser_Term_mapConstRev___elambda__1), 3, 0);
return x_1;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev___closed__3() {
_start:
{
obj* x_1; obj* x_2; obj* x_3; 
x_1 = l_Lean_Parser_Term_mapConstRev___closed__1;
x_2 = l_Lean_Parser_Term_mapConstRev___closed__2;
x_3 = lean::alloc_cnstr(0, 2, 0);
lean::cnstr_set(x_3, 0, x_1);
lean::cnstr_set(x_3, 1, x_2);
return x_3;
}
}
obj* _init_l_Lean_Parser_Term_mapConstRev() {
_start:
{
obj* x_1; 
x_1 = l_Lean_Parser_Term_mapConstRev___closed__3;
return x_1;
}
}
obj* l___regBuiltinParser_Lean_Parser_Term_mapConstRev(obj* x_1) {
_start:
{
obj* x_2; obj* x_3; obj* x_4; obj* x_5; 
x_2 = l_Lean_Parser_builtinTermParsingTable;
x_3 = l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2;
x_4 = l_Lean_Parser_Term_mapConstRev;
x_5 = l_Lean_Parser_addBuiltinTrailingParser(x_2, x_3, x_4, x_1);
return x_5;
}
}
obj* initialize_init_lean_parser_parser(obj*);
obj* initialize_init_lean_parser_level(obj*);
static bool _G_initialized = false;
obj* initialize_init_lean_parser_term(obj* w) {
if (_G_initialized) return w;
_G_initialized = true;
if (io_result_is_error(w)) return w;
w = initialize_init_lean_parser_parser(w);
if (io_result_is_error(w)) return w;
w = initialize_init_lean_parser_level(w);
if (io_result_is_error(w)) return w;
w = l_Lean_Parser_mkBuiltinParsingTablesRef(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_builtinTermParsingTable = io_result_get_value(w);
lean::mark_persistent(l_Lean_Parser_builtinTermParsingTable);
l_Lean_Parser_regBuiltinTermParserAttr___closed__1 = _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__1();
lean::mark_persistent(l_Lean_Parser_regBuiltinTermParserAttr___closed__1);
l_Lean_Parser_regBuiltinTermParserAttr___closed__2 = _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__2();
lean::mark_persistent(l_Lean_Parser_regBuiltinTermParserAttr___closed__2);
l_Lean_Parser_regBuiltinTermParserAttr___closed__3 = _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__3();
lean::mark_persistent(l_Lean_Parser_regBuiltinTermParserAttr___closed__3);
l_Lean_Parser_regBuiltinTermParserAttr___closed__4 = _init_l_Lean_Parser_regBuiltinTermParserAttr___closed__4();
lean::mark_persistent(l_Lean_Parser_regBuiltinTermParserAttr___closed__4);
w = l_Lean_Parser_regBuiltinTermParserAttr(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_mkTermParserAttribute___closed__1 = _init_l_Lean_Parser_mkTermParserAttribute___closed__1();
lean::mark_persistent(l_Lean_Parser_mkTermParserAttribute___closed__1);
l_Lean_Parser_mkTermParserAttribute___closed__2 = _init_l_Lean_Parser_mkTermParserAttribute___closed__2();
lean::mark_persistent(l_Lean_Parser_mkTermParserAttribute___closed__2);
l_Lean_Parser_mkTermParserAttribute___closed__3 = _init_l_Lean_Parser_mkTermParserAttribute___closed__3();
lean::mark_persistent(l_Lean_Parser_mkTermParserAttribute___closed__3);
l_Lean_Parser_mkTermParserAttribute___closed__4 = _init_l_Lean_Parser_mkTermParserAttribute___closed__4();
lean::mark_persistent(l_Lean_Parser_mkTermParserAttribute___closed__4);
l_Lean_Parser_mkTermParserAttribute___closed__5 = _init_l_Lean_Parser_mkTermParserAttribute___closed__5();
lean::mark_persistent(l_Lean_Parser_mkTermParserAttribute___closed__5);
w = l_Lean_Parser_mkTermParserAttribute(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_termParserAttribute = io_result_get_value(w);
lean::mark_persistent(l_Lean_Parser_termParserAttribute);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__1);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__2 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__2();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__2);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__3 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__3();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__3);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_explicitUniv___elambda__1___spec__2___closed__4);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__1 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__1);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__2);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__3 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__3);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__4);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__5 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__5);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__6);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__7);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__8 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__8);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__9 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__9);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__10);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__11 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__11);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__12 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__12);
l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13 = _init_l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___elambda__1___closed__13);
l_Lean_Parser_Term_explicitUniv___closed__1 = _init_l_Lean_Parser_Term_explicitUniv___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__1);
l_Lean_Parser_Term_explicitUniv___closed__2 = _init_l_Lean_Parser_Term_explicitUniv___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__2);
l_Lean_Parser_Term_explicitUniv___closed__3 = _init_l_Lean_Parser_Term_explicitUniv___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__3);
l_Lean_Parser_Term_explicitUniv___closed__4 = _init_l_Lean_Parser_Term_explicitUniv___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__4);
l_Lean_Parser_Term_explicitUniv___closed__5 = _init_l_Lean_Parser_Term_explicitUniv___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__5);
l_Lean_Parser_Term_explicitUniv___closed__6 = _init_l_Lean_Parser_Term_explicitUniv___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__6);
l_Lean_Parser_Term_explicitUniv___closed__7 = _init_l_Lean_Parser_Term_explicitUniv___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__7);
l_Lean_Parser_Term_explicitUniv___closed__8 = _init_l_Lean_Parser_Term_explicitUniv___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__8);
l_Lean_Parser_Term_explicitUniv___closed__9 = _init_l_Lean_Parser_Term_explicitUniv___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv___closed__9);
l_Lean_Parser_Term_explicitUniv = _init_l_Lean_Parser_Term_explicitUniv();
lean::mark_persistent(l_Lean_Parser_Term_explicitUniv);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8 = _init_l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___elambda__1___rarg___closed__8);
l_Lean_Parser_Term_namedPattern___closed__1 = _init_l_Lean_Parser_Term_namedPattern___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___closed__1);
l_Lean_Parser_Term_namedPattern___closed__2 = _init_l_Lean_Parser_Term_namedPattern___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___closed__2);
l_Lean_Parser_Term_namedPattern___closed__3 = _init_l_Lean_Parser_Term_namedPattern___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___closed__3);
l_Lean_Parser_Term_namedPattern___closed__4 = _init_l_Lean_Parser_Term_namedPattern___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___closed__4);
l_Lean_Parser_Term_namedPattern___closed__5 = _init_l_Lean_Parser_Term_namedPattern___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___closed__5);
l_Lean_Parser_Term_namedPattern___closed__6 = _init_l_Lean_Parser_Term_namedPattern___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern___closed__6);
l_Lean_Parser_Term_namedPattern = _init_l_Lean_Parser_Term_namedPattern();
lean::mark_persistent(l_Lean_Parser_Term_namedPattern);
l_Lean_Parser_Term_id___elambda__1___closed__1 = _init_l_Lean_Parser_Term_id___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_id___elambda__1___closed__1);
l_Lean_Parser_Term_id___elambda__1___closed__2 = _init_l_Lean_Parser_Term_id___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_id___elambda__1___closed__2);
l_Lean_Parser_Term_id___closed__1 = _init_l_Lean_Parser_Term_id___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_id___closed__1);
l_Lean_Parser_Term_id___closed__2 = _init_l_Lean_Parser_Term_id___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_id___closed__2);
l_Lean_Parser_Term_id___closed__3 = _init_l_Lean_Parser_Term_id___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_id___closed__3);
l_Lean_Parser_Term_id___closed__4 = _init_l_Lean_Parser_Term_id___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_id___closed__4);
l_Lean_Parser_Term_id___closed__5 = _init_l_Lean_Parser_Term_id___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_id___closed__5);
l_Lean_Parser_Term_id___closed__6 = _init_l_Lean_Parser_Term_id___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_id___closed__6);
l_Lean_Parser_Term_id = _init_l_Lean_Parser_Term_id();
lean::mark_persistent(l_Lean_Parser_Term_id);
w = l___regBuiltinParser_Lean_Parser_Term_id(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_num___closed__1 = _init_l_Lean_Parser_Term_num___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_num___closed__1);
l_Lean_Parser_Term_num___closed__2 = _init_l_Lean_Parser_Term_num___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_num___closed__2);
l_Lean_Parser_Term_num = _init_l_Lean_Parser_Term_num();
lean::mark_persistent(l_Lean_Parser_Term_num);
l___regBuiltinParser_Lean_Parser_Term_num___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Term_num___closed__1();
lean::mark_persistent(l___regBuiltinParser_Lean_Parser_Term_num___closed__1);
w = l___regBuiltinParser_Lean_Parser_Term_num(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_str___closed__1 = _init_l_Lean_Parser_Term_str___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_str___closed__1);
l_Lean_Parser_Term_str___closed__2 = _init_l_Lean_Parser_Term_str___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_str___closed__2);
l_Lean_Parser_Term_str = _init_l_Lean_Parser_Term_str();
lean::mark_persistent(l_Lean_Parser_Term_str);
l___regBuiltinParser_Lean_Parser_Term_str___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Term_str___closed__1();
lean::mark_persistent(l___regBuiltinParser_Lean_Parser_Term_str___closed__1);
l___regBuiltinParser_Lean_Parser_Term_str___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Term_str___closed__2();
lean::mark_persistent(l___regBuiltinParser_Lean_Parser_Term_str___closed__2);
w = l___regBuiltinParser_Lean_Parser_Term_str(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_char___closed__1 = _init_l_Lean_Parser_Term_char___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_char___closed__1);
l_Lean_Parser_Term_char___closed__2 = _init_l_Lean_Parser_Term_char___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_char___closed__2);
l_Lean_Parser_Term_char = _init_l_Lean_Parser_Term_char();
lean::mark_persistent(l_Lean_Parser_Term_char);
l___regBuiltinParser_Lean_Parser_Term_char___closed__1 = _init_l___regBuiltinParser_Lean_Parser_Term_char___closed__1();
lean::mark_persistent(l___regBuiltinParser_Lean_Parser_Term_char___closed__1);
l___regBuiltinParser_Lean_Parser_Term_char___closed__2 = _init_l___regBuiltinParser_Lean_Parser_Term_char___closed__2();
lean::mark_persistent(l___regBuiltinParser_Lean_Parser_Term_char___closed__2);
w = l___regBuiltinParser_Lean_Parser_Term_char(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_type___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_type___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_type___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_type___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_type___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_type___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_type___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_type___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_type___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_type___closed__1 = _init_l_Lean_Parser_Term_type___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_type___closed__1);
l_Lean_Parser_Term_type___closed__2 = _init_l_Lean_Parser_Term_type___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_type___closed__2);
l_Lean_Parser_Term_type___closed__3 = _init_l_Lean_Parser_Term_type___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_type___closed__3);
l_Lean_Parser_Term_type___closed__4 = _init_l_Lean_Parser_Term_type___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_type___closed__4);
l_Lean_Parser_Term_type = _init_l_Lean_Parser_Term_type();
lean::mark_persistent(l_Lean_Parser_Term_type);
w = l___regBuiltinParser_Lean_Parser_Term_type(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_sort___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_sort___closed__1 = _init_l_Lean_Parser_Term_sort___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sort___closed__1);
l_Lean_Parser_Term_sort___closed__2 = _init_l_Lean_Parser_Term_sort___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sort___closed__2);
l_Lean_Parser_Term_sort___closed__3 = _init_l_Lean_Parser_Term_sort___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sort___closed__3);
l_Lean_Parser_Term_sort___closed__4 = _init_l_Lean_Parser_Term_sort___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_sort___closed__4);
l_Lean_Parser_Term_sort = _init_l_Lean_Parser_Term_sort();
lean::mark_persistent(l_Lean_Parser_Term_sort);
w = l___regBuiltinParser_Lean_Parser_Term_sort(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_prop___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_prop___closed__1 = _init_l_Lean_Parser_Term_prop___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_prop___closed__1);
l_Lean_Parser_Term_prop___closed__2 = _init_l_Lean_Parser_Term_prop___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_prop___closed__2);
l_Lean_Parser_Term_prop___closed__3 = _init_l_Lean_Parser_Term_prop___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_prop___closed__3);
l_Lean_Parser_Term_prop___closed__4 = _init_l_Lean_Parser_Term_prop___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_prop___closed__4);
l_Lean_Parser_Term_prop = _init_l_Lean_Parser_Term_prop();
lean::mark_persistent(l_Lean_Parser_Term_prop);
w = l___regBuiltinParser_Lean_Parser_Term_prop(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_hole___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_hole___closed__1 = _init_l_Lean_Parser_Term_hole___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_hole___closed__1);
l_Lean_Parser_Term_hole___closed__2 = _init_l_Lean_Parser_Term_hole___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_hole___closed__2);
l_Lean_Parser_Term_hole___closed__3 = _init_l_Lean_Parser_Term_hole___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_hole___closed__3);
l_Lean_Parser_Term_hole___closed__4 = _init_l_Lean_Parser_Term_hole___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_hole___closed__4);
l_Lean_Parser_Term_hole = _init_l_Lean_Parser_Term_hole();
lean::mark_persistent(l_Lean_Parser_Term_hole);
w = l___regBuiltinParser_Lean_Parser_Term_hole(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_sorry___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_sorry___closed__1 = _init_l_Lean_Parser_Term_sorry___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sorry___closed__1);
l_Lean_Parser_Term_sorry___closed__2 = _init_l_Lean_Parser_Term_sorry___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sorry___closed__2);
l_Lean_Parser_Term_sorry___closed__3 = _init_l_Lean_Parser_Term_sorry___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sorry___closed__3);
l_Lean_Parser_Term_sorry___closed__4 = _init_l_Lean_Parser_Term_sorry___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_sorry___closed__4);
l_Lean_Parser_Term_sorry = _init_l_Lean_Parser_Term_sorry();
lean::mark_persistent(l_Lean_Parser_Term_sorry);
w = l___regBuiltinParser_Lean_Parser_Term_sorry(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_cdot___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_cdot___closed__1 = _init_l_Lean_Parser_Term_cdot___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_cdot___closed__1);
l_Lean_Parser_Term_cdot___closed__2 = _init_l_Lean_Parser_Term_cdot___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_cdot___closed__2);
l_Lean_Parser_Term_cdot___closed__3 = _init_l_Lean_Parser_Term_cdot___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_cdot___closed__3);
l_Lean_Parser_Term_cdot___closed__4 = _init_l_Lean_Parser_Term_cdot___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_cdot___closed__4);
l_Lean_Parser_Term_cdot = _init_l_Lean_Parser_Term_cdot();
lean::mark_persistent(l_Lean_Parser_Term_cdot);
w = l___regBuiltinParser_Lean_Parser_Term_cdot(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_emptyC___closed__1 = _init_l_Lean_Parser_Term_emptyC___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___closed__1);
l_Lean_Parser_Term_emptyC___closed__2 = _init_l_Lean_Parser_Term_emptyC___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___closed__2);
l_Lean_Parser_Term_emptyC___closed__3 = _init_l_Lean_Parser_Term_emptyC___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___closed__3);
l_Lean_Parser_Term_emptyC___closed__4 = _init_l_Lean_Parser_Term_emptyC___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_emptyC___closed__4);
l_Lean_Parser_Term_emptyC = _init_l_Lean_Parser_Term_emptyC();
lean::mark_persistent(l_Lean_Parser_Term_emptyC);
w = l___regBuiltinParser_Lean_Parser_Term_emptyC(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_typeAscription___closed__1 = _init_l_Lean_Parser_Term_typeAscription___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___closed__1);
l_Lean_Parser_Term_typeAscription___closed__2 = _init_l_Lean_Parser_Term_typeAscription___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___closed__2);
l_Lean_Parser_Term_typeAscription___closed__3 = _init_l_Lean_Parser_Term_typeAscription___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___closed__3);
l_Lean_Parser_Term_typeAscription___closed__4 = _init_l_Lean_Parser_Term_typeAscription___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___closed__4);
l_Lean_Parser_Term_typeAscription___closed__5 = _init_l_Lean_Parser_Term_typeAscription___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription___closed__5);
l_Lean_Parser_Term_typeAscription = _init_l_Lean_Parser_Term_typeAscription();
lean::mark_persistent(l_Lean_Parser_Term_typeAscription);
l_Lean_Parser_Term_tupleTail___elambda__1___closed__1 = _init_l_Lean_Parser_Term_tupleTail___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___elambda__1___closed__1);
l_Lean_Parser_Term_tupleTail___elambda__1___closed__2 = _init_l_Lean_Parser_Term_tupleTail___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___elambda__1___closed__2);
l_Lean_Parser_Term_tupleTail___closed__1 = _init_l_Lean_Parser_Term_tupleTail___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___closed__1);
l_Lean_Parser_Term_tupleTail___closed__2 = _init_l_Lean_Parser_Term_tupleTail___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___closed__2);
l_Lean_Parser_Term_tupleTail___closed__3 = _init_l_Lean_Parser_Term_tupleTail___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___closed__3);
l_Lean_Parser_Term_tupleTail___closed__4 = _init_l_Lean_Parser_Term_tupleTail___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___closed__4);
l_Lean_Parser_Term_tupleTail___closed__5 = _init_l_Lean_Parser_Term_tupleTail___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail___closed__5);
l_Lean_Parser_Term_tupleTail = _init_l_Lean_Parser_Term_tupleTail();
lean::mark_persistent(l_Lean_Parser_Term_tupleTail);
l_Lean_Parser_Term_parenSpecial___closed__1 = _init_l_Lean_Parser_Term_parenSpecial___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_parenSpecial___closed__1);
l_Lean_Parser_Term_parenSpecial___closed__2 = _init_l_Lean_Parser_Term_parenSpecial___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_parenSpecial___closed__2);
l_Lean_Parser_Term_parenSpecial___closed__3 = _init_l_Lean_Parser_Term_parenSpecial___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_parenSpecial___closed__3);
l_Lean_Parser_Term_parenSpecial___closed__4 = _init_l_Lean_Parser_Term_parenSpecial___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_parenSpecial___closed__4);
l_Lean_Parser_Term_parenSpecial = _init_l_Lean_Parser_Term_parenSpecial();
lean::mark_persistent(l_Lean_Parser_Term_parenSpecial);
l_Lean_Parser_Term_paren___elambda__1___closed__1 = _init_l_Lean_Parser_Term_paren___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_paren___elambda__1___closed__1);
l_Lean_Parser_Term_paren___closed__1 = _init_l_Lean_Parser_Term_paren___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__1);
l_Lean_Parser_Term_paren___closed__2 = _init_l_Lean_Parser_Term_paren___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__2);
l_Lean_Parser_Term_paren___closed__3 = _init_l_Lean_Parser_Term_paren___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__3);
l_Lean_Parser_Term_paren___closed__4 = _init_l_Lean_Parser_Term_paren___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__4);
l_Lean_Parser_Term_paren___closed__5 = _init_l_Lean_Parser_Term_paren___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__5);
l_Lean_Parser_Term_paren___closed__6 = _init_l_Lean_Parser_Term_paren___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__6);
l_Lean_Parser_Term_paren___closed__7 = _init_l_Lean_Parser_Term_paren___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_paren___closed__7);
l_Lean_Parser_Term_paren = _init_l_Lean_Parser_Term_paren();
lean::mark_persistent(l_Lean_Parser_Term_paren);
w = l___regBuiltinParser_Lean_Parser_Term_paren(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__1 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__1);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__2);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__3);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__4);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__5 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__5);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__6 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__6);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__7);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__8 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__8);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__9 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__9);
l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10 = _init_l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___elambda__1___closed__10);
l_Lean_Parser_Term_anonymousCtor___closed__1 = _init_l_Lean_Parser_Term_anonymousCtor___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__1);
l_Lean_Parser_Term_anonymousCtor___closed__2 = _init_l_Lean_Parser_Term_anonymousCtor___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__2);
l_Lean_Parser_Term_anonymousCtor___closed__3 = _init_l_Lean_Parser_Term_anonymousCtor___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__3);
l_Lean_Parser_Term_anonymousCtor___closed__4 = _init_l_Lean_Parser_Term_anonymousCtor___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__4);
l_Lean_Parser_Term_anonymousCtor___closed__5 = _init_l_Lean_Parser_Term_anonymousCtor___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__5);
l_Lean_Parser_Term_anonymousCtor___closed__6 = _init_l_Lean_Parser_Term_anonymousCtor___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__6);
l_Lean_Parser_Term_anonymousCtor___closed__7 = _init_l_Lean_Parser_Term_anonymousCtor___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__7);
l_Lean_Parser_Term_anonymousCtor___closed__8 = _init_l_Lean_Parser_Term_anonymousCtor___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor___closed__8);
l_Lean_Parser_Term_anonymousCtor = _init_l_Lean_Parser_Term_anonymousCtor();
lean::mark_persistent(l_Lean_Parser_Term_anonymousCtor);
w = l___regBuiltinParser_Lean_Parser_Term_anonymousCtor(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_optIdent___closed__1 = _init_l_Lean_Parser_Term_optIdent___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_optIdent___closed__1);
l_Lean_Parser_Term_optIdent___closed__2 = _init_l_Lean_Parser_Term_optIdent___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_optIdent___closed__2);
l_Lean_Parser_Term_optIdent___closed__3 = _init_l_Lean_Parser_Term_optIdent___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_optIdent___closed__3);
l_Lean_Parser_Term_optIdent___closed__4 = _init_l_Lean_Parser_Term_optIdent___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_optIdent___closed__4);
l_Lean_Parser_Term_optIdent = _init_l_Lean_Parser_Term_optIdent();
lean::mark_persistent(l_Lean_Parser_Term_optIdent);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__8 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__8);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__9 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__9);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__10 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__10);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__11 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__11);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__12 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__12);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__13 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__13();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__13);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__14 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__14();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__14);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__15 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__15();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__15);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__16 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__16();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__16);
l_Lean_Parser_Term_if___elambda__1___rarg___closed__17 = _init_l_Lean_Parser_Term_if___elambda__1___rarg___closed__17();
lean::mark_persistent(l_Lean_Parser_Term_if___elambda__1___rarg___closed__17);
l_Lean_Parser_Term_if___closed__1 = _init_l_Lean_Parser_Term_if___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__1);
l_Lean_Parser_Term_if___closed__2 = _init_l_Lean_Parser_Term_if___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__2);
l_Lean_Parser_Term_if___closed__3 = _init_l_Lean_Parser_Term_if___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__3);
l_Lean_Parser_Term_if___closed__4 = _init_l_Lean_Parser_Term_if___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__4);
l_Lean_Parser_Term_if___closed__5 = _init_l_Lean_Parser_Term_if___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__5);
l_Lean_Parser_Term_if___closed__6 = _init_l_Lean_Parser_Term_if___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__6);
l_Lean_Parser_Term_if___closed__7 = _init_l_Lean_Parser_Term_if___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__7);
l_Lean_Parser_Term_if___closed__8 = _init_l_Lean_Parser_Term_if___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__8);
l_Lean_Parser_Term_if___closed__9 = _init_l_Lean_Parser_Term_if___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__9);
l_Lean_Parser_Term_if___closed__10 = _init_l_Lean_Parser_Term_if___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__10);
l_Lean_Parser_Term_if___closed__11 = _init_l_Lean_Parser_Term_if___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__11);
l_Lean_Parser_Term_if___closed__12 = _init_l_Lean_Parser_Term_if___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_if___closed__12);
l_Lean_Parser_Term_if = _init_l_Lean_Parser_Term_if();
lean::mark_persistent(l_Lean_Parser_Term_if);
w = l___regBuiltinParser_Lean_Parser_Term_if(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_fromTerm___closed__1 = _init_l_Lean_Parser_Term_fromTerm___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___closed__1);
l_Lean_Parser_Term_fromTerm___closed__2 = _init_l_Lean_Parser_Term_fromTerm___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___closed__2);
l_Lean_Parser_Term_fromTerm___closed__3 = _init_l_Lean_Parser_Term_fromTerm___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___closed__3);
l_Lean_Parser_Term_fromTerm___closed__4 = _init_l_Lean_Parser_Term_fromTerm___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___closed__4);
l_Lean_Parser_Term_fromTerm___closed__5 = _init_l_Lean_Parser_Term_fromTerm___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm___closed__5);
l_Lean_Parser_Term_fromTerm = _init_l_Lean_Parser_Term_fromTerm();
lean::mark_persistent(l_Lean_Parser_Term_fromTerm);
l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_haveAssign___closed__1 = _init_l_Lean_Parser_Term_haveAssign___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___closed__1);
l_Lean_Parser_Term_haveAssign___closed__2 = _init_l_Lean_Parser_Term_haveAssign___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___closed__2);
l_Lean_Parser_Term_haveAssign___closed__3 = _init_l_Lean_Parser_Term_haveAssign___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___closed__3);
l_Lean_Parser_Term_haveAssign___closed__4 = _init_l_Lean_Parser_Term_haveAssign___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___closed__4);
l_Lean_Parser_Term_haveAssign___closed__5 = _init_l_Lean_Parser_Term_haveAssign___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign___closed__5);
l_Lean_Parser_Term_haveAssign = _init_l_Lean_Parser_Term_haveAssign();
lean::mark_persistent(l_Lean_Parser_Term_haveAssign);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__8 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__8);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__9 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__9);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__10 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__10);
l_Lean_Parser_Term_have___elambda__1___rarg___closed__11 = _init_l_Lean_Parser_Term_have___elambda__1___rarg___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_have___elambda__1___rarg___closed__11);
l_Lean_Parser_Term_have___closed__1 = _init_l_Lean_Parser_Term_have___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__1);
l_Lean_Parser_Term_have___closed__2 = _init_l_Lean_Parser_Term_have___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__2);
l_Lean_Parser_Term_have___closed__3 = _init_l_Lean_Parser_Term_have___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__3);
l_Lean_Parser_Term_have___closed__4 = _init_l_Lean_Parser_Term_have___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__4);
l_Lean_Parser_Term_have___closed__5 = _init_l_Lean_Parser_Term_have___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__5);
l_Lean_Parser_Term_have___closed__6 = _init_l_Lean_Parser_Term_have___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__6);
l_Lean_Parser_Term_have___closed__7 = _init_l_Lean_Parser_Term_have___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__7);
l_Lean_Parser_Term_have___closed__8 = _init_l_Lean_Parser_Term_have___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__8);
l_Lean_Parser_Term_have___closed__9 = _init_l_Lean_Parser_Term_have___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__9);
l_Lean_Parser_Term_have___closed__10 = _init_l_Lean_Parser_Term_have___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__10);
l_Lean_Parser_Term_have___closed__11 = _init_l_Lean_Parser_Term_have___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_have___closed__11);
l_Lean_Parser_Term_have = _init_l_Lean_Parser_Term_have();
lean::mark_persistent(l_Lean_Parser_Term_have);
w = l___regBuiltinParser_Lean_Parser_Term_have(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_suffices___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_suffices___closed__1 = _init_l_Lean_Parser_Term_suffices___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__1);
l_Lean_Parser_Term_suffices___closed__2 = _init_l_Lean_Parser_Term_suffices___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__2);
l_Lean_Parser_Term_suffices___closed__3 = _init_l_Lean_Parser_Term_suffices___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__3);
l_Lean_Parser_Term_suffices___closed__4 = _init_l_Lean_Parser_Term_suffices___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__4);
l_Lean_Parser_Term_suffices___closed__5 = _init_l_Lean_Parser_Term_suffices___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__5);
l_Lean_Parser_Term_suffices___closed__6 = _init_l_Lean_Parser_Term_suffices___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__6);
l_Lean_Parser_Term_suffices___closed__7 = _init_l_Lean_Parser_Term_suffices___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__7);
l_Lean_Parser_Term_suffices___closed__8 = _init_l_Lean_Parser_Term_suffices___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_suffices___closed__8);
l_Lean_Parser_Term_suffices = _init_l_Lean_Parser_Term_suffices();
lean::mark_persistent(l_Lean_Parser_Term_suffices);
w = l___regBuiltinParser_Lean_Parser_Term_suffices(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_show___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_show___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_show___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_show___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_show___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_show___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_show___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_show___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_show___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_show___closed__1 = _init_l_Lean_Parser_Term_show___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_show___closed__1);
l_Lean_Parser_Term_show___closed__2 = _init_l_Lean_Parser_Term_show___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_show___closed__2);
l_Lean_Parser_Term_show___closed__3 = _init_l_Lean_Parser_Term_show___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_show___closed__3);
l_Lean_Parser_Term_show___closed__4 = _init_l_Lean_Parser_Term_show___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_show___closed__4);
l_Lean_Parser_Term_show___closed__5 = _init_l_Lean_Parser_Term_show___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_show___closed__5);
l_Lean_Parser_Term_show___closed__6 = _init_l_Lean_Parser_Term_show___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_show___closed__6);
l_Lean_Parser_Term_show = _init_l_Lean_Parser_Term_show();
lean::mark_persistent(l_Lean_Parser_Term_show);
w = l___regBuiltinParser_Lean_Parser_Term_show(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_fun___elambda__1___closed__1 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__1);
l_Lean_Parser_Term_fun___elambda__1___closed__2 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__2);
l_Lean_Parser_Term_fun___elambda__1___closed__3 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__3);
l_Lean_Parser_Term_fun___elambda__1___closed__4 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__4);
l_Lean_Parser_Term_fun___elambda__1___closed__5 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__5);
l_Lean_Parser_Term_fun___elambda__1___closed__6 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__6);
l_Lean_Parser_Term_fun___elambda__1___closed__7 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__7);
l_Lean_Parser_Term_fun___elambda__1___closed__8 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__8);
l_Lean_Parser_Term_fun___elambda__1___closed__9 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__9);
l_Lean_Parser_Term_fun___elambda__1___closed__10 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__10);
l_Lean_Parser_Term_fun___elambda__1___closed__11 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__11);
l_Lean_Parser_Term_fun___elambda__1___closed__12 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__12);
l_Lean_Parser_Term_fun___elambda__1___closed__13 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__13();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__13);
l_Lean_Parser_Term_fun___elambda__1___closed__14 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__14();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__14);
l_Lean_Parser_Term_fun___elambda__1___closed__15 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__15();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__15);
l_Lean_Parser_Term_fun___elambda__1___closed__16 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__16();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__16);
l_Lean_Parser_Term_fun___elambda__1___closed__17 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__17();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__17);
l_Lean_Parser_Term_fun___elambda__1___closed__18 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__18();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__18);
l_Lean_Parser_Term_fun___elambda__1___closed__19 = _init_l_Lean_Parser_Term_fun___elambda__1___closed__19();
lean::mark_persistent(l_Lean_Parser_Term_fun___elambda__1___closed__19);
l_Lean_Parser_Term_fun___closed__1 = _init_l_Lean_Parser_Term_fun___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__1);
l_Lean_Parser_Term_fun___closed__2 = _init_l_Lean_Parser_Term_fun___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__2);
l_Lean_Parser_Term_fun___closed__3 = _init_l_Lean_Parser_Term_fun___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__3);
l_Lean_Parser_Term_fun___closed__4 = _init_l_Lean_Parser_Term_fun___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__4);
l_Lean_Parser_Term_fun___closed__5 = _init_l_Lean_Parser_Term_fun___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__5);
l_Lean_Parser_Term_fun___closed__6 = _init_l_Lean_Parser_Term_fun___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__6);
l_Lean_Parser_Term_fun___closed__7 = _init_l_Lean_Parser_Term_fun___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__7);
l_Lean_Parser_Term_fun___closed__8 = _init_l_Lean_Parser_Term_fun___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_fun___closed__8);
l_Lean_Parser_Term_fun = _init_l_Lean_Parser_Term_fun();
lean::mark_persistent(l_Lean_Parser_Term_fun);
w = l___regBuiltinParser_Lean_Parser_Term_fun(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_structInstField___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_structInstField___closed__1 = _init_l_Lean_Parser_Term_structInstField___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_structInstField___closed__1);
l_Lean_Parser_Term_structInstField___closed__2 = _init_l_Lean_Parser_Term_structInstField___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_structInstField___closed__2);
l_Lean_Parser_Term_structInstField___closed__3 = _init_l_Lean_Parser_Term_structInstField___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_structInstField___closed__3);
l_Lean_Parser_Term_structInstField___closed__4 = _init_l_Lean_Parser_Term_structInstField___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_structInstField___closed__4);
l_Lean_Parser_Term_structInstField = _init_l_Lean_Parser_Term_structInstField();
lean::mark_persistent(l_Lean_Parser_Term_structInstField);
l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_structInstSource___closed__1 = _init_l_Lean_Parser_Term_structInstSource___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___closed__1);
l_Lean_Parser_Term_structInstSource___closed__2 = _init_l_Lean_Parser_Term_structInstSource___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___closed__2);
l_Lean_Parser_Term_structInstSource___closed__3 = _init_l_Lean_Parser_Term_structInstSource___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___closed__3);
l_Lean_Parser_Term_structInstSource___closed__4 = _init_l_Lean_Parser_Term_structInstSource___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___closed__4);
l_Lean_Parser_Term_structInstSource___closed__5 = _init_l_Lean_Parser_Term_structInstSource___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___closed__5);
l_Lean_Parser_Term_structInstSource___closed__6 = _init_l_Lean_Parser_Term_structInstSource___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource___closed__6);
l_Lean_Parser_Term_structInstSource = _init_l_Lean_Parser_Term_structInstSource();
lean::mark_persistent(l_Lean_Parser_Term_structInstSource);
l_Lean_Parser_Term_structInst___elambda__1___closed__1 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__1);
l_Lean_Parser_Term_structInst___elambda__1___closed__2 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__2);
l_Lean_Parser_Term_structInst___elambda__1___closed__3 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__3);
l_Lean_Parser_Term_structInst___elambda__1___closed__4 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__4);
l_Lean_Parser_Term_structInst___elambda__1___closed__5 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__5);
l_Lean_Parser_Term_structInst___elambda__1___closed__6 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__6);
l_Lean_Parser_Term_structInst___elambda__1___closed__7 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__7);
l_Lean_Parser_Term_structInst___elambda__1___closed__8 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__8);
l_Lean_Parser_Term_structInst___elambda__1___closed__9 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__9);
l_Lean_Parser_Term_structInst___elambda__1___closed__10 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__10);
l_Lean_Parser_Term_structInst___elambda__1___closed__11 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__11);
l_Lean_Parser_Term_structInst___elambda__1___closed__12 = _init_l_Lean_Parser_Term_structInst___elambda__1___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_structInst___elambda__1___closed__12);
l_Lean_Parser_Term_structInst___closed__1 = _init_l_Lean_Parser_Term_structInst___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__1);
l_Lean_Parser_Term_structInst___closed__2 = _init_l_Lean_Parser_Term_structInst___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__2);
l_Lean_Parser_Term_structInst___closed__3 = _init_l_Lean_Parser_Term_structInst___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__3);
l_Lean_Parser_Term_structInst___closed__4 = _init_l_Lean_Parser_Term_structInst___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__4);
l_Lean_Parser_Term_structInst___closed__5 = _init_l_Lean_Parser_Term_structInst___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__5);
l_Lean_Parser_Term_structInst___closed__6 = _init_l_Lean_Parser_Term_structInst___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__6);
l_Lean_Parser_Term_structInst___closed__7 = _init_l_Lean_Parser_Term_structInst___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__7);
l_Lean_Parser_Term_structInst___closed__8 = _init_l_Lean_Parser_Term_structInst___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__8);
l_Lean_Parser_Term_structInst___closed__9 = _init_l_Lean_Parser_Term_structInst___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__9);
l_Lean_Parser_Term_structInst___closed__10 = _init_l_Lean_Parser_Term_structInst___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__10);
l_Lean_Parser_Term_structInst___closed__11 = _init_l_Lean_Parser_Term_structInst___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__11);
l_Lean_Parser_Term_structInst___closed__12 = _init_l_Lean_Parser_Term_structInst___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_structInst___closed__12);
l_Lean_Parser_Term_structInst = _init_l_Lean_Parser_Term_structInst();
lean::mark_persistent(l_Lean_Parser_Term_structInst);
w = l___regBuiltinParser_Lean_Parser_Term_structInst(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_typeSpec___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_typeSpec___closed__1 = _init_l_Lean_Parser_Term_typeSpec___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_typeSpec___closed__1);
l_Lean_Parser_Term_typeSpec___closed__2 = _init_l_Lean_Parser_Term_typeSpec___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_typeSpec___closed__2);
l_Lean_Parser_Term_typeSpec___closed__3 = _init_l_Lean_Parser_Term_typeSpec___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_typeSpec___closed__3);
l_Lean_Parser_Term_typeSpec = _init_l_Lean_Parser_Term_typeSpec();
lean::mark_persistent(l_Lean_Parser_Term_typeSpec);
l_Lean_Parser_Term_optType___closed__1 = _init_l_Lean_Parser_Term_optType___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_optType___closed__1);
l_Lean_Parser_Term_optType___closed__2 = _init_l_Lean_Parser_Term_optType___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_optType___closed__2);
l_Lean_Parser_Term_optType___closed__3 = _init_l_Lean_Parser_Term_optType___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_optType___closed__3);
l_Lean_Parser_Term_optType = _init_l_Lean_Parser_Term_optType();
lean::mark_persistent(l_Lean_Parser_Term_optType);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_subtype___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_subtype___closed__1 = _init_l_Lean_Parser_Term_subtype___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__1);
l_Lean_Parser_Term_subtype___closed__2 = _init_l_Lean_Parser_Term_subtype___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__2);
l_Lean_Parser_Term_subtype___closed__3 = _init_l_Lean_Parser_Term_subtype___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__3);
l_Lean_Parser_Term_subtype___closed__4 = _init_l_Lean_Parser_Term_subtype___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__4);
l_Lean_Parser_Term_subtype___closed__5 = _init_l_Lean_Parser_Term_subtype___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__5);
l_Lean_Parser_Term_subtype___closed__6 = _init_l_Lean_Parser_Term_subtype___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__6);
l_Lean_Parser_Term_subtype___closed__7 = _init_l_Lean_Parser_Term_subtype___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__7);
l_Lean_Parser_Term_subtype___closed__8 = _init_l_Lean_Parser_Term_subtype___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__8);
l_Lean_Parser_Term_subtype___closed__9 = _init_l_Lean_Parser_Term_subtype___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__9);
l_Lean_Parser_Term_subtype___closed__10 = _init_l_Lean_Parser_Term_subtype___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_subtype___closed__10);
l_Lean_Parser_Term_subtype = _init_l_Lean_Parser_Term_subtype();
lean::mark_persistent(l_Lean_Parser_Term_subtype);
w = l___regBuiltinParser_Lean_Parser_Term_subtype(w);
if (io_result_is_error(w)) return w;
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__1);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__2 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__2();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__2);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__3 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__3();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__3);
l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4 = _init_l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4();
lean::mark_persistent(l___private_init_lean_parser_parser_2__sepByFnAux___main___at_Lean_Parser_Term_list___elambda__1___spec__2___closed__4);
l_Lean_Parser_Term_list___elambda__1___closed__1 = _init_l_Lean_Parser_Term_list___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__1);
l_Lean_Parser_Term_list___elambda__1___closed__2 = _init_l_Lean_Parser_Term_list___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__2);
l_Lean_Parser_Term_list___elambda__1___closed__3 = _init_l_Lean_Parser_Term_list___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__3);
l_Lean_Parser_Term_list___elambda__1___closed__4 = _init_l_Lean_Parser_Term_list___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__4);
l_Lean_Parser_Term_list___elambda__1___closed__5 = _init_l_Lean_Parser_Term_list___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__5);
l_Lean_Parser_Term_list___elambda__1___closed__6 = _init_l_Lean_Parser_Term_list___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__6);
l_Lean_Parser_Term_list___elambda__1___closed__7 = _init_l_Lean_Parser_Term_list___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__7);
l_Lean_Parser_Term_list___elambda__1___closed__8 = _init_l_Lean_Parser_Term_list___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__8);
l_Lean_Parser_Term_list___elambda__1___closed__9 = _init_l_Lean_Parser_Term_list___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__9);
l_Lean_Parser_Term_list___elambda__1___closed__10 = _init_l_Lean_Parser_Term_list___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_list___elambda__1___closed__10);
l_Lean_Parser_Term_list___closed__1 = _init_l_Lean_Parser_Term_list___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__1);
l_Lean_Parser_Term_list___closed__2 = _init_l_Lean_Parser_Term_list___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__2);
l_Lean_Parser_Term_list___closed__3 = _init_l_Lean_Parser_Term_list___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__3);
l_Lean_Parser_Term_list___closed__4 = _init_l_Lean_Parser_Term_list___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__4);
l_Lean_Parser_Term_list___closed__5 = _init_l_Lean_Parser_Term_list___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__5);
l_Lean_Parser_Term_list___closed__6 = _init_l_Lean_Parser_Term_list___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__6);
l_Lean_Parser_Term_list___closed__7 = _init_l_Lean_Parser_Term_list___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__7);
l_Lean_Parser_Term_list___closed__8 = _init_l_Lean_Parser_Term_list___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__8);
l_Lean_Parser_Term_list___closed__9 = _init_l_Lean_Parser_Term_list___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_list___closed__9);
l_Lean_Parser_Term_list = _init_l_Lean_Parser_Term_list();
lean::mark_persistent(l_Lean_Parser_Term_list);
w = l___regBuiltinParser_Lean_Parser_Term_list(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_explicit___elambda__1___closed__1 = _init_l_Lean_Parser_Term_explicit___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_explicit___elambda__1___closed__1);
l_Lean_Parser_Term_explicit___elambda__1___closed__2 = _init_l_Lean_Parser_Term_explicit___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_explicit___elambda__1___closed__2);
l_Lean_Parser_Term_explicit___closed__1 = _init_l_Lean_Parser_Term_explicit___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_explicit___closed__1);
l_Lean_Parser_Term_explicit___closed__2 = _init_l_Lean_Parser_Term_explicit___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_explicit___closed__2);
l_Lean_Parser_Term_explicit___closed__3 = _init_l_Lean_Parser_Term_explicit___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_explicit___closed__3);
l_Lean_Parser_Term_explicit___closed__4 = _init_l_Lean_Parser_Term_explicit___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_explicit___closed__4);
l_Lean_Parser_Term_explicit___closed__5 = _init_l_Lean_Parser_Term_explicit___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_explicit___closed__5);
l_Lean_Parser_Term_explicit = _init_l_Lean_Parser_Term_explicit();
lean::mark_persistent(l_Lean_Parser_Term_explicit);
w = l___regBuiltinParser_Lean_Parser_Term_explicit(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_inaccessible___closed__1 = _init_l_Lean_Parser_Term_inaccessible___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___closed__1);
l_Lean_Parser_Term_inaccessible___closed__2 = _init_l_Lean_Parser_Term_inaccessible___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___closed__2);
l_Lean_Parser_Term_inaccessible___closed__3 = _init_l_Lean_Parser_Term_inaccessible___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___closed__3);
l_Lean_Parser_Term_inaccessible___closed__4 = _init_l_Lean_Parser_Term_inaccessible___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___closed__4);
l_Lean_Parser_Term_inaccessible___closed__5 = _init_l_Lean_Parser_Term_inaccessible___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible___closed__5);
l_Lean_Parser_Term_inaccessible = _init_l_Lean_Parser_Term_inaccessible();
lean::mark_persistent(l_Lean_Parser_Term_inaccessible);
w = l___regBuiltinParser_Lean_Parser_Term_inaccessible(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_binderIdent___closed__1 = _init_l_Lean_Parser_Term_binderIdent___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_binderIdent___closed__1);
l_Lean_Parser_Term_binderIdent___closed__2 = _init_l_Lean_Parser_Term_binderIdent___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_binderIdent___closed__2);
l_Lean_Parser_Term_binderIdent___closed__3 = _init_l_Lean_Parser_Term_binderIdent___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_binderIdent___closed__3);
l_Lean_Parser_Term_binderIdent = _init_l_Lean_Parser_Term_binderIdent();
lean::mark_persistent(l_Lean_Parser_Term_binderIdent);
l_Lean_Parser_Term_binderType___closed__1 = _init_l_Lean_Parser_Term_binderType___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_binderType___closed__1);
l_Lean_Parser_Term_binderType___closed__2 = _init_l_Lean_Parser_Term_binderType___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_binderType___closed__2);
l_Lean_Parser_Term_binderType___closed__3 = _init_l_Lean_Parser_Term_binderType___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_binderType___closed__3);
l_Lean_Parser_Term_binderType___closed__4 = _init_l_Lean_Parser_Term_binderType___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_binderType___closed__4);
l_Lean_Parser_Term_binderType___closed__5 = _init_l_Lean_Parser_Term_binderType___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_binderType___closed__5);
l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_binderDefault___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_binderDefault___closed__1 = _init_l_Lean_Parser_Term_binderDefault___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_binderDefault___closed__1);
l_Lean_Parser_Term_binderDefault___closed__2 = _init_l_Lean_Parser_Term_binderDefault___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_binderDefault___closed__2);
l_Lean_Parser_Term_binderDefault___closed__3 = _init_l_Lean_Parser_Term_binderDefault___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_binderDefault___closed__3);
l_Lean_Parser_Term_binderDefault = _init_l_Lean_Parser_Term_binderDefault();
lean::mark_persistent(l_Lean_Parser_Term_binderDefault);
l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_binderTactic___closed__1 = _init_l_Lean_Parser_Term_binderTactic___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic___closed__1);
l_Lean_Parser_Term_binderTactic___closed__2 = _init_l_Lean_Parser_Term_binderTactic___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic___closed__2);
l_Lean_Parser_Term_binderTactic___closed__3 = _init_l_Lean_Parser_Term_binderTactic___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic___closed__3);
l_Lean_Parser_Term_binderTactic___closed__4 = _init_l_Lean_Parser_Term_binderTactic___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic___closed__4);
l_Lean_Parser_Term_binderTactic = _init_l_Lean_Parser_Term_binderTactic();
lean::mark_persistent(l_Lean_Parser_Term_binderTactic);
l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1 = _init_l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___elambda__1___closed__1);
l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2 = _init_l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___elambda__1___closed__2);
l_Lean_Parser_Term_explicitBinder___closed__1 = _init_l_Lean_Parser_Term_explicitBinder___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__1);
l_Lean_Parser_Term_explicitBinder___closed__2 = _init_l_Lean_Parser_Term_explicitBinder___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__2);
l_Lean_Parser_Term_explicitBinder___closed__3 = _init_l_Lean_Parser_Term_explicitBinder___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__3);
l_Lean_Parser_Term_explicitBinder___closed__4 = _init_l_Lean_Parser_Term_explicitBinder___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__4);
l_Lean_Parser_Term_explicitBinder___closed__5 = _init_l_Lean_Parser_Term_explicitBinder___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__5);
l_Lean_Parser_Term_explicitBinder___closed__6 = _init_l_Lean_Parser_Term_explicitBinder___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__6);
l_Lean_Parser_Term_explicitBinder___closed__7 = _init_l_Lean_Parser_Term_explicitBinder___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__7);
l_Lean_Parser_Term_explicitBinder___closed__8 = _init_l_Lean_Parser_Term_explicitBinder___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__8);
l_Lean_Parser_Term_explicitBinder___closed__9 = _init_l_Lean_Parser_Term_explicitBinder___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__9);
l_Lean_Parser_Term_explicitBinder___closed__10 = _init_l_Lean_Parser_Term_explicitBinder___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_explicitBinder___closed__10);
l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1 = _init_l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_implicitBinder___elambda__1___closed__1);
l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2 = _init_l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_implicitBinder___elambda__1___closed__2);
l_Lean_Parser_Term_implicitBinder___closed__1 = _init_l_Lean_Parser_Term_implicitBinder___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_implicitBinder___closed__1);
l_Lean_Parser_Term_implicitBinder___closed__2 = _init_l_Lean_Parser_Term_implicitBinder___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_implicitBinder___closed__2);
l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_instBinder___closed__1 = _init_l_Lean_Parser_Term_instBinder___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__1);
l_Lean_Parser_Term_instBinder___closed__2 = _init_l_Lean_Parser_Term_instBinder___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__2);
l_Lean_Parser_Term_instBinder___closed__3 = _init_l_Lean_Parser_Term_instBinder___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__3);
l_Lean_Parser_Term_instBinder___closed__4 = _init_l_Lean_Parser_Term_instBinder___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__4);
l_Lean_Parser_Term_instBinder___closed__5 = _init_l_Lean_Parser_Term_instBinder___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__5);
l_Lean_Parser_Term_instBinder___closed__6 = _init_l_Lean_Parser_Term_instBinder___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__6);
l_Lean_Parser_Term_instBinder___closed__7 = _init_l_Lean_Parser_Term_instBinder___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_instBinder___closed__7);
l_Lean_Parser_Term_instBinder = _init_l_Lean_Parser_Term_instBinder();
lean::mark_persistent(l_Lean_Parser_Term_instBinder);
l_Lean_Parser_Term_depArrow___elambda__1___closed__1 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__1);
l_Lean_Parser_Term_depArrow___elambda__1___closed__2 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__2);
l_Lean_Parser_Term_depArrow___elambda__1___closed__3 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__3);
l_Lean_Parser_Term_depArrow___elambda__1___closed__4 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__4);
l_Lean_Parser_Term_depArrow___elambda__1___closed__5 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__5);
l_Lean_Parser_Term_depArrow___elambda__1___closed__6 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__6);
l_Lean_Parser_Term_depArrow___elambda__1___closed__7 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__7);
l_Lean_Parser_Term_depArrow___elambda__1___closed__8 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__8);
l_Lean_Parser_Term_depArrow___elambda__1___closed__9 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__9);
l_Lean_Parser_Term_depArrow___elambda__1___closed__10 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__10);
l_Lean_Parser_Term_depArrow___elambda__1___closed__11 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__11);
l_Lean_Parser_Term_depArrow___elambda__1___closed__12 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__12);
l_Lean_Parser_Term_depArrow___elambda__1___closed__13 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__13();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__13);
l_Lean_Parser_Term_depArrow___elambda__1___closed__14 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__14();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__14);
l_Lean_Parser_Term_depArrow___elambda__1___closed__15 = _init_l_Lean_Parser_Term_depArrow___elambda__1___closed__15();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___elambda__1___closed__15);
l_Lean_Parser_Term_depArrow___closed__1 = _init_l_Lean_Parser_Term_depArrow___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__1);
l_Lean_Parser_Term_depArrow___closed__2 = _init_l_Lean_Parser_Term_depArrow___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__2);
l_Lean_Parser_Term_depArrow___closed__3 = _init_l_Lean_Parser_Term_depArrow___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__3);
l_Lean_Parser_Term_depArrow___closed__4 = _init_l_Lean_Parser_Term_depArrow___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__4);
l_Lean_Parser_Term_depArrow___closed__5 = _init_l_Lean_Parser_Term_depArrow___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__5);
l_Lean_Parser_Term_depArrow___closed__6 = _init_l_Lean_Parser_Term_depArrow___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__6);
l_Lean_Parser_Term_depArrow___closed__7 = _init_l_Lean_Parser_Term_depArrow___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_depArrow___closed__7);
l_Lean_Parser_Term_depArrow = _init_l_Lean_Parser_Term_depArrow();
lean::mark_persistent(l_Lean_Parser_Term_depArrow);
w = l___regBuiltinParser_Lean_Parser_Term_depArrow(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_simpleBinder___elambda__1___closed__1 = _init_l_Lean_Parser_Term_simpleBinder___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_simpleBinder___elambda__1___closed__1);
l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2 = _init_l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_simpleBinder___elambda__1___closed__2);
l_Lean_Parser_Term_simpleBinder___closed__1 = _init_l_Lean_Parser_Term_simpleBinder___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_simpleBinder___closed__1);
l_Lean_Parser_Term_simpleBinder___closed__2 = _init_l_Lean_Parser_Term_simpleBinder___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_simpleBinder___closed__2);
l_Lean_Parser_Term_simpleBinder___closed__3 = _init_l_Lean_Parser_Term_simpleBinder___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_simpleBinder___closed__3);
l_Lean_Parser_Term_simpleBinder = _init_l_Lean_Parser_Term_simpleBinder();
lean::mark_persistent(l_Lean_Parser_Term_simpleBinder);
l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1 = _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1();
lean::mark_persistent(l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_forall___elambda__1___spec__1___closed__1);
l_Lean_Parser_Term_forall___elambda__1___closed__1 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__1);
l_Lean_Parser_Term_forall___elambda__1___closed__2 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__2);
l_Lean_Parser_Term_forall___elambda__1___closed__3 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__3);
l_Lean_Parser_Term_forall___elambda__1___closed__4 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__4);
l_Lean_Parser_Term_forall___elambda__1___closed__5 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__5);
l_Lean_Parser_Term_forall___elambda__1___closed__6 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__6);
l_Lean_Parser_Term_forall___elambda__1___closed__7 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__7);
l_Lean_Parser_Term_forall___elambda__1___closed__8 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__8);
l_Lean_Parser_Term_forall___elambda__1___closed__9 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__9);
l_Lean_Parser_Term_forall___elambda__1___closed__10 = _init_l_Lean_Parser_Term_forall___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_forall___elambda__1___closed__10);
l_Lean_Parser_Term_forall___closed__1 = _init_l_Lean_Parser_Term_forall___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__1);
l_Lean_Parser_Term_forall___closed__2 = _init_l_Lean_Parser_Term_forall___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__2);
l_Lean_Parser_Term_forall___closed__3 = _init_l_Lean_Parser_Term_forall___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__3);
l_Lean_Parser_Term_forall___closed__4 = _init_l_Lean_Parser_Term_forall___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__4);
l_Lean_Parser_Term_forall___closed__5 = _init_l_Lean_Parser_Term_forall___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__5);
l_Lean_Parser_Term_forall___closed__6 = _init_l_Lean_Parser_Term_forall___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__6);
l_Lean_Parser_Term_forall___closed__7 = _init_l_Lean_Parser_Term_forall___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__7);
l_Lean_Parser_Term_forall___closed__8 = _init_l_Lean_Parser_Term_forall___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_forall___closed__8);
l_Lean_Parser_Term_forall = _init_l_Lean_Parser_Term_forall();
lean::mark_persistent(l_Lean_Parser_Term_forall);
w = l___regBuiltinParser_Lean_Parser_Term_forall(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_matchAlt___elambda__1___closed__1 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__1);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__2 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__2);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__3 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__3);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__4 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__4);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__5 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__5);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__6 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__6);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__7 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__7);
l_Lean_Parser_Term_matchAlt___elambda__1___closed__8 = _init_l_Lean_Parser_Term_matchAlt___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___elambda__1___closed__8);
l_Lean_Parser_Term_matchAlt___closed__1 = _init_l_Lean_Parser_Term_matchAlt___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___closed__1);
l_Lean_Parser_Term_matchAlt___closed__2 = _init_l_Lean_Parser_Term_matchAlt___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___closed__2);
l_Lean_Parser_Term_matchAlt___closed__3 = _init_l_Lean_Parser_Term_matchAlt___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___closed__3);
l_Lean_Parser_Term_matchAlt___closed__4 = _init_l_Lean_Parser_Term_matchAlt___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___closed__4);
l_Lean_Parser_Term_matchAlt___closed__5 = _init_l_Lean_Parser_Term_matchAlt___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___closed__5);
l_Lean_Parser_Term_matchAlt___closed__6 = _init_l_Lean_Parser_Term_matchAlt___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt___closed__6);
l_Lean_Parser_Term_matchAlt = _init_l_Lean_Parser_Term_matchAlt();
lean::mark_persistent(l_Lean_Parser_Term_matchAlt);
l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1 = _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1();
lean::mark_persistent(l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_match___elambda__1___spec__1___closed__1);
l_Lean_Parser_Term_match___elambda__1___closed__1 = _init_l_Lean_Parser_Term_match___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__1);
l_Lean_Parser_Term_match___elambda__1___closed__2 = _init_l_Lean_Parser_Term_match___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__2);
l_Lean_Parser_Term_match___elambda__1___closed__3 = _init_l_Lean_Parser_Term_match___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__3);
l_Lean_Parser_Term_match___elambda__1___closed__4 = _init_l_Lean_Parser_Term_match___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__4);
l_Lean_Parser_Term_match___elambda__1___closed__5 = _init_l_Lean_Parser_Term_match___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__5);
l_Lean_Parser_Term_match___elambda__1___closed__6 = _init_l_Lean_Parser_Term_match___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__6);
l_Lean_Parser_Term_match___elambda__1___closed__7 = _init_l_Lean_Parser_Term_match___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__7);
l_Lean_Parser_Term_match___elambda__1___closed__8 = _init_l_Lean_Parser_Term_match___elambda__1___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__8);
l_Lean_Parser_Term_match___elambda__1___closed__9 = _init_l_Lean_Parser_Term_match___elambda__1___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__9);
l_Lean_Parser_Term_match___elambda__1___closed__10 = _init_l_Lean_Parser_Term_match___elambda__1___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__10);
l_Lean_Parser_Term_match___elambda__1___closed__11 = _init_l_Lean_Parser_Term_match___elambda__1___closed__11();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__11);
l_Lean_Parser_Term_match___elambda__1___closed__12 = _init_l_Lean_Parser_Term_match___elambda__1___closed__12();
lean::mark_persistent(l_Lean_Parser_Term_match___elambda__1___closed__12);
l_Lean_Parser_Term_match___closed__1 = _init_l_Lean_Parser_Term_match___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__1);
l_Lean_Parser_Term_match___closed__2 = _init_l_Lean_Parser_Term_match___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__2);
l_Lean_Parser_Term_match___closed__3 = _init_l_Lean_Parser_Term_match___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__3);
l_Lean_Parser_Term_match___closed__4 = _init_l_Lean_Parser_Term_match___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__4);
l_Lean_Parser_Term_match___closed__5 = _init_l_Lean_Parser_Term_match___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__5);
l_Lean_Parser_Term_match___closed__6 = _init_l_Lean_Parser_Term_match___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__6);
l_Lean_Parser_Term_match___closed__7 = _init_l_Lean_Parser_Term_match___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__7);
l_Lean_Parser_Term_match___closed__8 = _init_l_Lean_Parser_Term_match___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__8);
l_Lean_Parser_Term_match___closed__9 = _init_l_Lean_Parser_Term_match___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__9);
l_Lean_Parser_Term_match___closed__10 = _init_l_Lean_Parser_Term_match___closed__10();
lean::mark_persistent(l_Lean_Parser_Term_match___closed__10);
l_Lean_Parser_Term_match = _init_l_Lean_Parser_Term_match();
lean::mark_persistent(l_Lean_Parser_Term_match);
w = l___regBuiltinParser_Lean_Parser_Term_match(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_nomatch___closed__1 = _init_l_Lean_Parser_Term_nomatch___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___closed__1);
l_Lean_Parser_Term_nomatch___closed__2 = _init_l_Lean_Parser_Term_nomatch___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___closed__2);
l_Lean_Parser_Term_nomatch___closed__3 = _init_l_Lean_Parser_Term_nomatch___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___closed__3);
l_Lean_Parser_Term_nomatch___closed__4 = _init_l_Lean_Parser_Term_nomatch___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___closed__4);
l_Lean_Parser_Term_nomatch___closed__5 = _init_l_Lean_Parser_Term_nomatch___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_nomatch___closed__5);
l_Lean_Parser_Term_nomatch = _init_l_Lean_Parser_Term_nomatch();
lean::mark_persistent(l_Lean_Parser_Term_nomatch);
w = l___regBuiltinParser_Lean_Parser_Term_nomatch(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_parser_x21___closed__1 = _init_l_Lean_Parser_Term_parser_x21___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___closed__1);
l_Lean_Parser_Term_parser_x21___closed__2 = _init_l_Lean_Parser_Term_parser_x21___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___closed__2);
l_Lean_Parser_Term_parser_x21___closed__3 = _init_l_Lean_Parser_Term_parser_x21___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___closed__3);
l_Lean_Parser_Term_parser_x21___closed__4 = _init_l_Lean_Parser_Term_parser_x21___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___closed__4);
l_Lean_Parser_Term_parser_x21___closed__5 = _init_l_Lean_Parser_Term_parser_x21___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21___closed__5);
l_Lean_Parser_Term_parser_x21 = _init_l_Lean_Parser_Term_parser_x21();
lean::mark_persistent(l_Lean_Parser_Term_parser_x21);
w = l___regBuiltinParser_Lean_Parser_Term_parser_x21(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_tparser_x21___closed__1 = _init_l_Lean_Parser_Term_tparser_x21___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___closed__1);
l_Lean_Parser_Term_tparser_x21___closed__2 = _init_l_Lean_Parser_Term_tparser_x21___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___closed__2);
l_Lean_Parser_Term_tparser_x21___closed__3 = _init_l_Lean_Parser_Term_tparser_x21___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___closed__3);
l_Lean_Parser_Term_tparser_x21___closed__4 = _init_l_Lean_Parser_Term_tparser_x21___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___closed__4);
l_Lean_Parser_Term_tparser_x21___closed__5 = _init_l_Lean_Parser_Term_tparser_x21___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21___closed__5);
l_Lean_Parser_Term_tparser_x21 = _init_l_Lean_Parser_Term_tparser_x21();
lean::mark_persistent(l_Lean_Parser_Term_tparser_x21);
w = l___regBuiltinParser_Lean_Parser_Term_tparser_x21(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8 = _init_l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___elambda__1___rarg___closed__8);
l_Lean_Parser_Term_borrowed___closed__1 = _init_l_Lean_Parser_Term_borrowed___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___closed__1);
l_Lean_Parser_Term_borrowed___closed__2 = _init_l_Lean_Parser_Term_borrowed___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___closed__2);
l_Lean_Parser_Term_borrowed___closed__3 = _init_l_Lean_Parser_Term_borrowed___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___closed__3);
l_Lean_Parser_Term_borrowed___closed__4 = _init_l_Lean_Parser_Term_borrowed___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___closed__4);
l_Lean_Parser_Term_borrowed___closed__5 = _init_l_Lean_Parser_Term_borrowed___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_borrowed___closed__5);
l_Lean_Parser_Term_borrowed = _init_l_Lean_Parser_Term_borrowed();
lean::mark_persistent(l_Lean_Parser_Term_borrowed);
w = l___regBuiltinParser_Lean_Parser_Term_borrowed(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_quotedName___closed__1 = _init_l_Lean_Parser_Term_quotedName___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___closed__1);
l_Lean_Parser_Term_quotedName___closed__2 = _init_l_Lean_Parser_Term_quotedName___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___closed__2);
l_Lean_Parser_Term_quotedName___closed__3 = _init_l_Lean_Parser_Term_quotedName___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___closed__3);
l_Lean_Parser_Term_quotedName___closed__4 = _init_l_Lean_Parser_Term_quotedName___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___closed__4);
l_Lean_Parser_Term_quotedName___closed__5 = _init_l_Lean_Parser_Term_quotedName___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_quotedName___closed__5);
l_Lean_Parser_Term_quotedName = _init_l_Lean_Parser_Term_quotedName();
lean::mark_persistent(l_Lean_Parser_Term_quotedName);
w = l___regBuiltinParser_Lean_Parser_Term_quotedName(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_letIdLhs___elambda__1___closed__1 = _init_l_Lean_Parser_Term_letIdLhs___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___elambda__1___closed__1);
l_Lean_Parser_Term_letIdLhs___closed__1 = _init_l_Lean_Parser_Term_letIdLhs___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___closed__1);
l_Lean_Parser_Term_letIdLhs___closed__2 = _init_l_Lean_Parser_Term_letIdLhs___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___closed__2);
l_Lean_Parser_Term_letIdLhs___closed__3 = _init_l_Lean_Parser_Term_letIdLhs___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___closed__3);
l_Lean_Parser_Term_letIdLhs___closed__4 = _init_l_Lean_Parser_Term_letIdLhs___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___closed__4);
l_Lean_Parser_Term_letIdLhs___closed__5 = _init_l_Lean_Parser_Term_letIdLhs___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___closed__5);
l_Lean_Parser_Term_letIdLhs___closed__6 = _init_l_Lean_Parser_Term_letIdLhs___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs___closed__6);
l_Lean_Parser_Term_letIdLhs = _init_l_Lean_Parser_Term_letIdLhs();
lean::mark_persistent(l_Lean_Parser_Term_letIdLhs);
l_Lean_Parser_Term_letIdDecl___elambda__1___closed__1 = _init_l_Lean_Parser_Term_letIdDecl___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___elambda__1___closed__1);
l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2 = _init_l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___elambda__1___closed__2);
l_Lean_Parser_Term_letIdDecl___closed__1 = _init_l_Lean_Parser_Term_letIdDecl___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___closed__1);
l_Lean_Parser_Term_letIdDecl___closed__2 = _init_l_Lean_Parser_Term_letIdDecl___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___closed__2);
l_Lean_Parser_Term_letIdDecl___closed__3 = _init_l_Lean_Parser_Term_letIdDecl___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___closed__3);
l_Lean_Parser_Term_letIdDecl___closed__4 = _init_l_Lean_Parser_Term_letIdDecl___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___closed__4);
l_Lean_Parser_Term_letIdDecl___closed__5 = _init_l_Lean_Parser_Term_letIdDecl___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl___closed__5);
l_Lean_Parser_Term_letIdDecl = _init_l_Lean_Parser_Term_letIdDecl();
lean::mark_persistent(l_Lean_Parser_Term_letIdDecl);
l_Lean_Parser_Term_equation = _init_l_Lean_Parser_Term_equation();
lean::mark_persistent(l_Lean_Parser_Term_equation);
l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1 = _init_l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1();
lean::mark_persistent(l_Lean_Parser_manyAux___main___at_Lean_Parser_Term_letEqns___elambda__1___spec__1___closed__1);
l_Lean_Parser_Term_letEqns___elambda__1___closed__1 = _init_l_Lean_Parser_Term_letEqns___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___elambda__1___closed__1);
l_Lean_Parser_Term_letEqns___elambda__1___closed__2 = _init_l_Lean_Parser_Term_letEqns___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___elambda__1___closed__2);
l_Lean_Parser_Term_letEqns___closed__1 = _init_l_Lean_Parser_Term_letEqns___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___closed__1);
l_Lean_Parser_Term_letEqns___closed__2 = _init_l_Lean_Parser_Term_letEqns___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___closed__2);
l_Lean_Parser_Term_letEqns___closed__3 = _init_l_Lean_Parser_Term_letEqns___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___closed__3);
l_Lean_Parser_Term_letEqns___closed__4 = _init_l_Lean_Parser_Term_letEqns___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___closed__4);
l_Lean_Parser_Term_letEqns___closed__5 = _init_l_Lean_Parser_Term_letEqns___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___closed__5);
l_Lean_Parser_Term_letEqns___closed__6 = _init_l_Lean_Parser_Term_letEqns___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_letEqns___closed__6);
l_Lean_Parser_Term_letEqns = _init_l_Lean_Parser_Term_letEqns();
lean::mark_persistent(l_Lean_Parser_Term_letEqns);
l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_letPatDecl___closed__1 = _init_l_Lean_Parser_Term_letPatDecl___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___closed__1);
l_Lean_Parser_Term_letPatDecl___closed__2 = _init_l_Lean_Parser_Term_letPatDecl___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___closed__2);
l_Lean_Parser_Term_letPatDecl___closed__3 = _init_l_Lean_Parser_Term_letPatDecl___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___closed__3);
l_Lean_Parser_Term_letPatDecl___closed__4 = _init_l_Lean_Parser_Term_letPatDecl___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___closed__4);
l_Lean_Parser_Term_letPatDecl___closed__5 = _init_l_Lean_Parser_Term_letPatDecl___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___closed__5);
l_Lean_Parser_Term_letPatDecl___closed__6 = _init_l_Lean_Parser_Term_letPatDecl___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl___closed__6);
l_Lean_Parser_Term_letPatDecl = _init_l_Lean_Parser_Term_letPatDecl();
lean::mark_persistent(l_Lean_Parser_Term_letPatDecl);
l_Lean_Parser_Term_letDecl___closed__1 = _init_l_Lean_Parser_Term_letDecl___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_letDecl___closed__1);
l_Lean_Parser_Term_letDecl___closed__2 = _init_l_Lean_Parser_Term_letDecl___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_letDecl___closed__2);
l_Lean_Parser_Term_letDecl___closed__3 = _init_l_Lean_Parser_Term_letDecl___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_letDecl___closed__3);
l_Lean_Parser_Term_letDecl___closed__4 = _init_l_Lean_Parser_Term_letDecl___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_letDecl___closed__4);
l_Lean_Parser_Term_letDecl = _init_l_Lean_Parser_Term_letDecl();
lean::mark_persistent(l_Lean_Parser_Term_letDecl);
l_Lean_Parser_Term_let___elambda__1___closed__1 = _init_l_Lean_Parser_Term_let___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__1);
l_Lean_Parser_Term_let___elambda__1___closed__2 = _init_l_Lean_Parser_Term_let___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__2);
l_Lean_Parser_Term_let___elambda__1___closed__3 = _init_l_Lean_Parser_Term_let___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__3);
l_Lean_Parser_Term_let___elambda__1___closed__4 = _init_l_Lean_Parser_Term_let___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__4);
l_Lean_Parser_Term_let___elambda__1___closed__5 = _init_l_Lean_Parser_Term_let___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__5);
l_Lean_Parser_Term_let___elambda__1___closed__6 = _init_l_Lean_Parser_Term_let___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__6);
l_Lean_Parser_Term_let___elambda__1___closed__7 = _init_l_Lean_Parser_Term_let___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_let___elambda__1___closed__7);
l_Lean_Parser_Term_let___closed__1 = _init_l_Lean_Parser_Term_let___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__1);
l_Lean_Parser_Term_let___closed__2 = _init_l_Lean_Parser_Term_let___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__2);
l_Lean_Parser_Term_let___closed__3 = _init_l_Lean_Parser_Term_let___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__3);
l_Lean_Parser_Term_let___closed__4 = _init_l_Lean_Parser_Term_let___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__4);
l_Lean_Parser_Term_let___closed__5 = _init_l_Lean_Parser_Term_let___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__5);
l_Lean_Parser_Term_let___closed__6 = _init_l_Lean_Parser_Term_let___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__6);
l_Lean_Parser_Term_let___closed__7 = _init_l_Lean_Parser_Term_let___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_let___closed__7);
l_Lean_Parser_Term_let = _init_l_Lean_Parser_Term_let();
lean::mark_persistent(l_Lean_Parser_Term_let);
w = l___regBuiltinParser_Lean_Parser_Term_let(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__8 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__8);
l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__9 = _init_l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___elambda__1___rarg___closed__9);
l_Lean_Parser_Term_leftArrow___closed__1 = _init_l_Lean_Parser_Term_leftArrow___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___closed__1);
l_Lean_Parser_Term_leftArrow___closed__2 = _init_l_Lean_Parser_Term_leftArrow___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___closed__2);
l_Lean_Parser_Term_leftArrow___closed__3 = _init_l_Lean_Parser_Term_leftArrow___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow___closed__3);
l_Lean_Parser_Term_leftArrow = _init_l_Lean_Parser_Term_leftArrow();
lean::mark_persistent(l_Lean_Parser_Term_leftArrow);
l_Lean_Parser_Term_doLet___elambda__1___closed__1 = _init_l_Lean_Parser_Term_doLet___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doLet___elambda__1___closed__1);
l_Lean_Parser_Term_doLet___elambda__1___closed__2 = _init_l_Lean_Parser_Term_doLet___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doLet___elambda__1___closed__2);
l_Lean_Parser_Term_doLet___closed__1 = _init_l_Lean_Parser_Term_doLet___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doLet___closed__1);
l_Lean_Parser_Term_doLet___closed__2 = _init_l_Lean_Parser_Term_doLet___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doLet___closed__2);
l_Lean_Parser_Term_doLet___closed__3 = _init_l_Lean_Parser_Term_doLet___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_doLet___closed__3);
l_Lean_Parser_Term_doLet___closed__4 = _init_l_Lean_Parser_Term_doLet___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_doLet___closed__4);
l_Lean_Parser_Term_doLet = _init_l_Lean_Parser_Term_doLet();
lean::mark_persistent(l_Lean_Parser_Term_doLet);
l_Lean_Parser_Term_doId___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_doId___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doId___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doId___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_doId___closed__1 = _init_l_Lean_Parser_Term_doId___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doId___closed__1);
l_Lean_Parser_Term_doId___closed__2 = _init_l_Lean_Parser_Term_doId___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doId___closed__2);
l_Lean_Parser_Term_doId___closed__3 = _init_l_Lean_Parser_Term_doId___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_doId___closed__3);
l_Lean_Parser_Term_doId___closed__4 = _init_l_Lean_Parser_Term_doId___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_doId___closed__4);
l_Lean_Parser_Term_doId___closed__5 = _init_l_Lean_Parser_Term_doId___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_doId___closed__5);
l_Lean_Parser_Term_doId___closed__6 = _init_l_Lean_Parser_Term_doId___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_doId___closed__6);
l_Lean_Parser_Term_doId = _init_l_Lean_Parser_Term_doId();
lean::mark_persistent(l_Lean_Parser_Term_doId);
l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doPat___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_doPat___closed__1 = _init_l_Lean_Parser_Term_doPat___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__1);
l_Lean_Parser_Term_doPat___closed__2 = _init_l_Lean_Parser_Term_doPat___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__2);
l_Lean_Parser_Term_doPat___closed__3 = _init_l_Lean_Parser_Term_doPat___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__3);
l_Lean_Parser_Term_doPat___closed__4 = _init_l_Lean_Parser_Term_doPat___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__4);
l_Lean_Parser_Term_doPat___closed__5 = _init_l_Lean_Parser_Term_doPat___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__5);
l_Lean_Parser_Term_doPat___closed__6 = _init_l_Lean_Parser_Term_doPat___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__6);
l_Lean_Parser_Term_doPat___closed__7 = _init_l_Lean_Parser_Term_doPat___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__7);
l_Lean_Parser_Term_doPat___closed__8 = _init_l_Lean_Parser_Term_doPat___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_doPat___closed__8);
l_Lean_Parser_Term_doPat = _init_l_Lean_Parser_Term_doPat();
lean::mark_persistent(l_Lean_Parser_Term_doPat);
l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doExpr___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_doExpr___closed__1 = _init_l_Lean_Parser_Term_doExpr___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doExpr___closed__1);
l_Lean_Parser_Term_doExpr___closed__2 = _init_l_Lean_Parser_Term_doExpr___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doExpr___closed__2);
l_Lean_Parser_Term_doExpr___closed__3 = _init_l_Lean_Parser_Term_doExpr___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_doExpr___closed__3);
l_Lean_Parser_Term_doExpr = _init_l_Lean_Parser_Term_doExpr();
lean::mark_persistent(l_Lean_Parser_Term_doExpr);
l_Lean_Parser_Term_doElem___closed__1 = _init_l_Lean_Parser_Term_doElem___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doElem___closed__1);
l_Lean_Parser_Term_doElem___closed__2 = _init_l_Lean_Parser_Term_doElem___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doElem___closed__2);
l_Lean_Parser_Term_doElem___closed__3 = _init_l_Lean_Parser_Term_doElem___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_doElem___closed__3);
l_Lean_Parser_Term_doElem___closed__4 = _init_l_Lean_Parser_Term_doElem___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_doElem___closed__4);
l_Lean_Parser_Term_doElem___closed__5 = _init_l_Lean_Parser_Term_doElem___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_doElem___closed__5);
l_Lean_Parser_Term_doElem = _init_l_Lean_Parser_Term_doElem();
lean::mark_persistent(l_Lean_Parser_Term_doElem);
l_Lean_Parser_Term_doSeq___elambda__1___closed__1 = _init_l_Lean_Parser_Term_doSeq___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doSeq___elambda__1___closed__1);
l_Lean_Parser_Term_doSeq___elambda__1___closed__2 = _init_l_Lean_Parser_Term_doSeq___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doSeq___elambda__1___closed__2);
l_Lean_Parser_Term_doSeq___closed__1 = _init_l_Lean_Parser_Term_doSeq___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_doSeq___closed__1);
l_Lean_Parser_Term_doSeq___closed__2 = _init_l_Lean_Parser_Term_doSeq___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_doSeq___closed__2);
l_Lean_Parser_Term_doSeq___closed__3 = _init_l_Lean_Parser_Term_doSeq___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_doSeq___closed__3);
l_Lean_Parser_Term_doSeq___closed__4 = _init_l_Lean_Parser_Term_doSeq___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_doSeq___closed__4);
l_Lean_Parser_Term_doSeq = _init_l_Lean_Parser_Term_doSeq();
lean::mark_persistent(l_Lean_Parser_Term_doSeq);
l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__1 = _init_l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__1);
l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2 = _init_l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___elambda__1___closed__2);
l_Lean_Parser_Term_bracketedDoSeq___closed__1 = _init_l_Lean_Parser_Term_bracketedDoSeq___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___closed__1);
l_Lean_Parser_Term_bracketedDoSeq___closed__2 = _init_l_Lean_Parser_Term_bracketedDoSeq___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___closed__2);
l_Lean_Parser_Term_bracketedDoSeq___closed__3 = _init_l_Lean_Parser_Term_bracketedDoSeq___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___closed__3);
l_Lean_Parser_Term_bracketedDoSeq___closed__4 = _init_l_Lean_Parser_Term_bracketedDoSeq___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___closed__4);
l_Lean_Parser_Term_bracketedDoSeq___closed__5 = _init_l_Lean_Parser_Term_bracketedDoSeq___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq___closed__5);
l_Lean_Parser_Term_bracketedDoSeq = _init_l_Lean_Parser_Term_bracketedDoSeq();
lean::mark_persistent(l_Lean_Parser_Term_bracketedDoSeq);
l_Lean_Parser_Term_do___elambda__1___closed__1 = _init_l_Lean_Parser_Term_do___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__1);
l_Lean_Parser_Term_do___elambda__1___closed__2 = _init_l_Lean_Parser_Term_do___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__2);
l_Lean_Parser_Term_do___elambda__1___closed__3 = _init_l_Lean_Parser_Term_do___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__3);
l_Lean_Parser_Term_do___elambda__1___closed__4 = _init_l_Lean_Parser_Term_do___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__4);
l_Lean_Parser_Term_do___elambda__1___closed__5 = _init_l_Lean_Parser_Term_do___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__5);
l_Lean_Parser_Term_do___elambda__1___closed__6 = _init_l_Lean_Parser_Term_do___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__6);
l_Lean_Parser_Term_do___elambda__1___closed__7 = _init_l_Lean_Parser_Term_do___elambda__1___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_do___elambda__1___closed__7);
l_Lean_Parser_Term_do___closed__1 = _init_l_Lean_Parser_Term_do___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_do___closed__1);
l_Lean_Parser_Term_do___closed__2 = _init_l_Lean_Parser_Term_do___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_do___closed__2);
l_Lean_Parser_Term_do___closed__3 = _init_l_Lean_Parser_Term_do___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_do___closed__3);
l_Lean_Parser_Term_do___closed__4 = _init_l_Lean_Parser_Term_do___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_do___closed__4);
l_Lean_Parser_Term_do___closed__5 = _init_l_Lean_Parser_Term_do___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_do___closed__5);
l_Lean_Parser_Term_do___closed__6 = _init_l_Lean_Parser_Term_do___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_do___closed__6);
l_Lean_Parser_Term_do = _init_l_Lean_Parser_Term_do();
lean::mark_persistent(l_Lean_Parser_Term_do);
w = l___regBuiltinParser_Lean_Parser_Term_do(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_not___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_not___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_not___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_not___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_not___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_not___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_not___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_not___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_not___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_not___closed__1 = _init_l_Lean_Parser_Term_not___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_not___closed__1);
l_Lean_Parser_Term_not___closed__2 = _init_l_Lean_Parser_Term_not___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_not___closed__2);
l_Lean_Parser_Term_not___closed__3 = _init_l_Lean_Parser_Term_not___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_not___closed__3);
l_Lean_Parser_Term_not___closed__4 = _init_l_Lean_Parser_Term_not___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_not___closed__4);
l_Lean_Parser_Term_not___closed__5 = _init_l_Lean_Parser_Term_not___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_not___closed__5);
l_Lean_Parser_Term_not___closed__6 = _init_l_Lean_Parser_Term_not___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_not___closed__6);
l_Lean_Parser_Term_not = _init_l_Lean_Parser_Term_not();
lean::mark_persistent(l_Lean_Parser_Term_not);
w = l___regBuiltinParser_Lean_Parser_Term_not(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7 = _init_l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_bnot___elambda__1___rarg___closed__7);
l_Lean_Parser_Term_bnot___closed__1 = _init_l_Lean_Parser_Term_bnot___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bnot___closed__1);
l_Lean_Parser_Term_bnot___closed__2 = _init_l_Lean_Parser_Term_bnot___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bnot___closed__2);
l_Lean_Parser_Term_bnot___closed__3 = _init_l_Lean_Parser_Term_bnot___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bnot___closed__3);
l_Lean_Parser_Term_bnot___closed__4 = _init_l_Lean_Parser_Term_bnot___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_bnot___closed__4);
l_Lean_Parser_Term_bnot___closed__5 = _init_l_Lean_Parser_Term_bnot___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_bnot___closed__5);
l_Lean_Parser_Term_bnot = _init_l_Lean_Parser_Term_bnot();
lean::mark_persistent(l_Lean_Parser_Term_bnot);
w = l___regBuiltinParser_Lean_Parser_Term_bnot(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3 = _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__3);
l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__4 = _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__4);
l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__5 = _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__5);
l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6 = _init_l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_uminus___elambda__1___rarg___closed__6);
l_Lean_Parser_Term_uminus___closed__1 = _init_l_Lean_Parser_Term_uminus___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_uminus___closed__1);
l_Lean_Parser_Term_uminus___closed__2 = _init_l_Lean_Parser_Term_uminus___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_uminus___closed__2);
l_Lean_Parser_Term_uminus___closed__3 = _init_l_Lean_Parser_Term_uminus___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_uminus___closed__3);
l_Lean_Parser_Term_uminus___closed__4 = _init_l_Lean_Parser_Term_uminus___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_uminus___closed__4);
l_Lean_Parser_Term_uminus___closed__5 = _init_l_Lean_Parser_Term_uminus___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_uminus___closed__5);
l_Lean_Parser_Term_uminus = _init_l_Lean_Parser_Term_uminus();
lean::mark_persistent(l_Lean_Parser_Term_uminus);
w = l___regBuiltinParser_Lean_Parser_Term_uminus(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__1 = _init_l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__1);
l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2 = _init_l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___elambda__1___rarg___closed__2);
l_Lean_Parser_Term_namedArgument___closed__1 = _init_l_Lean_Parser_Term_namedArgument___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___closed__1);
l_Lean_Parser_Term_namedArgument___closed__2 = _init_l_Lean_Parser_Term_namedArgument___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___closed__2);
l_Lean_Parser_Term_namedArgument___closed__3 = _init_l_Lean_Parser_Term_namedArgument___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___closed__3);
l_Lean_Parser_Term_namedArgument___closed__4 = _init_l_Lean_Parser_Term_namedArgument___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___closed__4);
l_Lean_Parser_Term_namedArgument___closed__5 = _init_l_Lean_Parser_Term_namedArgument___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___closed__5);
l_Lean_Parser_Term_namedArgument___closed__6 = _init_l_Lean_Parser_Term_namedArgument___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument___closed__6);
l_Lean_Parser_Term_namedArgument = _init_l_Lean_Parser_Term_namedArgument();
lean::mark_persistent(l_Lean_Parser_Term_namedArgument);
l_Lean_Parser_Term_app___elambda__1___closed__1 = _init_l_Lean_Parser_Term_app___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_app___elambda__1___closed__1);
l_Lean_Parser_Term_app___elambda__1___closed__2 = _init_l_Lean_Parser_Term_app___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_app___elambda__1___closed__2);
l_Lean_Parser_Term_app___closed__1 = _init_l_Lean_Parser_Term_app___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_app___closed__1);
l_Lean_Parser_Term_app___closed__2 = _init_l_Lean_Parser_Term_app___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_app___closed__2);
l_Lean_Parser_Term_app___closed__3 = _init_l_Lean_Parser_Term_app___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_app___closed__3);
l_Lean_Parser_Term_app___closed__4 = _init_l_Lean_Parser_Term_app___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_app___closed__4);
l_Lean_Parser_Term_app___closed__5 = _init_l_Lean_Parser_Term_app___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_app___closed__5);
l_Lean_Parser_Term_app = _init_l_Lean_Parser_Term_app();
lean::mark_persistent(l_Lean_Parser_Term_app);
w = l___regBuiltinParser_Lean_Parser_Term_app(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_checkIsSort___closed__1 = _init_l_Lean_Parser_Term_checkIsSort___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_checkIsSort___closed__1);
l_Lean_Parser_Term_checkIsSort___closed__2 = _init_l_Lean_Parser_Term_checkIsSort___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_checkIsSort___closed__2);
l_Lean_Parser_Term_checkIsSort = _init_l_Lean_Parser_Term_checkIsSort();
lean::mark_persistent(l_Lean_Parser_Term_checkIsSort);
l_Lean_Parser_Term_sortApp___elambda__1___closed__1 = _init_l_Lean_Parser_Term_sortApp___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___elambda__1___closed__1);
l_Lean_Parser_Term_sortApp___elambda__1___closed__2 = _init_l_Lean_Parser_Term_sortApp___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___elambda__1___closed__2);
l_Lean_Parser_Term_sortApp___closed__1 = _init_l_Lean_Parser_Term_sortApp___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___closed__1);
l_Lean_Parser_Term_sortApp___closed__2 = _init_l_Lean_Parser_Term_sortApp___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___closed__2);
l_Lean_Parser_Term_sortApp___closed__3 = _init_l_Lean_Parser_Term_sortApp___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___closed__3);
l_Lean_Parser_Term_sortApp___closed__4 = _init_l_Lean_Parser_Term_sortApp___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___closed__4);
l_Lean_Parser_Term_sortApp___closed__5 = _init_l_Lean_Parser_Term_sortApp___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_sortApp___closed__5);
l_Lean_Parser_Term_sortApp = _init_l_Lean_Parser_Term_sortApp();
lean::mark_persistent(l_Lean_Parser_Term_sortApp);
w = l___regBuiltinParser_Lean_Parser_Term_sortApp(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_proj___elambda__1___closed__1 = _init_l_Lean_Parser_Term_proj___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_proj___elambda__1___closed__1);
l_Lean_Parser_Term_proj___elambda__1___closed__2 = _init_l_Lean_Parser_Term_proj___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_proj___elambda__1___closed__2);
l_Lean_Parser_Term_proj___elambda__1___closed__3 = _init_l_Lean_Parser_Term_proj___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_proj___elambda__1___closed__3);
l_Lean_Parser_Term_proj___elambda__1___closed__4 = _init_l_Lean_Parser_Term_proj___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_proj___elambda__1___closed__4);
l_Lean_Parser_Term_proj___elambda__1___closed__5 = _init_l_Lean_Parser_Term_proj___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_proj___elambda__1___closed__5);
l_Lean_Parser_Term_proj___elambda__1___closed__6 = _init_l_Lean_Parser_Term_proj___elambda__1___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_proj___elambda__1___closed__6);
l_Lean_Parser_Term_proj___closed__1 = _init_l_Lean_Parser_Term_proj___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__1);
l_Lean_Parser_Term_proj___closed__2 = _init_l_Lean_Parser_Term_proj___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__2);
l_Lean_Parser_Term_proj___closed__3 = _init_l_Lean_Parser_Term_proj___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__3);
l_Lean_Parser_Term_proj___closed__4 = _init_l_Lean_Parser_Term_proj___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__4);
l_Lean_Parser_Term_proj___closed__5 = _init_l_Lean_Parser_Term_proj___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__5);
l_Lean_Parser_Term_proj___closed__6 = _init_l_Lean_Parser_Term_proj___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__6);
l_Lean_Parser_Term_proj___closed__7 = _init_l_Lean_Parser_Term_proj___closed__7();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__7);
l_Lean_Parser_Term_proj___closed__8 = _init_l_Lean_Parser_Term_proj___closed__8();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__8);
l_Lean_Parser_Term_proj___closed__9 = _init_l_Lean_Parser_Term_proj___closed__9();
lean::mark_persistent(l_Lean_Parser_Term_proj___closed__9);
l_Lean_Parser_Term_proj = _init_l_Lean_Parser_Term_proj();
lean::mark_persistent(l_Lean_Parser_Term_proj);
w = l___regBuiltinParser_Lean_Parser_Term_proj(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_arrow___elambda__1___closed__1 = _init_l_Lean_Parser_Term_arrow___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_arrow___elambda__1___closed__1);
l_Lean_Parser_Term_arrow___elambda__1___closed__2 = _init_l_Lean_Parser_Term_arrow___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_arrow___elambda__1___closed__2);
l_Lean_Parser_Term_arrow___elambda__1___closed__3 = _init_l_Lean_Parser_Term_arrow___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_arrow___elambda__1___closed__3);
l_Lean_Parser_Term_arrow___closed__1 = _init_l_Lean_Parser_Term_arrow___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_arrow___closed__1);
l_Lean_Parser_Term_arrow___closed__2 = _init_l_Lean_Parser_Term_arrow___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_arrow___closed__2);
l_Lean_Parser_Term_arrow___closed__3 = _init_l_Lean_Parser_Term_arrow___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_arrow___closed__3);
l_Lean_Parser_Term_arrow = _init_l_Lean_Parser_Term_arrow();
lean::mark_persistent(l_Lean_Parser_Term_arrow);
w = l___regBuiltinParser_Lean_Parser_Term_arrow(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_array___elambda__1___closed__1 = _init_l_Lean_Parser_Term_array___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_array___elambda__1___closed__1);
l_Lean_Parser_Term_array___elambda__1___closed__2 = _init_l_Lean_Parser_Term_array___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_array___elambda__1___closed__2);
l_Lean_Parser_Term_array___elambda__1___closed__3 = _init_l_Lean_Parser_Term_array___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_array___elambda__1___closed__3);
l_Lean_Parser_Term_array___elambda__1___closed__4 = _init_l_Lean_Parser_Term_array___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_array___elambda__1___closed__4);
l_Lean_Parser_Term_array___closed__1 = _init_l_Lean_Parser_Term_array___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_array___closed__1);
l_Lean_Parser_Term_array___closed__2 = _init_l_Lean_Parser_Term_array___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_array___closed__2);
l_Lean_Parser_Term_array___closed__3 = _init_l_Lean_Parser_Term_array___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_array___closed__3);
l_Lean_Parser_Term_array___closed__4 = _init_l_Lean_Parser_Term_array___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_array___closed__4);
l_Lean_Parser_Term_array___closed__5 = _init_l_Lean_Parser_Term_array___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_array___closed__5);
l_Lean_Parser_Term_array___closed__6 = _init_l_Lean_Parser_Term_array___closed__6();
lean::mark_persistent(l_Lean_Parser_Term_array___closed__6);
l_Lean_Parser_Term_array = _init_l_Lean_Parser_Term_array();
lean::mark_persistent(l_Lean_Parser_Term_array);
w = l___regBuiltinParser_Lean_Parser_Term_array(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_dollar___elambda__1___closed__1 = _init_l_Lean_Parser_Term_dollar___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_dollar___elambda__1___closed__1);
l_Lean_Parser_Term_dollar___elambda__1___closed__2 = _init_l_Lean_Parser_Term_dollar___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_dollar___elambda__1___closed__2);
l_Lean_Parser_Term_dollar___elambda__1___closed__3 = _init_l_Lean_Parser_Term_dollar___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_dollar___elambda__1___closed__3);
l_Lean_Parser_Term_dollar___elambda__1___closed__4 = _init_l_Lean_Parser_Term_dollar___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_dollar___elambda__1___closed__4);
l_Lean_Parser_Term_dollar___closed__1 = _init_l_Lean_Parser_Term_dollar___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_dollar___closed__1);
l_Lean_Parser_Term_dollar___closed__2 = _init_l_Lean_Parser_Term_dollar___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_dollar___closed__2);
l_Lean_Parser_Term_dollar___closed__3 = _init_l_Lean_Parser_Term_dollar___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_dollar___closed__3);
l_Lean_Parser_Term_dollar = _init_l_Lean_Parser_Term_dollar();
lean::mark_persistent(l_Lean_Parser_Term_dollar);
w = l___regBuiltinParser_Lean_Parser_Term_dollar(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_fcomp___elambda__1___closed__1 = _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___elambda__1___closed__1);
l_Lean_Parser_Term_fcomp___elambda__1___closed__2 = _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___elambda__1___closed__2);
l_Lean_Parser_Term_fcomp___elambda__1___closed__3 = _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___elambda__1___closed__3);
l_Lean_Parser_Term_fcomp___elambda__1___closed__4 = _init_l_Lean_Parser_Term_fcomp___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___elambda__1___closed__4);
l_Lean_Parser_Term_fcomp___closed__1 = _init_l_Lean_Parser_Term_fcomp___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___closed__1);
l_Lean_Parser_Term_fcomp___closed__2 = _init_l_Lean_Parser_Term_fcomp___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___closed__2);
l_Lean_Parser_Term_fcomp___closed__3 = _init_l_Lean_Parser_Term_fcomp___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_fcomp___closed__3);
l_Lean_Parser_Term_fcomp = _init_l_Lean_Parser_Term_fcomp();
lean::mark_persistent(l_Lean_Parser_Term_fcomp);
w = l___regBuiltinParser_Lean_Parser_Term_fcomp(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_prod___elambda__1___closed__1 = _init_l_Lean_Parser_Term_prod___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_prod___elambda__1___closed__1);
l_Lean_Parser_Term_prod___elambda__1___closed__2 = _init_l_Lean_Parser_Term_prod___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_prod___elambda__1___closed__2);
l_Lean_Parser_Term_prod___elambda__1___closed__3 = _init_l_Lean_Parser_Term_prod___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_prod___elambda__1___closed__3);
l_Lean_Parser_Term_prod___elambda__1___closed__4 = _init_l_Lean_Parser_Term_prod___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_prod___elambda__1___closed__4);
l_Lean_Parser_Term_prod___closed__1 = _init_l_Lean_Parser_Term_prod___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_prod___closed__1);
l_Lean_Parser_Term_prod___closed__2 = _init_l_Lean_Parser_Term_prod___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_prod___closed__2);
l_Lean_Parser_Term_prod___closed__3 = _init_l_Lean_Parser_Term_prod___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_prod___closed__3);
l_Lean_Parser_Term_prod = _init_l_Lean_Parser_Term_prod();
lean::mark_persistent(l_Lean_Parser_Term_prod);
w = l___regBuiltinParser_Lean_Parser_Term_prod(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_add___elambda__1___closed__1 = _init_l_Lean_Parser_Term_add___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_add___elambda__1___closed__1);
l_Lean_Parser_Term_add___elambda__1___closed__2 = _init_l_Lean_Parser_Term_add___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_add___elambda__1___closed__2);
l_Lean_Parser_Term_add___elambda__1___closed__3 = _init_l_Lean_Parser_Term_add___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_add___elambda__1___closed__3);
l_Lean_Parser_Term_add___elambda__1___closed__4 = _init_l_Lean_Parser_Term_add___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_add___elambda__1___closed__4);
l_Lean_Parser_Term_add___closed__1 = _init_l_Lean_Parser_Term_add___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_add___closed__1);
l_Lean_Parser_Term_add___closed__2 = _init_l_Lean_Parser_Term_add___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_add___closed__2);
l_Lean_Parser_Term_add___closed__3 = _init_l_Lean_Parser_Term_add___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_add___closed__3);
l_Lean_Parser_Term_add = _init_l_Lean_Parser_Term_add();
lean::mark_persistent(l_Lean_Parser_Term_add);
w = l___regBuiltinParser_Lean_Parser_Term_add(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_sub___elambda__1___closed__1 = _init_l_Lean_Parser_Term_sub___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sub___elambda__1___closed__1);
l_Lean_Parser_Term_sub___elambda__1___closed__2 = _init_l_Lean_Parser_Term_sub___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sub___elambda__1___closed__2);
l_Lean_Parser_Term_sub___elambda__1___closed__3 = _init_l_Lean_Parser_Term_sub___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sub___elambda__1___closed__3);
l_Lean_Parser_Term_sub___elambda__1___closed__4 = _init_l_Lean_Parser_Term_sub___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_sub___elambda__1___closed__4);
l_Lean_Parser_Term_sub___closed__1 = _init_l_Lean_Parser_Term_sub___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_sub___closed__1);
l_Lean_Parser_Term_sub___closed__2 = _init_l_Lean_Parser_Term_sub___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_sub___closed__2);
l_Lean_Parser_Term_sub___closed__3 = _init_l_Lean_Parser_Term_sub___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_sub___closed__3);
l_Lean_Parser_Term_sub = _init_l_Lean_Parser_Term_sub();
lean::mark_persistent(l_Lean_Parser_Term_sub);
w = l___regBuiltinParser_Lean_Parser_Term_sub(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_mul___elambda__1___closed__1 = _init_l_Lean_Parser_Term_mul___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mul___elambda__1___closed__1);
l_Lean_Parser_Term_mul___elambda__1___closed__2 = _init_l_Lean_Parser_Term_mul___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mul___elambda__1___closed__2);
l_Lean_Parser_Term_mul___elambda__1___closed__3 = _init_l_Lean_Parser_Term_mul___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mul___elambda__1___closed__3);
l_Lean_Parser_Term_mul___elambda__1___closed__4 = _init_l_Lean_Parser_Term_mul___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_mul___elambda__1___closed__4);
l_Lean_Parser_Term_mul___closed__1 = _init_l_Lean_Parser_Term_mul___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mul___closed__1);
l_Lean_Parser_Term_mul___closed__2 = _init_l_Lean_Parser_Term_mul___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mul___closed__2);
l_Lean_Parser_Term_mul___closed__3 = _init_l_Lean_Parser_Term_mul___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mul___closed__3);
l_Lean_Parser_Term_mul = _init_l_Lean_Parser_Term_mul();
lean::mark_persistent(l_Lean_Parser_Term_mul);
w = l___regBuiltinParser_Lean_Parser_Term_mul(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_div___elambda__1___closed__1 = _init_l_Lean_Parser_Term_div___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_div___elambda__1___closed__1);
l_Lean_Parser_Term_div___elambda__1___closed__2 = _init_l_Lean_Parser_Term_div___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_div___elambda__1___closed__2);
l_Lean_Parser_Term_div___elambda__1___closed__3 = _init_l_Lean_Parser_Term_div___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_div___elambda__1___closed__3);
l_Lean_Parser_Term_div___elambda__1___closed__4 = _init_l_Lean_Parser_Term_div___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_div___elambda__1___closed__4);
l_Lean_Parser_Term_div___closed__1 = _init_l_Lean_Parser_Term_div___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_div___closed__1);
l_Lean_Parser_Term_div___closed__2 = _init_l_Lean_Parser_Term_div___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_div___closed__2);
l_Lean_Parser_Term_div___closed__3 = _init_l_Lean_Parser_Term_div___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_div___closed__3);
l_Lean_Parser_Term_div = _init_l_Lean_Parser_Term_div();
lean::mark_persistent(l_Lean_Parser_Term_div);
w = l___regBuiltinParser_Lean_Parser_Term_div(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_mod___elambda__1___closed__1 = _init_l_Lean_Parser_Term_mod___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mod___elambda__1___closed__1);
l_Lean_Parser_Term_mod___elambda__1___closed__2 = _init_l_Lean_Parser_Term_mod___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mod___elambda__1___closed__2);
l_Lean_Parser_Term_mod___elambda__1___closed__3 = _init_l_Lean_Parser_Term_mod___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mod___elambda__1___closed__3);
l_Lean_Parser_Term_mod___elambda__1___closed__4 = _init_l_Lean_Parser_Term_mod___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_mod___elambda__1___closed__4);
l_Lean_Parser_Term_mod___closed__1 = _init_l_Lean_Parser_Term_mod___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mod___closed__1);
l_Lean_Parser_Term_mod___closed__2 = _init_l_Lean_Parser_Term_mod___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mod___closed__2);
l_Lean_Parser_Term_mod___closed__3 = _init_l_Lean_Parser_Term_mod___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mod___closed__3);
l_Lean_Parser_Term_mod = _init_l_Lean_Parser_Term_mod();
lean::mark_persistent(l_Lean_Parser_Term_mod);
w = l___regBuiltinParser_Lean_Parser_Term_mod(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_modN___elambda__1___closed__1 = _init_l_Lean_Parser_Term_modN___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_modN___elambda__1___closed__1);
l_Lean_Parser_Term_modN___elambda__1___closed__2 = _init_l_Lean_Parser_Term_modN___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_modN___elambda__1___closed__2);
l_Lean_Parser_Term_modN___elambda__1___closed__3 = _init_l_Lean_Parser_Term_modN___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_modN___elambda__1___closed__3);
l_Lean_Parser_Term_modN___elambda__1___closed__4 = _init_l_Lean_Parser_Term_modN___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_modN___elambda__1___closed__4);
l_Lean_Parser_Term_modN___closed__1 = _init_l_Lean_Parser_Term_modN___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_modN___closed__1);
l_Lean_Parser_Term_modN___closed__2 = _init_l_Lean_Parser_Term_modN___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_modN___closed__2);
l_Lean_Parser_Term_modN___closed__3 = _init_l_Lean_Parser_Term_modN___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_modN___closed__3);
l_Lean_Parser_Term_modN = _init_l_Lean_Parser_Term_modN();
lean::mark_persistent(l_Lean_Parser_Term_modN);
w = l___regBuiltinParser_Lean_Parser_Term_modN(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_pow___elambda__1___closed__1 = _init_l_Lean_Parser_Term_pow___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_pow___elambda__1___closed__1);
l_Lean_Parser_Term_pow___elambda__1___closed__2 = _init_l_Lean_Parser_Term_pow___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_pow___elambda__1___closed__2);
l_Lean_Parser_Term_pow___elambda__1___closed__3 = _init_l_Lean_Parser_Term_pow___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_pow___elambda__1___closed__3);
l_Lean_Parser_Term_pow___elambda__1___closed__4 = _init_l_Lean_Parser_Term_pow___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_pow___elambda__1___closed__4);
l_Lean_Parser_Term_pow___closed__1 = _init_l_Lean_Parser_Term_pow___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_pow___closed__1);
l_Lean_Parser_Term_pow___closed__2 = _init_l_Lean_Parser_Term_pow___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_pow___closed__2);
l_Lean_Parser_Term_pow___closed__3 = _init_l_Lean_Parser_Term_pow___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_pow___closed__3);
l_Lean_Parser_Term_pow = _init_l_Lean_Parser_Term_pow();
lean::mark_persistent(l_Lean_Parser_Term_pow);
w = l___regBuiltinParser_Lean_Parser_Term_pow(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_le___elambda__1___closed__1 = _init_l_Lean_Parser_Term_le___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_le___elambda__1___closed__1);
l_Lean_Parser_Term_le___elambda__1___closed__2 = _init_l_Lean_Parser_Term_le___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_le___elambda__1___closed__2);
l_Lean_Parser_Term_le___elambda__1___closed__3 = _init_l_Lean_Parser_Term_le___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_le___elambda__1___closed__3);
l_Lean_Parser_Term_le___elambda__1___closed__4 = _init_l_Lean_Parser_Term_le___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_le___elambda__1___closed__4);
l_Lean_Parser_Term_le___elambda__1___closed__5 = _init_l_Lean_Parser_Term_le___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_le___elambda__1___closed__5);
l_Lean_Parser_Term_le___closed__1 = _init_l_Lean_Parser_Term_le___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_le___closed__1);
l_Lean_Parser_Term_le___closed__2 = _init_l_Lean_Parser_Term_le___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_le___closed__2);
l_Lean_Parser_Term_le___closed__3 = _init_l_Lean_Parser_Term_le___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_le___closed__3);
l_Lean_Parser_Term_le = _init_l_Lean_Parser_Term_le();
lean::mark_persistent(l_Lean_Parser_Term_le);
w = l___regBuiltinParser_Lean_Parser_Term_le(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_ge___elambda__1___closed__1 = _init_l_Lean_Parser_Term_ge___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_ge___elambda__1___closed__1);
l_Lean_Parser_Term_ge___elambda__1___closed__2 = _init_l_Lean_Parser_Term_ge___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_ge___elambda__1___closed__2);
l_Lean_Parser_Term_ge___elambda__1___closed__3 = _init_l_Lean_Parser_Term_ge___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_ge___elambda__1___closed__3);
l_Lean_Parser_Term_ge___elambda__1___closed__4 = _init_l_Lean_Parser_Term_ge___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_ge___elambda__1___closed__4);
l_Lean_Parser_Term_ge___elambda__1___closed__5 = _init_l_Lean_Parser_Term_ge___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_ge___elambda__1___closed__5);
l_Lean_Parser_Term_ge___closed__1 = _init_l_Lean_Parser_Term_ge___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_ge___closed__1);
l_Lean_Parser_Term_ge___closed__2 = _init_l_Lean_Parser_Term_ge___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_ge___closed__2);
l_Lean_Parser_Term_ge___closed__3 = _init_l_Lean_Parser_Term_ge___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_ge___closed__3);
l_Lean_Parser_Term_ge = _init_l_Lean_Parser_Term_ge();
lean::mark_persistent(l_Lean_Parser_Term_ge);
w = l___regBuiltinParser_Lean_Parser_Term_ge(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_lt___elambda__1___closed__1 = _init_l_Lean_Parser_Term_lt___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_lt___elambda__1___closed__1);
l_Lean_Parser_Term_lt___elambda__1___closed__2 = _init_l_Lean_Parser_Term_lt___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_lt___elambda__1___closed__2);
l_Lean_Parser_Term_lt___elambda__1___closed__3 = _init_l_Lean_Parser_Term_lt___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_lt___elambda__1___closed__3);
l_Lean_Parser_Term_lt___elambda__1___closed__4 = _init_l_Lean_Parser_Term_lt___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_lt___elambda__1___closed__4);
l_Lean_Parser_Term_lt___closed__1 = _init_l_Lean_Parser_Term_lt___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_lt___closed__1);
l_Lean_Parser_Term_lt___closed__2 = _init_l_Lean_Parser_Term_lt___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_lt___closed__2);
l_Lean_Parser_Term_lt___closed__3 = _init_l_Lean_Parser_Term_lt___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_lt___closed__3);
l_Lean_Parser_Term_lt = _init_l_Lean_Parser_Term_lt();
lean::mark_persistent(l_Lean_Parser_Term_lt);
w = l___regBuiltinParser_Lean_Parser_Term_lt(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_gt___elambda__1___closed__1 = _init_l_Lean_Parser_Term_gt___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_gt___elambda__1___closed__1);
l_Lean_Parser_Term_gt___elambda__1___closed__2 = _init_l_Lean_Parser_Term_gt___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_gt___elambda__1___closed__2);
l_Lean_Parser_Term_gt___elambda__1___closed__3 = _init_l_Lean_Parser_Term_gt___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_gt___elambda__1___closed__3);
l_Lean_Parser_Term_gt___elambda__1___closed__4 = _init_l_Lean_Parser_Term_gt___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_gt___elambda__1___closed__4);
l_Lean_Parser_Term_gt___closed__1 = _init_l_Lean_Parser_Term_gt___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_gt___closed__1);
l_Lean_Parser_Term_gt___closed__2 = _init_l_Lean_Parser_Term_gt___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_gt___closed__2);
l_Lean_Parser_Term_gt___closed__3 = _init_l_Lean_Parser_Term_gt___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_gt___closed__3);
l_Lean_Parser_Term_gt = _init_l_Lean_Parser_Term_gt();
lean::mark_persistent(l_Lean_Parser_Term_gt);
w = l___regBuiltinParser_Lean_Parser_Term_gt(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_eq___elambda__1___closed__1 = _init_l_Lean_Parser_Term_eq___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_eq___elambda__1___closed__1);
l_Lean_Parser_Term_eq___elambda__1___closed__2 = _init_l_Lean_Parser_Term_eq___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_eq___elambda__1___closed__2);
l_Lean_Parser_Term_eq___elambda__1___closed__3 = _init_l_Lean_Parser_Term_eq___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_eq___elambda__1___closed__3);
l_Lean_Parser_Term_eq___elambda__1___closed__4 = _init_l_Lean_Parser_Term_eq___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_eq___elambda__1___closed__4);
l_Lean_Parser_Term_eq___closed__1 = _init_l_Lean_Parser_Term_eq___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_eq___closed__1);
l_Lean_Parser_Term_eq___closed__2 = _init_l_Lean_Parser_Term_eq___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_eq___closed__2);
l_Lean_Parser_Term_eq___closed__3 = _init_l_Lean_Parser_Term_eq___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_eq___closed__3);
l_Lean_Parser_Term_eq = _init_l_Lean_Parser_Term_eq();
lean::mark_persistent(l_Lean_Parser_Term_eq);
w = l___regBuiltinParser_Lean_Parser_Term_eq(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_ne___elambda__1___closed__1 = _init_l_Lean_Parser_Term_ne___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_ne___elambda__1___closed__1);
l_Lean_Parser_Term_ne___elambda__1___closed__2 = _init_l_Lean_Parser_Term_ne___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_ne___elambda__1___closed__2);
l_Lean_Parser_Term_ne___elambda__1___closed__3 = _init_l_Lean_Parser_Term_ne___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_ne___elambda__1___closed__3);
l_Lean_Parser_Term_ne___elambda__1___closed__4 = _init_l_Lean_Parser_Term_ne___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_ne___elambda__1___closed__4);
l_Lean_Parser_Term_ne___closed__1 = _init_l_Lean_Parser_Term_ne___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_ne___closed__1);
l_Lean_Parser_Term_ne___closed__2 = _init_l_Lean_Parser_Term_ne___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_ne___closed__2);
l_Lean_Parser_Term_ne___closed__3 = _init_l_Lean_Parser_Term_ne___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_ne___closed__3);
l_Lean_Parser_Term_ne = _init_l_Lean_Parser_Term_ne();
lean::mark_persistent(l_Lean_Parser_Term_ne);
w = l___regBuiltinParser_Lean_Parser_Term_ne(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_beq___elambda__1___closed__1 = _init_l_Lean_Parser_Term_beq___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_beq___elambda__1___closed__1);
l_Lean_Parser_Term_beq___elambda__1___closed__2 = _init_l_Lean_Parser_Term_beq___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_beq___elambda__1___closed__2);
l_Lean_Parser_Term_beq___elambda__1___closed__3 = _init_l_Lean_Parser_Term_beq___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_beq___elambda__1___closed__3);
l_Lean_Parser_Term_beq___elambda__1___closed__4 = _init_l_Lean_Parser_Term_beq___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_beq___elambda__1___closed__4);
l_Lean_Parser_Term_beq___closed__1 = _init_l_Lean_Parser_Term_beq___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_beq___closed__1);
l_Lean_Parser_Term_beq___closed__2 = _init_l_Lean_Parser_Term_beq___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_beq___closed__2);
l_Lean_Parser_Term_beq___closed__3 = _init_l_Lean_Parser_Term_beq___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_beq___closed__3);
l_Lean_Parser_Term_beq = _init_l_Lean_Parser_Term_beq();
lean::mark_persistent(l_Lean_Parser_Term_beq);
w = l___regBuiltinParser_Lean_Parser_Term_beq(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_bne___elambda__1___closed__1 = _init_l_Lean_Parser_Term_bne___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bne___elambda__1___closed__1);
l_Lean_Parser_Term_bne___elambda__1___closed__2 = _init_l_Lean_Parser_Term_bne___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bne___elambda__1___closed__2);
l_Lean_Parser_Term_bne___elambda__1___closed__3 = _init_l_Lean_Parser_Term_bne___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bne___elambda__1___closed__3);
l_Lean_Parser_Term_bne___elambda__1___closed__4 = _init_l_Lean_Parser_Term_bne___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_bne___elambda__1___closed__4);
l_Lean_Parser_Term_bne___closed__1 = _init_l_Lean_Parser_Term_bne___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bne___closed__1);
l_Lean_Parser_Term_bne___closed__2 = _init_l_Lean_Parser_Term_bne___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bne___closed__2);
l_Lean_Parser_Term_bne___closed__3 = _init_l_Lean_Parser_Term_bne___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bne___closed__3);
l_Lean_Parser_Term_bne = _init_l_Lean_Parser_Term_bne();
lean::mark_persistent(l_Lean_Parser_Term_bne);
w = l___regBuiltinParser_Lean_Parser_Term_bne(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_heq___elambda__1___closed__1 = _init_l_Lean_Parser_Term_heq___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_heq___elambda__1___closed__1);
l_Lean_Parser_Term_heq___elambda__1___closed__2 = _init_l_Lean_Parser_Term_heq___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_heq___elambda__1___closed__2);
l_Lean_Parser_Term_heq___elambda__1___closed__3 = _init_l_Lean_Parser_Term_heq___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_heq___elambda__1___closed__3);
l_Lean_Parser_Term_heq___elambda__1___closed__4 = _init_l_Lean_Parser_Term_heq___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_heq___elambda__1___closed__4);
l_Lean_Parser_Term_heq___elambda__1___closed__5 = _init_l_Lean_Parser_Term_heq___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_heq___elambda__1___closed__5);
l_Lean_Parser_Term_heq___closed__1 = _init_l_Lean_Parser_Term_heq___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_heq___closed__1);
l_Lean_Parser_Term_heq___closed__2 = _init_l_Lean_Parser_Term_heq___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_heq___closed__2);
l_Lean_Parser_Term_heq___closed__3 = _init_l_Lean_Parser_Term_heq___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_heq___closed__3);
l_Lean_Parser_Term_heq = _init_l_Lean_Parser_Term_heq();
lean::mark_persistent(l_Lean_Parser_Term_heq);
w = l___regBuiltinParser_Lean_Parser_Term_heq(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_equiv___elambda__1___closed__1 = _init_l_Lean_Parser_Term_equiv___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_equiv___elambda__1___closed__1);
l_Lean_Parser_Term_equiv___elambda__1___closed__2 = _init_l_Lean_Parser_Term_equiv___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_equiv___elambda__1___closed__2);
l_Lean_Parser_Term_equiv___elambda__1___closed__3 = _init_l_Lean_Parser_Term_equiv___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_equiv___elambda__1___closed__3);
l_Lean_Parser_Term_equiv___elambda__1___closed__4 = _init_l_Lean_Parser_Term_equiv___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_equiv___elambda__1___closed__4);
l_Lean_Parser_Term_equiv___closed__1 = _init_l_Lean_Parser_Term_equiv___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_equiv___closed__1);
l_Lean_Parser_Term_equiv___closed__2 = _init_l_Lean_Parser_Term_equiv___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_equiv___closed__2);
l_Lean_Parser_Term_equiv___closed__3 = _init_l_Lean_Parser_Term_equiv___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_equiv___closed__3);
l_Lean_Parser_Term_equiv = _init_l_Lean_Parser_Term_equiv();
lean::mark_persistent(l_Lean_Parser_Term_equiv);
w = l___regBuiltinParser_Lean_Parser_Term_equiv(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_subst___elambda__1___closed__1 = _init_l_Lean_Parser_Term_subst___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_subst___elambda__1___closed__1);
l_Lean_Parser_Term_subst___elambda__1___closed__2 = _init_l_Lean_Parser_Term_subst___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_subst___elambda__1___closed__2);
l_Lean_Parser_Term_subst___elambda__1___closed__3 = _init_l_Lean_Parser_Term_subst___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_subst___elambda__1___closed__3);
l_Lean_Parser_Term_subst___elambda__1___closed__4 = _init_l_Lean_Parser_Term_subst___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_subst___elambda__1___closed__4);
l_Lean_Parser_Term_subst___closed__1 = _init_l_Lean_Parser_Term_subst___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_subst___closed__1);
l_Lean_Parser_Term_subst___closed__2 = _init_l_Lean_Parser_Term_subst___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_subst___closed__2);
l_Lean_Parser_Term_subst___closed__3 = _init_l_Lean_Parser_Term_subst___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_subst___closed__3);
l_Lean_Parser_Term_subst = _init_l_Lean_Parser_Term_subst();
lean::mark_persistent(l_Lean_Parser_Term_subst);
w = l___regBuiltinParser_Lean_Parser_Term_subst(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_and___elambda__1___closed__1 = _init_l_Lean_Parser_Term_and___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_and___elambda__1___closed__1);
l_Lean_Parser_Term_and___elambda__1___closed__2 = _init_l_Lean_Parser_Term_and___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_and___elambda__1___closed__2);
l_Lean_Parser_Term_and___elambda__1___closed__3 = _init_l_Lean_Parser_Term_and___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_and___elambda__1___closed__3);
l_Lean_Parser_Term_and___elambda__1___closed__4 = _init_l_Lean_Parser_Term_and___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_and___elambda__1___closed__4);
l_Lean_Parser_Term_and___elambda__1___closed__5 = _init_l_Lean_Parser_Term_and___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_and___elambda__1___closed__5);
l_Lean_Parser_Term_and___closed__1 = _init_l_Lean_Parser_Term_and___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_and___closed__1);
l_Lean_Parser_Term_and___closed__2 = _init_l_Lean_Parser_Term_and___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_and___closed__2);
l_Lean_Parser_Term_and___closed__3 = _init_l_Lean_Parser_Term_and___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_and___closed__3);
l_Lean_Parser_Term_and = _init_l_Lean_Parser_Term_and();
lean::mark_persistent(l_Lean_Parser_Term_and);
w = l___regBuiltinParser_Lean_Parser_Term_and(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_or___elambda__1___closed__1 = _init_l_Lean_Parser_Term_or___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_or___elambda__1___closed__1);
l_Lean_Parser_Term_or___elambda__1___closed__2 = _init_l_Lean_Parser_Term_or___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_or___elambda__1___closed__2);
l_Lean_Parser_Term_or___elambda__1___closed__3 = _init_l_Lean_Parser_Term_or___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_or___elambda__1___closed__3);
l_Lean_Parser_Term_or___elambda__1___closed__4 = _init_l_Lean_Parser_Term_or___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_or___elambda__1___closed__4);
l_Lean_Parser_Term_or___elambda__1___closed__5 = _init_l_Lean_Parser_Term_or___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_or___elambda__1___closed__5);
l_Lean_Parser_Term_or___closed__1 = _init_l_Lean_Parser_Term_or___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_or___closed__1);
l_Lean_Parser_Term_or___closed__2 = _init_l_Lean_Parser_Term_or___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_or___closed__2);
l_Lean_Parser_Term_or___closed__3 = _init_l_Lean_Parser_Term_or___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_or___closed__3);
l_Lean_Parser_Term_or = _init_l_Lean_Parser_Term_or();
lean::mark_persistent(l_Lean_Parser_Term_or);
w = l___regBuiltinParser_Lean_Parser_Term_or(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_iff___elambda__1___closed__1 = _init_l_Lean_Parser_Term_iff___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_iff___elambda__1___closed__1);
l_Lean_Parser_Term_iff___elambda__1___closed__2 = _init_l_Lean_Parser_Term_iff___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_iff___elambda__1___closed__2);
l_Lean_Parser_Term_iff___elambda__1___closed__3 = _init_l_Lean_Parser_Term_iff___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_iff___elambda__1___closed__3);
l_Lean_Parser_Term_iff___elambda__1___closed__4 = _init_l_Lean_Parser_Term_iff___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_iff___elambda__1___closed__4);
l_Lean_Parser_Term_iff___elambda__1___closed__5 = _init_l_Lean_Parser_Term_iff___elambda__1___closed__5();
lean::mark_persistent(l_Lean_Parser_Term_iff___elambda__1___closed__5);
l_Lean_Parser_Term_iff___closed__1 = _init_l_Lean_Parser_Term_iff___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_iff___closed__1);
l_Lean_Parser_Term_iff___closed__2 = _init_l_Lean_Parser_Term_iff___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_iff___closed__2);
l_Lean_Parser_Term_iff___closed__3 = _init_l_Lean_Parser_Term_iff___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_iff___closed__3);
l_Lean_Parser_Term_iff = _init_l_Lean_Parser_Term_iff();
lean::mark_persistent(l_Lean_Parser_Term_iff);
w = l___regBuiltinParser_Lean_Parser_Term_iff(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_band___elambda__1___closed__1 = _init_l_Lean_Parser_Term_band___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_band___elambda__1___closed__1);
l_Lean_Parser_Term_band___elambda__1___closed__2 = _init_l_Lean_Parser_Term_band___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_band___elambda__1___closed__2);
l_Lean_Parser_Term_band___elambda__1___closed__3 = _init_l_Lean_Parser_Term_band___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_band___elambda__1___closed__3);
l_Lean_Parser_Term_band___elambda__1___closed__4 = _init_l_Lean_Parser_Term_band___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_band___elambda__1___closed__4);
l_Lean_Parser_Term_band___closed__1 = _init_l_Lean_Parser_Term_band___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_band___closed__1);
l_Lean_Parser_Term_band___closed__2 = _init_l_Lean_Parser_Term_band___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_band___closed__2);
l_Lean_Parser_Term_band___closed__3 = _init_l_Lean_Parser_Term_band___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_band___closed__3);
l_Lean_Parser_Term_band = _init_l_Lean_Parser_Term_band();
lean::mark_persistent(l_Lean_Parser_Term_band);
w = l___regBuiltinParser_Lean_Parser_Term_band(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_bor___elambda__1___closed__1 = _init_l_Lean_Parser_Term_bor___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bor___elambda__1___closed__1);
l_Lean_Parser_Term_bor___elambda__1___closed__2 = _init_l_Lean_Parser_Term_bor___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bor___elambda__1___closed__2);
l_Lean_Parser_Term_bor___elambda__1___closed__3 = _init_l_Lean_Parser_Term_bor___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bor___elambda__1___closed__3);
l_Lean_Parser_Term_bor___elambda__1___closed__4 = _init_l_Lean_Parser_Term_bor___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_bor___elambda__1___closed__4);
l_Lean_Parser_Term_bor___closed__1 = _init_l_Lean_Parser_Term_bor___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bor___closed__1);
l_Lean_Parser_Term_bor___closed__2 = _init_l_Lean_Parser_Term_bor___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bor___closed__2);
l_Lean_Parser_Term_bor___closed__3 = _init_l_Lean_Parser_Term_bor___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bor___closed__3);
l_Lean_Parser_Term_bor = _init_l_Lean_Parser_Term_bor();
lean::mark_persistent(l_Lean_Parser_Term_bor);
w = l___regBuiltinParser_Lean_Parser_Term_bor(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_append___elambda__1___closed__1 = _init_l_Lean_Parser_Term_append___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_append___elambda__1___closed__1);
l_Lean_Parser_Term_append___elambda__1___closed__2 = _init_l_Lean_Parser_Term_append___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_append___elambda__1___closed__2);
l_Lean_Parser_Term_append___elambda__1___closed__3 = _init_l_Lean_Parser_Term_append___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_append___elambda__1___closed__3);
l_Lean_Parser_Term_append___elambda__1___closed__4 = _init_l_Lean_Parser_Term_append___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_append___elambda__1___closed__4);
l_Lean_Parser_Term_append___closed__1 = _init_l_Lean_Parser_Term_append___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_append___closed__1);
l_Lean_Parser_Term_append___closed__2 = _init_l_Lean_Parser_Term_append___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_append___closed__2);
l_Lean_Parser_Term_append___closed__3 = _init_l_Lean_Parser_Term_append___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_append___closed__3);
l_Lean_Parser_Term_append = _init_l_Lean_Parser_Term_append();
lean::mark_persistent(l_Lean_Parser_Term_append);
w = l___regBuiltinParser_Lean_Parser_Term_append(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_cons___elambda__1___closed__1 = _init_l_Lean_Parser_Term_cons___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_cons___elambda__1___closed__1);
l_Lean_Parser_Term_cons___elambda__1___closed__2 = _init_l_Lean_Parser_Term_cons___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_cons___elambda__1___closed__2);
l_Lean_Parser_Term_cons___elambda__1___closed__3 = _init_l_Lean_Parser_Term_cons___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_cons___elambda__1___closed__3);
l_Lean_Parser_Term_cons___elambda__1___closed__4 = _init_l_Lean_Parser_Term_cons___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_cons___elambda__1___closed__4);
l_Lean_Parser_Term_cons___closed__1 = _init_l_Lean_Parser_Term_cons___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_cons___closed__1);
l_Lean_Parser_Term_cons___closed__2 = _init_l_Lean_Parser_Term_cons___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_cons___closed__2);
l_Lean_Parser_Term_cons___closed__3 = _init_l_Lean_Parser_Term_cons___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_cons___closed__3);
l_Lean_Parser_Term_cons = _init_l_Lean_Parser_Term_cons();
lean::mark_persistent(l_Lean_Parser_Term_cons);
w = l___regBuiltinParser_Lean_Parser_Term_cons(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_orelse___elambda__1___closed__1 = _init_l_Lean_Parser_Term_orelse___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_orelse___elambda__1___closed__1);
l_Lean_Parser_Term_orelse___elambda__1___closed__2 = _init_l_Lean_Parser_Term_orelse___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_orelse___elambda__1___closed__2);
l_Lean_Parser_Term_orelse___elambda__1___closed__3 = _init_l_Lean_Parser_Term_orelse___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_orelse___elambda__1___closed__3);
l_Lean_Parser_Term_orelse___elambda__1___closed__4 = _init_l_Lean_Parser_Term_orelse___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_orelse___elambda__1___closed__4);
l_Lean_Parser_Term_orelse___closed__1 = _init_l_Lean_Parser_Term_orelse___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_orelse___closed__1);
l_Lean_Parser_Term_orelse___closed__2 = _init_l_Lean_Parser_Term_orelse___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_orelse___closed__2);
l_Lean_Parser_Term_orelse___closed__3 = _init_l_Lean_Parser_Term_orelse___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_orelse___closed__3);
l_Lean_Parser_Term_orelse = _init_l_Lean_Parser_Term_orelse();
lean::mark_persistent(l_Lean_Parser_Term_orelse);
w = l___regBuiltinParser_Lean_Parser_Term_orelse(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_orM___elambda__1___closed__1 = _init_l_Lean_Parser_Term_orM___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_orM___elambda__1___closed__1);
l_Lean_Parser_Term_orM___elambda__1___closed__2 = _init_l_Lean_Parser_Term_orM___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_orM___elambda__1___closed__2);
l_Lean_Parser_Term_orM___elambda__1___closed__3 = _init_l_Lean_Parser_Term_orM___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_orM___elambda__1___closed__3);
l_Lean_Parser_Term_orM___elambda__1___closed__4 = _init_l_Lean_Parser_Term_orM___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_orM___elambda__1___closed__4);
l_Lean_Parser_Term_orM___closed__1 = _init_l_Lean_Parser_Term_orM___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_orM___closed__1);
l_Lean_Parser_Term_orM___closed__2 = _init_l_Lean_Parser_Term_orM___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_orM___closed__2);
l_Lean_Parser_Term_orM___closed__3 = _init_l_Lean_Parser_Term_orM___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_orM___closed__3);
l_Lean_Parser_Term_orM = _init_l_Lean_Parser_Term_orM();
lean::mark_persistent(l_Lean_Parser_Term_orM);
w = l___regBuiltinParser_Lean_Parser_Term_orM(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_andM___elambda__1___closed__1 = _init_l_Lean_Parser_Term_andM___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_andM___elambda__1___closed__1);
l_Lean_Parser_Term_andM___elambda__1___closed__2 = _init_l_Lean_Parser_Term_andM___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_andM___elambda__1___closed__2);
l_Lean_Parser_Term_andM___elambda__1___closed__3 = _init_l_Lean_Parser_Term_andM___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_andM___elambda__1___closed__3);
l_Lean_Parser_Term_andM___elambda__1___closed__4 = _init_l_Lean_Parser_Term_andM___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_andM___elambda__1___closed__4);
l_Lean_Parser_Term_andM___closed__1 = _init_l_Lean_Parser_Term_andM___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_andM___closed__1);
l_Lean_Parser_Term_andM___closed__2 = _init_l_Lean_Parser_Term_andM___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_andM___closed__2);
l_Lean_Parser_Term_andM___closed__3 = _init_l_Lean_Parser_Term_andM___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_andM___closed__3);
l_Lean_Parser_Term_andM = _init_l_Lean_Parser_Term_andM();
lean::mark_persistent(l_Lean_Parser_Term_andM);
w = l___regBuiltinParser_Lean_Parser_Term_andM(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_andthen___elambda__1___closed__1 = _init_l_Lean_Parser_Term_andthen___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_andthen___elambda__1___closed__1);
l_Lean_Parser_Term_andthen___elambda__1___closed__2 = _init_l_Lean_Parser_Term_andthen___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_andthen___elambda__1___closed__2);
l_Lean_Parser_Term_andthen___elambda__1___closed__3 = _init_l_Lean_Parser_Term_andthen___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_andthen___elambda__1___closed__3);
l_Lean_Parser_Term_andthen___elambda__1___closed__4 = _init_l_Lean_Parser_Term_andthen___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_andthen___elambda__1___closed__4);
l_Lean_Parser_Term_andthen___closed__1 = _init_l_Lean_Parser_Term_andthen___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_andthen___closed__1);
l_Lean_Parser_Term_andthen___closed__2 = _init_l_Lean_Parser_Term_andthen___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_andthen___closed__2);
l_Lean_Parser_Term_andthen___closed__3 = _init_l_Lean_Parser_Term_andthen___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_andthen___closed__3);
l_Lean_Parser_Term_andthen = _init_l_Lean_Parser_Term_andthen();
lean::mark_persistent(l_Lean_Parser_Term_andthen);
w = l___regBuiltinParser_Lean_Parser_Term_andthen(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_bind___elambda__1___closed__1 = _init_l_Lean_Parser_Term_bind___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bind___elambda__1___closed__1);
l_Lean_Parser_Term_bind___elambda__1___closed__2 = _init_l_Lean_Parser_Term_bind___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bind___elambda__1___closed__2);
l_Lean_Parser_Term_bind___elambda__1___closed__3 = _init_l_Lean_Parser_Term_bind___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bind___elambda__1___closed__3);
l_Lean_Parser_Term_bind___elambda__1___closed__4 = _init_l_Lean_Parser_Term_bind___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_bind___elambda__1___closed__4);
l_Lean_Parser_Term_bind___closed__1 = _init_l_Lean_Parser_Term_bind___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_bind___closed__1);
l_Lean_Parser_Term_bind___closed__2 = _init_l_Lean_Parser_Term_bind___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_bind___closed__2);
l_Lean_Parser_Term_bind___closed__3 = _init_l_Lean_Parser_Term_bind___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_bind___closed__3);
l_Lean_Parser_Term_bind = _init_l_Lean_Parser_Term_bind();
lean::mark_persistent(l_Lean_Parser_Term_bind);
w = l___regBuiltinParser_Lean_Parser_Term_bind(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_mapRev___elambda__1___closed__1 = _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___elambda__1___closed__1);
l_Lean_Parser_Term_mapRev___elambda__1___closed__2 = _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___elambda__1___closed__2);
l_Lean_Parser_Term_mapRev___elambda__1___closed__3 = _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___elambda__1___closed__3);
l_Lean_Parser_Term_mapRev___elambda__1___closed__4 = _init_l_Lean_Parser_Term_mapRev___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___elambda__1___closed__4);
l_Lean_Parser_Term_mapRev___closed__1 = _init_l_Lean_Parser_Term_mapRev___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___closed__1);
l_Lean_Parser_Term_mapRev___closed__2 = _init_l_Lean_Parser_Term_mapRev___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___closed__2);
l_Lean_Parser_Term_mapRev___closed__3 = _init_l_Lean_Parser_Term_mapRev___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mapRev___closed__3);
l_Lean_Parser_Term_mapRev = _init_l_Lean_Parser_Term_mapRev();
lean::mark_persistent(l_Lean_Parser_Term_mapRev);
w = l___regBuiltinParser_Lean_Parser_Term_mapRev(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_seq___elambda__1___closed__1 = _init_l_Lean_Parser_Term_seq___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_seq___elambda__1___closed__1);
l_Lean_Parser_Term_seq___elambda__1___closed__2 = _init_l_Lean_Parser_Term_seq___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_seq___elambda__1___closed__2);
l_Lean_Parser_Term_seq___elambda__1___closed__3 = _init_l_Lean_Parser_Term_seq___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_seq___elambda__1___closed__3);
l_Lean_Parser_Term_seq___elambda__1___closed__4 = _init_l_Lean_Parser_Term_seq___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_seq___elambda__1___closed__4);
l_Lean_Parser_Term_seq___closed__1 = _init_l_Lean_Parser_Term_seq___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_seq___closed__1);
l_Lean_Parser_Term_seq___closed__2 = _init_l_Lean_Parser_Term_seq___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_seq___closed__2);
l_Lean_Parser_Term_seq___closed__3 = _init_l_Lean_Parser_Term_seq___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_seq___closed__3);
l_Lean_Parser_Term_seq = _init_l_Lean_Parser_Term_seq();
lean::mark_persistent(l_Lean_Parser_Term_seq);
w = l___regBuiltinParser_Lean_Parser_Term_seq(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_seqLeft___elambda__1___closed__1 = _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___elambda__1___closed__1);
l_Lean_Parser_Term_seqLeft___elambda__1___closed__2 = _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___elambda__1___closed__2);
l_Lean_Parser_Term_seqLeft___elambda__1___closed__3 = _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___elambda__1___closed__3);
l_Lean_Parser_Term_seqLeft___elambda__1___closed__4 = _init_l_Lean_Parser_Term_seqLeft___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___elambda__1___closed__4);
l_Lean_Parser_Term_seqLeft___closed__1 = _init_l_Lean_Parser_Term_seqLeft___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___closed__1);
l_Lean_Parser_Term_seqLeft___closed__2 = _init_l_Lean_Parser_Term_seqLeft___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___closed__2);
l_Lean_Parser_Term_seqLeft___closed__3 = _init_l_Lean_Parser_Term_seqLeft___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft___closed__3);
l_Lean_Parser_Term_seqLeft = _init_l_Lean_Parser_Term_seqLeft();
lean::mark_persistent(l_Lean_Parser_Term_seqLeft);
w = l___regBuiltinParser_Lean_Parser_Term_seqLeft(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_seqRight___elambda__1___closed__1 = _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___elambda__1___closed__1);
l_Lean_Parser_Term_seqRight___elambda__1___closed__2 = _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___elambda__1___closed__2);
l_Lean_Parser_Term_seqRight___elambda__1___closed__3 = _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___elambda__1___closed__3);
l_Lean_Parser_Term_seqRight___elambda__1___closed__4 = _init_l_Lean_Parser_Term_seqRight___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___elambda__1___closed__4);
l_Lean_Parser_Term_seqRight___closed__1 = _init_l_Lean_Parser_Term_seqRight___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___closed__1);
l_Lean_Parser_Term_seqRight___closed__2 = _init_l_Lean_Parser_Term_seqRight___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___closed__2);
l_Lean_Parser_Term_seqRight___closed__3 = _init_l_Lean_Parser_Term_seqRight___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_seqRight___closed__3);
l_Lean_Parser_Term_seqRight = _init_l_Lean_Parser_Term_seqRight();
lean::mark_persistent(l_Lean_Parser_Term_seqRight);
w = l___regBuiltinParser_Lean_Parser_Term_seqRight(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_map___elambda__1___closed__1 = _init_l_Lean_Parser_Term_map___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_map___elambda__1___closed__1);
l_Lean_Parser_Term_map___elambda__1___closed__2 = _init_l_Lean_Parser_Term_map___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_map___elambda__1___closed__2);
l_Lean_Parser_Term_map___elambda__1___closed__3 = _init_l_Lean_Parser_Term_map___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_map___elambda__1___closed__3);
l_Lean_Parser_Term_map___elambda__1___closed__4 = _init_l_Lean_Parser_Term_map___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_map___elambda__1___closed__4);
l_Lean_Parser_Term_map___closed__1 = _init_l_Lean_Parser_Term_map___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_map___closed__1);
l_Lean_Parser_Term_map___closed__2 = _init_l_Lean_Parser_Term_map___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_map___closed__2);
l_Lean_Parser_Term_map___closed__3 = _init_l_Lean_Parser_Term_map___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_map___closed__3);
l_Lean_Parser_Term_map = _init_l_Lean_Parser_Term_map();
lean::mark_persistent(l_Lean_Parser_Term_map);
w = l___regBuiltinParser_Lean_Parser_Term_map(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_mapConst___elambda__1___closed__1 = _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___elambda__1___closed__1);
l_Lean_Parser_Term_mapConst___elambda__1___closed__2 = _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___elambda__1___closed__2);
l_Lean_Parser_Term_mapConst___elambda__1___closed__3 = _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___elambda__1___closed__3);
l_Lean_Parser_Term_mapConst___elambda__1___closed__4 = _init_l_Lean_Parser_Term_mapConst___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___elambda__1___closed__4);
l_Lean_Parser_Term_mapConst___closed__1 = _init_l_Lean_Parser_Term_mapConst___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___closed__1);
l_Lean_Parser_Term_mapConst___closed__2 = _init_l_Lean_Parser_Term_mapConst___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___closed__2);
l_Lean_Parser_Term_mapConst___closed__3 = _init_l_Lean_Parser_Term_mapConst___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mapConst___closed__3);
l_Lean_Parser_Term_mapConst = _init_l_Lean_Parser_Term_mapConst();
lean::mark_persistent(l_Lean_Parser_Term_mapConst);
w = l___regBuiltinParser_Lean_Parser_Term_mapConst(w);
if (io_result_is_error(w)) return w;
l_Lean_Parser_Term_mapConstRev___elambda__1___closed__1 = _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___elambda__1___closed__1);
l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2 = _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___elambda__1___closed__2);
l_Lean_Parser_Term_mapConstRev___elambda__1___closed__3 = _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___elambda__1___closed__3);
l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4 = _init_l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___elambda__1___closed__4);
l_Lean_Parser_Term_mapConstRev___closed__1 = _init_l_Lean_Parser_Term_mapConstRev___closed__1();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___closed__1);
l_Lean_Parser_Term_mapConstRev___closed__2 = _init_l_Lean_Parser_Term_mapConstRev___closed__2();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___closed__2);
l_Lean_Parser_Term_mapConstRev___closed__3 = _init_l_Lean_Parser_Term_mapConstRev___closed__3();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev___closed__3);
l_Lean_Parser_Term_mapConstRev = _init_l_Lean_Parser_Term_mapConstRev();
lean::mark_persistent(l_Lean_Parser_Term_mapConstRev);
w = l___regBuiltinParser_Lean_Parser_Term_mapConstRev(w);
if (io_result_is_error(w)) return w;
return w;
}
