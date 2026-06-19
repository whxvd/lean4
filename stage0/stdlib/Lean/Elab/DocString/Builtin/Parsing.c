// Lean compiler output
// Module: Lean.Elab.DocString.Builtin.Parsing
// Imports: public import Lean.Parser.Extension public import Init.While import Init.Data.Array.Attach import Init.Data.Array.Mem
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* l___private_Init_While_0__whileM_erased___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Parser_getTokenTable(lean_object*);
lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_throwError___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Parser_mkInputContext___redArg(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_mkParserState(lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_logError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_getString(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_parseStrLit___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "end of input"};
static const lean_object* l_Lean_Doc_parseStrLit___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_parseStrLit___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Not a quoted string literal"};
static const lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__0 = (const lean_object*)&l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__0_value;
static lean_once_cell_t l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_4_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__2));
v___x_5_ = lean_unsigned_to_nat(14u);
v___x_6_ = lean_unsigned_to_nat(22u);
v___x_7_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__1));
v___x_8_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__0));
v___x_9_ = l_mkPanicMessageWithDecl(v___x_8_, v___x_7_, v___x_6_, v___x_5_, v___x_4_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(lean_object* v_inst_10_, lean_object* v_s_11_){
_start:
{
lean_object* v___y_13_; lean_object* v___y_14_; lean_object* v___x_26_; uint8_t v___x_27_; lean_object* v___y_29_; lean_object* v___x_34_; 
v___x_26_ = lean_unsigned_to_nat(0u);
v___x_27_ = 1;
v___x_34_ = l_Lean_Syntax_getPos_x3f(v_s_11_, v___x_27_);
if (lean_obj_tag(v___x_34_) == 0)
{
lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_35_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_36_ = l_panic___redArg(v___x_26_, v___x_35_);
v___y_29_ = v___x_36_;
goto v___jp_28_;
}
else
{
lean_object* v_val_37_; 
v_val_37_ = lean_ctor_get(v___x_34_, 0);
lean_inc(v_val_37_);
lean_dec_ref_known(v___x_34_, 1);
v___y_29_ = v_val_37_;
goto v___jp_28_;
}
v___jp_12_:
{
lean_object* v_toApplicative_15_; lean_object* v___x_17_; uint8_t v_isShared_18_; uint8_t v_isSharedCheck_24_; 
v_toApplicative_15_ = lean_ctor_get(v_inst_10_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v_inst_10_);
if (v_isSharedCheck_24_ == 0)
{
lean_object* v_unused_25_; 
v_unused_25_ = lean_ctor_get(v_inst_10_, 1);
lean_dec(v_unused_25_);
v___x_17_ = v_inst_10_;
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
else
{
lean_inc(v_toApplicative_15_);
lean_dec(v_inst_10_);
v___x_17_ = lean_box(0);
v_isShared_18_ = v_isSharedCheck_24_;
goto v_resetjp_16_;
}
v_resetjp_16_:
{
lean_object* v_toPure_19_; lean_object* v___x_21_; 
v_toPure_19_ = lean_ctor_get(v_toApplicative_15_, 1);
lean_inc(v_toPure_19_);
lean_dec_ref(v_toApplicative_15_);
if (v_isShared_18_ == 0)
{
lean_ctor_set(v___x_17_, 1, v___y_14_);
lean_ctor_set(v___x_17_, 0, v___y_13_);
v___x_21_ = v___x_17_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v___y_13_);
lean_ctor_set(v_reuseFailAlloc_23_, 1, v___y_14_);
v___x_21_ = v_reuseFailAlloc_23_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; 
v___x_22_ = lean_apply_2(v_toPure_19_, lean_box(0), v___x_21_);
return v___x_22_;
}
}
}
v___jp_28_:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_Syntax_getTailPos_x3f(v_s_11_, v___x_27_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_32_ = l_panic___redArg(v___x_26_, v___x_31_);
v___y_13_ = v___y_29_;
v___y_14_ = v___x_32_;
goto v___jp_12_;
}
else
{
lean_object* v_val_33_; 
v_val_33_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_val_33_);
lean_dec_ref_known(v___x_30_, 1);
v___y_13_ = v___y_29_;
v___y_14_ = v_val_33_;
goto v___jp_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___boxed(lean_object* v_inst_38_, lean_object* v_s_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_38_, v_s_39_);
lean_dec(v_s_39_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(lean_object* v_m_41_, lean_object* v_inst_42_, lean_object* v_inst_43_, lean_object* v_s_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_42_, v_s_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___boxed(lean_object* v_m_46_, lean_object* v_inst_47_, lean_object* v_inst_48_, lean_object* v_s_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange(v_m_46_, v_inst_47_, v_inst_48_, v_s_49_);
lean_dec(v_s_49_);
lean_dec(v_inst_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__0(lean_object* v_env_52_, lean_object* v_p_53_, lean_object* v_ictx_54_, lean_object* v_s_55_, lean_object* v_inst_56_, lean_object* v_inst_57_, lean_object* v_toApplicative_58_, lean_object* v_____do__lift_59_){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v_s_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_60_ = lean_box(0);
v___x_61_ = lean_box(0);
lean_inc_ref(v_env_52_);
v___x_62_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_62_, 0, v_env_52_);
lean_ctor_set(v___x_62_, 1, v_____do__lift_59_);
lean_ctor_set(v___x_62_, 2, v___x_60_);
lean_ctor_set(v___x_62_, 3, v___x_61_);
v___x_63_ = l_Lean_Parser_getTokenTable(v_env_52_);
lean_inc_ref(v_ictx_54_);
v_s_64_ = l_Lean_Parser_ParserFn_run(v_p_53_, v_ictx_54_, v___x_62_, v___x_63_, v_s_55_);
lean_inc_ref(v_s_64_);
v___x_65_ = l_Lean_Parser_ParserState_allErrors(v_s_64_);
v___x_66_ = lean_array_get_size(v___x_65_);
lean_dec_ref(v___x_65_);
v___x_67_ = lean_unsigned_to_nat(0u);
v___x_68_ = lean_nat_dec_eq(v___x_66_, v___x_67_);
if (v___x_68_ == 0)
{
lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
lean_dec_ref(v_toApplicative_58_);
v___x_69_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_54_, v_s_64_);
v___x_70_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
v___x_71_ = l_Lean_MessageData_ofFormat(v___x_70_);
v___x_72_ = l_Lean_throwError___redArg(v_inst_56_, v_inst_57_, v___x_71_);
return v___x_72_;
}
else
{
lean_object* v_stxStack_73_; lean_object* v_pos_74_; uint8_t v___x_75_; 
v_stxStack_73_ = lean_ctor_get(v_s_64_, 0);
lean_inc_ref(v_stxStack_73_);
v_pos_74_ = lean_ctor_get(v_s_64_, 2);
lean_inc(v_pos_74_);
v___x_75_ = l_Lean_Parser_InputContext_atEnd(v_ictx_54_, v_pos_74_);
lean_dec(v_pos_74_);
if (v___x_75_ == 0)
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
lean_dec_ref(v_stxStack_73_);
lean_dec_ref(v_toApplicative_58_);
v___x_76_ = ((lean_object*)(l_Lean_Doc_parseStrLit___redArg___lam__0___closed__0));
v___x_77_ = l_Lean_Parser_ParserState_mkError(v_s_64_, v___x_76_);
v___x_78_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_54_, v___x_77_);
v___x_79_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_79_, 0, v___x_78_);
v___x_80_ = l_Lean_MessageData_ofFormat(v___x_79_);
v___x_81_ = l_Lean_throwError___redArg(v_inst_56_, v_inst_57_, v___x_80_);
return v___x_81_;
}
else
{
lean_object* v_toPure_82_; lean_object* v___x_83_; lean_object* v___x_84_; 
lean_dec_ref(v_s_64_);
lean_dec_ref(v_inst_57_);
lean_dec_ref(v_inst_56_);
lean_dec_ref(v_ictx_54_);
v_toPure_82_ = lean_ctor_get(v_toApplicative_58_, 1);
lean_inc(v_toPure_82_);
lean_dec_ref(v_toApplicative_58_);
v___x_83_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_73_);
lean_dec_ref(v_stxStack_73_);
v___x_84_ = lean_apply_2(v_toPure_82_, lean_box(0), v___x_83_);
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__1(lean_object* v_source_85_, lean_object* v___y_86_, lean_object* v_start_87_, lean_object* v_env_88_, lean_object* v_p_89_, lean_object* v_inst_90_, lean_object* v_inst_91_, lean_object* v_toApplicative_92_, lean_object* v_toBind_93_, lean_object* v_inst_94_, lean_object* v_____do__lift_95_){
_start:
{
uint8_t v___x_96_; lean_object* v_ictx_97_; lean_object* v___x_98_; lean_object* v_s_99_; lean_object* v___f_100_; lean_object* v___x_101_; 
v___x_96_ = 1;
lean_inc_ref(v_source_85_);
v_ictx_97_ = l_Lean_Parser_mkInputContext___redArg(v_source_85_, v_____do__lift_95_, v___x_96_, v___y_86_);
v___x_98_ = l_Lean_Parser_mkParserState(v_source_85_);
lean_dec_ref(v_source_85_);
v_s_99_ = l_Lean_Parser_ParserState_setPos(v___x_98_, v_start_87_);
v___f_100_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__0), 8, 7);
lean_closure_set(v___f_100_, 0, v_env_88_);
lean_closure_set(v___f_100_, 1, v_p_89_);
lean_closure_set(v___f_100_, 2, v_ictx_97_);
lean_closure_set(v___f_100_, 3, v_s_99_);
lean_closure_set(v___f_100_, 4, v_inst_90_);
lean_closure_set(v___f_100_, 5, v_inst_91_);
lean_closure_set(v___f_100_, 6, v_toApplicative_92_);
v___x_101_ = lean_apply_4(v_toBind_93_, lean_box(0), lean_box(0), v_inst_94_, v___f_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__2(lean_object* v_text_102_, lean_object* v_inst_103_, lean_object* v_env_104_, lean_object* v_p_105_, lean_object* v_inst_106_, lean_object* v_inst_107_, lean_object* v_toApplicative_108_, lean_object* v_toBind_109_, lean_object* v_inst_110_, lean_object* v_____x_111_){
_start:
{
lean_object* v_start_112_; lean_object* v_stop_113_; lean_object* v_source_114_; lean_object* v___y_116_; lean_object* v___x_120_; uint8_t v___x_121_; 
v_start_112_ = lean_ctor_get(v_____x_111_, 0);
lean_inc(v_start_112_);
v_stop_113_ = lean_ctor_get(v_____x_111_, 1);
lean_inc(v_stop_113_);
lean_dec_ref(v_____x_111_);
v_source_114_ = lean_ctor_get(v_text_102_, 0);
lean_inc_ref(v_source_114_);
lean_dec_ref(v_text_102_);
v___x_120_ = lean_string_utf8_byte_size(v_source_114_);
v___x_121_ = lean_nat_dec_le(v_stop_113_, v___x_120_);
if (v___x_121_ == 0)
{
lean_dec(v_stop_113_);
v___y_116_ = v___x_120_;
goto v___jp_115_;
}
else
{
v___y_116_ = v_stop_113_;
goto v___jp_115_;
}
v___jp_115_:
{
lean_object* v_getFileName_117_; lean_object* v___f_118_; lean_object* v___x_119_; 
v_getFileName_117_ = lean_ctor_get(v_inst_103_, 2);
lean_inc(v_getFileName_117_);
lean_dec_ref(v_inst_103_);
lean_inc(v_toBind_109_);
v___f_118_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__1), 11, 10);
lean_closure_set(v___f_118_, 0, v_source_114_);
lean_closure_set(v___f_118_, 1, v___y_116_);
lean_closure_set(v___f_118_, 2, v_start_112_);
lean_closure_set(v___f_118_, 3, v_env_104_);
lean_closure_set(v___f_118_, 4, v_p_105_);
lean_closure_set(v___f_118_, 5, v_inst_106_);
lean_closure_set(v___f_118_, 6, v_inst_107_);
lean_closure_set(v___f_118_, 7, v_toApplicative_108_);
lean_closure_set(v___f_118_, 8, v_toBind_109_);
lean_closure_set(v___f_118_, 9, v_inst_110_);
v___x_119_ = lean_apply_4(v_toBind_109_, lean_box(0), lean_box(0), v_getFileName_117_, v___f_118_);
return v___x_119_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3(lean_object* v_text_122_, lean_object* v_inst_123_, lean_object* v_p_124_, lean_object* v_inst_125_, lean_object* v_inst_126_, lean_object* v_toApplicative_127_, lean_object* v_toBind_128_, lean_object* v_inst_129_, lean_object* v_s_130_, lean_object* v_env_131_){
_start:
{
lean_object* v___f_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
lean_inc(v_toBind_128_);
lean_inc_ref(v_inst_125_);
v___f_132_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__2), 10, 9);
lean_closure_set(v___f_132_, 0, v_text_122_);
lean_closure_set(v___f_132_, 1, v_inst_123_);
lean_closure_set(v___f_132_, 2, v_env_131_);
lean_closure_set(v___f_132_, 3, v_p_124_);
lean_closure_set(v___f_132_, 4, v_inst_125_);
lean_closure_set(v___f_132_, 5, v_inst_126_);
lean_closure_set(v___f_132_, 6, v_toApplicative_127_);
lean_closure_set(v___f_132_, 7, v_toBind_128_);
lean_closure_set(v___f_132_, 8, v_inst_129_);
v___x_133_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_125_, v_s_130_);
v___x_134_ = lean_apply_4(v_toBind_128_, lean_box(0), lean_box(0), v___x_133_, v___f_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__3___boxed(lean_object* v_text_135_, lean_object* v_inst_136_, lean_object* v_p_137_, lean_object* v_inst_138_, lean_object* v_inst_139_, lean_object* v_toApplicative_140_, lean_object* v_toBind_141_, lean_object* v_inst_142_, lean_object* v_s_143_, lean_object* v_env_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_Doc_parseStrLit___redArg___lam__3(v_text_135_, v_inst_136_, v_p_137_, v_inst_138_, v_inst_139_, v_toApplicative_140_, v_toBind_141_, v_inst_142_, v_s_143_, v_env_144_);
lean_dec(v_s_143_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg___lam__4(lean_object* v_inst_146_, lean_object* v_inst_147_, lean_object* v_p_148_, lean_object* v_inst_149_, lean_object* v_inst_150_, lean_object* v_toApplicative_151_, lean_object* v_toBind_152_, lean_object* v_inst_153_, lean_object* v_s_154_, lean_object* v_text_155_){
_start:
{
lean_object* v_getEnv_156_; lean_object* v___f_157_; lean_object* v___x_158_; 
v_getEnv_156_ = lean_ctor_get(v_inst_146_, 0);
lean_inc(v_getEnv_156_);
lean_dec_ref(v_inst_146_);
lean_inc(v_toBind_152_);
v___f_157_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__3___boxed), 10, 9);
lean_closure_set(v___f_157_, 0, v_text_155_);
lean_closure_set(v___f_157_, 1, v_inst_147_);
lean_closure_set(v___f_157_, 2, v_p_148_);
lean_closure_set(v___f_157_, 3, v_inst_149_);
lean_closure_set(v___f_157_, 4, v_inst_150_);
lean_closure_set(v___f_157_, 5, v_toApplicative_151_);
lean_closure_set(v___f_157_, 6, v_toBind_152_);
lean_closure_set(v___f_157_, 7, v_inst_153_);
lean_closure_set(v___f_157_, 8, v_s_154_);
v___x_158_ = lean_apply_4(v_toBind_152_, lean_box(0), lean_box(0), v_getEnv_156_, v___f_157_);
return v___x_158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit___redArg(lean_object* v_inst_159_, lean_object* v_inst_160_, lean_object* v_inst_161_, lean_object* v_inst_162_, lean_object* v_inst_163_, lean_object* v_inst_164_, lean_object* v_p_165_, lean_object* v_s_166_){
_start:
{
lean_object* v_toApplicative_167_; lean_object* v_toBind_168_; lean_object* v___f_169_; lean_object* v___x_170_; 
v_toApplicative_167_ = lean_ctor_get(v_inst_159_, 0);
lean_inc_ref(v_toApplicative_167_);
v_toBind_168_ = lean_ctor_get(v_inst_159_, 1);
lean_inc_n(v_toBind_168_, 2);
v___f_169_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit___redArg___lam__4), 10, 9);
lean_closure_set(v___f_169_, 0, v_inst_161_);
lean_closure_set(v___f_169_, 1, v_inst_163_);
lean_closure_set(v___f_169_, 2, v_p_165_);
lean_closure_set(v___f_169_, 3, v_inst_159_);
lean_closure_set(v___f_169_, 4, v_inst_162_);
lean_closure_set(v___f_169_, 5, v_toApplicative_167_);
lean_closure_set(v___f_169_, 6, v_toBind_168_);
lean_closure_set(v___f_169_, 7, v_inst_164_);
lean_closure_set(v___f_169_, 8, v_s_166_);
v___x_170_ = lean_apply_4(v_toBind_168_, lean_box(0), lean_box(0), v_inst_160_, v___f_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit(lean_object* v_m_171_, lean_object* v_inst_172_, lean_object* v_inst_173_, lean_object* v_inst_174_, lean_object* v_inst_175_, lean_object* v_inst_176_, lean_object* v_inst_177_, lean_object* v_p_178_, lean_object* v_s_179_){
_start:
{
lean_object* v___x_180_; 
v___x_180_ = l_Lean_Doc_parseStrLit___redArg(v_inst_172_, v_inst_173_, v_inst_174_, v_inst_175_, v_inst_176_, v_inst_177_, v_p_178_, v_s_179_);
return v___x_180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(lean_object* v_str_181_, lean_object* v_a_182_){
_start:
{
lean_object* v_fst_183_; lean_object* v_snd_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_200_; 
v_fst_183_ = lean_ctor_get(v_a_182_, 0);
v_snd_184_ = lean_ctor_get(v_a_182_, 1);
v_isSharedCheck_200_ = !lean_is_exclusive(v_a_182_);
if (v_isSharedCheck_200_ == 0)
{
v___x_186_ = v_a_182_;
v_isShared_187_ = v_isSharedCheck_200_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_snd_184_);
lean_inc(v_fst_183_);
lean_dec(v_a_182_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_200_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; uint8_t v___x_189_; 
v___x_188_ = lean_unsigned_to_nat(0u);
v___x_189_ = lean_nat_dec_lt(v___x_188_, v_fst_183_);
if (v___x_189_ == 0)
{
lean_object* v___x_191_; 
if (v_isShared_187_ == 0)
{
v___x_191_ = v___x_186_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_fst_183_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v_snd_184_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
else
{
lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_197_; 
v___x_193_ = lean_string_utf8_prev(v_str_181_, v_fst_183_);
lean_dec(v_fst_183_);
v___x_194_ = lean_unsigned_to_nat(1u);
v___x_195_ = lean_nat_add(v_snd_184_, v___x_194_);
lean_dec(v_snd_184_);
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 1, v___x_195_);
lean_ctor_set(v___x_186_, 0, v___x_193_);
v___x_197_ = v___x_186_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_193_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_195_);
v___x_197_ = v_reuseFailAlloc_199_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
v_a_182_ = v___x_197_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg___boxed(lean_object* v_str_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_201_, v_a_202_);
lean_dec_ref(v_str_201_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(lean_object* v_str_204_, lean_object* v_p_205_){
_start:
{
lean_object* v_n_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_snd_209_; 
v_n_206_ = lean_unsigned_to_nat(0u);
v___x_207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_207_, 0, v_p_205_);
lean_ctor_set(v___x_207_, 1, v_n_206_);
v___x_208_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_204_, v___x_207_);
v_snd_209_ = lean_ctor_get(v___x_208_, 1);
lean_inc(v_snd_209_);
lean_dec_ref(v___x_208_);
return v_snd_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex___boxed(lean_object* v_str_210_, lean_object* v_p_211_){
_start:
{
lean_object* v_res_212_; 
v_res_212_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(v_str_210_, v_p_211_);
lean_dec_ref(v_str_210_);
return v_res_212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(lean_object* v_str_213_, lean_object* v_inst_214_, lean_object* v_a_215_){
_start:
{
lean_object* v___x_216_; 
v___x_216_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___redArg(v_str_213_, v_a_215_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0___boxed(lean_object* v_str_217_, lean_object* v_inst_218_, lean_object* v_a_219_){
_start:
{
lean_object* v_res_220_; 
v_res_220_ = l___private_Init_While_0__whileM_erased___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex_spec__0(v_str_217_, v_inst_218_, v_a_219_);
lean_dec_ref(v_str_217_);
return v_res_220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(lean_object* v_str_221_, lean_object* v_p_222_, lean_object* v_j_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_zero_225_; uint8_t v_isZero_226_; 
v_zero_225_ = lean_unsigned_to_nat(0u);
v_isZero_226_ = lean_nat_dec_eq(v_j_223_, v_zero_225_);
if (v_isZero_226_ == 1)
{
lean_dec(v_j_223_);
return v_a_224_;
}
else
{
lean_object* v_one_227_; lean_object* v_n_228_; lean_object* v___x_229_; 
lean_dec(v_a_224_);
v_one_227_ = lean_unsigned_to_nat(1u);
v_n_228_ = lean_nat_sub(v_j_223_, v_one_227_);
lean_dec(v_j_223_);
v___x_229_ = lean_string_utf8_next(v_str_221_, v_p_222_);
v_j_223_ = v_n_228_;
v_a_224_ = v___x_229_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg___boxed(lean_object* v_str_231_, lean_object* v_p_232_, lean_object* v_j_233_, lean_object* v_a_234_){
_start:
{
lean_object* v_res_235_; 
v_res_235_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_231_, v_p_232_, v_j_233_, v_a_234_);
lean_dec(v_p_232_);
lean_dec_ref(v_str_231_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(lean_object* v_str_236_, lean_object* v_n_237_, lean_object* v_p_238_){
_start:
{
lean_object* v___x_239_; 
lean_inc(v_p_238_);
v___x_239_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_236_, v_p_238_, v_n_237_, v_p_238_);
lean_dec(v_p_238_);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn___boxed(lean_object* v_str_240_, lean_object* v_n_241_, lean_object* v_p_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn(v_str_240_, v_n_241_, v_p_242_);
lean_dec_ref(v_str_240_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(lean_object* v_str_244_, lean_object* v_p_245_, lean_object* v_n_246_, lean_object* v_j_247_, lean_object* v_a_248_, lean_object* v_a_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_str_244_, v_p_245_, v_j_247_, v_a_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___boxed(lean_object* v_str_251_, lean_object* v_p_252_, lean_object* v_n_253_, lean_object* v_j_254_, lean_object* v_a_255_, lean_object* v_a_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0(v_str_251_, v_p_252_, v_n_253_, v_j_254_, v_a_255_, v_a_256_);
lean_dec(v_n_253_);
lean_dec(v_p_252_);
lean_dec_ref(v_str_251_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(lean_object* v_text_258_, lean_object* v_posOfStr_259_, lean_object* v_str_260_, lean_object* v_posInStr_261_){
_start:
{
lean_object* v_source_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_source_262_ = lean_ctor_get(v_text_258_, 0);
v___x_263_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_posIndex(v_str_260_, v_posInStr_261_);
lean_inc(v_posOfStr_259_);
v___x_264_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_nextn_spec__0___redArg(v_source_262_, v_posOfStr_259_, v___x_263_, v_posOfStr_259_);
lean_dec(v_posOfStr_259_);
return v___x_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition___boxed(lean_object* v_text_265_, lean_object* v_posOfStr_266_, lean_object* v_str_267_, lean_object* v_posInStr_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_265_, v_posOfStr_266_, v_str_267_, v_posInStr_268_);
lean_dec_ref(v_str_267_);
lean_dec_ref(v_text_265_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(lean_object* v_text_270_, lean_object* v_posOfStr_271_, lean_object* v_str_272_, lean_object* v_a_273_){
_start:
{
switch(lean_obj_tag(v_a_273_))
{
case 0:
{
lean_object* v_pos_274_; lean_object* v_endPos_275_; lean_object* v___x_276_; lean_object* v___x_277_; uint8_t v___x_278_; lean_object* v___x_279_; 
v_pos_274_ = lean_ctor_get(v_a_273_, 1);
lean_inc(v_pos_274_);
v_endPos_275_ = lean_ctor_get(v_a_273_, 3);
lean_inc(v_endPos_275_);
lean_dec_ref_known(v_a_273_, 4);
lean_inc(v_posOfStr_271_);
v___x_276_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_270_, v_posOfStr_271_, v_str_272_, v_pos_274_);
v___x_277_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_270_, v_posOfStr_271_, v_str_272_, v_endPos_275_);
v___x_278_ = 1;
v___x_279_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_279_, 0, v___x_276_);
lean_ctor_set(v___x_279_, 1, v___x_277_);
lean_ctor_set_uint8(v___x_279_, sizeof(void*)*2, v___x_278_);
return v___x_279_;
}
case 1:
{
lean_object* v_pos_280_; lean_object* v_endPos_281_; uint8_t v_canonical_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_291_; 
v_pos_280_ = lean_ctor_get(v_a_273_, 0);
v_endPos_281_ = lean_ctor_get(v_a_273_, 1);
v_canonical_282_ = lean_ctor_get_uint8(v_a_273_, sizeof(void*)*2);
v_isSharedCheck_291_ = !lean_is_exclusive(v_a_273_);
if (v_isSharedCheck_291_ == 0)
{
v___x_284_ = v_a_273_;
v_isShared_285_ = v_isSharedCheck_291_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_endPos_281_);
lean_inc(v_pos_280_);
lean_dec(v_a_273_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_291_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_289_; 
lean_inc(v_posOfStr_271_);
v___x_286_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_270_, v_posOfStr_271_, v_str_272_, v_pos_280_);
v___x_287_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_270_, v_posOfStr_271_, v_str_272_, v_endPos_281_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v___x_287_);
lean_ctor_set(v___x_284_, 0, v___x_286_);
v___x_289_ = v___x_284_;
goto v_reusejp_288_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___x_286_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v___x_287_);
lean_ctor_set_uint8(v_reuseFailAlloc_290_, sizeof(void*)*2, v_canonical_282_);
v___x_289_ = v_reuseFailAlloc_290_;
goto v_reusejp_288_;
}
v_reusejp_288_:
{
return v___x_289_;
}
}
}
default: 
{
lean_dec(v_posOfStr_271_);
return v_a_273_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo___boxed(lean_object* v_text_292_, lean_object* v_posOfStr_293_, lean_object* v_str_294_, lean_object* v_a_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_292_, v_posOfStr_293_, v_str_294_, v_a_295_);
lean_dec_ref(v_str_294_);
lean_dec_ref(v_text_292_);
return v_res_296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(lean_object* v_text_297_, lean_object* v_posOfStr_298_, lean_object* v_str_299_, lean_object* v_a_300_){
_start:
{
switch(lean_obj_tag(v_a_300_))
{
case 0:
{
lean_dec(v_posOfStr_298_);
return v_a_300_;
}
case 1:
{
lean_object* v_info_301_; lean_object* v_kind_302_; lean_object* v_args_303_; lean_object* v___x_305_; uint8_t v_isShared_306_; uint8_t v_isSharedCheck_314_; 
v_info_301_ = lean_ctor_get(v_a_300_, 0);
v_kind_302_ = lean_ctor_get(v_a_300_, 1);
v_args_303_ = lean_ctor_get(v_a_300_, 2);
v_isSharedCheck_314_ = !lean_is_exclusive(v_a_300_);
if (v_isSharedCheck_314_ == 0)
{
v___x_305_ = v_a_300_;
v_isShared_306_ = v_isSharedCheck_314_;
goto v_resetjp_304_;
}
else
{
lean_inc(v_args_303_);
lean_inc(v_kind_302_);
lean_inc(v_info_301_);
lean_dec(v_a_300_);
v___x_305_ = lean_box(0);
v_isShared_306_ = v_isSharedCheck_314_;
goto v_resetjp_304_;
}
v_resetjp_304_:
{
lean_object* v___x_307_; size_t v_sz_308_; size_t v___x_309_; lean_object* v___x_310_; lean_object* v___x_312_; 
lean_inc(v_posOfStr_298_);
v___x_307_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_297_, v_posOfStr_298_, v_str_299_, v_info_301_);
v_sz_308_ = lean_array_size(v_args_303_);
v___x_309_ = ((size_t)0ULL);
v___x_310_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(v_text_297_, v_posOfStr_298_, v_str_299_, v_sz_308_, v___x_309_, v_args_303_);
if (v_isShared_306_ == 0)
{
lean_ctor_set(v___x_305_, 2, v___x_310_);
lean_ctor_set(v___x_305_, 0, v___x_307_);
v___x_312_ = v___x_305_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v_kind_302_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
}
case 2:
{
lean_object* v_info_315_; lean_object* v_val_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_324_; 
v_info_315_ = lean_ctor_get(v_a_300_, 0);
v_val_316_ = lean_ctor_get(v_a_300_, 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v_a_300_);
if (v_isSharedCheck_324_ == 0)
{
v___x_318_ = v_a_300_;
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_val_316_);
lean_inc(v_info_315_);
lean_dec(v_a_300_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_324_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_320_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_297_, v_posOfStr_298_, v_str_299_, v_info_315_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 0, v___x_320_);
v___x_322_ = v___x_318_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_val_316_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
default: 
{
lean_object* v_info_325_; lean_object* v_rawVal_326_; lean_object* v_val_327_; lean_object* v_preresolved_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_336_; 
v_info_325_ = lean_ctor_get(v_a_300_, 0);
v_rawVal_326_ = lean_ctor_get(v_a_300_, 1);
v_val_327_ = lean_ctor_get(v_a_300_, 2);
v_preresolved_328_ = lean_ctor_get(v_a_300_, 3);
v_isSharedCheck_336_ = !lean_is_exclusive(v_a_300_);
if (v_isSharedCheck_336_ == 0)
{
v___x_330_ = v_a_300_;
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_preresolved_328_);
lean_inc(v_val_327_);
lean_inc(v_rawVal_326_);
lean_inc(v_info_325_);
lean_dec(v_a_300_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_336_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
lean_object* v___x_332_; lean_object* v___x_334_; 
v___x_332_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionInfo(v_text_297_, v_posOfStr_298_, v_str_299_, v_info_325_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 0, v___x_332_);
v___x_334_ = v___x_330_;
goto v_reusejp_333_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v___x_332_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_rawVal_326_);
lean_ctor_set(v_reuseFailAlloc_335_, 2, v_val_327_);
lean_ctor_set(v_reuseFailAlloc_335_, 3, v_preresolved_328_);
v___x_334_ = v_reuseFailAlloc_335_;
goto v_reusejp_333_;
}
v_reusejp_333_:
{
return v___x_334_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(lean_object* v_text_337_, lean_object* v_posOfStr_338_, lean_object* v_str_339_, size_t v_sz_340_, size_t v_i_341_, lean_object* v_bs_342_){
_start:
{
uint8_t v___x_343_; 
v___x_343_ = lean_usize_dec_lt(v_i_341_, v_sz_340_);
if (v___x_343_ == 0)
{
lean_dec(v_posOfStr_338_);
return v_bs_342_;
}
else
{
lean_object* v_v_344_; lean_object* v___x_345_; lean_object* v_bs_x27_346_; lean_object* v___x_347_; size_t v___x_348_; size_t v___x_349_; lean_object* v___x_350_; 
v_v_344_ = lean_array_uget(v_bs_342_, v_i_341_);
v___x_345_ = lean_unsigned_to_nat(0u);
v_bs_x27_346_ = lean_array_uset(v_bs_342_, v_i_341_, v___x_345_);
lean_inc(v_posOfStr_338_);
v___x_347_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_337_, v_posOfStr_338_, v_str_339_, v_v_344_);
v___x_348_ = ((size_t)1ULL);
v___x_349_ = lean_usize_add(v_i_341_, v___x_348_);
v___x_350_ = lean_array_uset(v_bs_x27_346_, v_i_341_, v___x_347_);
v_i_341_ = v___x_349_;
v_bs_342_ = v___x_350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0___boxed(lean_object* v_text_352_, lean_object* v_posOfStr_353_, lean_object* v_str_354_, lean_object* v_sz_355_, lean_object* v_i_356_, lean_object* v_bs_357_){
_start:
{
size_t v_sz_boxed_358_; size_t v_i_boxed_359_; lean_object* v_res_360_; 
v_sz_boxed_358_ = lean_unbox_usize(v_sz_355_);
lean_dec(v_sz_355_);
v_i_boxed_359_ = lean_unbox_usize(v_i_356_);
lean_dec(v_i_356_);
v_res_360_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_spec__0(v_text_352_, v_posOfStr_353_, v_str_354_, v_sz_boxed_358_, v_i_boxed_359_, v_bs_357_);
lean_dec_ref(v_str_354_);
lean_dec_ref(v_text_352_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax___boxed(lean_object* v_text_361_, lean_object* v_posOfStr_362_, lean_object* v_str_363_, lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_361_, v_posOfStr_362_, v_str_363_, v_a_364_);
lean_dec_ref(v_str_363_);
lean_dec_ref(v_text_361_);
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter___redArg(lean_object* v_x_366_, lean_object* v_h__1_367_, lean_object* v_h__2_368_, lean_object* v_h__3_369_, lean_object* v_h__4_370_){
_start:
{
switch(lean_obj_tag(v_x_366_))
{
case 0:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec(v_h__3_369_);
lean_dec(v_h__2_368_);
lean_dec(v_h__1_367_);
v___x_371_ = lean_box(0);
v___x_372_ = lean_apply_1(v_h__4_370_, v___x_371_);
return v___x_372_;
}
case 1:
{
lean_object* v_info_373_; lean_object* v_kind_374_; lean_object* v_args_375_; lean_object* v___x_376_; 
lean_dec(v_h__4_370_);
lean_dec(v_h__3_369_);
lean_dec(v_h__2_368_);
v_info_373_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_info_373_);
v_kind_374_ = lean_ctor_get(v_x_366_, 1);
lean_inc(v_kind_374_);
v_args_375_ = lean_ctor_get(v_x_366_, 2);
lean_inc_ref(v_args_375_);
lean_dec_ref_known(v_x_366_, 3);
v___x_376_ = lean_apply_3(v_h__1_367_, v_info_373_, v_kind_374_, v_args_375_);
return v___x_376_;
}
case 2:
{
lean_object* v_info_377_; lean_object* v_val_378_; lean_object* v___x_379_; 
lean_dec(v_h__4_370_);
lean_dec(v_h__2_368_);
lean_dec(v_h__1_367_);
v_info_377_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_info_377_);
v_val_378_ = lean_ctor_get(v_x_366_, 1);
lean_inc_ref(v_val_378_);
lean_dec_ref_known(v_x_366_, 2);
v___x_379_ = lean_apply_2(v_h__3_369_, v_info_377_, v_val_378_);
return v___x_379_;
}
default: 
{
lean_object* v_info_380_; lean_object* v_rawVal_381_; lean_object* v_val_382_; lean_object* v_preresolved_383_; lean_object* v___x_384_; 
lean_dec(v_h__4_370_);
lean_dec(v_h__3_369_);
lean_dec(v_h__1_367_);
v_info_380_ = lean_ctor_get(v_x_366_, 0);
lean_inc(v_info_380_);
v_rawVal_381_ = lean_ctor_get(v_x_366_, 1);
lean_inc_ref(v_rawVal_381_);
v_val_382_ = lean_ctor_get(v_x_366_, 2);
lean_inc(v_val_382_);
v_preresolved_383_ = lean_ctor_get(v_x_366_, 3);
lean_inc(v_preresolved_383_);
lean_dec_ref_known(v_x_366_, 4);
v___x_384_ = lean_apply_4(v_h__2_368_, v_info_380_, v_rawVal_381_, v_val_382_, v_preresolved_383_);
return v___x_384_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax_match__1_splitter(lean_object* v_motive_385_, lean_object* v_x_386_, lean_object* v_h__1_387_, lean_object* v_h__2_388_, lean_object* v_h__3_389_, lean_object* v_h__4_390_){
_start:
{
switch(lean_obj_tag(v_x_386_))
{
case 0:
{
lean_object* v___x_391_; lean_object* v___x_392_; 
lean_dec(v_h__3_389_);
lean_dec(v_h__2_388_);
lean_dec(v_h__1_387_);
v___x_391_ = lean_box(0);
v___x_392_ = lean_apply_1(v_h__4_390_, v___x_391_);
return v___x_392_;
}
case 1:
{
lean_object* v_info_393_; lean_object* v_kind_394_; lean_object* v_args_395_; lean_object* v___x_396_; 
lean_dec(v_h__4_390_);
lean_dec(v_h__3_389_);
lean_dec(v_h__2_388_);
v_info_393_ = lean_ctor_get(v_x_386_, 0);
lean_inc(v_info_393_);
v_kind_394_ = lean_ctor_get(v_x_386_, 1);
lean_inc(v_kind_394_);
v_args_395_ = lean_ctor_get(v_x_386_, 2);
lean_inc_ref(v_args_395_);
lean_dec_ref_known(v_x_386_, 3);
v___x_396_ = lean_apply_3(v_h__1_387_, v_info_393_, v_kind_394_, v_args_395_);
return v___x_396_;
}
case 2:
{
lean_object* v_info_397_; lean_object* v_val_398_; lean_object* v___x_399_; 
lean_dec(v_h__4_390_);
lean_dec(v_h__2_388_);
lean_dec(v_h__1_387_);
v_info_397_ = lean_ctor_get(v_x_386_, 0);
lean_inc(v_info_397_);
v_val_398_ = lean_ctor_get(v_x_386_, 1);
lean_inc_ref(v_val_398_);
lean_dec_ref_known(v_x_386_, 2);
v___x_399_ = lean_apply_2(v_h__3_389_, v_info_397_, v_val_398_);
return v___x_399_;
}
default: 
{
lean_object* v_info_400_; lean_object* v_rawVal_401_; lean_object* v_val_402_; lean_object* v_preresolved_403_; lean_object* v___x_404_; 
lean_dec(v_h__4_390_);
lean_dec(v_h__3_389_);
lean_dec(v_h__1_387_);
v_info_400_ = lean_ctor_get(v_x_386_, 0);
lean_inc(v_info_400_);
v_rawVal_401_ = lean_ctor_get(v_x_386_, 1);
lean_inc_ref(v_rawVal_401_);
v_val_402_ = lean_ctor_get(v_x_386_, 2);
lean_inc(v_val_402_);
v_preresolved_403_ = lean_ctor_get(v_x_386_, 3);
lean_inc(v_preresolved_403_);
lean_dec_ref_known(v_x_386_, 4);
v___x_404_ = lean_apply_4(v_h__2_388_, v_info_400_, v_rawVal_401_, v_val_402_, v_preresolved_403_);
return v___x_404_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_405_, lean_object* v_h__1_406_){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_apply_2(v_h__1_406_, v_x_405_, lean_box(0));
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Parsing_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_408_, lean_object* v_P_409_, lean_object* v_motive_410_, lean_object* v_x_411_, lean_object* v_h__1_412_){
_start:
{
lean_object* v___x_413_; 
v___x_413_ = lean_apply_2(v_h__1_412_, v_x_411_, lean_box(0));
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(lean_object* v_text_414_, lean_object* v_pos_415_, lean_object* v_str_416_, lean_object* v_x_417_){
_start:
{
lean_object* v_fst_418_; lean_object* v_snd_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_427_; 
v_fst_418_ = lean_ctor_get(v_x_417_, 0);
v_snd_419_ = lean_ctor_get(v_x_417_, 1);
v_isSharedCheck_427_ = !lean_is_exclusive(v_x_417_);
if (v_isSharedCheck_427_ == 0)
{
v___x_421_ = v_x_417_;
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_snd_419_);
lean_inc(v_fst_418_);
lean_dec(v_x_417_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_427_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_423_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_414_, v_pos_415_, v_str_416_, v_fst_418_);
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 0, v___x_423_);
v___x_425_ = v___x_421_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
lean_ctor_set(v_reuseFailAlloc_426_, 1, v_snd_419_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
return v___x_425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__0___boxed(lean_object* v_text_428_, lean_object* v_pos_429_, lean_object* v_str_430_, lean_object* v_x_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__0(v_text_428_, v_pos_429_, v_str_430_, v_x_431_);
lean_dec_ref(v_str_430_);
lean_dec_ref(v_text_428_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(lean_object* v_env_452_, lean_object* v_p_453_, lean_object* v_ictx_454_, lean_object* v_s_455_, lean_object* v_text_456_, lean_object* v_pos_457_, lean_object* v_str_458_, lean_object* v___f_459_, lean_object* v_inst_460_, lean_object* v_inst_461_, lean_object* v_toApplicative_462_, lean_object* v_____do__lift_463_){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_s_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_464_ = lean_box(0);
v___x_465_ = lean_box(0);
lean_inc_ref(v_env_452_);
v___x_466_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_466_, 0, v_env_452_);
lean_ctor_set(v___x_466_, 1, v_____do__lift_463_);
lean_ctor_set(v___x_466_, 2, v___x_464_);
lean_ctor_set(v___x_466_, 3, v___x_465_);
v___x_467_ = l_Lean_Parser_getTokenTable(v_env_452_);
lean_inc_ref(v_ictx_454_);
v_s_468_ = l_Lean_Parser_ParserFn_run(v_p_453_, v_ictx_454_, v___x_466_, v___x_467_, v_s_455_);
lean_inc_ref(v_s_468_);
v___x_469_ = l_Lean_Parser_ParserState_allErrors(v_s_468_);
v___x_470_ = lean_array_get_size(v___x_469_);
lean_dec_ref(v___x_469_);
v___x_471_ = lean_unsigned_to_nat(0u);
v___x_472_ = lean_nat_dec_eq(v___x_470_, v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v_stxStack_473_; lean_object* v_lhsPrec_474_; lean_object* v_pos_475_; lean_object* v_cache_476_; lean_object* v_errorMsg_477_; lean_object* v_recoveredErrors_478_; lean_object* v_traces_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_516_; 
lean_dec_ref(v_toApplicative_462_);
v_stxStack_473_ = lean_ctor_get(v_s_468_, 0);
v_lhsPrec_474_ = lean_ctor_get(v_s_468_, 1);
v_pos_475_ = lean_ctor_get(v_s_468_, 2);
v_cache_476_ = lean_ctor_get(v_s_468_, 3);
v_errorMsg_477_ = lean_ctor_get(v_s_468_, 4);
v_recoveredErrors_478_ = lean_ctor_get(v_s_468_, 5);
v_traces_479_ = lean_ctor_get(v_s_468_, 6);
v_isSharedCheck_516_ = !lean_is_exclusive(v_s_468_);
if (v_isSharedCheck_516_ == 0)
{
v___x_481_ = v_s_468_;
v_isShared_482_ = v_isSharedCheck_516_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_traces_479_);
lean_inc(v_recoveredErrors_478_);
lean_inc(v_errorMsg_477_);
lean_inc(v_cache_476_);
lean_inc(v_pos_475_);
lean_inc(v_lhsPrec_474_);
lean_inc(v_stxStack_473_);
lean_dec(v_s_468_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_516_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___y_485_; 
lean_inc(v_pos_457_);
v___x_483_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_reposition(v_text_456_, v_pos_457_, v_str_458_, v_pos_475_);
if (lean_obj_tag(v_errorMsg_477_) == 0)
{
lean_dec(v_pos_457_);
v___y_485_ = v_errorMsg_477_;
goto v___jp_484_;
}
else
{
lean_object* v_val_497_; lean_object* v___x_499_; uint8_t v_isShared_500_; uint8_t v_isSharedCheck_515_; 
v_val_497_ = lean_ctor_get(v_errorMsg_477_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v_errorMsg_477_);
if (v_isSharedCheck_515_ == 0)
{
v___x_499_ = v_errorMsg_477_;
v_isShared_500_ = v_isSharedCheck_515_;
goto v_resetjp_498_;
}
else
{
lean_inc(v_val_497_);
lean_dec(v_errorMsg_477_);
v___x_499_ = lean_box(0);
v_isShared_500_ = v_isSharedCheck_515_;
goto v_resetjp_498_;
}
v_resetjp_498_:
{
lean_object* v_unexpectedTk_501_; lean_object* v_unexpected_502_; lean_object* v_expected_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_514_; 
v_unexpectedTk_501_ = lean_ctor_get(v_val_497_, 0);
v_unexpected_502_ = lean_ctor_get(v_val_497_, 1);
v_expected_503_ = lean_ctor_get(v_val_497_, 2);
v_isSharedCheck_514_ = !lean_is_exclusive(v_val_497_);
if (v_isSharedCheck_514_ == 0)
{
v___x_505_ = v_val_497_;
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_expected_503_);
lean_inc(v_unexpected_502_);
lean_inc(v_unexpectedTk_501_);
lean_dec(v_val_497_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_514_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
lean_object* v___x_507_; lean_object* v___x_509_; 
v___x_507_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_456_, v_pos_457_, v_str_458_, v_unexpectedTk_501_);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_507_);
v___x_509_ = v___x_505_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v___x_507_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_unexpected_502_);
lean_ctor_set(v_reuseFailAlloc_513_, 2, v_expected_503_);
v___x_509_ = v_reuseFailAlloc_513_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
lean_object* v___x_511_; 
if (v_isShared_500_ == 0)
{
lean_ctor_set(v___x_499_, 0, v___x_509_);
v___x_511_ = v___x_499_;
goto v_reusejp_510_;
}
else
{
lean_object* v_reuseFailAlloc_512_; 
v_reuseFailAlloc_512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_512_, 0, v___x_509_);
v___x_511_ = v_reuseFailAlloc_512_;
goto v_reusejp_510_;
}
v_reusejp_510_:
{
v___y_485_ = v___x_511_;
goto v___jp_484_;
}
}
}
}
}
v___jp_484_:
{
lean_object* v___x_486_; size_t v_sz_487_; size_t v___x_488_; lean_object* v___x_489_; lean_object* v_s_491_; 
v___x_486_ = ((lean_object*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___closed__9));
v_sz_487_ = lean_array_size(v_recoveredErrors_478_);
v___x_488_ = ((size_t)0ULL);
v___x_489_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_486_, v___f_459_, v_sz_487_, v___x_488_, v_recoveredErrors_478_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 5, v___x_489_);
lean_ctor_set(v___x_481_, 4, v___y_485_);
lean_ctor_set(v___x_481_, 2, v___x_483_);
v_s_491_ = v___x_481_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_stxStack_473_);
lean_ctor_set(v_reuseFailAlloc_496_, 1, v_lhsPrec_474_);
lean_ctor_set(v_reuseFailAlloc_496_, 2, v___x_483_);
lean_ctor_set(v_reuseFailAlloc_496_, 3, v_cache_476_);
lean_ctor_set(v_reuseFailAlloc_496_, 4, v___y_485_);
lean_ctor_set(v_reuseFailAlloc_496_, 5, v___x_489_);
lean_ctor_set(v_reuseFailAlloc_496_, 6, v_traces_479_);
v_s_491_ = v_reuseFailAlloc_496_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_492_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_454_, v_s_491_);
v___x_493_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
v___x_494_ = l_Lean_MessageData_ofFormat(v___x_493_);
v___x_495_ = l_Lean_throwError___redArg(v_inst_460_, v_inst_461_, v___x_494_);
return v___x_495_;
}
}
}
}
else
{
lean_object* v_stxStack_517_; lean_object* v_pos_518_; uint8_t v___x_519_; 
lean_dec_ref(v___f_459_);
v_stxStack_517_ = lean_ctor_get(v_s_468_, 0);
lean_inc_ref(v_stxStack_517_);
v_pos_518_ = lean_ctor_get(v_s_468_, 2);
lean_inc(v_pos_518_);
v___x_519_ = l_Lean_Parser_InputContext_atEnd(v_ictx_454_, v_pos_518_);
lean_dec(v_pos_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
lean_dec_ref(v_stxStack_517_);
lean_dec_ref(v_toApplicative_462_);
lean_dec(v_pos_457_);
v___x_520_ = ((lean_object*)(l_Lean_Doc_parseStrLit___redArg___lam__0___closed__0));
v___x_521_ = l_Lean_Parser_ParserState_mkError(v_s_468_, v___x_520_);
v___x_522_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_454_, v___x_521_);
v___x_523_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_523_, 0, v___x_522_);
v___x_524_ = l_Lean_MessageData_ofFormat(v___x_523_);
v___x_525_ = l_Lean_throwError___redArg(v_inst_460_, v_inst_461_, v___x_524_);
return v___x_525_;
}
else
{
lean_object* v_toPure_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; 
lean_dec_ref(v_s_468_);
lean_dec_ref(v_inst_461_);
lean_dec_ref(v_inst_460_);
lean_dec_ref(v_ictx_454_);
v_toPure_526_ = lean_ctor_get(v_toApplicative_462_, 1);
lean_inc(v_toPure_526_);
lean_dec_ref(v_toApplicative_462_);
v___x_527_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_517_);
lean_dec_ref(v_stxStack_517_);
v___x_528_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_parseQuotedStrLit_repositionSyntax(v_text_456_, v_pos_457_, v_str_458_, v___x_527_);
v___x_529_ = lean_apply_2(v_toPure_526_, lean_box(0), v___x_528_);
return v___x_529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed(lean_object* v_env_530_, lean_object* v_p_531_, lean_object* v_ictx_532_, lean_object* v_s_533_, lean_object* v_text_534_, lean_object* v_pos_535_, lean_object* v_str_536_, lean_object* v___f_537_, lean_object* v_inst_538_, lean_object* v_inst_539_, lean_object* v_toApplicative_540_, lean_object* v_____do__lift_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__1(v_env_530_, v_p_531_, v_ictx_532_, v_s_533_, v_text_534_, v_pos_535_, v_str_536_, v___f_537_, v_inst_538_, v_inst_539_, v_toApplicative_540_, v_____do__lift_541_);
lean_dec_ref(v_str_536_);
lean_dec_ref(v_text_534_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__2(lean_object* v_str_543_, lean_object* v_env_544_, lean_object* v_p_545_, lean_object* v_text_546_, lean_object* v_pos_547_, lean_object* v___f_548_, lean_object* v_inst_549_, lean_object* v_inst_550_, lean_object* v_toApplicative_551_, lean_object* v_toBind_552_, lean_object* v_inst_553_, lean_object* v_____do__lift_554_){
_start:
{
uint8_t v___x_555_; lean_object* v___x_556_; lean_object* v_ictx_557_; lean_object* v_s_558_; lean_object* v___f_559_; lean_object* v___x_560_; 
v___x_555_ = 1;
v___x_556_ = lean_string_utf8_byte_size(v_str_543_);
lean_inc_ref(v_str_543_);
v_ictx_557_ = l_Lean_Parser_mkInputContext___redArg(v_str_543_, v_____do__lift_554_, v___x_555_, v___x_556_);
v_s_558_ = l_Lean_Parser_mkParserState(v_str_543_);
v___f_559_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__1___boxed), 12, 11);
lean_closure_set(v___f_559_, 0, v_env_544_);
lean_closure_set(v___f_559_, 1, v_p_545_);
lean_closure_set(v___f_559_, 2, v_ictx_557_);
lean_closure_set(v___f_559_, 3, v_s_558_);
lean_closure_set(v___f_559_, 4, v_text_546_);
lean_closure_set(v___f_559_, 5, v_pos_547_);
lean_closure_set(v___f_559_, 6, v_str_543_);
lean_closure_set(v___f_559_, 7, v___f_548_);
lean_closure_set(v___f_559_, 8, v_inst_549_);
lean_closure_set(v___f_559_, 9, v_inst_550_);
lean_closure_set(v___f_559_, 10, v_toApplicative_551_);
v___x_560_ = lean_apply_4(v_toBind_552_, lean_box(0), lean_box(0), v_inst_553_, v___f_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(lean_object* v_inst_561_, lean_object* v_strLit_562_, lean_object* v_text_563_, lean_object* v_env_564_, lean_object* v_p_565_, lean_object* v_inst_566_, lean_object* v_inst_567_, lean_object* v_toApplicative_568_, lean_object* v_toBind_569_, lean_object* v_inst_570_, lean_object* v_pos_571_){
_start:
{
lean_object* v_getFileName_572_; lean_object* v_str_573_; lean_object* v___f_574_; lean_object* v___f_575_; lean_object* v___x_576_; 
v_getFileName_572_ = lean_ctor_get(v_inst_561_, 2);
lean_inc(v_getFileName_572_);
lean_dec_ref(v_inst_561_);
v_str_573_ = l_Lean_TSyntax_getString(v_strLit_562_);
lean_inc_ref(v_str_573_);
lean_inc(v_pos_571_);
lean_inc_ref(v_text_563_);
v___f_574_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_574_, 0, v_text_563_);
lean_closure_set(v___f_574_, 1, v_pos_571_);
lean_closure_set(v___f_574_, 2, v_str_573_);
lean_inc(v_toBind_569_);
v___f_575_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__2), 12, 11);
lean_closure_set(v___f_575_, 0, v_str_573_);
lean_closure_set(v___f_575_, 1, v_env_564_);
lean_closure_set(v___f_575_, 2, v_p_565_);
lean_closure_set(v___f_575_, 3, v_text_563_);
lean_closure_set(v___f_575_, 4, v_pos_571_);
lean_closure_set(v___f_575_, 5, v___f_574_);
lean_closure_set(v___f_575_, 6, v_inst_566_);
lean_closure_set(v___f_575_, 7, v_inst_567_);
lean_closure_set(v___f_575_, 8, v_toApplicative_568_);
lean_closure_set(v___f_575_, 9, v_toBind_569_);
lean_closure_set(v___f_575_, 10, v_inst_570_);
v___x_576_ = lean_apply_4(v_toBind_569_, lean_box(0), lean_box(0), v_getFileName_572_, v___f_575_);
return v___x_576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed(lean_object* v_inst_577_, lean_object* v_strLit_578_, lean_object* v_text_579_, lean_object* v_env_580_, lean_object* v_p_581_, lean_object* v_inst_582_, lean_object* v_inst_583_, lean_object* v_toApplicative_584_, lean_object* v_toBind_585_, lean_object* v_inst_586_, lean_object* v_pos_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__3(v_inst_577_, v_strLit_578_, v_text_579_, v_env_580_, v_p_581_, v_inst_582_, v_inst_583_, v_toApplicative_584_, v_toBind_585_, v_inst_586_, v_pos_587_);
lean_dec(v_strLit_578_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__4(lean_object* v___f_589_, lean_object* v_pos_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = lean_apply_1(v___f_589_, v_pos_590_);
return v___x_591_;
}
}
static lean_object* _init_l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__1(void){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = ((lean_object*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__0));
v___x_594_ = l_Lean_stringToMessageData(v___x_593_);
return v___x_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(lean_object* v_text_595_, lean_object* v_inst_596_, lean_object* v_inst_597_, lean_object* v_strLit_598_, lean_object* v_toBind_599_, lean_object* v___f_600_, lean_object* v_toApplicative_601_, lean_object* v___f_602_, lean_object* v_____r_603_, lean_object* v_pos_604_){
_start:
{
lean_object* v_source_605_; uint32_t v___x_606_; uint32_t v___x_607_; uint8_t v___x_608_; 
v_source_605_ = lean_ctor_get(v_text_595_, 0);
v___x_606_ = lean_string_utf8_get(v_source_605_, v_pos_604_);
v___x_607_ = 34;
v___x_608_ = lean_uint32_dec_eq(v___x_606_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
lean_dec(v___f_602_);
lean_dec_ref(v_toApplicative_601_);
v___x_609_ = lean_obj_once(&l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__1, &l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__1_once, _init_l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___closed__1);
v___x_610_ = l_Lean_throwErrorAt___redArg(v_inst_596_, v_inst_597_, v_strLit_598_, v___x_609_);
v___x_611_ = lean_apply_4(v_toBind_599_, lean_box(0), lean_box(0), v___x_610_, v___f_600_);
return v___x_611_;
}
else
{
lean_object* v_toPure_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec(v___f_600_);
lean_dec(v_strLit_598_);
lean_dec_ref(v_inst_597_);
lean_dec_ref(v_inst_596_);
v_toPure_612_ = lean_ctor_get(v_toApplicative_601_, 1);
lean_inc(v_toPure_612_);
lean_dec_ref(v_toApplicative_601_);
v___x_613_ = lean_string_utf8_next(v_source_605_, v_pos_604_);
v___x_614_ = lean_apply_2(v_toPure_612_, lean_box(0), v___x_613_);
v___x_615_ = lean_apply_4(v_toBind_599_, lean_box(0), lean_box(0), v___x_614_, v___f_602_);
return v___x_615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___boxed(lean_object* v_text_616_, lean_object* v_inst_617_, lean_object* v_inst_618_, lean_object* v_strLit_619_, lean_object* v_toBind_620_, lean_object* v___f_621_, lean_object* v_toApplicative_622_, lean_object* v___f_623_, lean_object* v_____r_624_, lean_object* v_pos_625_){
_start:
{
lean_object* v_res_626_; 
v_res_626_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__6(v_text_616_, v_inst_617_, v_inst_618_, v_strLit_619_, v_toBind_620_, v___f_621_, v_toApplicative_622_, v___f_623_, v_____r_624_, v_pos_625_);
lean_dec(v_pos_625_);
lean_dec_ref(v_text_616_);
return v_res_626_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__5(lean_object* v___f_627_, lean_object* v_____s_628_){
_start:
{
lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_629_ = lean_box(0);
v___x_630_ = lean_apply_2(v___f_627_, v___x_629_, v_____s_628_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__7(lean_object* v_toPure_631_, lean_object* v_____do__lift_632_){
_start:
{
if (lean_obj_tag(v_____do__lift_632_) == 0)
{
lean_object* v_a_633_; lean_object* v___x_635_; uint8_t v_isShared_636_; uint8_t v_isSharedCheck_641_; 
v_a_633_ = lean_ctor_get(v_____do__lift_632_, 0);
v_isSharedCheck_641_ = !lean_is_exclusive(v_____do__lift_632_);
if (v_isSharedCheck_641_ == 0)
{
v___x_635_ = v_____do__lift_632_;
v_isShared_636_ = v_isSharedCheck_641_;
goto v_resetjp_634_;
}
else
{
lean_inc(v_a_633_);
lean_dec(v_____do__lift_632_);
v___x_635_ = lean_box(0);
v_isShared_636_ = v_isSharedCheck_641_;
goto v_resetjp_634_;
}
v_resetjp_634_:
{
lean_object* v___x_638_; 
if (v_isShared_636_ == 0)
{
lean_ctor_set_tag(v___x_635_, 1);
v___x_638_ = v___x_635_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v_a_633_);
v___x_638_ = v_reuseFailAlloc_640_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; 
v___x_639_ = lean_apply_2(v_toPure_631_, lean_box(0), v___x_638_);
return v___x_639_;
}
}
}
else
{
lean_object* v_a_642_; lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_650_; 
v_a_642_ = lean_ctor_get(v_____do__lift_632_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v_____do__lift_632_);
if (v_isSharedCheck_650_ == 0)
{
v___x_644_ = v_____do__lift_632_;
v_isShared_645_ = v_isSharedCheck_650_;
goto v_resetjp_643_;
}
else
{
lean_inc(v_a_642_);
lean_dec(v_____do__lift_632_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_650_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set_tag(v___x_644_, 0);
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_649_; 
v_reuseFailAlloc_649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_649_, 0, v_a_642_);
v___x_647_ = v_reuseFailAlloc_649_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_648_; 
v___x_648_ = lean_apply_2(v_toPure_631_, lean_box(0), v___x_647_);
return v___x_648_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(lean_object* v_source_651_, lean_object* v_toPure_652_, lean_object* v_toBind_653_, lean_object* v___f_654_, lean_object* v_b_655_){
_start:
{
uint32_t v___x_656_; uint32_t v___x_657_; uint8_t v___x_658_; 
v___x_656_ = lean_string_utf8_get(v_source_651_, v_b_655_);
v___x_657_ = 35;
v___x_658_ = lean_uint32_dec_eq(v___x_656_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v_b_655_);
v___x_660_ = lean_apply_2(v_toPure_652_, lean_box(0), v___x_659_);
v___x_661_ = lean_apply_4(v_toBind_653_, lean_box(0), lean_box(0), v___x_660_, v___f_654_);
return v___x_661_;
}
else
{
lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_662_ = lean_string_utf8_next(v_source_651_, v_b_655_);
lean_dec(v_b_655_);
v___x_663_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_663_, 0, v___x_662_);
v___x_664_ = lean_apply_2(v_toPure_652_, lean_box(0), v___x_663_);
v___x_665_ = lean_apply_4(v_toBind_653_, lean_box(0), lean_box(0), v___x_664_, v___f_654_);
return v___x_665_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed(lean_object* v_source_666_, lean_object* v_toPure_667_, lean_object* v_toBind_668_, lean_object* v___f_669_, lean_object* v_b_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_Doc_parseQuotedStrLit___redArg___lam__8(v_source_666_, v_toPure_667_, v_toBind_668_, v___f_669_, v_b_670_);
lean_dec_ref(v_source_666_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__9(lean_object* v_text_672_, lean_object* v___f_673_, lean_object* v_toApplicative_674_, lean_object* v_toBind_675_, lean_object* v_inst_676_, lean_object* v___f_677_, lean_object* v_____x_678_){
_start:
{
lean_object* v_start_679_; lean_object* v_source_680_; uint32_t v___x_681_; uint32_t v___x_682_; uint8_t v___x_683_; 
v_start_679_ = lean_ctor_get(v_____x_678_, 0);
lean_inc(v_start_679_);
lean_dec_ref(v_____x_678_);
v_source_680_ = lean_ctor_get(v_text_672_, 0);
lean_inc_ref(v_source_680_);
lean_dec_ref(v_text_672_);
v___x_681_ = lean_string_utf8_get(v_source_680_, v_start_679_);
v___x_682_ = 114;
v___x_683_ = lean_uint32_dec_eq(v___x_681_, v___x_682_);
if (v___x_683_ == 0)
{
lean_object* v___x_684_; lean_object* v___x_685_; 
lean_dec_ref(v_source_680_);
lean_dec(v___f_677_);
lean_dec_ref(v_inst_676_);
lean_dec(v_toBind_675_);
lean_dec_ref(v_toApplicative_674_);
v___x_684_ = lean_box(0);
v___x_685_ = lean_apply_2(v___f_673_, v___x_684_, v_start_679_);
return v___x_685_;
}
else
{
lean_object* v_toPure_686_; lean_object* v_pos_687_; lean_object* v___f_688_; lean_object* v___f_689_; lean_object* v___x_690_; lean_object* v___x_691_; 
lean_dec(v___f_673_);
v_toPure_686_ = lean_ctor_get(v_toApplicative_674_, 1);
lean_inc_n(v_toPure_686_, 2);
lean_dec_ref(v_toApplicative_674_);
v_pos_687_ = lean_string_utf8_next(v_source_680_, v_start_679_);
lean_dec(v_start_679_);
v___f_688_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__7), 2, 1);
lean_closure_set(v___f_688_, 0, v_toPure_686_);
lean_inc(v_toBind_675_);
v___f_689_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__8___boxed), 5, 4);
lean_closure_set(v___f_689_, 0, v_source_680_);
lean_closure_set(v___f_689_, 1, v_toPure_686_);
lean_closure_set(v___f_689_, 2, v_toBind_675_);
lean_closure_set(v___f_689_, 3, v___f_688_);
v___x_690_ = l___private_Init_While_0__whileM_erased___redArg(v_inst_676_, v___f_689_, v_pos_687_);
v___x_691_ = lean_apply_4(v_toBind_675_, lean_box(0), lean_box(0), v___x_690_, v___f_677_);
return v___x_691_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__10(lean_object* v_inst_692_, lean_object* v_strLit_693_, lean_object* v_text_694_, lean_object* v_p_695_, lean_object* v_inst_696_, lean_object* v_inst_697_, lean_object* v_toApplicative_698_, lean_object* v_toBind_699_, lean_object* v_inst_700_, lean_object* v_env_701_){
_start:
{
lean_object* v___f_702_; lean_object* v___f_703_; lean_object* v___f_704_; lean_object* v___f_705_; lean_object* v___f_706_; lean_object* v___x_707_; lean_object* v___x_708_; 
lean_inc_n(v_toBind_699_, 3);
lean_inc_ref_n(v_toApplicative_698_, 2);
lean_inc_ref(v_inst_697_);
lean_inc_ref_n(v_inst_696_, 3);
lean_inc_ref_n(v_text_694_, 2);
lean_inc_n(v_strLit_693_, 2);
v___f_702_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__3___boxed), 11, 10);
lean_closure_set(v___f_702_, 0, v_inst_692_);
lean_closure_set(v___f_702_, 1, v_strLit_693_);
lean_closure_set(v___f_702_, 2, v_text_694_);
lean_closure_set(v___f_702_, 3, v_env_701_);
lean_closure_set(v___f_702_, 4, v_p_695_);
lean_closure_set(v___f_702_, 5, v_inst_696_);
lean_closure_set(v___f_702_, 6, v_inst_697_);
lean_closure_set(v___f_702_, 7, v_toApplicative_698_);
lean_closure_set(v___f_702_, 8, v_toBind_699_);
lean_closure_set(v___f_702_, 9, v_inst_700_);
v___f_703_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__4), 2, 1);
lean_closure_set(v___f_703_, 0, v___f_702_);
lean_inc_ref(v___f_703_);
v___f_704_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__6___boxed), 10, 8);
lean_closure_set(v___f_704_, 0, v_text_694_);
lean_closure_set(v___f_704_, 1, v_inst_696_);
lean_closure_set(v___f_704_, 2, v_inst_697_);
lean_closure_set(v___f_704_, 3, v_strLit_693_);
lean_closure_set(v___f_704_, 4, v_toBind_699_);
lean_closure_set(v___f_704_, 5, v___f_703_);
lean_closure_set(v___f_704_, 6, v_toApplicative_698_);
lean_closure_set(v___f_704_, 7, v___f_703_);
lean_inc_ref(v___f_704_);
v___f_705_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__5), 2, 1);
lean_closure_set(v___f_705_, 0, v___f_704_);
v___f_706_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__9), 7, 6);
lean_closure_set(v___f_706_, 0, v_text_694_);
lean_closure_set(v___f_706_, 1, v___f_704_);
lean_closure_set(v___f_706_, 2, v_toApplicative_698_);
lean_closure_set(v___f_706_, 3, v_toBind_699_);
lean_closure_set(v___f_706_, 4, v_inst_696_);
lean_closure_set(v___f_706_, 5, v___f_705_);
v___x_707_ = l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg(v_inst_696_, v_strLit_693_);
lean_dec(v_strLit_693_);
v___x_708_ = lean_apply_4(v_toBind_699_, lean_box(0), lean_box(0), v___x_707_, v___f_706_);
return v___x_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg___lam__11(lean_object* v_inst_709_, lean_object* v_inst_710_, lean_object* v_strLit_711_, lean_object* v_p_712_, lean_object* v_inst_713_, lean_object* v_inst_714_, lean_object* v_toApplicative_715_, lean_object* v_toBind_716_, lean_object* v_inst_717_, lean_object* v_text_718_){
_start:
{
lean_object* v_getEnv_719_; lean_object* v___f_720_; lean_object* v___x_721_; 
v_getEnv_719_ = lean_ctor_get(v_inst_709_, 0);
lean_inc(v_getEnv_719_);
lean_dec_ref(v_inst_709_);
lean_inc(v_toBind_716_);
v___f_720_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__10), 10, 9);
lean_closure_set(v___f_720_, 0, v_inst_710_);
lean_closure_set(v___f_720_, 1, v_strLit_711_);
lean_closure_set(v___f_720_, 2, v_text_718_);
lean_closure_set(v___f_720_, 3, v_p_712_);
lean_closure_set(v___f_720_, 4, v_inst_713_);
lean_closure_set(v___f_720_, 5, v_inst_714_);
lean_closure_set(v___f_720_, 6, v_toApplicative_715_);
lean_closure_set(v___f_720_, 7, v_toBind_716_);
lean_closure_set(v___f_720_, 8, v_inst_717_);
v___x_721_ = lean_apply_4(v_toBind_716_, lean_box(0), lean_box(0), v_getEnv_719_, v___f_720_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object* v_inst_722_, lean_object* v_inst_723_, lean_object* v_inst_724_, lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_inst_727_, lean_object* v_p_728_, lean_object* v_strLit_729_){
_start:
{
lean_object* v_toApplicative_730_; lean_object* v_toBind_731_; lean_object* v___f_732_; lean_object* v___x_733_; 
v_toApplicative_730_ = lean_ctor_get(v_inst_722_, 0);
lean_inc_ref(v_toApplicative_730_);
v_toBind_731_ = lean_ctor_get(v_inst_722_, 1);
lean_inc_n(v_toBind_731_, 2);
v___f_732_ = lean_alloc_closure((void*)(l_Lean_Doc_parseQuotedStrLit___redArg___lam__11), 10, 9);
lean_closure_set(v___f_732_, 0, v_inst_724_);
lean_closure_set(v___f_732_, 1, v_inst_726_);
lean_closure_set(v___f_732_, 2, v_strLit_729_);
lean_closure_set(v___f_732_, 3, v_p_728_);
lean_closure_set(v___f_732_, 4, v_inst_722_);
lean_closure_set(v___f_732_, 5, v_inst_725_);
lean_closure_set(v___f_732_, 6, v_toApplicative_730_);
lean_closure_set(v___f_732_, 7, v_toBind_731_);
lean_closure_set(v___f_732_, 8, v_inst_727_);
v___x_733_ = lean_apply_4(v_toBind_731_, lean_box(0), lean_box(0), v_inst_723_, v___f_732_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseQuotedStrLit(lean_object* v_m_734_, lean_object* v_inst_735_, lean_object* v_inst_736_, lean_object* v_inst_737_, lean_object* v_inst_738_, lean_object* v_inst_739_, lean_object* v_inst_740_, lean_object* v_p_741_, lean_object* v_strLit_742_){
_start:
{
lean_object* v___x_743_; 
v___x_743_ = l_Lean_Doc_parseQuotedStrLit___redArg(v_inst_735_, v_inst_736_, v_inst_737_, v_inst_738_, v_inst_739_, v_inst_740_, v_p_741_, v_strLit_742_);
return v___x_743_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0(lean_object* v_s_744_, lean_object* v_toPure_745_, uint8_t v_err_746_){
_start:
{
lean_object* v_stxStack_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; 
v_stxStack_747_ = lean_ctor_get(v_s_744_, 0);
v___x_748_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_747_);
v___x_749_ = lean_box(v_err_746_);
v___x_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_750_, 0, v___x_748_);
lean_ctor_set(v___x_750_, 1, v___x_749_);
v___x_751_ = lean_apply_2(v_toPure_745_, lean_box(0), v___x_750_);
return v___x_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__0___boxed(lean_object* v_s_752_, lean_object* v_toPure_753_, lean_object* v_err_754_){
_start:
{
uint8_t v_err_boxed_755_; lean_object* v_res_756_; 
v_err_boxed_755_ = lean_unbox(v_err_754_);
v_res_756_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__0(v_s_752_, v_toPure_753_, v_err_boxed_755_);
lean_dec_ref(v_s_752_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1(lean_object* v___f_757_, uint8_t v_err_758_){
_start:
{
lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_759_ = lean_box(v_err_758_);
v___x_760_ = lean_apply_1(v___f_757_, v___x_759_);
return v___x_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed(lean_object* v___f_761_, lean_object* v_err_762_){
_start:
{
uint8_t v_err_boxed_763_; lean_object* v_res_764_; 
v_err_boxed_763_ = lean_unbox(v_err_762_);
v_res_764_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__1(v___f_761_, v_err_boxed_763_);
return v_res_764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2(lean_object* v_toPure_765_, uint8_t v___x_766_, lean_object* v_toBind_767_, lean_object* v___f_768_, lean_object* v_____r_769_){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; 
v___x_770_ = lean_box(v___x_766_);
v___x_771_ = lean_apply_2(v_toPure_765_, lean_box(0), v___x_770_);
v___x_772_ = lean_apply_4(v_toBind_767_, lean_box(0), lean_box(0), v___x_771_, v___f_768_);
return v___x_772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed(lean_object* v_toPure_773_, lean_object* v___x_774_, lean_object* v_toBind_775_, lean_object* v___f_776_, lean_object* v_____r_777_){
_start:
{
uint8_t v___x_559__boxed_778_; lean_object* v_res_779_; 
v___x_559__boxed_778_ = lean_unbox(v___x_774_);
v_res_779_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__2(v_toPure_773_, v___x_559__boxed_778_, v_toBind_775_, v___f_776_, v_____r_777_);
return v_res_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6(lean_object* v_env_780_, lean_object* v_p_781_, lean_object* v_ictx_782_, lean_object* v_s_783_, lean_object* v_toPure_784_, uint8_t v___x_785_, lean_object* v_toBind_786_, lean_object* v_inst_787_, lean_object* v_inst_788_, lean_object* v_inst_789_, lean_object* v_inst_790_, lean_object* v_____do__lift_791_){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v_s_796_; lean_object* v___f_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v___x_792_ = lean_box(0);
v___x_793_ = lean_box(0);
lean_inc_ref(v_env_780_);
v___x_794_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_794_, 0, v_env_780_);
lean_ctor_set(v___x_794_, 1, v_____do__lift_791_);
lean_ctor_set(v___x_794_, 2, v___x_792_);
lean_ctor_set(v___x_794_, 3, v___x_793_);
v___x_795_ = l_Lean_Parser_getTokenTable(v_env_780_);
lean_inc_ref(v_ictx_782_);
v_s_796_ = l_Lean_Parser_ParserFn_run(v_p_781_, v_ictx_782_, v___x_794_, v___x_795_, v_s_783_);
lean_inc(v_toPure_784_);
lean_inc_ref_n(v_s_796_, 2);
v___f_797_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_797_, 0, v_s_796_);
lean_closure_set(v___f_797_, 1, v_toPure_784_);
v___x_798_ = l_Lean_Parser_ParserState_allErrors(v_s_796_);
v___x_799_ = lean_array_get_size(v___x_798_);
lean_dec_ref(v___x_798_);
v___x_800_ = lean_unsigned_to_nat(0u);
v___x_801_ = lean_nat_dec_eq(v___x_799_, v___x_800_);
if (v___x_801_ == 0)
{
lean_object* v___f_802_; lean_object* v___x_803_; lean_object* v___f_804_; lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; 
v___f_802_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_802_, 0, v___f_797_);
v___x_803_ = lean_box(v___x_785_);
lean_inc(v_toBind_786_);
v___f_804_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_804_, 0, v_toPure_784_);
lean_closure_set(v___f_804_, 1, v___x_803_);
lean_closure_set(v___f_804_, 2, v_toBind_786_);
lean_closure_set(v___f_804_, 3, v___f_802_);
v___x_805_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_782_, v_s_796_);
v___x_806_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_806_, 0, v___x_805_);
v___x_807_ = l_Lean_MessageData_ofFormat(v___x_806_);
v___x_808_ = l_Lean_logError___redArg(v_inst_787_, v_inst_788_, v_inst_789_, v_inst_790_, v___x_807_);
v___x_809_ = lean_apply_4(v_toBind_786_, lean_box(0), lean_box(0), v___x_808_, v___f_804_);
return v___x_809_;
}
else
{
lean_object* v_pos_810_; uint8_t v___x_811_; 
v_pos_810_ = lean_ctor_get(v_s_796_, 2);
lean_inc(v_pos_810_);
v___x_811_ = l_Lean_Parser_InputContext_atEnd(v_ictx_782_, v_pos_810_);
lean_dec(v_pos_810_);
if (v___x_811_ == 0)
{
lean_object* v___f_812_; lean_object* v___x_813_; lean_object* v___f_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v___f_812_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_812_, 0, v___f_797_);
v___x_813_ = lean_box(v___x_785_);
lean_inc(v_toBind_786_);
v___f_814_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_814_, 0, v_toPure_784_);
lean_closure_set(v___f_814_, 1, v___x_813_);
lean_closure_set(v___f_814_, 2, v_toBind_786_);
lean_closure_set(v___f_814_, 3, v___f_812_);
v___x_815_ = ((lean_object*)(l_Lean_Doc_parseStrLit___redArg___lam__0___closed__0));
v___x_816_ = l_Lean_Parser_ParserState_mkError(v_s_796_, v___x_815_);
v___x_817_ = l_Lean_Parser_ParserState_toErrorMsg(v_ictx_782_, v___x_816_);
v___x_818_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_818_, 0, v___x_817_);
v___x_819_ = l_Lean_MessageData_ofFormat(v___x_818_);
v___x_820_ = l_Lean_logError___redArg(v_inst_787_, v_inst_788_, v_inst_789_, v_inst_790_, v___x_819_);
v___x_821_ = lean_apply_4(v_toBind_786_, lean_box(0), lean_box(0), v___x_820_, v___f_814_);
return v___x_821_;
}
else
{
lean_object* v___f_822_; uint8_t v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
lean_dec_ref(v_s_796_);
lean_dec(v_inst_790_);
lean_dec(v_inst_789_);
lean_dec_ref(v_inst_788_);
lean_dec_ref(v_inst_787_);
lean_dec_ref(v_ictx_782_);
v___f_822_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_822_, 0, v___f_797_);
v___x_823_ = 0;
v___x_824_ = lean_box(v___x_823_);
v___x_825_ = lean_apply_2(v_toPure_784_, lean_box(0), v___x_824_);
v___x_826_ = lean_apply_4(v_toBind_786_, lean_box(0), lean_box(0), v___x_825_, v___f_822_);
return v___x_826_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__6___boxed(lean_object* v_env_827_, lean_object* v_p_828_, lean_object* v_ictx_829_, lean_object* v_s_830_, lean_object* v_toPure_831_, lean_object* v___x_832_, lean_object* v_toBind_833_, lean_object* v_inst_834_, lean_object* v_inst_835_, lean_object* v_inst_836_, lean_object* v_inst_837_, lean_object* v_____do__lift_838_){
_start:
{
uint8_t v___x_575__boxed_839_; lean_object* v_res_840_; 
v___x_575__boxed_839_ = lean_unbox(v___x_832_);
v_res_840_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__6(v_env_827_, v_p_828_, v_ictx_829_, v_s_830_, v_toPure_831_, v___x_575__boxed_839_, v_toBind_833_, v_inst_834_, v_inst_835_, v_inst_836_, v_inst_837_, v_____do__lift_838_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3(lean_object* v_source_841_, uint8_t v___x_842_, lean_object* v___y_843_, lean_object* v_env_844_, lean_object* v_p_845_, lean_object* v_toPure_846_, lean_object* v_toBind_847_, lean_object* v_inst_848_, lean_object* v_inst_849_, lean_object* v_inst_850_, lean_object* v_inst_851_, lean_object* v_s_852_, lean_object* v___x_853_, lean_object* v_____do__lift_854_){
_start:
{
lean_object* v_ictx_855_; lean_object* v___x_856_; lean_object* v___y_858_; lean_object* v___x_863_; 
lean_inc_ref(v_source_841_);
v_ictx_855_ = l_Lean_Parser_mkInputContext___redArg(v_source_841_, v_____do__lift_854_, v___x_842_, v___y_843_);
v___x_856_ = l_Lean_Parser_mkParserState(v_source_841_);
lean_dec_ref(v_source_841_);
v___x_863_ = l_Lean_Syntax_getPos_x3f(v_s_852_, v___x_842_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_864_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_865_ = l_panic___redArg(v___x_853_, v___x_864_);
v___y_858_ = v___x_865_;
goto v___jp_857_;
}
else
{
lean_object* v_val_866_; 
v_val_866_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_val_866_);
lean_dec_ref_known(v___x_863_, 1);
v___y_858_ = v_val_866_;
goto v___jp_857_;
}
v___jp_857_:
{
lean_object* v_s_859_; lean_object* v___x_860_; lean_object* v___f_861_; lean_object* v___x_862_; 
v_s_859_ = l_Lean_Parser_ParserState_setPos(v___x_856_, v___y_858_);
v___x_860_ = lean_box(v___x_842_);
lean_inc(v_inst_851_);
lean_inc(v_toBind_847_);
v___f_861_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__6___boxed), 12, 11);
lean_closure_set(v___f_861_, 0, v_env_844_);
lean_closure_set(v___f_861_, 1, v_p_845_);
lean_closure_set(v___f_861_, 2, v_ictx_855_);
lean_closure_set(v___f_861_, 3, v_s_859_);
lean_closure_set(v___f_861_, 4, v_toPure_846_);
lean_closure_set(v___f_861_, 5, v___x_860_);
lean_closure_set(v___f_861_, 6, v_toBind_847_);
lean_closure_set(v___f_861_, 7, v_inst_848_);
lean_closure_set(v___f_861_, 8, v_inst_849_);
lean_closure_set(v___f_861_, 9, v_inst_850_);
lean_closure_set(v___f_861_, 10, v_inst_851_);
v___x_862_ = lean_apply_4(v_toBind_847_, lean_box(0), lean_box(0), v_inst_851_, v___f_861_);
return v___x_862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__3___boxed(lean_object* v_source_867_, lean_object* v___x_868_, lean_object* v___y_869_, lean_object* v_env_870_, lean_object* v_p_871_, lean_object* v_toPure_872_, lean_object* v_toBind_873_, lean_object* v_inst_874_, lean_object* v_inst_875_, lean_object* v_inst_876_, lean_object* v_inst_877_, lean_object* v_s_878_, lean_object* v___x_879_, lean_object* v_____do__lift_880_){
_start:
{
uint8_t v___x_668__boxed_881_; lean_object* v_res_882_; 
v___x_668__boxed_881_ = lean_unbox(v___x_868_);
v_res_882_ = l_Lean_Doc_parseStrLit_x27___redArg___lam__3(v_source_867_, v___x_668__boxed_881_, v___y_869_, v_env_870_, v_p_871_, v_toPure_872_, v_toBind_873_, v_inst_874_, v_inst_875_, v_inst_876_, v_inst_877_, v_s_878_, v___x_879_, v_____do__lift_880_);
lean_dec(v___x_879_);
lean_dec(v_s_878_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__4(lean_object* v_text_883_, lean_object* v_inst_884_, lean_object* v_p_885_, lean_object* v_toPure_886_, lean_object* v_toBind_887_, lean_object* v_inst_888_, lean_object* v_inst_889_, lean_object* v_inst_890_, lean_object* v_s_891_, lean_object* v___x_892_, lean_object* v_env_893_){
_start:
{
uint8_t v___x_894_; lean_object* v___y_896_; lean_object* v___y_897_; lean_object* v___y_903_; lean_object* v___x_907_; 
v___x_894_ = 1;
v___x_907_ = l_Lean_Syntax_getTailPos_x3f(v_s_891_, v___x_894_);
if (lean_obj_tag(v___x_907_) == 0)
{
lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_908_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3, &l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3_once, _init_l___private_Lean_Elab_DocString_Builtin_Parsing_0__Lean_Doc_strLitRange___redArg___closed__3);
v___x_909_ = l_panic___redArg(v___x_892_, v___x_908_);
v___y_903_ = v___x_909_;
goto v___jp_902_;
}
else
{
lean_object* v_val_910_; 
v_val_910_ = lean_ctor_get(v___x_907_, 0);
lean_inc(v_val_910_);
lean_dec_ref_known(v___x_907_, 1);
v___y_903_ = v_val_910_;
goto v___jp_902_;
}
v___jp_895_:
{
lean_object* v_getFileName_898_; lean_object* v___x_899_; lean_object* v___f_900_; lean_object* v___x_901_; 
v_getFileName_898_ = lean_ctor_get(v_inst_884_, 2);
lean_inc(v_getFileName_898_);
v___x_899_ = lean_box(v___x_894_);
lean_inc(v_toBind_887_);
v___f_900_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__3___boxed), 14, 13);
lean_closure_set(v___f_900_, 0, v___y_896_);
lean_closure_set(v___f_900_, 1, v___x_899_);
lean_closure_set(v___f_900_, 2, v___y_897_);
lean_closure_set(v___f_900_, 3, v_env_893_);
lean_closure_set(v___f_900_, 4, v_p_885_);
lean_closure_set(v___f_900_, 5, v_toPure_886_);
lean_closure_set(v___f_900_, 6, v_toBind_887_);
lean_closure_set(v___f_900_, 7, v_inst_888_);
lean_closure_set(v___f_900_, 8, v_inst_884_);
lean_closure_set(v___f_900_, 9, v_inst_889_);
lean_closure_set(v___f_900_, 10, v_inst_890_);
lean_closure_set(v___f_900_, 11, v_s_891_);
lean_closure_set(v___f_900_, 12, v___x_892_);
v___x_901_ = lean_apply_4(v_toBind_887_, lean_box(0), lean_box(0), v_getFileName_898_, v___f_900_);
return v___x_901_;
}
v___jp_902_:
{
lean_object* v_source_904_; lean_object* v___x_905_; uint8_t v___x_906_; 
v_source_904_ = lean_ctor_get(v_text_883_, 0);
lean_inc_ref(v_source_904_);
lean_dec_ref(v_text_883_);
v___x_905_ = lean_string_utf8_byte_size(v_source_904_);
v___x_906_ = lean_nat_dec_le(v___y_903_, v___x_905_);
if (v___x_906_ == 0)
{
lean_dec(v___y_903_);
v___y_896_ = v_source_904_;
v___y_897_ = v___x_905_;
goto v___jp_895_;
}
else
{
v___y_896_ = v_source_904_;
v___y_897_ = v___y_903_;
goto v___jp_895_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg___lam__5(lean_object* v_inst_911_, lean_object* v_inst_912_, lean_object* v_p_913_, lean_object* v_toPure_914_, lean_object* v_toBind_915_, lean_object* v_inst_916_, lean_object* v_inst_917_, lean_object* v_inst_918_, lean_object* v_s_919_, lean_object* v___x_920_, lean_object* v_text_921_){
_start:
{
lean_object* v_getEnv_922_; lean_object* v___f_923_; lean_object* v___x_924_; 
v_getEnv_922_ = lean_ctor_get(v_inst_911_, 0);
lean_inc(v_getEnv_922_);
lean_dec_ref(v_inst_911_);
lean_inc(v_toBind_915_);
v___f_923_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__4), 11, 10);
lean_closure_set(v___f_923_, 0, v_text_921_);
lean_closure_set(v___f_923_, 1, v_inst_912_);
lean_closure_set(v___f_923_, 2, v_p_913_);
lean_closure_set(v___f_923_, 3, v_toPure_914_);
lean_closure_set(v___f_923_, 4, v_toBind_915_);
lean_closure_set(v___f_923_, 5, v_inst_916_);
lean_closure_set(v___f_923_, 6, v_inst_917_);
lean_closure_set(v___f_923_, 7, v_inst_918_);
lean_closure_set(v___f_923_, 8, v_s_919_);
lean_closure_set(v___f_923_, 9, v___x_920_);
v___x_924_ = lean_apply_4(v_toBind_915_, lean_box(0), lean_box(0), v_getEnv_922_, v___f_923_);
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27___redArg(lean_object* v_inst_925_, lean_object* v_inst_926_, lean_object* v_inst_927_, lean_object* v_inst_928_, lean_object* v_inst_929_, lean_object* v_inst_930_, lean_object* v_p_931_, lean_object* v_s_932_){
_start:
{
lean_object* v_toApplicative_933_; lean_object* v_toBind_934_; lean_object* v_toPure_935_; lean_object* v___x_936_; lean_object* v___f_937_; lean_object* v___x_938_; 
v_toApplicative_933_ = lean_ctor_get(v_inst_925_, 0);
v_toBind_934_ = lean_ctor_get(v_inst_925_, 1);
lean_inc_n(v_toBind_934_, 2);
v_toPure_935_ = lean_ctor_get(v_toApplicative_933_, 1);
lean_inc(v_toPure_935_);
v___x_936_ = lean_unsigned_to_nat(0u);
v___f_937_ = lean_alloc_closure((void*)(l_Lean_Doc_parseStrLit_x27___redArg___lam__5), 11, 10);
lean_closure_set(v___f_937_, 0, v_inst_927_);
lean_closure_set(v___f_937_, 1, v_inst_929_);
lean_closure_set(v___f_937_, 2, v_p_931_);
lean_closure_set(v___f_937_, 3, v_toPure_935_);
lean_closure_set(v___f_937_, 4, v_toBind_934_);
lean_closure_set(v___f_937_, 5, v_inst_925_);
lean_closure_set(v___f_937_, 6, v_inst_928_);
lean_closure_set(v___f_937_, 7, v_inst_930_);
lean_closure_set(v___f_937_, 8, v_s_932_);
lean_closure_set(v___f_937_, 9, v___x_936_);
v___x_938_ = lean_apply_4(v_toBind_934_, lean_box(0), lean_box(0), v_inst_926_, v___f_937_);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_parseStrLit_x27(lean_object* v_m_939_, lean_object* v_inst_940_, lean_object* v_inst_941_, lean_object* v_inst_942_, lean_object* v_inst_943_, lean_object* v_inst_944_, lean_object* v_inst_945_, lean_object* v_p_946_, lean_object* v_s_947_){
_start:
{
lean_object* v___x_948_; 
v___x_948_ = l_Lean_Doc_parseStrLit_x27___redArg(v_inst_940_, v_inst_941_, v_inst_942_, v_inst_943_, v_inst_944_, v_inst_945_, v_p_946_, v_s_947_);
return v___x_948_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extension(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Attach(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Attach(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
}
#ifdef __cplusplus
}
#endif
