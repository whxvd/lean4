// Lean compiler output
// Module: Lean.Parser.Basic
// Imports: public import Lean.Parser.Types
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
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_String_instInhabitedSlice;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailInfo(lean_object*);
uint8_t lean_string_is_valid_pos(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_matchPrefix___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t l_Lean_isLetterLike(uint32_t);
uint8_t l_Lean_isSubScriptAlnum(uint32_t);
lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*, uint8_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkLit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
lean_object* l_Lean_Syntax_mkNameLit(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_size(lean_object*);
lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_adaptCacheableContext(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_trimAscii(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object*, lean_object*);
lean_object* l_Pi_instInhabited___redArg___lam__0(lean_object*, lean_object*);
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCacheFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_Parser_FirstTokens_seq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_FirstTokens_merge(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isAntiquots(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_merge(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
lean_object* l_Subarray_get___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_push(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_flip(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
lean_object* l_Lean_Syntax_setTailInfo(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
uint8_t lean_string_utf8_at_end(lean_object*, lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* l_Lean_Parser_Error_toString(lean_object*);
lean_object* l_addParenHeuristic(lean_object*);
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0 = (const lean_object*)&l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  pos: "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__0 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__0_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  err: "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__1 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__1_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "\n  out: "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__2 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__2_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__3 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__3_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__4 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__4_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "(some "};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__5 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__5_value;
static const lean_string_object l_Lean_Parser_dbgTraceStateFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Parser_dbgTraceStateFn___closed__6 = (const lean_object*)&l_Lean_Parser_dbgTraceStateFn___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_epsilonInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_epsilonInfo___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_epsilonInfo___closed__0 = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__0_value;
static const lean_closure_object l_Lean_Parser_epsilonInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_epsilonInfo___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_epsilonInfo___closed__1 = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__1_value;
static const lean_ctor_object l_Lean_Parser_epsilonInfo___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_epsilonInfo___closed__0_value),((lean_object*)&l_Lean_Parser_epsilonInfo___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_epsilonInfo___closed__2 = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_epsilonInfo = (const lean_object*)&l_Lean_Parser_epsilonInfo___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTop(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParserFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instAndThenParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instAndThenParserFn___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instAndThenParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instAndThenParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instAndThenParserFn = (const lean_object*)&l_Lean_Parser_instAndThenParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParser___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instAndThenParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instAndThenParser___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instAndThenParser___closed__0 = (const lean_object*)&l_Lean_Parser_instAndThenParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instAndThenParser = (const lean_object*)&l_Lean_Parser_instAndThenParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nodeFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_nodeFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "node "};
static const lean_object* l_Lean_Parser_nodeFn___closed__0 = (const lean_object*)&l_Lean_Parser_nodeFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_trailingNodeFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "trailingNode "};
static const lean_object* l_Lean_Parser_trailingNodeFn___closed__0 = (const lean_object*)&l_Lean_Parser_trailingNodeFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_error(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_errorAtSavedPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_epsilonInfo___closed__0_value),((lean_object*)&l_Lean_Parser_epsilonInfo___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_errorAtSavedPos___closed__0 = (const lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "errorAtSavedPos"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(253, 209, 12, 134, 87, 184, 144, 74)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 202, .m_capacity = 202, .m_length = 201, .m_data = "Generate an error at the position saved with the `withPosition` combinator.\nIf `delta == true`, then it reports at saved position+1.\nThis useful to make sure a parser consumed at least one character.  "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_checkPrecFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "unexpected token at this precedence level; consider parenthesizing the term"};
static const lean_object* l_Lean_Parser_checkPrecFn___closed__0 = (const lean_object*)&l_Lean_Parser_checkPrecFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrec(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrec(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_incQuotDepth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_incQuotDepth___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth(lean_object*);
static lean_once_cell_t l_Lean_Parser_decQuotDepth___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_decQuotDepth___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_suppressInsideQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_suppressInsideQuot___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_suppressInsideQuot___closed__0 = (const lean_object*)&l_Lean_Parser_suppressInsideQuot___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior = (const lean_object*)&l_Lean_Parser_instBEqOrElseOnAntiquotBehavior___closed__0_value;
static const lean_string_object l_Lean_Parser_orelseFnCore___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lean_Parser_orelseFnCore___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_orelseFnCore___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Parser_orelseFnCore___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_orelseFnCore___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(59, 66, 148, 42, 181, 100, 85, 166)}};
static const lean_object* l_Lean_Parser_orelseFnCore___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_orelseFnCore___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_orelseFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orElse"};
static const lean_object* l_Lean_Parser_orelseFn___closed__0 = (const lean_object*)&l_Lean_Parser_orelseFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_orelseInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParserFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instOrElseParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instOrElseParserFn___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instOrElseParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instOrElseParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instOrElseParserFn = (const lean_object*)&l_Lean_Parser_instOrElseParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "orelse"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(18, 70, 47, 117, 238, 126, 239, 49)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 322, .m_capacity = 322, .m_length = 321, .m_data = "Run `p`, falling back to `q` if `p` failed without consuming any input.\n\nNOTE: In order for the pretty printer to retrace an `orelse`, `p` must be a call to `node` or some other parser\nproducing a single node kind. Nested `orelse` calls are flattened for this, i.e. `(node k1 p1 <|> node k2 p2) <|> ...`\nis fine as well. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParser___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instOrElseParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instOrElseParser___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instOrElseParser___closed__0 = (const lean_object*)&l_Lean_Parser_instOrElseParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instOrElseParser = (const lean_object*)&l_Lean_Parser_instOrElseParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomicFn___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_atomicFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "atomic"};
static const lean_object* l_Lean_Parser_atomicFn___closed__0 = (const lean_object*)&l_Lean_Parser_atomicFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_atomicFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_atomic(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_atomicFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 16, 254, 130, 153, 255, 99, 153)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 459, .m_capacity = 459, .m_length = 458, .m_data = "The `atomic(p)` parser parses `p`, returns the same result as `p` and fails iff `p` fails,\nbut if `p` fails after consuming some tokens `atomic(p)` will fail without consuming tokens.\nThis is important for the `p <|> q` combinator, because it is not backtracking, and will fail if\n`p` fails after consuming some tokens. To get backtracking behavior, use `atomic(p) <|> q` instead.\n\nThis parser has the same arity as `p` - it produces the same result as `p`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqRecoveryContext_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqRecoveryContext_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqRecoveryContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqRecoveryContext_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqRecoveryContext___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqRecoveryContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqRecoveryContext = (const lean_object*)&l_Lean_Parser_instBEqRecoveryContext___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "initialPos"};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__1_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__2_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__4_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__3_value),((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "{ byteIdx := "};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__8_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__10_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__12_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13_value;
static const lean_string_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "initialSize"};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__14_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17;
static lean_once_cell_t l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18;
static const lean_ctor_object l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0_value)}};
static const lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instReprRecoveryContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instReprRecoveryContext_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instReprRecoveryContext___closed__0 = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instReprRecoveryContext = (const lean_object*)&l_Lean_Parser_instReprRecoveryContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_recoverFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_recoverFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "recover"};
static const lean_object* l_Lean_Parser_recoverFn___closed__0 = (const lean_object*)&l_Lean_Parser_recoverFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_recoverFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "recover'"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 86, 208, 93, 10, 1, 153, 43)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 455, .m_capacity = 455, .m_length = 454, .m_data = "Recover from errors in `parser` using `handler` to consume input until a known-good state has appeared.\nIf `handler` fails itself, then no recovery is performed.\n\n`handler` is provided with information about the failing parser's effects , and it is run in the\nstate immediately after the failure.\n\nThe interactions between <|> and `recover'` are subtle, especially for syntactic\ncategories that admit user extension. Consider avoiding it in these cases. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_recover(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_recoverFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 137, 49, 69, 62, 133, 213, 34)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 381, .m_capacity = 381, .m_length = 380, .m_data = "Recover from errors in `parser` using `handler` to consume input until a known-good state has appeared.\nIf `handler` fails itself, then no recovery is performed.\n\n`handler` is run in the state immediately after the failure.\n\nThe interactions between <|> and `recover` are subtle, especially for syntactic\ncategories that admit user extension. Consider avoiding it in these cases. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_optionalFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_optionalFn___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_optionalFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Parser_optionalFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_optionalFn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_optionalFn___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_optionalFn___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_optionalFn___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_optionalFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lean_Parser_optionalFn___closed__0 = (const lean_object*)&l_Lean_Parser_optionalFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_optionalFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optionalInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_optionalNoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_lookaheadFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_lookahead(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "lookahead"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 19, 60, 201, 90, 143, 111, 211)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 310, .m_capacity = 310, .m_length = 309, .m_data = "`lookahead(p)` runs `p` and fails if `p` does, but it produces no parse nodes and rewinds the\nposition to the original state on success. So for example `lookahead(\"=>\")` will ensure that the\nnext token is `\"=>\"`, without actually consuming this token.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_notFollowedByFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unexpected "};
static const lean_object* l_Lean_Parser_notFollowedByFn___closed__0 = (const lean_object*)&l_Lean_Parser_notFollowedByFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "notFollowedBy"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(26, 0, 133, 48, 146, 73, 208, 113)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 175, .m_capacity = 175, .m_length = 174, .m_data = "`notFollowedBy(p, \"foo\")` succeeds iff `p` fails;\nif `p` succeeds then it fails with the message `\"unexpected foo\"`.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_manyAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "invalid 'many' parser combinator application, parser did not consume anything"};
static const lean_object* l_Lean_Parser_manyAux___closed__0 = (const lean_object*)&l_Lean_Parser_manyAux___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_manyAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyFn___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_manyFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lean_Parser_manyFn___closed__0 = (const lean_object*)&l_Lean_Parser_manyFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_manyFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_manyNoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Fn___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_many1Fn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "many1"};
static const lean_object* l_Lean_Parser_many1Fn___closed__0 = (const lean_object*)&l_Lean_Parser_many1Fn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_many1Fn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1NoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByInfo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Info(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_many1Unbox___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1Unbox___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_many1Unbox___closed__0 = (const lean_object*)&l_Lean_Parser_many1Unbox___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_takeWhileFn___lam__0(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unterminated comment"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_whitespace___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_whitespace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_whitespace___closed__0 = (const lean_object*)&l_Lean_Parser_whitespace___closed__0_value;
static const lean_closure_object l_Lean_Parser_whitespace___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_takeUntilFn___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_whitespace___closed__0_value)} };
static const lean_object* l_Lean_Parser_whitespace___closed__1 = (const lean_object*)&l_Lean_Parser_whitespace___closed__1_value;
static const lean_string_object l_Lean_Parser_whitespace___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "isolated carriage returns are not allowed"};
static const lean_object* l_Lean_Parser_whitespace___closed__2 = (const lean_object*)&l_Lean_Parser_whitespace___closed__2_value;
static const lean_string_object l_Lean_Parser_whitespace___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "tabs are not allowed; please configure your editor to expand them"};
static const lean_object* l_Lean_Parser_whitespace___closed__3 = (const lean_object*)&l_Lean_Parser_whitespace___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_chFn___lam__0(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_chFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Parser_chFn___closed__0 = (const lean_object*)&l_Lean_Parser_chFn___closed__0_value;
static const lean_string_object l_Lean_Parser_chFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_chFn___closed__1 = (const lean_object*)&l_Lean_Parser_chFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_chFn(uint32_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh(uint32_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_hexDigitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "invalid hexadecimal numeral"};
static const lean_object* l_Lean_Parser_hexDigitFn___closed__0 = (const lean_object*)&l_Lean_Parser_hexDigitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_stringGapFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "expecting newline in string gap"};
static const lean_object* l_Lean_Parser_stringGapFn___closed__0 = (const lean_object*)&l_Lean_Parser_stringGapFn___closed__0_value;
static const lean_string_object l_Lean_Parser_stringGapFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "unexpected additional newline in string gap"};
static const lean_object* l_Lean_Parser_stringGapFn___closed__1 = (const lean_object*)&l_Lean_Parser_stringGapFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_quotedCharCoreFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid escape sequence"};
static const lean_object* l_Lean_Parser_quotedCharCoreFn___closed__0 = (const lean_object*)&l_Lean_Parser_quotedCharCoreFn___closed__0_value;
static lean_once_cell_t l_Lean_Parser_quotedCharCoreFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_quotedCharCoreFn___closed__1;
static lean_once_cell_t l_Lean_Parser_quotedCharCoreFn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_quotedCharCoreFn___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharDefault___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_quotedCharFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_isQuotableCharDefault___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_quotedCharFn___closed__0 = (const lean_object*)&l_Lean_Parser_quotedCharFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_quotedStringFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_charLitFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "missing end of character literal"};
static const lean_object* l_Lean_Parser_charLitFnAux___closed__0 = (const lean_object*)&l_Lean_Parser_charLitFnAux___closed__0_value;
static const lean_string_object l_Lean_Parser_charLitFnAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "char"};
static const lean_object* l_Lean_Parser_charLitFnAux___closed__1 = (const lean_object*)&l_Lean_Parser_charLitFnAux___closed__1_value;
static const lean_ctor_object l_Lean_Parser_charLitFnAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_charLitFnAux___closed__1_value),LEAN_SCALAR_PTR_LITERAL(43, 243, 213, 66, 253, 140, 152, 232)}};
static const lean_object* l_Lean_Parser_charLitFnAux___closed__2 = (const lean_object*)&l_Lean_Parser_charLitFnAux___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFnAux(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_strLitFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Parser_strLitFnAux___closed__0 = (const lean_object*)&l_Lean_Parser_strLitFnAux___closed__0_value;
static const lean_ctor_object l_Lean_Parser_strLitFnAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_strLitFnAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(255, 188, 142, 1, 190, 33, 34, 128)}};
static const lean_object* l_Lean_Parser_strLitFnAux___closed__1 = (const lean_object*)&l_Lean_Parser_strLitFnAux___closed__1_value;
static const lean_string_object l_Lean_Parser_strLitFnAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unterminated string literal"};
static const lean_object* l_Lean_Parser_strLitFnAux___closed__2 = (const lean_object*)&l_Lean_Parser_strLitFnAux___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isRawStrLitStart(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isRawStrLitStart___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "unterminated raw string literal"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawStrLitFnAux(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_takeDigitsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "unexpected character"};
static const lean_object* l_Lean_Parser_takeDigitsFn___closed__0 = (const lean_object*)&l_Lean_Parser_takeDigitsFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "missing exponent digits in scientific literal"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "decimal number"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "unexpected identifier after decimal point; consider parenthesizing the number"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "scientific"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 104, 254, 176, 65, 57, 101, 179)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_decimalNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Parser_decimalNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_decimalNumberFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_decimalNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_decimalNumberFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lean_Parser_decimalNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_decimalNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_binNumberFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_binNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_binNumberFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_binNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_binNumberFn___closed__0_value;
static const lean_string_object l_Lean_Parser_binNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binary number"};
static const lean_object* l_Lean_Parser_binNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_binNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_octalNumberFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_octalNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_octalNumberFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_octalNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_octalNumberFn___closed__0_value;
static const lean_string_object l_Lean_Parser_octalNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "octal number"};
static const lean_object* l_Lean_Parser_octalNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_octalNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_hexNumberFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_hexNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_hexNumberFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_hexNumberFn___closed__0 = (const lean_object*)&l_Lean_Parser_hexNumberFn___closed__0_value;
static const lean_string_object l_Lean_Parser_hexNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "hexadecimal number"};
static const lean_object* l_Lean_Parser_hexNumberFn___closed__1 = (const lean_object*)&l_Lean_Parser_hexNumberFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_numberFnAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numeral"};
static const lean_object* l_Lean_Parser_numberFnAux___closed__0 = (const lean_object*)&l_Lean_Parser_numberFnAux___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_isIdCont(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_isIdCont___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isToken___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_mkTokenAndFixPos_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_mkTokenAndFixPos_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_mkTokenAndFixPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l_Lean_Parser_mkTokenAndFixPos___closed__0 = (const lean_object*)&l_Lean_Parser_mkTokenAndFixPos___closed__0_value;
static const lean_string_object l_Lean_Parser_mkTokenAndFixPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "forbidden token"};
static const lean_object* l_Lean_Parser_mkTokenAndFixPos___closed__1 = (const lean_object*)&l_Lean_Parser_mkTokenAndFixPos___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0_value;
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "unterminated identifier escape"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid Name literal"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_peekTokenAux(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_peekToken(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___lam__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_rawIdentFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rawIdent"};
static const lean_object* l_Lean_Parser_rawIdentFn___closed__0 = (const lean_object*)&l_Lean_Parser_rawIdentFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_satisfySymbolFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_symbolFnAux___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbolNoAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_nonReservedSymbolInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__0 = (const lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__0_value;
static const lean_ctor_object l_Lean_Parser_nonReservedSymbolInfo___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_nonReservedSymbolInfo___closed__1 = (const lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_strAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailWs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBefore(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "checkWsBefore"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(3, 180, 243, 53, 77, 82, 55, 205)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 216, .m_capacity = 216, .m_length = 215, .m_data = "The `ws` parser requires that there is some whitespace at this location.\nFor example, the parser `\"foo\" ws \"+\"` parses `foo +` or `foo/- -/+` but not `foo+`.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_checkTailLinebreak___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Parser_checkTailLinebreak___closed__0 = (const lean_object*)&l_Lean_Parser_checkTailLinebreak___closed__0_value;
static const lean_string_object l_Lean_Parser_checkTailLinebreak___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Parser_checkTailLinebreak___closed__1 = (const lean_object*)&l_Lean_Parser_checkTailLinebreak___closed__1_value;
static const lean_string_object l_Lean_Parser_checkTailLinebreak___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Parser_checkTailLinebreak___closed__2 = (const lean_object*)&l_Lean_Parser_checkTailLinebreak___closed__2_value;
static lean_once_cell_t l_Lean_Parser_checkTailLinebreak___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_checkTailLinebreak___closed__3;
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailLinebreak(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailLinebreak___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "checkLinebreakBefore"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 136, 117, 184, 203, 101, 193, 45)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 188, .m_capacity = 188, .m_length = 187, .m_data = "The `linebreak` parser requires that there is at least one line break at this location.\n(The line break may be inside a comment.)\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailNoWs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBefore(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "checkNoWsBefore"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(246, 175, 148, 38, 136, 238, 167, 124)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 413, .m_capacity = 413, .m_length = 412, .m_data = "The `noWs` parser requires that there is *no* whitespace between the preceding and following\nparsers. For example, the parser `\"foo\" noWs \"+\"` parses `foo+` but not `foo +`.\n\nThis is almost the same as `\"foo+\"`, but using this parser will make `foo+` a token, which may cause\nproblems for the use of `\"foo\"` and `\"+\"` as separate tokens in other parsers.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_unicodeSymbolFnAux___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_unicodeSymbolFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "', '"};
static const lean_object* l_Lean_Parser_unicodeSymbolFn___closed__0 = (const lean_object*)&l_Lean_Parser_unicodeSymbolFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtomicInfo(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_numLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_numLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_numLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_numLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_numLitNoAntiquot;
static const lean_string_object l_Lean_Parser_hexnumFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexnum"};
static const lean_object* l_Lean_Parser_hexnumFn___closed__0 = (const lean_object*)&l_Lean_Parser_hexnumFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_hexnumFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_hexnumFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(152, 252, 51, 178, 203, 245, 189, 159)}};
static const lean_object* l_Lean_Parser_hexnumFn___closed__1 = (const lean_object*)&l_Lean_Parser_hexnumFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hexnumNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnumNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_hexnumNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hexnumNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumNoAntiquot;
static const lean_string_object l_Lean_Parser_scientificLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "scientific number"};
static const lean_object* l_Lean_Parser_scientificLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_scientificLitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_scientificLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_scientificLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_scientificLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitNoAntiquot;
static const lean_string_object l_Lean_Parser_strLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "string literal"};
static const lean_object* l_Lean_Parser_strLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_strLitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_strLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_strLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_strLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_strLitNoAntiquot;
static const lean_string_object l_Lean_Parser_charLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "character literal"};
static const lean_object* l_Lean_Parser_charLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_charLitFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_charLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_charLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_charLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_charLitNoAntiquot;
static const lean_string_object l_Lean_Parser_nameLitFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* l_Lean_Parser_nameLitFn___closed__0 = (const lean_object*)&l_Lean_Parser_nameLitFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_nameLitFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_nameLitFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 246, 234, 130, 97, 205, 144, 82)}};
static const lean_object* l_Lean_Parser_nameLitFn___closed__1 = (const lean_object*)&l_Lean_Parser_nameLitFn___closed__1_value;
static const lean_string_object l_Lean_Parser_nameLitFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Name literal"};
static const lean_object* l_Lean_Parser_nameLitFn___closed__2 = (const lean_object*)&l_Lean_Parser_nameLitFn___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_nameLitNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_nameLitNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_nameLitNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitNoAntiquot;
static const lean_ctor_object l_Lean_Parser_identFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_nonReservedSymbolInfo___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lean_Parser_identFn___closed__0 = (const lean_object*)&l_Lean_Parser_identFn___closed__0_value;
static const lean_string_object l_Lean_Parser_identFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "identifier"};
static const lean_object* l_Lean_Parser_identFn___closed__1 = (const lean_object*)&l_Lean_Parser_identFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_identFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_identNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_identNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_identNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_identNoAntiquot;
static const lean_closure_object l_Lean_Parser_rawIdentNoAntiquot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_rawIdentFn___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_Parser_rawIdentNoAntiquot___closed__0 = (const lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__0_value;
static const lean_ctor_object l_Lean_Parser_rawIdentNoAntiquot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value),((lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__0_value)}};
static const lean_object* l_Lean_Parser_rawIdentNoAntiquot___closed__1 = (const lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_rawIdentNoAntiquot = (const lean_object*)&l_Lean_Parser_rawIdentNoAntiquot___closed__1_value;
static const lean_ctor_object l_Lean_Parser_identEqFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_identFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_identEqFn___closed__0 = (const lean_object*)&l_Lean_Parser_identEqFn___closed__0_value;
static const lean_string_object l_Lean_Parser_identEqFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "identifier '"};
static const lean_object* l_Lean_Parser_identEqFn___closed__1 = (const lean_object*)&l_Lean_Parser_identEqFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_identEqFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_identEq(lean_object*);
static const lean_string_object l_Lean_Parser_hygieneInfoFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lean_Parser_hygieneInfoFn___closed__0 = (const lean_object*)&l_Lean_Parser_hygieneInfoFn___closed__0_value;
static const lean_ctor_object l_Lean_Parser_hygieneInfoFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_hygieneInfoFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lean_Parser_hygieneInfoFn___closed__1 = (const lean_object*)&l_Lean_Parser_hygieneInfoFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_hygieneInfoNoAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfoNoAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_hygieneInfoNoAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_hygieneInfoNoAntiquot___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoNoAntiquot;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_invalidLongestMatchParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = "longestMatch parsers must generate exactly one Syntax node"};
static const lean_object* l_Lean_Parser_invalidLongestMatchParser___closed__0 = (const lean_object*)&l_Lean_Parser_invalidLongestMatchParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_runLongestMatchParser(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_longestMatchStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "New parser has score: "};
static const lean_object* l_Lean_Parser_longestMatchStep___closed__0 = (const lean_object*)&l_Lean_Parser_longestMatchStep___closed__0_value;
static const lean_string_object l_Lean_Parser_longestMatchStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_longestMatchStep___closed__1 = (const lean_object*)&l_Lean_Parser_longestMatchStep___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_longestMatchFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "longestMatch: empty list"};
static const lean_object* l_Lean_Parser_longestMatchFn___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_longestMatchFn___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_longestMatchFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "longestMatchFn"};
static const lean_object* l_Lean_Parser_longestMatchFn___closed__0 = (const lean_object*)&l_Lean_Parser_longestMatchFn___closed__0_value;
static const lean_string_object l_Lean_Parser_longestMatchFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "longestMatchFn (trailing)"};
static const lean_object* l_Lean_Parser_longestMatchFn___closed__1 = (const lean_object*)&l_Lean_Parser_longestMatchFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_anyOfFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "anyOf: empty list"};
static const lean_object* l_Lean_Parser_anyOfFn___closed__0 = (const lean_object*)&l_Lean_Parser_anyOfFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_anyOfFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEqFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEq(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColEq"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(123, 79, 136, 97, 27, 86, 56, 4)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 299, .m_capacity = 299, .m_length = 298, .m_data = "The `colEq` parser ensures that the next token starts at exactly the column of the saved\nposition (see `withPosition`). This can be used to do whitespace sensitive syntax like\na `by` block or `do` block, where all the lines have to line up.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGeFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGe(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGe"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(133, 21, 222, 233, 68, 88, 239, 150)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 474, .m_capacity = 474, .m_length = 473, .m_data = "The `colGe` parser requires that the next token starts from at least the column of the saved\nposition (see `withPosition`), but allows it to be more indented.\nThis can be used for whitespace sensitive syntax to ensure that a block does not go outside a\ncertain indentation scope. For example it is used in the lean grammar for `else if`, to ensure\nthat the `else` is not less indented than the `if` it matches with.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGtFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGt(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "checkColGt"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 27, 6, 116, 51, 223, 220, 245)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 572, .m_capacity = 572, .m_length = 571, .m_data = "The `colGt` parser requires that the next token starts a strictly greater column than the saved\nposition (see `withPosition`). This can be used for whitespace sensitive syntax for the arguments\nto a tactic, to ensure that the following tactic is not interpreted as an argument.\n```\nexample (x : False) : False := by\n  revert x\n  exact id\n```\nHere, the `revert` tactic is followed by a list of `colGt ident`, because otherwise it would\ninterpret `exact` as an identifier and try to revert a variable named `exact`.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEqFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEq(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "checkLineEq"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(238, 130, 255, 142, 22, 38, 200, 197)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 367, .m_capacity = 367, .m_length = 366, .m_data = "The `lineEq` parser requires that the current token is on the same line as the saved position\n(see `withPosition`). This can be used to ensure that composite tokens are not \"broken up\" across\ndifferent lines. For example, `else if` is parsed using `lineEq` to ensure that the two tokens\nare on the same line.\n\nThis parser has arity 0 - it does not capture anything. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withPosition___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withPosition"};
static const lean_object* l_Lean_Parser_withPosition___lam__2___closed__0 = (const lean_object*)&l_Lean_Parser_withPosition___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_withPosition___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 188, 255, 221, 143, 31, 128, 82)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 761, .m_capacity = 761, .m_length = 760, .m_data = "`withPosition(p)` runs `p` while setting the \"saved position\" to the current position.\nThis has no effect on its own, but various other parsers access this position to achieve some\ncomposite effect:\n\n* `colGt`, `colGe`, `colEq` compare the column of the saved position to the current position,\n  used to implement Python-style indentation sensitive blocks\n* `lineEq` ensures that the current position is still on the same line as the saved position,\n  used to implement composite tokens\n\nThe saved position is only available in the read-only state, which is why this is a scoping parser:\nafter the `withPosition(..)` block the saved position will be restored to its original value.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withPositionAfterLinebreak___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "withPositionAfterLinebreak"};
static const lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__2___closed__0 = (const lean_object*)&l_Lean_Parser_withPositionAfterLinebreak___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_withoutPosition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutPosition___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_withoutPosition___closed__0 = (const lean_object*)&l_Lean_Parser_withoutPosition___closed__0_value;
static const lean_string_object l_Lean_Parser_withoutPosition___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "withoutPosition"};
static const lean_object* l_Lean_Parser_withoutPosition___closed__1 = (const lean_object*)&l_Lean_Parser_withoutPosition___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_withoutPosition___closed__1_value),LEAN_SCALAR_PTR_LITERAL(49, 222, 221, 61, 47, 46, 252, 242)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 331, .m_capacity = 331, .m_length = 330, .m_data = "`withoutPosition(p)` runs `p` without the saved position, meaning that position-checking\nparsers like `colGt` will have no effect. This is usually used by bracketing constructs like\n`(...)` so that the user can locally override whitespace sensitivity.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden___lam__0(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_withForbidden___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withForbidden"};
static const lean_object* l_Lean_Parser_withForbidden___closed__0 = (const lean_object*)&l_Lean_Parser_withForbidden___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden(lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_withForbidden___closed__0_value),LEAN_SCALAR_PTR_LITERAL(96, 169, 160, 142, 191, 14, 119, 146)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 497, .m_capacity = 497, .m_length = 496, .m_data = "`withForbidden tk p` runs `p` with `tk` as a \"forbidden token\". This means that if the token\nappears anywhere in `p` (unless it is nested in `withoutForbidden`), parsing will immediately\nstop there, making `tk` effectively a lowest-precedence operator. This is used for parsers like\n`for x in arr do ...`: `arr` is parsed as `withForbidden \"do\" term` because otherwise `arr do ...`\nwould be treated as an application.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden___lam__0(lean_object*);
static const lean_closure_object l_Lean_Parser_withoutForbidden___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_withoutForbidden___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_withoutForbidden___closed__0 = (const lean_object*)&l_Lean_Parser_withoutForbidden___closed__0_value;
static const lean_string_object l_Lean_Parser_withoutForbidden___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "withoutForbidden"};
static const lean_object* l_Lean_Parser_withoutForbidden___closed__1 = (const lean_object*)&l_Lean_Parser_withoutForbidden___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value_aux_1),((lean_object*)&l_Lean_Parser_withoutForbidden___closed__1_value),LEAN_SCALAR_PTR_LITERAL(232, 23, 219, 174, 6, 42, 106, 219)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 302, .m_capacity = 302, .m_length = 301, .m_data = "`withoutForbidden(p)` runs `p` disabling the \"forbidden token\" (see `withForbidden`), if any.\nThis is usually used by bracketing constructs like `(...)` because there is no parsing ambiguity\ninside these nested constructs.\n\nThis parser has the same arity as `p` - it just forwards the results of `p`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_eoiFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected end of file"};
static const lean_object* l_Lean_Parser_eoiFn___closed__0 = (const lean_object*)&l_Lean_Parser_eoiFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_eoi___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_eoi___closed__0;
LEAN_EXPORT lean_object* l_Lean_Parser_eoi;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedPrattParsingTables___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedPrattParsingTables___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedPrattParsingTables___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedPrattParsingTables = (const lean_object*)&l_Lean_Parser_instInhabitedPrattParsingTables___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instInhabitedLeadingIdentBehavior_default;
LEAN_EXPORT uint8_t l_Lean_Parser_instInhabitedLeadingIdentBehavior;
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqLeadingIdentBehavior_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior = (const lean_object*)&l_Lean_Parser_instBEqLeadingIdentBehavior___closed__0_value;
static const lean_string_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Parser.LeadingIdentBehavior.default"};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__0_value)}};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1_value;
static const lean_string_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Parser.LeadingIdentBehavior.symbol"};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__2_value)}};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3_value;
static const lean_string_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Parser.LeadingIdentBehavior.both"};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4_value;
static const lean_ctor_object l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__4_value)}};
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5_value;
static lean_once_cell_t l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instReprLeadingIdentBehavior___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior___closed__0 = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instReprLeadingIdentBehavior = (const lean_object*)&l_Lean_Parser_instReprLeadingIdentBehavior___closed__0_value;
static lean_once_cell_t l_Lean_Parser_instInhabitedParserCategory_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedParserCategory_default___closed__0;
static lean_once_cell_t l_Lean_Parser_instInhabitedParserCategory_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedParserCategory_default___closed__1;
static lean_once_cell_t l_Lean_Parser_instInhabitedParserCategory_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedParserCategory_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserCategory_default;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserCategory;
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_indexed(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnRef;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFnExtension;
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_categoryParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_categoryParserFn___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_categoryParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_categoryParserFn___closed__0_value;
static const lean_closure_object l_Lean_Parser_categoryParserFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Pi_instInhabited___redArg___lam__0, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_categoryParserFn___closed__0_value)} };
static const lean_object* l_Lean_Parser_categoryParserFn___closed__1 = (const lean_object*)&l_Lean_Parser_categoryParserFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_categoryParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "category "};
static const lean_object* l_Lean_Parser_categoryParser___closed__0 = (const lean_object*)&l_Lean_Parser_categoryParser___closed__0_value;
static const lean_string_object l_Lean_Parser_categoryParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_Parser_categoryParser___closed__1 = (const lean_object*)&l_Lean_Parser_categoryParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_termParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_Parser_termParser___closed__0 = (const lean_object*)&l_Lean_Parser_termParser___closed__0_value;
static const lean_ctor_object l_Lean_Parser_termParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_termParser___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_Parser_termParser___closed__1 = (const lean_object*)&l_Lean_Parser_termParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_termParser(lean_object*);
static const lean_string_object l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "unexpected ':'"};
static const lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_checkNoImmediateColon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_checkNoImmediateColon___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_checkNoImmediateColon___closed__0 = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__0_value;
static const lean_ctor_object l_Lean_Parser_checkNoImmediateColon___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value),((lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__0_value)}};
static const lean_object* l_Lean_Parser_checkNoImmediateColon___closed__1 = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_checkNoImmediateColon = (const lean_object*)&l_Lean_Parser_checkNoImmediateColon___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "checkNoImmediateColon"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 36, 224, 107, 75, 228, 108, 120)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Fail if previous token is immediately followed by ':'. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpectedFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected(lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_pushNone___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_pushNone___lam__0___closed__0 = (const lean_object*)&l_Lean_Parser_pushNone___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Parser_pushNone___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Parser_optionalFn___lam__0___closed__1_value),((lean_object*)&l_Lean_Parser_pushNone___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Parser_pushNone___lam__0___closed__1 = (const lean_object*)&l_Lean_Parser_pushNone___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_pushNone___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_pushNone___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_pushNone___closed__0 = (const lean_object*)&l_Lean_Parser_pushNone___closed__0_value;
static const lean_ctor_object l_Lean_Parser_pushNone___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_errorAtSavedPos___closed__0_value),((lean_object*)&l_Lean_Parser_pushNone___closed__0_value)}};
static const lean_object* l_Lean_Parser_pushNone___closed__1 = (const lean_object*)&l_Lean_Parser_pushNone___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_pushNone = (const lean_object*)&l_Lean_Parser_pushNone___closed__1_value;
static const lean_string_object l_Lean_Parser_antiquotNestedExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "antiquotNestedExpr"};
static const lean_object* l_Lean_Parser_antiquotNestedExpr___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__0_value;
static const lean_ctor_object l_Lean_Parser_antiquotNestedExpr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__0_value),LEAN_SCALAR_PTR_LITERAL(4, 217, 111, 200, 191, 162, 168, 125)}};
static const lean_object* l_Lean_Parser_antiquotNestedExpr___closed__1 = (const lean_object*)&l_Lean_Parser_antiquotNestedExpr___closed__1_value;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__2;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__3;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__4;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__5;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__6;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__7;
static lean_once_cell_t l_Lean_Parser_antiquotNestedExpr___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotNestedExpr___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotNestedExpr;
static const lean_string_object l_Lean_Parser_antiquotExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l_Lean_Parser_antiquotExpr___closed__0 = (const lean_object*)&l_Lean_Parser_antiquotExpr___closed__0_value;
static lean_once_cell_t l_Lean_Parser_antiquotExpr___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr___closed__1;
static lean_once_cell_t l_Lean_Parser_antiquotExpr___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr___closed__2;
static lean_once_cell_t l_Lean_Parser_antiquotExpr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_antiquotExpr___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_antiquotExpr;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "no space before"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__0 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__0_value;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__1;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "%"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__2 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__2_value;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__3;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__4 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__4_value;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__5;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__6;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__7;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__8;
static lean_once_cell_t l_Lean_Parser_tokenAntiquotFn___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_tokenAntiquotFn___closed__9;
static const lean_string_object l_Lean_Parser_tokenAntiquotFn___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "token_antiquot"};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__10 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__10_value;
static const lean_ctor_object l_Lean_Parser_tokenAntiquotFn___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__10_value),LEAN_SCALAR_PTR_LITERAL(33, 159, 231, 44, 235, 156, 55, 135)}};
static const lean_object* l_Lean_Parser_tokenAntiquotFn___closed__11 = (const lean_object*)&l_Lean_Parser_tokenAntiquotFn___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Parser_tokenAntiquotFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_symbol(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeStringParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeStringParser___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeStringParser___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeStringParser = (const lean_object*)&l_Lean_Parser_instCoeStringParser___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__0;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__1;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__3;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__4;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "no space before spliced term"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__5 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__5_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__6;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "antiquot"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__7 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__7_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(209, 141, 12, 45, 178, 67, 53, 106)}};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__8 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__8_value;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "antiquotName"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__9 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__9_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot___closed__9_value),LEAN_SCALAR_PTR_LITERAL(67, 48, 35, 197, 163, 216, 250, 79)}};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__10 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__10_value;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "no space before ':"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__11 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__11_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__12;
static lean_once_cell_t l_Lean_Parser_mkAntiquot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquot___closed__13;
static const lean_string_object l_Lean_Parser_mkAntiquot___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "pseudo"};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__14 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__14_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquot___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquot___closed__14_value),LEAN_SCALAR_PTR_LITERAL(246, 255, 48, 87, 29, 98, 48, 237)}};
static const lean_object* l_Lean_Parser_mkAntiquot___closed__15 = (const lean_object*)&l_Lean_Parser_mkAntiquot___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "mkAntiquot"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 252, 121, 56, 15, 15, 211, 216)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 257, .m_capacity = 257, .m_length = 256, .m_data = "Define parser for `$e` (if `anonymous == true`) and `$e:name`.\n`kind` is embedded in the antiquotation's kind, and checked at syntax `match` unless `isPseudoKind` is true.\nAntiquotations can be escaped as in `$$e`, which produces the syntax tree for `$e`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "withAntiquot"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 88, 47, 17, 27, 77, 70, 127)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Optimized version of `mkAntiquot ... <|> p`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withoutInfo(lean_object*);
static const lean_string_object l_Lean_Parser_mkAntiquotSplice___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "antiquot_scope"};
static const lean_object* l_Lean_Parser_mkAntiquotSplice___closed__0 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice___closed__0_value;
static const lean_ctor_object l_Lean_Parser_mkAntiquotSplice___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_mkAntiquotSplice___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 75, 125, 66, 98, 92, 21, 108)}};
static const lean_object* l_Lean_Parser_mkAntiquotSplice___closed__1 = (const lean_object*)&l_Lean_Parser_mkAntiquotSplice___closed__1_value;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice___closed__2;
static lean_once_cell_t l_Lean_Parser_mkAntiquotSplice___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_mkAntiquotSplice___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mkAntiquotSplice"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 175, 234, 39, 152, 246, 57, 50)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Parse `$[p]suffix`, e.g. `$[p],*`. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "antiquot_suffix_splice"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 22, 214, 220, 194, 127, 23, 217)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "withAntiquotSuffixSplice"};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(213, 216, 213, 160, 91, 190, 161, 104)}};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "Parse `suffix` after an antiquotation, e.g. `$x,*`, and put both into a new node. "};
static const lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_sepByElemParser___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___closed__0_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l_Lean_Parser_sepByElemParser___closed__0 = (const lean_object*)&l_Lean_Parser_sepByElemParser___closed__0_value;
static const lean_string_object l_Lean_Parser_sepByElemParser___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l_Lean_Parser_sepByElemParser___closed__1 = (const lean_object*)&l_Lean_Parser_sepByElemParser___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoopStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_trailingLoop___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Trailing parsers failed with progress!"};
static const lean_object* l_Lean_Parser_trailingLoop___closed__0 = (const lean_object*)&l_Lean_Parser_trailingLoop___closed__0_value;
static const lean_ctor_object l_Lean_Parser_trailingLoop___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_trailingLoop___closed__0_value)}};
static const lean_object* l_Lean_Parser_trailingLoop___closed__1 = (const lean_object*)&l_Lean_Parser_trailingLoop___closed__1_value;
static const lean_string_object l_Lean_Parser_trailingLoop___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "Trailing parsers made no progress, backtracking"};
static const lean_object* l_Lean_Parser_trailingLoop___closed__2 = (const lean_object*)&l_Lean_Parser_trailingLoop___closed__2_value;
static const lean_ctor_object l_Lean_Parser_trailingLoop___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Parser_trailingLoop___closed__2_value)}};
static const lean_object* l_Lean_Parser_trailingLoop___closed__3 = (const lean_object*)&l_Lean_Parser_trailingLoop___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_fieldIdxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "field index"};
static const lean_object* l_Lean_Parser_fieldIdxFn___closed__0 = (const lean_object*)&l_Lean_Parser_fieldIdxFn___closed__0_value;
static const lean_string_object l_Lean_Parser_fieldIdxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fieldIdx"};
static const lean_object* l_Lean_Parser_fieldIdxFn___closed__1 = (const lean_object*)&l_Lean_Parser_fieldIdxFn___closed__1_value;
static const lean_ctor_object l_Lean_Parser_fieldIdxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_fieldIdxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(243, 141, 165, 29, 238, 211, 61, 163)}};
static const lean_object* l_Lean_Parser_fieldIdxFn___closed__2 = (const lean_object*)&l_Lean_Parser_fieldIdxFn___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdxFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__0;
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__1;
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__2;
static lean_once_cell_t l_Lean_Parser_fieldIdx___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_fieldIdx___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdx;
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_skip___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_skip___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_skip___closed__0 = (const lean_object*)&l_Lean_Parser_skip___closed__0_value;
static const lean_ctor_object l_Lean_Parser_skip___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_epsilonInfo___closed__2_value),((lean_object*)&l_Lean_Parser_skip___closed__0_value)}};
static const lean_object* l_Lean_Parser_skip___closed__1 = (const lean_object*)&l_Lean_Parser_skip___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_skip = (const lean_object*)&l_Lean_Parser_skip___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0(lean_object* v_s_x27_1_, lean_object* v_x_2_){
_start:
{
lean_inc_ref(v_s_x27_1_);
return v_s_x27_1_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn___lam__0___boxed(lean_object* v_s_x27_3_, lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Parser_dbgTraceStateFn___lam__0(v_s_x27_3_, v_x_4_);
lean_dec_ref(v_s_x27_3_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0(lean_object* v_x_7_, lean_object* v_x_8_){
_start:
{
if (lean_obj_tag(v_x_8_) == 0)
{
return v_x_7_;
}
else
{
lean_object* v_head_9_; lean_object* v_tail_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; uint8_t v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; 
v_head_9_ = lean_ctor_get(v_x_8_, 0);
lean_inc(v_head_9_);
v_tail_10_ = lean_ctor_get(v_x_8_, 1);
lean_inc(v_tail_10_);
lean_dec_ref_known(v_x_8_, 2);
v___x_11_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0));
v___x_12_ = lean_string_append(v_x_7_, v___x_11_);
v___x_13_ = lean_box(0);
v___x_14_ = 0;
v___x_15_ = l_Lean_Syntax_formatStx(v_head_9_, v___x_13_, v___x_14_);
v___x_16_ = l_Std_Format_defWidth;
v___x_17_ = lean_unsigned_to_nat(0u);
v___x_18_ = l_Std_Format_pretty(v___x_15_, v___x_16_, v___x_17_, v___x_17_);
v___x_19_ = lean_string_append(v___x_12_, v___x_18_);
lean_dec_ref(v___x_18_);
v_x_7_ = v___x_19_;
v_x_8_ = v_tail_10_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0(lean_object* v_x_24_){
_start:
{
if (lean_obj_tag(v_x_24_) == 0)
{
lean_object* v___x_25_; 
v___x_25_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__0));
return v___x_25_;
}
else
{
lean_object* v_tail_26_; 
v_tail_26_ = lean_ctor_get(v_x_24_, 1);
if (lean_obj_tag(v_tail_26_) == 0)
{
lean_object* v_head_27_; lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v_head_27_ = lean_ctor_get(v_x_24_, 0);
lean_inc(v_head_27_);
lean_dec_ref_known(v_x_24_, 2);
v___x_28_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_29_ = lean_box(0);
v___x_30_ = 0;
v___x_31_ = l_Lean_Syntax_formatStx(v_head_27_, v___x_29_, v___x_30_);
v___x_32_ = l_Std_Format_defWidth;
v___x_33_ = lean_unsigned_to_nat(0u);
v___x_34_ = l_Std_Format_pretty(v___x_31_, v___x_32_, v___x_33_, v___x_33_);
v___x_35_ = lean_string_append(v___x_28_, v___x_34_);
lean_dec_ref(v___x_34_);
v___x_36_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
return v___x_37_;
}
else
{
lean_object* v_head_38_; lean_object* v___x_39_; lean_object* v___x_40_; uint8_t v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; uint32_t v___x_48_; lean_object* v___x_49_; 
lean_inc(v_tail_26_);
v_head_38_ = lean_ctor_get(v_x_24_, 0);
lean_inc(v_head_38_);
lean_dec_ref_known(v_x_24_, 2);
v___x_39_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_40_ = lean_box(0);
v___x_41_ = 0;
v___x_42_ = l_Lean_Syntax_formatStx(v_head_38_, v___x_40_, v___x_41_);
v___x_43_ = l_Std_Format_defWidth;
v___x_44_ = lean_unsigned_to_nat(0u);
v___x_45_ = l_Std_Format_pretty(v___x_42_, v___x_43_, v___x_44_, v___x_44_);
v___x_46_ = lean_string_append(v___x_39_, v___x_45_);
lean_dec_ref(v___x_45_);
v___x_47_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0(v___x_46_, v_tail_26_);
v___x_48_ = 93;
v___x_49_ = lean_string_push(v___x_47_, v___x_48_);
return v___x_49_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceStateFn(lean_object* v_label_57_, lean_object* v_p_58_, lean_object* v_c_59_, lean_object* v_s_60_){
_start:
{
lean_object* v_stxStack_61_; lean_object* v_s_x27_62_; lean_object* v_stxStack_63_; lean_object* v_pos_64_; lean_object* v_errorMsg_65_; lean_object* v_sz_66_; lean_object* v___f_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___y_75_; 
v_stxStack_61_ = lean_ctor_get(v_s_60_, 0);
lean_inc_ref(v_stxStack_61_);
v_s_x27_62_ = lean_apply_2(v_p_58_, v_c_59_, v_s_60_);
v_stxStack_63_ = lean_ctor_get(v_s_x27_62_, 0);
lean_inc_ref(v_stxStack_63_);
v_pos_64_ = lean_ctor_get(v_s_x27_62_, 2);
lean_inc(v_pos_64_);
v_errorMsg_65_ = lean_ctor_get(v_s_x27_62_, 4);
lean_inc(v_errorMsg_65_);
v_sz_66_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_61_);
lean_dec_ref(v_stxStack_61_);
v___f_67_ = lean_alloc_closure((void*)(l_Lean_Parser_dbgTraceStateFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_67_, 0, v_s_x27_62_);
v___x_68_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__0));
v___x_69_ = lean_string_append(v_label_57_, v___x_68_);
v___x_70_ = l_Nat_reprFast(v_pos_64_);
v___x_71_ = lean_string_append(v___x_69_, v___x_70_);
lean_dec_ref(v___x_70_);
v___x_72_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__1));
v___x_73_ = lean_string_append(v___x_71_, v___x_72_);
if (lean_obj_tag(v_errorMsg_65_) == 0)
{
lean_object* v___x_87_; 
v___x_87_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__4));
v___y_75_ = v___x_87_;
goto v___jp_74_;
}
else
{
lean_object* v_val_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v_val_88_ = lean_ctor_get(v_errorMsg_65_, 0);
lean_inc(v_val_88_);
lean_dec_ref_known(v_errorMsg_65_, 1);
v___x_89_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__5));
v___x_90_ = l_Lean_Parser_Error_toString(v_val_88_);
v___x_91_ = l_addParenHeuristic(v___x_90_);
v___x_92_ = lean_string_append(v___x_89_, v___x_91_);
lean_dec_ref(v___x_91_);
v___x_93_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_94_ = lean_string_append(v___x_92_, v___x_93_);
v___y_75_ = v___x_94_;
goto v___jp_74_;
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v___x_76_ = lean_string_append(v___x_73_, v___y_75_);
lean_dec_ref(v___y_75_);
v___x_77_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__2));
v___x_78_ = lean_string_append(v___x_76_, v___x_77_);
v___x_79_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_63_);
v___x_80_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_63_, v_sz_66_, v___x_79_);
lean_dec(v___x_79_);
lean_dec(v_sz_66_);
lean_dec_ref(v_stxStack_63_);
v___x_81_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__3));
v___x_82_ = lean_array_to_list(v___x_80_);
v___x_83_ = l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0(v___x_82_);
v___x_84_ = lean_string_append(v___x_81_, v___x_83_);
lean_dec_ref(v___x_83_);
v___x_85_ = lean_string_append(v___x_78_, v___x_84_);
lean_dec_ref(v___x_84_);
v___x_86_ = lean_dbg_trace(v___x_85_, v___f_67_);
return v___x_86_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_dbgTraceState(lean_object* v_label_95_, lean_object* v_p_96_){
_start:
{
lean_object* v_info_97_; lean_object* v_fn_98_; lean_object* v___x_100_; uint8_t v_isShared_101_; uint8_t v_isSharedCheck_106_; 
v_info_97_ = lean_ctor_get(v_p_96_, 0);
v_fn_98_ = lean_ctor_get(v_p_96_, 1);
v_isSharedCheck_106_ = !lean_is_exclusive(v_p_96_);
if (v_isSharedCheck_106_ == 0)
{
v___x_100_ = v_p_96_;
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
else
{
lean_inc(v_fn_98_);
lean_inc(v_info_97_);
lean_dec(v_p_96_);
v___x_100_ = lean_box(0);
v_isShared_101_ = v_isSharedCheck_106_;
goto v_resetjp_99_;
}
v_resetjp_99_:
{
lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_102_ = lean_alloc_closure((void*)(l_Lean_Parser_dbgTraceStateFn), 4, 2);
lean_closure_set(v___x_102_, 0, v_label_95_);
lean_closure_set(v___x_102_, 1, v_fn_98_);
if (v_isShared_101_ == 0)
{
lean_ctor_set(v___x_100_, 1, v___x_102_);
v___x_104_ = v___x_100_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v_info_97_);
lean_ctor_set(v_reuseFailAlloc_105_, 1, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
return v___x_104_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0(lean_object* v___y_107_){
_start:
{
lean_inc(v___y_107_);
return v___y_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__0___boxed(lean_object* v___y_108_){
_start:
{
lean_object* v_res_109_; 
v_res_109_ = l_Lean_Parser_epsilonInfo___lam__0(v___y_108_);
lean_dec(v___y_108_);
return v_res_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1(lean_object* v___y_110_){
_start:
{
lean_inc_ref(v___y_110_);
return v___y_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_epsilonInfo___lam__1___boxed(lean_object* v___y_111_){
_start:
{
lean_object* v_res_112_; 
v_res_112_ = l_Lean_Parser_epsilonInfo___lam__1(v___y_111_);
lean_dec_ref(v___y_111_);
return v_res_112_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___redArg(lean_object* v_p_120_, lean_object* v_msg_121_, lean_object* v_s_122_){
_start:
{
lean_object* v_stxStack_123_; lean_object* v___x_124_; lean_object* v___x_125_; uint8_t v___x_126_; 
v_stxStack_123_ = lean_ctor_get(v_s_122_, 0);
v___x_124_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_123_);
v___x_125_ = lean_apply_1(v_p_120_, v___x_124_);
v___x_126_ = lean_unbox(v___x_125_);
if (v___x_126_ == 0)
{
uint8_t v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; 
v___x_127_ = 1;
v___x_128_ = lean_box(0);
v___x_129_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_122_, v_msg_121_, v___x_128_, v___x_127_);
return v___x_129_;
}
else
{
lean_dec_ref(v_msg_121_);
return v_s_122_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn(lean_object* v_p_130_, lean_object* v_msg_131_, lean_object* v_x_132_, lean_object* v_s_133_){
_start:
{
lean_object* v___x_134_; 
v___x_134_ = l_Lean_Parser_checkStackTopFn___redArg(v_p_130_, v_msg_131_, v_s_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTopFn___boxed(lean_object* v_p_135_, lean_object* v_msg_136_, lean_object* v_x_137_, lean_object* v_s_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_Lean_Parser_checkStackTopFn(v_p_135_, v_msg_136_, v_x_137_, v_s_138_);
lean_dec_ref(v_x_137_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkStackTop(lean_object* v_p_140_, lean_object* v_msg_141_){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; 
v___x_142_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_143_ = lean_alloc_closure((void*)(l_Lean_Parser_checkStackTopFn___boxed), 4, 2);
lean_closure_set(v___x_143_, 0, v_p_140_);
lean_closure_set(v___x_143_, 1, v_msg_141_);
v___x_144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_144_, 0, v___x_142_);
lean_ctor_set(v___x_144_, 1, v___x_143_);
return v___x_144_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(lean_object* v_x_145_, lean_object* v_x_146_){
_start:
{
if (lean_obj_tag(v_x_145_) == 0)
{
if (lean_obj_tag(v_x_146_) == 0)
{
uint8_t v___x_147_; 
v___x_147_ = 1;
return v___x_147_;
}
else
{
uint8_t v___x_148_; 
lean_dec_ref_known(v_x_146_, 1);
v___x_148_ = 0;
return v___x_148_;
}
}
else
{
if (lean_obj_tag(v_x_146_) == 0)
{
uint8_t v___x_149_; 
lean_dec_ref_known(v_x_145_, 1);
v___x_149_ = 0;
return v___x_149_;
}
else
{
lean_object* v_val_150_; lean_object* v_val_151_; uint8_t v___x_152_; 
v_val_150_ = lean_ctor_get(v_x_145_, 0);
lean_inc(v_val_150_);
lean_dec_ref_known(v_x_145_, 1);
v_val_151_ = lean_ctor_get(v_x_146_, 0);
lean_inc(v_val_151_);
lean_dec_ref_known(v_x_146_, 1);
v___x_152_ = l_Lean_Parser_instBEqError_beq(v_val_150_, v_val_151_);
return v___x_152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0___boxed(lean_object* v_x_153_, lean_object* v_x_154_){
_start:
{
uint8_t v_res_155_; lean_object* v_r_156_; 
v_res_155_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_x_153_, v_x_154_);
v_r_156_ = lean_box(v_res_155_);
return v_r_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenFn(lean_object* v_p_157_, lean_object* v_q_158_, lean_object* v_c_159_, lean_object* v_s_160_){
_start:
{
lean_object* v_s_161_; lean_object* v_errorMsg_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
lean_inc_ref(v_c_159_);
v_s_161_ = lean_apply_2(v_p_157_, v_c_159_, v_s_160_);
v_errorMsg_162_ = lean_ctor_get(v_s_161_, 4);
lean_inc(v_errorMsg_162_);
v___x_163_ = lean_box(0);
v___x_164_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_162_, v___x_163_);
if (v___x_164_ == 0)
{
lean_dec_ref(v_c_159_);
lean_dec_ref(v_q_158_);
return v_s_161_;
}
else
{
lean_object* v___x_165_; 
v___x_165_ = lean_apply_2(v_q_158_, v_c_159_, v_s_161_);
return v___x_165_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__0(lean_object* v_collectKinds_166_, lean_object* v_collectKinds_167_, lean_object* v___y_168_){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_apply_1(v_collectKinds_166_, v___y_168_);
v___x_170_ = lean_apply_1(v_collectKinds_167_, v___x_169_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo___lam__1(lean_object* v_collectTokens_171_, lean_object* v_collectTokens_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_apply_1(v_collectTokens_171_, v___y_173_);
v___x_175_ = lean_apply_1(v_collectTokens_172_, v___x_174_);
return v___x_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthenInfo(lean_object* v_p_176_, lean_object* v_q_177_){
_start:
{
lean_object* v_collectTokens_178_; lean_object* v_collectKinds_179_; lean_object* v_firstTokens_180_; lean_object* v_collectTokens_181_; lean_object* v_collectKinds_182_; lean_object* v_firstTokens_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_193_; 
v_collectTokens_178_ = lean_ctor_get(v_p_176_, 0);
lean_inc_ref(v_collectTokens_178_);
v_collectKinds_179_ = lean_ctor_get(v_p_176_, 1);
lean_inc_ref(v_collectKinds_179_);
v_firstTokens_180_ = lean_ctor_get(v_p_176_, 2);
lean_inc(v_firstTokens_180_);
lean_dec_ref(v_p_176_);
v_collectTokens_181_ = lean_ctor_get(v_q_177_, 0);
v_collectKinds_182_ = lean_ctor_get(v_q_177_, 1);
v_firstTokens_183_ = lean_ctor_get(v_q_177_, 2);
v_isSharedCheck_193_ = !lean_is_exclusive(v_q_177_);
if (v_isSharedCheck_193_ == 0)
{
v___x_185_ = v_q_177_;
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_firstTokens_183_);
lean_inc(v_collectKinds_182_);
lean_inc(v_collectTokens_181_);
lean_dec(v_q_177_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_193_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v___f_187_; lean_object* v___f_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___f_187_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_187_, 0, v_collectKinds_182_);
lean_closure_set(v___f_187_, 1, v_collectKinds_179_);
v___f_188_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_188_, 0, v_collectTokens_181_);
lean_closure_set(v___f_188_, 1, v_collectTokens_178_);
v___x_189_ = l_Lean_Parser_FirstTokens_seq(v_firstTokens_180_, v_firstTokens_183_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 2, v___x_189_);
lean_ctor_set(v___x_185_, 1, v___f_187_);
lean_ctor_set(v___x_185_, 0, v___f_188_);
v___x_191_ = v___x_185_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v___f_188_);
lean_ctor_set(v_reuseFailAlloc_192_, 1, v___f_187_);
lean_ctor_set(v_reuseFailAlloc_192_, 2, v___x_189_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParserFn___lam__0(lean_object* v_p1_194_, lean_object* v_p2_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_198_ = lean_box(0);
v___x_199_ = lean_apply_1(v_p2_195_, v___x_198_);
v___x_200_ = l_Lean_Parser_andthenFn(v_p1_194_, v___x_199_, v___y_196_, v___y_197_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_andthen(lean_object* v_p_203_, lean_object* v_q_204_){
_start:
{
lean_object* v_info_205_; lean_object* v_fn_206_; lean_object* v_info_207_; lean_object* v_fn_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_217_; 
v_info_205_ = lean_ctor_get(v_p_203_, 0);
lean_inc_ref(v_info_205_);
v_fn_206_ = lean_ctor_get(v_p_203_, 1);
lean_inc_ref(v_fn_206_);
lean_dec_ref(v_p_203_);
v_info_207_ = lean_ctor_get(v_q_204_, 0);
v_fn_208_ = lean_ctor_get(v_q_204_, 1);
v_isSharedCheck_217_ = !lean_is_exclusive(v_q_204_);
if (v_isSharedCheck_217_ == 0)
{
v___x_210_ = v_q_204_;
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_fn_208_);
lean_inc(v_info_207_);
lean_dec(v_q_204_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_217_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_215_; 
v___x_212_ = l_Lean_Parser_andthenInfo(v_info_205_, v_info_207_);
v___x_213_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_213_, 0, v_fn_206_);
lean_closure_set(v___x_213_, 1, v_fn_208_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 1, v___x_213_);
lean_ctor_set(v___x_210_, 0, v___x_212_);
v___x_215_ = v___x_210_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_212_);
lean_ctor_set(v_reuseFailAlloc_216_, 1, v___x_213_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instAndThenParser___lam__0(lean_object* v_a_218_, lean_object* v_b_219_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_220_ = lean_box(0);
v___x_221_ = lean_apply_1(v_b_219_, v___x_220_);
v___x_222_ = l_Lean_Parser_andthen(v_a_218_, v___x_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeFn___lam__0(lean_object* v_p_225_, lean_object* v_n_226_, lean_object* v_c_227_, lean_object* v_s_228_){
_start:
{
lean_object* v_iniSz_229_; lean_object* v_s_230_; lean_object* v___x_231_; 
v_iniSz_229_ = l_Lean_Parser_ParserState_stackSize(v_s_228_);
v_s_230_ = lean_apply_2(v_p_225_, v_c_227_, v_s_228_);
v___x_231_ = l_Lean_Parser_ParserState_mkNode(v_s_230_, v_n_226_, v_iniSz_229_);
lean_dec(v_iniSz_229_);
return v___x_231_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeFn(lean_object* v_n_233_, lean_object* v_p_234_, lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
lean_object* v_traces_237_; lean_object* v___x_238_; lean_object* v___x_239_; uint8_t v___x_240_; 
v_traces_237_ = lean_ctor_get(v_a_236_, 6);
v___x_238_ = lean_array_get_size(v_traces_237_);
v___x_239_ = lean_unsigned_to_nat(0u);
v___x_240_ = lean_nat_dec_eq(v___x_238_, v___x_239_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; uint8_t v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_241_ = ((lean_object*)(l_Lean_Parser_nodeFn___closed__0));
v___x_242_ = 1;
lean_inc(v_n_233_);
v___x_243_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_233_, v___x_242_);
v___x_244_ = lean_string_append(v___x_241_, v___x_243_);
lean_dec_ref(v___x_243_);
v___x_245_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn___lam__0), 4, 3);
lean_closure_set(v___x_245_, 0, v_p_234_);
lean_closure_set(v___x_245_, 1, v_n_233_);
lean_closure_set(v___x_245_, 2, v_a_235_);
v___x_246_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_236_, v___x_244_, v___x_245_);
return v___x_246_;
}
else
{
lean_object* v___x_247_; 
v___x_247_ = l_Lean_Parser_nodeFn___lam__0(v_p_234_, v_n_233_, v_a_235_, v_a_236_);
return v___x_247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeFn___lam__0(lean_object* v_p_248_, lean_object* v_n_249_, lean_object* v_c_250_, lean_object* v_s_251_){
_start:
{
lean_object* v_iniSz_252_; lean_object* v_s_253_; lean_object* v___x_254_; 
v_iniSz_252_ = l_Lean_Parser_ParserState_stackSize(v_s_251_);
v_s_253_ = lean_apply_2(v_p_248_, v_c_250_, v_s_251_);
v___x_254_ = l_Lean_Parser_ParserState_mkTrailingNode(v_s_253_, v_n_249_, v_iniSz_252_);
lean_dec(v_iniSz_252_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeFn(lean_object* v_n_256_, lean_object* v_p_257_, lean_object* v_a_258_, lean_object* v_a_259_){
_start:
{
lean_object* v_traces_260_; lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v_traces_260_ = lean_ctor_get(v_a_259_, 6);
v___x_261_ = lean_array_get_size(v_traces_260_);
v___x_262_ = lean_unsigned_to_nat(0u);
v___x_263_ = lean_nat_dec_eq(v___x_261_, v___x_262_);
if (v___x_263_ == 0)
{
lean_object* v___x_264_; uint8_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_264_ = ((lean_object*)(l_Lean_Parser_trailingNodeFn___closed__0));
v___x_265_ = 1;
lean_inc(v_n_256_);
v___x_266_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_n_256_, v___x_265_);
v___x_267_ = lean_string_append(v___x_264_, v___x_266_);
lean_dec_ref(v___x_266_);
v___x_268_ = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn___lam__0), 4, 3);
lean_closure_set(v___x_268_, 0, v_p_257_);
lean_closure_set(v___x_268_, 1, v_n_256_);
lean_closure_set(v___x_268_, 2, v_a_258_);
v___x_269_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_259_, v___x_267_, v___x_268_);
return v___x_269_;
}
else
{
lean_object* v___x_270_; 
v___x_270_ = l_Lean_Parser_trailingNodeFn___lam__0(v_p_257_, v_n_256_, v_a_258_, v_a_259_);
return v___x_270_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo___lam__0(lean_object* v_collectKinds_271_, lean_object* v_n_272_, lean_object* v_s_273_){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; 
v___x_274_ = lean_apply_1(v_collectKinds_271_, v_s_273_);
v___x_275_ = l_Lean_Parser_SyntaxNodeKindSet_insert(v___x_274_, v_n_272_);
return v___x_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeInfo(lean_object* v_n_276_, lean_object* v_p_277_){
_start:
{
lean_object* v_collectTokens_278_; lean_object* v_collectKinds_279_; lean_object* v_firstTokens_280_; lean_object* v___x_282_; uint8_t v_isShared_283_; uint8_t v_isSharedCheck_288_; 
v_collectTokens_278_ = lean_ctor_get(v_p_277_, 0);
v_collectKinds_279_ = lean_ctor_get(v_p_277_, 1);
v_firstTokens_280_ = lean_ctor_get(v_p_277_, 2);
v_isSharedCheck_288_ = !lean_is_exclusive(v_p_277_);
if (v_isSharedCheck_288_ == 0)
{
v___x_282_ = v_p_277_;
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
else
{
lean_inc(v_firstTokens_280_);
lean_inc(v_collectKinds_279_);
lean_inc(v_collectTokens_278_);
lean_dec(v_p_277_);
v___x_282_ = lean_box(0);
v_isShared_283_ = v_isSharedCheck_288_;
goto v_resetjp_281_;
}
v_resetjp_281_:
{
lean_object* v___f_284_; lean_object* v___x_286_; 
v___f_284_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeInfo___lam__0), 3, 2);
lean_closure_set(v___f_284_, 0, v_collectKinds_279_);
lean_closure_set(v___f_284_, 1, v_n_276_);
if (v_isShared_283_ == 0)
{
lean_ctor_set(v___x_282_, 1, v___f_284_);
v___x_286_ = v___x_282_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_collectTokens_278_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v___f_284_);
lean_ctor_set(v_reuseFailAlloc_287_, 2, v_firstTokens_280_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_node(lean_object* v_n_289_, lean_object* v_p_290_){
_start:
{
lean_object* v_info_291_; lean_object* v_fn_292_; lean_object* v___x_294_; uint8_t v_isShared_295_; uint8_t v_isSharedCheck_301_; 
v_info_291_ = lean_ctor_get(v_p_290_, 0);
v_fn_292_ = lean_ctor_get(v_p_290_, 1);
v_isSharedCheck_301_ = !lean_is_exclusive(v_p_290_);
if (v_isSharedCheck_301_ == 0)
{
v___x_294_ = v_p_290_;
v_isShared_295_ = v_isSharedCheck_301_;
goto v_resetjp_293_;
}
else
{
lean_inc(v_fn_292_);
lean_inc(v_info_291_);
lean_dec(v_p_290_);
v___x_294_ = lean_box(0);
v_isShared_295_ = v_isSharedCheck_301_;
goto v_resetjp_293_;
}
v_resetjp_293_:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
lean_inc(v_n_289_);
v___x_296_ = l_Lean_Parser_nodeInfo(v_n_289_, v_info_291_);
v___x_297_ = lean_alloc_closure((void*)(l_Lean_Parser_nodeFn), 4, 2);
lean_closure_set(v___x_297_, 0, v_n_289_);
lean_closure_set(v___x_297_, 1, v_fn_292_);
if (v_isShared_295_ == 0)
{
lean_ctor_set(v___x_294_, 1, v___x_297_);
lean_ctor_set(v___x_294_, 0, v___x_296_);
v___x_299_ = v___x_294_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___redArg(lean_object* v_msg_302_, lean_object* v_s_303_){
_start:
{
lean_object* v___x_304_; uint8_t v___x_305_; lean_object* v___x_306_; 
v___x_304_ = lean_box(0);
v___x_305_ = 1;
v___x_306_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_303_, v_msg_302_, v___x_304_, v___x_305_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn(lean_object* v_msg_307_, lean_object* v_x_308_, lean_object* v_s_309_){
_start:
{
lean_object* v___x_310_; 
v___x_310_ = l_Lean_Parser_errorFn___redArg(v_msg_307_, v_s_309_);
return v___x_310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorFn___boxed(lean_object* v_msg_311_, lean_object* v_x_312_, lean_object* v_s_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l_Lean_Parser_errorFn(v_msg_311_, v_x_312_, v_s_313_);
lean_dec_ref(v_x_312_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_error(lean_object* v_msg_315_){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_317_ = lean_alloc_closure((void*)(l_Lean_Parser_errorFn___boxed), 3, 1);
lean_closure_set(v___x_317_, 0, v_msg_315_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v___x_316_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
return v___x_318_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn(lean_object* v_msg_319_, uint8_t v_delta_320_, lean_object* v_c_321_, lean_object* v_s_322_){
_start:
{
lean_object* v_toCacheableParserContext_323_; lean_object* v_savedPos_x3f_324_; 
v_toCacheableParserContext_323_ = lean_ctor_get(v_c_321_, 2);
v_savedPos_x3f_324_ = lean_ctor_get(v_toCacheableParserContext_323_, 2);
lean_inc(v_savedPos_x3f_324_);
if (lean_obj_tag(v_savedPos_x3f_324_) == 0)
{
lean_dec_ref(v_c_321_);
lean_dec_ref(v_msg_319_);
return v_s_322_;
}
else
{
if (v_delta_320_ == 0)
{
lean_object* v_val_325_; lean_object* v___x_326_; 
lean_dec_ref(v_c_321_);
v_val_325_ = lean_ctor_get(v_savedPos_x3f_324_, 0);
lean_inc(v_val_325_);
lean_dec_ref_known(v_savedPos_x3f_324_, 1);
v___x_326_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_322_, v_msg_319_, v_val_325_);
return v___x_326_;
}
else
{
lean_object* v_toInputContext_327_; lean_object* v_val_328_; lean_object* v_inputString_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v_toInputContext_327_ = lean_ctor_get(v_c_321_, 0);
lean_inc_ref(v_toInputContext_327_);
lean_dec_ref(v_c_321_);
v_val_328_ = lean_ctor_get(v_savedPos_x3f_324_, 0);
lean_inc(v_val_328_);
lean_dec_ref_known(v_savedPos_x3f_324_, 1);
v_inputString_329_ = lean_ctor_get(v_toInputContext_327_, 0);
lean_inc_ref(v_inputString_329_);
lean_dec_ref(v_toInputContext_327_);
v___x_330_ = lean_string_utf8_next(v_inputString_329_, v_val_328_);
lean_dec(v_val_328_);
lean_dec_ref(v_inputString_329_);
v___x_331_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_322_, v_msg_319_, v___x_330_);
return v___x_331_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPosFn___boxed(lean_object* v_msg_332_, lean_object* v_delta_333_, lean_object* v_c_334_, lean_object* v_s_335_){
_start:
{
uint8_t v_delta_boxed_336_; lean_object* v_res_337_; 
v_delta_boxed_336_ = lean_unbox(v_delta_333_);
v_res_337_ = l_Lean_Parser_errorAtSavedPosFn(v_msg_332_, v_delta_boxed_336_, v_c_334_, v_s_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos(lean_object* v_msg_342_, uint8_t v_delta_343_){
_start:
{
lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_344_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_345_ = lean_box(v_delta_343_);
v___x_346_ = lean_alloc_closure((void*)(l_Lean_Parser_errorAtSavedPosFn___boxed), 4, 2);
lean_closure_set(v___x_346_, 0, v_msg_342_);
lean_closure_set(v___x_346_, 1, v___x_345_);
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_344_);
lean_ctor_set(v___x_347_, 1, v___x_346_);
return v___x_347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_errorAtSavedPos___boxed(lean_object* v_msg_348_, lean_object* v_delta_349_){
_start:
{
uint8_t v_delta_boxed_350_; lean_object* v_res_351_; 
v_delta_boxed_350_ = lean_unbox(v_delta_349_);
v_res_351_ = l_Lean_Parser_errorAtSavedPos(v_msg_348_, v_delta_boxed_350_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1(){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_361_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__3));
v___x_362_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___closed__4));
v___x_363_ = l_Lean_addBuiltinDocString(v___x_361_, v___x_362_);
return v___x_363_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1___boxed(lean_object* v_a_364_){
_start:
{
lean_object* v_res_365_; 
v_res_365_ = l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1();
return v_res_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn(lean_object* v_prec_367_, lean_object* v_c_368_, lean_object* v_s_369_){
_start:
{
lean_object* v_toCacheableParserContext_370_; lean_object* v_prec_371_; uint8_t v___x_372_; 
v_toCacheableParserContext_370_ = lean_ctor_get(v_c_368_, 2);
v_prec_371_ = lean_ctor_get(v_toCacheableParserContext_370_, 0);
v___x_372_ = lean_nat_dec_le(v_prec_371_, v_prec_367_);
if (v___x_372_ == 0)
{
lean_object* v___x_373_; lean_object* v___x_374_; uint8_t v___x_375_; lean_object* v___x_376_; 
v___x_373_ = ((lean_object*)(l_Lean_Parser_checkPrecFn___closed__0));
v___x_374_ = lean_box(0);
v___x_375_ = 1;
v___x_376_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_369_, v___x_373_, v___x_374_, v___x_375_);
return v___x_376_;
}
else
{
return v_s_369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrecFn___boxed(lean_object* v_prec_377_, lean_object* v_c_378_, lean_object* v_s_379_){
_start:
{
lean_object* v_res_380_; 
v_res_380_ = l_Lean_Parser_checkPrecFn(v_prec_377_, v_c_378_, v_s_379_);
lean_dec_ref(v_c_378_);
lean_dec(v_prec_377_);
return v_res_380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkPrec(lean_object* v_prec_381_){
_start:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; 
v___x_382_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_383_ = lean_alloc_closure((void*)(l_Lean_Parser_checkPrecFn___boxed), 3, 1);
lean_closure_set(v___x_383_, 0, v_prec_381_);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
return v___x_384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg(lean_object* v_prec_385_, lean_object* v_s_386_){
_start:
{
lean_object* v_lhsPrec_387_; uint8_t v___x_388_; 
v_lhsPrec_387_ = lean_ctor_get(v_s_386_, 1);
v___x_388_ = lean_nat_dec_le(v_prec_385_, v_lhsPrec_387_);
if (v___x_388_ == 0)
{
lean_object* v___x_389_; lean_object* v___x_390_; uint8_t v___x_391_; lean_object* v___x_392_; 
v___x_389_ = ((lean_object*)(l_Lean_Parser_checkPrecFn___closed__0));
v___x_390_ = lean_box(0);
v___x_391_ = 1;
v___x_392_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_386_, v___x_389_, v___x_390_, v___x_391_);
return v___x_392_;
}
else
{
return v_s_386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___redArg___boxed(lean_object* v_prec_393_, lean_object* v_s_394_){
_start:
{
lean_object* v_res_395_; 
v_res_395_ = l_Lean_Parser_checkLhsPrecFn___redArg(v_prec_393_, v_s_394_);
lean_dec(v_prec_393_);
return v_res_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn(lean_object* v_prec_396_, lean_object* v_x_397_, lean_object* v_s_398_){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = l_Lean_Parser_checkLhsPrecFn___redArg(v_prec_396_, v_s_398_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrecFn___boxed(lean_object* v_prec_400_, lean_object* v_x_401_, lean_object* v_s_402_){
_start:
{
lean_object* v_res_403_; 
v_res_403_ = l_Lean_Parser_checkLhsPrecFn(v_prec_400_, v_x_401_, v_s_402_);
lean_dec_ref(v_x_401_);
lean_dec(v_prec_400_);
return v_res_403_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLhsPrec(lean_object* v_prec_404_){
_start:
{
lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_405_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_406_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLhsPrecFn___boxed), 3, 1);
lean_closure_set(v___x_406_, 0, v_prec_404_);
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_405_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___redArg(lean_object* v_prec_408_, lean_object* v_s_409_){
_start:
{
lean_object* v_stxStack_410_; lean_object* v_pos_411_; lean_object* v_cache_412_; lean_object* v_errorMsg_413_; lean_object* v_recoveredErrors_414_; lean_object* v_traces_415_; lean_object* v___x_416_; uint8_t v___x_417_; 
v_stxStack_410_ = lean_ctor_get(v_s_409_, 0);
v_pos_411_ = lean_ctor_get(v_s_409_, 2);
v_cache_412_ = lean_ctor_get(v_s_409_, 3);
v_errorMsg_413_ = lean_ctor_get(v_s_409_, 4);
v_recoveredErrors_414_ = lean_ctor_get(v_s_409_, 5);
v_traces_415_ = lean_ctor_get(v_s_409_, 6);
v___x_416_ = lean_box(0);
lean_inc(v_errorMsg_413_);
v___x_417_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_413_, v___x_416_);
if (v___x_417_ == 0)
{
lean_dec(v_prec_408_);
return v_s_409_;
}
else
{
lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_inc_ref(v_traces_415_);
lean_inc_ref(v_recoveredErrors_414_);
lean_inc(v_errorMsg_413_);
lean_inc_ref(v_cache_412_);
lean_inc(v_pos_411_);
lean_inc_ref(v_stxStack_410_);
v_isSharedCheck_424_ = !lean_is_exclusive(v_s_409_);
if (v_isSharedCheck_424_ == 0)
{
lean_object* v_unused_425_; lean_object* v_unused_426_; lean_object* v_unused_427_; lean_object* v_unused_428_; lean_object* v_unused_429_; lean_object* v_unused_430_; lean_object* v_unused_431_; 
v_unused_425_ = lean_ctor_get(v_s_409_, 6);
lean_dec(v_unused_425_);
v_unused_426_ = lean_ctor_get(v_s_409_, 5);
lean_dec(v_unused_426_);
v_unused_427_ = lean_ctor_get(v_s_409_, 4);
lean_dec(v_unused_427_);
v_unused_428_ = lean_ctor_get(v_s_409_, 3);
lean_dec(v_unused_428_);
v_unused_429_ = lean_ctor_get(v_s_409_, 2);
lean_dec(v_unused_429_);
v_unused_430_ = lean_ctor_get(v_s_409_, 1);
lean_dec(v_unused_430_);
v_unused_431_ = lean_ctor_get(v_s_409_, 0);
lean_dec(v_unused_431_);
v___x_419_ = v_s_409_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_dec(v_s_409_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 1, v_prec_408_);
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_stxStack_410_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_prec_408_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_pos_411_);
lean_ctor_set(v_reuseFailAlloc_423_, 3, v_cache_412_);
lean_ctor_set(v_reuseFailAlloc_423_, 4, v_errorMsg_413_);
lean_ctor_set(v_reuseFailAlloc_423_, 5, v_recoveredErrors_414_);
lean_ctor_set(v_reuseFailAlloc_423_, 6, v_traces_415_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn(lean_object* v_prec_432_, lean_object* v_x_433_, lean_object* v_s_434_){
_start:
{
lean_object* v___x_435_; 
v___x_435_ = l_Lean_Parser_setLhsPrecFn___redArg(v_prec_432_, v_s_434_);
return v___x_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrecFn___boxed(lean_object* v_prec_436_, lean_object* v_x_437_, lean_object* v_s_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Parser_setLhsPrecFn(v_prec_436_, v_x_437_, v_s_438_);
lean_dec_ref(v_x_437_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setLhsPrec(lean_object* v_prec_440_){
_start:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_442_ = lean_alloc_closure((void*)(l_Lean_Parser_setLhsPrecFn___boxed), 3, 1);
lean_closure_set(v___x_442_, 0, v_prec_440_);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_441_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
return v___x_443_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00__private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth_spec__0(lean_object* v_a_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = lean_nat_to_int(v_a_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0(lean_object* v_i_446_, lean_object* v_c_447_){
_start:
{
lean_object* v_prec_448_; lean_object* v_quotDepth_449_; uint8_t v_suppressInsideQuot_450_; lean_object* v_savedPos_x3f_451_; lean_object* v_forbiddenTk_x3f_452_; lean_object* v___x_454_; uint8_t v_isShared_455_; uint8_t v_isSharedCheck_462_; 
v_prec_448_ = lean_ctor_get(v_c_447_, 0);
v_quotDepth_449_ = lean_ctor_get(v_c_447_, 1);
v_suppressInsideQuot_450_ = lean_ctor_get_uint8(v_c_447_, sizeof(void*)*4);
v_savedPos_x3f_451_ = lean_ctor_get(v_c_447_, 2);
v_forbiddenTk_x3f_452_ = lean_ctor_get(v_c_447_, 3);
v_isSharedCheck_462_ = !lean_is_exclusive(v_c_447_);
if (v_isSharedCheck_462_ == 0)
{
v___x_454_ = v_c_447_;
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
else
{
lean_inc(v_forbiddenTk_x3f_452_);
lean_inc(v_savedPos_x3f_451_);
lean_inc(v_quotDepth_449_);
lean_inc(v_prec_448_);
lean_dec(v_c_447_);
v___x_454_ = lean_box(0);
v_isShared_455_ = v_isSharedCheck_462_;
goto v_resetjp_453_;
}
v_resetjp_453_:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_456_ = lean_nat_to_int(v_quotDepth_449_);
v___x_457_ = lean_int_add(v___x_456_, v_i_446_);
lean_dec(v___x_456_);
v___x_458_ = l_Int_toNat(v___x_457_);
lean_dec(v___x_457_);
if (v_isShared_455_ == 0)
{
lean_ctor_set(v___x_454_, 1, v___x_458_);
v___x_460_ = v___x_454_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_461_; 
v_reuseFailAlloc_461_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_461_, 0, v_prec_448_);
lean_ctor_set(v_reuseFailAlloc_461_, 1, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_461_, 2, v_savedPos_x3f_451_);
lean_ctor_set(v_reuseFailAlloc_461_, 3, v_forbiddenTk_x3f_452_);
lean_ctor_set_uint8(v_reuseFailAlloc_461_, sizeof(void*)*4, v_suppressInsideQuot_450_);
v___x_460_ = v_reuseFailAlloc_461_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0___boxed(lean_object* v_i_463_, lean_object* v_c_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0(v_i_463_, v_c_464_);
lean_dec(v_i_463_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(lean_object* v_i_466_, lean_object* v_p_467_){
_start:
{
lean_object* v___f_468_; lean_object* v___x_469_; 
v___f_468_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth___lam__0___boxed), 2, 1);
lean_closure_set(v___f_468_, 0, v_i_466_);
v___x_469_ = l_Lean_Parser_adaptCacheableContext(v___f_468_, v_p_467_);
return v___x_469_;
}
}
static lean_object* _init_l_Lean_Parser_incQuotDepth___closed__0(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_470_ = lean_unsigned_to_nat(1u);
v___x_471_ = lean_nat_to_int(v___x_470_);
return v___x_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_incQuotDepth(lean_object* v_p_472_){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___x_474_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(v___x_473_, v_p_472_);
return v___x_474_;
}
}
static lean_object* _init_l_Lean_Parser_decQuotDepth___closed__0(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___x_476_ = lean_int_neg(v___x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decQuotDepth(lean_object* v_p_477_){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = lean_obj_once(&l_Lean_Parser_decQuotDepth___closed__0, &l_Lean_Parser_decQuotDepth___closed__0_once, _init_l_Lean_Parser_decQuotDepth___closed__0);
v___x_479_ = l___private_Lean_Parser_Basic_0__Lean_Parser_addQuotDepth(v___x_478_, v_p_477_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot___lam__0(lean_object* v_c_480_){
_start:
{
lean_object* v_prec_481_; lean_object* v_quotDepth_482_; lean_object* v_savedPos_x3f_483_; lean_object* v_forbiddenTk_x3f_484_; lean_object* v___x_485_; uint8_t v___x_486_; 
v_prec_481_ = lean_ctor_get(v_c_480_, 0);
v_quotDepth_482_ = lean_ctor_get(v_c_480_, 1);
v_savedPos_x3f_483_ = lean_ctor_get(v_c_480_, 2);
v_forbiddenTk_x3f_484_ = lean_ctor_get(v_c_480_, 3);
v___x_485_ = lean_unsigned_to_nat(0u);
v___x_486_ = lean_nat_dec_eq(v_quotDepth_482_, v___x_485_);
if (v___x_486_ == 0)
{
return v_c_480_;
}
else
{
lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_493_; 
lean_inc(v_forbiddenTk_x3f_484_);
lean_inc(v_savedPos_x3f_483_);
lean_inc(v_quotDepth_482_);
lean_inc(v_prec_481_);
v_isSharedCheck_493_ = !lean_is_exclusive(v_c_480_);
if (v_isSharedCheck_493_ == 0)
{
lean_object* v_unused_494_; lean_object* v_unused_495_; lean_object* v_unused_496_; lean_object* v_unused_497_; 
v_unused_494_ = lean_ctor_get(v_c_480_, 3);
lean_dec(v_unused_494_);
v_unused_495_ = lean_ctor_get(v_c_480_, 2);
lean_dec(v_unused_495_);
v_unused_496_ = lean_ctor_get(v_c_480_, 1);
lean_dec(v_unused_496_);
v_unused_497_ = lean_ctor_get(v_c_480_, 0);
lean_dec(v_unused_497_);
v___x_488_ = v_c_480_;
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
else
{
lean_dec(v_c_480_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_493_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_491_; 
if (v_isShared_489_ == 0)
{
v___x_491_ = v___x_488_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_492_; 
v_reuseFailAlloc_492_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_492_, 0, v_prec_481_);
lean_ctor_set(v_reuseFailAlloc_492_, 1, v_quotDepth_482_);
lean_ctor_set(v_reuseFailAlloc_492_, 2, v_savedPos_x3f_483_);
lean_ctor_set(v_reuseFailAlloc_492_, 3, v_forbiddenTk_x3f_484_);
v___x_491_ = v_reuseFailAlloc_492_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_ctor_set_uint8(v___x_491_, sizeof(void*)*4, v___x_486_);
return v___x_491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_suppressInsideQuot(lean_object* v_a_499_){
_start:
{
lean_object* v___f_500_; lean_object* v___x_501_; 
v___f_500_ = ((lean_object*)(l_Lean_Parser_suppressInsideQuot___closed__0));
v___x_501_ = l_Lean_Parser_adaptCacheableContext(v___f_500_, v_a_499_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingNode(lean_object* v_n_502_, lean_object* v_prec_503_, lean_object* v_p_504_){
_start:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; 
lean_inc(v_prec_503_);
v___x_505_ = l_Lean_Parser_checkPrec(v_prec_503_);
v___x_506_ = l_Lean_Parser_node(v_n_502_, v_p_504_);
v___x_507_ = l_Lean_Parser_setLhsPrec(v_prec_503_);
v___x_508_ = l_Lean_Parser_andthen(v___x_506_, v___x_507_);
v___x_509_ = l_Lean_Parser_andthen(v___x_505_, v___x_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNodeAux(lean_object* v_n_510_, lean_object* v_p_511_){
_start:
{
lean_object* v_info_512_; lean_object* v_fn_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_522_; 
v_info_512_ = lean_ctor_get(v_p_511_, 0);
v_fn_513_ = lean_ctor_get(v_p_511_, 1);
v_isSharedCheck_522_ = !lean_is_exclusive(v_p_511_);
if (v_isSharedCheck_522_ == 0)
{
v___x_515_ = v_p_511_;
v_isShared_516_ = v_isSharedCheck_522_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_fn_513_);
lean_inc(v_info_512_);
lean_dec(v_p_511_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_522_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_520_; 
lean_inc(v_n_510_);
v___x_517_ = l_Lean_Parser_nodeInfo(v_n_510_, v_info_512_);
v___x_518_ = lean_alloc_closure((void*)(l_Lean_Parser_trailingNodeFn), 4, 2);
lean_closure_set(v___x_518_, 0, v_n_510_);
lean_closure_set(v___x_518_, 1, v_fn_513_);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 1, v___x_518_);
lean_ctor_set(v___x_515_, 0, v___x_517_);
v___x_520_ = v___x_515_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_517_);
lean_ctor_set(v_reuseFailAlloc_521_, 1, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingNode(lean_object* v_n_523_, lean_object* v_prec_524_, lean_object* v_lhsPrec_525_, lean_object* v_p_526_){
_start:
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; 
lean_inc(v_prec_524_);
v___x_527_ = l_Lean_Parser_checkPrec(v_prec_524_);
v___x_528_ = l_Lean_Parser_checkLhsPrec(v_lhsPrec_525_);
v___x_529_ = l_Lean_Parser_trailingNodeAux(v_n_523_, v_p_526_);
v___x_530_ = l_Lean_Parser_setLhsPrec(v_prec_524_);
v___x_531_ = l_Lean_Parser_andthen(v___x_529_, v___x_530_);
v___x_532_ = l_Lean_Parser_andthen(v___x_528_, v___x_531_);
v___x_533_ = l_Lean_Parser_andthen(v___x_527_, v___x_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors(lean_object* v_s_534_, lean_object* v_error1_535_, lean_object* v_iniPos_536_, uint8_t v_mergeErrors_537_){
_start:
{
lean_object* v_stxStack_538_; lean_object* v_lhsPrec_539_; lean_object* v_pos_540_; lean_object* v_cache_541_; lean_object* v_errorMsg_542_; lean_object* v_recoveredErrors_543_; lean_object* v_traces_544_; lean_object* v___y_546_; 
v_stxStack_538_ = lean_ctor_get(v_s_534_, 0);
v_lhsPrec_539_ = lean_ctor_get(v_s_534_, 1);
v_pos_540_ = lean_ctor_get(v_s_534_, 2);
v_cache_541_ = lean_ctor_get(v_s_534_, 3);
v_errorMsg_542_ = lean_ctor_get(v_s_534_, 4);
v_recoveredErrors_543_ = lean_ctor_get(v_s_534_, 5);
v_traces_544_ = lean_ctor_get(v_s_534_, 6);
if (lean_obj_tag(v_errorMsg_542_) == 1)
{
lean_object* v_val_549_; uint8_t v___x_550_; 
v_val_549_ = lean_ctor_get(v_errorMsg_542_, 0);
v___x_550_ = lean_nat_dec_eq(v_pos_540_, v_iniPos_536_);
if (v___x_550_ == 0)
{
lean_dec_ref(v_error1_535_);
return v_s_534_;
}
else
{
lean_inc(v_val_549_);
lean_inc_ref(v_traces_544_);
lean_inc_ref(v_recoveredErrors_543_);
lean_inc_ref(v_cache_541_);
lean_inc(v_pos_540_);
lean_inc(v_lhsPrec_539_);
lean_inc_ref(v_stxStack_538_);
lean_dec_ref(v_s_534_);
if (v_mergeErrors_537_ == 0)
{
lean_dec_ref(v_error1_535_);
v___y_546_ = v_val_549_;
goto v___jp_545_;
}
else
{
lean_object* v___x_551_; 
v___x_551_ = l_Lean_Parser_Error_merge(v_error1_535_, v_val_549_);
v___y_546_ = v___x_551_;
goto v___jp_545_;
}
}
}
else
{
lean_dec_ref(v_error1_535_);
return v_s_534_;
}
v___jp_545_:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_547_, 0, v___y_546_);
v___x_548_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_548_, 0, v_stxStack_538_);
lean_ctor_set(v___x_548_, 1, v_lhsPrec_539_);
lean_ctor_set(v___x_548_, 2, v_pos_540_);
lean_ctor_set(v___x_548_, 3, v_cache_541_);
lean_ctor_set(v___x_548_, 4, v___x_547_);
lean_ctor_set(v___x_548_, 5, v_recoveredErrors_543_);
lean_ctor_set(v___x_548_, 6, v_traces_544_);
return v___x_548_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mergeOrElseErrors___boxed(lean_object* v_s_552_, lean_object* v_error1_553_, lean_object* v_iniPos_554_, lean_object* v_mergeErrors_555_){
_start:
{
uint8_t v_mergeErrors_boxed_556_; lean_object* v_res_557_; 
v_mergeErrors_boxed_556_ = lean_unbox(v_mergeErrors_555_);
v_res_557_ = l_Lean_Parser_mergeOrElseErrors(v_s_552_, v_error1_553_, v_iniPos_554_, v_mergeErrors_boxed_556_);
lean_dec(v_iniPos_554_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx(uint8_t v_x_558_){
_start:
{
switch(v_x_558_)
{
case 0:
{
lean_object* v___x_559_; 
v___x_559_ = lean_unsigned_to_nat(0u);
return v___x_559_;
}
case 1:
{
lean_object* v___x_560_; 
v___x_560_ = lean_unsigned_to_nat(1u);
return v___x_560_;
}
default: 
{
lean_object* v___x_561_; 
v___x_561_ = lean_unsigned_to_nat(2u);
return v___x_561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx___boxed(lean_object* v_x_562_){
_start:
{
uint8_t v_x_boxed_563_; lean_object* v_res_564_; 
v_x_boxed_563_ = lean_unbox(v_x_562_);
v_res_564_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx(v_x_boxed_563_);
return v_res_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_toCtorIdx(uint8_t v_x_565_){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx(v_x_565_);
return v___x_566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_toCtorIdx___boxed(lean_object* v_x_567_){
_start:
{
uint8_t v_x_4__boxed_568_; lean_object* v_res_569_; 
v_x_4__boxed_568_ = lean_unbox(v_x_567_);
v_res_569_ = l_Lean_Parser_OrElseOnAntiquotBehavior_toCtorIdx(v_x_4__boxed_568_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg(lean_object* v_k_570_){
_start:
{
lean_inc(v_k_570_);
return v_k_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg___boxed(lean_object* v_k_571_){
_start:
{
lean_object* v_res_572_; 
v_res_572_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___redArg(v_k_571_);
lean_dec(v_k_571_);
return v_res_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim(lean_object* v_motive_573_, lean_object* v_ctorIdx_574_, uint8_t v_t_575_, lean_object* v_h_576_, lean_object* v_k_577_){
_start:
{
lean_inc(v_k_577_);
return v_k_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim___boxed(lean_object* v_motive_578_, lean_object* v_ctorIdx_579_, lean_object* v_t_580_, lean_object* v_h_581_, lean_object* v_k_582_){
_start:
{
uint8_t v_t_boxed_583_; lean_object* v_res_584_; 
v_t_boxed_583_ = lean_unbox(v_t_580_);
v_res_584_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorElim(v_motive_578_, v_ctorIdx_579_, v_t_boxed_583_, v_h_581_, v_k_582_);
lean_dec(v_k_582_);
lean_dec(v_ctorIdx_579_);
return v_res_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg(lean_object* v_acceptLhs_585_){
_start:
{
lean_inc(v_acceptLhs_585_);
return v_acceptLhs_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg___boxed(lean_object* v_acceptLhs_586_){
_start:
{
lean_object* v_res_587_; 
v_res_587_ = l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___redArg(v_acceptLhs_586_);
lean_dec(v_acceptLhs_586_);
return v_res_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim(lean_object* v_motive_588_, uint8_t v_t_589_, lean_object* v_h_590_, lean_object* v_acceptLhs_591_){
_start:
{
lean_inc(v_acceptLhs_591_);
return v_acceptLhs_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim___boxed(lean_object* v_motive_592_, lean_object* v_t_593_, lean_object* v_h_594_, lean_object* v_acceptLhs_595_){
_start:
{
uint8_t v_t_boxed_596_; lean_object* v_res_597_; 
v_t_boxed_596_ = lean_unbox(v_t_593_);
v_res_597_ = l_Lean_Parser_OrElseOnAntiquotBehavior_acceptLhs_elim(v_motive_592_, v_t_boxed_596_, v_h_594_, v_acceptLhs_595_);
lean_dec(v_acceptLhs_595_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg(lean_object* v_takeLongest_598_){
_start:
{
lean_inc(v_takeLongest_598_);
return v_takeLongest_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg___boxed(lean_object* v_takeLongest_599_){
_start:
{
lean_object* v_res_600_; 
v_res_600_ = l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___redArg(v_takeLongest_599_);
lean_dec(v_takeLongest_599_);
return v_res_600_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim(lean_object* v_motive_601_, uint8_t v_t_602_, lean_object* v_h_603_, lean_object* v_takeLongest_604_){
_start:
{
lean_inc(v_takeLongest_604_);
return v_takeLongest_604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim___boxed(lean_object* v_motive_605_, lean_object* v_t_606_, lean_object* v_h_607_, lean_object* v_takeLongest_608_){
_start:
{
uint8_t v_t_boxed_609_; lean_object* v_res_610_; 
v_t_boxed_609_ = lean_unbox(v_t_606_);
v_res_610_ = l_Lean_Parser_OrElseOnAntiquotBehavior_takeLongest_elim(v_motive_605_, v_t_boxed_609_, v_h_607_, v_takeLongest_608_);
lean_dec(v_takeLongest_608_);
return v_res_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg(lean_object* v_merge_611_){
_start:
{
lean_inc(v_merge_611_);
return v_merge_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg___boxed(lean_object* v_merge_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___redArg(v_merge_612_);
lean_dec(v_merge_612_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim(lean_object* v_motive_614_, uint8_t v_t_615_, lean_object* v_h_616_, lean_object* v_merge_617_){
_start:
{
lean_inc(v_merge_617_);
return v_merge_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim___boxed(lean_object* v_motive_618_, lean_object* v_t_619_, lean_object* v_h_620_, lean_object* v_merge_621_){
_start:
{
uint8_t v_t_boxed_622_; lean_object* v_res_623_; 
v_t_boxed_622_ = lean_unbox(v_t_619_);
v_res_623_ = l_Lean_Parser_OrElseOnAntiquotBehavior_merge_elim(v_motive_618_, v_t_boxed_622_, v_h_620_, v_merge_621_);
lean_dec(v_merge_621_);
return v_res_623_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(uint8_t v_x_624_, uint8_t v_y_625_){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_626_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx(v_x_624_);
v___x_627_ = l_Lean_Parser_OrElseOnAntiquotBehavior_ctorIdx(v_y_625_);
v___x_628_ = lean_nat_dec_eq(v___x_626_, v___x_627_);
lean_dec(v___x_627_);
lean_dec(v___x_626_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq___boxed(lean_object* v_x_629_, lean_object* v_y_630_){
_start:
{
uint8_t v_x_17__boxed_631_; uint8_t v_y_18__boxed_632_; uint8_t v_res_633_; lean_object* v_r_634_; 
v_x_17__boxed_631_ = lean_unbox(v_x_629_);
v_y_18__boxed_632_ = lean_unbox(v_y_630_);
v_res_633_ = l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(v_x_17__boxed_631_, v_y_18__boxed_632_);
v_r_634_ = lean_box(v_res_633_);
return v_r_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___lam__0(lean_object* v_stx_640_, lean_object* v_s_641_){
_start:
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
lean_inc(v_stx_640_);
v___x_643_ = l_Lean_Syntax_isOfKind(v_stx_640_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_Parser_ParserState_pushSyntax(v_s_641_, v_stx_640_, v___x_643_);
return v___x_644_;
}
else
{
lean_object* v_stxStack_645_; lean_object* v_lhsPrec_646_; lean_object* v_pos_647_; lean_object* v_cache_648_; lean_object* v_errorMsg_649_; lean_object* v_recoveredErrors_650_; lean_object* v_traces_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_669_; 
v_stxStack_645_ = lean_ctor_get(v_s_641_, 0);
v_lhsPrec_646_ = lean_ctor_get(v_s_641_, 1);
v_pos_647_ = lean_ctor_get(v_s_641_, 2);
v_cache_648_ = lean_ctor_get(v_s_641_, 3);
v_errorMsg_649_ = lean_ctor_get(v_s_641_, 4);
v_recoveredErrors_650_ = lean_ctor_get(v_s_641_, 5);
v_traces_651_ = lean_ctor_get(v_s_641_, 6);
v_isSharedCheck_669_ = !lean_is_exclusive(v_s_641_);
if (v_isSharedCheck_669_ == 0)
{
v___x_653_ = v_s_641_;
v_isShared_654_ = v_isSharedCheck_669_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_traces_651_);
lean_inc(v_recoveredErrors_650_);
lean_inc(v_errorMsg_649_);
lean_inc(v_cache_648_);
lean_inc(v_pos_647_);
lean_inc(v_lhsPrec_646_);
lean_inc(v_stxStack_645_);
lean_dec(v_s_641_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_669_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v_raw_655_; lean_object* v_drop_656_; lean_object* v___x_658_; uint8_t v_isShared_659_; uint8_t v_isSharedCheck_668_; 
v_raw_655_ = lean_ctor_get(v_stxStack_645_, 0);
v_drop_656_ = lean_ctor_get(v_stxStack_645_, 1);
v_isSharedCheck_668_ = !lean_is_exclusive(v_stxStack_645_);
if (v_isSharedCheck_668_ == 0)
{
v___x_658_ = v_stxStack_645_;
v_isShared_659_ = v_isSharedCheck_668_;
goto v_resetjp_657_;
}
else
{
lean_inc(v_drop_656_);
lean_inc(v_raw_655_);
lean_dec(v_stxStack_645_);
v___x_658_ = lean_box(0);
v_isShared_659_ = v_isSharedCheck_668_;
goto v_resetjp_657_;
}
v_resetjp_657_:
{
lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_663_; 
v___x_660_ = l_Lean_Syntax_getArgs(v_stx_640_);
lean_dec(v_stx_640_);
v___x_661_ = l_Array_append___redArg(v_raw_655_, v___x_660_);
lean_dec_ref(v___x_660_);
if (v_isShared_659_ == 0)
{
lean_ctor_set(v___x_658_, 0, v___x_661_);
v___x_663_ = v___x_658_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_667_; 
v_reuseFailAlloc_667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_667_, 0, v___x_661_);
lean_ctor_set(v_reuseFailAlloc_667_, 1, v_drop_656_);
v___x_663_ = v_reuseFailAlloc_667_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
lean_object* v___x_665_; 
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_663_);
v___x_665_ = v___x_653_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v___x_663_);
lean_ctor_set(v_reuseFailAlloc_666_, 1, v_lhsPrec_646_);
lean_ctor_set(v_reuseFailAlloc_666_, 2, v_pos_647_);
lean_ctor_set(v_reuseFailAlloc_666_, 3, v_cache_648_);
lean_ctor_set(v_reuseFailAlloc_666_, 4, v_errorMsg_649_);
lean_ctor_set(v_reuseFailAlloc_666_, 5, v_recoveredErrors_650_);
lean_ctor_set(v_reuseFailAlloc_666_, 6, v_traces_651_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore(lean_object* v_p_670_, lean_object* v_q_671_, uint8_t v_antiquotBehavior_672_, lean_object* v_c_673_, lean_object* v_s_674_){
_start:
{
lean_object* v_pos_675_; lean_object* v_iniSz_676_; lean_object* v_s_677_; lean_object* v_errorMsg_678_; 
v_pos_675_ = lean_ctor_get(v_s_674_, 2);
lean_inc(v_pos_675_);
v_iniSz_676_ = l_Lean_Parser_ParserState_stackSize(v_s_674_);
lean_inc_ref(v_c_673_);
v_s_677_ = lean_apply_2(v_p_670_, v_c_673_, v_s_674_);
v_errorMsg_678_ = lean_ctor_get(v_s_677_, 4);
lean_inc(v_errorMsg_678_);
if (lean_obj_tag(v_errorMsg_678_) == 0)
{
lean_object* v_stxStack_679_; lean_object* v_pos_680_; lean_object* v_pBack_681_; lean_object* v___y_683_; uint8_t v___y_684_; lean_object* v___y_688_; uint8_t v___y_689_; lean_object* v___y_699_; uint8_t v___y_700_; uint8_t v___y_701_; uint8_t v___y_702_; uint8_t v___y_708_; uint8_t v___x_721_; uint8_t v___x_722_; 
v_stxStack_679_ = lean_ctor_get(v_s_677_, 0);
lean_inc_ref(v_stxStack_679_);
v_pos_680_ = lean_ctor_get(v_s_677_, 2);
lean_inc(v_pos_680_);
v_pBack_681_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_679_);
lean_dec_ref(v_stxStack_679_);
v___x_721_ = 0;
v___x_722_ = l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(v_antiquotBehavior_672_, v___x_721_);
if (v___x_722_ == 0)
{
lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_723_ = l_Lean_Parser_ParserState_stackSize(v_s_677_);
v___x_724_ = lean_unsigned_to_nat(1u);
v___x_725_ = lean_nat_add(v_iniSz_676_, v___x_724_);
v___x_726_ = lean_nat_dec_eq(v___x_723_, v___x_725_);
lean_dec(v___x_725_);
lean_dec(v___x_723_);
if (v___x_726_ == 0)
{
lean_dec(v_pBack_681_);
lean_dec(v_pos_680_);
lean_dec(v_iniSz_676_);
lean_dec(v_pos_675_);
lean_dec_ref(v_c_673_);
lean_dec_ref(v_q_671_);
return v_s_677_;
}
else
{
v___y_708_ = v___x_722_;
goto v___jp_707_;
}
}
else
{
v___y_708_ = v___x_722_;
goto v___jp_707_;
}
v___jp_682_:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = l_Lean_Parser_ParserState_restore(v___y_683_, v_iniSz_676_, v_pos_680_);
lean_dec(v_iniSz_676_);
v___x_686_ = l_Lean_Parser_ParserState_pushSyntax(v___x_685_, v_pBack_681_, v___y_684_);
return v___x_686_;
}
v___jp_687_:
{
lean_object* v_stxStack_690_; lean_object* v___x_691_; uint8_t v___x_692_; 
v_stxStack_690_ = lean_ctor_get(v___y_688_, 0);
v___x_691_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_690_);
lean_inc(v___x_691_);
v___x_692_ = l_Lean_Syntax_isAntiquots(v___x_691_);
if (v___x_692_ == 0)
{
lean_dec(v___x_691_);
v___y_683_ = v___y_688_;
v___y_684_ = v___y_689_;
goto v___jp_682_;
}
else
{
lean_object* v_s_693_; lean_object* v_s_694_; lean_object* v_s_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
lean_dec(v_pos_680_);
v_s_693_ = l_Lean_Parser_ParserState_popSyntax(v___y_688_);
v_s_694_ = l_Lean_Parser_orelseFnCore___lam__0(v_pBack_681_, v_s_693_);
v_s_695_ = l_Lean_Parser_orelseFnCore___lam__0(v___x_691_, v_s_694_);
v___x_696_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
v___x_697_ = l_Lean_Parser_ParserState_mkNode(v_s_695_, v___x_696_, v_iniSz_676_);
lean_dec(v_iniSz_676_);
return v___x_697_;
}
}
v___jp_698_:
{
if (v___y_702_ == 0)
{
lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; uint8_t v___x_706_; 
v___x_703_ = l_Lean_Parser_ParserState_stackSize(v___y_699_);
v___x_704_ = lean_unsigned_to_nat(1u);
v___x_705_ = lean_nat_add(v_iniSz_676_, v___x_704_);
v___x_706_ = lean_nat_dec_eq(v___x_703_, v___x_705_);
lean_dec(v___x_705_);
lean_dec(v___x_703_);
if (v___x_706_ == 0)
{
if (v___y_700_ == 0)
{
v___y_688_ = v___y_699_;
v___y_689_ = v___y_701_;
goto v___jp_687_;
}
else
{
v___y_683_ = v___y_699_;
v___y_684_ = v___y_701_;
goto v___jp_682_;
}
}
else
{
v___y_688_ = v___y_699_;
v___y_689_ = v___y_701_;
goto v___jp_687_;
}
}
else
{
v___y_683_ = v___y_699_;
v___y_684_ = v___y_701_;
goto v___jp_682_;
}
}
v___jp_707_:
{
if (v___y_708_ == 0)
{
uint8_t v___x_709_; 
lean_inc(v_pBack_681_);
v___x_709_ = l_Lean_Syntax_isAntiquots(v_pBack_681_);
if (v___x_709_ == 0)
{
lean_dec(v_pBack_681_);
lean_dec(v_pos_680_);
lean_dec(v_iniSz_676_);
lean_dec(v_pos_675_);
lean_dec_ref(v_c_673_);
lean_dec_ref(v_q_671_);
return v_s_677_;
}
else
{
lean_object* v_s_710_; lean_object* v_s_711_; lean_object* v_pos_712_; lean_object* v_errorMsg_713_; uint8_t v___x_714_; 
v_s_710_ = l_Lean_Parser_ParserState_restore(v_s_677_, v_iniSz_676_, v_pos_675_);
v_s_711_ = lean_apply_2(v_q_671_, v_c_673_, v_s_710_);
v_pos_712_ = lean_ctor_get(v_s_711_, 2);
lean_inc(v_pos_712_);
v_errorMsg_713_ = lean_ctor_get(v_s_711_, 4);
lean_inc(v_errorMsg_713_);
v___x_714_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_713_, v_errorMsg_678_);
if (v___x_714_ == 0)
{
lean_object* v___x_715_; lean_object* v___x_716_; 
lean_dec(v_pos_712_);
v___x_715_ = l_Lean_Parser_ParserState_restore(v_s_711_, v_iniSz_676_, v_pos_680_);
lean_dec(v_iniSz_676_);
v___x_716_ = l_Lean_Parser_ParserState_pushSyntax(v___x_715_, v_pBack_681_, v___y_708_);
return v___x_716_;
}
else
{
uint8_t v___x_717_; 
v___x_717_ = lean_nat_dec_lt(v_pos_680_, v_pos_712_);
if (v___x_717_ == 0)
{
uint8_t v___x_718_; 
v___x_718_ = lean_nat_dec_lt(v_pos_712_, v_pos_680_);
lean_dec(v_pos_712_);
if (v___x_718_ == 0)
{
uint8_t v___x_719_; uint8_t v___x_720_; 
v___x_719_ = 2;
v___x_720_ = l_Lean_Parser_instBEqOrElseOnAntiquotBehavior_beq(v_antiquotBehavior_672_, v___x_719_);
if (v___x_720_ == 0)
{
v___y_699_ = v_s_711_;
v___y_700_ = v___x_714_;
v___y_701_ = v___y_708_;
v___y_702_ = v___x_714_;
goto v___jp_698_;
}
else
{
v___y_699_ = v_s_711_;
v___y_700_ = v___x_714_;
v___y_701_ = v___y_708_;
v___y_702_ = v___x_718_;
goto v___jp_698_;
}
}
else
{
v___y_699_ = v_s_711_;
v___y_700_ = v___x_714_;
v___y_701_ = v___y_708_;
v___y_702_ = v___x_718_;
goto v___jp_698_;
}
}
else
{
lean_dec(v_pos_712_);
lean_dec(v_pBack_681_);
lean_dec(v_pos_680_);
lean_dec(v_iniSz_676_);
return v_s_711_;
}
}
}
}
else
{
lean_dec(v_pBack_681_);
lean_dec(v_pos_680_);
lean_dec(v_iniSz_676_);
lean_dec(v_pos_675_);
lean_dec_ref(v_c_673_);
lean_dec_ref(v_q_671_);
return v_s_677_;
}
}
}
else
{
lean_object* v_pos_727_; lean_object* v_val_728_; uint8_t v___x_729_; 
v_pos_727_ = lean_ctor_get(v_s_677_, 2);
lean_inc(v_pos_727_);
v_val_728_ = lean_ctor_get(v_errorMsg_678_, 0);
lean_inc(v_val_728_);
lean_dec_ref_known(v_errorMsg_678_, 1);
v___x_729_ = lean_nat_dec_eq(v_pos_727_, v_pos_675_);
lean_dec(v_pos_727_);
if (v___x_729_ == 0)
{
lean_dec(v_val_728_);
lean_dec(v_iniSz_676_);
lean_dec(v_pos_675_);
lean_dec_ref(v_c_673_);
lean_dec_ref(v_q_671_);
return v_s_677_;
}
else
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; 
lean_inc(v_pos_675_);
v___x_730_ = l_Lean_Parser_ParserState_restore(v_s_677_, v_iniSz_676_, v_pos_675_);
lean_dec(v_iniSz_676_);
v___x_731_ = lean_apply_2(v_q_671_, v_c_673_, v___x_730_);
v___x_732_ = l_Lean_Parser_mergeOrElseErrors(v___x_731_, v_val_728_, v_pos_675_, v___x_729_);
lean_dec(v_pos_675_);
return v___x_732_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFnCore___boxed(lean_object* v_p_733_, lean_object* v_q_734_, lean_object* v_antiquotBehavior_735_, lean_object* v_c_736_, lean_object* v_s_737_){
_start:
{
uint8_t v_antiquotBehavior_boxed_738_; lean_object* v_res_739_; 
v_antiquotBehavior_boxed_738_ = lean_unbox(v_antiquotBehavior_735_);
v_res_739_ = l_Lean_Parser_orelseFnCore(v_p_733_, v_q_734_, v_antiquotBehavior_boxed_738_, v_c_736_, v_s_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseFn(lean_object* v_p_741_, lean_object* v_q_742_, lean_object* v_a_743_, lean_object* v_a_744_){
_start:
{
lean_object* v_traces_745_; uint8_t v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v_traces_745_ = lean_ctor_get(v_a_744_, 6);
v___x_746_ = 2;
v___x_747_ = lean_array_get_size(v_traces_745_);
v___x_748_ = lean_unsigned_to_nat(0u);
v___x_749_ = lean_nat_dec_eq(v___x_747_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_750_ = ((lean_object*)(l_Lean_Parser_orelseFn___closed__0));
v___x_751_ = lean_box(v___x_746_);
v___x_752_ = lean_alloc_closure((void*)(l_Lean_Parser_orelseFnCore___boxed), 5, 4);
lean_closure_set(v___x_752_, 0, v_p_741_);
lean_closure_set(v___x_752_, 1, v_q_742_);
lean_closure_set(v___x_752_, 2, v___x_751_);
lean_closure_set(v___x_752_, 3, v_a_743_);
v___x_753_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_744_, v___x_750_, v___x_752_);
return v___x_753_;
}
else
{
lean_object* v___x_754_; 
v___x_754_ = l_Lean_Parser_orelseFnCore(v_p_741_, v_q_742_, v___x_746_, v_a_743_, v_a_744_);
return v___x_754_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelseInfo(lean_object* v_p_755_, lean_object* v_q_756_){
_start:
{
lean_object* v_collectTokens_757_; lean_object* v_collectKinds_758_; lean_object* v_firstTokens_759_; lean_object* v_collectTokens_760_; lean_object* v_collectKinds_761_; lean_object* v_firstTokens_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_772_; 
v_collectTokens_757_ = lean_ctor_get(v_p_755_, 0);
lean_inc_ref(v_collectTokens_757_);
v_collectKinds_758_ = lean_ctor_get(v_p_755_, 1);
lean_inc_ref(v_collectKinds_758_);
v_firstTokens_759_ = lean_ctor_get(v_p_755_, 2);
lean_inc(v_firstTokens_759_);
lean_dec_ref(v_p_755_);
v_collectTokens_760_ = lean_ctor_get(v_q_756_, 0);
v_collectKinds_761_ = lean_ctor_get(v_q_756_, 1);
v_firstTokens_762_ = lean_ctor_get(v_q_756_, 2);
v_isSharedCheck_772_ = !lean_is_exclusive(v_q_756_);
if (v_isSharedCheck_772_ == 0)
{
v___x_764_ = v_q_756_;
v_isShared_765_ = v_isSharedCheck_772_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_firstTokens_762_);
lean_inc(v_collectKinds_761_);
lean_inc(v_collectTokens_760_);
lean_dec(v_q_756_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_772_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___f_766_; lean_object* v___f_767_; lean_object* v___x_768_; lean_object* v___x_770_; 
v___f_766_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_766_, 0, v_collectKinds_761_);
lean_closure_set(v___f_766_, 1, v_collectKinds_758_);
v___f_767_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_767_, 0, v_collectTokens_760_);
lean_closure_set(v___f_767_, 1, v_collectTokens_757_);
v___x_768_ = l_Lean_Parser_FirstTokens_merge(v_firstTokens_759_, v_firstTokens_762_);
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 2, v___x_768_);
lean_ctor_set(v___x_764_, 1, v___f_766_);
lean_ctor_set(v___x_764_, 0, v___f_767_);
v___x_770_ = v___x_764_;
goto v_reusejp_769_;
}
else
{
lean_object* v_reuseFailAlloc_771_; 
v_reuseFailAlloc_771_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_771_, 0, v___f_767_);
lean_ctor_set(v_reuseFailAlloc_771_, 1, v___f_766_);
lean_ctor_set(v_reuseFailAlloc_771_, 2, v___x_768_);
v___x_770_ = v_reuseFailAlloc_771_;
goto v_reusejp_769_;
}
v_reusejp_769_:
{
return v___x_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParserFn___lam__0(lean_object* v_p1_773_, lean_object* v_p2_774_, lean_object* v___y_775_, lean_object* v___y_776_){
_start:
{
lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; 
v___x_777_ = lean_box(0);
v___x_778_ = lean_apply_1(v_p2_774_, v___x_777_);
v___x_779_ = l_Lean_Parser_orelseFn(v_p1_773_, v___x_778_, v___y_775_, v___y_776_);
return v___x_779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_orelse(lean_object* v_p_782_, lean_object* v_q_783_){
_start:
{
lean_object* v_info_784_; lean_object* v_fn_785_; lean_object* v_info_786_; lean_object* v_fn_787_; lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_796_; 
v_info_784_ = lean_ctor_get(v_p_782_, 0);
lean_inc_ref(v_info_784_);
v_fn_785_ = lean_ctor_get(v_p_782_, 1);
lean_inc_ref(v_fn_785_);
lean_dec_ref(v_p_782_);
v_info_786_ = lean_ctor_get(v_q_783_, 0);
v_fn_787_ = lean_ctor_get(v_q_783_, 1);
v_isSharedCheck_796_ = !lean_is_exclusive(v_q_783_);
if (v_isSharedCheck_796_ == 0)
{
v___x_789_ = v_q_783_;
v_isShared_790_ = v_isSharedCheck_796_;
goto v_resetjp_788_;
}
else
{
lean_inc(v_fn_787_);
lean_inc(v_info_786_);
lean_dec(v_q_783_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_796_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_794_; 
v___x_791_ = l_Lean_Parser_orelseInfo(v_info_784_, v_info_786_);
v___x_792_ = lean_alloc_closure((void*)(l_Lean_Parser_orelseFn), 4, 2);
lean_closure_set(v___x_792_, 0, v_fn_785_);
lean_closure_set(v___x_792_, 1, v_fn_787_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 1, v___x_792_);
lean_ctor_set(v___x_789_, 0, v___x_791_);
v___x_794_ = v___x_789_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v___x_791_);
lean_ctor_set(v_reuseFailAlloc_795_, 1, v___x_792_);
v___x_794_ = v_reuseFailAlloc_795_;
goto v_reusejp_793_;
}
v_reusejp_793_:
{
return v___x_794_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1(){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_804_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__1));
v___x_805_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___closed__2));
v___x_806_ = l_Lean_addBuiltinDocString(v___x_804_, v___x_805_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1___boxed(lean_object* v_a_807_){
_start:
{
lean_object* v_res_808_; 
v_res_808_ = l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1();
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instOrElseParser___lam__0(lean_object* v_a_809_, lean_object* v_b_810_){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_811_ = lean_box(0);
v___x_812_ = lean_apply_1(v_b_810_, v___x_811_);
v___x_813_ = l_Lean_Parser_orelse(v_a_809_, v___x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_noFirstTokenInfo(lean_object* v_info_816_){
_start:
{
lean_object* v_collectTokens_817_; lean_object* v_collectKinds_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_826_; 
v_collectTokens_817_ = lean_ctor_get(v_info_816_, 0);
v_collectKinds_818_ = lean_ctor_get(v_info_816_, 1);
v_isSharedCheck_826_ = !lean_is_exclusive(v_info_816_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v_info_816_, 2);
lean_dec(v_unused_827_);
v___x_820_ = v_info_816_;
v_isShared_821_ = v_isSharedCheck_826_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_collectKinds_818_);
lean_inc(v_collectTokens_817_);
lean_dec(v_info_816_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_826_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_822_; lean_object* v___x_824_; 
v___x_822_ = lean_box(1);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 2, v___x_822_);
v___x_824_ = v___x_820_;
goto v_reusejp_823_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v_collectTokens_817_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v_collectKinds_818_);
lean_ctor_set(v_reuseFailAlloc_825_, 2, v___x_822_);
v___x_824_ = v_reuseFailAlloc_825_;
goto v_reusejp_823_;
}
v_reusejp_823_:
{
return v___x_824_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomicFn___lam__0(lean_object* v_p_828_, lean_object* v_c_829_, lean_object* v_s_830_){
_start:
{
lean_object* v_pos_831_; lean_object* v___x_832_; lean_object* v_errorMsg_833_; 
v_pos_831_ = lean_ctor_get(v_s_830_, 2);
lean_inc(v_pos_831_);
v___x_832_ = lean_apply_2(v_p_828_, v_c_829_, v_s_830_);
v_errorMsg_833_ = lean_ctor_get(v___x_832_, 4);
lean_inc(v_errorMsg_833_);
if (lean_obj_tag(v_errorMsg_833_) == 1)
{
lean_object* v_stxStack_834_; lean_object* v_lhsPrec_835_; lean_object* v_cache_836_; lean_object* v_recoveredErrors_837_; lean_object* v_traces_838_; lean_object* v___x_840_; uint8_t v_isShared_841_; uint8_t v_isSharedCheck_845_; 
v_stxStack_834_ = lean_ctor_get(v___x_832_, 0);
v_lhsPrec_835_ = lean_ctor_get(v___x_832_, 1);
v_cache_836_ = lean_ctor_get(v___x_832_, 3);
v_recoveredErrors_837_ = lean_ctor_get(v___x_832_, 5);
v_traces_838_ = lean_ctor_get(v___x_832_, 6);
v_isSharedCheck_845_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_845_ == 0)
{
lean_object* v_unused_846_; lean_object* v_unused_847_; 
v_unused_846_ = lean_ctor_get(v___x_832_, 4);
lean_dec(v_unused_846_);
v_unused_847_ = lean_ctor_get(v___x_832_, 2);
lean_dec(v_unused_847_);
v___x_840_ = v___x_832_;
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
else
{
lean_inc(v_traces_838_);
lean_inc(v_recoveredErrors_837_);
lean_inc(v_cache_836_);
lean_inc(v_lhsPrec_835_);
lean_inc(v_stxStack_834_);
lean_dec(v___x_832_);
v___x_840_ = lean_box(0);
v_isShared_841_ = v_isSharedCheck_845_;
goto v_resetjp_839_;
}
v_resetjp_839_:
{
lean_object* v___x_843_; 
if (v_isShared_841_ == 0)
{
lean_ctor_set(v___x_840_, 2, v_pos_831_);
v___x_843_ = v___x_840_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v_stxStack_834_);
lean_ctor_set(v_reuseFailAlloc_844_, 1, v_lhsPrec_835_);
lean_ctor_set(v_reuseFailAlloc_844_, 2, v_pos_831_);
lean_ctor_set(v_reuseFailAlloc_844_, 3, v_cache_836_);
lean_ctor_set(v_reuseFailAlloc_844_, 4, v_errorMsg_833_);
lean_ctor_set(v_reuseFailAlloc_844_, 5, v_recoveredErrors_837_);
lean_ctor_set(v_reuseFailAlloc_844_, 6, v_traces_838_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
}
else
{
lean_dec(v_errorMsg_833_);
lean_dec(v_pos_831_);
return v___x_832_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomicFn(lean_object* v_p_849_, lean_object* v_a_850_, lean_object* v_a_851_){
_start:
{
lean_object* v_traces_852_; lean_object* v___x_853_; lean_object* v___x_854_; uint8_t v___x_855_; 
v_traces_852_ = lean_ctor_get(v_a_851_, 6);
v___x_853_ = lean_array_get_size(v_traces_852_);
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = lean_nat_dec_eq(v___x_853_, v___x_854_);
if (v___x_855_ == 0)
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = ((lean_object*)(l_Lean_Parser_atomicFn___closed__0));
v___x_857_ = lean_alloc_closure((void*)(l_Lean_Parser_atomicFn___lam__0), 3, 2);
lean_closure_set(v___x_857_, 0, v_p_849_);
lean_closure_set(v___x_857_, 1, v_a_850_);
v___x_858_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_851_, v___x_856_, v___x_857_);
return v___x_858_;
}
else
{
lean_object* v___x_859_; 
v___x_859_ = l_Lean_Parser_atomicFn___lam__0(v_p_849_, v_a_850_, v_a_851_);
return v___x_859_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_atomic(lean_object* v_p_860_){
_start:
{
lean_object* v_info_861_; lean_object* v_fn_862_; lean_object* v___x_864_; uint8_t v_isShared_865_; uint8_t v_isSharedCheck_870_; 
v_info_861_ = lean_ctor_get(v_p_860_, 0);
v_fn_862_ = lean_ctor_get(v_p_860_, 1);
v_isSharedCheck_870_ = !lean_is_exclusive(v_p_860_);
if (v_isSharedCheck_870_ == 0)
{
v___x_864_ = v_p_860_;
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
else
{
lean_inc(v_fn_862_);
lean_inc(v_info_861_);
lean_dec(v_p_860_);
v___x_864_ = lean_box(0);
v_isShared_865_ = v_isSharedCheck_870_;
goto v_resetjp_863_;
}
v_resetjp_863_:
{
lean_object* v___x_866_; lean_object* v___x_868_; 
v___x_866_ = lean_alloc_closure((void*)(l_Lean_Parser_atomicFn), 3, 1);
lean_closure_set(v___x_866_, 0, v_fn_862_);
if (v_isShared_865_ == 0)
{
lean_ctor_set(v___x_864_, 1, v___x_866_);
v___x_868_ = v___x_864_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_info_861_);
lean_ctor_set(v_reuseFailAlloc_869_, 1, v___x_866_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1(){
_start:
{
lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; 
v___x_877_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__0));
v___x_878_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___closed__1));
v___x_879_ = l_Lean_addBuiltinDocString(v___x_877_, v___x_878_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1___boxed(lean_object* v_a_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1();
return v_res_881_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqRecoveryContext_beq(lean_object* v_x_882_, lean_object* v_x_883_){
_start:
{
lean_object* v_initialPos_884_; lean_object* v_initialSize_885_; lean_object* v_initialPos_886_; lean_object* v_initialSize_887_; uint8_t v___x_888_; 
v_initialPos_884_ = lean_ctor_get(v_x_882_, 0);
v_initialSize_885_ = lean_ctor_get(v_x_882_, 1);
v_initialPos_886_ = lean_ctor_get(v_x_883_, 0);
v_initialSize_887_ = lean_ctor_get(v_x_883_, 1);
v___x_888_ = lean_nat_dec_eq(v_initialPos_884_, v_initialPos_886_);
if (v___x_888_ == 0)
{
return v___x_888_;
}
else
{
uint8_t v___x_889_; 
v___x_889_ = lean_nat_dec_eq(v_initialSize_885_, v_initialSize_887_);
return v___x_889_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqRecoveryContext_beq___boxed(lean_object* v_x_890_, lean_object* v_x_891_){
_start:
{
uint8_t v_res_892_; lean_object* v_r_893_; 
v_res_892_ = l_Lean_Parser_instBEqRecoveryContext_beq(v_x_890_, v_x_891_);
lean_dec_ref(v_x_891_);
lean_dec_ref(v_x_890_);
v_r_893_ = lean_box(v_res_892_);
return v_r_893_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext_decEq(lean_object* v_x_896_, lean_object* v_x_897_){
_start:
{
lean_object* v_initialPos_898_; lean_object* v_initialSize_899_; lean_object* v_initialPos_900_; lean_object* v_initialSize_901_; uint8_t v___x_902_; 
v_initialPos_898_ = lean_ctor_get(v_x_896_, 0);
v_initialSize_899_ = lean_ctor_get(v_x_896_, 1);
v_initialPos_900_ = lean_ctor_get(v_x_897_, 0);
v_initialSize_901_ = lean_ctor_get(v_x_897_, 1);
v___x_902_ = lean_nat_dec_eq(v_initialPos_898_, v_initialPos_900_);
if (v___x_902_ == 0)
{
return v___x_902_;
}
else
{
uint8_t v___x_903_; 
v___x_903_ = lean_nat_dec_eq(v_initialSize_899_, v_initialSize_901_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext_decEq___boxed(lean_object* v_x_904_, lean_object* v_x_905_){
_start:
{
uint8_t v_res_906_; lean_object* v_r_907_; 
v_res_906_ = l_Lean_Parser_instDecidableEqRecoveryContext_decEq(v_x_904_, v_x_905_);
lean_dec_ref(v_x_905_);
lean_dec_ref(v_x_904_);
v_r_907_ = lean_box(v_res_906_);
return v_r_907_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instDecidableEqRecoveryContext(lean_object* v_x_908_, lean_object* v_x_909_){
_start:
{
uint8_t v___x_910_; 
v___x_910_ = l_Lean_Parser_instDecidableEqRecoveryContext_decEq(v_x_908_, v_x_909_);
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instDecidableEqRecoveryContext___boxed(lean_object* v_x_911_, lean_object* v_x_912_){
_start:
{
uint8_t v_res_913_; lean_object* v_r_914_; 
v_res_913_ = l_Lean_Parser_instDecidableEqRecoveryContext(v_x_911_, v_x_912_);
lean_dec_ref(v_x_912_);
lean_dec_ref(v_x_911_);
v_r_914_ = lean_box(v_res_913_);
return v_r_914_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; 
v___x_928_ = lean_unsigned_to_nat(14u);
v___x_929_ = lean_nat_to_int(v___x_928_);
return v___x_929_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_unsigned_to_nat(15u);
v___x_943_ = lean_nat_to_int(v___x_942_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17(void){
_start:
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__0));
v___x_945_ = lean_string_length(v___x_944_);
return v___x_945_;
}
}
static lean_object* _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18(void){
_start:
{
lean_object* v___x_946_; lean_object* v___x_947_; 
v___x_946_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__17);
v___x_947_ = lean_nat_to_int(v___x_946_);
return v___x_947_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___redArg(lean_object* v_x_950_){
_start:
{
lean_object* v_initialPos_951_; lean_object* v_initialSize_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_990_; 
v_initialPos_951_ = lean_ctor_get(v_x_950_, 0);
v_initialSize_952_ = lean_ctor_get(v_x_950_, 1);
v_isSharedCheck_990_ = !lean_is_exclusive(v_x_950_);
if (v_isSharedCheck_990_ == 0)
{
v___x_954_ = v_x_950_;
v_isShared_955_ = v_isSharedCheck_990_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_initialSize_952_);
lean_inc(v_initialPos_951_);
lean_dec(v_x_950_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_990_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_963_; 
v___x_956_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__5));
v___x_957_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__6));
v___x_958_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__7);
v___x_959_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__9));
v___x_960_ = l_Nat_reprFast(v_initialPos_951_);
v___x_961_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_961_, 0, v___x_960_);
if (v_isShared_955_ == 0)
{
lean_ctor_set_tag(v___x_954_, 5);
lean_ctor_set(v___x_954_, 1, v___x_961_);
lean_ctor_set(v___x_954_, 0, v___x_959_);
v___x_963_ = v___x_954_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v___x_959_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v___x_961_);
v___x_963_ = v_reuseFailAlloc_989_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; uint8_t v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; 
v___x_964_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__11));
v___x_965_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_966_, 0, v___x_958_);
lean_ctor_set(v___x_966_, 1, v___x_965_);
v___x_967_ = 0;
v___x_968_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_968_, 0, v___x_966_);
lean_ctor_set_uint8(v___x_968_, sizeof(void*)*1, v___x_967_);
v___x_969_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_969_, 0, v___x_957_);
lean_ctor_set(v___x_969_, 1, v___x_968_);
v___x_970_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__13));
v___x_971_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_969_);
lean_ctor_set(v___x_971_, 1, v___x_970_);
v___x_972_ = lean_box(1);
v___x_973_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_973_, 0, v___x_971_);
lean_ctor_set(v___x_973_, 1, v___x_972_);
v___x_974_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__15));
v___x_975_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_975_, 0, v___x_973_);
lean_ctor_set(v___x_975_, 1, v___x_974_);
v___x_976_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_976_, 0, v___x_975_);
lean_ctor_set(v___x_976_, 1, v___x_956_);
v___x_977_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__16);
v___x_978_ = l_Nat_reprFast(v_initialSize_952_);
v___x_979_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
v___x_980_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_980_, 0, v___x_977_);
lean_ctor_set(v___x_980_, 1, v___x_979_);
v___x_981_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_981_, 0, v___x_980_);
lean_ctor_set_uint8(v___x_981_, sizeof(void*)*1, v___x_967_);
v___x_982_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_982_, 0, v___x_976_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
v___x_983_ = lean_obj_once(&l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18, &l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18_once, _init_l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__18);
v___x_984_ = ((lean_object*)(l_Lean_Parser_instReprRecoveryContext_repr___redArg___closed__19));
v___x_985_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_985_, 0, v___x_984_);
lean_ctor_set(v___x_985_, 1, v___x_982_);
v___x_986_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___x_964_);
v___x_987_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_987_, 0, v___x_983_);
lean_ctor_set(v___x_987_, 1, v___x_986_);
v___x_988_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_988_, 0, v___x_987_);
lean_ctor_set_uint8(v___x_988_, sizeof(void*)*1, v___x_967_);
return v___x_988_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr(lean_object* v_x_991_, lean_object* v_prec_992_){
_start:
{
lean_object* v___x_993_; 
v___x_993_ = l_Lean_Parser_instReprRecoveryContext_repr___redArg(v_x_991_);
return v___x_993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprRecoveryContext_repr___boxed(lean_object* v_x_994_, lean_object* v_prec_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_Lean_Parser_instReprRecoveryContext_repr(v_x_994_, v_prec_995_);
lean_dec(v_prec_995_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recoverFn___lam__0(lean_object* v_p_999_, lean_object* v_recover_1000_, lean_object* v_c_1001_, lean_object* v_s_1002_){
_start:
{
lean_object* v_stxStack_1003_; lean_object* v_pos_1004_; lean_object* v_s_1005_; lean_object* v_errorMsg_1006_; 
v_stxStack_1003_ = lean_ctor_get(v_s_1002_, 0);
lean_inc_ref(v_stxStack_1003_);
v_pos_1004_ = lean_ctor_get(v_s_1002_, 2);
lean_inc(v_pos_1004_);
lean_inc_ref(v_c_1001_);
v_s_1005_ = lean_apply_2(v_p_999_, v_c_1001_, v_s_1002_);
v_errorMsg_1006_ = lean_ctor_get(v_s_1005_, 4);
lean_inc(v_errorMsg_1006_);
if (lean_obj_tag(v_errorMsg_1006_) == 1)
{
lean_object* v_stxStack_1007_; lean_object* v_lhsPrec_1008_; lean_object* v_pos_1009_; lean_object* v_cache_1010_; lean_object* v_recoveredErrors_1011_; lean_object* v_traces_1012_; lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1045_; 
v_stxStack_1007_ = lean_ctor_get(v_s_1005_, 0);
v_lhsPrec_1008_ = lean_ctor_get(v_s_1005_, 1);
v_pos_1009_ = lean_ctor_get(v_s_1005_, 2);
v_cache_1010_ = lean_ctor_get(v_s_1005_, 3);
v_recoveredErrors_1011_ = lean_ctor_get(v_s_1005_, 5);
v_traces_1012_ = lean_ctor_get(v_s_1005_, 6);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_s_1005_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v_s_1005_, 4);
lean_dec(v_unused_1046_);
v___x_1014_ = v_s_1005_;
v_isShared_1015_ = v_isSharedCheck_1045_;
goto v_resetjp_1013_;
}
else
{
lean_inc(v_traces_1012_);
lean_inc(v_recoveredErrors_1011_);
lean_inc(v_cache_1010_);
lean_inc(v_pos_1009_);
lean_inc(v_lhsPrec_1008_);
lean_inc(v_stxStack_1007_);
lean_dec(v_s_1005_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1045_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_val_1016_; lean_object* v_iniSz_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1021_; 
v_val_1016_ = lean_ctor_get(v_errorMsg_1006_, 0);
v_iniSz_1017_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1003_);
lean_dec_ref(v_stxStack_1003_);
v___x_1018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1018_, 0, v_pos_1004_);
lean_ctor_set(v___x_1018_, 1, v_iniSz_1017_);
v___x_1019_ = lean_box(0);
lean_inc_ref(v_recoveredErrors_1011_);
lean_inc_ref(v_cache_1010_);
lean_inc(v_pos_1009_);
lean_inc(v_lhsPrec_1008_);
lean_inc_ref(v_stxStack_1007_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 4, v___x_1019_);
v___x_1021_ = v___x_1014_;
goto v_reusejp_1020_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v_stxStack_1007_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_lhsPrec_1008_);
lean_ctor_set(v_reuseFailAlloc_1044_, 2, v_pos_1009_);
lean_ctor_set(v_reuseFailAlloc_1044_, 3, v_cache_1010_);
lean_ctor_set(v_reuseFailAlloc_1044_, 4, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1044_, 5, v_recoveredErrors_1011_);
lean_ctor_set(v_reuseFailAlloc_1044_, 6, v_traces_1012_);
v___x_1021_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1020_;
}
v_reusejp_1020_:
{
lean_object* v_s_x27_1022_; lean_object* v_stxStack_1023_; lean_object* v_pos_1024_; lean_object* v_errorMsg_1025_; lean_object* v_traces_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1040_; 
v_s_x27_1022_ = lean_apply_3(v_recover_1000_, v___x_1018_, v_c_1001_, v___x_1021_);
v_stxStack_1023_ = lean_ctor_get(v_s_x27_1022_, 0);
v_pos_1024_ = lean_ctor_get(v_s_x27_1022_, 2);
v_errorMsg_1025_ = lean_ctor_get(v_s_x27_1022_, 4);
v_traces_1026_ = lean_ctor_get(v_s_x27_1022_, 6);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_s_x27_1022_);
if (v_isSharedCheck_1040_ == 0)
{
lean_object* v_unused_1041_; lean_object* v_unused_1042_; lean_object* v_unused_1043_; 
v_unused_1041_ = lean_ctor_get(v_s_x27_1022_, 5);
lean_dec(v_unused_1041_);
v_unused_1042_ = lean_ctor_get(v_s_x27_1022_, 3);
lean_dec(v_unused_1042_);
v_unused_1043_ = lean_ctor_get(v_s_x27_1022_, 1);
lean_dec(v_unused_1043_);
v___x_1028_ = v_s_x27_1022_;
v_isShared_1029_ = v_isSharedCheck_1040_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_traces_1026_);
lean_inc(v_errorMsg_1025_);
lean_inc(v_pos_1024_);
lean_inc(v_stxStack_1023_);
lean_dec(v_s_x27_1022_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1040_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
uint8_t v___x_1030_; 
v___x_1030_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1025_, v___x_1019_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1032_; 
lean_dec(v_pos_1024_);
lean_dec_ref(v_stxStack_1023_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 5, v_recoveredErrors_1011_);
lean_ctor_set(v___x_1028_, 4, v_errorMsg_1006_);
lean_ctor_set(v___x_1028_, 3, v_cache_1010_);
lean_ctor_set(v___x_1028_, 2, v_pos_1009_);
lean_ctor_set(v___x_1028_, 1, v_lhsPrec_1008_);
lean_ctor_set(v___x_1028_, 0, v_stxStack_1007_);
v___x_1032_ = v___x_1028_;
goto v_reusejp_1031_;
}
else
{
lean_object* v_reuseFailAlloc_1033_; 
v_reuseFailAlloc_1033_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1033_, 0, v_stxStack_1007_);
lean_ctor_set(v_reuseFailAlloc_1033_, 1, v_lhsPrec_1008_);
lean_ctor_set(v_reuseFailAlloc_1033_, 2, v_pos_1009_);
lean_ctor_set(v_reuseFailAlloc_1033_, 3, v_cache_1010_);
lean_ctor_set(v_reuseFailAlloc_1033_, 4, v_errorMsg_1006_);
lean_ctor_set(v_reuseFailAlloc_1033_, 5, v_recoveredErrors_1011_);
lean_ctor_set(v_reuseFailAlloc_1033_, 6, v_traces_1026_);
v___x_1032_ = v_reuseFailAlloc_1033_;
goto v_reusejp_1031_;
}
v_reusejp_1031_:
{
return v___x_1032_;
}
}
else
{
lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1038_; 
lean_inc(v_val_1016_);
lean_dec(v_pos_1009_);
lean_dec_ref_known(v_errorMsg_1006_, 1);
lean_dec_ref(v_stxStack_1007_);
lean_inc_ref(v_stxStack_1023_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_stxStack_1023_);
lean_ctor_set(v___x_1034_, 1, v_val_1016_);
lean_inc(v_pos_1024_);
v___x_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1035_, 0, v_pos_1024_);
lean_ctor_set(v___x_1035_, 1, v___x_1034_);
v___x_1036_ = lean_array_push(v_recoveredErrors_1011_, v___x_1035_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 5, v___x_1036_);
lean_ctor_set(v___x_1028_, 4, v___x_1019_);
lean_ctor_set(v___x_1028_, 3, v_cache_1010_);
lean_ctor_set(v___x_1028_, 1, v_lhsPrec_1008_);
v___x_1038_ = v___x_1028_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_stxStack_1023_);
lean_ctor_set(v_reuseFailAlloc_1039_, 1, v_lhsPrec_1008_);
lean_ctor_set(v_reuseFailAlloc_1039_, 2, v_pos_1024_);
lean_ctor_set(v_reuseFailAlloc_1039_, 3, v_cache_1010_);
lean_ctor_set(v_reuseFailAlloc_1039_, 4, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1039_, 5, v___x_1036_);
lean_ctor_set(v_reuseFailAlloc_1039_, 6, v_traces_1026_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
}
else
{
lean_dec(v_errorMsg_1006_);
lean_dec(v_pos_1004_);
lean_dec_ref(v_stxStack_1003_);
lean_dec_ref(v_c_1001_);
lean_dec_ref(v_recover_1000_);
return v_s_1005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recoverFn(lean_object* v_p_1048_, lean_object* v_recover_1049_, lean_object* v_a_1050_, lean_object* v_a_1051_){
_start:
{
lean_object* v_traces_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; uint8_t v___x_1055_; 
v_traces_1052_ = lean_ctor_get(v_a_1051_, 6);
v___x_1053_ = lean_array_get_size(v_traces_1052_);
v___x_1054_ = lean_unsigned_to_nat(0u);
v___x_1055_ = lean_nat_dec_eq(v___x_1053_, v___x_1054_);
if (v___x_1055_ == 0)
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = ((lean_object*)(l_Lean_Parser_recoverFn___closed__0));
v___x_1057_ = lean_alloc_closure((void*)(l_Lean_Parser_recoverFn___lam__0), 4, 3);
lean_closure_set(v___x_1057_, 0, v_p_1048_);
lean_closure_set(v___x_1057_, 1, v_recover_1049_);
lean_closure_set(v___x_1057_, 2, v_a_1050_);
v___x_1058_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_1051_, v___x_1056_, v___x_1057_);
return v___x_1058_;
}
else
{
lean_object* v___x_1059_; 
v___x_1059_ = l_Lean_Parser_recoverFn___lam__0(v_p_1048_, v_recover_1049_, v_a_1050_, v_a_1051_);
return v___x_1059_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27___lam__0(lean_object* v_handler_1060_, lean_object* v_s_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v___x_1064_; lean_object* v_fn_1065_; lean_object* v___x_1066_; 
v___x_1064_ = lean_apply_1(v_handler_1060_, v_s_1061_);
v_fn_1065_ = lean_ctor_get(v___x_1064_, 1);
lean_inc_ref(v_fn_1065_);
lean_dec_ref(v___x_1064_);
v___x_1066_ = lean_apply_2(v_fn_1065_, v___y_1062_, v___y_1063_);
return v___x_1066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover_x27(lean_object* v_parser_1067_, lean_object* v_handler_1068_){
_start:
{
lean_object* v_info_1069_; lean_object* v_fn_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1079_; 
v_info_1069_ = lean_ctor_get(v_parser_1067_, 0);
v_fn_1070_ = lean_ctor_get(v_parser_1067_, 1);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_parser_1067_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1072_ = v_parser_1067_;
v_isShared_1073_ = v_isSharedCheck_1079_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_fn_1070_);
lean_inc(v_info_1069_);
lean_dec(v_parser_1067_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1079_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___f_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
v___f_1074_ = lean_alloc_closure((void*)(l_Lean_Parser_recover_x27___lam__0), 4, 1);
lean_closure_set(v___f_1074_, 0, v_handler_1068_);
v___x_1075_ = lean_alloc_closure((void*)(l_Lean_Parser_recoverFn), 4, 2);
lean_closure_set(v___x_1075_, 0, v_fn_1070_);
lean_closure_set(v___x_1075_, 1, v___f_1074_);
if (v_isShared_1073_ == 0)
{
lean_ctor_set(v___x_1072_, 1, v___x_1075_);
v___x_1077_ = v___x_1072_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_info_1069_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1(){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v___x_1087_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__1));
v___x_1088_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___closed__2));
v___x_1089_ = l_Lean_addBuiltinDocString(v___x_1087_, v___x_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1___boxed(lean_object* v_a_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1();
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0(lean_object* v_handler_1092_, lean_object* v_x_1093_){
_start:
{
lean_inc_ref(v_handler_1092_);
return v_handler_1092_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover___lam__0___boxed(lean_object* v_handler_1094_, lean_object* v_x_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = l_Lean_Parser_recover___lam__0(v_handler_1094_, v_x_1095_);
lean_dec_ref(v_x_1095_);
lean_dec_ref(v_handler_1094_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_recover(lean_object* v_parser_1097_, lean_object* v_handler_1098_){
_start:
{
lean_object* v___f_1099_; lean_object* v___x_1100_; 
v___f_1099_ = lean_alloc_closure((void*)(l_Lean_Parser_recover___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1099_, 0, v_handler_1098_);
v___x_1100_ = l_Lean_Parser_recover_x27(v_parser_1097_, v___f_1099_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1(){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1107_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__0));
v___x_1108_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___closed__1));
v___x_1109_ = l_Lean_addBuiltinDocString(v___x_1107_, v___x_1108_);
return v___x_1109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1___boxed(lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1();
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalFn___lam__0(lean_object* v_p_1115_, lean_object* v_c_1116_, lean_object* v_s_1117_){
_start:
{
lean_object* v_pos_1118_; lean_object* v_iniSz_1119_; lean_object* v___y_1121_; lean_object* v_s_1124_; lean_object* v_pos_1125_; lean_object* v_errorMsg_1126_; lean_object* v___x_1127_; uint8_t v___x_1128_; 
v_pos_1118_ = lean_ctor_get(v_s_1117_, 2);
lean_inc(v_pos_1118_);
v_iniSz_1119_ = l_Lean_Parser_ParserState_stackSize(v_s_1117_);
v_s_1124_ = lean_apply_2(v_p_1115_, v_c_1116_, v_s_1117_);
v_pos_1125_ = lean_ctor_get(v_s_1124_, 2);
lean_inc(v_pos_1125_);
v_errorMsg_1126_ = lean_ctor_get(v_s_1124_, 4);
lean_inc(v_errorMsg_1126_);
v___x_1127_ = lean_box(0);
v___x_1128_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1126_, v___x_1127_);
if (v___x_1128_ == 0)
{
uint8_t v___x_1129_; 
v___x_1129_ = lean_nat_dec_eq(v_pos_1125_, v_pos_1118_);
lean_dec(v_pos_1125_);
if (v___x_1129_ == 0)
{
lean_dec(v_pos_1118_);
v___y_1121_ = v_s_1124_;
goto v___jp_1120_;
}
else
{
lean_object* v___x_1130_; 
v___x_1130_ = l_Lean_Parser_ParserState_restore(v_s_1124_, v_iniSz_1119_, v_pos_1118_);
v___y_1121_ = v___x_1130_;
goto v___jp_1120_;
}
}
else
{
lean_dec(v_pos_1125_);
lean_dec(v_pos_1118_);
v___y_1121_ = v_s_1124_;
goto v___jp_1120_;
}
v___jp_1120_:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; 
v___x_1122_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1123_ = l_Lean_Parser_ParserState_mkNode(v___y_1121_, v___x_1122_, v_iniSz_1119_);
lean_dec(v_iniSz_1119_);
return v___x_1123_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalFn(lean_object* v_p_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_){
_start:
{
lean_object* v_traces_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; uint8_t v___x_1138_; 
v_traces_1135_ = lean_ctor_get(v_a_1134_, 6);
v___x_1136_ = lean_array_get_size(v_traces_1135_);
v___x_1137_ = lean_unsigned_to_nat(0u);
v___x_1138_ = lean_nat_dec_eq(v___x_1136_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Lean_Parser_optionalFn___closed__0));
v___x_1140_ = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn___lam__0), 3, 2);
lean_closure_set(v___x_1140_, 0, v_p_1132_);
lean_closure_set(v___x_1140_, 1, v_a_1133_);
v___x_1141_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_1134_, v___x_1139_, v___x_1140_);
return v___x_1141_;
}
else
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_Parser_optionalFn___lam__0(v_p_1132_, v_a_1133_, v_a_1134_);
return v___x_1142_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalInfo(lean_object* v_p_1143_){
_start:
{
lean_object* v_collectTokens_1144_; lean_object* v_collectKinds_1145_; lean_object* v_firstTokens_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1154_; 
v_collectTokens_1144_ = lean_ctor_get(v_p_1143_, 0);
v_collectKinds_1145_ = lean_ctor_get(v_p_1143_, 1);
v_firstTokens_1146_ = lean_ctor_get(v_p_1143_, 2);
v_isSharedCheck_1154_ = !lean_is_exclusive(v_p_1143_);
if (v_isSharedCheck_1154_ == 0)
{
v___x_1148_ = v_p_1143_;
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_firstTokens_1146_);
lean_inc(v_collectKinds_1145_);
lean_inc(v_collectTokens_1144_);
lean_dec(v_p_1143_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1154_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1150_; lean_object* v___x_1152_; 
v___x_1150_ = l_Lean_Parser_FirstTokens_toOptional(v_firstTokens_1146_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 2, v___x_1150_);
v___x_1152_ = v___x_1148_;
goto v_reusejp_1151_;
}
else
{
lean_object* v_reuseFailAlloc_1153_; 
v_reuseFailAlloc_1153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1153_, 0, v_collectTokens_1144_);
lean_ctor_set(v_reuseFailAlloc_1153_, 1, v_collectKinds_1145_);
lean_ctor_set(v_reuseFailAlloc_1153_, 2, v___x_1150_);
v___x_1152_ = v_reuseFailAlloc_1153_;
goto v_reusejp_1151_;
}
v_reusejp_1151_:
{
return v___x_1152_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_optionalNoAntiquot(lean_object* v_p_1155_){
_start:
{
lean_object* v_info_1156_; lean_object* v_fn_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1166_; 
v_info_1156_ = lean_ctor_get(v_p_1155_, 0);
v_fn_1157_ = lean_ctor_get(v_p_1155_, 1);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_p_1155_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1159_ = v_p_1155_;
v_isShared_1160_ = v_isSharedCheck_1166_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_fn_1157_);
lean_inc(v_info_1156_);
lean_dec(v_p_1155_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1166_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1164_; 
v___x_1161_ = l_Lean_Parser_optionalInfo(v_info_1156_);
v___x_1162_ = lean_alloc_closure((void*)(l_Lean_Parser_optionalFn), 3, 1);
lean_closure_set(v___x_1162_, 0, v_fn_1157_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1162_);
lean_ctor_set(v___x_1159_, 0, v___x_1161_);
v___x_1164_ = v___x_1159_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v___x_1161_);
lean_ctor_set(v_reuseFailAlloc_1165_, 1, v___x_1162_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_lookaheadFn(lean_object* v_p_1167_, lean_object* v_c_1168_, lean_object* v_s_1169_){
_start:
{
lean_object* v_pos_1170_; lean_object* v_iniSz_1171_; lean_object* v_s_1172_; lean_object* v_errorMsg_1173_; lean_object* v___x_1174_; uint8_t v___x_1175_; 
v_pos_1170_ = lean_ctor_get(v_s_1169_, 2);
lean_inc(v_pos_1170_);
v_iniSz_1171_ = l_Lean_Parser_ParserState_stackSize(v_s_1169_);
v_s_1172_ = lean_apply_2(v_p_1167_, v_c_1168_, v_s_1169_);
v_errorMsg_1173_ = lean_ctor_get(v_s_1172_, 4);
lean_inc(v_errorMsg_1173_);
v___x_1174_ = lean_box(0);
v___x_1175_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_dec(v_iniSz_1171_);
lean_dec(v_pos_1170_);
return v_s_1172_;
}
else
{
lean_object* v___x_1176_; 
v___x_1176_ = l_Lean_Parser_ParserState_restore(v_s_1172_, v_iniSz_1171_, v_pos_1170_);
lean_dec(v_iniSz_1171_);
return v___x_1176_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_lookahead(lean_object* v_p_1177_){
_start:
{
lean_object* v_info_1178_; lean_object* v_fn_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1187_; 
v_info_1178_ = lean_ctor_get(v_p_1177_, 0);
v_fn_1179_ = lean_ctor_get(v_p_1177_, 1);
v_isSharedCheck_1187_ = !lean_is_exclusive(v_p_1177_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1181_ = v_p_1177_;
v_isShared_1182_ = v_isSharedCheck_1187_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_fn_1179_);
lean_inc(v_info_1178_);
lean_dec(v_p_1177_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1187_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1183_; lean_object* v___x_1185_; 
v___x_1183_ = lean_alloc_closure((void*)(l_Lean_Parser_lookaheadFn), 3, 1);
lean_closure_set(v___x_1183_, 0, v_fn_1179_);
if (v_isShared_1182_ == 0)
{
lean_ctor_set(v___x_1181_, 1, v___x_1183_);
v___x_1185_ = v___x_1181_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_info_1178_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v___x_1183_);
v___x_1185_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
return v___x_1185_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1(){
_start:
{
lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1195_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__1));
v___x_1196_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___closed__2));
v___x_1197_ = l_Lean_addBuiltinDocString(v___x_1195_, v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1___boxed(lean_object* v_a_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1();
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn(lean_object* v_p_1201_, lean_object* v_msg_1202_, lean_object* v_c_1203_, lean_object* v_s_1204_){
_start:
{
lean_object* v_pos_1205_; lean_object* v_iniSz_1206_; lean_object* v_s_1207_; lean_object* v_errorMsg_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v_pos_1205_ = lean_ctor_get(v_s_1204_, 2);
lean_inc(v_pos_1205_);
v_iniSz_1206_ = l_Lean_Parser_ParserState_stackSize(v_s_1204_);
v_s_1207_ = lean_apply_2(v_p_1201_, v_c_1203_, v_s_1204_);
v_errorMsg_1208_ = lean_ctor_get(v_s_1207_, 4);
lean_inc(v_errorMsg_1208_);
v___x_1209_ = lean_box(0);
v___x_1210_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; 
v___x_1211_ = l_Lean_Parser_ParserState_restore(v_s_1207_, v_iniSz_1206_, v_pos_1205_);
lean_dec(v_iniSz_1206_);
return v___x_1211_;
}
else
{
lean_object* v_s_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; 
v_s_1212_ = l_Lean_Parser_ParserState_restore(v_s_1207_, v_iniSz_1206_, v_pos_1205_);
lean_dec(v_iniSz_1206_);
v___x_1213_ = ((lean_object*)(l_Lean_Parser_notFollowedByFn___closed__0));
v___x_1214_ = lean_string_append(v___x_1213_, v_msg_1202_);
v___x_1215_ = lean_box(0);
v___x_1216_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1212_, v___x_1214_, v___x_1215_, v___x_1210_);
return v___x_1216_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedByFn___boxed(lean_object* v_p_1217_, lean_object* v_msg_1218_, lean_object* v_c_1219_, lean_object* v_s_1220_){
_start:
{
lean_object* v_res_1221_; 
v_res_1221_ = l_Lean_Parser_notFollowedByFn(v_p_1217_, v_msg_1218_, v_c_1219_, v_s_1220_);
lean_dec_ref(v_msg_1218_);
return v_res_1221_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_notFollowedBy(lean_object* v_p_1222_, lean_object* v_msg_1223_){
_start:
{
lean_object* v_fn_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1233_; 
v_fn_1224_ = lean_ctor_get(v_p_1222_, 1);
v_isSharedCheck_1233_ = !lean_is_exclusive(v_p_1222_);
if (v_isSharedCheck_1233_ == 0)
{
lean_object* v_unused_1234_; 
v_unused_1234_ = lean_ctor_get(v_p_1222_, 0);
lean_dec(v_unused_1234_);
v___x_1226_ = v_p_1222_;
v_isShared_1227_ = v_isSharedCheck_1233_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_fn_1224_);
lean_dec(v_p_1222_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1233_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1231_; 
v___x_1228_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_1229_ = lean_alloc_closure((void*)(l_Lean_Parser_notFollowedByFn___boxed), 4, 2);
lean_closure_set(v___x_1229_, 0, v_fn_1224_);
lean_closure_set(v___x_1229_, 1, v_msg_1223_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set(v___x_1226_, 1, v___x_1229_);
lean_ctor_set(v___x_1226_, 0, v___x_1228_);
v___x_1231_ = v___x_1226_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1228_);
lean_ctor_set(v_reuseFailAlloc_1232_, 1, v___x_1229_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1(){
_start:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; 
v___x_1242_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__1));
v___x_1243_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___closed__2));
v___x_1244_ = l_Lean_addBuiltinDocString(v___x_1242_, v___x_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1___boxed(lean_object* v_a_1245_){
_start:
{
lean_object* v_res_1246_; 
v_res_1246_ = l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1();
return v_res_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyAux(lean_object* v_p_1248_, lean_object* v_c_1249_, lean_object* v_s_1250_){
_start:
{
lean_object* v_pos_1251_; lean_object* v_iniSz_1252_; lean_object* v_s_1253_; lean_object* v_pos_1254_; lean_object* v_errorMsg_1255_; lean_object* v___x_1256_; uint8_t v___x_1257_; 
v_pos_1251_ = lean_ctor_get(v_s_1250_, 2);
lean_inc(v_pos_1251_);
v_iniSz_1252_ = l_Lean_Parser_ParserState_stackSize(v_s_1250_);
lean_inc_ref(v_p_1248_);
lean_inc_ref(v_c_1249_);
v_s_1253_ = lean_apply_2(v_p_1248_, v_c_1249_, v_s_1250_);
v_pos_1254_ = lean_ctor_get(v_s_1253_, 2);
lean_inc(v_pos_1254_);
v_errorMsg_1255_ = lean_ctor_get(v_s_1253_, 4);
lean_inc(v_errorMsg_1255_);
v___x_1256_ = lean_box(0);
v___x_1257_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1255_, v___x_1256_);
if (v___x_1257_ == 0)
{
uint8_t v___x_1258_; 
lean_dec_ref(v_c_1249_);
lean_dec_ref(v_p_1248_);
v___x_1258_ = lean_nat_dec_eq(v_pos_1251_, v_pos_1254_);
lean_dec(v_pos_1254_);
if (v___x_1258_ == 0)
{
lean_dec(v_iniSz_1252_);
lean_dec(v_pos_1251_);
return v_s_1253_;
}
else
{
lean_object* v___x_1259_; 
v___x_1259_ = l_Lean_Parser_ParserState_restore(v_s_1253_, v_iniSz_1252_, v_pos_1251_);
lean_dec(v_iniSz_1252_);
return v___x_1259_;
}
}
else
{
uint8_t v___x_1260_; 
v___x_1260_ = lean_nat_dec_eq(v_pos_1251_, v_pos_1254_);
lean_dec(v_pos_1254_);
lean_dec(v_pos_1251_);
if (v___x_1260_ == 0)
{
lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; uint8_t v___x_1264_; 
v___x_1261_ = lean_unsigned_to_nat(1u);
v___x_1262_ = lean_nat_add(v_iniSz_1252_, v___x_1261_);
v___x_1263_ = l_Lean_Parser_ParserState_stackSize(v_s_1253_);
v___x_1264_ = lean_nat_dec_lt(v___x_1262_, v___x_1263_);
lean_dec(v___x_1263_);
lean_dec(v___x_1262_);
if (v___x_1264_ == 0)
{
lean_dec(v_iniSz_1252_);
v_s_1250_ = v_s_1253_;
goto _start;
}
else
{
lean_object* v___x_1266_; lean_object* v_s_1267_; 
v___x_1266_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v_s_1267_ = l_Lean_Parser_ParserState_mkNode(v_s_1253_, v___x_1266_, v_iniSz_1252_);
lean_dec(v_iniSz_1252_);
v_s_1250_ = v_s_1267_;
goto _start;
}
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; 
lean_dec(v_iniSz_1252_);
lean_dec_ref(v_c_1249_);
lean_dec_ref(v_p_1248_);
v___x_1269_ = ((lean_object*)(l_Lean_Parser_manyAux___closed__0));
v___x_1270_ = lean_box(0);
v___x_1271_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1253_, v___x_1269_, v___x_1270_, v___x_1257_);
return v___x_1271_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyFn___lam__0(lean_object* v_p_1272_, lean_object* v_c_1273_, lean_object* v_s_1274_){
_start:
{
lean_object* v_iniSz_1275_; lean_object* v_s_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; 
v_iniSz_1275_ = l_Lean_Parser_ParserState_stackSize(v_s_1274_);
v_s_1276_ = l_Lean_Parser_manyAux(v_p_1272_, v_c_1273_, v_s_1274_);
v___x_1277_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1278_ = l_Lean_Parser_ParserState_mkNode(v_s_1276_, v___x_1277_, v_iniSz_1275_);
lean_dec(v_iniSz_1275_);
return v___x_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyFn(lean_object* v_p_1280_, lean_object* v_a_1281_, lean_object* v_a_1282_){
_start:
{
lean_object* v_traces_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; uint8_t v___x_1286_; 
v_traces_1283_ = lean_ctor_get(v_a_1282_, 6);
v___x_1284_ = lean_array_get_size(v_traces_1283_);
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = lean_nat_dec_eq(v___x_1284_, v___x_1285_);
if (v___x_1286_ == 0)
{
lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = ((lean_object*)(l_Lean_Parser_manyFn___closed__0));
v___x_1288_ = lean_alloc_closure((void*)(l_Lean_Parser_manyFn___lam__0), 3, 2);
lean_closure_set(v___x_1288_, 0, v_p_1280_);
lean_closure_set(v___x_1288_, 1, v_a_1281_);
v___x_1289_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_1282_, v___x_1287_, v___x_1288_);
return v___x_1289_;
}
else
{
lean_object* v___x_1290_; 
v___x_1290_ = l_Lean_Parser_manyFn___lam__0(v_p_1280_, v_a_1281_, v_a_1282_);
return v___x_1290_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_manyNoAntiquot(lean_object* v_p_1291_){
_start:
{
lean_object* v_info_1292_; lean_object* v_fn_1293_; lean_object* v___x_1295_; uint8_t v_isShared_1296_; uint8_t v_isSharedCheck_1302_; 
v_info_1292_ = lean_ctor_get(v_p_1291_, 0);
v_fn_1293_ = lean_ctor_get(v_p_1291_, 1);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_p_1291_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1295_ = v_p_1291_;
v_isShared_1296_ = v_isSharedCheck_1302_;
goto v_resetjp_1294_;
}
else
{
lean_inc(v_fn_1293_);
lean_inc(v_info_1292_);
lean_dec(v_p_1291_);
v___x_1295_ = lean_box(0);
v_isShared_1296_ = v_isSharedCheck_1302_;
goto v_resetjp_1294_;
}
v_resetjp_1294_:
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1300_; 
v___x_1297_ = l_Lean_Parser_noFirstTokenInfo(v_info_1292_);
v___x_1298_ = lean_alloc_closure((void*)(l_Lean_Parser_manyFn), 3, 1);
lean_closure_set(v___x_1298_, 0, v_fn_1293_);
if (v_isShared_1296_ == 0)
{
lean_ctor_set(v___x_1295_, 1, v___x_1298_);
lean_ctor_set(v___x_1295_, 0, v___x_1297_);
v___x_1300_ = v___x_1295_;
goto v_reusejp_1299_;
}
else
{
lean_object* v_reuseFailAlloc_1301_; 
v_reuseFailAlloc_1301_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1301_, 0, v___x_1297_);
lean_ctor_set(v_reuseFailAlloc_1301_, 1, v___x_1298_);
v___x_1300_ = v_reuseFailAlloc_1301_;
goto v_reusejp_1299_;
}
v_reusejp_1299_:
{
return v___x_1300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Fn___lam__0(lean_object* v_p_1303_, lean_object* v_c_1304_, lean_object* v_s_1305_){
_start:
{
lean_object* v_iniSz_1306_; lean_object* v___x_1307_; lean_object* v_s_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; 
v_iniSz_1306_ = l_Lean_Parser_ParserState_stackSize(v_s_1305_);
lean_inc_ref(v_p_1303_);
v___x_1307_ = lean_alloc_closure((void*)(l_Lean_Parser_manyAux), 3, 1);
lean_closure_set(v___x_1307_, 0, v_p_1303_);
v_s_1308_ = l_Lean_Parser_andthenFn(v_p_1303_, v___x_1307_, v_c_1304_, v_s_1305_);
v___x_1309_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1310_ = l_Lean_Parser_ParserState_mkNode(v_s_1308_, v___x_1309_, v_iniSz_1306_);
lean_dec(v_iniSz_1306_);
return v___x_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Fn(lean_object* v_p_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_){
_start:
{
lean_object* v_traces_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; uint8_t v___x_1318_; 
v_traces_1315_ = lean_ctor_get(v_a_1314_, 6);
v___x_1316_ = lean_array_get_size(v_traces_1315_);
v___x_1317_ = lean_unsigned_to_nat(0u);
v___x_1318_ = lean_nat_dec_eq(v___x_1316_, v___x_1317_);
if (v___x_1318_ == 0)
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1319_ = ((lean_object*)(l_Lean_Parser_many1Fn___closed__0));
v___x_1320_ = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn___lam__0), 3, 2);
lean_closure_set(v___x_1320_, 0, v_p_1312_);
lean_closure_set(v___x_1320_, 1, v_a_1313_);
v___x_1321_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_1314_, v___x_1319_, v___x_1320_);
return v___x_1321_;
}
else
{
lean_object* v___x_1322_; 
v___x_1322_ = l_Lean_Parser_many1Fn___lam__0(v_p_1312_, v_a_1313_, v_a_1314_);
return v___x_1322_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1NoAntiquot(lean_object* v_p_1323_){
_start:
{
lean_object* v_info_1324_; lean_object* v_fn_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1333_; 
v_info_1324_ = lean_ctor_get(v_p_1323_, 0);
v_fn_1325_ = lean_ctor_get(v_p_1323_, 1);
v_isSharedCheck_1333_ = !lean_is_exclusive(v_p_1323_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1327_ = v_p_1323_;
v_isShared_1328_ = v_isSharedCheck_1333_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_fn_1325_);
lean_inc(v_info_1324_);
lean_dec(v_p_1323_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1333_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1329_; lean_object* v___x_1331_; 
v___x_1329_ = lean_alloc_closure((void*)(l_Lean_Parser_many1Fn), 3, 1);
lean_closure_set(v___x_1329_, 0, v_fn_1325_);
if (v_isShared_1328_ == 0)
{
lean_ctor_set(v___x_1327_, 1, v___x_1329_);
v___x_1331_ = v___x_1327_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_info_1324_);
lean_ctor_set(v_reuseFailAlloc_1332_, 1, v___x_1329_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(lean_object* v_p_1334_, lean_object* v_sep_1335_, uint8_t v_allowTrailingSep_1336_, lean_object* v_iniSz_1337_, uint8_t v_pOpt_1338_, lean_object* v_c_1339_, lean_object* v_s_1340_){
_start:
{
lean_object* v_s_1342_; lean_object* v_pos_1343_; lean_object* v_pos_1360_; lean_object* v_sz_1361_; lean_object* v_s_1362_; lean_object* v_pos_1363_; lean_object* v_errorMsg_1364_; lean_object* v___x_1365_; uint8_t v___x_1366_; 
v_pos_1360_ = lean_ctor_get(v_s_1340_, 2);
lean_inc(v_pos_1360_);
v_sz_1361_ = l_Lean_Parser_ParserState_stackSize(v_s_1340_);
lean_inc_ref(v_p_1334_);
lean_inc_ref(v_c_1339_);
v_s_1362_ = lean_apply_2(v_p_1334_, v_c_1339_, v_s_1340_);
v_pos_1363_ = lean_ctor_get(v_s_1362_, 2);
lean_inc(v_pos_1363_);
v_errorMsg_1364_ = lean_ctor_get(v_s_1362_, 4);
lean_inc(v_errorMsg_1364_);
v___x_1365_ = lean_box(0);
v___x_1366_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1364_, v___x_1365_);
if (v___x_1366_ == 0)
{
uint8_t v___x_1367_; 
lean_dec_ref(v_c_1339_);
lean_dec_ref(v_sep_1335_);
lean_dec_ref(v_p_1334_);
v___x_1367_ = lean_nat_dec_lt(v_pos_1360_, v_pos_1363_);
lean_dec(v_pos_1363_);
if (v___x_1367_ == 0)
{
if (v_pOpt_1338_ == 0)
{
lean_object* v___x_1368_; lean_object* v_s_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
lean_dec(v_sz_1361_);
lean_dec(v_pos_1360_);
v___x_1368_ = lean_box(0);
v_s_1369_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1362_, v___x_1368_, v_pOpt_1338_);
v___x_1370_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1371_ = l_Lean_Parser_ParserState_mkNode(v_s_1369_, v___x_1370_, v_iniSz_1337_);
return v___x_1371_;
}
else
{
lean_object* v_s_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v_s_1372_ = l_Lean_Parser_ParserState_restore(v_s_1362_, v_sz_1361_, v_pos_1360_);
lean_dec(v_sz_1361_);
v___x_1373_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1374_ = l_Lean_Parser_ParserState_mkNode(v_s_1372_, v___x_1373_, v_iniSz_1337_);
return v___x_1374_;
}
}
else
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec(v_sz_1361_);
lean_dec(v_pos_1360_);
v___x_1375_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1376_ = l_Lean_Parser_ParserState_mkNode(v_s_1362_, v___x_1375_, v_iniSz_1337_);
return v___x_1376_;
}
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; uint8_t v___x_1380_; 
lean_dec(v_pos_1360_);
v___x_1377_ = lean_unsigned_to_nat(1u);
v___x_1378_ = lean_nat_add(v_sz_1361_, v___x_1377_);
v___x_1379_ = l_Lean_Parser_ParserState_stackSize(v_s_1362_);
v___x_1380_ = lean_nat_dec_lt(v___x_1378_, v___x_1379_);
lean_dec(v___x_1379_);
lean_dec(v___x_1378_);
if (v___x_1380_ == 0)
{
lean_dec(v_sz_1361_);
v_s_1342_ = v_s_1362_;
v_pos_1343_ = v_pos_1363_;
goto v___jp_1341_;
}
else
{
lean_object* v___x_1381_; lean_object* v_s_1382_; lean_object* v_pos_1383_; 
lean_dec(v_pos_1363_);
v___x_1381_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v_s_1382_ = l_Lean_Parser_ParserState_mkNode(v_s_1362_, v___x_1381_, v_sz_1361_);
lean_dec(v_sz_1361_);
v_pos_1383_ = lean_ctor_get(v_s_1382_, 2);
lean_inc(v_pos_1383_);
v_s_1342_ = v_s_1382_;
v_pos_1343_ = v_pos_1383_;
goto v___jp_1341_;
}
}
v___jp_1341_:
{
lean_object* v_sz_1344_; lean_object* v_s_1345_; lean_object* v_errorMsg_1346_; lean_object* v___x_1347_; uint8_t v___x_1348_; 
v_sz_1344_ = l_Lean_Parser_ParserState_stackSize(v_s_1342_);
lean_inc_ref(v_sep_1335_);
lean_inc_ref(v_c_1339_);
v_s_1345_ = lean_apply_2(v_sep_1335_, v_c_1339_, v_s_1342_);
v_errorMsg_1346_ = lean_ctor_get(v_s_1345_, 4);
lean_inc(v_errorMsg_1346_);
v___x_1347_ = lean_box(0);
v___x_1348_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1346_, v___x_1347_);
if (v___x_1348_ == 0)
{
lean_object* v_s_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_dec_ref(v_c_1339_);
lean_dec_ref(v_sep_1335_);
lean_dec_ref(v_p_1334_);
v_s_1349_ = l_Lean_Parser_ParserState_restore(v_s_1345_, v_sz_1344_, v_pos_1343_);
lean_dec(v_sz_1344_);
v___x_1350_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_1351_ = l_Lean_Parser_ParserState_mkNode(v_s_1349_, v___x_1350_, v_iniSz_1337_);
return v___x_1351_;
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
lean_dec(v_pos_1343_);
v___x_1352_ = lean_unsigned_to_nat(1u);
v___x_1353_ = lean_nat_add(v_sz_1344_, v___x_1352_);
v___x_1354_ = l_Lean_Parser_ParserState_stackSize(v_s_1345_);
v___x_1355_ = lean_nat_dec_lt(v___x_1353_, v___x_1354_);
lean_dec(v___x_1354_);
lean_dec(v___x_1353_);
if (v___x_1355_ == 0)
{
lean_dec(v_sz_1344_);
{
uint8_t _tmp_4 = v_allowTrailingSep_1336_;
lean_object* _tmp_6 = v_s_1345_;
v_pOpt_1338_ = _tmp_4;
v_s_1340_ = _tmp_6;
}
goto _start;
}
else
{
lean_object* v___x_1357_; lean_object* v_s_1358_; 
v___x_1357_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v_s_1358_ = l_Lean_Parser_ParserState_mkNode(v_s_1345_, v___x_1357_, v_sz_1344_);
lean_dec(v_sz_1344_);
{
uint8_t _tmp_4 = v_allowTrailingSep_1336_;
lean_object* _tmp_6 = v_s_1358_;
v_pOpt_1338_ = _tmp_4;
v_s_1340_ = _tmp_6;
}
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse___boxed(lean_object* v_p_1384_, lean_object* v_sep_1385_, lean_object* v_allowTrailingSep_1386_, lean_object* v_iniSz_1387_, lean_object* v_pOpt_1388_, lean_object* v_c_1389_, lean_object* v_s_1390_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1391_; uint8_t v_pOpt_boxed_1392_; lean_object* v_res_1393_; 
v_allowTrailingSep_boxed_1391_ = lean_unbox(v_allowTrailingSep_1386_);
v_pOpt_boxed_1392_ = lean_unbox(v_pOpt_1388_);
v_res_1393_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(v_p_1384_, v_sep_1385_, v_allowTrailingSep_boxed_1391_, v_iniSz_1387_, v_pOpt_boxed_1392_, v_c_1389_, v_s_1390_);
lean_dec(v_iniSz_1387_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(lean_object* v_p_1395_, lean_object* v_sep_1396_, uint8_t v_allowTrailingSep_1397_, lean_object* v_iniSz_1398_, uint8_t v_pOpt_1399_, lean_object* v_a_1400_, lean_object* v_a_1401_){
_start:
{
lean_object* v_traces_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; uint8_t v___x_1405_; 
v_traces_1402_ = lean_ctor_get(v_a_1401_, 6);
v___x_1403_ = lean_array_get_size(v_traces_1402_);
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = lean_nat_dec_eq(v___x_1403_, v___x_1404_);
if (v___x_1405_ == 0)
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1406_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___closed__0));
v___x_1407_ = lean_box(v_allowTrailingSep_1397_);
v___x_1408_ = lean_box(v_pOpt_1399_);
v___x_1409_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse___boxed), 7, 6);
lean_closure_set(v___x_1409_, 0, v_p_1395_);
lean_closure_set(v___x_1409_, 1, v_sep_1396_);
lean_closure_set(v___x_1409_, 2, v___x_1407_);
lean_closure_set(v___x_1409_, 3, v_iniSz_1398_);
lean_closure_set(v___x_1409_, 4, v___x_1408_);
lean_closure_set(v___x_1409_, 5, v_a_1400_);
v___x_1410_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_1401_, v___x_1406_, v___x_1409_);
return v___x_1410_;
}
else
{
lean_object* v___x_1411_; 
v___x_1411_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux_parse(v_p_1395_, v_sep_1396_, v_allowTrailingSep_1397_, v_iniSz_1398_, v_pOpt_1399_, v_a_1400_, v_a_1401_);
lean_dec(v_iniSz_1398_);
return v___x_1411_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux___boxed(lean_object* v_p_1412_, lean_object* v_sep_1413_, lean_object* v_allowTrailingSep_1414_, lean_object* v_iniSz_1415_, lean_object* v_pOpt_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1419_; uint8_t v_pOpt_boxed_1420_; lean_object* v_res_1421_; 
v_allowTrailingSep_boxed_1419_ = lean_unbox(v_allowTrailingSep_1414_);
v_pOpt_boxed_1420_ = lean_unbox(v_pOpt_1416_);
v_res_1421_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(v_p_1412_, v_sep_1413_, v_allowTrailingSep_boxed_1419_, v_iniSz_1415_, v_pOpt_boxed_1420_, v_a_1417_, v_a_1418_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn(uint8_t v_allowTrailingSep_1422_, lean_object* v_p_1423_, lean_object* v_sep_1424_, lean_object* v_c_1425_, lean_object* v_s_1426_){
_start:
{
lean_object* v_iniSz_1427_; uint8_t v___x_1428_; lean_object* v___x_1429_; 
v_iniSz_1427_ = l_Lean_Parser_ParserState_stackSize(v_s_1426_);
v___x_1428_ = 1;
v___x_1429_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(v_p_1423_, v_sep_1424_, v_allowTrailingSep_1422_, v_iniSz_1427_, v___x_1428_, v_c_1425_, v_s_1426_);
return v___x_1429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByFn___boxed(lean_object* v_allowTrailingSep_1430_, lean_object* v_p_1431_, lean_object* v_sep_1432_, lean_object* v_c_1433_, lean_object* v_s_1434_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1435_; lean_object* v_res_1436_; 
v_allowTrailingSep_boxed_1435_ = lean_unbox(v_allowTrailingSep_1430_);
v_res_1436_ = l_Lean_Parser_sepByFn(v_allowTrailingSep_boxed_1435_, v_p_1431_, v_sep_1432_, v_c_1433_, v_s_1434_);
return v_res_1436_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn(uint8_t v_allowTrailingSep_1437_, lean_object* v_p_1438_, lean_object* v_sep_1439_, lean_object* v_c_1440_, lean_object* v_s_1441_){
_start:
{
lean_object* v_iniSz_1442_; uint8_t v___x_1443_; lean_object* v___x_1444_; 
v_iniSz_1442_ = l_Lean_Parser_ParserState_stackSize(v_s_1441_);
v___x_1443_ = 0;
v___x_1444_ = l___private_Lean_Parser_Basic_0__Lean_Parser_sepByFnAux(v_p_1438_, v_sep_1439_, v_allowTrailingSep_1437_, v_iniSz_1442_, v___x_1443_, v_c_1440_, v_s_1441_);
return v___x_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Fn___boxed(lean_object* v_allowTrailingSep_1445_, lean_object* v_p_1446_, lean_object* v_sep_1447_, lean_object* v_c_1448_, lean_object* v_s_1449_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1450_; lean_object* v_res_1451_; 
v_allowTrailingSep_boxed_1450_ = lean_unbox(v_allowTrailingSep_1445_);
v_res_1451_ = l_Lean_Parser_sepBy1Fn(v_allowTrailingSep_boxed_1450_, v_p_1446_, v_sep_1447_, v_c_1448_, v_s_1449_);
return v_res_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByInfo(lean_object* v_p_1452_, lean_object* v_sep_1453_){
_start:
{
lean_object* v_collectTokens_1454_; lean_object* v_collectKinds_1455_; lean_object* v_collectTokens_1456_; lean_object* v_collectKinds_1457_; lean_object* v___x_1459_; uint8_t v_isShared_1460_; uint8_t v_isSharedCheck_1467_; 
v_collectTokens_1454_ = lean_ctor_get(v_p_1452_, 0);
lean_inc_ref(v_collectTokens_1454_);
v_collectKinds_1455_ = lean_ctor_get(v_p_1452_, 1);
lean_inc_ref(v_collectKinds_1455_);
lean_dec_ref(v_p_1452_);
v_collectTokens_1456_ = lean_ctor_get(v_sep_1453_, 0);
v_collectKinds_1457_ = lean_ctor_get(v_sep_1453_, 1);
v_isSharedCheck_1467_ = !lean_is_exclusive(v_sep_1453_);
if (v_isSharedCheck_1467_ == 0)
{
lean_object* v_unused_1468_; 
v_unused_1468_ = lean_ctor_get(v_sep_1453_, 2);
lean_dec(v_unused_1468_);
v___x_1459_ = v_sep_1453_;
v_isShared_1460_ = v_isSharedCheck_1467_;
goto v_resetjp_1458_;
}
else
{
lean_inc(v_collectKinds_1457_);
lean_inc(v_collectTokens_1456_);
lean_dec(v_sep_1453_);
v___x_1459_ = lean_box(0);
v_isShared_1460_ = v_isSharedCheck_1467_;
goto v_resetjp_1458_;
}
v_resetjp_1458_:
{
lean_object* v___f_1461_; lean_object* v___f_1462_; lean_object* v___x_1463_; lean_object* v___x_1465_; 
v___f_1461_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_1461_, 0, v_collectKinds_1457_);
lean_closure_set(v___f_1461_, 1, v_collectKinds_1455_);
v___f_1462_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_1462_, 0, v_collectTokens_1456_);
lean_closure_set(v___f_1462_, 1, v_collectTokens_1454_);
v___x_1463_ = lean_box(1);
if (v_isShared_1460_ == 0)
{
lean_ctor_set(v___x_1459_, 2, v___x_1463_);
lean_ctor_set(v___x_1459_, 1, v___f_1461_);
lean_ctor_set(v___x_1459_, 0, v___f_1462_);
v___x_1465_ = v___x_1459_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v___f_1462_);
lean_ctor_set(v_reuseFailAlloc_1466_, 1, v___f_1461_);
lean_ctor_set(v_reuseFailAlloc_1466_, 2, v___x_1463_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1Info(lean_object* v_p_1469_, lean_object* v_sep_1470_){
_start:
{
lean_object* v_collectTokens_1471_; lean_object* v_collectKinds_1472_; lean_object* v_firstTokens_1473_; lean_object* v_collectTokens_1474_; lean_object* v_collectKinds_1475_; lean_object* v___x_1477_; uint8_t v_isShared_1478_; uint8_t v_isSharedCheck_1484_; 
v_collectTokens_1471_ = lean_ctor_get(v_p_1469_, 0);
lean_inc_ref(v_collectTokens_1471_);
v_collectKinds_1472_ = lean_ctor_get(v_p_1469_, 1);
lean_inc_ref(v_collectKinds_1472_);
v_firstTokens_1473_ = lean_ctor_get(v_p_1469_, 2);
lean_inc(v_firstTokens_1473_);
lean_dec_ref(v_p_1469_);
v_collectTokens_1474_ = lean_ctor_get(v_sep_1470_, 0);
v_collectKinds_1475_ = lean_ctor_get(v_sep_1470_, 1);
v_isSharedCheck_1484_ = !lean_is_exclusive(v_sep_1470_);
if (v_isSharedCheck_1484_ == 0)
{
lean_object* v_unused_1485_; 
v_unused_1485_ = lean_ctor_get(v_sep_1470_, 2);
lean_dec(v_unused_1485_);
v___x_1477_ = v_sep_1470_;
v_isShared_1478_ = v_isSharedCheck_1484_;
goto v_resetjp_1476_;
}
else
{
lean_inc(v_collectKinds_1475_);
lean_inc(v_collectTokens_1474_);
lean_dec(v_sep_1470_);
v___x_1477_ = lean_box(0);
v_isShared_1478_ = v_isSharedCheck_1484_;
goto v_resetjp_1476_;
}
v_resetjp_1476_:
{
lean_object* v___f_1479_; lean_object* v___f_1480_; lean_object* v___x_1482_; 
v___f_1479_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__0), 3, 2);
lean_closure_set(v___f_1479_, 0, v_collectKinds_1475_);
lean_closure_set(v___f_1479_, 1, v_collectKinds_1472_);
v___f_1480_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenInfo___lam__1), 3, 2);
lean_closure_set(v___f_1480_, 0, v_collectTokens_1474_);
lean_closure_set(v___f_1480_, 1, v_collectTokens_1471_);
if (v_isShared_1478_ == 0)
{
lean_ctor_set(v___x_1477_, 2, v_firstTokens_1473_);
lean_ctor_set(v___x_1477_, 1, v___f_1479_);
lean_ctor_set(v___x_1477_, 0, v___f_1480_);
v___x_1482_ = v___x_1477_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1483_; 
v_reuseFailAlloc_1483_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1483_, 0, v___f_1480_);
lean_ctor_set(v_reuseFailAlloc_1483_, 1, v___f_1479_);
lean_ctor_set(v_reuseFailAlloc_1483_, 2, v_firstTokens_1473_);
v___x_1482_ = v_reuseFailAlloc_1483_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
return v___x_1482_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object* v_p_1486_, lean_object* v_sep_1487_, uint8_t v_allowTrailingSep_1488_){
_start:
{
lean_object* v_info_1489_; lean_object* v_fn_1490_; lean_object* v_info_1491_; lean_object* v_fn_1492_; lean_object* v___x_1494_; uint8_t v_isShared_1495_; uint8_t v_isSharedCheck_1502_; 
v_info_1489_ = lean_ctor_get(v_p_1486_, 0);
lean_inc_ref(v_info_1489_);
v_fn_1490_ = lean_ctor_get(v_p_1486_, 1);
lean_inc_ref(v_fn_1490_);
lean_dec_ref(v_p_1486_);
v_info_1491_ = lean_ctor_get(v_sep_1487_, 0);
v_fn_1492_ = lean_ctor_get(v_sep_1487_, 1);
v_isSharedCheck_1502_ = !lean_is_exclusive(v_sep_1487_);
if (v_isSharedCheck_1502_ == 0)
{
v___x_1494_ = v_sep_1487_;
v_isShared_1495_ = v_isSharedCheck_1502_;
goto v_resetjp_1493_;
}
else
{
lean_inc(v_fn_1492_);
lean_inc(v_info_1491_);
lean_dec(v_sep_1487_);
v___x_1494_ = lean_box(0);
v_isShared_1495_ = v_isSharedCheck_1502_;
goto v_resetjp_1493_;
}
v_resetjp_1493_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1500_; 
v___x_1496_ = l_Lean_Parser_sepByInfo(v_info_1489_, v_info_1491_);
v___x_1497_ = lean_box(v_allowTrailingSep_1488_);
v___x_1498_ = lean_alloc_closure((void*)(l_Lean_Parser_sepByFn___boxed), 5, 3);
lean_closure_set(v___x_1498_, 0, v___x_1497_);
lean_closure_set(v___x_1498_, 1, v_fn_1490_);
lean_closure_set(v___x_1498_, 2, v_fn_1492_);
if (v_isShared_1495_ == 0)
{
lean_ctor_set(v___x_1494_, 1, v___x_1498_);
lean_ctor_set(v___x_1494_, 0, v___x_1496_);
v___x_1500_ = v___x_1494_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1501_; 
v_reuseFailAlloc_1501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1501_, 0, v___x_1496_);
lean_ctor_set(v_reuseFailAlloc_1501_, 1, v___x_1498_);
v___x_1500_ = v_reuseFailAlloc_1501_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
return v___x_1500_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByNoAntiquot___boxed(lean_object* v_p_1503_, lean_object* v_sep_1504_, lean_object* v_allowTrailingSep_1505_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1506_; lean_object* v_res_1507_; 
v_allowTrailingSep_boxed_1506_ = lean_unbox(v_allowTrailingSep_1505_);
v_res_1507_ = l_Lean_Parser_sepByNoAntiquot(v_p_1503_, v_sep_1504_, v_allowTrailingSep_boxed_1506_);
return v_res_1507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot(lean_object* v_p_1508_, lean_object* v_sep_1509_, uint8_t v_allowTrailingSep_1510_){
_start:
{
lean_object* v_info_1511_; lean_object* v_fn_1512_; lean_object* v_info_1513_; lean_object* v_fn_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1524_; 
v_info_1511_ = lean_ctor_get(v_p_1508_, 0);
lean_inc_ref(v_info_1511_);
v_fn_1512_ = lean_ctor_get(v_p_1508_, 1);
lean_inc_ref(v_fn_1512_);
lean_dec_ref(v_p_1508_);
v_info_1513_ = lean_ctor_get(v_sep_1509_, 0);
v_fn_1514_ = lean_ctor_get(v_sep_1509_, 1);
v_isSharedCheck_1524_ = !lean_is_exclusive(v_sep_1509_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1516_ = v_sep_1509_;
v_isShared_1517_ = v_isSharedCheck_1524_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_fn_1514_);
lean_inc(v_info_1513_);
lean_dec(v_sep_1509_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1524_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1522_; 
v___x_1518_ = l_Lean_Parser_sepBy1Info(v_info_1511_, v_info_1513_);
v___x_1519_ = lean_box(v_allowTrailingSep_1510_);
v___x_1520_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1Fn___boxed), 5, 3);
lean_closure_set(v___x_1520_, 0, v___x_1519_);
lean_closure_set(v___x_1520_, 1, v_fn_1512_);
lean_closure_set(v___x_1520_, 2, v_fn_1514_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 1, v___x_1520_);
lean_ctor_set(v___x_1516_, 0, v___x_1518_);
v___x_1522_ = v___x_1516_;
goto v_reusejp_1521_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1518_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v___x_1520_);
v___x_1522_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1521_;
}
v_reusejp_1521_:
{
return v___x_1522_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1NoAntiquot___boxed(lean_object* v_p_1525_, lean_object* v_sep_1526_, lean_object* v_allowTrailingSep_1527_){
_start:
{
uint8_t v_allowTrailingSep_boxed_1528_; lean_object* v_res_1529_; 
v_allowTrailingSep_boxed_1528_ = lean_unbox(v_allowTrailingSep_1527_);
v_res_1529_ = l_Lean_Parser_sepBy1NoAntiquot(v_p_1525_, v_sep_1526_, v_allowTrailingSep_boxed_1528_);
return v_res_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfFn(lean_object* v_p_1530_, lean_object* v_f_1531_, lean_object* v_c_1532_, lean_object* v_s_1533_){
_start:
{
lean_object* v_s_1534_; lean_object* v_stxStack_1535_; lean_object* v_errorMsg_1536_; lean_object* v___x_1537_; uint8_t v___x_1538_; 
v_s_1534_ = lean_apply_2(v_p_1530_, v_c_1532_, v_s_1533_);
v_stxStack_1535_ = lean_ctor_get(v_s_1534_, 0);
lean_inc_ref(v_stxStack_1535_);
v_errorMsg_1536_ = lean_ctor_get(v_s_1534_, 4);
lean_inc(v_errorMsg_1536_);
v___x_1537_ = lean_box(0);
v___x_1538_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1536_, v___x_1537_);
if (v___x_1538_ == 0)
{
lean_dec_ref(v_stxStack_1535_);
lean_dec_ref(v_f_1531_);
return v_s_1534_;
}
else
{
uint8_t v___x_1539_; lean_object* v_stx_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1539_ = 0;
v_stx_1540_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1535_);
lean_dec_ref(v_stxStack_1535_);
v___x_1541_ = l_Lean_Parser_ParserState_popSyntax(v_s_1534_);
v___x_1542_ = lean_apply_1(v_f_1531_, v_stx_1540_);
v___x_1543_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1541_, v___x_1542_, v___x_1539_);
return v___x_1543_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOfInfo(lean_object* v_p_1544_){
_start:
{
lean_object* v_collectTokens_1545_; lean_object* v_collectKinds_1546_; lean_object* v___x_1548_; uint8_t v_isShared_1549_; uint8_t v_isSharedCheck_1554_; 
v_collectTokens_1545_ = lean_ctor_get(v_p_1544_, 0);
v_collectKinds_1546_ = lean_ctor_get(v_p_1544_, 1);
v_isSharedCheck_1554_ = !lean_is_exclusive(v_p_1544_);
if (v_isSharedCheck_1554_ == 0)
{
lean_object* v_unused_1555_; 
v_unused_1555_ = lean_ctor_get(v_p_1544_, 2);
lean_dec(v_unused_1555_);
v___x_1548_ = v_p_1544_;
v_isShared_1549_ = v_isSharedCheck_1554_;
goto v_resetjp_1547_;
}
else
{
lean_inc(v_collectKinds_1546_);
lean_inc(v_collectTokens_1545_);
lean_dec(v_p_1544_);
v___x_1548_ = lean_box(0);
v_isShared_1549_ = v_isSharedCheck_1554_;
goto v_resetjp_1547_;
}
v_resetjp_1547_:
{
lean_object* v___x_1550_; lean_object* v___x_1552_; 
v___x_1550_ = lean_box(1);
if (v_isShared_1549_ == 0)
{
lean_ctor_set(v___x_1548_, 2, v___x_1550_);
v___x_1552_ = v___x_1548_;
goto v_reusejp_1551_;
}
else
{
lean_object* v_reuseFailAlloc_1553_; 
v_reuseFailAlloc_1553_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1553_, 0, v_collectTokens_1545_);
lean_ctor_set(v_reuseFailAlloc_1553_, 1, v_collectKinds_1546_);
lean_ctor_set(v_reuseFailAlloc_1553_, 2, v___x_1550_);
v___x_1552_ = v_reuseFailAlloc_1553_;
goto v_reusejp_1551_;
}
v_reusejp_1551_:
{
return v___x_1552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResultOf(lean_object* v_p_1556_, lean_object* v_f_1557_){
_start:
{
lean_object* v_info_1558_; lean_object* v_fn_1559_; lean_object* v___x_1561_; uint8_t v_isShared_1562_; uint8_t v_isSharedCheck_1568_; 
v_info_1558_ = lean_ctor_get(v_p_1556_, 0);
v_fn_1559_ = lean_ctor_get(v_p_1556_, 1);
v_isSharedCheck_1568_ = !lean_is_exclusive(v_p_1556_);
if (v_isSharedCheck_1568_ == 0)
{
v___x_1561_ = v_p_1556_;
v_isShared_1562_ = v_isSharedCheck_1568_;
goto v_resetjp_1560_;
}
else
{
lean_inc(v_fn_1559_);
lean_inc(v_info_1558_);
lean_dec(v_p_1556_);
v___x_1561_ = lean_box(0);
v_isShared_1562_ = v_isSharedCheck_1568_;
goto v_resetjp_1560_;
}
v_resetjp_1560_:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1566_; 
v___x_1563_ = l_Lean_Parser_withResultOfInfo(v_info_1558_);
v___x_1564_ = lean_alloc_closure((void*)(l_Lean_Parser_withResultOfFn), 4, 2);
lean_closure_set(v___x_1564_, 0, v_fn_1559_);
lean_closure_set(v___x_1564_, 1, v_f_1557_);
if (v_isShared_1562_ == 0)
{
lean_ctor_set(v___x_1561_, 1, v___x_1564_);
lean_ctor_set(v___x_1561_, 0, v___x_1563_);
v___x_1566_ = v___x_1561_;
goto v_reusejp_1565_;
}
else
{
lean_object* v_reuseFailAlloc_1567_; 
v_reuseFailAlloc_1567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1567_, 0, v___x_1563_);
lean_ctor_set(v_reuseFailAlloc_1567_, 1, v___x_1564_);
v___x_1566_ = v_reuseFailAlloc_1567_;
goto v_reusejp_1565_;
}
v_reusejp_1565_:
{
return v___x_1566_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0(lean_object* v_stx_1569_){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; uint8_t v___x_1572_; 
v___x_1570_ = l_Lean_Syntax_getNumArgs(v_stx_1569_);
v___x_1571_ = lean_unsigned_to_nat(1u);
v___x_1572_ = lean_nat_dec_eq(v___x_1570_, v___x_1571_);
lean_dec(v___x_1570_);
if (v___x_1572_ == 0)
{
lean_inc(v_stx_1569_);
return v_stx_1569_;
}
else
{
lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1573_ = lean_unsigned_to_nat(0u);
v___x_1574_ = l_Lean_Syntax_getArg(v_stx_1569_, v___x_1573_);
return v___x_1574_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox___lam__0___boxed(lean_object* v_stx_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l_Lean_Parser_many1Unbox___lam__0(v_stx_1575_);
lean_dec(v_stx_1575_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_many1Unbox(lean_object* v_p_1578_){
_start:
{
lean_object* v___f_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; 
v___f_1579_ = ((lean_object*)(l_Lean_Parser_many1Unbox___closed__0));
v___x_1580_ = l_Lean_Parser_many1NoAntiquot(v_p_1578_);
v___x_1581_ = l_Lean_Parser_withResultOf(v___x_1580_, v___f_1579_);
return v___x_1581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn(lean_object* v_p_1582_, lean_object* v_errorMsg_1583_, lean_object* v_c_1584_, lean_object* v_s_1585_){
_start:
{
lean_object* v_pos_1586_; lean_object* v_toInputContext_1587_; uint8_t v___x_1588_; 
v_pos_1586_ = lean_ctor_get(v_s_1585_, 2);
v_toInputContext_1587_ = lean_ctor_get(v_c_1584_, 0);
v___x_1588_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1587_, v_pos_1586_);
if (v___x_1588_ == 0)
{
lean_object* v_inputString_1589_; uint32_t v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; 
v_inputString_1589_ = lean_ctor_get(v_toInputContext_1587_, 0);
v___x_1590_ = lean_string_utf8_get_fast(v_inputString_1589_, v_pos_1586_);
v___x_1591_ = lean_box_uint32(v___x_1590_);
v___x_1592_ = lean_apply_1(v_p_1582_, v___x_1591_);
v___x_1593_ = lean_unbox(v___x_1592_);
if (v___x_1593_ == 0)
{
uint8_t v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1594_ = 1;
v___x_1595_ = lean_box(0);
v___x_1596_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1585_, v_errorMsg_1583_, v___x_1595_, v___x_1594_);
return v___x_1596_;
}
else
{
lean_object* v___x_1597_; 
lean_inc(v_pos_1586_);
lean_dec_ref(v_errorMsg_1583_);
v___x_1597_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1585_, v_c_1584_, v_pos_1586_);
lean_dec(v_pos_1586_);
return v___x_1597_;
}
}
else
{
lean_object* v___x_1598_; lean_object* v___x_1599_; 
lean_dec_ref(v_errorMsg_1583_);
lean_dec_ref(v_p_1582_);
v___x_1598_ = lean_box(0);
v___x_1599_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1585_, v___x_1598_);
return v___x_1599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object* v_p_1600_, lean_object* v_errorMsg_1601_, lean_object* v_c_1602_, lean_object* v_s_1603_){
_start:
{
lean_object* v_res_1604_; 
v_res_1604_ = l_Lean_Parser_satisfyFn(v_p_1600_, v_errorMsg_1601_, v_c_1602_, v_s_1603_);
lean_dec_ref(v_c_1602_);
return v_res_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn(lean_object* v_p_1605_, lean_object* v_c_1606_, lean_object* v_s_1607_){
_start:
{
lean_object* v_pos_1608_; lean_object* v_toInputContext_1609_; uint8_t v___x_1610_; 
v_pos_1608_ = lean_ctor_get(v_s_1607_, 2);
v_toInputContext_1609_ = lean_ctor_get(v_c_1606_, 0);
v___x_1610_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1609_, v_pos_1608_);
if (v___x_1610_ == 0)
{
lean_object* v_inputString_1611_; uint32_t v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; uint8_t v___x_1615_; 
v_inputString_1611_ = lean_ctor_get(v_toInputContext_1609_, 0);
v___x_1612_ = lean_string_utf8_get_fast(v_inputString_1611_, v_pos_1608_);
v___x_1613_ = lean_box_uint32(v___x_1612_);
lean_inc_ref(v_p_1605_);
v___x_1614_ = lean_apply_1(v_p_1605_, v___x_1613_);
v___x_1615_ = lean_unbox(v___x_1614_);
if (v___x_1615_ == 0)
{
lean_object* v___x_1616_; 
lean_inc(v_pos_1608_);
v___x_1616_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1607_, v_c_1606_, v_pos_1608_);
lean_dec(v_pos_1608_);
v_s_1607_ = v___x_1616_;
goto _start;
}
else
{
lean_dec_ref(v_p_1605_);
return v_s_1607_;
}
}
else
{
lean_dec_ref(v_p_1605_);
return v_s_1607_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeUntilFn___boxed(lean_object* v_p_1618_, lean_object* v_c_1619_, lean_object* v_s_1620_){
_start:
{
lean_object* v_res_1621_; 
v_res_1621_ = l_Lean_Parser_takeUntilFn(v_p_1618_, v_c_1619_, v_s_1620_);
lean_dec_ref(v_c_1619_);
return v_res_1621_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_takeWhileFn___lam__0(lean_object* v_p_1622_, uint32_t v_c_1623_){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1624_ = lean_box_uint32(v_c_1623_);
v___x_1625_ = lean_apply_1(v_p_1622_, v___x_1624_);
v___x_1626_ = lean_unbox(v___x_1625_);
if (v___x_1626_ == 0)
{
uint8_t v___x_1627_; 
v___x_1627_ = 1;
return v___x_1627_;
}
else
{
uint8_t v___x_1628_; 
v___x_1628_ = 0;
return v___x_1628_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___lam__0___boxed(lean_object* v_p_1629_, lean_object* v_c_1630_){
_start:
{
uint32_t v_c_boxed_1631_; uint8_t v_res_1632_; lean_object* v_r_1633_; 
v_c_boxed_1631_ = lean_unbox_uint32(v_c_1630_);
lean_dec(v_c_1630_);
v_res_1632_ = l_Lean_Parser_takeWhileFn___lam__0(v_p_1629_, v_c_boxed_1631_);
v_r_1633_ = lean_box(v_res_1632_);
return v_r_1633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn(lean_object* v_p_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v___f_1637_; lean_object* v___x_1638_; 
v___f_1637_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1637_, 0, v_p_1634_);
v___x_1638_ = l_Lean_Parser_takeUntilFn(v___f_1637_, v_a_1635_, v_a_1636_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhileFn___boxed(lean_object* v_p_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_){
_start:
{
lean_object* v_res_1642_; 
v_res_1642_ = l_Lean_Parser_takeWhileFn(v_p_1639_, v_a_1640_, v_a_1641_);
lean_dec_ref(v_a_1640_);
return v_res_1642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeWhile1Fn(lean_object* v_p_1643_, lean_object* v_errorMsg_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; 
lean_inc_ref(v_p_1643_);
v___x_1647_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn___boxed), 4, 2);
lean_closure_set(v___x_1647_, 0, v_p_1643_);
lean_closure_set(v___x_1647_, 1, v_errorMsg_1644_);
v___x_1648_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhileFn___boxed), 3, 1);
lean_closure_set(v___x_1648_, 0, v_p_1643_);
v___x_1649_ = l_Lean_Parser_andthenFn(v___x_1647_, v___x_1648_, v_a_1645_, v_a_1646_);
return v___x_1649_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(uint8_t v_pushMissingOnError_1651_, lean_object* v_s_1652_){
_start:
{
lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1653_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___closed__0));
v___x_1654_ = lean_box(0);
v___x_1655_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1652_, v___x_1653_, v___x_1654_, v_pushMissingOnError_1651_);
return v___x_1655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi___boxed(lean_object* v_pushMissingOnError_1656_, lean_object* v_s_1657_){
_start:
{
uint8_t v_pushMissingOnError_boxed_1658_; lean_object* v_res_1659_; 
v_pushMissingOnError_boxed_1658_ = lean_unbox(v_pushMissingOnError_1656_);
v_res_1659_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_boxed_1658_, v_s_1657_);
return v_res_1659_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock(uint8_t v_pushMissingOnError_1660_, lean_object* v_nesting_1661_, lean_object* v_c_1662_, lean_object* v_s_1663_){
_start:
{
lean_object* v_pos_1664_; lean_object* v_toInputContext_1665_; uint8_t v___x_1666_; 
v_pos_1664_ = lean_ctor_get(v_s_1663_, 2);
v_toInputContext_1665_ = lean_ctor_get(v_c_1662_, 0);
v___x_1666_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1665_, v_pos_1664_);
if (v___x_1666_ == 0)
{
lean_object* v_inputString_1667_; uint32_t v_curr_1668_; lean_object* v_i_1669_; uint32_t v___x_1670_; uint8_t v___x_1671_; 
v_inputString_1667_ = lean_ctor_get(v_toInputContext_1665_, 0);
v_curr_1668_ = lean_string_utf8_get_fast(v_inputString_1667_, v_pos_1664_);
v_i_1669_ = lean_string_utf8_next_fast(v_inputString_1667_, v_pos_1664_);
v___x_1670_ = 45;
v___x_1671_ = lean_uint32_dec_eq(v_curr_1668_, v___x_1670_);
if (v___x_1671_ == 0)
{
uint32_t v___x_1672_; uint8_t v___x_1673_; 
v___x_1672_ = 47;
v___x_1673_ = lean_uint32_dec_eq(v_curr_1668_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
v___x_1674_ = l_Lean_Parser_ParserState_setPos(v_s_1663_, v_i_1669_);
v_s_1663_ = v___x_1674_;
goto _start;
}
else
{
uint8_t v___x_1676_; 
v___x_1676_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1665_, v_i_1669_);
if (v___x_1676_ == 0)
{
uint32_t v_curr_1677_; uint8_t v___x_1678_; 
v_curr_1677_ = lean_string_utf8_get_fast(v_inputString_1667_, v_i_1669_);
v___x_1678_ = lean_uint32_dec_eq(v_curr_1677_, v___x_1670_);
if (v___x_1678_ == 0)
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Lean_Parser_ParserState_setPos(v_s_1663_, v_i_1669_);
v_s_1663_ = v___x_1679_;
goto _start;
}
else
{
lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1681_ = lean_unsigned_to_nat(1u);
v___x_1682_ = lean_nat_add(v_nesting_1661_, v___x_1681_);
lean_dec(v_nesting_1661_);
v___x_1683_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1663_, v_c_1662_, v_i_1669_);
v_nesting_1661_ = v___x_1682_;
v_s_1663_ = v___x_1683_;
goto _start;
}
}
else
{
lean_object* v___x_1685_; 
lean_dec(v_nesting_1661_);
v___x_1685_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1660_, v_s_1663_);
return v___x_1685_;
}
}
}
else
{
uint8_t v___x_1686_; 
v___x_1686_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1665_, v_i_1669_);
if (v___x_1686_ == 0)
{
uint32_t v_curr_1687_; uint32_t v___x_1688_; uint8_t v___x_1689_; 
v_curr_1687_ = lean_string_utf8_get_fast(v_inputString_1667_, v_i_1669_);
v___x_1688_ = 47;
v___x_1689_ = lean_uint32_dec_eq(v_curr_1687_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lean_Parser_ParserState_setPos(v_s_1663_, v_i_1669_);
v_s_1663_ = v___x_1690_;
goto _start;
}
else
{
lean_object* v___x_1692_; uint8_t v___x_1693_; 
v___x_1692_ = lean_unsigned_to_nat(1u);
v___x_1693_ = lean_nat_dec_eq(v_nesting_1661_, v___x_1692_);
if (v___x_1693_ == 0)
{
lean_object* v___x_1694_; lean_object* v___x_1695_; 
v___x_1694_ = lean_nat_sub(v_nesting_1661_, v___x_1692_);
lean_dec(v_nesting_1661_);
v___x_1695_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1663_, v_c_1662_, v_i_1669_);
v_nesting_1661_ = v___x_1694_;
v_s_1663_ = v___x_1695_;
goto _start;
}
else
{
lean_object* v___x_1697_; 
lean_dec(v_nesting_1661_);
v___x_1697_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1663_, v_c_1662_, v_i_1669_);
return v___x_1697_;
}
}
}
else
{
lean_object* v___x_1698_; 
lean_dec(v_nesting_1661_);
v___x_1698_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1660_, v_s_1663_);
return v___x_1698_;
}
}
}
else
{
lean_object* v___x_1699_; 
lean_dec(v_nesting_1661_);
v___x_1699_ = l___private_Lean_Parser_Basic_0__Lean_Parser_finishCommentBlock_eoi(v_pushMissingOnError_1660_, v_s_1663_);
return v___x_1699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_finishCommentBlock___boxed(lean_object* v_pushMissingOnError_1700_, lean_object* v_nesting_1701_, lean_object* v_c_1702_, lean_object* v_s_1703_){
_start:
{
uint8_t v_pushMissingOnError_boxed_1704_; lean_object* v_res_1705_; 
v_pushMissingOnError_boxed_1704_ = lean_unbox(v_pushMissingOnError_1700_);
v_res_1705_ = l_Lean_Parser_finishCommentBlock(v_pushMissingOnError_boxed_1704_, v_nesting_1701_, v_c_1702_, v_s_1703_);
lean_dec_ref(v_c_1702_);
return v_res_1705_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_whitespace___lam__0(uint32_t v_c_1706_){
_start:
{
uint32_t v___x_1707_; uint8_t v___x_1708_; 
v___x_1707_ = 10;
v___x_1708_ = lean_uint32_dec_eq(v_c_1706_, v___x_1707_);
return v___x_1708_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace___lam__0___boxed(lean_object* v_c_1709_){
_start:
{
uint32_t v_c_boxed_1710_; uint8_t v_res_1711_; lean_object* v_r_1712_; 
v_c_boxed_1710_ = lean_unbox_uint32(v_c_1709_);
lean_dec(v_c_1709_);
v_res_1711_ = l_Lean_Parser_whitespace___lam__0(v_c_boxed_1710_);
v_r_1712_ = lean_box(v_res_1711_);
return v_r_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_whitespace(lean_object* v_c_1718_, lean_object* v_s_1719_){
_start:
{
lean_object* v_pos_1720_; lean_object* v_toInputContext_1724_; uint8_t v___x_1725_; 
v_pos_1720_ = lean_ctor_get(v_s_1719_, 2);
v_toInputContext_1724_ = lean_ctor_get(v_c_1718_, 0);
v___x_1725_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1724_, v_pos_1720_);
if (v___x_1725_ == 0)
{
lean_object* v_inputString_1726_; uint32_t v_curr_1727_; uint32_t v___x_1728_; uint8_t v___x_1729_; 
v_inputString_1726_ = lean_ctor_get(v_toInputContext_1724_, 0);
v_curr_1727_ = lean_string_utf8_get_fast(v_inputString_1726_, v_pos_1720_);
v___x_1728_ = 9;
v___x_1729_ = lean_uint32_dec_eq(v_curr_1727_, v___x_1728_);
if (v___x_1729_ == 0)
{
uint32_t v___x_1730_; uint8_t v___x_1731_; 
v___x_1730_ = 13;
v___x_1731_ = lean_uint32_dec_eq(v_curr_1727_, v___x_1730_);
if (v___x_1731_ == 0)
{
uint8_t v___y_1733_; uint8_t v___y_1760_; uint32_t v___x_1763_; uint8_t v___x_1764_; 
v___x_1763_ = 32;
v___x_1764_ = lean_uint32_dec_eq(v_curr_1727_, v___x_1763_);
if (v___x_1764_ == 0)
{
v___y_1760_ = v___x_1729_;
goto v___jp_1759_;
}
else
{
v___y_1760_ = v___x_1764_;
goto v___jp_1759_;
}
v___jp_1732_:
{
if (v___y_1733_ == 0)
{
uint32_t v___x_1734_; uint8_t v___x_1735_; 
v___x_1734_ = 45;
v___x_1735_ = lean_uint32_dec_eq(v_curr_1727_, v___x_1734_);
if (v___x_1735_ == 0)
{
uint32_t v___x_1736_; uint8_t v___x_1737_; 
v___x_1736_ = 47;
v___x_1737_ = lean_uint32_dec_eq(v_curr_1727_, v___x_1736_);
if (v___x_1737_ == 0)
{
lean_dec_ref(v_c_1718_);
return v_s_1719_;
}
else
{
lean_object* v_i_1738_; uint32_t v_curr_1739_; uint8_t v___x_1740_; 
v_i_1738_ = lean_string_utf8_next_fast(v_inputString_1726_, v_pos_1720_);
v_curr_1739_ = lean_string_utf8_get(v_inputString_1726_, v_i_1738_);
v___x_1740_ = lean_uint32_dec_eq(v_curr_1739_, v___x_1734_);
if (v___x_1740_ == 0)
{
lean_dec_ref(v_c_1718_);
return v_s_1719_;
}
else
{
lean_object* v_i_1741_; uint32_t v_curr_1742_; uint8_t v___x_1743_; 
v_i_1741_ = lean_string_utf8_next(v_inputString_1726_, v_i_1738_);
v_curr_1742_ = lean_string_utf8_get(v_inputString_1726_, v_i_1741_);
v___x_1743_ = lean_uint32_dec_eq(v_curr_1742_, v___x_1734_);
if (v___x_1743_ == 0)
{
uint32_t v___x_1744_; uint8_t v___x_1745_; 
v___x_1744_ = 33;
v___x_1745_ = lean_uint32_dec_eq(v_curr_1742_, v___x_1744_);
if (v___x_1745_ == 0)
{
lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1746_ = lean_unsigned_to_nat(1u);
v___x_1747_ = lean_box(v___x_1745_);
v___x_1748_ = lean_alloc_closure((void*)(l_Lean_Parser_finishCommentBlock___boxed), 4, 2);
lean_closure_set(v___x_1748_, 0, v___x_1747_);
lean_closure_set(v___x_1748_, 1, v___x_1746_);
v___x_1749_ = lean_alloc_closure((void*)(l_Lean_Parser_whitespace), 2, 0);
v___x_1750_ = l_Lean_Parser_ParserState_next(v_s_1719_, v_c_1718_, v_i_1741_);
lean_dec(v_i_1741_);
v___x_1751_ = l_Lean_Parser_andthenFn(v___x_1748_, v___x_1749_, v_c_1718_, v___x_1750_);
return v___x_1751_;
}
else
{
lean_dec(v_i_1741_);
lean_dec_ref(v_c_1718_);
return v_s_1719_;
}
}
else
{
lean_dec(v_i_1741_);
lean_dec_ref(v_c_1718_);
return v_s_1719_;
}
}
}
}
else
{
lean_object* v_i_1752_; uint32_t v_curr_1753_; uint8_t v___x_1754_; 
v_i_1752_ = lean_string_utf8_next_fast(v_inputString_1726_, v_pos_1720_);
v_curr_1753_ = lean_string_utf8_get(v_inputString_1726_, v_i_1752_);
v___x_1754_ = lean_uint32_dec_eq(v_curr_1753_, v___x_1734_);
if (v___x_1754_ == 0)
{
lean_dec_ref(v_c_1718_);
return v_s_1719_;
}
else
{
lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1755_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__1));
v___x_1756_ = lean_alloc_closure((void*)(l_Lean_Parser_whitespace), 2, 0);
v___x_1757_ = l_Lean_Parser_ParserState_next(v_s_1719_, v_c_1718_, v_i_1752_);
v___x_1758_ = l_Lean_Parser_andthenFn(v___x_1755_, v___x_1756_, v_c_1718_, v___x_1757_);
return v___x_1758_;
}
}
}
else
{
lean_inc(v_pos_1720_);
goto v___jp_1721_;
}
}
v___jp_1759_:
{
if (v___y_1760_ == 0)
{
if (v___x_1731_ == 0)
{
uint32_t v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = 10;
v___x_1762_ = lean_uint32_dec_eq(v_curr_1727_, v___x_1761_);
v___y_1733_ = v___x_1762_;
goto v___jp_1732_;
}
else
{
v___y_1733_ = v___x_1731_;
goto v___jp_1732_;
}
}
else
{
lean_inc(v_pos_1720_);
goto v___jp_1721_;
}
}
}
else
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
lean_dec_ref(v_c_1718_);
v___x_1765_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__2));
v___x_1766_ = lean_box(0);
v___x_1767_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1719_, v___x_1765_, v___x_1766_, v___x_1729_);
return v___x_1767_;
}
}
else
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
lean_dec_ref(v_c_1718_);
v___x_1768_ = ((lean_object*)(l_Lean_Parser_whitespace___closed__3));
v___x_1769_ = lean_box(0);
v___x_1770_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1719_, v___x_1768_, v___x_1769_, v___x_1725_);
return v___x_1770_;
}
}
else
{
lean_dec_ref(v_c_1718_);
return v_s_1719_;
}
v___jp_1721_:
{
lean_object* v___x_1722_; 
v___x_1722_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1719_, v_c_1718_, v_pos_1720_);
lean_dec(v_pos_1720_);
v_s_1719_ = v___x_1722_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt(lean_object* v_c_1771_, lean_object* v_p_1772_){
_start:
{
lean_object* v_toInputContext_1773_; lean_object* v_inputString_1774_; lean_object* v_endPos_1775_; uint8_t v___x_1776_; 
v_toInputContext_1773_ = lean_ctor_get(v_c_1771_, 0);
v_inputString_1774_ = lean_ctor_get(v_toInputContext_1773_, 0);
v_endPos_1775_ = lean_ctor_get(v_toInputContext_1773_, 3);
v___x_1776_ = lean_nat_dec_le(v_p_1772_, v_endPos_1775_);
if (v___x_1776_ == 0)
{
lean_object* v___x_1777_; 
lean_inc(v_endPos_1775_);
lean_inc_ref(v_inputString_1774_);
v___x_1777_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1777_, 0, v_inputString_1774_);
lean_ctor_set(v___x_1777_, 1, v_p_1772_);
lean_ctor_set(v___x_1777_, 2, v_endPos_1775_);
return v___x_1777_;
}
else
{
lean_object* v___x_1778_; 
lean_inc(v_p_1772_);
lean_inc_ref(v_inputString_1774_);
v___x_1778_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1778_, 0, v_inputString_1774_);
lean_ctor_set(v___x_1778_, 1, v_p_1772_);
lean_ctor_set(v___x_1778_, 2, v_p_1772_);
return v___x_1778_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_mkEmptySubstringAt___boxed(lean_object* v_c_1779_, lean_object* v_p_1780_){
_start:
{
lean_object* v_res_1781_; 
v_res_1781_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1779_, v_p_1780_);
lean_dec_ref(v_c_1779_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(lean_object* v_startPos_1782_, uint8_t v_trailingWs_1783_, lean_object* v_c_1784_, lean_object* v_s_1785_){
_start:
{
lean_object* v_toInputContext_1786_; lean_object* v_pos_1787_; lean_object* v_inputString_1788_; lean_object* v_endPos_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1818_; 
v_toInputContext_1786_ = lean_ctor_get(v_c_1784_, 0);
lean_inc_ref(v_toInputContext_1786_);
v_pos_1787_ = lean_ctor_get(v_s_1785_, 2);
v_inputString_1788_ = lean_ctor_get(v_toInputContext_1786_, 0);
v_endPos_1789_ = lean_ctor_get(v_toInputContext_1786_, 3);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_toInputContext_1786_);
if (v_isSharedCheck_1818_ == 0)
{
lean_object* v_unused_1819_; lean_object* v_unused_1820_; 
v_unused_1819_ = lean_ctor_get(v_toInputContext_1786_, 2);
lean_dec(v_unused_1819_);
v_unused_1820_ = lean_ctor_get(v_toInputContext_1786_, 1);
lean_dec(v_unused_1820_);
v___x_1791_ = v_toInputContext_1786_;
v_isShared_1792_ = v_isSharedCheck_1818_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_endPos_1789_);
lean_inc(v_inputString_1788_);
lean_dec(v_toInputContext_1786_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1818_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
lean_object* v_leading_1793_; lean_object* v_val_1794_; 
lean_inc(v_startPos_1782_);
v_leading_1793_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1784_, v_startPos_1782_);
v_val_1794_ = lean_string_utf8_extract(v_inputString_1788_, v_startPos_1782_, v_pos_1787_);
if (v_trailingWs_1783_ == 0)
{
lean_object* v_trailing_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1799_; 
lean_dec(v_endPos_1789_);
lean_dec_ref(v_inputString_1788_);
lean_inc(v_pos_1787_);
v_trailing_1795_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_1784_, v_pos_1787_);
lean_dec_ref(v_c_1784_);
v___x_1796_ = lean_string_utf8_byte_size(v_val_1794_);
v___x_1797_ = lean_nat_add(v_startPos_1782_, v___x_1796_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 3, v___x_1797_);
lean_ctor_set(v___x_1791_, 2, v_trailing_1795_);
lean_ctor_set(v___x_1791_, 1, v_startPos_1782_);
lean_ctor_set(v___x_1791_, 0, v_leading_1793_);
v___x_1799_ = v___x_1791_;
goto v_reusejp_1798_;
}
else
{
lean_object* v_reuseFailAlloc_1802_; 
v_reuseFailAlloc_1802_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1802_, 0, v_leading_1793_);
lean_ctor_set(v_reuseFailAlloc_1802_, 1, v_startPos_1782_);
lean_ctor_set(v_reuseFailAlloc_1802_, 2, v_trailing_1795_);
lean_ctor_set(v_reuseFailAlloc_1802_, 3, v___x_1797_);
v___x_1799_ = v_reuseFailAlloc_1802_;
goto v_reusejp_1798_;
}
v_reusejp_1798_:
{
lean_object* v_atom_1800_; lean_object* v___x_1801_; 
v_atom_1800_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_1800_, 0, v___x_1799_);
lean_ctor_set(v_atom_1800_, 1, v_val_1794_);
v___x_1801_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1785_, v_atom_1800_, v_trailingWs_1783_);
return v___x_1801_;
}
}
else
{
lean_object* v_s_1803_; lean_object* v___y_1805_; lean_object* v_pos_1814_; uint8_t v___x_1815_; 
lean_inc(v_pos_1787_);
v_s_1803_ = l_Lean_Parser_whitespace(v_c_1784_, v_s_1785_);
v_pos_1814_ = lean_ctor_get(v_s_1803_, 2);
lean_inc(v_pos_1814_);
v___x_1815_ = lean_nat_dec_le(v_pos_1814_, v_endPos_1789_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; 
lean_dec(v_pos_1814_);
v___x_1816_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1816_, 0, v_inputString_1788_);
lean_ctor_set(v___x_1816_, 1, v_pos_1787_);
lean_ctor_set(v___x_1816_, 2, v_endPos_1789_);
v___y_1805_ = v___x_1816_;
goto v___jp_1804_;
}
else
{
lean_object* v___x_1817_; 
lean_dec(v_endPos_1789_);
v___x_1817_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1817_, 0, v_inputString_1788_);
lean_ctor_set(v___x_1817_, 1, v_pos_1787_);
lean_ctor_set(v___x_1817_, 2, v_pos_1814_);
v___y_1805_ = v___x_1817_;
goto v___jp_1804_;
}
v___jp_1804_:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
v___x_1806_ = lean_string_utf8_byte_size(v_val_1794_);
v___x_1807_ = lean_nat_add(v_startPos_1782_, v___x_1806_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 3, v___x_1807_);
lean_ctor_set(v___x_1791_, 2, v___y_1805_);
lean_ctor_set(v___x_1791_, 1, v_startPos_1782_);
lean_ctor_set(v___x_1791_, 0, v_leading_1793_);
v___x_1809_ = v___x_1791_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1813_; 
v_reuseFailAlloc_1813_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1813_, 0, v_leading_1793_);
lean_ctor_set(v_reuseFailAlloc_1813_, 1, v_startPos_1782_);
lean_ctor_set(v_reuseFailAlloc_1813_, 2, v___y_1805_);
lean_ctor_set(v_reuseFailAlloc_1813_, 3, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1813_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v_atom_1810_; uint8_t v___x_1811_; lean_object* v___x_1812_; 
v_atom_1810_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_1810_, 0, v___x_1809_);
lean_ctor_set(v_atom_1810_, 1, v_val_1794_);
v___x_1811_ = 0;
v___x_1812_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1803_, v_atom_1810_, v___x_1811_);
return v___x_1812_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux___boxed(lean_object* v_startPos_1821_, lean_object* v_trailingWs_1822_, lean_object* v_c_1823_, lean_object* v_s_1824_){
_start:
{
uint8_t v_trailingWs_boxed_1825_; lean_object* v_res_1826_; 
v_trailingWs_boxed_1825_ = lean_unbox(v_trailingWs_1822_);
v_res_1826_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(v_startPos_1821_, v_trailingWs_boxed_1825_, v_c_1823_, v_s_1824_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn(lean_object* v_p_1827_, uint8_t v_trailingWs_1828_, lean_object* v_c_1829_, lean_object* v_s_1830_){
_start:
{
lean_object* v_pos_1831_; lean_object* v_s_1832_; lean_object* v_errorMsg_1833_; lean_object* v___x_1834_; uint8_t v___x_1835_; 
v_pos_1831_ = lean_ctor_get(v_s_1830_, 2);
lean_inc(v_pos_1831_);
lean_inc_ref(v_c_1829_);
v_s_1832_ = lean_apply_2(v_p_1827_, v_c_1829_, v_s_1830_);
v_errorMsg_1833_ = lean_ctor_get(v_s_1832_, 4);
lean_inc(v_errorMsg_1833_);
v___x_1834_ = lean_box(0);
v___x_1835_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_1833_, v___x_1834_);
if (v___x_1835_ == 0)
{
lean_dec(v_pos_1831_);
lean_dec_ref(v_c_1829_);
return v_s_1832_;
}
else
{
lean_object* v___x_1836_; 
v___x_1836_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawAux(v_pos_1831_, v_trailingWs_1828_, v_c_1829_, v_s_1832_);
return v___x_1836_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawFn___boxed(lean_object* v_p_1837_, lean_object* v_trailingWs_1838_, lean_object* v_c_1839_, lean_object* v_s_1840_){
_start:
{
uint8_t v_trailingWs_boxed_1841_; lean_object* v_res_1842_; 
v_trailingWs_boxed_1841_ = lean_unbox(v_trailingWs_1838_);
v_res_1842_ = l_Lean_Parser_rawFn(v_p_1837_, v_trailingWs_boxed_1841_, v_c_1839_, v_s_1840_);
return v_res_1842_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_chFn___lam__0(uint32_t v_c_1843_, uint32_t v_d_1844_){
_start:
{
uint8_t v___x_1845_; 
v___x_1845_ = lean_uint32_dec_eq(v_c_1843_, v_d_1844_);
return v___x_1845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___lam__0___boxed(lean_object* v_c_1846_, lean_object* v_d_1847_){
_start:
{
uint32_t v_c_boxed_1848_; uint32_t v_d_boxed_1849_; uint8_t v_res_1850_; lean_object* v_r_1851_; 
v_c_boxed_1848_ = lean_unbox_uint32(v_c_1846_);
lean_dec(v_c_1846_);
v_d_boxed_1849_ = lean_unbox_uint32(v_d_1847_);
lean_dec(v_d_1847_);
v_res_1850_ = l_Lean_Parser_chFn___lam__0(v_c_boxed_1848_, v_d_boxed_1849_);
v_r_1851_ = lean_box(v_res_1850_);
return v_r_1851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn(uint32_t v_c_1854_, uint8_t v_trailingWs_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_){
_start:
{
lean_object* v___x_1858_; lean_object* v___f_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1858_ = lean_box_uint32(v_c_1854_);
v___f_1859_ = lean_alloc_closure((void*)(l_Lean_Parser_chFn___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1859_, 0, v___x_1858_);
v___x_1860_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_1861_ = ((lean_object*)(l_Lean_Parser_chFn___closed__1));
v___x_1862_ = lean_string_push(v___x_1861_, v_c_1854_);
v___x_1863_ = lean_string_append(v___x_1860_, v___x_1862_);
lean_dec_ref(v___x_1862_);
v___x_1864_ = lean_string_append(v___x_1863_, v___x_1860_);
v___x_1865_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn___boxed), 4, 2);
lean_closure_set(v___x_1865_, 0, v___f_1859_);
lean_closure_set(v___x_1865_, 1, v___x_1864_);
v___x_1866_ = l_Lean_Parser_rawFn(v___x_1865_, v_trailingWs_1855_, v_a_1856_, v_a_1857_);
return v___x_1866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_chFn___boxed(lean_object* v_c_1867_, lean_object* v_trailingWs_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
uint32_t v_c_boxed_1871_; uint8_t v_trailingWs_boxed_1872_; lean_object* v_res_1873_; 
v_c_boxed_1871_ = lean_unbox_uint32(v_c_1867_);
lean_dec(v_c_1867_);
v_trailingWs_boxed_1872_ = lean_unbox(v_trailingWs_1868_);
v_res_1873_ = l_Lean_Parser_chFn(v_c_boxed_1871_, v_trailingWs_boxed_1872_, v_a_1869_, v_a_1870_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh(uint32_t v_c_1874_, uint8_t v_trailingWs_1875_){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1876_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_1877_ = lean_box_uint32(v_c_1874_);
v___x_1878_ = lean_box(v_trailingWs_1875_);
v___x_1879_ = lean_alloc_closure((void*)(l_Lean_Parser_chFn___boxed), 4, 2);
lean_closure_set(v___x_1879_, 0, v___x_1877_);
lean_closure_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1876_);
lean_ctor_set(v___x_1880_, 1, v___x_1879_);
return v___x_1880_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawCh___boxed(lean_object* v_c_1881_, lean_object* v_trailingWs_1882_){
_start:
{
uint32_t v_c_boxed_1883_; uint8_t v_trailingWs_boxed_1884_; lean_object* v_res_1885_; 
v_c_boxed_1883_ = lean_unbox_uint32(v_c_1881_);
lean_dec(v_c_1881_);
v_trailingWs_boxed_1884_ = lean_unbox(v_trailingWs_1882_);
v_res_1885_ = l_Lean_Parser_rawCh(v_c_boxed_1883_, v_trailingWs_boxed_1884_);
return v_res_1885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn(lean_object* v_c_1887_, lean_object* v_s_1888_){
_start:
{
lean_object* v_pos_1889_; lean_object* v_toInputContext_1890_; uint8_t v___x_1891_; 
v_pos_1889_ = lean_ctor_get(v_s_1888_, 2);
v_toInputContext_1890_ = lean_ctor_get(v_c_1887_, 0);
v___x_1891_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1890_, v_pos_1889_);
if (v___x_1891_ == 0)
{
lean_object* v_inputString_1892_; uint8_t v___x_1893_; uint32_t v_curr_1894_; lean_object* v_i_1895_; uint8_t v___y_1897_; uint8_t v___y_1903_; uint8_t v___y_1910_; uint32_t v___x_1916_; uint8_t v___x_1917_; 
v_inputString_1892_ = lean_ctor_get(v_toInputContext_1890_, 0);
v___x_1893_ = 1;
v_curr_1894_ = lean_string_utf8_get_fast(v_inputString_1892_, v_pos_1889_);
v_i_1895_ = lean_string_utf8_next_fast(v_inputString_1892_, v_pos_1889_);
v___x_1916_ = 48;
v___x_1917_ = lean_uint32_dec_le(v___x_1916_, v_curr_1894_);
if (v___x_1917_ == 0)
{
v___y_1910_ = v___x_1917_;
goto v___jp_1909_;
}
else
{
uint32_t v___x_1918_; uint8_t v___x_1919_; 
v___x_1918_ = 57;
v___x_1919_ = lean_uint32_dec_le(v_curr_1894_, v___x_1918_);
v___y_1910_ = v___x_1919_;
goto v___jp_1909_;
}
v___jp_1896_:
{
if (v___y_1897_ == 0)
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v___x_1898_ = ((lean_object*)(l_Lean_Parser_hexDigitFn___closed__0));
v___x_1899_ = lean_box(0);
v___x_1900_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1888_, v___x_1898_, v___x_1899_, v___x_1893_);
return v___x_1900_;
}
else
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Lean_Parser_ParserState_setPos(v_s_1888_, v_i_1895_);
return v___x_1901_;
}
}
v___jp_1902_:
{
if (v___y_1903_ == 0)
{
uint32_t v___x_1904_; uint8_t v___x_1905_; 
v___x_1904_ = 65;
v___x_1905_ = lean_uint32_dec_le(v___x_1904_, v_curr_1894_);
if (v___x_1905_ == 0)
{
v___y_1897_ = v___x_1905_;
goto v___jp_1896_;
}
else
{
uint32_t v___x_1906_; uint8_t v___x_1907_; 
v___x_1906_ = 70;
v___x_1907_ = lean_uint32_dec_le(v_curr_1894_, v___x_1906_);
v___y_1897_ = v___x_1907_;
goto v___jp_1896_;
}
}
else
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Parser_ParserState_setPos(v_s_1888_, v_i_1895_);
return v___x_1908_;
}
}
v___jp_1909_:
{
if (v___y_1910_ == 0)
{
uint32_t v___x_1911_; uint8_t v___x_1912_; 
v___x_1911_ = 97;
v___x_1912_ = lean_uint32_dec_le(v___x_1911_, v_curr_1894_);
if (v___x_1912_ == 0)
{
v___y_1903_ = v___x_1912_;
goto v___jp_1902_;
}
else
{
uint32_t v___x_1913_; uint8_t v___x_1914_; 
v___x_1913_ = 102;
v___x_1914_ = lean_uint32_dec_le(v_curr_1894_, v___x_1913_);
v___y_1903_ = v___x_1914_;
goto v___jp_1902_;
}
}
else
{
lean_object* v___x_1915_; 
v___x_1915_ = l_Lean_Parser_ParserState_setPos(v_s_1888_, v_i_1895_);
return v___x_1915_;
}
}
}
else
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = lean_box(0);
v___x_1921_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1888_, v___x_1920_);
return v___x_1921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexDigitFn___boxed(lean_object* v_c_1922_, lean_object* v_s_1923_){
_start:
{
lean_object* v_res_1924_; 
v_res_1924_ = l_Lean_Parser_hexDigitFn(v_c_1922_, v_s_1923_);
lean_dec_ref(v_c_1922_);
return v_res_1924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn(uint8_t v_seenNewline_1927_, lean_object* v_c_1928_, lean_object* v_s_1929_){
_start:
{
lean_object* v_pos_1930_; lean_object* v_toInputContext_1934_; uint8_t v___x_1935_; 
v_pos_1930_ = lean_ctor_get(v_s_1929_, 2);
v_toInputContext_1934_ = lean_ctor_get(v_c_1928_, 0);
v___x_1935_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1934_, v_pos_1930_);
if (v___x_1935_ == 0)
{
lean_object* v_inputString_1936_; uint8_t v___x_1937_; uint8_t v___y_1939_; uint32_t v_curr_1943_; uint8_t v___y_1945_; uint32_t v___x_1950_; uint8_t v___x_1951_; 
v_inputString_1936_ = lean_ctor_get(v_toInputContext_1934_, 0);
v___x_1937_ = 1;
v_curr_1943_ = lean_string_utf8_get_fast(v_inputString_1936_, v_pos_1930_);
v___x_1950_ = 10;
v___x_1951_ = lean_uint32_dec_eq(v_curr_1943_, v___x_1950_);
if (v___x_1951_ == 0)
{
uint32_t v___x_1952_; uint8_t v___x_1953_; 
v___x_1952_ = 32;
v___x_1953_ = lean_uint32_dec_eq(v_curr_1943_, v___x_1952_);
if (v___x_1953_ == 0)
{
uint32_t v___x_1954_; uint8_t v___x_1955_; 
v___x_1954_ = 9;
v___x_1955_ = lean_uint32_dec_eq(v_curr_1943_, v___x_1954_);
v___y_1945_ = v___x_1955_;
goto v___jp_1944_;
}
else
{
v___y_1945_ = v___x_1953_;
goto v___jp_1944_;
}
}
else
{
if (v_seenNewline_1927_ == 0)
{
lean_object* v___x_1956_; 
lean_inc(v_pos_1930_);
v___x_1956_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1929_, v_c_1928_, v_pos_1930_);
lean_dec(v_pos_1930_);
v_seenNewline_1927_ = v___x_1937_;
v_s_1929_ = v___x_1956_;
goto _start;
}
else
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1958_ = ((lean_object*)(l_Lean_Parser_stringGapFn___closed__1));
v___x_1959_ = lean_box(0);
v___x_1960_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1929_, v___x_1958_, v___x_1959_, v___x_1937_);
return v___x_1960_;
}
}
v___jp_1938_:
{
if (v___y_1939_ == 0)
{
if (v_seenNewline_1927_ == 0)
{
lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1940_ = ((lean_object*)(l_Lean_Parser_stringGapFn___closed__0));
v___x_1941_ = lean_box(0);
v___x_1942_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1929_, v___x_1940_, v___x_1941_, v___x_1937_);
return v___x_1942_;
}
else
{
return v_s_1929_;
}
}
else
{
lean_inc(v_pos_1930_);
goto v___jp_1931_;
}
}
v___jp_1944_:
{
if (v___y_1945_ == 0)
{
uint32_t v___x_1946_; uint8_t v___x_1947_; 
v___x_1946_ = 13;
v___x_1947_ = lean_uint32_dec_eq(v_curr_1943_, v___x_1946_);
if (v___x_1947_ == 0)
{
uint32_t v___x_1948_; uint8_t v___x_1949_; 
v___x_1948_ = 10;
v___x_1949_ = lean_uint32_dec_eq(v_curr_1943_, v___x_1948_);
v___y_1939_ = v___x_1949_;
goto v___jp_1938_;
}
else
{
v___y_1939_ = v___x_1947_;
goto v___jp_1938_;
}
}
else
{
lean_inc(v_pos_1930_);
goto v___jp_1931_;
}
}
}
else
{
return v_s_1929_;
}
v___jp_1931_:
{
lean_object* v___x_1932_; 
v___x_1932_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1929_, v_c_1928_, v_pos_1930_);
lean_dec(v_pos_1930_);
v_s_1929_ = v___x_1932_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_stringGapFn___boxed(lean_object* v_seenNewline_1961_, lean_object* v_c_1962_, lean_object* v_s_1963_){
_start:
{
uint8_t v_seenNewline_boxed_1964_; lean_object* v_res_1965_; 
v_seenNewline_boxed_1964_ = lean_unbox(v_seenNewline_1961_);
v_res_1965_ = l_Lean_Parser_stringGapFn(v_seenNewline_boxed_1964_, v_c_1962_, v_s_1963_);
lean_dec_ref(v_c_1962_);
return v_res_1965_;
}
}
static lean_object* _init_l_Lean_Parser_quotedCharCoreFn___closed__1(void){
_start:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
lean_inc_ref(v___x_1967_);
v___x_1968_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_1968_, 0, v___x_1967_);
lean_closure_set(v___x_1968_, 1, v___x_1967_);
return v___x_1968_;
}
}
static lean_object* _init_l_Lean_Parser_quotedCharCoreFn___closed__2(void){
_start:
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; 
v___x_1969_ = lean_obj_once(&l_Lean_Parser_quotedCharCoreFn___closed__1, &l_Lean_Parser_quotedCharCoreFn___closed__1_once, _init_l_Lean_Parser_quotedCharCoreFn___closed__1);
v___x_1970_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
v___x_1971_ = lean_alloc_closure((void*)(l_Lean_Parser_andthenFn), 4, 2);
lean_closure_set(v___x_1971_, 0, v___x_1970_);
lean_closure_set(v___x_1971_, 1, v___x_1969_);
return v___x_1971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn(lean_object* v_isQuotable_1972_, uint8_t v_inString_1973_, lean_object* v_c_1974_, lean_object* v_s_1975_){
_start:
{
lean_object* v_pos_1976_; lean_object* v_toInputContext_1977_; uint8_t v___x_1978_; 
v_pos_1976_ = lean_ctor_get(v_s_1975_, 2);
v_toInputContext_1977_ = lean_ctor_get(v_c_1974_, 0);
v___x_1978_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1977_, v_pos_1976_);
if (v___x_1978_ == 0)
{
lean_object* v_inputString_1979_; uint32_t v_curr_1980_; lean_object* v___x_1981_; lean_object* v___x_1982_; uint8_t v___x_1983_; 
v_inputString_1979_ = lean_ctor_get(v_toInputContext_1977_, 0);
v_curr_1980_ = lean_string_utf8_get_fast(v_inputString_1979_, v_pos_1976_);
v___x_1981_ = lean_box_uint32(v_curr_1980_);
v___x_1982_ = lean_apply_1(v_isQuotable_1972_, v___x_1981_);
v___x_1983_ = lean_unbox(v___x_1982_);
if (v___x_1983_ == 0)
{
uint32_t v___x_1984_; uint8_t v___x_1985_; 
v___x_1984_ = 120;
v___x_1985_ = lean_uint32_dec_eq(v_curr_1980_, v___x_1984_);
if (v___x_1985_ == 0)
{
uint32_t v___x_1986_; uint8_t v___x_1987_; 
v___x_1986_ = 117;
v___x_1987_ = lean_uint32_dec_eq(v_curr_1980_, v___x_1986_);
if (v___x_1987_ == 0)
{
uint8_t v___x_1988_; 
v___x_1988_ = 1;
if (v_inString_1973_ == 0)
{
lean_dec_ref(v_c_1974_);
goto v___jp_1989_;
}
else
{
uint32_t v___x_1993_; uint8_t v___x_1994_; 
v___x_1993_ = 10;
v___x_1994_ = lean_uint32_dec_eq(v_curr_1980_, v___x_1993_);
if (v___x_1994_ == 0)
{
lean_dec_ref(v_c_1974_);
goto v___jp_1989_;
}
else
{
lean_object* v___x_1995_; 
v___x_1995_ = l_Lean_Parser_stringGapFn(v___x_1987_, v_c_1974_, v_s_1975_);
lean_dec_ref(v_c_1974_);
return v___x_1995_;
}
}
v___jp_1989_:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1990_ = ((lean_object*)(l_Lean_Parser_quotedCharCoreFn___closed__0));
v___x_1991_ = lean_box(0);
v___x_1992_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1975_, v___x_1990_, v___x_1991_, v___x_1988_);
return v___x_1992_;
}
}
else
{
lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; 
lean_inc(v_pos_1976_);
v___x_1996_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
v___x_1997_ = lean_obj_once(&l_Lean_Parser_quotedCharCoreFn___closed__2, &l_Lean_Parser_quotedCharCoreFn___closed__2_once, _init_l_Lean_Parser_quotedCharCoreFn___closed__2);
v___x_1998_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1975_, v_c_1974_, v_pos_1976_);
lean_dec(v_pos_1976_);
v___x_1999_ = l_Lean_Parser_andthenFn(v___x_1996_, v___x_1997_, v_c_1974_, v___x_1998_);
return v___x_1999_;
}
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
lean_inc(v_pos_1976_);
v___x_2000_ = lean_alloc_closure((void*)(l_Lean_Parser_hexDigitFn___boxed), 2, 0);
v___x_2001_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1975_, v_c_1974_, v_pos_1976_);
lean_dec(v_pos_1976_);
lean_inc_ref(v___x_2000_);
v___x_2002_ = l_Lean_Parser_andthenFn(v___x_2000_, v___x_2000_, v_c_1974_, v___x_2001_);
return v___x_2002_;
}
}
else
{
lean_object* v___x_2003_; 
lean_inc(v_pos_1976_);
v___x_2003_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1975_, v_c_1974_, v_pos_1976_);
lean_dec(v_pos_1976_);
lean_dec_ref(v_c_1974_);
return v___x_2003_;
}
}
else
{
lean_object* v___x_2004_; lean_object* v___x_2005_; 
lean_dec_ref(v_c_1974_);
lean_dec_ref(v_isQuotable_1972_);
v___x_2004_ = lean_box(0);
v___x_2005_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1975_, v___x_2004_);
return v___x_2005_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharCoreFn___boxed(lean_object* v_isQuotable_2006_, lean_object* v_inString_2007_, lean_object* v_c_2008_, lean_object* v_s_2009_){
_start:
{
uint8_t v_inString_boxed_2010_; lean_object* v_res_2011_; 
v_inString_boxed_2010_ = lean_unbox(v_inString_2007_);
v_res_2011_ = l_Lean_Parser_quotedCharCoreFn(v_isQuotable_2006_, v_inString_boxed_2010_, v_c_2008_, v_s_2009_);
return v_res_2011_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isQuotableCharDefault(uint32_t v_c_2012_){
_start:
{
uint8_t v___y_2014_; uint32_t v___x_2023_; uint8_t v___x_2024_; 
v___x_2023_ = 92;
v___x_2024_ = lean_uint32_dec_eq(v_c_2012_, v___x_2023_);
if (v___x_2024_ == 0)
{
uint32_t v___x_2025_; uint8_t v___x_2026_; 
v___x_2025_ = 34;
v___x_2026_ = lean_uint32_dec_eq(v_c_2012_, v___x_2025_);
v___y_2014_ = v___x_2026_;
goto v___jp_2013_;
}
else
{
v___y_2014_ = v___x_2024_;
goto v___jp_2013_;
}
v___jp_2013_:
{
if (v___y_2014_ == 0)
{
uint32_t v___x_2015_; uint8_t v___x_2016_; 
v___x_2015_ = 39;
v___x_2016_ = lean_uint32_dec_eq(v_c_2012_, v___x_2015_);
if (v___x_2016_ == 0)
{
uint32_t v___x_2017_; uint8_t v___x_2018_; 
v___x_2017_ = 114;
v___x_2018_ = lean_uint32_dec_eq(v_c_2012_, v___x_2017_);
if (v___x_2018_ == 0)
{
uint32_t v___x_2019_; uint8_t v___x_2020_; 
v___x_2019_ = 110;
v___x_2020_ = lean_uint32_dec_eq(v_c_2012_, v___x_2019_);
if (v___x_2020_ == 0)
{
uint32_t v___x_2021_; uint8_t v___x_2022_; 
v___x_2021_ = 116;
v___x_2022_ = lean_uint32_dec_eq(v_c_2012_, v___x_2021_);
return v___x_2022_;
}
else
{
return v___x_2020_;
}
}
else
{
return v___x_2018_;
}
}
else
{
return v___x_2016_;
}
}
else
{
return v___y_2014_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isQuotableCharDefault___boxed(lean_object* v_c_2027_){
_start:
{
uint32_t v_c_boxed_2028_; uint8_t v_res_2029_; lean_object* v_r_2030_; 
v_c_boxed_2028_ = lean_unbox_uint32(v_c_2027_);
lean_dec(v_c_2027_);
v_res_2029_ = l_Lean_Parser_isQuotableCharDefault(v_c_boxed_2028_);
v_r_2030_ = lean_box(v_res_2029_);
return v_r_2030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedCharFn(lean_object* v_a_2032_, lean_object* v_a_2033_){
_start:
{
lean_object* v___x_2034_; uint8_t v___x_2035_; lean_object* v___x_2036_; 
v___x_2034_ = ((lean_object*)(l_Lean_Parser_quotedCharFn___closed__0));
v___x_2035_ = 0;
v___x_2036_ = l_Lean_Parser_quotedCharCoreFn(v___x_2034_, v___x_2035_, v_a_2032_, v_a_2033_);
return v___x_2036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_quotedStringFn(lean_object* v_a_2037_, lean_object* v_a_2038_){
_start:
{
lean_object* v___x_2039_; uint8_t v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = ((lean_object*)(l_Lean_Parser_quotedCharFn___closed__0));
v___x_2040_ = 1;
v___x_2041_ = l_Lean_Parser_quotedCharCoreFn(v___x_2039_, v___x_2040_, v_a_2037_, v_a_2038_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken(lean_object* v_n_2042_, lean_object* v_startPos_2043_, uint8_t v_includeWhitespace_2044_, lean_object* v_c_2045_, lean_object* v_s_2046_){
_start:
{
lean_object* v_pos_2047_; lean_object* v_errorMsg_2048_; lean_object* v___x_2049_; uint8_t v___x_2050_; 
v_pos_2047_ = lean_ctor_get(v_s_2046_, 2);
v_errorMsg_2048_ = lean_ctor_get(v_s_2046_, 4);
v___x_2049_ = lean_box(0);
lean_inc(v_errorMsg_2048_);
v___x_2050_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2048_, v___x_2049_);
if (v___x_2050_ == 0)
{
lean_dec_ref(v_c_2045_);
lean_dec(v_startPos_2043_);
lean_dec(v_n_2042_);
return v_s_2046_;
}
else
{
lean_object* v_toInputContext_2051_; lean_object* v_inputString_2052_; lean_object* v_endPos_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2076_; 
lean_inc(v_pos_2047_);
v_toInputContext_2051_ = lean_ctor_get(v_c_2045_, 0);
lean_inc_ref(v_toInputContext_2051_);
v_inputString_2052_ = lean_ctor_get(v_toInputContext_2051_, 0);
v_endPos_2053_ = lean_ctor_get(v_toInputContext_2051_, 3);
v_isSharedCheck_2076_ = !lean_is_exclusive(v_toInputContext_2051_);
if (v_isSharedCheck_2076_ == 0)
{
lean_object* v_unused_2077_; lean_object* v_unused_2078_; 
v_unused_2077_ = lean_ctor_get(v_toInputContext_2051_, 2);
lean_dec(v_unused_2077_);
v_unused_2078_ = lean_ctor_get(v_toInputContext_2051_, 1);
lean_dec(v_unused_2078_);
v___x_2055_ = v_toInputContext_2051_;
v_isShared_2056_ = v_isSharedCheck_2076_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_endPos_2053_);
lean_inc(v_inputString_2052_);
lean_dec(v_toInputContext_2051_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2076_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
uint8_t v___x_2057_; lean_object* v_leading_2058_; lean_object* v_val_2059_; lean_object* v___y_2061_; lean_object* v___y_2062_; lean_object* v___y_2069_; lean_object* v_pos_2070_; 
v___x_2057_ = 0;
lean_inc(v_startPos_2043_);
v_leading_2058_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2045_, v_startPos_2043_);
v_val_2059_ = lean_string_utf8_extract(v_inputString_2052_, v_startPos_2043_, v_pos_2047_);
if (v_includeWhitespace_2044_ == 0)
{
lean_dec_ref(v_c_2045_);
lean_inc(v_pos_2047_);
v___y_2069_ = v_s_2046_;
v_pos_2070_ = v_pos_2047_;
goto v___jp_2068_;
}
else
{
lean_object* v___x_2074_; lean_object* v_pos_2075_; 
v___x_2074_ = l_Lean_Parser_whitespace(v_c_2045_, v_s_2046_);
v_pos_2075_ = lean_ctor_get(v___x_2074_, 2);
lean_inc(v_pos_2075_);
v___y_2069_ = v___x_2074_;
v_pos_2070_ = v_pos_2075_;
goto v___jp_2068_;
}
v___jp_2060_:
{
lean_object* v_info_2064_; 
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 3, v_pos_2047_);
lean_ctor_set(v___x_2055_, 2, v___y_2062_);
lean_ctor_set(v___x_2055_, 1, v_startPos_2043_);
lean_ctor_set(v___x_2055_, 0, v_leading_2058_);
v_info_2064_ = v___x_2055_;
goto v_reusejp_2063_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_leading_2058_);
lean_ctor_set(v_reuseFailAlloc_2067_, 1, v_startPos_2043_);
lean_ctor_set(v_reuseFailAlloc_2067_, 2, v___y_2062_);
lean_ctor_set(v_reuseFailAlloc_2067_, 3, v_pos_2047_);
v_info_2064_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2063_;
}
v_reusejp_2063_:
{
lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2065_ = l_Lean_Syntax_mkLit(v_n_2042_, v_val_2059_, v_info_2064_);
v___x_2066_ = l_Lean_Parser_ParserState_pushSyntax(v___y_2061_, v___x_2065_, v___x_2057_);
return v___x_2066_;
}
}
v___jp_2068_:
{
uint8_t v___x_2071_; 
v___x_2071_ = lean_nat_dec_le(v_pos_2070_, v_endPos_2053_);
if (v___x_2071_ == 0)
{
lean_object* v___x_2072_; 
lean_dec(v_pos_2070_);
lean_inc(v_pos_2047_);
v___x_2072_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2072_, 0, v_inputString_2052_);
lean_ctor_set(v___x_2072_, 1, v_pos_2047_);
lean_ctor_set(v___x_2072_, 2, v_endPos_2053_);
v___y_2061_ = v___y_2069_;
v___y_2062_ = v___x_2072_;
goto v___jp_2060_;
}
else
{
lean_object* v___x_2073_; 
lean_dec(v_endPos_2053_);
lean_inc(v_pos_2047_);
v___x_2073_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2073_, 0, v_inputString_2052_);
lean_ctor_set(v___x_2073_, 1, v_pos_2047_);
lean_ctor_set(v___x_2073_, 2, v_pos_2070_);
v___y_2061_ = v___y_2069_;
v___y_2062_ = v___x_2073_;
goto v___jp_2060_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkNodeToken___boxed(lean_object* v_n_2079_, lean_object* v_startPos_2080_, lean_object* v_includeWhitespace_2081_, lean_object* v_c_2082_, lean_object* v_s_2083_){
_start:
{
uint8_t v_includeWhitespace_boxed_2084_; lean_object* v_res_2085_; 
v_includeWhitespace_boxed_2084_ = lean_unbox(v_includeWhitespace_2081_);
v_res_2085_ = l_Lean_Parser_mkNodeToken(v_n_2079_, v_startPos_2080_, v_includeWhitespace_boxed_2084_, v_c_2082_, v_s_2083_);
return v_res_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFnAux(lean_object* v_startPos_2090_, lean_object* v_c_2091_, lean_object* v_s_2092_){
_start:
{
lean_object* v_pos_2093_; lean_object* v_toInputContext_2094_; uint8_t v___x_2095_; 
v_pos_2093_ = lean_ctor_get(v_s_2092_, 2);
v_toInputContext_2094_ = lean_ctor_get(v_c_2091_, 0);
v___x_2095_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2094_, v_pos_2093_);
if (v___x_2095_ == 0)
{
lean_object* v_inputString_2096_; uint8_t v___x_2097_; lean_object* v___y_2099_; uint32_t v_curr_2114_; lean_object* v___x_2115_; lean_object* v_s_2116_; uint32_t v___x_2117_; uint8_t v___x_2118_; 
v_inputString_2096_ = lean_ctor_get(v_toInputContext_2094_, 0);
v___x_2097_ = 1;
v_curr_2114_ = lean_string_utf8_get_fast(v_inputString_2096_, v_pos_2093_);
v___x_2115_ = lean_string_utf8_next_fast(v_inputString_2096_, v_pos_2093_);
v_s_2116_ = l_Lean_Parser_ParserState_setPos(v_s_2092_, v___x_2115_);
v___x_2117_ = 92;
v___x_2118_ = lean_uint32_dec_eq(v_curr_2114_, v___x_2117_);
if (v___x_2118_ == 0)
{
v___y_2099_ = v_s_2116_;
goto v___jp_2098_;
}
else
{
lean_object* v___x_2119_; 
lean_inc_ref(v_c_2091_);
v___x_2119_ = l_Lean_Parser_quotedCharFn(v_c_2091_, v_s_2116_);
v___y_2099_ = v___x_2119_;
goto v___jp_2098_;
}
v___jp_2098_:
{
lean_object* v_pos_2100_; lean_object* v_errorMsg_2101_; lean_object* v___x_2102_; uint8_t v___x_2103_; 
v_pos_2100_ = lean_ctor_get(v___y_2099_, 2);
v_errorMsg_2101_ = lean_ctor_get(v___y_2099_, 4);
v___x_2102_ = lean_box(0);
lean_inc(v_errorMsg_2101_);
v___x_2103_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2101_, v___x_2102_);
if (v___x_2103_ == 0)
{
lean_dec_ref(v_c_2091_);
lean_dec(v_startPos_2090_);
return v___y_2099_;
}
else
{
if (v___x_2095_ == 0)
{
uint32_t v_curr_2104_; lean_object* v___x_2105_; lean_object* v_s_2106_; uint32_t v___x_2107_; uint8_t v___x_2108_; 
v_curr_2104_ = lean_string_utf8_get(v_inputString_2096_, v_pos_2100_);
v___x_2105_ = lean_string_utf8_next(v_inputString_2096_, v_pos_2100_);
v_s_2106_ = l_Lean_Parser_ParserState_setPos(v___y_2099_, v___x_2105_);
v___x_2107_ = 39;
v___x_2108_ = lean_uint32_dec_eq(v_curr_2104_, v___x_2107_);
if (v___x_2108_ == 0)
{
lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
lean_dec_ref(v_c_2091_);
lean_dec(v_startPos_2090_);
v___x_2109_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__0));
v___x_2110_ = lean_box(0);
v___x_2111_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2106_, v___x_2109_, v___x_2110_, v___x_2097_);
return v___x_2111_;
}
else
{
lean_object* v___x_2112_; lean_object* v___x_2113_; 
v___x_2112_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__2));
v___x_2113_ = l_Lean_Parser_mkNodeToken(v___x_2112_, v_startPos_2090_, v___x_2097_, v_c_2091_, v_s_2106_);
return v___x_2113_;
}
}
else
{
lean_dec_ref(v_c_2091_);
lean_dec(v_startPos_2090_);
return v___y_2099_;
}
}
}
}
else
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_dec_ref(v_c_2091_);
lean_dec(v_startPos_2090_);
v___x_2120_ = lean_box(0);
v___x_2121_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2092_, v___x_2120_);
return v___x_2121_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux___boxed(lean_object* v_startPos_2126_, lean_object* v_includeWhitespace_2127_, lean_object* v_c_2128_, lean_object* v_s_2129_){
_start:
{
uint8_t v_includeWhitespace_boxed_2130_; lean_object* v_res_2131_; 
v_includeWhitespace_boxed_2130_ = lean_unbox(v_includeWhitespace_2127_);
v_res_2131_ = l_Lean_Parser_strLitFnAux(v_startPos_2126_, v_includeWhitespace_boxed_2130_, v_c_2128_, v_s_2129_);
return v_res_2131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFnAux(lean_object* v_startPos_2132_, uint8_t v_includeWhitespace_2133_, lean_object* v_c_2134_, lean_object* v_s_2135_){
_start:
{
lean_object* v_pos_2136_; lean_object* v_toInputContext_2137_; uint8_t v___x_2138_; 
v_pos_2136_ = lean_ctor_get(v_s_2135_, 2);
v_toInputContext_2137_ = lean_ctor_get(v_c_2134_, 0);
v___x_2138_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2137_, v_pos_2136_);
if (v___x_2138_ == 0)
{
lean_object* v_inputString_2139_; uint32_t v_curr_2140_; lean_object* v___x_2141_; lean_object* v_s_2142_; uint32_t v___x_2143_; uint8_t v___x_2144_; 
v_inputString_2139_ = lean_ctor_get(v_toInputContext_2137_, 0);
v_curr_2140_ = lean_string_utf8_get_fast(v_inputString_2139_, v_pos_2136_);
v___x_2141_ = lean_string_utf8_next_fast(v_inputString_2139_, v_pos_2136_);
v_s_2142_ = l_Lean_Parser_ParserState_setPos(v_s_2135_, v___x_2141_);
v___x_2143_ = 34;
v___x_2144_ = lean_uint32_dec_eq(v_curr_2140_, v___x_2143_);
if (v___x_2144_ == 0)
{
uint32_t v___x_2145_; uint8_t v___x_2146_; 
v___x_2145_ = 92;
v___x_2146_ = lean_uint32_dec_eq(v_curr_2140_, v___x_2145_);
if (v___x_2146_ == 0)
{
v_s_2135_ = v_s_2142_;
goto _start;
}
else
{
lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2148_ = lean_alloc_closure((void*)(l_Lean_Parser_quotedStringFn), 2, 0);
v___x_2149_ = lean_box(v___x_2146_);
v___x_2150_ = lean_alloc_closure((void*)(l_Lean_Parser_strLitFnAux___boxed), 4, 2);
lean_closure_set(v___x_2150_, 0, v_startPos_2132_);
lean_closure_set(v___x_2150_, 1, v___x_2149_);
v___x_2151_ = l_Lean_Parser_andthenFn(v___x_2148_, v___x_2150_, v_c_2134_, v_s_2142_);
return v___x_2151_;
}
}
else
{
lean_object* v___x_2152_; lean_object* v___x_2153_; 
v___x_2152_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2153_ = l_Lean_Parser_mkNodeToken(v___x_2152_, v_startPos_2132_, v_includeWhitespace_2133_, v_c_2134_, v_s_2142_);
return v___x_2153_;
}
}
else
{
lean_object* v___x_2154_; lean_object* v___x_2155_; 
lean_dec_ref(v_c_2134_);
v___x_2154_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__2));
v___x_2155_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_2135_, v___x_2154_, v_startPos_2132_);
return v___x_2155_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isRawStrLitStart(lean_object* v_c_2156_, lean_object* v_i_2157_){
_start:
{
lean_object* v_toInputContext_2158_; uint8_t v___x_2159_; 
v_toInputContext_2158_ = lean_ctor_get(v_c_2156_, 0);
v___x_2159_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2158_, v_i_2157_);
if (v___x_2159_ == 0)
{
lean_object* v_inputString_2160_; uint32_t v_curr_2161_; uint32_t v___x_2162_; uint8_t v___x_2163_; 
v_inputString_2160_ = lean_ctor_get(v_toInputContext_2158_, 0);
v_curr_2161_ = lean_string_utf8_get_fast(v_inputString_2160_, v_i_2157_);
v___x_2162_ = 35;
v___x_2163_ = lean_uint32_dec_eq(v_curr_2161_, v___x_2162_);
if (v___x_2163_ == 0)
{
uint32_t v___x_2164_; uint8_t v___x_2165_; 
lean_dec(v_i_2157_);
v___x_2164_ = 34;
v___x_2165_ = lean_uint32_dec_eq(v_curr_2161_, v___x_2164_);
return v___x_2165_;
}
else
{
lean_object* v___x_2166_; 
v___x_2166_ = lean_string_utf8_next_fast(v_inputString_2160_, v_i_2157_);
lean_dec(v_i_2157_);
v_i_2157_ = v___x_2166_;
goto _start;
}
}
else
{
uint8_t v___x_2168_; 
lean_dec(v_i_2157_);
v___x_2168_ = 0;
return v___x_2168_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isRawStrLitStart___boxed(lean_object* v_c_2169_, lean_object* v_i_2170_){
_start:
{
uint8_t v_res_2171_; lean_object* v_r_2172_; 
v_res_2171_ = l_Lean_Parser_isRawStrLitStart(v_c_2169_, v_i_2170_);
lean_dec_ref(v_c_2169_);
v_r_2172_ = lean_box(v_res_2171_);
return v_r_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(lean_object* v_startPos_2174_, lean_object* v_s_2175_){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; 
v___x_2176_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated___closed__0));
v___x_2177_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_2175_, v___x_2176_, v_startPos_2174_);
return v___x_2177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(lean_object* v_startPos_2178_, lean_object* v_num_2179_, lean_object* v_closingNum_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v_pos_2183_; lean_object* v_toInputContext_2184_; uint8_t v___x_2185_; 
v_pos_2183_ = lean_ctor_get(v_a_2182_, 2);
v_toInputContext_2184_ = lean_ctor_get(v_a_2181_, 0);
v___x_2185_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2184_, v_pos_2183_);
if (v___x_2185_ == 0)
{
lean_object* v_inputString_2186_; uint32_t v_curr_2187_; lean_object* v___x_2188_; lean_object* v_s_2189_; uint32_t v___x_2190_; uint8_t v___x_2191_; 
v_inputString_2186_ = lean_ctor_get(v_toInputContext_2184_, 0);
v_curr_2187_ = lean_string_utf8_get_fast(v_inputString_2186_, v_pos_2183_);
v___x_2188_ = lean_string_utf8_next_fast(v_inputString_2186_, v_pos_2183_);
v_s_2189_ = l_Lean_Parser_ParserState_setPos(v_a_2182_, v___x_2188_);
v___x_2190_ = 35;
v___x_2191_ = lean_uint32_dec_eq(v_curr_2187_, v___x_2190_);
if (v___x_2191_ == 0)
{
uint32_t v___x_2192_; uint8_t v___x_2193_; 
lean_dec(v_closingNum_2180_);
v___x_2192_ = 34;
v___x_2193_ = lean_uint32_dec_eq(v_curr_2187_, v___x_2192_);
if (v___x_2193_ == 0)
{
lean_object* v___x_2194_; 
v___x_2194_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2178_, v_num_2179_, v_a_2181_, v_s_2189_);
return v___x_2194_;
}
else
{
lean_object* v___x_2195_; 
v___x_2195_ = lean_unsigned_to_nat(0u);
v_closingNum_2180_ = v___x_2195_;
v_a_2182_ = v_s_2189_;
goto _start;
}
}
else
{
lean_object* v___x_2197_; lean_object* v___x_2198_; uint8_t v___x_2199_; 
v___x_2197_ = lean_unsigned_to_nat(1u);
v___x_2198_ = lean_nat_add(v_closingNum_2180_, v___x_2197_);
lean_dec(v_closingNum_2180_);
v___x_2199_ = lean_nat_dec_eq(v___x_2198_, v_num_2179_);
if (v___x_2199_ == 0)
{
v_closingNum_2180_ = v___x_2198_;
v_a_2182_ = v_s_2189_;
goto _start;
}
else
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
lean_dec(v___x_2198_);
v___x_2201_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2202_ = l_Lean_Parser_mkNodeToken(v___x_2201_, v_startPos_2178_, v___x_2199_, v_a_2181_, v_s_2189_);
return v___x_2202_;
}
}
}
else
{
lean_object* v___x_2203_; 
lean_dec_ref(v_a_2181_);
lean_dec(v_closingNum_2180_);
v___x_2203_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2178_, v_a_2182_);
return v___x_2203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(lean_object* v_startPos_2204_, lean_object* v_num_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_){
_start:
{
lean_object* v_pos_2208_; lean_object* v_toInputContext_2209_; uint8_t v___x_2210_; 
v_pos_2208_ = lean_ctor_get(v_a_2207_, 2);
v_toInputContext_2209_ = lean_ctor_get(v_a_2206_, 0);
v___x_2210_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2209_, v_pos_2208_);
if (v___x_2210_ == 0)
{
lean_object* v_inputString_2211_; uint32_t v_curr_2212_; lean_object* v___x_2213_; lean_object* v_s_2214_; uint32_t v___x_2215_; uint8_t v___x_2216_; 
v_inputString_2211_ = lean_ctor_get(v_toInputContext_2209_, 0);
v_curr_2212_ = lean_string_utf8_get_fast(v_inputString_2211_, v_pos_2208_);
v___x_2213_ = lean_string_utf8_next_fast(v_inputString_2211_, v_pos_2208_);
v_s_2214_ = l_Lean_Parser_ParserState_setPos(v_a_2207_, v___x_2213_);
v___x_2215_ = 34;
v___x_2216_ = lean_uint32_dec_eq(v_curr_2212_, v___x_2215_);
if (v___x_2216_ == 0)
{
v_a_2207_ = v_s_2214_;
goto _start;
}
else
{
lean_object* v___x_2218_; uint8_t v___x_2219_; 
v___x_2218_ = lean_unsigned_to_nat(0u);
v___x_2219_ = lean_nat_dec_eq(v_num_2205_, v___x_2218_);
if (v___x_2219_ == 0)
{
lean_object* v___x_2220_; 
v___x_2220_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(v_startPos_2204_, v_num_2205_, v___x_2218_, v_a_2206_, v_s_2214_);
return v___x_2220_;
}
else
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_2222_ = l_Lean_Parser_mkNodeToken(v___x_2221_, v_startPos_2204_, v___x_2219_, v_a_2206_, v_s_2214_);
return v___x_2222_;
}
}
}
else
{
lean_object* v___x_2223_; 
lean_dec_ref(v_a_2206_);
v___x_2223_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2204_, v_a_2207_);
return v___x_2223_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState___boxed(lean_object* v_startPos_2224_, lean_object* v_num_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2224_, v_num_2225_, v_a_2226_, v_a_2227_);
lean_dec(v_num_2225_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState___boxed(lean_object* v_startPos_2229_, lean_object* v_num_2230_, lean_object* v_closingNum_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_res_2234_; 
v_res_2234_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_closingState(v_startPos_2229_, v_num_2230_, v_closingNum_2231_, v_a_2232_, v_a_2233_);
lean_dec(v_num_2230_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(lean_object* v_startPos_2235_, lean_object* v_num_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v_pos_2239_; lean_object* v_toInputContext_2240_; uint8_t v___x_2241_; 
v_pos_2239_ = lean_ctor_get(v_a_2238_, 2);
v_toInputContext_2240_ = lean_ctor_get(v_a_2237_, 0);
v___x_2241_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2240_, v_pos_2239_);
if (v___x_2241_ == 0)
{
lean_object* v_inputString_2242_; uint32_t v_curr_2243_; lean_object* v___x_2244_; lean_object* v_s_2245_; uint32_t v___x_2246_; uint8_t v___x_2247_; 
v_inputString_2242_ = lean_ctor_get(v_toInputContext_2240_, 0);
v_curr_2243_ = lean_string_utf8_get_fast(v_inputString_2242_, v_pos_2239_);
v___x_2244_ = lean_string_utf8_next_fast(v_inputString_2242_, v_pos_2239_);
v_s_2245_ = l_Lean_Parser_ParserState_setPos(v_a_2238_, v___x_2244_);
v___x_2246_ = 35;
v___x_2247_ = lean_uint32_dec_eq(v_curr_2243_, v___x_2246_);
if (v___x_2247_ == 0)
{
uint32_t v___x_2248_; uint8_t v___x_2249_; 
v___x_2248_ = 34;
v___x_2249_ = lean_uint32_dec_eq(v_curr_2243_, v___x_2248_);
if (v___x_2249_ == 0)
{
lean_object* v___x_2250_; 
lean_dec_ref(v_a_2237_);
lean_dec(v_num_2236_);
v___x_2250_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2235_, v_s_2245_);
return v___x_2250_;
}
else
{
lean_object* v___x_2251_; 
v___x_2251_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_normalState(v_startPos_2235_, v_num_2236_, v_a_2237_, v_s_2245_);
lean_dec(v_num_2236_);
return v___x_2251_;
}
}
else
{
lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2252_ = lean_unsigned_to_nat(1u);
v___x_2253_ = lean_nat_add(v_num_2236_, v___x_2252_);
lean_dec(v_num_2236_);
v_num_2236_ = v___x_2253_;
v_a_2238_ = v_s_2245_;
goto _start;
}
}
else
{
lean_object* v___x_2255_; 
lean_dec_ref(v_a_2237_);
lean_dec(v_num_2236_);
v___x_2255_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_errorUnterminated(v_startPos_2235_, v_a_2238_);
return v___x_2255_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawStrLitFnAux(lean_object* v_startPos_2256_, lean_object* v_a_2257_, lean_object* v_a_2258_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
v___x_2259_ = lean_unsigned_to_nat(0u);
v___x_2260_ = l___private_Lean_Parser_Basic_0__Lean_Parser_rawStrLitFnAux_initState(v_startPos_2256_, v___x_2259_, v_a_2257_, v_a_2258_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn(lean_object* v_isDigit_2262_, lean_object* v_expecting_2263_, uint8_t v_needDigit_2264_, lean_object* v_c_2265_, lean_object* v_s_2266_){
_start:
{
lean_object* v_pos_2267_; lean_object* v_toInputContext_2268_; uint8_t v___x_2269_; 
v_pos_2267_ = lean_ctor_get(v_s_2266_, 2);
v_toInputContext_2268_ = lean_ctor_get(v_c_2265_, 0);
v___x_2269_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2268_, v_pos_2267_);
if (v___x_2269_ == 0)
{
lean_object* v_inputString_2270_; uint8_t v___x_2271_; uint32_t v_curr_2272_; uint32_t v___x_2273_; uint8_t v___x_2274_; 
v_inputString_2270_ = lean_ctor_get(v_toInputContext_2268_, 0);
v___x_2271_ = 1;
v_curr_2272_ = lean_string_utf8_get_fast(v_inputString_2270_, v_pos_2267_);
v___x_2273_ = 95;
v___x_2274_ = lean_uint32_dec_eq(v_curr_2272_, v___x_2273_);
if (v___x_2274_ == 0)
{
lean_object* v___x_2275_; lean_object* v___x_2276_; uint8_t v___x_2277_; 
v___x_2275_ = lean_box_uint32(v_curr_2272_);
lean_inc_ref(v_isDigit_2262_);
v___x_2276_ = lean_apply_1(v_isDigit_2262_, v___x_2275_);
v___x_2277_ = lean_unbox(v___x_2276_);
if (v___x_2277_ == 0)
{
lean_dec_ref(v_isDigit_2262_);
if (v_needDigit_2264_ == 0)
{
lean_dec_ref(v_expecting_2263_);
return v_s_2266_;
}
else
{
lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2278_ = ((lean_object*)(l_Lean_Parser_takeDigitsFn___closed__0));
v___x_2279_ = lean_box(0);
v___x_2280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2280_, 0, v_expecting_2263_);
lean_ctor_set(v___x_2280_, 1, v___x_2279_);
v___x_2281_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2266_, v___x_2278_, v___x_2280_, v___x_2271_);
return v___x_2281_;
}
}
else
{
lean_object* v___x_2282_; 
lean_inc(v_pos_2267_);
v___x_2282_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2266_, v_c_2265_, v_pos_2267_);
lean_dec(v_pos_2267_);
v_needDigit_2264_ = v___x_2274_;
v_s_2266_ = v___x_2282_;
goto _start;
}
}
else
{
lean_object* v___x_2284_; 
lean_inc(v_pos_2267_);
v___x_2284_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2266_, v_c_2265_, v_pos_2267_);
lean_dec(v_pos_2267_);
v_needDigit_2264_ = v___x_2271_;
v_s_2266_ = v___x_2284_;
goto _start;
}
}
else
{
lean_dec_ref(v_isDigit_2262_);
if (v_needDigit_2264_ == 0)
{
lean_dec_ref(v_expecting_2263_);
return v_s_2266_;
}
else
{
lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; 
v___x_2286_ = lean_box(0);
v___x_2287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2287_, 0, v_expecting_2263_);
lean_ctor_set(v___x_2287_, 1, v___x_2286_);
v___x_2288_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2266_, v___x_2287_);
return v___x_2288_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_takeDigitsFn___boxed(lean_object* v_isDigit_2289_, lean_object* v_expecting_2290_, lean_object* v_needDigit_2291_, lean_object* v_c_2292_, lean_object* v_s_2293_){
_start:
{
uint8_t v_needDigit_boxed_2294_; lean_object* v_res_2295_; 
v_needDigit_boxed_2294_ = lean_unbox(v_needDigit_2291_);
v_res_2295_ = l_Lean_Parser_takeDigitsFn(v_isDigit_2289_, v_expecting_2290_, v_needDigit_boxed_2294_, v_c_2292_, v_s_2293_);
lean_dec_ref(v_c_2292_);
return v_res_2295_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(uint32_t v_c_2296_){
_start:
{
uint32_t v___x_2297_; uint8_t v___x_2298_; 
v___x_2297_ = 48;
v___x_2298_ = lean_uint32_dec_le(v___x_2297_, v_c_2296_);
if (v___x_2298_ == 0)
{
return v___x_2298_;
}
else
{
uint32_t v___x_2299_; uint8_t v___x_2300_; 
v___x_2299_ = 57;
v___x_2300_ = lean_uint32_dec_le(v_c_2296_, v___x_2299_);
return v___x_2300_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0___boxed(lean_object* v_c_2301_){
_start:
{
uint32_t v_c_boxed_2302_; uint8_t v_res_2303_; lean_object* v_r_2304_; 
v_c_boxed_2302_ = lean_unbox_uint32(v_c_2301_);
lean_dec(v_c_2301_);
v_res_2303_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___lam__0(v_c_boxed_2302_);
v_r_2304_ = lean_box(v_res_2303_);
return v_r_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(lean_object* v_startPos_2309_, lean_object* v_c_2310_, lean_object* v_s_2311_, uint8_t v_hasBareDot_2312_){
_start:
{
lean_object* v_toInputContext_2313_; lean_object* v_pos_2314_; uint8_t v___x_2315_; 
v_toInputContext_2313_ = lean_ctor_get(v_c_2310_, 0);
v_pos_2314_ = lean_ctor_get(v_s_2311_, 2);
v___x_2315_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2313_, v_pos_2314_);
if (v___x_2315_ == 0)
{
lean_object* v_inputString_2316_; lean_object* v___f_2317_; uint8_t v___x_2318_; lean_object* v___y_2320_; uint8_t v___y_2321_; lean_object* v___y_2329_; lean_object* v___y_2336_; lean_object* v___y_2337_; uint32_t v_curr_2351_; uint8_t v___y_2353_; uint8_t v___y_2357_; uint32_t v___x_2366_; uint8_t v___x_2367_; 
v_inputString_2316_ = lean_ctor_get(v_toInputContext_2313_, 0);
v___f_2317_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2318_ = 1;
v_curr_2351_ = lean_string_utf8_get_fast(v_inputString_2316_, v_pos_2314_);
v___x_2366_ = 101;
v___x_2367_ = lean_uint32_dec_eq(v_curr_2351_, v___x_2366_);
if (v___x_2367_ == 0)
{
uint32_t v___x_2368_; uint8_t v___x_2369_; 
v___x_2368_ = 69;
v___x_2369_ = lean_uint32_dec_eq(v_curr_2351_, v___x_2368_);
if (v___x_2369_ == 0)
{
if (v_hasBareDot_2312_ == 0)
{
lean_dec(v_startPos_2309_);
return v_s_2311_;
}
else
{
uint32_t v___x_2370_; uint8_t v___x_2371_; 
v___x_2370_ = 65;
v___x_2371_ = lean_uint32_dec_le(v___x_2370_, v_curr_2351_);
if (v___x_2371_ == 0)
{
goto v___jp_2361_;
}
else
{
uint32_t v___x_2372_; uint8_t v___x_2373_; 
v___x_2372_ = 90;
v___x_2373_ = lean_uint32_dec_le(v_curr_2351_, v___x_2372_);
if (v___x_2373_ == 0)
{
goto v___jp_2361_;
}
else
{
goto v___jp_2346_;
}
}
}
}
else
{
lean_dec(v_startPos_2309_);
goto v___jp_2339_;
}
}
else
{
lean_dec(v_startPos_2309_);
goto v___jp_2339_;
}
v___jp_2319_:
{
if (v___y_2321_ == 0)
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
lean_dec(v___y_2320_);
v___x_2322_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__1));
v___x_2323_ = lean_box(0);
v___x_2324_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_2311_, v___x_2322_, v___x_2323_, v___x_2318_);
return v___x_2324_;
}
else
{
lean_object* v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2326_ = l_Lean_Parser_ParserState_setPos(v_s_2311_, v___y_2320_);
v___x_2327_ = l_Lean_Parser_takeDigitsFn(v___f_2317_, v___x_2325_, v___x_2315_, v_c_2310_, v___x_2326_);
return v___x_2327_;
}
}
v___jp_2328_:
{
uint32_t v_curr_2330_; uint32_t v___x_2331_; uint8_t v___x_2332_; 
v_curr_2330_ = lean_string_utf8_get(v_inputString_2316_, v___y_2329_);
v___x_2331_ = 48;
v___x_2332_ = lean_uint32_dec_le(v___x_2331_, v_curr_2330_);
if (v___x_2332_ == 0)
{
v___y_2320_ = v___y_2329_;
v___y_2321_ = v___x_2332_;
goto v___jp_2319_;
}
else
{
uint32_t v___x_2333_; uint8_t v___x_2334_; 
v___x_2333_ = 57;
v___x_2334_ = lean_uint32_dec_le(v_curr_2330_, v___x_2333_);
v___y_2320_ = v___y_2329_;
v___y_2321_ = v___x_2334_;
goto v___jp_2319_;
}
}
v___jp_2335_:
{
lean_object* v___x_2338_; 
v___x_2338_ = lean_string_utf8_next(v___y_2336_, v___y_2337_);
lean_dec(v___y_2337_);
v___y_2329_ = v___x_2338_;
goto v___jp_2328_;
}
v___jp_2339_:
{
lean_object* v_i_2340_; uint32_t v___x_2341_; uint32_t v___x_2342_; uint8_t v___x_2343_; 
v_i_2340_ = lean_string_utf8_next(v_inputString_2316_, v_pos_2314_);
v___x_2341_ = lean_string_utf8_get(v_inputString_2316_, v_i_2340_);
v___x_2342_ = 45;
v___x_2343_ = lean_uint32_dec_eq(v___x_2341_, v___x_2342_);
if (v___x_2343_ == 0)
{
uint32_t v___x_2344_; uint8_t v___x_2345_; 
v___x_2344_ = 43;
v___x_2345_ = lean_uint32_dec_eq(v___x_2341_, v___x_2344_);
if (v___x_2345_ == 0)
{
v___y_2329_ = v_i_2340_;
goto v___jp_2328_;
}
else
{
v___y_2336_ = v_inputString_2316_;
v___y_2337_ = v_i_2340_;
goto v___jp_2335_;
}
}
else
{
v___y_2336_ = v_inputString_2316_;
v___y_2337_ = v_i_2340_;
goto v___jp_2335_;
}
}
v___jp_2346_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2347_ = l_Lean_Parser_ParserState_setPos(v_s_2311_, v_startPos_2309_);
v___x_2348_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__3));
v___x_2349_ = lean_box(0);
v___x_2350_ = l_Lean_Parser_ParserState_mkUnexpectedError(v___x_2347_, v___x_2348_, v___x_2349_, v___x_2318_);
return v___x_2350_;
}
v___jp_2352_:
{
if (v___y_2353_ == 0)
{
uint32_t v___x_2354_; uint8_t v___x_2355_; 
v___x_2354_ = 171;
v___x_2355_ = lean_uint32_dec_eq(v_curr_2351_, v___x_2354_);
if (v___x_2355_ == 0)
{
lean_dec(v_startPos_2309_);
return v_s_2311_;
}
else
{
goto v___jp_2346_;
}
}
else
{
goto v___jp_2346_;
}
}
v___jp_2356_:
{
if (v___y_2357_ == 0)
{
uint32_t v___x_2358_; uint8_t v___x_2359_; 
v___x_2358_ = 95;
v___x_2359_ = lean_uint32_dec_eq(v_curr_2351_, v___x_2358_);
if (v___x_2359_ == 0)
{
uint8_t v___x_2360_; 
v___x_2360_ = l_Lean_isLetterLike(v_curr_2351_);
v___y_2353_ = v___x_2360_;
goto v___jp_2352_;
}
else
{
v___y_2353_ = v___x_2359_;
goto v___jp_2352_;
}
}
else
{
goto v___jp_2346_;
}
}
v___jp_2361_:
{
uint32_t v___x_2362_; uint8_t v___x_2363_; 
v___x_2362_ = 97;
v___x_2363_ = lean_uint32_dec_le(v___x_2362_, v_curr_2351_);
if (v___x_2363_ == 0)
{
v___y_2357_ = v___x_2363_;
goto v___jp_2356_;
}
else
{
uint32_t v___x_2364_; uint8_t v___x_2365_; 
v___x_2364_ = 122;
v___x_2365_ = lean_uint32_dec_le(v_curr_2351_, v___x_2364_);
v___y_2357_ = v___x_2365_;
goto v___jp_2356_;
}
}
}
else
{
lean_dec(v_startPos_2309_);
return v_s_2311_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___boxed(lean_object* v_startPos_2374_, lean_object* v_c_2375_, lean_object* v_s_2376_, lean_object* v_hasBareDot_2377_){
_start:
{
uint8_t v_hasBareDot_boxed_2378_; lean_object* v_res_2379_; 
v_hasBareDot_boxed_2378_ = lean_unbox(v_hasBareDot_2377_);
v_res_2379_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(v_startPos_2374_, v_c_2375_, v_s_2376_, v_hasBareDot_boxed_2378_);
lean_dec_ref(v_c_2375_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(lean_object* v_c_2380_, lean_object* v_s_2381_){
_start:
{
lean_object* v_toInputContext_2382_; lean_object* v_pos_2383_; lean_object* v_inputString_2384_; uint32_t v_curr_2385_; uint32_t v___x_2386_; uint8_t v___x_2387_; 
v_toInputContext_2382_ = lean_ctor_get(v_c_2380_, 0);
v_pos_2383_ = lean_ctor_get(v_s_2381_, 2);
v_inputString_2384_ = lean_ctor_get(v_toInputContext_2382_, 0);
v_curr_2385_ = lean_string_utf8_get(v_inputString_2384_, v_pos_2383_);
v___x_2386_ = 46;
v___x_2387_ = lean_uint32_dec_eq(v_curr_2385_, v___x_2386_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; lean_object* v___x_2389_; 
v___x_2388_ = lean_box(v___x_2387_);
v___x_2389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2389_, 0, v_s_2381_);
lean_ctor_set(v___x_2389_, 1, v___x_2388_);
return v___x_2389_;
}
else
{
lean_object* v___f_2390_; lean_object* v_i_2391_; uint8_t v___y_2393_; uint32_t v_curr_2403_; uint32_t v___x_2404_; uint8_t v___x_2405_; 
v___f_2390_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v_i_2391_ = lean_string_utf8_next(v_inputString_2384_, v_pos_2383_);
v_curr_2403_ = lean_string_utf8_get(v_inputString_2384_, v_i_2391_);
v___x_2404_ = 48;
v___x_2405_ = lean_uint32_dec_le(v___x_2404_, v_curr_2403_);
if (v___x_2405_ == 0)
{
v___y_2393_ = v___x_2405_;
goto v___jp_2392_;
}
else
{
uint32_t v___x_2406_; uint8_t v___x_2407_; 
v___x_2406_ = 57;
v___x_2407_ = lean_uint32_dec_le(v_curr_2403_, v___x_2406_);
v___y_2393_ = v___x_2407_;
goto v___jp_2392_;
}
v___jp_2392_:
{
if (v___y_2393_ == 0)
{
lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2394_ = l_Lean_Parser_ParserState_setPos(v_s_2381_, v_i_2391_);
v___x_2395_ = lean_box(v___x_2387_);
v___x_2396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2396_, 0, v___x_2394_);
lean_ctor_set(v___x_2396_, 1, v___x_2395_);
return v___x_2396_;
}
else
{
lean_object* v___x_2397_; uint8_t v___x_2398_; lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2397_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2398_ = 0;
v___x_2399_ = l_Lean_Parser_ParserState_setPos(v_s_2381_, v_i_2391_);
v___x_2400_ = l_Lean_Parser_takeDigitsFn(v___f_2390_, v___x_2397_, v___x_2398_, v_c_2380_, v___x_2399_);
v___x_2401_ = lean_box(v___x_2398_);
v___x_2402_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2402_, 0, v___x_2400_);
lean_ctor_set(v___x_2402_, 1, v___x_2401_);
return v___x_2402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot___boxed(lean_object* v_c_2408_, lean_object* v_s_2409_){
_start:
{
lean_object* v_res_2410_; 
v_res_2410_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(v_c_2408_, v_s_2409_);
lean_dec_ref(v_c_2408_);
return v_res_2410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(lean_object* v_startPos_2414_, uint8_t v_includeWhitespace_2415_, lean_object* v_c_2416_, lean_object* v_s_2417_){
_start:
{
lean_object* v___x_2418_; lean_object* v_fst_2419_; lean_object* v_snd_2420_; uint8_t v___x_2421_; lean_object* v_s_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2418_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptDot(v_c_2416_, v_s_2417_);
v_fst_2419_ = lean_ctor_get(v___x_2418_, 0);
lean_inc(v_fst_2419_);
v_snd_2420_ = lean_ctor_get(v___x_2418_, 1);
lean_inc(v_snd_2420_);
lean_dec_ref(v___x_2418_);
v___x_2421_ = lean_unbox(v_snd_2420_);
lean_dec(v_snd_2420_);
lean_inc(v_startPos_2414_);
v_s_2422_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp(v_startPos_2414_, v_c_2416_, v_fst_2419_, v___x_2421_);
v___x_2423_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1));
v___x_2424_ = l_Lean_Parser_mkNodeToken(v___x_2423_, v_startPos_2414_, v_includeWhitespace_2415_, v_c_2416_, v_s_2422_);
return v___x_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___boxed(lean_object* v_startPos_2425_, lean_object* v_includeWhitespace_2426_, lean_object* v_c_2427_, lean_object* v_s_2428_){
_start:
{
uint8_t v_includeWhitespace_boxed_2429_; lean_object* v_res_2430_; 
v_includeWhitespace_boxed_2429_ = lean_unbox(v_includeWhitespace_2426_);
v_res_2430_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2425_, v_includeWhitespace_boxed_2429_, v_c_2427_, v_s_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn(lean_object* v_startPos_2434_, uint8_t v_includeWhitespace_2435_, lean_object* v_c_2436_, lean_object* v_s_2437_){
_start:
{
lean_object* v___f_2438_; lean_object* v___x_2439_; uint8_t v___x_2440_; lean_object* v_s_2441_; lean_object* v_pos_2442_; lean_object* v_toInputContext_2443_; uint8_t v___x_2444_; 
v___f_2438_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v___x_2439_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__2));
v___x_2440_ = 0;
v_s_2441_ = l_Lean_Parser_takeDigitsFn(v___f_2438_, v___x_2439_, v___x_2440_, v_c_2436_, v_s_2437_);
v_pos_2442_ = lean_ctor_get(v_s_2441_, 2);
lean_inc(v_pos_2442_);
v_toInputContext_2443_ = lean_ctor_get(v_c_2436_, 0);
v___x_2444_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2443_, v_pos_2442_);
if (v___x_2444_ == 0)
{
lean_object* v_inputString_2445_; uint32_t v_curr_2446_; uint8_t v___y_2460_; lean_object* v_j_2463_; uint8_t v___x_2469_; 
v_inputString_2445_ = lean_ctor_get(v_toInputContext_2443_, 0);
v_curr_2446_ = lean_string_utf8_get_fast(v_inputString_2445_, v_pos_2442_);
v_j_2463_ = lean_string_utf8_next(v_inputString_2445_, v_pos_2442_);
lean_dec(v_pos_2442_);
v___x_2469_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2443_, v_j_2463_);
if (v___x_2469_ == 0)
{
goto v___jp_2464_;
}
else
{
if (v___x_2444_ == 0)
{
lean_dec(v_j_2463_);
goto v___jp_2447_;
}
else
{
goto v___jp_2464_;
}
}
v___jp_2447_:
{
uint32_t v___x_2448_; uint8_t v___x_2449_; 
v___x_2448_ = 46;
v___x_2449_ = lean_uint32_dec_eq(v_curr_2446_, v___x_2448_);
if (v___x_2449_ == 0)
{
uint32_t v___x_2450_; uint8_t v___x_2451_; 
v___x_2450_ = 101;
v___x_2451_ = lean_uint32_dec_eq(v_curr_2446_, v___x_2450_);
if (v___x_2451_ == 0)
{
uint32_t v___x_2452_; uint8_t v___x_2453_; 
v___x_2452_ = 69;
v___x_2453_ = lean_uint32_dec_eq(v_curr_2446_, v___x_2452_);
if (v___x_2453_ == 0)
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2455_ = l_Lean_Parser_mkNodeToken(v___x_2454_, v_startPos_2434_, v_includeWhitespace_2435_, v_c_2436_, v_s_2441_);
return v___x_2455_;
}
else
{
lean_object* v___x_2456_; 
v___x_2456_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2434_, v_includeWhitespace_2435_, v_c_2436_, v_s_2441_);
return v___x_2456_;
}
}
else
{
lean_object* v___x_2457_; 
v___x_2457_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2434_, v_includeWhitespace_2435_, v_c_2436_, v_s_2441_);
return v___x_2457_;
}
}
else
{
lean_object* v___x_2458_; 
v___x_2458_ = l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific(v_startPos_2434_, v_includeWhitespace_2435_, v_c_2436_, v_s_2441_);
return v___x_2458_;
}
}
v___jp_2459_:
{
if (v___y_2460_ == 0)
{
goto v___jp_2447_;
}
else
{
lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2461_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2462_ = l_Lean_Parser_mkNodeToken(v___x_2461_, v_startPos_2434_, v_includeWhitespace_2435_, v_c_2436_, v_s_2441_);
return v___x_2462_;
}
}
v___jp_2464_:
{
uint32_t v___x_2465_; uint8_t v___x_2466_; 
v___x_2465_ = 46;
v___x_2466_ = lean_uint32_dec_eq(v_curr_2446_, v___x_2465_);
if (v___x_2466_ == 0)
{
lean_dec(v_j_2463_);
v___y_2460_ = v___x_2466_;
goto v___jp_2459_;
}
else
{
uint32_t v___x_2467_; uint8_t v___x_2468_; 
v___x_2467_ = lean_string_utf8_get_fast(v_inputString_2445_, v_j_2463_);
lean_dec(v_j_2463_);
v___x_2468_ = lean_uint32_dec_eq(v___x_2467_, v___x_2465_);
v___y_2460_ = v___x_2468_;
goto v___jp_2459_;
}
}
}
else
{
lean_object* v___x_2470_; lean_object* v___x_2471_; 
lean_dec(v_pos_2442_);
v___x_2470_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2471_ = l_Lean_Parser_mkNodeToken(v___x_2470_, v_startPos_2434_, v___x_2444_, v_c_2436_, v_s_2441_);
return v___x_2471_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_decimalNumberFn___boxed(lean_object* v_startPos_2472_, lean_object* v_includeWhitespace_2473_, lean_object* v_c_2474_, lean_object* v_s_2475_){
_start:
{
uint8_t v_includeWhitespace_boxed_2476_; lean_object* v_res_2477_; 
v_includeWhitespace_boxed_2476_ = lean_unbox(v_includeWhitespace_2473_);
v_res_2477_ = l_Lean_Parser_decimalNumberFn(v_startPos_2472_, v_includeWhitespace_boxed_2476_, v_c_2474_, v_s_2475_);
return v_res_2477_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_binNumberFn___lam__0(uint32_t v_c_2478_){
_start:
{
uint32_t v___x_2479_; uint8_t v___x_2480_; 
v___x_2479_ = 48;
v___x_2480_ = lean_uint32_dec_eq(v_c_2478_, v___x_2479_);
if (v___x_2480_ == 0)
{
uint32_t v___x_2481_; uint8_t v___x_2482_; 
v___x_2481_ = 49;
v___x_2482_ = lean_uint32_dec_eq(v_c_2478_, v___x_2481_);
return v___x_2482_;
}
else
{
return v___x_2480_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___lam__0___boxed(lean_object* v_c_2483_){
_start:
{
uint32_t v_c_boxed_2484_; uint8_t v_res_2485_; lean_object* v_r_2486_; 
v_c_boxed_2484_ = lean_unbox_uint32(v_c_2483_);
lean_dec(v_c_2483_);
v_res_2485_ = l_Lean_Parser_binNumberFn___lam__0(v_c_boxed_2484_);
v_r_2486_ = lean_box(v_res_2485_);
return v_r_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn(lean_object* v_startPos_2489_, uint8_t v_includeWhitespace_2490_, lean_object* v_c_2491_, lean_object* v_s_2492_){
_start:
{
lean_object* v___f_2493_; lean_object* v___x_2494_; uint8_t v___x_2495_; lean_object* v_s_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v___f_2493_ = ((lean_object*)(l_Lean_Parser_binNumberFn___closed__0));
v___x_2494_ = ((lean_object*)(l_Lean_Parser_binNumberFn___closed__1));
v___x_2495_ = 1;
v_s_2496_ = l_Lean_Parser_takeDigitsFn(v___f_2493_, v___x_2494_, v___x_2495_, v_c_2491_, v_s_2492_);
v___x_2497_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2498_ = l_Lean_Parser_mkNodeToken(v___x_2497_, v_startPos_2489_, v_includeWhitespace_2490_, v_c_2491_, v_s_2496_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_binNumberFn___boxed(lean_object* v_startPos_2499_, lean_object* v_includeWhitespace_2500_, lean_object* v_c_2501_, lean_object* v_s_2502_){
_start:
{
uint8_t v_includeWhitespace_boxed_2503_; lean_object* v_res_2504_; 
v_includeWhitespace_boxed_2503_ = lean_unbox(v_includeWhitespace_2500_);
v_res_2504_ = l_Lean_Parser_binNumberFn(v_startPos_2499_, v_includeWhitespace_boxed_2503_, v_c_2501_, v_s_2502_);
return v_res_2504_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_octalNumberFn___lam__0(uint32_t v_c_2505_){
_start:
{
uint32_t v___x_2506_; uint8_t v___x_2507_; 
v___x_2506_ = 48;
v___x_2507_ = lean_uint32_dec_le(v___x_2506_, v_c_2505_);
if (v___x_2507_ == 0)
{
return v___x_2507_;
}
else
{
uint32_t v___x_2508_; uint8_t v___x_2509_; 
v___x_2508_ = 55;
v___x_2509_ = lean_uint32_dec_le(v_c_2505_, v___x_2508_);
return v___x_2509_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___lam__0___boxed(lean_object* v_c_2510_){
_start:
{
uint32_t v_c_boxed_2511_; uint8_t v_res_2512_; lean_object* v_r_2513_; 
v_c_boxed_2511_ = lean_unbox_uint32(v_c_2510_);
lean_dec(v_c_2510_);
v_res_2512_ = l_Lean_Parser_octalNumberFn___lam__0(v_c_boxed_2511_);
v_r_2513_ = lean_box(v_res_2512_);
return v_r_2513_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn(lean_object* v_startPos_2516_, uint8_t v_includeWhitespace_2517_, lean_object* v_c_2518_, lean_object* v_s_2519_){
_start:
{
lean_object* v___f_2520_; lean_object* v___x_2521_; uint8_t v___x_2522_; lean_object* v_s_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; 
v___f_2520_ = ((lean_object*)(l_Lean_Parser_octalNumberFn___closed__0));
v___x_2521_ = ((lean_object*)(l_Lean_Parser_octalNumberFn___closed__1));
v___x_2522_ = 1;
v_s_2523_ = l_Lean_Parser_takeDigitsFn(v___f_2520_, v___x_2521_, v___x_2522_, v_c_2518_, v_s_2519_);
v___x_2524_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2525_ = l_Lean_Parser_mkNodeToken(v___x_2524_, v_startPos_2516_, v_includeWhitespace_2517_, v_c_2518_, v_s_2523_);
return v___x_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_octalNumberFn___boxed(lean_object* v_startPos_2526_, lean_object* v_includeWhitespace_2527_, lean_object* v_c_2528_, lean_object* v_s_2529_){
_start:
{
uint8_t v_includeWhitespace_boxed_2530_; lean_object* v_res_2531_; 
v_includeWhitespace_boxed_2530_ = lean_unbox(v_includeWhitespace_2527_);
v_res_2531_ = l_Lean_Parser_octalNumberFn(v_startPos_2526_, v_includeWhitespace_boxed_2530_, v_c_2528_, v_s_2529_);
return v_res_2531_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(uint32_t v_c_2532_){
_start:
{
uint8_t v___y_2534_; uint8_t v___y_2540_; uint32_t v___x_2545_; uint8_t v___x_2546_; 
v___x_2545_ = 48;
v___x_2546_ = lean_uint32_dec_le(v___x_2545_, v_c_2532_);
if (v___x_2546_ == 0)
{
v___y_2540_ = v___x_2546_;
goto v___jp_2539_;
}
else
{
uint32_t v___x_2547_; uint8_t v___x_2548_; 
v___x_2547_ = 57;
v___x_2548_ = lean_uint32_dec_le(v_c_2532_, v___x_2547_);
v___y_2540_ = v___x_2548_;
goto v___jp_2539_;
}
v___jp_2533_:
{
if (v___y_2534_ == 0)
{
uint32_t v___x_2535_; uint8_t v___x_2536_; 
v___x_2535_ = 65;
v___x_2536_ = lean_uint32_dec_le(v___x_2535_, v_c_2532_);
if (v___x_2536_ == 0)
{
return v___x_2536_;
}
else
{
uint32_t v___x_2537_; uint8_t v___x_2538_; 
v___x_2537_ = 70;
v___x_2538_ = lean_uint32_dec_le(v_c_2532_, v___x_2537_);
return v___x_2538_;
}
}
else
{
return v___y_2534_;
}
}
v___jp_2539_:
{
if (v___y_2540_ == 0)
{
uint32_t v___x_2541_; uint8_t v___x_2542_; 
v___x_2541_ = 97;
v___x_2542_ = lean_uint32_dec_le(v___x_2541_, v_c_2532_);
if (v___x_2542_ == 0)
{
v___y_2534_ = v___x_2542_;
goto v___jp_2533_;
}
else
{
uint32_t v___x_2543_; uint8_t v___x_2544_; 
v___x_2543_ = 102;
v___x_2544_ = lean_uint32_dec_le(v_c_2532_, v___x_2543_);
v___y_2534_ = v___x_2544_;
goto v___jp_2533_;
}
}
else
{
return v___y_2540_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit___boxed(lean_object* v_c_2549_){
_start:
{
uint32_t v_c_boxed_2550_; uint8_t v_res_2551_; lean_object* v_r_2552_; 
v_c_boxed_2550_ = lean_unbox_uint32(v_c_2549_);
lean_dec(v_c_2549_);
v_res_2551_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isHexDigit(v_c_boxed_2550_);
v_r_2552_ = lean_box(v_res_2551_);
return v_r_2552_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_hexNumberFn___lam__0(uint32_t v___y_2553_){
_start:
{
uint8_t v___y_2555_; uint8_t v___y_2561_; uint32_t v___x_2566_; uint8_t v___x_2567_; 
v___x_2566_ = 48;
v___x_2567_ = lean_uint32_dec_le(v___x_2566_, v___y_2553_);
if (v___x_2567_ == 0)
{
v___y_2561_ = v___x_2567_;
goto v___jp_2560_;
}
else
{
uint32_t v___x_2568_; uint8_t v___x_2569_; 
v___x_2568_ = 57;
v___x_2569_ = lean_uint32_dec_le(v___y_2553_, v___x_2568_);
v___y_2561_ = v___x_2569_;
goto v___jp_2560_;
}
v___jp_2554_:
{
if (v___y_2555_ == 0)
{
uint32_t v___x_2556_; uint8_t v___x_2557_; 
v___x_2556_ = 65;
v___x_2557_ = lean_uint32_dec_le(v___x_2556_, v___y_2553_);
if (v___x_2557_ == 0)
{
return v___x_2557_;
}
else
{
uint32_t v___x_2558_; uint8_t v___x_2559_; 
v___x_2558_ = 70;
v___x_2559_ = lean_uint32_dec_le(v___y_2553_, v___x_2558_);
return v___x_2559_;
}
}
else
{
return v___y_2555_;
}
}
v___jp_2560_:
{
if (v___y_2561_ == 0)
{
uint32_t v___x_2562_; uint8_t v___x_2563_; 
v___x_2562_ = 97;
v___x_2563_ = lean_uint32_dec_le(v___x_2562_, v___y_2553_);
if (v___x_2563_ == 0)
{
v___y_2555_ = v___x_2563_;
goto v___jp_2554_;
}
else
{
uint32_t v___x_2564_; uint8_t v___x_2565_; 
v___x_2564_ = 102;
v___x_2565_ = lean_uint32_dec_le(v___y_2553_, v___x_2564_);
v___y_2555_ = v___x_2565_;
goto v___jp_2554_;
}
}
else
{
return v___y_2561_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___lam__0___boxed(lean_object* v___y_2570_){
_start:
{
uint32_t v___y_54__boxed_2571_; uint8_t v_res_2572_; lean_object* v_r_2573_; 
v___y_54__boxed_2571_ = lean_unbox_uint32(v___y_2570_);
lean_dec(v___y_2570_);
v_res_2572_ = l_Lean_Parser_hexNumberFn___lam__0(v___y_54__boxed_2571_);
v_r_2573_ = lean_box(v_res_2572_);
return v_r_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn(lean_object* v_startPos_2576_, uint8_t v_includeWhitespace_2577_, lean_object* v_kind_2578_, lean_object* v_c_2579_, lean_object* v_s_2580_){
_start:
{
lean_object* v___f_2581_; lean_object* v___x_2582_; uint8_t v___x_2583_; lean_object* v_s_2584_; lean_object* v___x_2585_; 
v___f_2581_ = ((lean_object*)(l_Lean_Parser_hexNumberFn___closed__0));
v___x_2582_ = ((lean_object*)(l_Lean_Parser_hexNumberFn___closed__1));
v___x_2583_ = 1;
v_s_2584_ = l_Lean_Parser_takeDigitsFn(v___f_2581_, v___x_2582_, v___x_2583_, v_c_2579_, v_s_2580_);
v___x_2585_ = l_Lean_Parser_mkNodeToken(v_kind_2578_, v_startPos_2576_, v_includeWhitespace_2577_, v_c_2579_, v_s_2584_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexNumberFn___boxed(lean_object* v_startPos_2586_, lean_object* v_includeWhitespace_2587_, lean_object* v_kind_2588_, lean_object* v_c_2589_, lean_object* v_s_2590_){
_start:
{
uint8_t v_includeWhitespace_boxed_2591_; lean_object* v_res_2592_; 
v_includeWhitespace_boxed_2591_ = lean_unbox(v_includeWhitespace_2587_);
v_res_2592_ = l_Lean_Parser_hexNumberFn(v_startPos_2586_, v_includeWhitespace_boxed_2591_, v_kind_2588_, v_c_2589_, v_s_2590_);
return v_res_2592_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux(uint8_t v_includeWhitespace_2594_, lean_object* v_c_2595_, lean_object* v_s_2596_){
_start:
{
lean_object* v_pos_2597_; uint8_t v___y_2599_; lean_object* v_toInputContext_2604_; uint8_t v___x_2605_; 
v_pos_2597_ = lean_ctor_get(v_s_2596_, 2);
v_toInputContext_2604_ = lean_ctor_get(v_c_2595_, 0);
v___x_2605_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2604_, v_pos_2597_);
if (v___x_2605_ == 0)
{
lean_object* v_inputString_2606_; uint32_t v_curr_2607_; uint32_t v___x_2608_; uint8_t v___x_2609_; 
v_inputString_2606_ = lean_ctor_get(v_toInputContext_2604_, 0);
v_curr_2607_ = lean_string_utf8_get_fast(v_inputString_2606_, v_pos_2597_);
v___x_2608_ = 48;
v___x_2609_ = lean_uint32_dec_eq(v_curr_2607_, v___x_2608_);
if (v___x_2609_ == 0)
{
uint8_t v___x_2610_; 
v___x_2610_ = lean_uint32_dec_le(v___x_2608_, v_curr_2607_);
if (v___x_2610_ == 0)
{
v___y_2599_ = v___x_2610_;
goto v___jp_2598_;
}
else
{
uint32_t v___x_2611_; uint8_t v___x_2612_; 
v___x_2611_ = 57;
v___x_2612_ = lean_uint32_dec_le(v_curr_2607_, v___x_2611_);
v___y_2599_ = v___x_2612_;
goto v___jp_2598_;
}
}
else
{
lean_object* v_i_2613_; uint32_t v_curr_2624_; uint32_t v___x_2625_; uint8_t v___x_2626_; 
lean_inc(v_pos_2597_);
v_i_2613_ = lean_string_utf8_next_fast(v_inputString_2606_, v_pos_2597_);
v_curr_2624_ = lean_string_utf8_get(v_inputString_2606_, v_i_2613_);
v___x_2625_ = 98;
v___x_2626_ = lean_uint32_dec_eq(v_curr_2624_, v___x_2625_);
if (v___x_2626_ == 0)
{
uint32_t v___x_2627_; uint8_t v___x_2628_; 
v___x_2627_ = 66;
v___x_2628_ = lean_uint32_dec_eq(v_curr_2624_, v___x_2627_);
if (v___x_2628_ == 0)
{
uint32_t v___x_2629_; uint8_t v___x_2630_; 
v___x_2629_ = 111;
v___x_2630_ = lean_uint32_dec_eq(v_curr_2624_, v___x_2629_);
if (v___x_2630_ == 0)
{
uint32_t v___x_2631_; uint8_t v___x_2632_; 
v___x_2631_ = 79;
v___x_2632_ = lean_uint32_dec_eq(v_curr_2624_, v___x_2631_);
if (v___x_2632_ == 0)
{
uint32_t v___x_2633_; uint8_t v___x_2634_; 
v___x_2633_ = 120;
v___x_2634_ = lean_uint32_dec_eq(v_curr_2624_, v___x_2633_);
if (v___x_2634_ == 0)
{
uint32_t v___x_2635_; uint8_t v___x_2636_; 
v___x_2635_ = 88;
v___x_2636_ = lean_uint32_dec_eq(v_curr_2624_, v___x_2635_);
if (v___x_2636_ == 0)
{
lean_object* v___x_2637_; lean_object* v___x_2638_; 
v___x_2637_ = l_Lean_Parser_ParserState_setPos(v_s_2596_, v_i_2613_);
v___x_2638_ = l_Lean_Parser_decimalNumberFn(v_pos_2597_, v_includeWhitespace_2594_, v_c_2595_, v___x_2637_);
return v___x_2638_;
}
else
{
goto v___jp_2614_;
}
}
else
{
goto v___jp_2614_;
}
}
else
{
goto v___jp_2618_;
}
}
else
{
goto v___jp_2618_;
}
}
else
{
goto v___jp_2621_;
}
}
else
{
goto v___jp_2621_;
}
v___jp_2614_:
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v___x_2615_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_2616_ = l_Lean_Parser_ParserState_next(v_s_2596_, v_c_2595_, v_i_2613_);
v___x_2617_ = l_Lean_Parser_hexNumberFn(v_pos_2597_, v_includeWhitespace_2594_, v___x_2615_, v_c_2595_, v___x_2616_);
return v___x_2617_;
}
v___jp_2618_:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2619_ = l_Lean_Parser_ParserState_next(v_s_2596_, v_c_2595_, v_i_2613_);
v___x_2620_ = l_Lean_Parser_octalNumberFn(v_pos_2597_, v_includeWhitespace_2594_, v_c_2595_, v___x_2619_);
return v___x_2620_;
}
v___jp_2621_:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = l_Lean_Parser_ParserState_next(v_s_2596_, v_c_2595_, v_i_2613_);
v___x_2623_ = l_Lean_Parser_binNumberFn(v_pos_2597_, v_includeWhitespace_2594_, v_c_2595_, v___x_2622_);
return v___x_2623_;
}
}
}
else
{
lean_object* v___x_2639_; lean_object* v___x_2640_; 
lean_dec_ref(v_c_2595_);
v___x_2639_ = lean_box(0);
v___x_2640_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2596_, v___x_2639_);
return v___x_2640_;
}
v___jp_2598_:
{
if (v___y_2599_ == 0)
{
lean_object* v___x_2600_; lean_object* v___x_2601_; 
lean_dec_ref(v_c_2595_);
v___x_2600_ = ((lean_object*)(l_Lean_Parser_numberFnAux___closed__0));
v___x_2601_ = l_Lean_Parser_ParserState_mkError(v_s_2596_, v___x_2600_);
return v___x_2601_;
}
else
{
lean_object* v___x_2602_; lean_object* v___x_2603_; 
lean_inc(v_pos_2597_);
v___x_2602_ = l_Lean_Parser_ParserState_next(v_s_2596_, v_c_2595_, v_pos_2597_);
v___x_2603_ = l_Lean_Parser_decimalNumberFn(v_pos_2597_, v_includeWhitespace_2594_, v_c_2595_, v___x_2602_);
return v___x_2603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numberFnAux___boxed(lean_object* v_includeWhitespace_2641_, lean_object* v_c_2642_, lean_object* v_s_2643_){
_start:
{
uint8_t v_includeWhitespace_boxed_2644_; lean_object* v_res_2645_; 
v_includeWhitespace_boxed_2644_ = lean_unbox(v_includeWhitespace_2641_);
v_res_2645_ = l_Lean_Parser_numberFnAux(v_includeWhitespace_boxed_2644_, v_c_2642_, v_s_2643_);
return v_res_2645_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_isIdCont(lean_object* v_c_2646_, lean_object* v_s_2647_){
_start:
{
lean_object* v_toInputContext_2648_; lean_object* v_pos_2649_; lean_object* v_inputString_2650_; uint32_t v_curr_2651_; uint32_t v___x_2652_; uint8_t v___x_2653_; 
v_toInputContext_2648_ = lean_ctor_get(v_c_2646_, 0);
v_pos_2649_ = lean_ctor_get(v_s_2647_, 2);
v_inputString_2650_ = lean_ctor_get(v_toInputContext_2648_, 0);
v_curr_2651_ = lean_string_utf8_get(v_inputString_2650_, v_pos_2649_);
v___x_2652_ = 46;
v___x_2653_ = lean_uint32_dec_eq(v_curr_2651_, v___x_2652_);
if (v___x_2653_ == 0)
{
return v___x_2653_;
}
else
{
lean_object* v_i_2654_; uint8_t v___x_2655_; 
v_i_2654_ = lean_string_utf8_next(v_inputString_2650_, v_pos_2649_);
v___x_2655_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2648_, v_i_2654_);
if (v___x_2655_ == 0)
{
uint32_t v_curr_2656_; uint8_t v___y_2658_; uint8_t v___y_2662_; uint32_t v___x_2671_; uint8_t v___x_2672_; 
v_curr_2656_ = lean_string_utf8_get(v_inputString_2650_, v_i_2654_);
lean_dec(v_i_2654_);
v___x_2671_ = 65;
v___x_2672_ = lean_uint32_dec_le(v___x_2671_, v_curr_2656_);
if (v___x_2672_ == 0)
{
goto v___jp_2666_;
}
else
{
uint32_t v___x_2673_; uint8_t v___x_2674_; 
v___x_2673_ = 90;
v___x_2674_ = lean_uint32_dec_le(v_curr_2656_, v___x_2673_);
if (v___x_2674_ == 0)
{
goto v___jp_2666_;
}
else
{
return v___x_2653_;
}
}
v___jp_2657_:
{
if (v___y_2658_ == 0)
{
uint32_t v___x_2659_; uint8_t v___x_2660_; 
v___x_2659_ = 171;
v___x_2660_ = lean_uint32_dec_eq(v_curr_2656_, v___x_2659_);
return v___x_2660_;
}
else
{
return v___x_2653_;
}
}
v___jp_2661_:
{
if (v___y_2662_ == 0)
{
uint32_t v___x_2663_; uint8_t v___x_2664_; 
v___x_2663_ = 95;
v___x_2664_ = lean_uint32_dec_eq(v_curr_2656_, v___x_2663_);
if (v___x_2664_ == 0)
{
uint8_t v___x_2665_; 
v___x_2665_ = l_Lean_isLetterLike(v_curr_2656_);
v___y_2658_ = v___x_2665_;
goto v___jp_2657_;
}
else
{
v___y_2658_ = v___x_2664_;
goto v___jp_2657_;
}
}
else
{
return v___x_2653_;
}
}
v___jp_2666_:
{
uint32_t v___x_2667_; uint8_t v___x_2668_; 
v___x_2667_ = 97;
v___x_2668_ = lean_uint32_dec_le(v___x_2667_, v_curr_2656_);
if (v___x_2668_ == 0)
{
v___y_2662_ = v___x_2668_;
goto v___jp_2661_;
}
else
{
uint32_t v___x_2669_; uint8_t v___x_2670_; 
v___x_2669_ = 122;
v___x_2670_ = lean_uint32_dec_le(v_curr_2656_, v___x_2669_);
v___y_2662_ = v___x_2670_;
goto v___jp_2661_;
}
}
}
else
{
uint8_t v___x_2675_; 
lean_dec(v_i_2654_);
v___x_2675_ = 0;
return v___x_2675_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_isIdCont___boxed(lean_object* v_c_2676_, lean_object* v_s_2677_){
_start:
{
uint8_t v_res_2678_; lean_object* v_r_2679_; 
v_res_2678_ = l_Lean_Parser_isIdCont(v_c_2676_, v_s_2677_);
lean_dec_ref(v_s_2677_);
lean_dec_ref(v_c_2676_);
v_r_2679_ = lean_box(v_res_2678_);
return v_r_2679_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(lean_object* v_idStartPos_2680_, lean_object* v_idStopPos_2681_, lean_object* v_tk_2682_){
_start:
{
if (lean_obj_tag(v_tk_2682_) == 0)
{
uint8_t v___x_2683_; 
v___x_2683_ = 0;
return v___x_2683_;
}
else
{
lean_object* v_val_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; uint8_t v___x_2687_; 
v_val_2684_ = lean_ctor_get(v_tk_2682_, 0);
v___x_2685_ = lean_nat_sub(v_idStopPos_2681_, v_idStartPos_2680_);
v___x_2686_ = lean_string_utf8_byte_size(v_val_2684_);
v___x_2687_ = lean_nat_dec_le(v___x_2685_, v___x_2686_);
lean_dec(v___x_2685_);
return v___x_2687_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isToken___boxed(lean_object* v_idStartPos_2688_, lean_object* v_idStopPos_2689_, lean_object* v_tk_2690_){
_start:
{
uint8_t v_res_2691_; lean_object* v_r_2692_; 
v_res_2691_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(v_idStartPos_2688_, v_idStopPos_2689_, v_tk_2690_);
lean_dec(v_tk_2690_);
lean_dec(v_idStopPos_2689_);
lean_dec(v_idStartPos_2688_);
v_r_2692_ = lean_box(v_res_2691_);
return v_r_2692_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_mkTokenAndFixPos_spec__0(lean_object* v_x_2693_, lean_object* v_x_2694_){
_start:
{
if (lean_obj_tag(v_x_2693_) == 0)
{
if (lean_obj_tag(v_x_2694_) == 0)
{
uint8_t v___x_2695_; 
v___x_2695_ = 1;
return v___x_2695_;
}
else
{
uint8_t v___x_2696_; 
v___x_2696_ = 0;
return v___x_2696_;
}
}
else
{
if (lean_obj_tag(v_x_2694_) == 0)
{
uint8_t v___x_2697_; 
v___x_2697_ = 0;
return v___x_2697_;
}
else
{
lean_object* v_val_2698_; lean_object* v_val_2699_; uint8_t v___x_2700_; 
v_val_2698_ = lean_ctor_get(v_x_2693_, 0);
v_val_2699_ = lean_ctor_get(v_x_2694_, 0);
v___x_2700_ = lean_string_dec_eq(v_val_2698_, v_val_2699_);
return v___x_2700_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_mkTokenAndFixPos_spec__0___boxed(lean_object* v_x_2701_, lean_object* v_x_2702_){
_start:
{
uint8_t v_res_2703_; lean_object* v_r_2704_; 
v_res_2703_ = l_Option_instBEq_beq___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_x_2701_, v_x_2702_);
lean_dec(v_x_2702_);
lean_dec(v_x_2701_);
v_r_2704_ = lean_box(v_res_2703_);
return v_r_2704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos(lean_object* v_startPos_2707_, lean_object* v_tk_2708_, lean_object* v_c_2709_, lean_object* v_s_2710_){
_start:
{
if (lean_obj_tag(v_tk_2708_) == 0)
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; 
lean_dec_ref(v_c_2709_);
v___x_2711_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__0));
v___x_2712_ = lean_box(0);
v___x_2713_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_2710_, v___x_2711_, v_startPos_2707_, v___x_2712_);
return v___x_2713_;
}
else
{
lean_object* v_toCacheableParserContext_2714_; lean_object* v_val_2715_; lean_object* v_toInputContext_2716_; lean_object* v_forbiddenTk_x3f_2717_; uint8_t v___x_2718_; 
v_toCacheableParserContext_2714_ = lean_ctor_get(v_c_2709_, 2);
v_val_2715_ = lean_ctor_get(v_tk_2708_, 0);
v_toInputContext_2716_ = lean_ctor_get(v_c_2709_, 0);
lean_inc_ref(v_toInputContext_2716_);
v_forbiddenTk_x3f_2717_ = lean_ctor_get(v_toCacheableParserContext_2714_, 3);
v___x_2718_ = l_Option_instBEq_beq___at___00Lean_Parser_mkTokenAndFixPos_spec__0(v_forbiddenTk_x3f_2717_, v_tk_2708_);
if (v___x_2718_ == 0)
{
lean_object* v_leading_2719_; lean_object* v___x_2720_; lean_object* v_stopPos_2721_; lean_object* v_s_2722_; lean_object* v_s_2723_; lean_object* v___y_2725_; lean_object* v_pos_2729_; lean_object* v_inputString_2730_; lean_object* v_endPos_2731_; uint8_t v___x_2732_; 
lean_inc(v_startPos_2707_);
v_leading_2719_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2709_, v_startPos_2707_);
v___x_2720_ = lean_string_utf8_byte_size(v_val_2715_);
v_stopPos_2721_ = lean_nat_add(v_startPos_2707_, v___x_2720_);
lean_inc(v_stopPos_2721_);
v_s_2722_ = l_Lean_Parser_ParserState_setPos(v_s_2710_, v_stopPos_2721_);
v_s_2723_ = l_Lean_Parser_whitespace(v_c_2709_, v_s_2722_);
v_pos_2729_ = lean_ctor_get(v_s_2723_, 2);
lean_inc(v_pos_2729_);
v_inputString_2730_ = lean_ctor_get(v_toInputContext_2716_, 0);
lean_inc_ref(v_inputString_2730_);
v_endPos_2731_ = lean_ctor_get(v_toInputContext_2716_, 3);
lean_inc(v_endPos_2731_);
lean_dec_ref(v_toInputContext_2716_);
v___x_2732_ = lean_nat_dec_le(v_pos_2729_, v_endPos_2731_);
if (v___x_2732_ == 0)
{
lean_object* v___x_2733_; 
lean_dec(v_pos_2729_);
lean_inc(v_stopPos_2721_);
v___x_2733_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2733_, 0, v_inputString_2730_);
lean_ctor_set(v___x_2733_, 1, v_stopPos_2721_);
lean_ctor_set(v___x_2733_, 2, v_endPos_2731_);
v___y_2725_ = v___x_2733_;
goto v___jp_2724_;
}
else
{
lean_object* v___x_2734_; 
lean_dec(v_endPos_2731_);
lean_inc(v_stopPos_2721_);
v___x_2734_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2734_, 0, v_inputString_2730_);
lean_ctor_set(v___x_2734_, 1, v_stopPos_2721_);
lean_ctor_set(v___x_2734_, 2, v_pos_2729_);
v___y_2725_ = v___x_2734_;
goto v___jp_2724_;
}
v___jp_2724_:
{
lean_object* v___x_2726_; lean_object* v_atom_2727_; lean_object* v___x_2728_; 
v___x_2726_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2726_, 0, v_leading_2719_);
lean_ctor_set(v___x_2726_, 1, v_startPos_2707_);
lean_ctor_set(v___x_2726_, 2, v___y_2725_);
lean_ctor_set(v___x_2726_, 3, v_stopPos_2721_);
lean_inc(v_val_2715_);
v_atom_2727_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_atom_2727_, 0, v___x_2726_);
lean_ctor_set(v_atom_2727_, 1, v_val_2715_);
v___x_2728_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2723_, v_atom_2727_, v___x_2718_);
return v___x_2728_;
}
}
else
{
lean_object* v___x_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
lean_dec_ref(v_toInputContext_2716_);
lean_dec_ref(v_c_2709_);
v___x_2735_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__1));
v___x_2736_ = lean_box(0);
v___x_2737_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_2710_, v___x_2735_, v_startPos_2707_, v___x_2736_);
return v___x_2737_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkTokenAndFixPos___boxed(lean_object* v_startPos_2738_, lean_object* v_tk_2739_, lean_object* v_c_2740_, lean_object* v_s_2741_){
_start:
{
lean_object* v_res_2742_; 
v_res_2742_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2738_, v_tk_2739_, v_c_2740_, v_s_2741_);
lean_dec(v_tk_2739_);
return v_res_2742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult(lean_object* v_startPos_2743_, lean_object* v_tk_2744_, lean_object* v_val_2745_, uint8_t v_includeWhitespace_2746_, lean_object* v_c_2747_, lean_object* v_s_2748_){
_start:
{
lean_object* v_pos_2749_; uint8_t v___x_2750_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; 
v_pos_2749_ = lean_ctor_get(v_s_2748_, 2);
v___x_2750_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isToken(v_startPos_2743_, v_pos_2749_, v_tk_2744_);
if (v___x_2750_ == 0)
{
lean_object* v_toInputContext_2760_; lean_object* v_inputString_2761_; lean_object* v_endPos_2762_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v_pos_2766_; lean_object* v___y_2772_; uint8_t v___x_2775_; 
lean_inc(v_pos_2749_);
v_toInputContext_2760_ = lean_ctor_get(v_c_2747_, 0);
v_inputString_2761_ = lean_ctor_get(v_toInputContext_2760_, 0);
lean_inc_ref(v_inputString_2761_);
v_endPos_2762_ = lean_ctor_get(v_toInputContext_2760_, 3);
lean_inc(v_endPos_2762_);
v___x_2775_ = lean_nat_dec_le(v_pos_2749_, v_endPos_2762_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; 
lean_inc(v_endPos_2762_);
lean_inc(v_startPos_2743_);
lean_inc_ref(v_inputString_2761_);
v___x_2776_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2776_, 0, v_inputString_2761_);
lean_ctor_set(v___x_2776_, 1, v_startPos_2743_);
lean_ctor_set(v___x_2776_, 2, v_endPos_2762_);
v___y_2772_ = v___x_2776_;
goto v___jp_2771_;
}
else
{
lean_object* v___x_2777_; 
lean_inc(v_pos_2749_);
lean_inc(v_startPos_2743_);
lean_inc_ref(v_inputString_2761_);
v___x_2777_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2777_, 0, v_inputString_2761_);
lean_ctor_set(v___x_2777_, 1, v_startPos_2743_);
lean_ctor_set(v___x_2777_, 2, v_pos_2749_);
v___y_2772_ = v___x_2777_;
goto v___jp_2771_;
}
v___jp_2763_:
{
lean_object* v_leading_2767_; uint8_t v___x_2768_; 
lean_inc(v_startPos_2743_);
v_leading_2767_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_2747_, v_startPos_2743_);
lean_dec_ref(v_c_2747_);
v___x_2768_ = lean_nat_dec_le(v_pos_2766_, v_endPos_2762_);
if (v___x_2768_ == 0)
{
lean_object* v___x_2769_; 
lean_dec(v_pos_2766_);
lean_inc(v_pos_2749_);
v___x_2769_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2769_, 0, v_inputString_2761_);
lean_ctor_set(v___x_2769_, 1, v_pos_2749_);
lean_ctor_set(v___x_2769_, 2, v_endPos_2762_);
v___y_2752_ = v_leading_2767_;
v___y_2753_ = v___y_2765_;
v___y_2754_ = v___y_2764_;
v___y_2755_ = v___x_2769_;
goto v___jp_2751_;
}
else
{
lean_object* v___x_2770_; 
lean_dec(v_endPos_2762_);
lean_inc(v_pos_2749_);
v___x_2770_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2770_, 0, v_inputString_2761_);
lean_ctor_set(v___x_2770_, 1, v_pos_2749_);
lean_ctor_set(v___x_2770_, 2, v_pos_2766_);
v___y_2752_ = v_leading_2767_;
v___y_2753_ = v___y_2765_;
v___y_2754_ = v___y_2764_;
v___y_2755_ = v___x_2770_;
goto v___jp_2751_;
}
}
v___jp_2771_:
{
if (v_includeWhitespace_2746_ == 0)
{
lean_inc(v_pos_2749_);
v___y_2764_ = v___y_2772_;
v___y_2765_ = v_s_2748_;
v_pos_2766_ = v_pos_2749_;
goto v___jp_2763_;
}
else
{
lean_object* v___x_2773_; lean_object* v_pos_2774_; 
lean_inc_ref(v_c_2747_);
v___x_2773_ = l_Lean_Parser_whitespace(v_c_2747_, v_s_2748_);
v_pos_2774_ = lean_ctor_get(v___x_2773_, 2);
lean_inc(v_pos_2774_);
v___y_2764_ = v___y_2772_;
v___y_2765_ = v___x_2773_;
v_pos_2766_ = v_pos_2774_;
goto v___jp_2763_;
}
}
}
else
{
lean_object* v___x_2778_; 
lean_dec(v_val_2745_);
v___x_2778_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2743_, v_tk_2744_, v_c_2747_, v_s_2748_);
return v___x_2778_;
}
v___jp_2751_:
{
lean_object* v_info_2756_; lean_object* v___x_2757_; lean_object* v_atom_2758_; lean_object* v___x_2759_; 
v_info_2756_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_2756_, 0, v___y_2752_);
lean_ctor_set(v_info_2756_, 1, v_startPos_2743_);
lean_ctor_set(v_info_2756_, 2, v___y_2755_);
lean_ctor_set(v_info_2756_, 3, v_pos_2749_);
v___x_2757_ = lean_box(0);
v_atom_2758_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_atom_2758_, 0, v_info_2756_);
lean_ctor_set(v_atom_2758_, 1, v___y_2754_);
lean_ctor_set(v_atom_2758_, 2, v_val_2745_);
lean_ctor_set(v_atom_2758_, 3, v___x_2757_);
v___x_2759_ = l_Lean_Parser_ParserState_pushSyntax(v___y_2753_, v_atom_2758_, v___x_2750_);
return v___x_2759_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdResult___boxed(lean_object* v_startPos_2779_, lean_object* v_tk_2780_, lean_object* v_val_2781_, lean_object* v_includeWhitespace_2782_, lean_object* v_c_2783_, lean_object* v_s_2784_){
_start:
{
uint8_t v_includeWhitespace_boxed_2785_; lean_object* v_res_2786_; 
v_includeWhitespace_boxed_2785_ = lean_unbox(v_includeWhitespace_2782_);
v_res_2786_ = l_Lean_Parser_mkIdResult(v_startPos_2779_, v_tk_2780_, v_val_2781_, v_includeWhitespace_boxed_2785_, v_c_2783_, v_s_2784_);
lean_dec(v_tk_2780_);
return v_res_2786_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(uint32_t v___y_2787_){
_start:
{
uint8_t v___y_2789_; uint8_t v___y_2801_; uint32_t v___x_2811_; uint8_t v___x_2812_; 
v___x_2811_ = 65;
v___x_2812_ = lean_uint32_dec_le(v___x_2811_, v___y_2787_);
if (v___x_2812_ == 0)
{
goto v___jp_2806_;
}
else
{
uint32_t v___x_2813_; uint8_t v___x_2814_; 
v___x_2813_ = 90;
v___x_2814_ = lean_uint32_dec_le(v___y_2787_, v___x_2813_);
if (v___x_2814_ == 0)
{
goto v___jp_2806_;
}
else
{
return v___x_2814_;
}
}
v___jp_2788_:
{
if (v___y_2789_ == 0)
{
uint32_t v___x_2790_; uint8_t v___x_2791_; 
v___x_2790_ = 95;
v___x_2791_ = lean_uint32_dec_eq(v___y_2787_, v___x_2790_);
if (v___x_2791_ == 0)
{
uint32_t v___x_2792_; uint8_t v___x_2793_; 
v___x_2792_ = 39;
v___x_2793_ = lean_uint32_dec_eq(v___y_2787_, v___x_2792_);
if (v___x_2793_ == 0)
{
uint32_t v___x_2794_; uint8_t v___x_2795_; 
v___x_2794_ = 33;
v___x_2795_ = lean_uint32_dec_eq(v___y_2787_, v___x_2794_);
if (v___x_2795_ == 0)
{
uint32_t v___x_2796_; uint8_t v___x_2797_; 
v___x_2796_ = 63;
v___x_2797_ = lean_uint32_dec_eq(v___y_2787_, v___x_2796_);
if (v___x_2797_ == 0)
{
uint8_t v___x_2798_; 
v___x_2798_ = l_Lean_isLetterLike(v___y_2787_);
if (v___x_2798_ == 0)
{
uint8_t v___x_2799_; 
v___x_2799_ = l_Lean_isSubScriptAlnum(v___y_2787_);
return v___x_2799_;
}
else
{
return v___x_2798_;
}
}
else
{
return v___x_2797_;
}
}
else
{
return v___x_2795_;
}
}
else
{
return v___x_2793_;
}
}
else
{
return v___x_2791_;
}
}
else
{
return v___y_2789_;
}
}
v___jp_2800_:
{
if (v___y_2801_ == 0)
{
uint32_t v___x_2802_; uint8_t v___x_2803_; 
v___x_2802_ = 48;
v___x_2803_ = lean_uint32_dec_le(v___x_2802_, v___y_2787_);
if (v___x_2803_ == 0)
{
v___y_2789_ = v___x_2803_;
goto v___jp_2788_;
}
else
{
uint32_t v___x_2804_; uint8_t v___x_2805_; 
v___x_2804_ = 57;
v___x_2805_ = lean_uint32_dec_le(v___y_2787_, v___x_2804_);
v___y_2789_ = v___x_2805_;
goto v___jp_2788_;
}
}
else
{
return v___y_2801_;
}
}
v___jp_2806_:
{
uint32_t v___x_2807_; uint8_t v___x_2808_; 
v___x_2807_ = 97;
v___x_2808_ = lean_uint32_dec_le(v___x_2807_, v___y_2787_);
if (v___x_2808_ == 0)
{
v___y_2801_ = v___x_2808_;
goto v___jp_2800_;
}
else
{
uint32_t v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = 122;
v___x_2810_ = lean_uint32_dec_le(v___y_2787_, v___x_2809_);
v___y_2801_ = v___x_2810_;
goto v___jp_2800_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0___boxed(lean_object* v___y_2815_){
_start:
{
uint32_t v___y_633__boxed_2816_; uint8_t v_res_2817_; lean_object* v_r_2818_; 
v___y_633__boxed_2816_ = lean_unbox_uint32(v___y_2815_);
lean_dec(v___y_2815_);
v_res_2817_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__0(v___y_633__boxed_2816_);
v_r_2818_ = lean_box(v_res_2817_);
return v_r_2818_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(uint32_t v___y_2819_){
_start:
{
uint32_t v___x_2820_; uint8_t v___x_2821_; 
v___x_2820_ = 187;
v___x_2821_ = lean_uint32_dec_eq(v___y_2819_, v___x_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1___boxed(lean_object* v___y_2822_){
_start:
{
uint32_t v___y_690__boxed_2823_; uint8_t v_res_2824_; lean_object* v_r_2825_; 
v___y_690__boxed_2823_ = lean_unbox_uint32(v___y_2822_);
lean_dec(v___y_2822_);
v_res_2824_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___lam__1(v___y_690__boxed_2823_);
v_r_2825_ = lean_box(v_res_2824_);
return v_r_2825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(lean_object* v_startPos_2829_, lean_object* v_tk_2830_, uint8_t v_includeWhitespace_2831_, lean_object* v_r_2832_, lean_object* v_c_2833_, lean_object* v_s_2834_){
_start:
{
lean_object* v_pos_2835_; lean_object* v_toInputContext_2836_; uint8_t v___x_2837_; 
v_pos_2835_ = lean_ctor_get(v_s_2834_, 2);
v_toInputContext_2836_ = lean_ctor_get(v_c_2833_, 0);
v___x_2837_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2836_, v_pos_2835_);
if (v___x_2837_ == 0)
{
lean_object* v_inputString_2838_; uint32_t v_curr_2839_; uint32_t v___x_2840_; uint8_t v___x_2841_; 
v_inputString_2838_ = lean_ctor_get(v_toInputContext_2836_, 0);
v_curr_2839_ = lean_string_utf8_get_fast(v_inputString_2838_, v_pos_2835_);
v___x_2840_ = 171;
v___x_2841_ = lean_uint32_dec_eq(v_curr_2839_, v___x_2840_);
if (v___x_2841_ == 0)
{
lean_object* v___f_2842_; uint8_t v___y_2854_; uint8_t v___y_2857_; uint32_t v___x_2866_; uint8_t v___x_2867_; 
v___f_2842_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__0));
v___x_2866_ = 65;
v___x_2867_ = lean_uint32_dec_le(v___x_2866_, v_curr_2839_);
if (v___x_2867_ == 0)
{
goto v___jp_2861_;
}
else
{
uint32_t v___x_2868_; uint8_t v___x_2869_; 
v___x_2868_ = 90;
v___x_2869_ = lean_uint32_dec_le(v_curr_2839_, v___x_2868_);
if (v___x_2869_ == 0)
{
goto v___jp_2861_;
}
else
{
lean_inc(v_pos_2835_);
goto v___jp_2843_;
}
}
v___jp_2843_:
{
lean_object* v___x_2844_; lean_object* v_s_2845_; lean_object* v_pos_2846_; lean_object* v___x_2847_; lean_object* v_r_2848_; uint8_t v___x_2849_; 
v___x_2844_ = l_Lean_Parser_ParserState_next(v_s_2834_, v_c_2833_, v_pos_2835_);
v_s_2845_ = l_Lean_Parser_takeWhileFn(v___f_2842_, v_c_2833_, v___x_2844_);
v_pos_2846_ = lean_ctor_get(v_s_2845_, 2);
lean_inc(v_pos_2846_);
v___x_2847_ = lean_string_utf8_extract(v_inputString_2838_, v_pos_2835_, v_pos_2846_);
lean_dec(v_pos_2835_);
v_r_2848_ = l_Lean_Name_str___override(v_r_2832_, v___x_2847_);
v___x_2849_ = l_Lean_Parser_isIdCont(v_c_2833_, v_s_2845_);
if (v___x_2849_ == 0)
{
lean_object* v___x_2850_; 
lean_dec(v_pos_2846_);
v___x_2850_ = l_Lean_Parser_mkIdResult(v_startPos_2829_, v_tk_2830_, v_r_2848_, v_includeWhitespace_2831_, v_c_2833_, v_s_2845_);
return v___x_2850_;
}
else
{
lean_object* v_s_2851_; 
v_s_2851_ = l_Lean_Parser_ParserState_next(v_s_2845_, v_c_2833_, v_pos_2846_);
lean_dec(v_pos_2846_);
v_r_2832_ = v_r_2848_;
v_s_2834_ = v_s_2851_;
goto _start;
}
}
v___jp_2853_:
{
if (v___y_2854_ == 0)
{
lean_object* v___x_2855_; 
lean_dec(v_r_2832_);
v___x_2855_ = l_Lean_Parser_mkTokenAndFixPos(v_startPos_2829_, v_tk_2830_, v_c_2833_, v_s_2834_);
return v___x_2855_;
}
else
{
lean_inc(v_pos_2835_);
goto v___jp_2843_;
}
}
v___jp_2856_:
{
if (v___y_2857_ == 0)
{
uint32_t v___x_2858_; uint8_t v___x_2859_; 
v___x_2858_ = 95;
v___x_2859_ = lean_uint32_dec_eq(v_curr_2839_, v___x_2858_);
if (v___x_2859_ == 0)
{
uint8_t v___x_2860_; 
v___x_2860_ = l_Lean_isLetterLike(v_curr_2839_);
v___y_2854_ = v___x_2860_;
goto v___jp_2853_;
}
else
{
v___y_2854_ = v___x_2859_;
goto v___jp_2853_;
}
}
else
{
lean_inc(v_pos_2835_);
goto v___jp_2843_;
}
}
v___jp_2861_:
{
uint32_t v___x_2862_; uint8_t v___x_2863_; 
v___x_2862_ = 97;
v___x_2863_ = lean_uint32_dec_le(v___x_2862_, v_curr_2839_);
if (v___x_2863_ == 0)
{
v___y_2857_ = v___x_2863_;
goto v___jp_2856_;
}
else
{
uint32_t v___x_2864_; uint8_t v___x_2865_; 
v___x_2864_ = 122;
v___x_2865_ = lean_uint32_dec_le(v_curr_2839_, v___x_2864_);
v___y_2857_ = v___x_2865_;
goto v___jp_2856_;
}
}
}
else
{
lean_object* v___f_2870_; lean_object* v_startPart_2871_; lean_object* v___x_2872_; lean_object* v_s_2873_; lean_object* v_pos_2874_; uint8_t v___x_2875_; 
v___f_2870_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__1));
v_startPart_2871_ = lean_string_utf8_next_fast(v_inputString_2838_, v_pos_2835_);
v___x_2872_ = l_Lean_Parser_ParserState_setPos(v_s_2834_, v_startPart_2871_);
v_s_2873_ = l_Lean_Parser_takeUntilFn(v___f_2870_, v_c_2833_, v___x_2872_);
v_pos_2874_ = lean_ctor_get(v_s_2873_, 2);
lean_inc(v_pos_2874_);
v___x_2875_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_2836_, v_pos_2874_);
if (v___x_2875_ == 0)
{
lean_object* v_s_2876_; lean_object* v___x_2877_; lean_object* v_r_2878_; uint8_t v___x_2879_; 
v_s_2876_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_2873_, v_c_2833_, v_pos_2874_);
v___x_2877_ = lean_string_utf8_extract(v_inputString_2838_, v_startPart_2871_, v_pos_2874_);
lean_dec(v_pos_2874_);
v_r_2878_ = l_Lean_Name_str___override(v_r_2832_, v___x_2877_);
v___x_2879_ = l_Lean_Parser_isIdCont(v_c_2833_, v_s_2876_);
if (v___x_2879_ == 0)
{
lean_object* v___x_2880_; 
v___x_2880_ = l_Lean_Parser_mkIdResult(v_startPos_2829_, v_tk_2830_, v_r_2878_, v_includeWhitespace_2831_, v_c_2833_, v_s_2876_);
return v___x_2880_;
}
else
{
lean_object* v_pos_2881_; lean_object* v_s_2882_; 
v_pos_2881_ = lean_ctor_get(v_s_2876_, 2);
lean_inc(v_pos_2881_);
v_s_2882_ = l_Lean_Parser_ParserState_next(v_s_2876_, v_c_2833_, v_pos_2881_);
lean_dec(v_pos_2881_);
v_r_2832_ = v_r_2878_;
v_s_2834_ = v_s_2882_;
goto _start;
}
}
else
{
lean_object* v___x_2884_; lean_object* v___x_2885_; 
lean_dec(v_pos_2874_);
lean_dec_ref(v_c_2833_);
lean_dec(v_r_2832_);
lean_dec(v_startPos_2829_);
v___x_2884_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___closed__2));
v___x_2885_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_2873_, v___x_2884_, v_startPart_2871_);
return v___x_2885_;
}
}
}
else
{
lean_object* v___x_2886_; lean_object* v___x_2887_; 
lean_dec_ref(v_c_2833_);
lean_dec(v_r_2832_);
lean_dec(v_startPos_2829_);
v___x_2886_ = lean_box(0);
v___x_2887_ = l_Lean_Parser_ParserState_mkEOIError(v_s_2834_, v___x_2886_);
return v___x_2887_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse___boxed(lean_object* v_startPos_2888_, lean_object* v_tk_2889_, lean_object* v_includeWhitespace_2890_, lean_object* v_r_2891_, lean_object* v_c_2892_, lean_object* v_s_2893_){
_start:
{
uint8_t v_includeWhitespace_boxed_2894_; lean_object* v_res_2895_; 
v_includeWhitespace_boxed_2894_ = lean_unbox(v_includeWhitespace_2890_);
v_res_2895_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2888_, v_tk_2889_, v_includeWhitespace_boxed_2894_, v_r_2891_, v_c_2892_, v_s_2893_);
lean_dec(v_tk_2889_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux(lean_object* v_startPos_2896_, lean_object* v_tk_2897_, lean_object* v_r_2898_, uint8_t v_includeWhitespace_2899_, lean_object* v_c_2900_, lean_object* v_s_2901_){
_start:
{
lean_object* v___x_2902_; 
v___x_2902_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2896_, v_tk_2897_, v_includeWhitespace_2899_, v_r_2898_, v_c_2900_, v_s_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFnAux___boxed(lean_object* v_startPos_2903_, lean_object* v_tk_2904_, lean_object* v_r_2905_, lean_object* v_includeWhitespace_2906_, lean_object* v_c_2907_, lean_object* v_s_2908_){
_start:
{
uint8_t v_includeWhitespace_boxed_2909_; lean_object* v_res_2910_; 
v_includeWhitespace_boxed_2909_ = lean_unbox(v_includeWhitespace_2906_);
v_res_2910_ = l_Lean_Parser_identFnAux(v_startPos_2903_, v_tk_2904_, v_r_2905_, v_includeWhitespace_boxed_2909_, v_c_2907_, v_s_2908_);
lean_dec(v_tk_2904_);
return v_res_2910_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(uint32_t v_c_2911_){
_start:
{
uint8_t v___y_2913_; uint8_t v___y_2917_; uint32_t v___x_2926_; uint8_t v___x_2927_; 
v___x_2926_ = 65;
v___x_2927_ = lean_uint32_dec_le(v___x_2926_, v_c_2911_);
if (v___x_2927_ == 0)
{
goto v___jp_2921_;
}
else
{
uint32_t v___x_2928_; uint8_t v___x_2929_; 
v___x_2928_ = 90;
v___x_2929_ = lean_uint32_dec_le(v_c_2911_, v___x_2928_);
if (v___x_2929_ == 0)
{
goto v___jp_2921_;
}
else
{
return v___x_2929_;
}
}
v___jp_2912_:
{
if (v___y_2913_ == 0)
{
uint32_t v___x_2914_; uint8_t v___x_2915_; 
v___x_2914_ = 171;
v___x_2915_ = lean_uint32_dec_eq(v_c_2911_, v___x_2914_);
return v___x_2915_;
}
else
{
return v___y_2913_;
}
}
v___jp_2916_:
{
if (v___y_2917_ == 0)
{
uint32_t v___x_2918_; uint8_t v___x_2919_; 
v___x_2918_ = 95;
v___x_2919_ = lean_uint32_dec_eq(v_c_2911_, v___x_2918_);
if (v___x_2919_ == 0)
{
uint8_t v___x_2920_; 
v___x_2920_ = l_Lean_isLetterLike(v_c_2911_);
v___y_2913_ = v___x_2920_;
goto v___jp_2912_;
}
else
{
v___y_2913_ = v___x_2919_;
goto v___jp_2912_;
}
}
else
{
return v___y_2917_;
}
}
v___jp_2921_:
{
uint32_t v___x_2922_; uint8_t v___x_2923_; 
v___x_2922_ = 97;
v___x_2923_ = lean_uint32_dec_le(v___x_2922_, v_c_2911_);
if (v___x_2923_ == 0)
{
v___y_2917_ = v___x_2923_;
goto v___jp_2916_;
}
else
{
uint32_t v___x_2924_; uint8_t v___x_2925_; 
v___x_2924_ = 122;
v___x_2925_ = lean_uint32_dec_le(v_c_2911_, v___x_2924_);
v___y_2917_ = v___x_2925_;
goto v___jp_2916_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape___boxed(lean_object* v_c_2930_){
_start:
{
uint32_t v_c_boxed_2931_; uint8_t v_res_2932_; lean_object* v_r_2933_; 
v_c_boxed_2931_ = lean_unbox_uint32(v_c_2930_);
lean_dec(v_c_2930_);
v_res_2932_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(v_c_boxed_2931_);
v_r_2933_ = lean_box(v_res_2932_);
return v_r_2933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(lean_object* v_startPos_2935_, lean_object* v_c_2936_, lean_object* v_s_2937_){
_start:
{
lean_object* v___x_2938_; lean_object* v___x_2939_; uint8_t v___x_2940_; lean_object* v___x_2941_; lean_object* v_s_2942_; lean_object* v_stxStack_2943_; lean_object* v_errorMsg_2944_; uint8_t v___x_2945_; 
v___x_2938_ = lean_box(0);
v___x_2939_ = lean_box(0);
v___x_2940_ = 1;
v___x_2941_ = l_Lean_Parser_ParserState_next(v_s_2937_, v_c_2936_, v_startPos_2935_);
v_s_2942_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_startPos_2935_, v___x_2938_, v___x_2940_, v___x_2939_, v_c_2936_, v___x_2941_);
v_stxStack_2943_ = lean_ctor_get(v_s_2942_, 0);
lean_inc_ref(v_stxStack_2943_);
v_errorMsg_2944_ = lean_ctor_get(v_s_2942_, 4);
lean_inc(v_errorMsg_2944_);
v___x_2945_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_2944_, v___x_2938_);
if (v___x_2945_ == 0)
{
lean_dec_ref(v_stxStack_2943_);
return v_s_2942_;
}
else
{
lean_object* v_stx_2946_; 
v_stx_2946_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2943_);
lean_dec_ref(v_stxStack_2943_);
if (lean_obj_tag(v_stx_2946_) == 3)
{
lean_object* v_rawVal_2947_; lean_object* v_info_2948_; lean_object* v_str_2949_; lean_object* v_startPos_2950_; lean_object* v_stopPos_2951_; uint8_t v___x_2952_; lean_object* v_s_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; 
v_rawVal_2947_ = lean_ctor_get(v_stx_2946_, 1);
lean_inc_ref(v_rawVal_2947_);
v_info_2948_ = lean_ctor_get(v_stx_2946_, 0);
lean_inc(v_info_2948_);
lean_dec_ref_known(v_stx_2946_, 4);
v_str_2949_ = lean_ctor_get(v_rawVal_2947_, 0);
lean_inc_ref(v_str_2949_);
v_startPos_2950_ = lean_ctor_get(v_rawVal_2947_, 1);
lean_inc(v_startPos_2950_);
v_stopPos_2951_ = lean_ctor_get(v_rawVal_2947_, 2);
lean_inc(v_stopPos_2951_);
lean_dec_ref(v_rawVal_2947_);
v___x_2952_ = 0;
v_s_2953_ = l_Lean_Parser_ParserState_popSyntax(v_s_2942_);
v___x_2954_ = lean_string_utf8_extract(v_str_2949_, v_startPos_2950_, v_stopPos_2951_);
lean_dec(v_stopPos_2951_);
lean_dec(v_startPos_2950_);
lean_dec_ref(v_str_2949_);
v___x_2955_ = l_Lean_Syntax_mkNameLit(v___x_2954_, v_info_2948_);
v___x_2956_ = l_Lean_Parser_ParserState_pushSyntax(v_s_2953_, v___x_2955_, v___x_2952_);
return v___x_2956_;
}
else
{
lean_object* v___x_2957_; lean_object* v___x_2958_; 
lean_dec(v_stx_2946_);
v___x_2957_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux___closed__0));
v___x_2958_ = l_Lean_Parser_ParserState_mkError(v_s_2942_, v___x_2957_);
return v___x_2958_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(lean_object* v_c_2959_, lean_object* v_s_2960_){
_start:
{
lean_object* v_toInputContext_2961_; lean_object* v_pos_2962_; lean_object* v_tokens_2963_; lean_object* v_inputString_2964_; lean_object* v_endPos_2965_; uint32_t v_curr_2966_; uint32_t v___x_2967_; uint8_t v___x_2968_; uint8_t v___x_2969_; uint8_t v___y_2971_; uint8_t v___y_2978_; uint8_t v___y_2985_; uint8_t v___y_2993_; 
v_toInputContext_2961_ = lean_ctor_get(v_c_2959_, 0);
v_pos_2962_ = lean_ctor_get(v_s_2960_, 2);
v_tokens_2963_ = lean_ctor_get(v_c_2959_, 3);
v_inputString_2964_ = lean_ctor_get(v_toInputContext_2961_, 0);
v_endPos_2965_ = lean_ctor_get(v_toInputContext_2961_, 3);
v_curr_2966_ = lean_string_utf8_get(v_inputString_2964_, v_pos_2962_);
v___x_2967_ = 34;
v___x_2968_ = lean_uint32_dec_eq(v_curr_2966_, v___x_2967_);
v___x_2969_ = 1;
if (v___x_2968_ == 0)
{
uint32_t v___x_3000_; uint8_t v___x_3001_; 
v___x_3000_ = 39;
v___x_3001_ = lean_uint32_dec_eq(v_curr_2966_, v___x_3000_);
if (v___x_3001_ == 0)
{
v___y_2993_ = v___x_3001_;
goto v___jp_2992_;
}
else
{
lean_object* v___x_3002_; uint32_t v___x_3003_; uint8_t v___x_3004_; 
v___x_3002_ = lean_string_utf8_next(v_inputString_2964_, v_pos_2962_);
v___x_3003_ = lean_string_utf8_get(v_inputString_2964_, v___x_3002_);
lean_dec(v___x_3002_);
v___x_3004_ = lean_uint32_dec_eq(v___x_3003_, v___x_3000_);
if (v___x_3004_ == 0)
{
v___y_2993_ = v___x_3001_;
goto v___jp_2992_;
}
else
{
v___y_2993_ = v___x_2968_;
goto v___jp_2992_;
}
}
}
else
{
lean_object* v___x_3005_; lean_object* v___x_3006_; 
lean_inc(v_pos_2962_);
v___x_3005_ = l_Lean_Parser_ParserState_next(v_s_2960_, v_c_2959_, v_pos_2962_);
v___x_3006_ = l_Lean_Parser_strLitFnAux(v_pos_2962_, v___x_2969_, v_c_2959_, v___x_3005_);
return v___x_3006_;
}
v___jp_2970_:
{
if (v___y_2971_ == 0)
{
lean_object* v_tk_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; 
lean_inc(v_pos_2962_);
v_tk_2972_ = l_Lean_Data_Trie_matchPrefix___redArg(v_inputString_2964_, v_tokens_2963_, v_pos_2962_, v_endPos_2965_);
v___x_2973_ = lean_box(0);
v___x_2974_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_pos_2962_, v_tk_2972_, v___x_2969_, v___x_2973_, v_c_2959_, v_s_2960_);
lean_dec(v_tk_2972_);
return v___x_2974_;
}
else
{
lean_object* v___x_2975_; lean_object* v___x_2976_; 
v___x_2975_ = l_Lean_Parser_ParserState_next(v_s_2960_, v_c_2959_, v_pos_2962_);
v___x_2976_ = l_Lean_Parser_rawStrLitFnAux(v_pos_2962_, v_c_2959_, v___x_2975_);
return v___x_2976_;
}
}
v___jp_2977_:
{
if (v___y_2978_ == 0)
{
uint32_t v___x_2979_; uint8_t v___x_2980_; 
v___x_2979_ = 114;
v___x_2980_ = lean_uint32_dec_eq(v_curr_2966_, v___x_2979_);
if (v___x_2980_ == 0)
{
v___y_2971_ = v___x_2980_;
goto v___jp_2970_;
}
else
{
lean_object* v___x_2981_; uint8_t v___x_2982_; 
v___x_2981_ = lean_string_utf8_next(v_inputString_2964_, v_pos_2962_);
v___x_2982_ = l_Lean_Parser_isRawStrLitStart(v_c_2959_, v___x_2981_);
v___y_2971_ = v___x_2982_;
goto v___jp_2970_;
}
}
else
{
lean_object* v___x_2983_; 
v___x_2983_ = l___private_Lean_Parser_Basic_0__Lean_Parser_nameLitAux(v_pos_2962_, v_c_2959_, v_s_2960_);
return v___x_2983_;
}
}
v___jp_2984_:
{
if (v___y_2985_ == 0)
{
uint32_t v___x_2986_; uint8_t v___x_2987_; 
lean_inc(v_pos_2962_);
v___x_2986_ = 96;
v___x_2987_ = lean_uint32_dec_eq(v_curr_2966_, v___x_2986_);
if (v___x_2987_ == 0)
{
v___y_2978_ = v___x_2987_;
goto v___jp_2977_;
}
else
{
lean_object* v___x_2988_; uint32_t v___x_2989_; uint8_t v___x_2990_; 
v___x_2988_ = lean_string_utf8_next(v_inputString_2964_, v_pos_2962_);
v___x_2989_ = lean_string_utf8_get(v_inputString_2964_, v___x_2988_);
lean_dec(v___x_2988_);
v___x_2990_ = l___private_Lean_Parser_Basic_0__Lean_Parser_isIdFirstOrBeginEscape(v___x_2989_);
v___y_2978_ = v___x_2990_;
goto v___jp_2977_;
}
}
else
{
lean_object* v___x_2991_; 
v___x_2991_ = l_Lean_Parser_numberFnAux(v___x_2969_, v_c_2959_, v_s_2960_);
return v___x_2991_;
}
}
v___jp_2992_:
{
if (v___y_2993_ == 0)
{
uint32_t v___x_2994_; uint8_t v___x_2995_; 
v___x_2994_ = 48;
v___x_2995_ = lean_uint32_dec_le(v___x_2994_, v_curr_2966_);
if (v___x_2995_ == 0)
{
v___y_2985_ = v___x_2995_;
goto v___jp_2984_;
}
else
{
uint32_t v___x_2996_; uint8_t v___x_2997_; 
v___x_2996_ = 57;
v___x_2997_ = lean_uint32_dec_le(v_curr_2966_, v___x_2996_);
v___y_2985_ = v___x_2997_;
goto v___jp_2984_;
}
}
else
{
lean_object* v___x_2998_; lean_object* v___x_2999_; 
lean_inc(v_pos_2962_);
v___x_2998_ = l_Lean_Parser_ParserState_next(v_s_2960_, v_c_2959_, v_pos_2962_);
v___x_2999_ = l_Lean_Parser_charLitFnAux(v_pos_2962_, v_c_2959_, v___x_2998_);
return v___x_2999_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(lean_object* v_startPos_3007_, lean_object* v_s_3008_){
_start:
{
lean_object* v_cache_3009_; lean_object* v_errorMsg_3010_; 
v_cache_3009_ = lean_ctor_get(v_s_3008_, 3);
lean_inc_ref(v_cache_3009_);
v_errorMsg_3010_ = lean_ctor_get(v_s_3008_, 4);
if (lean_obj_tag(v_errorMsg_3010_) == 0)
{
lean_object* v_stxStack_3011_; lean_object* v_lhsPrec_3012_; lean_object* v_pos_3013_; lean_object* v_recoveredErrors_3014_; lean_object* v_traces_3015_; lean_object* v_parserCache_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3042_; 
v_stxStack_3011_ = lean_ctor_get(v_s_3008_, 0);
v_lhsPrec_3012_ = lean_ctor_get(v_s_3008_, 1);
v_pos_3013_ = lean_ctor_get(v_s_3008_, 2);
v_recoveredErrors_3014_ = lean_ctor_get(v_s_3008_, 5);
v_traces_3015_ = lean_ctor_get(v_s_3008_, 6);
v_parserCache_3016_ = lean_ctor_get(v_cache_3009_, 1);
v_isSharedCheck_3042_ = !lean_is_exclusive(v_cache_3009_);
if (v_isSharedCheck_3042_ == 0)
{
lean_object* v_unused_3043_; 
v_unused_3043_ = lean_ctor_get(v_cache_3009_, 0);
lean_dec(v_unused_3043_);
v___x_3018_ = v_cache_3009_;
v_isShared_3019_ = v_isSharedCheck_3042_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_parserCache_3016_);
lean_dec(v_cache_3009_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3042_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v___x_3020_; lean_object* v___x_3021_; uint8_t v___x_3022_; 
v___x_3020_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_3011_);
v___x_3021_ = lean_unsigned_to_nat(0u);
v___x_3022_ = lean_nat_dec_eq(v___x_3020_, v___x_3021_);
lean_dec(v___x_3020_);
if (v___x_3022_ == 0)
{
lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3034_; 
lean_inc_ref(v_traces_3015_);
lean_inc_ref(v_recoveredErrors_3014_);
lean_inc(v_pos_3013_);
lean_inc(v_lhsPrec_3012_);
lean_inc_ref(v_stxStack_3011_);
lean_inc(v_errorMsg_3010_);
v_isSharedCheck_3034_ = !lean_is_exclusive(v_s_3008_);
if (v_isSharedCheck_3034_ == 0)
{
lean_object* v_unused_3035_; lean_object* v_unused_3036_; lean_object* v_unused_3037_; lean_object* v_unused_3038_; lean_object* v_unused_3039_; lean_object* v_unused_3040_; lean_object* v_unused_3041_; 
v_unused_3035_ = lean_ctor_get(v_s_3008_, 6);
lean_dec(v_unused_3035_);
v_unused_3036_ = lean_ctor_get(v_s_3008_, 5);
lean_dec(v_unused_3036_);
v_unused_3037_ = lean_ctor_get(v_s_3008_, 4);
lean_dec(v_unused_3037_);
v_unused_3038_ = lean_ctor_get(v_s_3008_, 3);
lean_dec(v_unused_3038_);
v_unused_3039_ = lean_ctor_get(v_s_3008_, 2);
lean_dec(v_unused_3039_);
v_unused_3040_ = lean_ctor_get(v_s_3008_, 1);
lean_dec(v_unused_3040_);
v_unused_3041_ = lean_ctor_get(v_s_3008_, 0);
lean_dec(v_unused_3041_);
v___x_3024_ = v_s_3008_;
v_isShared_3025_ = v_isSharedCheck_3034_;
goto v_resetjp_3023_;
}
else
{
lean_dec(v_s_3008_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3034_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v_tk_3026_; lean_object* v___x_3027_; lean_object* v___x_3029_; 
v_tk_3026_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3011_);
lean_inc(v_pos_3013_);
v___x_3027_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3027_, 0, v_startPos_3007_);
lean_ctor_set(v___x_3027_, 1, v_pos_3013_);
lean_ctor_set(v___x_3027_, 2, v_tk_3026_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 0, v___x_3027_);
v___x_3029_ = v___x_3018_;
goto v_reusejp_3028_;
}
else
{
lean_object* v_reuseFailAlloc_3033_; 
v_reuseFailAlloc_3033_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3033_, 0, v___x_3027_);
lean_ctor_set(v_reuseFailAlloc_3033_, 1, v_parserCache_3016_);
v___x_3029_ = v_reuseFailAlloc_3033_;
goto v_reusejp_3028_;
}
v_reusejp_3028_:
{
lean_object* v___x_3031_; 
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 3, v___x_3029_);
v___x_3031_ = v___x_3024_;
goto v_reusejp_3030_;
}
else
{
lean_object* v_reuseFailAlloc_3032_; 
v_reuseFailAlloc_3032_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3032_, 0, v_stxStack_3011_);
lean_ctor_set(v_reuseFailAlloc_3032_, 1, v_lhsPrec_3012_);
lean_ctor_set(v_reuseFailAlloc_3032_, 2, v_pos_3013_);
lean_ctor_set(v_reuseFailAlloc_3032_, 3, v___x_3029_);
lean_ctor_set(v_reuseFailAlloc_3032_, 4, v_errorMsg_3010_);
lean_ctor_set(v_reuseFailAlloc_3032_, 5, v_recoveredErrors_3014_);
lean_ctor_set(v_reuseFailAlloc_3032_, 6, v_traces_3015_);
v___x_3031_ = v_reuseFailAlloc_3032_;
goto v_reusejp_3030_;
}
v_reusejp_3030_:
{
return v___x_3031_;
}
}
}
}
else
{
lean_del_object(v___x_3018_);
lean_dec_ref(v_parserCache_3016_);
lean_dec(v_startPos_3007_);
return v_s_3008_;
}
}
}
else
{
lean_dec_ref(v_cache_3009_);
lean_dec(v_startPos_3007_);
return v_s_3008_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn___lam__0(lean_object* v_expected_3044_, lean_object* v_c_3045_, lean_object* v_s_3046_){
_start:
{
lean_object* v_pos_3047_; lean_object* v_cache_3048_; lean_object* v_toInputContext_3049_; uint8_t v___x_3050_; 
v_pos_3047_ = lean_ctor_get(v_s_3046_, 2);
v_cache_3048_ = lean_ctor_get(v_s_3046_, 3);
v_toInputContext_3049_ = lean_ctor_get(v_c_3045_, 0);
v___x_3050_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_3049_, v_pos_3047_);
if (v___x_3050_ == 0)
{
lean_object* v_tokenCache_3051_; lean_object* v_startPos_3052_; lean_object* v_stopPos_3053_; lean_object* v_token_3054_; uint8_t v___x_3055_; 
lean_dec(v_expected_3044_);
v_tokenCache_3051_ = lean_ctor_get(v_cache_3048_, 0);
v_startPos_3052_ = lean_ctor_get(v_tokenCache_3051_, 0);
v_stopPos_3053_ = lean_ctor_get(v_tokenCache_3051_, 1);
v_token_3054_ = lean_ctor_get(v_tokenCache_3051_, 2);
v___x_3055_ = lean_nat_dec_eq(v_startPos_3052_, v_pos_3047_);
if (v___x_3055_ == 0)
{
lean_object* v_s_3056_; lean_object* v___x_3057_; 
lean_inc(v_pos_3047_);
v_s_3056_ = l___private_Lean_Parser_Basic_0__Lean_Parser_tokenFnAux(v_c_3045_, v_s_3046_);
v___x_3057_ = l___private_Lean_Parser_Basic_0__Lean_Parser_updateTokenCache(v_pos_3047_, v_s_3056_);
return v___x_3057_;
}
else
{
lean_object* v_s_3058_; lean_object* v___x_3059_; 
lean_inc(v_token_3054_);
lean_inc(v_stopPos_3053_);
lean_dec_ref(v_c_3045_);
v_s_3058_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3046_, v_token_3054_, v___x_3050_);
v___x_3059_ = l_Lean_Parser_ParserState_setPos(v_s_3058_, v_stopPos_3053_);
return v___x_3059_;
}
}
else
{
lean_object* v___x_3060_; 
lean_dec_ref(v_c_3045_);
v___x_3060_ = l_Lean_Parser_ParserState_mkEOIError(v_s_3046_, v_expected_3044_);
return v___x_3060_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenFn(lean_object* v_expected_3061_, lean_object* v_a_3062_, lean_object* v_a_3063_){
_start:
{
lean_object* v_traces_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; uint8_t v___x_3067_; 
v_traces_3064_ = lean_ctor_get(v_a_3063_, 6);
v___x_3065_ = lean_array_get_size(v_traces_3064_);
v___x_3066_ = lean_unsigned_to_nat(0u);
v___x_3067_ = lean_nat_dec_eq(v___x_3065_, v___x_3066_);
if (v___x_3067_ == 0)
{
lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; 
v___x_3068_ = ((lean_object*)(l_Lean_Parser_mkTokenAndFixPos___closed__0));
v___x_3069_ = lean_alloc_closure((void*)(l_Lean_Parser_tokenFn___lam__0), 3, 2);
lean_closure_set(v___x_3069_, 0, v_expected_3061_);
lean_closure_set(v___x_3069_, 1, v_a_3062_);
v___x_3070_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_3063_, v___x_3068_, v___x_3069_);
return v___x_3070_;
}
else
{
lean_object* v___x_3071_; 
v___x_3071_ = l_Lean_Parser_tokenFn___lam__0(v_expected_3061_, v_a_3062_, v_a_3063_);
return v___x_3071_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_peekTokenAux(lean_object* v_c_3072_, lean_object* v_s_3073_){
_start:
{
lean_object* v_pos_3074_; lean_object* v_iniSz_3075_; lean_object* v___x_3076_; lean_object* v_s_3077_; lean_object* v_errorMsg_3078_; 
v_pos_3074_ = lean_ctor_get(v_s_3073_, 2);
lean_inc(v_pos_3074_);
v_iniSz_3075_ = l_Lean_Parser_ParserState_stackSize(v_s_3073_);
v___x_3076_ = lean_box(0);
v_s_3077_ = l_Lean_Parser_tokenFn(v___x_3076_, v_c_3072_, v_s_3073_);
v_errorMsg_3078_ = lean_ctor_get(v_s_3077_, 4);
lean_inc(v_errorMsg_3078_);
if (lean_obj_tag(v_errorMsg_3078_) == 1)
{
lean_object* v___x_3080_; uint8_t v_isShared_3081_; uint8_t v_isSharedCheck_3087_; 
v_isSharedCheck_3087_ = !lean_is_exclusive(v_errorMsg_3078_);
if (v_isSharedCheck_3087_ == 0)
{
lean_object* v_unused_3088_; 
v_unused_3088_ = lean_ctor_get(v_errorMsg_3078_, 0);
lean_dec(v_unused_3088_);
v___x_3080_ = v_errorMsg_3078_;
v_isShared_3081_ = v_isSharedCheck_3087_;
goto v_resetjp_3079_;
}
else
{
lean_dec(v_errorMsg_3078_);
v___x_3080_ = lean_box(0);
v_isShared_3081_ = v_isSharedCheck_3087_;
goto v_resetjp_3079_;
}
v_resetjp_3079_:
{
lean_object* v___x_3082_; lean_object* v___x_3084_; 
lean_inc_ref(v_s_3077_);
v___x_3082_ = l_Lean_Parser_ParserState_restore(v_s_3077_, v_iniSz_3075_, v_pos_3074_);
lean_dec(v_iniSz_3075_);
if (v_isShared_3081_ == 0)
{
lean_ctor_set_tag(v___x_3080_, 0);
lean_ctor_set(v___x_3080_, 0, v_s_3077_);
v___x_3084_ = v___x_3080_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3086_; 
v_reuseFailAlloc_3086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3086_, 0, v_s_3077_);
v___x_3084_ = v_reuseFailAlloc_3086_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
lean_object* v___x_3085_; 
v___x_3085_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3085_, 0, v___x_3082_);
lean_ctor_set(v___x_3085_, 1, v___x_3084_);
return v___x_3085_;
}
}
}
else
{
lean_object* v_stxStack_3089_; lean_object* v_stx_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
lean_dec(v_errorMsg_3078_);
v_stxStack_3089_ = lean_ctor_get(v_s_3077_, 0);
lean_inc_ref(v_stxStack_3089_);
v_stx_3090_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3089_);
lean_dec_ref(v_stxStack_3089_);
v___x_3091_ = l_Lean_Parser_ParserState_restore(v_s_3077_, v_iniSz_3075_, v_pos_3074_);
lean_dec(v_iniSz_3075_);
v___x_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3092_, 0, v_stx_3090_);
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3091_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
return v___x_3093_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_peekToken(lean_object* v_c_3094_, lean_object* v_s_3095_){
_start:
{
lean_object* v_cache_3096_; lean_object* v_tokenCache_3097_; lean_object* v___x_3099_; uint8_t v_isShared_3100_; uint8_t v_isSharedCheck_3110_; 
v_cache_3096_ = lean_ctor_get(v_s_3095_, 3);
lean_inc_ref(v_cache_3096_);
v_tokenCache_3097_ = lean_ctor_get(v_cache_3096_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v_cache_3096_);
if (v_isSharedCheck_3110_ == 0)
{
lean_object* v_unused_3111_; 
v_unused_3111_ = lean_ctor_get(v_cache_3096_, 1);
lean_dec(v_unused_3111_);
v___x_3099_ = v_cache_3096_;
v_isShared_3100_ = v_isSharedCheck_3110_;
goto v_resetjp_3098_;
}
else
{
lean_inc(v_tokenCache_3097_);
lean_dec(v_cache_3096_);
v___x_3099_ = lean_box(0);
v_isShared_3100_ = v_isSharedCheck_3110_;
goto v_resetjp_3098_;
}
v_resetjp_3098_:
{
lean_object* v_pos_3101_; lean_object* v_startPos_3102_; lean_object* v_token_3103_; uint8_t v___x_3104_; 
v_pos_3101_ = lean_ctor_get(v_s_3095_, 2);
v_startPos_3102_ = lean_ctor_get(v_tokenCache_3097_, 0);
lean_inc(v_startPos_3102_);
v_token_3103_ = lean_ctor_get(v_tokenCache_3097_, 2);
lean_inc(v_token_3103_);
lean_dec_ref(v_tokenCache_3097_);
v___x_3104_ = lean_nat_dec_eq(v_startPos_3102_, v_pos_3101_);
lean_dec(v_startPos_3102_);
if (v___x_3104_ == 0)
{
lean_object* v___x_3105_; 
lean_dec(v_token_3103_);
lean_del_object(v___x_3099_);
v___x_3105_ = l_Lean_Parser_peekTokenAux(v_c_3094_, v_s_3095_);
return v___x_3105_;
}
else
{
lean_object* v___x_3106_; lean_object* v___x_3108_; 
lean_dec_ref(v_c_3094_);
v___x_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3106_, 0, v_token_3103_);
if (v_isShared_3100_ == 0)
{
lean_ctor_set(v___x_3099_, 1, v___x_3106_);
lean_ctor_set(v___x_3099_, 0, v_s_3095_);
v___x_3108_ = v___x_3099_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_s_3095_);
lean_ctor_set(v_reuseFailAlloc_3109_, 1, v___x_3106_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___lam__0(uint8_t v_includeWhitespace_3112_, lean_object* v_c_3113_, lean_object* v_s_3114_){
_start:
{
lean_object* v_pos_3115_; lean_object* v_toInputContext_3116_; uint8_t v___x_3117_; 
v_pos_3115_ = lean_ctor_get(v_s_3114_, 2);
v_toInputContext_3116_ = lean_ctor_get(v_c_3113_, 0);
v___x_3117_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_3116_, v_pos_3115_);
if (v___x_3117_ == 0)
{
lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; 
lean_inc(v_pos_3115_);
v___x_3118_ = lean_box(0);
v___x_3119_ = lean_box(0);
v___x_3120_ = l___private_Lean_Parser_Basic_0__Lean_Parser_identFnAux_parse(v_pos_3115_, v___x_3118_, v_includeWhitespace_3112_, v___x_3119_, v_c_3113_, v_s_3114_);
return v___x_3120_;
}
else
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
lean_dec_ref(v_c_3113_);
v___x_3121_ = lean_box(0);
v___x_3122_ = l_Lean_Parser_ParserState_mkEOIError(v_s_3114_, v___x_3121_);
return v___x_3122_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___lam__0___boxed(lean_object* v_includeWhitespace_3123_, lean_object* v_c_3124_, lean_object* v_s_3125_){
_start:
{
uint8_t v_includeWhitespace_boxed_3126_; lean_object* v_res_3127_; 
v_includeWhitespace_boxed_3126_ = lean_unbox(v_includeWhitespace_3123_);
v_res_3127_ = l_Lean_Parser_rawIdentFn___lam__0(v_includeWhitespace_boxed_3126_, v_c_3124_, v_s_3125_);
return v_res_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn(uint8_t v_includeWhitespace_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_){
_start:
{
lean_object* v_traces_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; uint8_t v___x_3135_; 
v_traces_3132_ = lean_ctor_get(v_a_3131_, 6);
v___x_3133_ = lean_array_get_size(v_traces_3132_);
v___x_3134_ = lean_unsigned_to_nat(0u);
v___x_3135_ = lean_nat_dec_eq(v___x_3133_, v___x_3134_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3136_ = ((lean_object*)(l_Lean_Parser_rawIdentFn___closed__0));
v___x_3137_ = lean_box(v_includeWhitespace_3129_);
v___x_3138_ = lean_alloc_closure((void*)(l_Lean_Parser_rawIdentFn___lam__0___boxed), 3, 2);
lean_closure_set(v___x_3138_, 0, v___x_3137_);
lean_closure_set(v___x_3138_, 1, v_a_3130_);
v___x_3139_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_3131_, v___x_3136_, v___x_3138_);
return v___x_3139_;
}
else
{
lean_object* v___x_3140_; 
v___x_3140_ = l_Lean_Parser_rawIdentFn___lam__0(v_includeWhitespace_3129_, v_a_3130_, v_a_3131_);
return v___x_3140_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_rawIdentFn___boxed(lean_object* v_includeWhitespace_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_){
_start:
{
uint8_t v_includeWhitespace_boxed_3144_; lean_object* v_res_3145_; 
v_includeWhitespace_boxed_3144_ = lean_unbox(v_includeWhitespace_3141_);
v_res_3145_ = l_Lean_Parser_rawIdentFn(v_includeWhitespace_boxed_3144_, v_a_3142_, v_a_3143_);
return v_res_3145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_satisfySymbolFn(lean_object* v_p_3146_, lean_object* v_expected_3147_, lean_object* v_c_3148_, lean_object* v_s_3149_){
_start:
{
lean_object* v_pos_3150_; lean_object* v_s_3151_; lean_object* v_stxStack_3152_; lean_object* v_errorMsg_3153_; lean_object* v___x_3154_; uint8_t v___x_3155_; 
v_pos_3150_ = lean_ctor_get(v_s_3149_, 2);
lean_inc(v_pos_3150_);
lean_inc(v_expected_3147_);
v_s_3151_ = l_Lean_Parser_tokenFn(v_expected_3147_, v_c_3148_, v_s_3149_);
v_stxStack_3152_ = lean_ctor_get(v_s_3151_, 0);
lean_inc_ref(v_stxStack_3152_);
v_errorMsg_3153_ = lean_ctor_get(v_s_3151_, 4);
lean_inc(v_errorMsg_3153_);
v___x_3154_ = lean_box(0);
v___x_3155_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3153_, v___x_3154_);
if (v___x_3155_ == 0)
{
lean_dec_ref(v_stxStack_3152_);
lean_dec(v_pos_3150_);
lean_dec(v_expected_3147_);
lean_dec_ref(v_p_3146_);
return v_s_3151_;
}
else
{
lean_object* v___x_3156_; 
v___x_3156_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3152_);
lean_dec_ref(v_stxStack_3152_);
if (lean_obj_tag(v___x_3156_) == 2)
{
lean_object* v_val_3157_; lean_object* v___x_3158_; uint8_t v___x_3159_; 
v_val_3157_ = lean_ctor_get(v___x_3156_, 1);
lean_inc_ref(v_val_3157_);
lean_dec_ref_known(v___x_3156_, 2);
v___x_3158_ = lean_apply_1(v_p_3146_, v_val_3157_);
v___x_3159_ = lean_unbox(v___x_3158_);
if (v___x_3159_ == 0)
{
lean_object* v___x_3160_; 
v___x_3160_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_3151_, v_expected_3147_, v_pos_3150_);
return v___x_3160_;
}
else
{
lean_dec(v_pos_3150_);
lean_dec(v_expected_3147_);
return v_s_3151_;
}
}
else
{
lean_object* v___x_3161_; 
lean_dec(v___x_3156_);
lean_dec_ref(v_p_3146_);
v___x_3161_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_3151_, v_expected_3147_, v_pos_3150_);
return v___x_3161_;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_symbolFnAux___lam__0(lean_object* v_sym_3162_, lean_object* v_s_3163_){
_start:
{
uint8_t v___x_3164_; 
v___x_3164_ = lean_string_dec_eq(v_s_3163_, v_sym_3162_);
return v___x_3164_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux___lam__0___boxed(lean_object* v_sym_3165_, lean_object* v_s_3166_){
_start:
{
uint8_t v_res_3167_; lean_object* v_r_3168_; 
v_res_3167_ = l_Lean_Parser_symbolFnAux___lam__0(v_sym_3165_, v_s_3166_);
lean_dec_ref(v_s_3166_);
lean_dec_ref(v_sym_3165_);
v_r_3168_ = lean_box(v_res_3167_);
return v_r_3168_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFnAux(lean_object* v_sym_3169_, lean_object* v_errorMsg_3170_, lean_object* v_a_3171_, lean_object* v_a_3172_){
_start:
{
lean_object* v___f_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; 
v___f_3173_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolFnAux___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3173_, 0, v_sym_3169_);
v___x_3174_ = lean_box(0);
v___x_3175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3175_, 0, v_errorMsg_3170_);
lean_ctor_set(v___x_3175_, 1, v___x_3174_);
v___x_3176_ = l_Lean_Parser_satisfySymbolFn(v___f_3173_, v___x_3175_, v_a_3171_, v_a_3172_);
return v___x_3176_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo___lam__0(lean_object* v_sym_3177_, lean_object* v_tks_3178_){
_start:
{
lean_object* v___x_3179_; 
v___x_3179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3179_, 0, v_sym_3177_);
lean_ctor_set(v___x_3179_, 1, v_tks_3178_);
return v___x_3179_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolInfo(lean_object* v_sym_3180_){
_start:
{
lean_object* v___f_3181_; lean_object* v___f_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; 
lean_inc_ref(v_sym_3180_);
v___f_3181_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolInfo___lam__0), 2, 1);
lean_closure_set(v___f_3181_, 0, v_sym_3180_);
v___f_3182_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3183_ = lean_box(0);
v___x_3184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3184_, 0, v_sym_3180_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
v___x_3186_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3186_, 0, v___f_3181_);
lean_ctor_set(v___x_3186_, 1, v___f_3182_);
lean_ctor_set(v___x_3186_, 2, v___x_3185_);
return v___x_3186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolFn(lean_object* v_sym_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_){
_start:
{
lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3190_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3191_ = lean_string_append(v___x_3190_, v_sym_3187_);
v___x_3192_ = lean_string_append(v___x_3191_, v___x_3190_);
v___x_3193_ = l_Lean_Parser_symbolFnAux(v_sym_3187_, v___x_3192_, v_a_3188_, v_a_3189_);
return v___x_3193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbolNoAntiquot(lean_object* v_sym_3194_){
_start:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v_str_3199_; lean_object* v_startInclusive_3200_; lean_object* v_endExclusive_3201_; lean_object* v_sym_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; 
v___x_3195_ = lean_unsigned_to_nat(0u);
v___x_3196_ = lean_string_utf8_byte_size(v_sym_3194_);
v___x_3197_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3197_, 0, v_sym_3194_);
lean_ctor_set(v___x_3197_, 1, v___x_3195_);
lean_ctor_set(v___x_3197_, 2, v___x_3196_);
v___x_3198_ = l_String_Slice_trimAscii(v___x_3197_);
v_str_3199_ = lean_ctor_get(v___x_3198_, 0);
lean_inc_ref(v_str_3199_);
v_startInclusive_3200_ = lean_ctor_get(v___x_3198_, 1);
lean_inc(v_startInclusive_3200_);
v_endExclusive_3201_ = lean_ctor_get(v___x_3198_, 2);
lean_inc(v_endExclusive_3201_);
lean_dec_ref(v___x_3198_);
v_sym_3202_ = lean_string_utf8_extract(v_str_3199_, v_startInclusive_3200_, v_endExclusive_3201_);
lean_dec(v_endExclusive_3201_);
lean_dec(v_startInclusive_3200_);
lean_dec_ref(v_str_3199_);
lean_inc_ref(v_sym_3202_);
v___x_3203_ = l_Lean_Parser_symbolInfo(v_sym_3202_);
v___x_3204_ = lean_alloc_closure((void*)(l_Lean_Parser_symbolFn), 3, 1);
lean_closure_set(v___x_3204_, 0, v_sym_3202_);
v___x_3205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3203_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
return v___x_3205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFnAux(lean_object* v_sym_3206_, lean_object* v_errorMsg_3207_, lean_object* v_c_3208_, lean_object* v_s_3209_){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v_s_3212_; lean_object* v_stxStack_3216_; lean_object* v_errorMsg_3217_; lean_object* v___x_3218_; uint8_t v___x_3219_; 
v___x_3210_ = lean_box(0);
lean_inc_ref(v_errorMsg_3207_);
v___x_3211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3211_, 0, v_errorMsg_3207_);
lean_ctor_set(v___x_3211_, 1, v___x_3210_);
v_s_3212_ = l_Lean_Parser_tokenFn(v___x_3211_, v_c_3208_, v_s_3209_);
v_stxStack_3216_ = lean_ctor_get(v_s_3212_, 0);
lean_inc_ref(v_stxStack_3216_);
v_errorMsg_3217_ = lean_ctor_get(v_s_3212_, 4);
lean_inc(v_errorMsg_3217_);
v___x_3218_ = lean_box(0);
v___x_3219_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3217_, v___x_3218_);
if (v___x_3219_ == 0)
{
lean_dec_ref(v_stxStack_3216_);
lean_dec_ref(v_errorMsg_3207_);
lean_dec_ref(v_sym_3206_);
return v_s_3212_;
}
else
{
lean_object* v___x_3220_; 
v___x_3220_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3216_);
lean_dec_ref(v_stxStack_3216_);
switch(lean_obj_tag(v___x_3220_))
{
case 2:
{
lean_object* v_val_3221_; uint8_t v___x_3222_; 
v_val_3221_ = lean_ctor_get(v___x_3220_, 1);
lean_inc_ref(v_val_3221_);
lean_dec_ref_known(v___x_3220_, 2);
v___x_3222_ = lean_string_dec_eq(v_sym_3206_, v_val_3221_);
lean_dec_ref(v_val_3221_);
lean_dec_ref(v_sym_3206_);
if (v___x_3222_ == 0)
{
goto v___jp_3213_;
}
else
{
lean_dec_ref(v_errorMsg_3207_);
return v_s_3212_;
}
}
case 3:
{
lean_object* v_rawVal_3223_; lean_object* v_info_3224_; lean_object* v_str_3225_; lean_object* v_startPos_3226_; lean_object* v_stopPos_3227_; lean_object* v___x_3228_; uint8_t v___x_3229_; 
v_rawVal_3223_ = lean_ctor_get(v___x_3220_, 1);
lean_inc_ref(v_rawVal_3223_);
v_info_3224_ = lean_ctor_get(v___x_3220_, 0);
lean_inc(v_info_3224_);
lean_dec_ref_known(v___x_3220_, 4);
v_str_3225_ = lean_ctor_get(v_rawVal_3223_, 0);
lean_inc_ref(v_str_3225_);
v_startPos_3226_ = lean_ctor_get(v_rawVal_3223_, 1);
lean_inc(v_startPos_3226_);
v_stopPos_3227_ = lean_ctor_get(v_rawVal_3223_, 2);
lean_inc(v_stopPos_3227_);
lean_dec_ref(v_rawVal_3223_);
v___x_3228_ = lean_string_utf8_extract(v_str_3225_, v_startPos_3226_, v_stopPos_3227_);
lean_dec(v_stopPos_3227_);
lean_dec(v_startPos_3226_);
lean_dec_ref(v_str_3225_);
v___x_3229_ = lean_string_dec_eq(v_sym_3206_, v___x_3228_);
lean_dec_ref(v___x_3228_);
if (v___x_3229_ == 0)
{
lean_dec(v_info_3224_);
lean_dec_ref(v_sym_3206_);
goto v___jp_3213_;
}
else
{
uint8_t v___x_3230_; lean_object* v_s_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; 
lean_dec_ref(v_errorMsg_3207_);
v___x_3230_ = 0;
v_s_3231_ = l_Lean_Parser_ParserState_popSyntax(v_s_3212_);
v___x_3232_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3232_, 0, v_info_3224_);
lean_ctor_set(v___x_3232_, 1, v_sym_3206_);
v___x_3233_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3231_, v___x_3232_, v___x_3230_);
return v___x_3233_;
}
}
default: 
{
lean_dec(v___x_3220_);
lean_dec_ref(v_sym_3206_);
goto v___jp_3213_;
}
}
}
v___jp_3213_:
{
lean_object* v___x_3214_; lean_object* v___x_3215_; 
v___x_3214_ = lean_unsigned_to_nat(0u);
v___x_3215_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3212_, v_errorMsg_3207_, v___x_3214_);
return v___x_3215_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolFn(lean_object* v_sym_3234_, lean_object* v_a_3235_, lean_object* v_a_3236_){
_start:
{
lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; 
v___x_3237_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3238_ = lean_string_append(v___x_3237_, v_sym_3234_);
v___x_3239_ = lean_string_append(v___x_3238_, v___x_3237_);
v___x_3240_ = l_Lean_Parser_nonReservedSymbolFnAux(v_sym_3234_, v___x_3239_, v_a_3235_, v_a_3236_);
return v___x_3240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo(lean_object* v_sym_3245_, uint8_t v_includeIdent_3246_){
_start:
{
lean_object* v___f_3247_; lean_object* v___f_3248_; 
v___f_3247_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__0));
v___f_3248_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
if (v_includeIdent_3246_ == 0)
{
lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; 
v___x_3249_ = lean_box(0);
v___x_3250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3250_, 0, v_sym_3245_);
lean_ctor_set(v___x_3250_, 1, v___x_3249_);
v___x_3251_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3251_, 0, v___x_3250_);
v___x_3252_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3252_, 0, v___f_3247_);
lean_ctor_set(v___x_3252_, 1, v___f_3248_);
lean_ctor_set(v___x_3252_, 2, v___x_3251_);
return v___x_3252_;
}
else
{
lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v___x_3253_ = ((lean_object*)(l_Lean_Parser_nonReservedSymbolInfo___closed__1));
v___x_3254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3254_, 0, v_sym_3245_);
lean_ctor_set(v___x_3254_, 1, v___x_3253_);
v___x_3255_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3255_, 0, v___x_3254_);
v___x_3256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3256_, 0, v___f_3247_);
lean_ctor_set(v___x_3256_, 1, v___f_3248_);
lean_ctor_set(v___x_3256_, 2, v___x_3255_);
return v___x_3256_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolInfo___boxed(lean_object* v_sym_3257_, lean_object* v_includeIdent_3258_){
_start:
{
uint8_t v_includeIdent_boxed_3259_; lean_object* v_res_3260_; 
v_includeIdent_boxed_3259_ = lean_unbox(v_includeIdent_3258_);
v_res_3260_ = l_Lean_Parser_nonReservedSymbolInfo(v_sym_3257_, v_includeIdent_boxed_3259_);
return v_res_3260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot(lean_object* v_sym_3261_, uint8_t v_includeIdent_3262_){
_start:
{
lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v_str_3267_; lean_object* v_startInclusive_3268_; lean_object* v_endExclusive_3269_; lean_object* v_sym_3270_; lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; 
v___x_3263_ = lean_unsigned_to_nat(0u);
v___x_3264_ = lean_string_utf8_byte_size(v_sym_3261_);
v___x_3265_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3265_, 0, v_sym_3261_);
lean_ctor_set(v___x_3265_, 1, v___x_3263_);
lean_ctor_set(v___x_3265_, 2, v___x_3264_);
v___x_3266_ = l_String_Slice_trimAscii(v___x_3265_);
v_str_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc_ref(v_str_3267_);
v_startInclusive_3268_ = lean_ctor_get(v___x_3266_, 1);
lean_inc(v_startInclusive_3268_);
v_endExclusive_3269_ = lean_ctor_get(v___x_3266_, 2);
lean_inc(v_endExclusive_3269_);
lean_dec_ref(v___x_3266_);
v_sym_3270_ = lean_string_utf8_extract(v_str_3267_, v_startInclusive_3268_, v_endExclusive_3269_);
lean_dec(v_endExclusive_3269_);
lean_dec(v_startInclusive_3268_);
lean_dec_ref(v_str_3267_);
lean_inc_ref(v_sym_3270_);
v___x_3271_ = l_Lean_Parser_nonReservedSymbolInfo(v_sym_3270_, v_includeIdent_3262_);
v___x_3272_ = lean_alloc_closure((void*)(l_Lean_Parser_nonReservedSymbolFn), 3, 1);
lean_closure_set(v___x_3272_, 0, v_sym_3270_);
v___x_3273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3273_, 0, v___x_3271_);
lean_ctor_set(v___x_3273_, 1, v___x_3272_);
return v___x_3273_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbolNoAntiquot___boxed(lean_object* v_sym_3274_, lean_object* v_includeIdent_3275_){
_start:
{
uint8_t v_includeIdent_boxed_3276_; lean_object* v_res_3277_; 
v_includeIdent_boxed_3276_ = lean_unbox(v_includeIdent_3275_);
v_res_3277_ = l_Lean_Parser_nonReservedSymbolNoAntiquot(v_sym_3274_, v_includeIdent_boxed_3276_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(lean_object* v_sym_3278_, lean_object* v_errorMsg_3279_, lean_object* v_j_3280_, lean_object* v_c_3281_, lean_object* v_s_3282_){
_start:
{
uint8_t v___x_3283_; 
v___x_3283_ = lean_string_utf8_at_end(v_sym_3278_, v_j_3280_);
if (v___x_3283_ == 0)
{
lean_object* v_pos_3284_; lean_object* v_toInputContext_3285_; uint8_t v___x_3286_; 
v_pos_3284_ = lean_ctor_get(v_s_3282_, 2);
v_toInputContext_3285_ = lean_ctor_get(v_c_3281_, 0);
v___x_3286_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_3285_, v_pos_3284_);
if (v___x_3286_ == 0)
{
lean_object* v_inputString_3287_; uint32_t v___x_3288_; uint32_t v___x_3289_; uint8_t v___x_3290_; 
v_inputString_3287_ = lean_ctor_get(v_toInputContext_3285_, 0);
v___x_3288_ = lean_string_utf8_get_fast(v_sym_3278_, v_j_3280_);
v___x_3289_ = lean_string_utf8_get_fast(v_inputString_3287_, v_pos_3284_);
v___x_3290_ = lean_uint32_dec_eq(v___x_3288_, v___x_3289_);
if (v___x_3290_ == 0)
{
lean_object* v___x_3291_; 
lean_dec(v_j_3280_);
v___x_3291_ = l_Lean_Parser_ParserState_mkError(v_s_3282_, v_errorMsg_3279_);
return v___x_3291_;
}
else
{
if (v___x_3286_ == 0)
{
lean_object* v___x_3292_; lean_object* v___x_3293_; 
lean_inc(v_pos_3284_);
v___x_3292_ = lean_string_utf8_next_fast(v_sym_3278_, v_j_3280_);
lean_dec(v_j_3280_);
v___x_3293_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_3282_, v_c_3281_, v_pos_3284_);
lean_dec(v_pos_3284_);
v_j_3280_ = v___x_3292_;
v_s_3282_ = v___x_3293_;
goto _start;
}
else
{
lean_object* v___x_3295_; 
lean_dec(v_j_3280_);
v___x_3295_ = l_Lean_Parser_ParserState_mkError(v_s_3282_, v_errorMsg_3279_);
return v___x_3295_;
}
}
}
else
{
lean_object* v___x_3296_; 
lean_dec(v_j_3280_);
v___x_3296_ = l_Lean_Parser_ParserState_mkError(v_s_3282_, v_errorMsg_3279_);
return v___x_3296_;
}
}
else
{
lean_dec(v_j_3280_);
lean_dec_ref(v_errorMsg_3279_);
return v_s_3282_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse___boxed(lean_object* v_sym_3297_, lean_object* v_errorMsg_3298_, lean_object* v_j_3299_, lean_object* v_c_3300_, lean_object* v_s_3301_){
_start:
{
lean_object* v_res_3302_; 
v_res_3302_ = l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(v_sym_3297_, v_errorMsg_3298_, v_j_3299_, v_c_3300_, v_s_3301_);
lean_dec_ref(v_c_3300_);
lean_dec_ref(v_sym_3297_);
return v_res_3302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strAux(lean_object* v_sym_3303_, lean_object* v_errorMsg_3304_, lean_object* v_j_3305_, lean_object* v_c_3306_, lean_object* v_s_3307_){
_start:
{
lean_object* v___x_3308_; 
v___x_3308_ = l___private_Lean_Parser_Basic_0__Lean_Parser_strAux_parse(v_sym_3303_, v_errorMsg_3304_, v_j_3305_, v_c_3306_, v_s_3307_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strAux___boxed(lean_object* v_sym_3309_, lean_object* v_errorMsg_3310_, lean_object* v_j_3311_, lean_object* v_c_3312_, lean_object* v_s_3313_){
_start:
{
lean_object* v_res_3314_; 
v_res_3314_ = l_Lean_Parser_strAux(v_sym_3309_, v_errorMsg_3310_, v_j_3311_, v_c_3312_, v_s_3313_);
lean_dec_ref(v_c_3312_);
lean_dec_ref(v_sym_3309_);
return v_res_3314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(lean_object* v_as_3315_, lean_object* v_i_3316_){
_start:
{
lean_object* v_zero_3317_; uint8_t v_isZero_3318_; 
v_zero_3317_ = lean_unsigned_to_nat(0u);
v_isZero_3318_ = lean_nat_dec_eq(v_i_3316_, v_zero_3317_);
if (v_isZero_3318_ == 1)
{
lean_object* v___x_3319_; 
lean_dec(v_i_3316_);
v___x_3319_ = lean_box(0);
return v___x_3319_;
}
else
{
lean_object* v_one_3320_; lean_object* v_n_3321_; lean_object* v___x_3322_; uint8_t v___x_3323_; 
v_one_3320_ = lean_unsigned_to_nat(1u);
v_n_3321_ = lean_nat_sub(v_i_3316_, v_one_3320_);
lean_dec(v_i_3316_);
v___x_3322_ = l_Subarray_get___redArg(v_as_3315_, v_n_3321_);
v___x_3323_ = l_Lean_Syntax_isNone(v___x_3322_);
if (v___x_3323_ == 0)
{
lean_object* v___x_3324_; 
lean_dec(v_n_3321_);
v___x_3324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3322_);
return v___x_3324_;
}
else
{
lean_dec(v___x_3322_);
v_i_3316_ = v_n_3321_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg___boxed(lean_object* v_as_3326_, lean_object* v_i_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v_as_3326_, v_i_3327_);
lean_dec_ref(v_as_3326_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(lean_object* v_stack_3329_){
_start:
{
lean_object* v___x_3330_; lean_object* v_start_3331_; lean_object* v_stop_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; 
v___x_3330_ = l_Lean_Parser_SyntaxStack_toSubarray(v_stack_3329_);
v_start_3331_ = lean_ctor_get(v___x_3330_, 1);
lean_inc(v_start_3331_);
v_stop_3332_ = lean_ctor_get(v___x_3330_, 2);
lean_inc(v_stop_3332_);
v___x_3333_ = lean_nat_sub(v_stop_3332_, v_start_3331_);
lean_dec(v_start_3331_);
lean_dec(v_stop_3332_);
v___x_3334_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v___x_3330_, v___x_3333_);
lean_dec_ref(v___x_3330_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v___x_3335_; 
v___x_3335_ = lean_box(0);
return v___x_3335_;
}
else
{
lean_object* v_val_3336_; 
v_val_3336_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_val_3336_);
lean_dec_ref_known(v___x_3334_, 1);
return v_val_3336_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(lean_object* v_as_3337_, lean_object* v_i_3338_, lean_object* v_a_3339_){
_start:
{
lean_object* v___x_3340_; 
v___x_3340_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___redArg(v_as_3337_, v_i_3338_);
return v___x_3340_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0___boxed(lean_object* v_as_3341_, lean_object* v_i_3342_, lean_object* v_a_3343_){
_start:
{
lean_object* v_res_3344_; 
v_res_3344_ = l___private_Init_Data_Array_Subarray_0__Subarray_findSomeRevM_x3f_find___at___00__private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone_spec__0(v_as_3341_, v_i_3342_, v_a_3343_);
lean_dec_ref(v_as_3341_);
return v_res_3344_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailWs(lean_object* v_prev_3345_){
_start:
{
lean_object* v___x_3346_; 
v___x_3346_ = l_Lean_Syntax_getTailInfo(v_prev_3345_);
if (lean_obj_tag(v___x_3346_) == 0)
{
lean_object* v_trailing_3347_; lean_object* v_startPos_3348_; lean_object* v_stopPos_3349_; uint8_t v___x_3350_; 
v_trailing_3347_ = lean_ctor_get(v___x_3346_, 2);
lean_inc_ref(v_trailing_3347_);
lean_dec_ref_known(v___x_3346_, 4);
v_startPos_3348_ = lean_ctor_get(v_trailing_3347_, 1);
lean_inc(v_startPos_3348_);
v_stopPos_3349_ = lean_ctor_get(v_trailing_3347_, 2);
lean_inc(v_stopPos_3349_);
lean_dec_ref(v_trailing_3347_);
v___x_3350_ = lean_nat_dec_lt(v_startPos_3348_, v_stopPos_3349_);
lean_dec(v_stopPos_3349_);
lean_dec(v_startPos_3348_);
return v___x_3350_;
}
else
{
uint8_t v___x_3351_; 
lean_dec(v___x_3346_);
v___x_3351_ = 0;
return v___x_3351_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailWs___boxed(lean_object* v_prev_3352_){
_start:
{
uint8_t v_res_3353_; lean_object* v_r_3354_; 
v_res_3353_ = l_Lean_Parser_checkTailWs(v_prev_3352_);
lean_dec(v_prev_3352_);
v_r_3354_ = lean_box(v_res_3353_);
return v_r_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___redArg(lean_object* v_errorMsg_3355_, lean_object* v_s_3356_){
_start:
{
lean_object* v_stxStack_3357_; lean_object* v_prev_3358_; uint8_t v___x_3359_; 
v_stxStack_3357_ = lean_ctor_get(v_s_3356_, 0);
lean_inc_ref(v_stxStack_3357_);
v_prev_3358_ = l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(v_stxStack_3357_);
v___x_3359_ = l_Lean_Parser_checkTailWs(v_prev_3358_);
lean_dec(v_prev_3358_);
if (v___x_3359_ == 0)
{
lean_object* v___x_3360_; 
v___x_3360_ = l_Lean_Parser_ParserState_mkError(v_s_3356_, v_errorMsg_3355_);
return v___x_3360_;
}
else
{
lean_dec_ref(v_errorMsg_3355_);
return v_s_3356_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn(lean_object* v_errorMsg_3361_, lean_object* v_x_3362_, lean_object* v_s_3363_){
_start:
{
lean_object* v___x_3364_; 
v___x_3364_ = l_Lean_Parser_checkWsBeforeFn___redArg(v_errorMsg_3361_, v_s_3363_);
return v___x_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBeforeFn___boxed(lean_object* v_errorMsg_3365_, lean_object* v_x_3366_, lean_object* v_s_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_Parser_checkWsBeforeFn(v_errorMsg_3365_, v_x_3366_, v_s_3367_);
lean_dec_ref(v_x_3366_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkWsBefore(lean_object* v_errorMsg_3369_){
_start:
{
lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3370_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3371_ = lean_alloc_closure((void*)(l_Lean_Parser_checkWsBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3371_, 0, v_errorMsg_3369_);
v___x_3372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3370_);
lean_ctor_set(v___x_3372_, 1, v___x_3371_);
return v___x_3372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1(){
_start:
{
lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3380_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__1));
v___x_3381_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___closed__2));
v___x_3382_ = l_Lean_addBuiltinDocString(v___x_3380_, v___x_3381_);
return v___x_3382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1___boxed(lean_object* v_a_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(lean_object* v_msg_3385_){
_start:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; 
v___x_3386_ = l_String_instInhabitedSlice;
v___x_3387_ = lean_panic_fn_borrowed(v___x_3386_, v_msg_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(lean_object* v_s_3388_, lean_object* v_a_3389_, uint8_t v_b_3390_){
_start:
{
lean_object* v_str_3391_; lean_object* v_startInclusive_3392_; lean_object* v_endExclusive_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; 
v_str_3391_ = lean_ctor_get(v_s_3388_, 0);
v_startInclusive_3392_ = lean_ctor_get(v_s_3388_, 1);
v_endExclusive_3393_ = lean_ctor_get(v_s_3388_, 2);
v___x_3394_ = lean_nat_sub(v_endExclusive_3393_, v_startInclusive_3392_);
v___x_3395_ = lean_nat_dec_eq(v_a_3389_, v___x_3394_);
lean_dec(v___x_3394_);
if (v___x_3395_ == 0)
{
uint32_t v___x_3396_; lean_object* v___x_3397_; uint32_t v___x_3398_; uint8_t v___x_3399_; 
v___x_3396_ = 10;
v___x_3397_ = lean_nat_add(v_startInclusive_3392_, v_a_3389_);
lean_dec(v_a_3389_);
v___x_3398_ = lean_string_utf8_get_fast(v_str_3391_, v___x_3397_);
v___x_3399_ = lean_uint32_dec_eq(v___x_3398_, v___x_3396_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = lean_string_utf8_next_fast(v_str_3391_, v___x_3397_);
lean_dec(v___x_3397_);
v___x_3401_ = lean_nat_sub(v___x_3400_, v_startInclusive_3392_);
v_a_3389_ = v___x_3401_;
v_b_3390_ = v___x_3399_;
goto _start;
}
else
{
lean_dec(v___x_3397_);
return v___x_3399_;
}
}
else
{
lean_dec(v_a_3389_);
return v_b_3390_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg___boxed(lean_object* v_s_3403_, lean_object* v_a_3404_, lean_object* v_b_3405_){
_start:
{
uint8_t v_b_boxed_3406_; uint8_t v_res_3407_; lean_object* v_r_3408_; 
v_b_boxed_3406_ = lean_unbox(v_b_3405_);
v_res_3407_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3403_, v_a_3404_, v_b_boxed_3406_);
lean_dec_ref(v_s_3403_);
v_r_3408_ = lean_box(v_res_3407_);
return v_r_3408_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(lean_object* v_s_3409_){
_start:
{
lean_object* v_searcher_3410_; uint8_t v___x_3411_; uint8_t v___x_3412_; 
v_searcher_3410_ = lean_unsigned_to_nat(0u);
v___x_3411_ = 0;
v___x_3412_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3409_, v_searcher_3410_, v___x_3411_);
return v___x_3412_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1___boxed(lean_object* v_s_3413_){
_start:
{
uint8_t v_res_3414_; lean_object* v_r_3415_; 
v_res_3414_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v_s_3413_);
lean_dec_ref(v_s_3413_);
v_r_3415_ = lean_box(v_res_3414_);
return v_r_3415_;
}
}
static lean_object* _init_l_Lean_Parser_checkTailLinebreak___closed__3(void){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3419_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__2));
v___x_3420_ = lean_unsigned_to_nat(14u);
v___x_3421_ = lean_unsigned_to_nat(22u);
v___x_3422_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__1));
v___x_3423_ = ((lean_object*)(l_Lean_Parser_checkTailLinebreak___closed__0));
v___x_3424_ = l_mkPanicMessageWithDecl(v___x_3423_, v___x_3422_, v___x_3421_, v___x_3420_, v___x_3419_);
return v___x_3424_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailLinebreak(lean_object* v_prev_3425_){
_start:
{
lean_object* v___x_3430_; 
v___x_3430_ = l_Lean_Syntax_getTailInfo(v_prev_3425_);
if (lean_obj_tag(v___x_3430_) == 0)
{
lean_object* v_trailing_3431_; lean_object* v_str_3432_; lean_object* v_startPos_3433_; lean_object* v_stopPos_3434_; lean_object* v___x_3436_; uint8_t v_isShared_3437_; uint8_t v_isSharedCheck_3445_; 
v_trailing_3431_ = lean_ctor_get(v___x_3430_, 2);
lean_inc_ref(v_trailing_3431_);
lean_dec_ref_known(v___x_3430_, 4);
v_str_3432_ = lean_ctor_get(v_trailing_3431_, 0);
v_startPos_3433_ = lean_ctor_get(v_trailing_3431_, 1);
v_stopPos_3434_ = lean_ctor_get(v_trailing_3431_, 2);
v_isSharedCheck_3445_ = !lean_is_exclusive(v_trailing_3431_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3436_ = v_trailing_3431_;
v_isShared_3437_ = v_isSharedCheck_3445_;
goto v_resetjp_3435_;
}
else
{
lean_inc(v_stopPos_3434_);
lean_inc(v_startPos_3433_);
lean_inc(v_str_3432_);
lean_dec(v_trailing_3431_);
v___x_3436_ = lean_box(0);
v_isShared_3437_ = v_isSharedCheck_3445_;
goto v_resetjp_3435_;
}
v_resetjp_3435_:
{
uint8_t v___x_3438_; 
v___x_3438_ = lean_string_is_valid_pos(v_str_3432_, v_startPos_3433_);
if (v___x_3438_ == 0)
{
lean_del_object(v___x_3436_);
lean_dec(v_stopPos_3434_);
lean_dec(v_startPos_3433_);
lean_dec_ref(v_str_3432_);
goto v___jp_3426_;
}
else
{
uint8_t v___x_3439_; 
v___x_3439_ = lean_string_is_valid_pos(v_str_3432_, v_stopPos_3434_);
if (v___x_3439_ == 0)
{
lean_del_object(v___x_3436_);
lean_dec(v_stopPos_3434_);
lean_dec(v_startPos_3433_);
lean_dec_ref(v_str_3432_);
goto v___jp_3426_;
}
else
{
uint8_t v___x_3440_; 
v___x_3440_ = lean_nat_dec_le(v_startPos_3433_, v_stopPos_3434_);
if (v___x_3440_ == 0)
{
lean_del_object(v___x_3436_);
lean_dec(v_stopPos_3434_);
lean_dec(v_startPos_3433_);
lean_dec_ref(v_str_3432_);
goto v___jp_3426_;
}
else
{
lean_object* v___x_3442_; 
if (v_isShared_3437_ == 0)
{
v___x_3442_ = v___x_3436_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_str_3432_);
lean_ctor_set(v_reuseFailAlloc_3444_, 1, v_startPos_3433_);
lean_ctor_set(v_reuseFailAlloc_3444_, 2, v_stopPos_3434_);
v___x_3442_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
uint8_t v___x_3443_; 
v___x_3443_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v___x_3442_);
lean_dec_ref(v___x_3442_);
return v___x_3443_;
}
}
}
}
}
}
else
{
uint8_t v___x_3446_; 
lean_dec(v___x_3430_);
v___x_3446_ = 0;
return v___x_3446_;
}
v___jp_3426_:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; uint8_t v___x_3429_; 
v___x_3427_ = lean_obj_once(&l_Lean_Parser_checkTailLinebreak___closed__3, &l_Lean_Parser_checkTailLinebreak___closed__3_once, _init_l_Lean_Parser_checkTailLinebreak___closed__3);
v___x_3428_ = l_panic___at___00Lean_Parser_checkTailLinebreak_spec__0(v___x_3427_);
v___x_3429_ = l_String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1(v___x_3428_);
lean_dec_ref(v___x_3428_);
return v___x_3429_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailLinebreak___boxed(lean_object* v_prev_3447_){
_start:
{
uint8_t v_res_3448_; lean_object* v_r_3449_; 
v_res_3448_ = l_Lean_Parser_checkTailLinebreak(v_prev_3447_);
lean_dec(v_prev_3447_);
v_r_3449_ = lean_box(v_res_3448_);
return v_r_3449_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(lean_object* v_s_3450_, lean_object* v_inst_3451_, lean_object* v_R_3452_, lean_object* v_a_3453_, uint8_t v_b_3454_, lean_object* v_c_3455_){
_start:
{
uint8_t v___x_3456_; 
v___x_3456_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___redArg(v_s_3450_, v_a_3453_, v_b_3454_);
return v___x_3456_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1___boxed(lean_object* v_s_3457_, lean_object* v_inst_3458_, lean_object* v_R_3459_, lean_object* v_a_3460_, lean_object* v_b_3461_, lean_object* v_c_3462_){
_start:
{
uint8_t v_b_boxed_3463_; uint8_t v_res_3464_; lean_object* v_r_3465_; 
v_b_boxed_3463_ = lean_unbox(v_b_3461_);
v_res_3464_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Parser_checkTailLinebreak_spec__1_spec__1(v_s_3457_, v_inst_3458_, v_R_3459_, v_a_3460_, v_b_boxed_3463_, v_c_3462_);
lean_dec_ref(v_s_3457_);
v_r_3465_ = lean_box(v_res_3464_);
return v_r_3465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___redArg(lean_object* v_errorMsg_3466_, lean_object* v_s_3467_){
_start:
{
lean_object* v_stxStack_3468_; lean_object* v_prev_3469_; uint8_t v___x_3470_; 
v_stxStack_3468_ = lean_ctor_get(v_s_3467_, 0);
v_prev_3469_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3468_);
v___x_3470_ = l_Lean_Parser_checkTailLinebreak(v_prev_3469_);
lean_dec(v_prev_3469_);
if (v___x_3470_ == 0)
{
lean_object* v___x_3471_; 
v___x_3471_ = l_Lean_Parser_ParserState_mkError(v_s_3467_, v_errorMsg_3466_);
return v___x_3471_;
}
else
{
lean_dec_ref(v_errorMsg_3466_);
return v_s_3467_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn(lean_object* v_errorMsg_3472_, lean_object* v_x_3473_, lean_object* v_s_3474_){
_start:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_Lean_Parser_checkLinebreakBeforeFn___redArg(v_errorMsg_3472_, v_s_3474_);
return v___x_3475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBeforeFn___boxed(lean_object* v_errorMsg_3476_, lean_object* v_x_3477_, lean_object* v_s_3478_){
_start:
{
lean_object* v_res_3479_; 
v_res_3479_ = l_Lean_Parser_checkLinebreakBeforeFn(v_errorMsg_3476_, v_x_3477_, v_s_3478_);
lean_dec_ref(v_x_3477_);
return v_res_3479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object* v_errorMsg_3480_){
_start:
{
lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3481_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3482_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLinebreakBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3482_, 0, v_errorMsg_3480_);
v___x_3483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3483_, 0, v___x_3481_);
lean_ctor_set(v___x_3483_, 1, v___x_3482_);
return v___x_3483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1(){
_start:
{
lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; 
v___x_3491_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__1));
v___x_3492_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___closed__2));
v___x_3493_ = l_Lean_addBuiltinDocString(v___x_3491_, v___x_3492_);
return v___x_3493_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1___boxed(lean_object* v_a_3494_){
_start:
{
lean_object* v_res_3495_; 
v_res_3495_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
return v_res_3495_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_checkTailNoWs(lean_object* v_prev_3496_){
_start:
{
lean_object* v___x_3497_; 
v___x_3497_ = l_Lean_Syntax_getTailInfo(v_prev_3496_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_trailing_3498_; lean_object* v_startPos_3499_; lean_object* v_stopPos_3500_; uint8_t v___x_3501_; 
v_trailing_3498_ = lean_ctor_get(v___x_3497_, 2);
lean_inc_ref(v_trailing_3498_);
lean_dec_ref_known(v___x_3497_, 4);
v_startPos_3499_ = lean_ctor_get(v_trailing_3498_, 1);
lean_inc(v_startPos_3499_);
v_stopPos_3500_ = lean_ctor_get(v_trailing_3498_, 2);
lean_inc(v_stopPos_3500_);
lean_dec_ref(v_trailing_3498_);
v___x_3501_ = lean_nat_dec_eq(v_stopPos_3500_, v_startPos_3499_);
lean_dec(v_startPos_3499_);
lean_dec(v_stopPos_3500_);
return v___x_3501_;
}
else
{
uint8_t v___x_3502_; 
lean_dec(v___x_3497_);
v___x_3502_ = 0;
return v___x_3502_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkTailNoWs___boxed(lean_object* v_prev_3503_){
_start:
{
uint8_t v_res_3504_; lean_object* v_r_3505_; 
v_res_3504_ = l_Lean_Parser_checkTailNoWs(v_prev_3503_);
lean_dec(v_prev_3503_);
v_r_3505_ = lean_box(v_res_3504_);
return v_r_3505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___redArg(lean_object* v_errorMsg_3506_, lean_object* v_s_3507_){
_start:
{
lean_object* v_stxStack_3508_; lean_object* v_prev_3509_; uint8_t v___x_3510_; 
v_stxStack_3508_ = lean_ctor_get(v_s_3507_, 0);
lean_inc_ref(v_stxStack_3508_);
v_prev_3509_ = l___private_Lean_Parser_Basic_0__Lean_Parser_pickNonNone(v_stxStack_3508_);
v___x_3510_ = l_Lean_Parser_checkTailNoWs(v_prev_3509_);
lean_dec(v_prev_3509_);
if (v___x_3510_ == 0)
{
lean_object* v___x_3511_; 
v___x_3511_ = l_Lean_Parser_ParserState_mkError(v_s_3507_, v_errorMsg_3506_);
return v___x_3511_;
}
else
{
lean_dec_ref(v_errorMsg_3506_);
return v_s_3507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn(lean_object* v_errorMsg_3512_, lean_object* v_x_3513_, lean_object* v_s_3514_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Lean_Parser_checkNoWsBeforeFn___redArg(v_errorMsg_3512_, v_s_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBeforeFn___boxed(lean_object* v_errorMsg_3516_, lean_object* v_x_3517_, lean_object* v_s_3518_){
_start:
{
lean_object* v_res_3519_; 
v_res_3519_ = l_Lean_Parser_checkNoWsBeforeFn(v_errorMsg_3516_, v_x_3517_, v_s_3518_);
lean_dec_ref(v_x_3517_);
return v_res_3519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoWsBefore(lean_object* v_errorMsg_3520_){
_start:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; 
v___x_3521_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3522_ = lean_alloc_closure((void*)(l_Lean_Parser_checkNoWsBeforeFn___boxed), 3, 1);
lean_closure_set(v___x_3522_, 0, v_errorMsg_3520_);
v___x_3523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3521_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
return v___x_3523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1(){
_start:
{
lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3531_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__1));
v___x_3532_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___closed__2));
v___x_3533_ = l_Lean_addBuiltinDocString(v___x_3531_, v___x_3532_);
return v___x_3533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1___boxed(lean_object* v_a_3534_){
_start:
{
lean_object* v_res_3535_; 
v_res_3535_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
return v_res_3535_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_unicodeSymbolFnAux___lam__0(lean_object* v_sym_3536_, lean_object* v_asciiSym_3537_, lean_object* v_s_3538_){
_start:
{
uint8_t v___x_3539_; 
v___x_3539_ = lean_string_dec_eq(v_s_3538_, v_sym_3536_);
if (v___x_3539_ == 0)
{
uint8_t v___x_3540_; 
v___x_3540_ = lean_string_dec_eq(v_s_3538_, v_asciiSym_3537_);
return v___x_3540_;
}
else
{
return v___x_3539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed(lean_object* v_sym_3541_, lean_object* v_asciiSym_3542_, lean_object* v_s_3543_){
_start:
{
uint8_t v_res_3544_; lean_object* v_r_3545_; 
v_res_3544_ = l_Lean_Parser_unicodeSymbolFnAux___lam__0(v_sym_3541_, v_asciiSym_3542_, v_s_3543_);
lean_dec_ref(v_s_3543_);
lean_dec_ref(v_asciiSym_3542_);
lean_dec_ref(v_sym_3541_);
v_r_3545_ = lean_box(v_res_3544_);
return v_r_3545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFnAux(lean_object* v_sym_3546_, lean_object* v_asciiSym_3547_, lean_object* v_expected_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_){
_start:
{
lean_object* v___f_3551_; lean_object* v___x_3552_; 
v___f_3551_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFnAux___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3551_, 0, v_sym_3546_);
lean_closure_set(v___f_3551_, 1, v_asciiSym_3547_);
v___x_3552_ = l_Lean_Parser_satisfySymbolFn(v___f_3551_, v_expected_3548_, v_a_3549_, v_a_3550_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo___lam__0(lean_object* v_asciiSym_3553_, lean_object* v_sym_3554_, lean_object* v_tks_3555_){
_start:
{
lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3556_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3556_, 0, v_asciiSym_3553_);
lean_ctor_set(v___x_3556_, 1, v_tks_3555_);
v___x_3557_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3557_, 0, v_sym_3554_);
lean_ctor_set(v___x_3557_, 1, v___x_3556_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolInfo(lean_object* v_sym_3558_, lean_object* v_asciiSym_3559_){
_start:
{
lean_object* v___f_3560_; lean_object* v___f_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; 
lean_inc_ref(v_sym_3558_);
lean_inc_ref(v_asciiSym_3559_);
v___f_3560_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolInfo___lam__0), 3, 2);
lean_closure_set(v___f_3560_, 0, v_asciiSym_3559_);
lean_closure_set(v___f_3560_, 1, v_sym_3558_);
v___f_3561_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3562_ = lean_box(0);
v___x_3563_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3563_, 0, v_asciiSym_3559_);
lean_ctor_set(v___x_3563_, 1, v___x_3562_);
v___x_3564_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3564_, 0, v_sym_3558_);
lean_ctor_set(v___x_3564_, 1, v___x_3563_);
v___x_3565_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3565_, 0, v___x_3564_);
v___x_3566_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3566_, 0, v___f_3560_);
lean_ctor_set(v___x_3566_, 1, v___f_3561_);
lean_ctor_set(v___x_3566_, 2, v___x_3565_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolFn(lean_object* v_sym_3568_, lean_object* v_asciiSym_3569_, lean_object* v_a_3570_, lean_object* v_a_3571_){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; 
v___x_3572_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3573_ = lean_string_append(v___x_3572_, v_sym_3568_);
v___x_3574_ = ((lean_object*)(l_Lean_Parser_unicodeSymbolFn___closed__0));
v___x_3575_ = lean_string_append(v___x_3573_, v___x_3574_);
v___x_3576_ = lean_string_append(v___x_3575_, v_asciiSym_3569_);
v___x_3577_ = lean_string_append(v___x_3576_, v___x_3572_);
v___x_3578_ = lean_box(0);
v___x_3579_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3579_, 0, v___x_3577_);
lean_ctor_set(v___x_3579_, 1, v___x_3578_);
v___x_3580_ = l_Lean_Parser_unicodeSymbolFnAux(v_sym_3568_, v_asciiSym_3569_, v___x_3579_, v_a_3570_, v_a_3571_);
return v___x_3580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(lean_object* v_sym_3581_, lean_object* v_asciiSym_3582_){
_start:
{
lean_object* v___x_3583_; lean_object* v___x_3584_; lean_object* v___x_3585_; lean_object* v___x_3586_; lean_object* v_str_3587_; lean_object* v_startInclusive_3588_; lean_object* v_endExclusive_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3606_; 
v___x_3583_ = lean_unsigned_to_nat(0u);
v___x_3584_ = lean_string_utf8_byte_size(v_sym_3581_);
v___x_3585_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3585_, 0, v_sym_3581_);
lean_ctor_set(v___x_3585_, 1, v___x_3583_);
lean_ctor_set(v___x_3585_, 2, v___x_3584_);
v___x_3586_ = l_String_Slice_trimAscii(v___x_3585_);
v_str_3587_ = lean_ctor_get(v___x_3586_, 0);
v_startInclusive_3588_ = lean_ctor_get(v___x_3586_, 1);
v_endExclusive_3589_ = lean_ctor_get(v___x_3586_, 2);
v_isSharedCheck_3606_ = !lean_is_exclusive(v___x_3586_);
if (v_isSharedCheck_3606_ == 0)
{
v___x_3591_ = v___x_3586_;
v_isShared_3592_ = v_isSharedCheck_3606_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_endExclusive_3589_);
lean_inc(v_startInclusive_3588_);
lean_inc(v_str_3587_);
lean_dec(v___x_3586_);
v___x_3591_ = lean_box(0);
v_isShared_3592_ = v_isSharedCheck_3606_;
goto v_resetjp_3590_;
}
v_resetjp_3590_:
{
lean_object* v___x_3593_; lean_object* v___x_3595_; 
v___x_3593_ = lean_string_utf8_byte_size(v_asciiSym_3582_);
if (v_isShared_3592_ == 0)
{
lean_ctor_set(v___x_3591_, 2, v___x_3593_);
lean_ctor_set(v___x_3591_, 1, v___x_3583_);
lean_ctor_set(v___x_3591_, 0, v_asciiSym_3582_);
v___x_3595_ = v___x_3591_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3605_; 
v_reuseFailAlloc_3605_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3605_, 0, v_asciiSym_3582_);
lean_ctor_set(v_reuseFailAlloc_3605_, 1, v___x_3583_);
lean_ctor_set(v_reuseFailAlloc_3605_, 2, v___x_3593_);
v___x_3595_ = v_reuseFailAlloc_3605_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
lean_object* v___x_3596_; lean_object* v_str_3597_; lean_object* v_startInclusive_3598_; lean_object* v_endExclusive_3599_; lean_object* v_sym_3600_; lean_object* v_asciiSym_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; 
v___x_3596_ = l_String_Slice_trimAscii(v___x_3595_);
v_str_3597_ = lean_ctor_get(v___x_3596_, 0);
lean_inc_ref(v_str_3597_);
v_startInclusive_3598_ = lean_ctor_get(v___x_3596_, 1);
lean_inc(v_startInclusive_3598_);
v_endExclusive_3599_ = lean_ctor_get(v___x_3596_, 2);
lean_inc(v_endExclusive_3599_);
lean_dec_ref(v___x_3596_);
v_sym_3600_ = lean_string_utf8_extract(v_str_3587_, v_startInclusive_3588_, v_endExclusive_3589_);
lean_dec(v_endExclusive_3589_);
lean_dec(v_startInclusive_3588_);
lean_dec_ref(v_str_3587_);
v_asciiSym_3601_ = lean_string_utf8_extract(v_str_3597_, v_startInclusive_3598_, v_endExclusive_3599_);
lean_dec(v_endExclusive_3599_);
lean_dec(v_startInclusive_3598_);
lean_dec_ref(v_str_3597_);
lean_inc_ref(v_asciiSym_3601_);
lean_inc_ref(v_sym_3600_);
v___x_3602_ = l_Lean_Parser_unicodeSymbolInfo(v_sym_3600_, v_asciiSym_3601_);
v___x_3603_ = lean_alloc_closure((void*)(l_Lean_Parser_unicodeSymbolFn), 4, 2);
lean_closure_set(v___x_3603_, 0, v_sym_3600_);
lean_closure_set(v___x_3603_, 1, v_asciiSym_3601_);
v___x_3604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3602_);
lean_ctor_set(v___x_3604_, 1, v___x_3603_);
return v___x_3604_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot(lean_object* v_sym_3607_, lean_object* v_asciiSym_3608_, uint8_t v_preserveForPP_3609_){
_start:
{
lean_object* v___x_3610_; 
v___x_3610_ = l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(v_sym_3607_, v_asciiSym_3608_);
return v___x_3610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbolNoAntiquot___boxed(lean_object* v_sym_3611_, lean_object* v_asciiSym_3612_, lean_object* v_preserveForPP_3613_){
_start:
{
uint8_t v_preserveForPP_boxed_3614_; lean_object* v_res_3615_; 
v_preserveForPP_boxed_3614_ = lean_unbox(v_preserveForPP_3613_);
v_res_3615_ = l_Lean_Parser_unicodeSymbolNoAntiquot(v_sym_3611_, v_asciiSym_3612_, v_preserveForPP_boxed_3614_);
return v_res_3615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtomicInfo(lean_object* v_k_3616_){
_start:
{
lean_object* v___f_3617_; lean_object* v___f_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; 
v___f_3617_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__0));
v___f_3618_ = ((lean_object*)(l_Lean_Parser_epsilonInfo___closed__1));
v___x_3619_ = lean_box(0);
v___x_3620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3620_, 0, v_k_3616_);
lean_ctor_set(v___x_3620_, 1, v___x_3619_);
v___x_3621_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3620_);
v___x_3622_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3622_, 0, v___f_3617_);
lean_ctor_set(v___x_3622_, 1, v___f_3618_);
lean_ctor_set(v___x_3622_, 2, v___x_3621_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn(lean_object* v_k_3623_, lean_object* v_desc_3624_, lean_object* v_c_3625_, lean_object* v_s_3626_){
_start:
{
lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v_s_3629_; lean_object* v_stxStack_3630_; lean_object* v_errorMsg_3631_; lean_object* v___x_3632_; uint8_t v___x_3633_; 
v___x_3627_ = lean_box(0);
lean_inc_ref(v_desc_3624_);
v___x_3628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3628_, 0, v_desc_3624_);
lean_ctor_set(v___x_3628_, 1, v___x_3627_);
v_s_3629_ = l_Lean_Parser_tokenFn(v___x_3628_, v_c_3625_, v_s_3626_);
v_stxStack_3630_ = lean_ctor_get(v_s_3629_, 0);
lean_inc_ref(v_stxStack_3630_);
v_errorMsg_3631_ = lean_ctor_get(v_s_3629_, 4);
lean_inc(v_errorMsg_3631_);
v___x_3632_ = lean_box(0);
v___x_3633_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3631_, v___x_3632_);
if (v___x_3633_ == 0)
{
lean_dec_ref(v_stxStack_3630_);
lean_dec_ref(v_desc_3624_);
return v_s_3629_;
}
else
{
lean_object* v___x_3634_; uint8_t v___x_3635_; 
v___x_3634_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3630_);
lean_dec_ref(v_stxStack_3630_);
v___x_3635_ = l_Lean_Syntax_isOfKind(v___x_3634_, v_k_3623_);
if (v___x_3635_ == 0)
{
lean_object* v___x_3636_; lean_object* v___x_3637_; 
v___x_3636_ = lean_unsigned_to_nat(0u);
v___x_3637_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3629_, v_desc_3624_, v___x_3636_);
return v___x_3637_;
}
else
{
lean_dec_ref(v_desc_3624_);
return v_s_3629_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_expectTokenFn___boxed(lean_object* v_k_3638_, lean_object* v_desc_3639_, lean_object* v_c_3640_, lean_object* v_s_3641_){
_start:
{
lean_object* v_res_3642_; 
v_res_3642_ = l_Lean_Parser_expectTokenFn(v_k_3638_, v_desc_3639_, v_c_3640_, v_s_3641_);
lean_dec(v_k_3638_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_numLitFn(lean_object* v_a_3643_, lean_object* v_a_3644_){
_start:
{
lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; 
v___x_3645_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__1));
v___x_3646_ = ((lean_object*)(l_Lean_Parser_numberFnAux___closed__0));
v___x_3647_ = l_Lean_Parser_expectTokenFn(v___x_3645_, v___x_3646_, v_a_3643_, v_a_3644_);
return v___x_3647_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(l_Lean_Parser_decimalNumberFn___closed__0));
v___x_3649_ = l_Lean_Parser_mkAtomicInfo(v___x_3648_);
return v___x_3649_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; 
v___x_3650_ = lean_alloc_closure((void*)(l_Lean_Parser_numLitFn), 2, 0);
v___x_3651_ = lean_obj_once(&l_Lean_Parser_numLitNoAntiquot___closed__0, &l_Lean_Parser_numLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_numLitNoAntiquot___closed__0);
v___x_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3652_, 0, v___x_3651_);
lean_ctor_set(v___x_3652_, 1, v___x_3650_);
return v___x_3652_;
}
}
static lean_object* _init_l_Lean_Parser_numLitNoAntiquot(void){
_start:
{
lean_object* v___x_3653_; 
v___x_3653_ = lean_obj_once(&l_Lean_Parser_numLitNoAntiquot___closed__1, &l_Lean_Parser_numLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_numLitNoAntiquot___closed__1);
return v___x_3653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hexnumFn(lean_object* v_ctx_3657_, lean_object* v_s_3658_){
_start:
{
lean_object* v_pos_3659_; uint8_t v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; 
v_pos_3659_ = lean_ctor_get(v_s_3658_, 2);
lean_inc(v_pos_3659_);
v___x_3660_ = 1;
v___x_3661_ = ((lean_object*)(l_Lean_Parser_hexnumFn___closed__1));
v___x_3662_ = l_Lean_Parser_hexNumberFn(v_pos_3659_, v___x_3660_, v___x_3661_, v_ctx_3657_, v_s_3658_);
return v___x_3662_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = ((lean_object*)(l_Lean_Parser_hexnumFn___closed__0));
v___x_3664_ = l_Lean_Parser_mkAtomicInfo(v___x_3663_);
return v___x_3664_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3665_; lean_object* v___x_3666_; lean_object* v___x_3667_; 
v___x_3665_ = lean_alloc_closure((void*)(l_Lean_Parser_hexnumFn), 2, 0);
v___x_3666_ = lean_obj_once(&l_Lean_Parser_hexnumNoAntiquot___closed__0, &l_Lean_Parser_hexnumNoAntiquot___closed__0_once, _init_l_Lean_Parser_hexnumNoAntiquot___closed__0);
v___x_3667_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3667_, 0, v___x_3666_);
lean_ctor_set(v___x_3667_, 1, v___x_3665_);
return v___x_3667_;
}
}
static lean_object* _init_l_Lean_Parser_hexnumNoAntiquot(void){
_start:
{
lean_object* v___x_3668_; 
v___x_3668_ = lean_obj_once(&l_Lean_Parser_hexnumNoAntiquot___closed__1, &l_Lean_Parser_hexnumNoAntiquot___closed__1_once, _init_l_Lean_Parser_hexnumNoAntiquot___closed__1);
return v___x_3668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_scientificLitFn(lean_object* v_a_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v___x_3672_; lean_object* v___x_3673_; lean_object* v___x_3674_; 
v___x_3672_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__1));
v___x_3673_ = ((lean_object*)(l_Lean_Parser_scientificLitFn___closed__0));
v___x_3674_ = l_Lean_Parser_expectTokenFn(v___x_3672_, v___x_3673_, v_a_3670_, v_a_3671_);
return v___x_3674_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3675_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseScientific___closed__0));
v___x_3676_ = l_Lean_Parser_mkAtomicInfo(v___x_3675_);
return v___x_3676_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3677_ = lean_alloc_closure((void*)(l_Lean_Parser_scientificLitFn), 2, 0);
v___x_3678_ = lean_obj_once(&l_Lean_Parser_scientificLitNoAntiquot___closed__0, &l_Lean_Parser_scientificLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_scientificLitNoAntiquot___closed__0);
v___x_3679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3679_, 0, v___x_3678_);
lean_ctor_set(v___x_3679_, 1, v___x_3677_);
return v___x_3679_;
}
}
static lean_object* _init_l_Lean_Parser_scientificLitNoAntiquot(void){
_start:
{
lean_object* v___x_3680_; 
v___x_3680_ = lean_obj_once(&l_Lean_Parser_scientificLitNoAntiquot___closed__1, &l_Lean_Parser_scientificLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_scientificLitNoAntiquot___closed__1);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_strLitFn(lean_object* v_a_3682_, lean_object* v_a_3683_){
_start:
{
lean_object* v___x_3684_; lean_object* v___x_3685_; lean_object* v___x_3686_; 
v___x_3684_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__1));
v___x_3685_ = ((lean_object*)(l_Lean_Parser_strLitFn___closed__0));
v___x_3686_ = l_Lean_Parser_expectTokenFn(v___x_3684_, v___x_3685_, v_a_3682_, v_a_3683_);
return v___x_3686_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3687_; lean_object* v___x_3688_; 
v___x_3687_ = ((lean_object*)(l_Lean_Parser_strLitFnAux___closed__0));
v___x_3688_ = l_Lean_Parser_mkAtomicInfo(v___x_3687_);
return v___x_3688_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; lean_object* v___x_3691_; 
v___x_3689_ = lean_alloc_closure((void*)(l_Lean_Parser_strLitFn), 2, 0);
v___x_3690_ = lean_obj_once(&l_Lean_Parser_strLitNoAntiquot___closed__0, &l_Lean_Parser_strLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_strLitNoAntiquot___closed__0);
v___x_3691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3691_, 0, v___x_3690_);
lean_ctor_set(v___x_3691_, 1, v___x_3689_);
return v___x_3691_;
}
}
static lean_object* _init_l_Lean_Parser_strLitNoAntiquot(void){
_start:
{
lean_object* v___x_3692_; 
v___x_3692_ = lean_obj_once(&l_Lean_Parser_strLitNoAntiquot___closed__1, &l_Lean_Parser_strLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_strLitNoAntiquot___closed__1);
return v___x_3692_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_charLitFn(lean_object* v_a_3694_, lean_object* v_a_3695_){
_start:
{
lean_object* v___x_3696_; lean_object* v___x_3697_; lean_object* v___x_3698_; 
v___x_3696_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__2));
v___x_3697_ = ((lean_object*)(l_Lean_Parser_charLitFn___closed__0));
v___x_3698_ = l_Lean_Parser_expectTokenFn(v___x_3696_, v___x_3697_, v_a_3694_, v_a_3695_);
return v___x_3698_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3699_; lean_object* v___x_3700_; 
v___x_3699_ = ((lean_object*)(l_Lean_Parser_charLitFnAux___closed__1));
v___x_3700_ = l_Lean_Parser_mkAtomicInfo(v___x_3699_);
return v___x_3700_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; 
v___x_3701_ = lean_alloc_closure((void*)(l_Lean_Parser_charLitFn), 2, 0);
v___x_3702_ = lean_obj_once(&l_Lean_Parser_charLitNoAntiquot___closed__0, &l_Lean_Parser_charLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_charLitNoAntiquot___closed__0);
v___x_3703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3703_, 0, v___x_3702_);
lean_ctor_set(v___x_3703_, 1, v___x_3701_);
return v___x_3703_;
}
}
static lean_object* _init_l_Lean_Parser_charLitNoAntiquot(void){
_start:
{
lean_object* v___x_3704_; 
v___x_3704_ = lean_obj_once(&l_Lean_Parser_charLitNoAntiquot___closed__1, &l_Lean_Parser_charLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_charLitNoAntiquot___closed__1);
return v___x_3704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nameLitFn(lean_object* v_a_3709_, lean_object* v_a_3710_){
_start:
{
lean_object* v___x_3711_; lean_object* v___x_3712_; lean_object* v___x_3713_; 
v___x_3711_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__1));
v___x_3712_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__2));
v___x_3713_ = l_Lean_Parser_expectTokenFn(v___x_3711_, v___x_3712_, v_a_3709_, v_a_3710_);
return v___x_3713_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3714_; lean_object* v___x_3715_; 
v___x_3714_ = ((lean_object*)(l_Lean_Parser_nameLitFn___closed__0));
v___x_3715_ = l_Lean_Parser_mkAtomicInfo(v___x_3714_);
return v___x_3715_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3716_; lean_object* v___x_3717_; lean_object* v___x_3718_; 
v___x_3716_ = lean_alloc_closure((void*)(l_Lean_Parser_nameLitFn), 2, 0);
v___x_3717_ = lean_obj_once(&l_Lean_Parser_nameLitNoAntiquot___closed__0, &l_Lean_Parser_nameLitNoAntiquot___closed__0_once, _init_l_Lean_Parser_nameLitNoAntiquot___closed__0);
v___x_3718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3718_, 0, v___x_3717_);
lean_ctor_set(v___x_3718_, 1, v___x_3716_);
return v___x_3718_;
}
}
static lean_object* _init_l_Lean_Parser_nameLitNoAntiquot(void){
_start:
{
lean_object* v___x_3719_; 
v___x_3719_ = lean_obj_once(&l_Lean_Parser_nameLitNoAntiquot___closed__1, &l_Lean_Parser_nameLitNoAntiquot___closed__1_once, _init_l_Lean_Parser_nameLitNoAntiquot___closed__1);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identFn(lean_object* v_a_3723_, lean_object* v_a_3724_){
_start:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; 
v___x_3725_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_3726_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v___x_3727_ = l_Lean_Parser_expectTokenFn(v___x_3725_, v___x_3726_, v_a_3723_, v_a_3724_);
return v___x_3727_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3728_; lean_object* v___x_3729_; 
v___x_3728_ = ((lean_object*)(l_Lean_Parser_nonReservedSymbolInfo___closed__0));
v___x_3729_ = l_Lean_Parser_mkAtomicInfo(v___x_3728_);
return v___x_3729_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3730_; lean_object* v___x_3731_; lean_object* v___x_3732_; 
v___x_3730_ = lean_alloc_closure((void*)(l_Lean_Parser_identFn), 2, 0);
v___x_3731_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__0, &l_Lean_Parser_identNoAntiquot___closed__0_once, _init_l_Lean_Parser_identNoAntiquot___closed__0);
v___x_3732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3732_, 0, v___x_3731_);
lean_ctor_set(v___x_3732_, 1, v___x_3730_);
return v___x_3732_;
}
}
static lean_object* _init_l_Lean_Parser_identNoAntiquot(void){
_start:
{
lean_object* v___x_3733_; 
v___x_3733_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__1, &l_Lean_Parser_identNoAntiquot___closed__1_once, _init_l_Lean_Parser_identNoAntiquot___closed__1);
return v___x_3733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identEqFn(lean_object* v_id_3745_, lean_object* v_c_3746_, lean_object* v_s_3747_){
_start:
{
lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v_s_3750_; lean_object* v_stxStack_3751_; lean_object* v_errorMsg_3752_; lean_object* v___x_3753_; uint8_t v___x_3754_; 
v___x_3748_ = ((lean_object*)(l_Lean_Parser_identFn___closed__1));
v___x_3749_ = ((lean_object*)(l_Lean_Parser_identEqFn___closed__0));
v_s_3750_ = l_Lean_Parser_tokenFn(v___x_3749_, v_c_3746_, v_s_3747_);
v_stxStack_3751_ = lean_ctor_get(v_s_3750_, 0);
lean_inc_ref(v_stxStack_3751_);
v_errorMsg_3752_ = lean_ctor_get(v_s_3750_, 4);
lean_inc(v_errorMsg_3752_);
v___x_3753_ = lean_box(0);
v___x_3754_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3752_, v___x_3753_);
if (v___x_3754_ == 0)
{
lean_dec_ref(v_stxStack_3751_);
lean_dec(v_id_3745_);
return v_s_3750_;
}
else
{
lean_object* v___x_3755_; 
v___x_3755_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3751_);
lean_dec_ref(v_stxStack_3751_);
if (lean_obj_tag(v___x_3755_) == 3)
{
lean_object* v_val_3756_; uint8_t v___x_3757_; 
v_val_3756_ = lean_ctor_get(v___x_3755_, 2);
lean_inc(v_val_3756_);
lean_dec_ref_known(v___x_3755_, 4);
v___x_3757_ = lean_name_eq(v_val_3756_, v_id_3745_);
lean_dec(v_val_3756_);
if (v___x_3757_ == 0)
{
lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v___x_3758_ = ((lean_object*)(l_Lean_Parser_identEqFn___closed__1));
v___x_3759_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_id_3745_, v___x_3754_);
v___x_3760_ = lean_string_append(v___x_3758_, v___x_3759_);
lean_dec_ref(v___x_3759_);
v___x_3761_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_3762_ = lean_string_append(v___x_3760_, v___x_3761_);
v___x_3763_ = lean_unsigned_to_nat(0u);
v___x_3764_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3750_, v___x_3762_, v___x_3763_);
return v___x_3764_;
}
else
{
lean_dec(v_id_3745_);
return v_s_3750_;
}
}
else
{
lean_object* v___x_3765_; lean_object* v___x_3766_; 
lean_dec(v___x_3755_);
lean_dec(v_id_3745_);
v___x_3765_ = lean_unsigned_to_nat(0u);
v___x_3766_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_3750_, v___x_3748_, v___x_3765_);
return v___x_3766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_identEq(lean_object* v_id_3767_){
_start:
{
lean_object* v___x_3768_; lean_object* v___x_3769_; lean_object* v___x_3770_; 
v___x_3768_ = lean_obj_once(&l_Lean_Parser_identNoAntiquot___closed__0, &l_Lean_Parser_identNoAntiquot___closed__0_once, _init_l_Lean_Parser_identNoAntiquot___closed__0);
v___x_3769_ = lean_alloc_closure((void*)(l_Lean_Parser_identEqFn), 3, 1);
lean_closure_set(v___x_3769_, 0, v_id_3767_);
v___x_3770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3770_, 0, v___x_3768_);
lean_ctor_set(v___x_3770_, 1, v___x_3769_);
return v___x_3770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn(lean_object* v_c_3774_, lean_object* v_s_3775_){
_start:
{
lean_object* v_pos_3777_; lean_object* v_str_3778_; lean_object* v_trailing_3779_; lean_object* v_s_3780_; lean_object* v_stxStack_3793_; lean_object* v_pos_3794_; uint8_t v___x_3797_; 
v_stxStack_3793_ = lean_ctor_get(v_s_3775_, 0);
v_pos_3794_ = lean_ctor_get(v_s_3775_, 2);
v___x_3797_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stxStack_3793_);
if (v___x_3797_ == 0)
{
lean_object* v_prev_3798_; lean_object* v___x_3799_; 
v_prev_3798_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_3793_);
v___x_3799_ = l_Lean_Syntax_getTailInfo(v_prev_3798_);
if (lean_obj_tag(v___x_3799_) == 0)
{
lean_object* v_leading_3800_; lean_object* v_pos_3801_; lean_object* v_trailing_3802_; lean_object* v_endPos_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3814_; 
v_leading_3800_ = lean_ctor_get(v___x_3799_, 0);
v_pos_3801_ = lean_ctor_get(v___x_3799_, 1);
v_trailing_3802_ = lean_ctor_get(v___x_3799_, 2);
v_endPos_3803_ = lean_ctor_get(v___x_3799_, 3);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3799_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3805_ = v___x_3799_;
v_isShared_3806_ = v_isSharedCheck_3814_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_endPos_3803_);
lean_inc(v_trailing_3802_);
lean_inc(v_pos_3801_);
lean_inc(v_leading_3800_);
lean_dec(v___x_3799_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3814_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v_str_3807_; lean_object* v___x_3808_; lean_object* v___x_3810_; 
lean_inc_n(v_endPos_3803_, 2);
v_str_3807_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_3774_, v_endPos_3803_);
v___x_3808_ = l_Lean_Parser_ParserState_popSyntax(v_s_3775_);
lean_inc_ref(v_str_3807_);
if (v_isShared_3806_ == 0)
{
lean_ctor_set(v___x_3805_, 2, v_str_3807_);
v___x_3810_ = v___x_3805_;
goto v_reusejp_3809_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_leading_3800_);
lean_ctor_set(v_reuseFailAlloc_3813_, 1, v_pos_3801_);
lean_ctor_set(v_reuseFailAlloc_3813_, 2, v_str_3807_);
lean_ctor_set(v_reuseFailAlloc_3813_, 3, v_endPos_3803_);
v___x_3810_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3809_;
}
v_reusejp_3809_:
{
lean_object* v___x_3811_; lean_object* v_s_3812_; 
v___x_3811_ = l_Lean_Syntax_setTailInfo(v_prev_3798_, v___x_3810_);
v_s_3812_ = l_Lean_Parser_ParserState_pushSyntax(v___x_3808_, v___x_3811_, v___x_3797_);
v_pos_3777_ = v_endPos_3803_;
v_str_3778_ = v_str_3807_;
v_trailing_3779_ = v_trailing_3802_;
v_s_3780_ = v_s_3812_;
goto v___jp_3776_;
}
}
}
else
{
lean_inc(v_pos_3794_);
lean_dec(v___x_3799_);
lean_dec(v_prev_3798_);
goto v___jp_3795_;
}
}
else
{
lean_inc(v_pos_3794_);
goto v___jp_3795_;
}
v___jp_3776_:
{
lean_object* v_info_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v_ident_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; uint8_t v___x_3791_; lean_object* v___x_3792_; 
lean_inc(v_pos_3777_);
lean_inc_ref(v_str_3778_);
v_info_3781_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_info_3781_, 0, v_str_3778_);
lean_ctor_set(v_info_3781_, 1, v_pos_3777_);
lean_ctor_set(v_info_3781_, 2, v_trailing_3779_);
lean_ctor_set(v_info_3781_, 3, v_pos_3777_);
v___x_3782_ = lean_box(0);
v___x_3783_ = lean_box(0);
v_ident_3784_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_ident_3784_, 0, v_info_3781_);
lean_ctor_set(v_ident_3784_, 1, v_str_3778_);
lean_ctor_set(v_ident_3784_, 2, v___x_3782_);
lean_ctor_set(v_ident_3784_, 3, v___x_3783_);
v___x_3785_ = ((lean_object*)(l_Lean_Parser_hygieneInfoFn___closed__1));
v___x_3786_ = lean_unsigned_to_nat(1u);
v___x_3787_ = lean_mk_empty_array_with_capacity(v___x_3786_);
v___x_3788_ = lean_array_push(v___x_3787_, v_ident_3784_);
v___x_3789_ = lean_box(2);
v___x_3790_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3790_, 0, v___x_3789_);
lean_ctor_set(v___x_3790_, 1, v___x_3785_);
lean_ctor_set(v___x_3790_, 2, v___x_3788_);
v___x_3791_ = 0;
v___x_3792_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3780_, v___x_3790_, v___x_3791_);
return v___x_3792_;
}
v___jp_3795_:
{
lean_object* v_str_3796_; 
lean_inc(v_pos_3794_);
v_str_3796_ = l_Lean_Parser_ParserContext_mkEmptySubstringAt(v_c_3774_, v_pos_3794_);
lean_inc_ref(v_str_3796_);
v_pos_3777_ = v_pos_3794_;
v_str_3778_ = v_str_3796_;
v_trailing_3779_ = v_str_3796_;
v_s_3780_ = v_s_3775_;
goto v___jp_3776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_hygieneInfoFn___boxed(lean_object* v_c_3815_, lean_object* v_s_3816_){
_start:
{
lean_object* v_res_3817_; 
v_res_3817_ = l_Lean_Parser_hygieneInfoFn(v_c_3815_, v_s_3816_);
lean_dec_ref(v_c_3815_);
return v_res_3817_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__0(void){
_start:
{
lean_object* v___x_3818_; lean_object* v___x_3819_; lean_object* v___x_3820_; 
v___x_3818_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_3819_ = ((lean_object*)(l_Lean_Parser_hygieneInfoFn___closed__1));
v___x_3820_ = l_Lean_Parser_nodeInfo(v___x_3819_, v___x_3818_);
return v___x_3820_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__1(void){
_start:
{
lean_object* v___x_3821_; lean_object* v___x_3822_; lean_object* v___x_3823_; 
v___x_3821_ = lean_alloc_closure((void*)(l_Lean_Parser_hygieneInfoFn___boxed), 2, 0);
v___x_3822_ = lean_obj_once(&l_Lean_Parser_hygieneInfoNoAntiquot___closed__0, &l_Lean_Parser_hygieneInfoNoAntiquot___closed__0_once, _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__0);
v___x_3823_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3823_, 0, v___x_3822_);
lean_ctor_set(v___x_3823_, 1, v___x_3821_);
return v___x_3823_;
}
}
static lean_object* _init_l_Lean_Parser_hygieneInfoNoAntiquot(void){
_start:
{
lean_object* v___x_3824_; 
v___x_3824_ = lean_obj_once(&l_Lean_Parser_hygieneInfoNoAntiquot___closed__1, &l_Lean_Parser_hygieneInfoNoAntiquot___closed__1_once, _init_l_Lean_Parser_hygieneInfoNoAntiquot___closed__1);
return v___x_3824_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop(lean_object* v_s_3825_, lean_object* v_startStackSize_3826_){
_start:
{
lean_object* v_node_3827_; lean_object* v___x_3828_; lean_object* v___x_3829_; 
v_node_3827_ = l_Lean_Parser_SyntaxStack_back(v_s_3825_);
v___x_3828_ = l_Lean_Parser_SyntaxStack_shrink(v_s_3825_, v_startStackSize_3826_);
v___x_3829_ = l_Lean_Parser_SyntaxStack_push(v___x_3828_, v_node_3827_);
return v___x_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepTop___boxed(lean_object* v_s_3830_, lean_object* v_startStackSize_3831_){
_start:
{
lean_object* v_res_3832_; 
v_res_3832_ = l_Lean_Parser_ParserState_keepTop(v_s_3830_, v_startStackSize_3831_);
lean_dec(v_startStackSize_3831_);
return v_res_3832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError(lean_object* v_s_3833_, lean_object* v_oldStackSize_3834_){
_start:
{
lean_object* v_stxStack_3835_; lean_object* v_lhsPrec_3836_; lean_object* v_pos_3837_; lean_object* v_cache_3838_; lean_object* v_errorMsg_3839_; lean_object* v_recoveredErrors_3840_; lean_object* v_traces_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3849_; 
v_stxStack_3835_ = lean_ctor_get(v_s_3833_, 0);
v_lhsPrec_3836_ = lean_ctor_get(v_s_3833_, 1);
v_pos_3837_ = lean_ctor_get(v_s_3833_, 2);
v_cache_3838_ = lean_ctor_get(v_s_3833_, 3);
v_errorMsg_3839_ = lean_ctor_get(v_s_3833_, 4);
v_recoveredErrors_3840_ = lean_ctor_get(v_s_3833_, 5);
v_traces_3841_ = lean_ctor_get(v_s_3833_, 6);
v_isSharedCheck_3849_ = !lean_is_exclusive(v_s_3833_);
if (v_isSharedCheck_3849_ == 0)
{
v___x_3843_ = v_s_3833_;
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_traces_3841_);
lean_inc(v_recoveredErrors_3840_);
lean_inc(v_errorMsg_3839_);
lean_inc(v_cache_3838_);
lean_inc(v_pos_3837_);
lean_inc(v_lhsPrec_3836_);
lean_inc(v_stxStack_3835_);
lean_dec(v_s_3833_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3849_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3845_; lean_object* v___x_3847_; 
v___x_3845_ = l_Lean_Parser_ParserState_keepTop(v_stxStack_3835_, v_oldStackSize_3834_);
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 0, v___x_3845_);
v___x_3847_ = v___x_3843_;
goto v_reusejp_3846_;
}
else
{
lean_object* v_reuseFailAlloc_3848_; 
v_reuseFailAlloc_3848_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3848_, 0, v___x_3845_);
lean_ctor_set(v_reuseFailAlloc_3848_, 1, v_lhsPrec_3836_);
lean_ctor_set(v_reuseFailAlloc_3848_, 2, v_pos_3837_);
lean_ctor_set(v_reuseFailAlloc_3848_, 3, v_cache_3838_);
lean_ctor_set(v_reuseFailAlloc_3848_, 4, v_errorMsg_3839_);
lean_ctor_set(v_reuseFailAlloc_3848_, 5, v_recoveredErrors_3840_);
lean_ctor_set(v_reuseFailAlloc_3848_, 6, v_traces_3841_);
v___x_3847_ = v_reuseFailAlloc_3848_;
goto v_reusejp_3846_;
}
v_reusejp_3846_:
{
return v___x_3847_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepNewError___boxed(lean_object* v_s_3850_, lean_object* v_oldStackSize_3851_){
_start:
{
lean_object* v_res_3852_; 
v_res_3852_ = l_Lean_Parser_ParserState_keepNewError(v_s_3850_, v_oldStackSize_3851_);
lean_dec(v_oldStackSize_3851_);
return v_res_3852_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError(lean_object* v_s_3853_, lean_object* v_oldStackSize_3854_, lean_object* v_oldStopPos_3855_, lean_object* v_oldError_3856_, lean_object* v_oldLhsPrec_3857_){
_start:
{
lean_object* v_stxStack_3858_; lean_object* v_cache_3859_; lean_object* v_recoveredErrors_3860_; lean_object* v_traces_3861_; lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3869_; 
v_stxStack_3858_ = lean_ctor_get(v_s_3853_, 0);
v_cache_3859_ = lean_ctor_get(v_s_3853_, 3);
v_recoveredErrors_3860_ = lean_ctor_get(v_s_3853_, 5);
v_traces_3861_ = lean_ctor_get(v_s_3853_, 6);
v_isSharedCheck_3869_ = !lean_is_exclusive(v_s_3853_);
if (v_isSharedCheck_3869_ == 0)
{
lean_object* v_unused_3870_; lean_object* v_unused_3871_; lean_object* v_unused_3872_; 
v_unused_3870_ = lean_ctor_get(v_s_3853_, 4);
lean_dec(v_unused_3870_);
v_unused_3871_ = lean_ctor_get(v_s_3853_, 2);
lean_dec(v_unused_3871_);
v_unused_3872_ = lean_ctor_get(v_s_3853_, 1);
lean_dec(v_unused_3872_);
v___x_3863_ = v_s_3853_;
v_isShared_3864_ = v_isSharedCheck_3869_;
goto v_resetjp_3862_;
}
else
{
lean_inc(v_traces_3861_);
lean_inc(v_recoveredErrors_3860_);
lean_inc(v_cache_3859_);
lean_inc(v_stxStack_3858_);
lean_dec(v_s_3853_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3869_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3865_; lean_object* v___x_3867_; 
v___x_3865_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_3858_, v_oldStackSize_3854_);
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 4, v_oldError_3856_);
lean_ctor_set(v___x_3863_, 2, v_oldStopPos_3855_);
lean_ctor_set(v___x_3863_, 1, v_oldLhsPrec_3857_);
lean_ctor_set(v___x_3863_, 0, v___x_3865_);
v___x_3867_ = v___x_3863_;
goto v_reusejp_3866_;
}
else
{
lean_object* v_reuseFailAlloc_3868_; 
v_reuseFailAlloc_3868_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3868_, 0, v___x_3865_);
lean_ctor_set(v_reuseFailAlloc_3868_, 1, v_oldLhsPrec_3857_);
lean_ctor_set(v_reuseFailAlloc_3868_, 2, v_oldStopPos_3855_);
lean_ctor_set(v_reuseFailAlloc_3868_, 3, v_cache_3859_);
lean_ctor_set(v_reuseFailAlloc_3868_, 4, v_oldError_3856_);
lean_ctor_set(v_reuseFailAlloc_3868_, 5, v_recoveredErrors_3860_);
lean_ctor_set(v_reuseFailAlloc_3868_, 6, v_traces_3861_);
v___x_3867_ = v_reuseFailAlloc_3868_;
goto v_reusejp_3866_;
}
v_reusejp_3866_:
{
return v___x_3867_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepPrevError___boxed(lean_object* v_s_3873_, lean_object* v_oldStackSize_3874_, lean_object* v_oldStopPos_3875_, lean_object* v_oldError_3876_, lean_object* v_oldLhsPrec_3877_){
_start:
{
lean_object* v_res_3878_; 
v_res_3878_ = l_Lean_Parser_ParserState_keepPrevError(v_s_3873_, v_oldStackSize_3874_, v_oldStopPos_3875_, v_oldError_3876_, v_oldLhsPrec_3877_);
lean_dec(v_oldStackSize_3874_);
return v_res_3878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors(lean_object* v_s_3879_, lean_object* v_oldStackSize_3880_, lean_object* v_oldError_3881_){
_start:
{
lean_object* v_stxStack_3882_; lean_object* v_lhsPrec_3883_; lean_object* v_pos_3884_; lean_object* v_cache_3885_; lean_object* v_errorMsg_3886_; lean_object* v_recoveredErrors_3887_; lean_object* v_traces_3888_; lean_object* v___y_3890_; 
v_stxStack_3882_ = lean_ctor_get(v_s_3879_, 0);
v_lhsPrec_3883_ = lean_ctor_get(v_s_3879_, 1);
v_pos_3884_ = lean_ctor_get(v_s_3879_, 2);
v_cache_3885_ = lean_ctor_get(v_s_3879_, 3);
v_errorMsg_3886_ = lean_ctor_get(v_s_3879_, 4);
v_recoveredErrors_3887_ = lean_ctor_get(v_s_3879_, 5);
v_traces_3888_ = lean_ctor_get(v_s_3879_, 6);
if (lean_obj_tag(v_errorMsg_3886_) == 1)
{
lean_object* v_val_3894_; uint8_t v___x_3895_; 
lean_inc_ref(v_errorMsg_3886_);
lean_inc_ref(v_traces_3888_);
lean_inc_ref(v_recoveredErrors_3887_);
lean_inc_ref(v_cache_3885_);
lean_inc(v_pos_3884_);
lean_inc(v_lhsPrec_3883_);
lean_inc_ref(v_stxStack_3882_);
lean_dec_ref(v_s_3879_);
v_val_3894_ = lean_ctor_get(v_errorMsg_3886_, 0);
lean_inc_n(v_val_3894_, 2);
lean_dec_ref_known(v_errorMsg_3886_, 1);
lean_inc_ref(v_oldError_3881_);
v___x_3895_ = l_Lean_Parser_instBEqError_beq(v_oldError_3881_, v_val_3894_);
if (v___x_3895_ == 0)
{
lean_object* v___x_3896_; 
v___x_3896_ = l_Lean_Parser_Error_merge(v_oldError_3881_, v_val_3894_);
v___y_3890_ = v___x_3896_;
goto v___jp_3889_;
}
else
{
lean_dec_ref(v_oldError_3881_);
v___y_3890_ = v_val_3894_;
goto v___jp_3889_;
}
}
else
{
lean_dec_ref(v_oldError_3881_);
return v_s_3879_;
}
v___jp_3889_:
{
lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; 
v___x_3891_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_3882_, v_oldStackSize_3880_);
v___x_3892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3892_, 0, v___y_3890_);
v___x_3893_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_3893_, 0, v___x_3891_);
lean_ctor_set(v___x_3893_, 1, v_lhsPrec_3883_);
lean_ctor_set(v___x_3893_, 2, v_pos_3884_);
lean_ctor_set(v___x_3893_, 3, v_cache_3885_);
lean_ctor_set(v___x_3893_, 4, v___x_3892_);
lean_ctor_set(v___x_3893_, 5, v_recoveredErrors_3887_);
lean_ctor_set(v___x_3893_, 6, v_traces_3888_);
return v___x_3893_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mergeErrors___boxed(lean_object* v_s_3897_, lean_object* v_oldStackSize_3898_, lean_object* v_oldError_3899_){
_start:
{
lean_object* v_res_3900_; 
v_res_3900_ = l_Lean_Parser_ParserState_mergeErrors(v_s_3897_, v_oldStackSize_3898_, v_oldError_3899_);
lean_dec(v_oldStackSize_3898_);
return v_res_3900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest(lean_object* v_s_3901_, lean_object* v_startStackSize_3902_){
_start:
{
lean_object* v_stxStack_3903_; lean_object* v_lhsPrec_3904_; lean_object* v_pos_3905_; lean_object* v_cache_3906_; lean_object* v_recoveredErrors_3907_; lean_object* v_traces_3908_; lean_object* v___x_3910_; uint8_t v_isShared_3911_; uint8_t v_isSharedCheck_3917_; 
v_stxStack_3903_ = lean_ctor_get(v_s_3901_, 0);
v_lhsPrec_3904_ = lean_ctor_get(v_s_3901_, 1);
v_pos_3905_ = lean_ctor_get(v_s_3901_, 2);
v_cache_3906_ = lean_ctor_get(v_s_3901_, 3);
v_recoveredErrors_3907_ = lean_ctor_get(v_s_3901_, 5);
v_traces_3908_ = lean_ctor_get(v_s_3901_, 6);
v_isSharedCheck_3917_ = !lean_is_exclusive(v_s_3901_);
if (v_isSharedCheck_3917_ == 0)
{
lean_object* v_unused_3918_; 
v_unused_3918_ = lean_ctor_get(v_s_3901_, 4);
lean_dec(v_unused_3918_);
v___x_3910_ = v_s_3901_;
v_isShared_3911_ = v_isSharedCheck_3917_;
goto v_resetjp_3909_;
}
else
{
lean_inc(v_traces_3908_);
lean_inc(v_recoveredErrors_3907_);
lean_inc(v_cache_3906_);
lean_inc(v_pos_3905_);
lean_inc(v_lhsPrec_3904_);
lean_inc(v_stxStack_3903_);
lean_dec(v_s_3901_);
v___x_3910_ = lean_box(0);
v_isShared_3911_ = v_isSharedCheck_3917_;
goto v_resetjp_3909_;
}
v_resetjp_3909_:
{
lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3915_; 
v___x_3912_ = l_Lean_Parser_ParserState_keepTop(v_stxStack_3903_, v_startStackSize_3902_);
v___x_3913_ = lean_box(0);
if (v_isShared_3911_ == 0)
{
lean_ctor_set(v___x_3910_, 4, v___x_3913_);
lean_ctor_set(v___x_3910_, 0, v___x_3912_);
v___x_3915_ = v___x_3910_;
goto v_reusejp_3914_;
}
else
{
lean_object* v_reuseFailAlloc_3916_; 
v_reuseFailAlloc_3916_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3916_, 0, v___x_3912_);
lean_ctor_set(v_reuseFailAlloc_3916_, 1, v_lhsPrec_3904_);
lean_ctor_set(v_reuseFailAlloc_3916_, 2, v_pos_3905_);
lean_ctor_set(v_reuseFailAlloc_3916_, 3, v_cache_3906_);
lean_ctor_set(v_reuseFailAlloc_3916_, 4, v___x_3913_);
lean_ctor_set(v_reuseFailAlloc_3916_, 5, v_recoveredErrors_3907_);
lean_ctor_set(v_reuseFailAlloc_3916_, 6, v_traces_3908_);
v___x_3915_ = v_reuseFailAlloc_3916_;
goto v_reusejp_3914_;
}
v_reusejp_3914_:
{
return v___x_3915_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_keepLatest___boxed(lean_object* v_s_3919_, lean_object* v_startStackSize_3920_){
_start:
{
lean_object* v_res_3921_; 
v_res_3921_ = l_Lean_Parser_ParserState_keepLatest(v_s_3919_, v_startStackSize_3920_);
lean_dec(v_startStackSize_3920_);
return v_res_3921_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest(lean_object* v_s_3922_, lean_object* v_startStackSize_3923_){
_start:
{
lean_object* v___x_3924_; 
v___x_3924_ = l_Lean_Parser_ParserState_keepLatest(v_s_3922_, v_startStackSize_3923_);
return v___x_3924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_replaceLongest___boxed(lean_object* v_s_3925_, lean_object* v_startStackSize_3926_){
_start:
{
lean_object* v_res_3927_; 
v_res_3927_ = l_Lean_Parser_ParserState_replaceLongest(v_s_3925_, v_startStackSize_3926_);
lean_dec(v_startStackSize_3926_);
return v_res_3927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_invalidLongestMatchParser(lean_object* v_s_3929_){
_start:
{
lean_object* v___x_3930_; lean_object* v___x_3931_; 
v___x_3930_ = ((lean_object*)(l_Lean_Parser_invalidLongestMatchParser___closed__0));
v___x_3931_ = l_Lean_Parser_ParserState_mkError(v_s_3929_, v___x_3930_);
return v___x_3931_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_runLongestMatchParser(lean_object* v_left_x3f_3932_, lean_object* v_startLhsPrec_3933_, lean_object* v_p_3934_, lean_object* v_c_3935_, lean_object* v_s_3936_){
_start:
{
lean_object* v___y_3938_; uint8_t v___y_3939_; lean_object* v___y_3940_; lean_object* v___y_3945_; lean_object* v_s_3946_; lean_object* v_stxStack_3956_; lean_object* v_pos_3957_; lean_object* v_cache_3958_; lean_object* v_errorMsg_3959_; lean_object* v_recoveredErrors_3960_; lean_object* v_traces_3961_; lean_object* v___x_3963_; uint8_t v_isShared_3964_; uint8_t v_isSharedCheck_3977_; 
v_stxStack_3956_ = lean_ctor_get(v_s_3936_, 0);
v_pos_3957_ = lean_ctor_get(v_s_3936_, 2);
v_cache_3958_ = lean_ctor_get(v_s_3936_, 3);
v_errorMsg_3959_ = lean_ctor_get(v_s_3936_, 4);
v_recoveredErrors_3960_ = lean_ctor_get(v_s_3936_, 5);
v_traces_3961_ = lean_ctor_get(v_s_3936_, 6);
v_isSharedCheck_3977_ = !lean_is_exclusive(v_s_3936_);
if (v_isSharedCheck_3977_ == 0)
{
lean_object* v_unused_3978_; 
v_unused_3978_ = lean_ctor_get(v_s_3936_, 1);
lean_dec(v_unused_3978_);
v___x_3963_ = v_s_3936_;
v_isShared_3964_ = v_isSharedCheck_3977_;
goto v_resetjp_3962_;
}
else
{
lean_inc(v_traces_3961_);
lean_inc(v_recoveredErrors_3960_);
lean_inc(v_errorMsg_3959_);
lean_inc(v_cache_3958_);
lean_inc(v_pos_3957_);
lean_inc(v_stxStack_3956_);
lean_dec(v_s_3936_);
v___x_3963_ = lean_box(0);
v_isShared_3964_ = v_isSharedCheck_3977_;
goto v_resetjp_3962_;
}
v___jp_3937_:
{
lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; 
v___x_3941_ = l_Lean_Parser_ParserState_shrinkStack(v___y_3940_, v___y_3938_);
lean_dec(v___y_3938_);
v___x_3942_ = lean_box(0);
v___x_3943_ = l_Lean_Parser_ParserState_pushSyntax(v___x_3941_, v___x_3942_, v___y_3939_);
return v___x_3943_;
}
v___jp_3944_:
{
lean_object* v_s_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; uint8_t v___x_3951_; 
v_s_3947_ = lean_apply_2(v_p_3934_, v_c_3935_, v_s_3946_);
v___x_3948_ = l_Lean_Parser_ParserState_stackSize(v_s_3947_);
v___x_3949_ = lean_unsigned_to_nat(1u);
v___x_3950_ = lean_nat_add(v___y_3945_, v___x_3949_);
v___x_3951_ = lean_nat_dec_eq(v___x_3948_, v___x_3950_);
lean_dec(v___x_3950_);
lean_dec(v___x_3948_);
if (v___x_3951_ == 0)
{
lean_object* v_errorMsg_3952_; lean_object* v___x_3953_; uint8_t v___x_3954_; 
v_errorMsg_3952_ = lean_ctor_get(v_s_3947_, 4);
lean_inc(v_errorMsg_3952_);
v___x_3953_ = lean_box(0);
v___x_3954_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_3952_, v___x_3953_);
if (v___x_3954_ == 0)
{
v___y_3938_ = v___y_3945_;
v___y_3939_ = v___x_3951_;
v___y_3940_ = v_s_3947_;
goto v___jp_3937_;
}
else
{
if (v___x_3951_ == 0)
{
lean_object* v___x_3955_; 
lean_dec(v___y_3945_);
v___x_3955_ = l_Lean_Parser_invalidLongestMatchParser(v_s_3947_);
return v___x_3955_;
}
else
{
v___y_3938_ = v___y_3945_;
v___y_3939_ = v___x_3951_;
v___y_3940_ = v_s_3947_;
goto v___jp_3937_;
}
}
}
else
{
lean_dec(v___y_3945_);
return v_s_3947_;
}
}
v_resetjp_3962_:
{
uint8_t v___y_3966_; lean_object* v___y_3967_; 
if (lean_obj_tag(v_left_x3f_3932_) == 0)
{
uint8_t v___x_3974_; lean_object* v___x_3975_; 
lean_dec(v_startLhsPrec_3933_);
v___x_3974_ = 1;
v___x_3975_ = l_Lean_Parser_maxPrec;
v___y_3966_ = v___x_3974_;
v___y_3967_ = v___x_3975_;
goto v___jp_3965_;
}
else
{
uint8_t v___x_3976_; 
v___x_3976_ = 1;
v___y_3966_ = v___x_3976_;
v___y_3967_ = v_startLhsPrec_3933_;
goto v___jp_3965_;
}
v___jp_3965_:
{
lean_object* v_s_3969_; 
if (v_isShared_3964_ == 0)
{
lean_ctor_set(v___x_3963_, 1, v___y_3967_);
v_s_3969_ = v___x_3963_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v_stxStack_3956_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v___y_3967_);
lean_ctor_set(v_reuseFailAlloc_3973_, 2, v_pos_3957_);
lean_ctor_set(v_reuseFailAlloc_3973_, 3, v_cache_3958_);
lean_ctor_set(v_reuseFailAlloc_3973_, 4, v_errorMsg_3959_);
lean_ctor_set(v_reuseFailAlloc_3973_, 5, v_recoveredErrors_3960_);
lean_ctor_set(v_reuseFailAlloc_3973_, 6, v_traces_3961_);
v_s_3969_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v_startSize_3970_; 
v_startSize_3970_ = l_Lean_Parser_ParserState_stackSize(v_s_3969_);
if (lean_obj_tag(v_left_x3f_3932_) == 1)
{
lean_object* v_val_3971_; lean_object* v_s_3972_; 
v_val_3971_ = lean_ctor_get(v_left_x3f_3932_, 0);
lean_inc(v_val_3971_);
lean_dec_ref_known(v_left_x3f_3932_, 1);
v_s_3972_ = l_Lean_Parser_ParserState_pushSyntax(v_s_3969_, v_val_3971_, v___y_3966_);
v___y_3945_ = v_startSize_3970_;
v_s_3946_ = v_s_3972_;
goto v___jp_3944_;
}
else
{
lean_dec(v_left_x3f_3932_);
v___y_3945_ = v_startSize_3970_;
v_s_3946_ = v_s_3969_;
goto v___jp_3944_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score(lean_object* v_s_3979_, lean_object* v_prio_3980_){
_start:
{
lean_object* v_pos_3981_; lean_object* v_errorMsg_3982_; lean_object* v___y_3984_; 
v_pos_3981_ = lean_ctor_get(v_s_3979_, 2);
v_errorMsg_3982_ = lean_ctor_get(v_s_3979_, 4);
if (lean_obj_tag(v_errorMsg_3982_) == 0)
{
lean_object* v___x_3987_; 
v___x_3987_ = lean_unsigned_to_nat(1u);
v___y_3984_ = v___x_3987_;
goto v___jp_3983_;
}
else
{
lean_object* v___x_3988_; 
v___x_3988_ = lean_unsigned_to_nat(0u);
v___y_3984_ = v___x_3988_;
goto v___jp_3983_;
}
v___jp_3983_:
{
lean_object* v___x_3985_; lean_object* v___x_3986_; 
v___x_3985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3985_, 0, v___y_3984_);
lean_ctor_set(v___x_3985_, 1, v_prio_3980_);
lean_inc(v_pos_3981_);
v___x_3986_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3986_, 0, v_pos_3981_);
lean_ctor_set(v___x_3986_, 1, v___x_3985_);
return v___x_3986_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score___boxed(lean_object* v_s_3989_, lean_object* v_prio_3990_){
_start:
{
lean_object* v_res_3991_; 
v_res_3991_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score(v_s_3989_, v_prio_3990_);
lean_dec_ref(v_s_3989_);
return v_res_3991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep(lean_object* v_left_x3f_3994_, lean_object* v_startSize_3995_, lean_object* v_startLhsPrec_3996_, lean_object* v_startPos_3997_, lean_object* v_prevPrio_3998_, lean_object* v_prio_3999_, lean_object* v_p_4000_, lean_object* v_c_4001_, lean_object* v_s_4002_){
_start:
{
lean_object* v___y_4004_; lean_object* v_lhsPrec_4007_; lean_object* v_pos_4008_; lean_object* v_errorMsg_4009_; lean_object* v_previousScore_4010_; lean_object* v_prevSize_4011_; lean_object* v___y_4013_; lean_object* v_s_4016_; lean_object* v_s_4017_; lean_object* v_stxStack_4018_; lean_object* v_lhsPrec_4019_; lean_object* v_pos_4020_; lean_object* v_cache_4021_; lean_object* v_errorMsg_4022_; lean_object* v_recoveredErrors_4023_; lean_object* v_traces_4024_; lean_object* v___y_4026_; lean_object* v___y_4027_; lean_object* v_newScore_4030_; lean_object* v___x_4032_; uint8_t v_isShared_4033_; uint8_t v_isSharedCheck_4088_; 
v_lhsPrec_4007_ = lean_ctor_get(v_s_4002_, 1);
lean_inc(v_lhsPrec_4007_);
v_pos_4008_ = lean_ctor_get(v_s_4002_, 2);
lean_inc(v_pos_4008_);
v_errorMsg_4009_ = lean_ctor_get(v_s_4002_, 4);
lean_inc(v_errorMsg_4009_);
lean_inc(v_prevPrio_3998_);
v_previousScore_4010_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score(v_s_4002_, v_prevPrio_3998_);
v_prevSize_4011_ = l_Lean_Parser_ParserState_stackSize(v_s_4002_);
v_s_4016_ = l_Lean_Parser_ParserState_restore(v_s_4002_, v_prevSize_4011_, v_startPos_3997_);
v_s_4017_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_3994_, v_startLhsPrec_3996_, v_p_4000_, v_c_4001_, v_s_4016_);
v_stxStack_4018_ = lean_ctor_get(v_s_4017_, 0);
lean_inc_ref(v_stxStack_4018_);
v_lhsPrec_4019_ = lean_ctor_get(v_s_4017_, 1);
lean_inc(v_lhsPrec_4019_);
v_pos_4020_ = lean_ctor_get(v_s_4017_, 2);
lean_inc(v_pos_4020_);
v_cache_4021_ = lean_ctor_get(v_s_4017_, 3);
lean_inc_ref(v_cache_4021_);
v_errorMsg_4022_ = lean_ctor_get(v_s_4017_, 4);
lean_inc(v_errorMsg_4022_);
v_recoveredErrors_4023_ = lean_ctor_get(v_s_4017_, 5);
lean_inc_ref(v_recoveredErrors_4023_);
v_traces_4024_ = lean_ctor_get(v_s_4017_, 6);
lean_inc_ref(v_traces_4024_);
lean_inc(v_prio_3999_);
v_newScore_4030_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score(v_s_4017_, v_prio_3999_);
v_isSharedCheck_4088_ = !lean_is_exclusive(v_s_4017_);
if (v_isSharedCheck_4088_ == 0)
{
lean_object* v_unused_4089_; lean_object* v_unused_4090_; lean_object* v_unused_4091_; lean_object* v_unused_4092_; lean_object* v_unused_4093_; lean_object* v_unused_4094_; lean_object* v_unused_4095_; 
v_unused_4089_ = lean_ctor_get(v_s_4017_, 6);
lean_dec(v_unused_4089_);
v_unused_4090_ = lean_ctor_get(v_s_4017_, 5);
lean_dec(v_unused_4090_);
v_unused_4091_ = lean_ctor_get(v_s_4017_, 4);
lean_dec(v_unused_4091_);
v_unused_4092_ = lean_ctor_get(v_s_4017_, 3);
lean_dec(v_unused_4092_);
v_unused_4093_ = lean_ctor_get(v_s_4017_, 2);
lean_dec(v_unused_4093_);
v_unused_4094_ = lean_ctor_get(v_s_4017_, 1);
lean_dec(v_unused_4094_);
v_unused_4095_ = lean_ctor_get(v_s_4017_, 0);
lean_dec(v_unused_4095_);
v___x_4032_ = v_s_4017_;
v_isShared_4033_ = v_isSharedCheck_4088_;
goto v_resetjp_4031_;
}
else
{
lean_dec(v_s_4017_);
v___x_4032_ = lean_box(0);
v_isShared_4033_ = v_isSharedCheck_4088_;
goto v_resetjp_4031_;
}
v___jp_4003_:
{
lean_object* v___x_4005_; lean_object* v___x_4006_; 
v___x_4005_ = l_Lean_Parser_ParserState_keepNewError(v___y_4004_, v_startSize_3995_);
v___x_4006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4006_, 0, v___x_4005_);
lean_ctor_set(v___x_4006_, 1, v_prio_3999_);
return v___x_4006_;
}
v___jp_4012_:
{
lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4014_ = l_Lean_Parser_ParserState_keepPrevError(v___y_4013_, v_prevSize_4011_, v_pos_4008_, v_errorMsg_4009_, v_lhsPrec_4007_);
lean_dec(v_prevSize_4011_);
v___x_4015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4015_, 0, v___x_4014_);
lean_ctor_set(v___x_4015_, 1, v_prevPrio_3998_);
return v___x_4015_;
}
v___jp_4025_:
{
lean_object* v___x_4028_; lean_object* v___x_4029_; 
v___x_4028_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_4028_, 0, v_stxStack_4018_);
lean_ctor_set(v___x_4028_, 1, v___y_4027_);
lean_ctor_set(v___x_4028_, 2, v_pos_4020_);
lean_ctor_set(v___x_4028_, 3, v_cache_4021_);
lean_ctor_set(v___x_4028_, 4, v_errorMsg_4022_);
lean_ctor_set(v___x_4028_, 5, v_recoveredErrors_4023_);
lean_ctor_set(v___x_4028_, 6, v___y_4026_);
v___x_4029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4029_, 0, v___x_4028_);
lean_ctor_set(v___x_4029_, 1, v_prio_3999_);
return v___x_4029_;
}
v_resetjp_4031_:
{
lean_object* v___y_4035_; lean_object* v___x_4063_; lean_object* v___x_4064_; uint8_t v___x_4065_; 
v___x_4063_ = lean_array_get_size(v_traces_4024_);
v___x_4064_ = lean_unsigned_to_nat(0u);
v___x_4065_ = lean_nat_dec_eq(v___x_4063_, v___x_4064_);
if (v___x_4065_ == 0)
{
lean_object* v_snd_4066_; lean_object* v_fst_4067_; lean_object* v_fst_4068_; lean_object* v_snd_4069_; lean_object* v___x_4070_; lean_object* v___x_4071_; lean_object* v___x_4072_; lean_object* v___x_4073_; lean_object* v___x_4074_; lean_object* v___x_4075_; lean_object* v___x_4076_; lean_object* v___x_4077_; lean_object* v___x_4078_; lean_object* v___x_4079_; lean_object* v___x_4080_; lean_object* v___x_4081_; lean_object* v___x_4082_; lean_object* v___x_4083_; lean_object* v___x_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v_snd_4066_ = lean_ctor_get(v_newScore_4030_, 1);
lean_inc(v_snd_4066_);
v_fst_4067_ = lean_ctor_get(v_newScore_4030_, 0);
lean_inc(v_fst_4067_);
v_fst_4068_ = lean_ctor_get(v_snd_4066_, 0);
lean_inc(v_fst_4068_);
v_snd_4069_ = lean_ctor_get(v_snd_4066_, 1);
lean_inc(v_snd_4069_);
lean_dec(v_snd_4066_);
v___x_4070_ = ((lean_object*)(l_Lean_Parser_longestMatchStep___closed__0));
v___x_4071_ = ((lean_object*)(l_Lean_Parser_longestMatchStep___closed__1));
v___x_4072_ = l_Nat_reprFast(v_fst_4067_);
v___x_4073_ = lean_string_append(v___x_4071_, v___x_4072_);
lean_dec_ref(v___x_4072_);
v___x_4074_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0));
v___x_4075_ = lean_string_append(v___x_4073_, v___x_4074_);
v___x_4076_ = l_Nat_reprFast(v_fst_4068_);
v___x_4077_ = lean_string_append(v___x_4071_, v___x_4076_);
lean_dec_ref(v___x_4076_);
v___x_4078_ = lean_string_append(v___x_4077_, v___x_4074_);
v___x_4079_ = l_Nat_reprFast(v_snd_4069_);
v___x_4080_ = lean_string_append(v___x_4078_, v___x_4079_);
lean_dec_ref(v___x_4079_);
v___x_4081_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_4082_ = lean_string_append(v___x_4080_, v___x_4081_);
v___x_4083_ = lean_string_append(v___x_4075_, v___x_4082_);
lean_dec_ref(v___x_4082_);
v___x_4084_ = lean_string_append(v___x_4083_, v___x_4081_);
v___x_4085_ = lean_string_append(v___x_4070_, v___x_4084_);
lean_dec_ref(v___x_4084_);
v___x_4086_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4085_);
v___x_4087_ = lean_array_push(v_traces_4024_, v___x_4086_);
v___y_4035_ = v___x_4087_;
goto v___jp_4034_;
}
else
{
v___y_4035_ = v_traces_4024_;
goto v___jp_4034_;
}
v___jp_4034_:
{
lean_object* v_fst_4036_; lean_object* v_snd_4037_; lean_object* v_fst_4038_; lean_object* v_snd_4039_; lean_object* v_s_4041_; 
v_fst_4036_ = lean_ctor_get(v_previousScore_4010_, 0);
lean_inc(v_fst_4036_);
v_snd_4037_ = lean_ctor_get(v_previousScore_4010_, 1);
lean_inc(v_snd_4037_);
lean_dec_ref(v_previousScore_4010_);
v_fst_4038_ = lean_ctor_get(v_newScore_4030_, 0);
lean_inc(v_fst_4038_);
v_snd_4039_ = lean_ctor_get(v_newScore_4030_, 1);
lean_inc(v_snd_4039_);
lean_dec_ref(v_newScore_4030_);
lean_inc_ref(v___y_4035_);
lean_inc_ref(v_recoveredErrors_4023_);
lean_inc(v_errorMsg_4022_);
lean_inc_ref(v_cache_4021_);
lean_inc(v_pos_4020_);
lean_inc(v_lhsPrec_4019_);
lean_inc_ref(v_stxStack_4018_);
if (v_isShared_4033_ == 0)
{
lean_ctor_set(v___x_4032_, 6, v___y_4035_);
v_s_4041_ = v___x_4032_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4062_; 
v_reuseFailAlloc_4062_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_4062_, 0, v_stxStack_4018_);
lean_ctor_set(v_reuseFailAlloc_4062_, 1, v_lhsPrec_4019_);
lean_ctor_set(v_reuseFailAlloc_4062_, 2, v_pos_4020_);
lean_ctor_set(v_reuseFailAlloc_4062_, 3, v_cache_4021_);
lean_ctor_set(v_reuseFailAlloc_4062_, 4, v_errorMsg_4022_);
lean_ctor_set(v_reuseFailAlloc_4062_, 5, v_recoveredErrors_4023_);
lean_ctor_set(v_reuseFailAlloc_4062_, 6, v___y_4035_);
v_s_4041_ = v_reuseFailAlloc_4062_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
uint8_t v___x_4042_; 
v___x_4042_ = lean_nat_dec_lt(v_fst_4036_, v_fst_4038_);
if (v___x_4042_ == 0)
{
uint8_t v___x_4043_; 
v___x_4043_ = lean_nat_dec_eq(v_fst_4036_, v_fst_4038_);
lean_dec(v_fst_4038_);
lean_dec(v_fst_4036_);
if (v___x_4043_ == 0)
{
lean_dec(v_snd_4039_);
lean_dec(v_snd_4037_);
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_prio_3999_);
v___y_4013_ = v_s_4041_;
goto v___jp_4012_;
}
else
{
lean_object* v_fst_4044_; lean_object* v_snd_4045_; lean_object* v_fst_4046_; lean_object* v_snd_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4061_; 
v_fst_4044_ = lean_ctor_get(v_snd_4037_, 0);
lean_inc(v_fst_4044_);
v_snd_4045_ = lean_ctor_get(v_snd_4037_, 1);
lean_inc(v_snd_4045_);
lean_dec(v_snd_4037_);
v_fst_4046_ = lean_ctor_get(v_snd_4039_, 0);
v_snd_4047_ = lean_ctor_get(v_snd_4039_, 1);
v_isSharedCheck_4061_ = !lean_is_exclusive(v_snd_4039_);
if (v_isSharedCheck_4061_ == 0)
{
v___x_4049_ = v_snd_4039_;
v_isShared_4050_ = v_isSharedCheck_4061_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_snd_4047_);
lean_inc(v_fst_4046_);
lean_dec(v_snd_4039_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4061_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
uint8_t v___x_4051_; 
v___x_4051_ = lean_nat_dec_lt(v_fst_4044_, v_fst_4046_);
if (v___x_4051_ == 0)
{
uint8_t v___x_4052_; 
v___x_4052_ = lean_nat_dec_eq(v_fst_4044_, v_fst_4046_);
lean_dec(v_fst_4046_);
lean_dec(v_fst_4044_);
if (v___x_4052_ == 0)
{
lean_del_object(v___x_4049_);
lean_dec(v_snd_4047_);
lean_dec(v_snd_4045_);
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_prio_3999_);
v___y_4013_ = v_s_4041_;
goto v___jp_4012_;
}
else
{
uint8_t v___x_4053_; 
v___x_4053_ = lean_nat_dec_lt(v_snd_4045_, v_snd_4047_);
if (v___x_4053_ == 0)
{
uint8_t v___x_4054_; 
v___x_4054_ = lean_nat_dec_eq(v_snd_4045_, v_snd_4047_);
lean_dec(v_snd_4047_);
lean_dec(v_snd_4045_);
if (v___x_4054_ == 0)
{
lean_del_object(v___x_4049_);
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_prio_3999_);
v___y_4013_ = v_s_4041_;
goto v___jp_4012_;
}
else
{
lean_dec(v_pos_4008_);
lean_dec(v_prevPrio_3998_);
if (lean_obj_tag(v_errorMsg_4009_) == 0)
{
uint8_t v___x_4055_; 
lean_del_object(v___x_4049_);
lean_dec_ref(v_s_4041_);
lean_dec(v_prevSize_4011_);
v___x_4055_ = lean_nat_dec_le(v_lhsPrec_4019_, v_lhsPrec_4007_);
if (v___x_4055_ == 0)
{
lean_dec(v_lhsPrec_4019_);
v___y_4026_ = v___y_4035_;
v___y_4027_ = v_lhsPrec_4007_;
goto v___jp_4025_;
}
else
{
lean_dec(v_lhsPrec_4007_);
v___y_4026_ = v___y_4035_;
v___y_4027_ = v_lhsPrec_4019_;
goto v___jp_4025_;
}
}
else
{
lean_object* v_val_4056_; lean_object* v___x_4057_; lean_object* v___x_4059_; 
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_lhsPrec_4007_);
v_val_4056_ = lean_ctor_get(v_errorMsg_4009_, 0);
lean_inc(v_val_4056_);
lean_dec_ref_known(v_errorMsg_4009_, 1);
v___x_4057_ = l_Lean_Parser_ParserState_mergeErrors(v_s_4041_, v_prevSize_4011_, v_val_4056_);
lean_dec(v_prevSize_4011_);
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 1, v_prio_3999_);
lean_ctor_set(v___x_4049_, 0, v___x_4057_);
v___x_4059_ = v___x_4049_;
goto v_reusejp_4058_;
}
else
{
lean_object* v_reuseFailAlloc_4060_; 
v_reuseFailAlloc_4060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4060_, 0, v___x_4057_);
lean_ctor_set(v_reuseFailAlloc_4060_, 1, v_prio_3999_);
v___x_4059_ = v_reuseFailAlloc_4060_;
goto v_reusejp_4058_;
}
v_reusejp_4058_:
{
return v___x_4059_;
}
}
}
}
else
{
lean_del_object(v___x_4049_);
lean_dec(v_snd_4047_);
lean_dec(v_snd_4045_);
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_prevSize_4011_);
lean_dec(v_errorMsg_4009_);
lean_dec(v_pos_4008_);
lean_dec(v_lhsPrec_4007_);
lean_dec(v_prevPrio_3998_);
v___y_4004_ = v_s_4041_;
goto v___jp_4003_;
}
}
}
else
{
lean_del_object(v___x_4049_);
lean_dec(v_snd_4047_);
lean_dec(v_fst_4046_);
lean_dec(v_snd_4045_);
lean_dec(v_fst_4044_);
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_prevSize_4011_);
lean_dec(v_errorMsg_4009_);
lean_dec(v_pos_4008_);
lean_dec(v_lhsPrec_4007_);
lean_dec(v_prevPrio_3998_);
v___y_4004_ = v_s_4041_;
goto v___jp_4003_;
}
}
}
}
else
{
lean_dec(v_snd_4039_);
lean_dec(v_fst_4038_);
lean_dec(v_snd_4037_);
lean_dec(v_fst_4036_);
lean_dec_ref(v___y_4035_);
lean_dec_ref(v_recoveredErrors_4023_);
lean_dec(v_errorMsg_4022_);
lean_dec_ref(v_cache_4021_);
lean_dec(v_pos_4020_);
lean_dec(v_lhsPrec_4019_);
lean_dec_ref(v_stxStack_4018_);
lean_dec(v_prevSize_4011_);
lean_dec(v_errorMsg_4009_);
lean_dec(v_pos_4008_);
lean_dec(v_lhsPrec_4007_);
lean_dec(v_prevPrio_3998_);
v___y_4004_ = v_s_4041_;
goto v___jp_4003_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchStep___boxed(lean_object* v_left_x3f_4096_, lean_object* v_startSize_4097_, lean_object* v_startLhsPrec_4098_, lean_object* v_startPos_4099_, lean_object* v_prevPrio_4100_, lean_object* v_prio_4101_, lean_object* v_p_4102_, lean_object* v_c_4103_, lean_object* v_s_4104_){
_start:
{
lean_object* v_res_4105_; 
v_res_4105_ = l_Lean_Parser_longestMatchStep(v_left_x3f_4096_, v_startSize_4097_, v_startLhsPrec_4098_, v_startPos_4099_, v_prevPrio_4100_, v_prio_4101_, v_p_4102_, v_c_4103_, v_s_4104_);
lean_dec(v_startSize_4097_);
return v_res_4105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult(lean_object* v_startSize_4106_, lean_object* v_s_4107_){
_start:
{
lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; uint8_t v___x_4111_; 
v___x_4108_ = lean_unsigned_to_nat(1u);
v___x_4109_ = lean_nat_add(v_startSize_4106_, v___x_4108_);
v___x_4110_ = l_Lean_Parser_ParserState_stackSize(v_s_4107_);
v___x_4111_ = lean_nat_dec_lt(v___x_4109_, v___x_4110_);
lean_dec(v___x_4110_);
lean_dec(v___x_4109_);
if (v___x_4111_ == 0)
{
return v_s_4107_;
}
else
{
lean_object* v___x_4112_; lean_object* v___x_4113_; 
v___x_4112_ = ((lean_object*)(l_Lean_Parser_orelseFnCore___lam__0___closed__1));
v___x_4113_ = l_Lean_Parser_ParserState_mkNode(v_s_4107_, v___x_4112_, v_startSize_4106_);
return v___x_4113_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchMkResult___boxed(lean_object* v_startSize_4114_, lean_object* v_s_4115_){
_start:
{
lean_object* v_res_4116_; 
v_res_4116_ = l_Lean_Parser_longestMatchMkResult(v_startSize_4114_, v_s_4115_);
lean_dec(v_startSize_4114_);
return v_res_4116_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(lean_object* v_left_x3f_4117_, lean_object* v_startSize_4118_, lean_object* v_startLhsPrec_4119_, lean_object* v_startPos_4120_, lean_object* v_prevPrio_4121_, lean_object* v_ps_4122_, lean_object* v_a_4123_, lean_object* v_a_4124_){
_start:
{
if (lean_obj_tag(v_ps_4122_) == 0)
{
lean_object* v___x_4125_; 
lean_dec_ref(v_a_4123_);
lean_dec(v_prevPrio_4121_);
lean_dec(v_startPos_4120_);
lean_dec(v_startLhsPrec_4119_);
lean_dec(v_left_x3f_4117_);
v___x_4125_ = l_Lean_Parser_longestMatchMkResult(v_startSize_4118_, v_a_4124_);
return v___x_4125_;
}
else
{
lean_object* v_head_4126_; lean_object* v_fst_4127_; lean_object* v_tail_4128_; lean_object* v_snd_4129_; lean_object* v_fn_4130_; lean_object* v___x_4131_; lean_object* v_fst_4132_; lean_object* v_snd_4133_; 
v_head_4126_ = lean_ctor_get(v_ps_4122_, 0);
lean_inc(v_head_4126_);
v_fst_4127_ = lean_ctor_get(v_head_4126_, 0);
lean_inc(v_fst_4127_);
v_tail_4128_ = lean_ctor_get(v_ps_4122_, 1);
lean_inc(v_tail_4128_);
lean_dec_ref_known(v_ps_4122_, 2);
v_snd_4129_ = lean_ctor_get(v_head_4126_, 1);
lean_inc(v_snd_4129_);
lean_dec(v_head_4126_);
v_fn_4130_ = lean_ctor_get(v_fst_4127_, 1);
lean_inc_ref(v_fn_4130_);
lean_dec(v_fst_4127_);
lean_inc_ref(v_a_4123_);
lean_inc(v_startPos_4120_);
lean_inc(v_startLhsPrec_4119_);
lean_inc(v_left_x3f_4117_);
v___x_4131_ = l_Lean_Parser_longestMatchStep(v_left_x3f_4117_, v_startSize_4118_, v_startLhsPrec_4119_, v_startPos_4120_, v_prevPrio_4121_, v_snd_4129_, v_fn_4130_, v_a_4123_, v_a_4124_);
v_fst_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_fst_4132_);
v_snd_4133_ = lean_ctor_get(v___x_4131_, 1);
lean_inc(v_snd_4133_);
lean_dec_ref(v___x_4131_);
v_prevPrio_4121_ = v_snd_4133_;
v_ps_4122_ = v_tail_4128_;
v_a_4124_ = v_fst_4132_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse___boxed(lean_object* v_left_x3f_4135_, lean_object* v_startSize_4136_, lean_object* v_startLhsPrec_4137_, lean_object* v_startPos_4138_, lean_object* v_prevPrio_4139_, lean_object* v_ps_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_){
_start:
{
lean_object* v_res_4143_; 
v_res_4143_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_4135_, v_startSize_4136_, v_startLhsPrec_4137_, v_startPos_4138_, v_prevPrio_4139_, v_ps_4140_, v_a_4141_, v_a_4142_);
lean_dec(v_startSize_4136_);
return v_res_4143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux(lean_object* v_left_x3f_4144_, lean_object* v_startSize_4145_, lean_object* v_startLhsPrec_4146_, lean_object* v_startPos_4147_, lean_object* v_prevPrio_4148_, lean_object* v_ps_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_){
_start:
{
lean_object* v___x_4152_; 
v___x_4152_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_4144_, v_startSize_4145_, v_startLhsPrec_4146_, v_startPos_4147_, v_prevPrio_4148_, v_ps_4149_, v_a_4150_, v_a_4151_);
return v___x_4152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFnAux___boxed(lean_object* v_left_x3f_4153_, lean_object* v_startSize_4154_, lean_object* v_startLhsPrec_4155_, lean_object* v_startPos_4156_, lean_object* v_prevPrio_4157_, lean_object* v_ps_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_){
_start:
{
lean_object* v_res_4161_; 
v_res_4161_ = l_Lean_Parser_longestMatchFnAux(v_left_x3f_4153_, v_startSize_4154_, v_startLhsPrec_4155_, v_startPos_4156_, v_prevPrio_4157_, v_ps_4158_, v_a_4159_, v_a_4160_);
lean_dec(v_startSize_4154_);
return v_res_4161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn___lam__0(lean_object* v_l_4163_, lean_object* v_left_x3f_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
if (lean_obj_tag(v_l_4163_) == 0)
{
lean_object* v___x_4167_; lean_object* v___x_4168_; 
lean_dec_ref(v___y_4165_);
lean_dec(v_left_x3f_4164_);
v___x_4167_ = ((lean_object*)(l_Lean_Parser_longestMatchFn___lam__0___closed__0));
v___x_4168_ = l_Lean_Parser_ParserState_mkError(v___y_4166_, v___x_4167_);
return v___x_4168_;
}
else
{
lean_object* v_tail_4169_; 
v_tail_4169_ = lean_ctor_get(v_l_4163_, 1);
if (lean_obj_tag(v_tail_4169_) == 0)
{
lean_object* v_head_4170_; lean_object* v_fst_4171_; lean_object* v_lhsPrec_4172_; lean_object* v_fn_4173_; lean_object* v___x_4174_; 
v_head_4170_ = lean_ctor_get(v_l_4163_, 0);
lean_inc(v_head_4170_);
lean_dec_ref_known(v_l_4163_, 2);
v_fst_4171_ = lean_ctor_get(v_head_4170_, 0);
lean_inc(v_fst_4171_);
lean_dec(v_head_4170_);
v_lhsPrec_4172_ = lean_ctor_get(v___y_4166_, 1);
lean_inc(v_lhsPrec_4172_);
v_fn_4173_ = lean_ctor_get(v_fst_4171_, 1);
lean_inc_ref(v_fn_4173_);
lean_dec(v_fst_4171_);
v___x_4174_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_4164_, v_lhsPrec_4172_, v_fn_4173_, v___y_4165_, v___y_4166_);
return v___x_4174_;
}
else
{
lean_object* v_head_4175_; lean_object* v_fst_4176_; lean_object* v_lhsPrec_4177_; lean_object* v_pos_4178_; lean_object* v_snd_4179_; lean_object* v_fn_4180_; lean_object* v_startSize_4181_; lean_object* v_s_4182_; lean_object* v_stxStack_4183_; lean_object* v_lhsPrec_4184_; lean_object* v_pos_4185_; lean_object* v_cache_4186_; lean_object* v_errorMsg_4187_; lean_object* v_recoveredErrors_4188_; lean_object* v_traces_4189_; lean_object* v___y_4191_; lean_object* v___x_4194_; lean_object* v___x_4195_; uint8_t v___x_4196_; 
lean_inc(v_tail_4169_);
v_head_4175_ = lean_ctor_get(v_l_4163_, 0);
lean_inc(v_head_4175_);
lean_dec_ref_known(v_l_4163_, 2);
v_fst_4176_ = lean_ctor_get(v_head_4175_, 0);
lean_inc(v_fst_4176_);
v_lhsPrec_4177_ = lean_ctor_get(v___y_4166_, 1);
lean_inc_n(v_lhsPrec_4177_, 2);
v_pos_4178_ = lean_ctor_get(v___y_4166_, 2);
lean_inc(v_pos_4178_);
v_snd_4179_ = lean_ctor_get(v_head_4175_, 1);
lean_inc(v_snd_4179_);
lean_dec(v_head_4175_);
v_fn_4180_ = lean_ctor_get(v_fst_4176_, 1);
lean_inc_ref(v_fn_4180_);
lean_dec(v_fst_4176_);
v_startSize_4181_ = l_Lean_Parser_ParserState_stackSize(v___y_4166_);
lean_inc_ref(v___y_4165_);
lean_inc(v_left_x3f_4164_);
v_s_4182_ = l_Lean_Parser_runLongestMatchParser(v_left_x3f_4164_, v_lhsPrec_4177_, v_fn_4180_, v___y_4165_, v___y_4166_);
v_stxStack_4183_ = lean_ctor_get(v_s_4182_, 0);
lean_inc_ref(v_stxStack_4183_);
v_lhsPrec_4184_ = lean_ctor_get(v_s_4182_, 1);
lean_inc(v_lhsPrec_4184_);
v_pos_4185_ = lean_ctor_get(v_s_4182_, 2);
lean_inc(v_pos_4185_);
v_cache_4186_ = lean_ctor_get(v_s_4182_, 3);
lean_inc_ref(v_cache_4186_);
v_errorMsg_4187_ = lean_ctor_get(v_s_4182_, 4);
lean_inc(v_errorMsg_4187_);
v_recoveredErrors_4188_ = lean_ctor_get(v_s_4182_, 5);
lean_inc_ref(v_recoveredErrors_4188_);
v_traces_4189_ = lean_ctor_get(v_s_4182_, 6);
lean_inc_ref(v_traces_4189_);
v___x_4194_ = lean_array_get_size(v_traces_4189_);
v___x_4195_ = lean_unsigned_to_nat(0u);
v___x_4196_ = lean_nat_dec_eq(v___x_4194_, v___x_4195_);
if (v___x_4196_ == 0)
{
lean_object* v___x_4197_; lean_object* v_snd_4198_; lean_object* v_fst_4199_; lean_object* v_fst_4200_; lean_object* v_snd_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; 
lean_inc(v_snd_4179_);
v___x_4197_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchStep_score(v_s_4182_, v_snd_4179_);
lean_dec_ref(v_s_4182_);
v_snd_4198_ = lean_ctor_get(v___x_4197_, 1);
lean_inc(v_snd_4198_);
v_fst_4199_ = lean_ctor_get(v___x_4197_, 0);
lean_inc(v_fst_4199_);
lean_dec_ref(v___x_4197_);
v_fst_4200_ = lean_ctor_get(v_snd_4198_, 0);
lean_inc(v_fst_4200_);
v_snd_4201_ = lean_ctor_get(v_snd_4198_, 1);
lean_inc(v_snd_4201_);
lean_dec(v_snd_4198_);
v___x_4202_ = ((lean_object*)(l_Lean_Parser_longestMatchStep___closed__0));
v___x_4203_ = ((lean_object*)(l_Lean_Parser_longestMatchStep___closed__1));
v___x_4204_ = l_Nat_reprFast(v_fst_4199_);
v___x_4205_ = lean_string_append(v___x_4203_, v___x_4204_);
lean_dec_ref(v___x_4204_);
v___x_4206_ = ((lean_object*)(l_List_foldl___at___00List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0_spec__0___closed__0));
v___x_4207_ = lean_string_append(v___x_4205_, v___x_4206_);
v___x_4208_ = l_Nat_reprFast(v_fst_4200_);
v___x_4209_ = lean_string_append(v___x_4203_, v___x_4208_);
lean_dec_ref(v___x_4208_);
v___x_4210_ = lean_string_append(v___x_4209_, v___x_4206_);
v___x_4211_ = l_Nat_reprFast(v_snd_4201_);
v___x_4212_ = lean_string_append(v___x_4210_, v___x_4211_);
lean_dec_ref(v___x_4211_);
v___x_4213_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_4214_ = lean_string_append(v___x_4212_, v___x_4213_);
v___x_4215_ = lean_string_append(v___x_4207_, v___x_4214_);
lean_dec_ref(v___x_4214_);
v___x_4216_ = lean_string_append(v___x_4215_, v___x_4213_);
v___x_4217_ = lean_string_append(v___x_4202_, v___x_4216_);
lean_dec_ref(v___x_4216_);
v___x_4218_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4217_);
v___x_4219_ = lean_array_push(v_traces_4189_, v___x_4218_);
v___y_4191_ = v___x_4219_;
goto v___jp_4190_;
}
else
{
lean_dec_ref(v_s_4182_);
v___y_4191_ = v_traces_4189_;
goto v___jp_4190_;
}
v___jp_4190_:
{
lean_object* v_s_4192_; lean_object* v___x_4193_; 
v_s_4192_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_s_4192_, 0, v_stxStack_4183_);
lean_ctor_set(v_s_4192_, 1, v_lhsPrec_4184_);
lean_ctor_set(v_s_4192_, 2, v_pos_4185_);
lean_ctor_set(v_s_4192_, 3, v_cache_4186_);
lean_ctor_set(v_s_4192_, 4, v_errorMsg_4187_);
lean_ctor_set(v_s_4192_, 5, v_recoveredErrors_4188_);
lean_ctor_set(v_s_4192_, 6, v___y_4191_);
v___x_4193_ = l___private_Lean_Parser_Basic_0__Lean_Parser_longestMatchFnAux_parse(v_left_x3f_4164_, v_startSize_4181_, v_lhsPrec_4177_, v_pos_4178_, v_snd_4179_, v_tail_4169_, v___y_4165_, v_s_4192_);
lean_dec(v_startSize_4181_);
return v___x_4193_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_longestMatchFn(lean_object* v_left_x3f_4222_, lean_object* v_l_4223_, lean_object* v_a_4224_, lean_object* v_a_4225_){
_start:
{
lean_object* v___y_4227_; 
if (lean_obj_tag(v_left_x3f_4222_) == 0)
{
lean_object* v___x_4235_; 
v___x_4235_ = ((lean_object*)(l_Lean_Parser_longestMatchFn___closed__0));
v___y_4227_ = v___x_4235_;
goto v___jp_4226_;
}
else
{
lean_object* v___x_4236_; 
v___x_4236_ = ((lean_object*)(l_Lean_Parser_longestMatchFn___closed__1));
v___y_4227_ = v___x_4236_;
goto v___jp_4226_;
}
v___jp_4226_:
{
lean_object* v_traces_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; uint8_t v___x_4231_; 
v_traces_4228_ = lean_ctor_get(v_a_4225_, 6);
v___x_4229_ = lean_array_get_size(v_traces_4228_);
v___x_4230_ = lean_unsigned_to_nat(0u);
v___x_4231_ = lean_nat_dec_eq(v___x_4229_, v___x_4230_);
if (v___x_4231_ == 0)
{
lean_object* v___x_4232_; lean_object* v___x_4233_; 
v___x_4232_ = lean_alloc_closure((void*)(l_Lean_Parser_longestMatchFn___lam__0), 4, 3);
lean_closure_set(v___x_4232_, 0, v_l_4223_);
lean_closure_set(v___x_4232_, 1, v_left_x3f_4222_);
lean_closure_set(v___x_4232_, 2, v_a_4224_);
lean_inc_ref(v___y_4227_);
v___x_4233_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_a_4225_, v___y_4227_, v___x_4232_);
return v___x_4233_;
}
else
{
lean_object* v___x_4234_; 
v___x_4234_ = l_Lean_Parser_longestMatchFn___lam__0(v_l_4223_, v_left_x3f_4222_, v_a_4224_, v_a_4225_);
return v___x_4234_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_anyOfFn(lean_object* v_x_4238_, lean_object* v_x_4239_, lean_object* v_x_4240_){
_start:
{
if (lean_obj_tag(v_x_4238_) == 0)
{
lean_object* v___x_4241_; lean_object* v___x_4242_; 
lean_dec_ref(v_x_4239_);
v___x_4241_ = ((lean_object*)(l_Lean_Parser_anyOfFn___closed__0));
v___x_4242_ = l_Lean_Parser_ParserState_mkError(v_x_4240_, v___x_4241_);
return v___x_4242_;
}
else
{
lean_object* v_tail_4243_; 
v_tail_4243_ = lean_ctor_get(v_x_4238_, 1);
if (lean_obj_tag(v_tail_4243_) == 0)
{
lean_object* v_head_4244_; lean_object* v_fn_4245_; lean_object* v___x_4246_; 
v_head_4244_ = lean_ctor_get(v_x_4238_, 0);
lean_inc(v_head_4244_);
lean_dec_ref_known(v_x_4238_, 2);
v_fn_4245_ = lean_ctor_get(v_head_4244_, 1);
lean_inc_ref(v_fn_4245_);
lean_dec(v_head_4244_);
v___x_4246_ = lean_apply_2(v_fn_4245_, v_x_4239_, v_x_4240_);
return v___x_4246_;
}
else
{
lean_object* v_head_4247_; lean_object* v_fn_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; 
lean_inc(v_tail_4243_);
v_head_4247_ = lean_ctor_get(v_x_4238_, 0);
lean_inc(v_head_4247_);
lean_dec_ref_known(v_x_4238_, 2);
v_fn_4248_ = lean_ctor_get(v_head_4247_, 1);
lean_inc_ref(v_fn_4248_);
lean_dec(v_head_4247_);
v___x_4249_ = lean_alloc_closure((void*)(l_Lean_Parser_anyOfFn), 3, 1);
lean_closure_set(v___x_4249_, 0, v_tail_4243_);
v___x_4250_ = l_Lean_Parser_orelseFn(v_fn_4248_, v___x_4249_, v_x_4239_, v_x_4240_);
return v___x_4250_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEqFn(lean_object* v_errorMsg_4251_, lean_object* v_c_4252_, lean_object* v_s_4253_){
_start:
{
lean_object* v_toCacheableParserContext_4254_; lean_object* v_savedPos_x3f_4255_; 
v_toCacheableParserContext_4254_ = lean_ctor_get(v_c_4252_, 2);
v_savedPos_x3f_4255_ = lean_ctor_get(v_toCacheableParserContext_4254_, 2);
lean_inc(v_savedPos_x3f_4255_);
if (lean_obj_tag(v_savedPos_x3f_4255_) == 0)
{
lean_dec_ref(v_c_4252_);
lean_dec_ref(v_errorMsg_4251_);
return v_s_4253_;
}
else
{
lean_object* v_toInputContext_4256_; lean_object* v_val_4257_; lean_object* v_fileMap_4258_; lean_object* v_pos_4259_; lean_object* v_savedPos_4260_; lean_object* v_pos_4261_; lean_object* v_column_4262_; lean_object* v_column_4263_; uint8_t v___x_4264_; 
v_toInputContext_4256_ = lean_ctor_get(v_c_4252_, 0);
lean_inc_ref(v_toInputContext_4256_);
lean_dec_ref(v_c_4252_);
v_val_4257_ = lean_ctor_get(v_savedPos_x3f_4255_, 0);
lean_inc(v_val_4257_);
lean_dec_ref_known(v_savedPos_x3f_4255_, 1);
v_fileMap_4258_ = lean_ctor_get(v_toInputContext_4256_, 2);
lean_inc_ref_n(v_fileMap_4258_, 2);
lean_dec_ref(v_toInputContext_4256_);
v_pos_4259_ = lean_ctor_get(v_s_4253_, 2);
v_savedPos_4260_ = l_Lean_FileMap_toPosition(v_fileMap_4258_, v_val_4257_);
lean_dec(v_val_4257_);
v_pos_4261_ = l_Lean_FileMap_toPosition(v_fileMap_4258_, v_pos_4259_);
v_column_4262_ = lean_ctor_get(v_pos_4261_, 1);
lean_inc(v_column_4262_);
lean_dec_ref(v_pos_4261_);
v_column_4263_ = lean_ctor_get(v_savedPos_4260_, 1);
lean_inc(v_column_4263_);
lean_dec_ref(v_savedPos_4260_);
v___x_4264_ = lean_nat_dec_eq(v_column_4262_, v_column_4263_);
lean_dec(v_column_4263_);
lean_dec(v_column_4262_);
if (v___x_4264_ == 0)
{
lean_object* v___x_4265_; 
v___x_4265_ = l_Lean_Parser_ParserState_mkError(v_s_4253_, v_errorMsg_4251_);
return v___x_4265_;
}
else
{
lean_dec_ref(v_errorMsg_4251_);
return v_s_4253_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColEq(lean_object* v_errorMsg_4266_){
_start:
{
lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; 
v___x_4267_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4268_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColEqFn), 3, 1);
lean_closure_set(v___x_4268_, 0, v_errorMsg_4266_);
v___x_4269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4269_, 0, v___x_4267_);
lean_ctor_set(v___x_4269_, 1, v___x_4268_);
return v___x_4269_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1(){
_start:
{
lean_object* v___x_4277_; lean_object* v___x_4278_; lean_object* v___x_4279_; 
v___x_4277_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__1));
v___x_4278_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___closed__2));
v___x_4279_ = l_Lean_addBuiltinDocString(v___x_4277_, v___x_4278_);
return v___x_4279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1___boxed(lean_object* v_a_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGeFn(lean_object* v_errorMsg_4282_, lean_object* v_c_4283_, lean_object* v_s_4284_){
_start:
{
lean_object* v_toCacheableParserContext_4285_; lean_object* v_savedPos_x3f_4286_; 
v_toCacheableParserContext_4285_ = lean_ctor_get(v_c_4283_, 2);
v_savedPos_x3f_4286_ = lean_ctor_get(v_toCacheableParserContext_4285_, 2);
lean_inc(v_savedPos_x3f_4286_);
if (lean_obj_tag(v_savedPos_x3f_4286_) == 0)
{
lean_dec_ref(v_c_4283_);
lean_dec_ref(v_errorMsg_4282_);
return v_s_4284_;
}
else
{
lean_object* v_toInputContext_4287_; lean_object* v_val_4288_; lean_object* v_fileMap_4289_; lean_object* v_pos_4290_; lean_object* v_savedPos_4291_; lean_object* v_column_4292_; lean_object* v_pos_4293_; lean_object* v_column_4294_; uint8_t v___x_4295_; 
v_toInputContext_4287_ = lean_ctor_get(v_c_4283_, 0);
lean_inc_ref(v_toInputContext_4287_);
lean_dec_ref(v_c_4283_);
v_val_4288_ = lean_ctor_get(v_savedPos_x3f_4286_, 0);
lean_inc(v_val_4288_);
lean_dec_ref_known(v_savedPos_x3f_4286_, 1);
v_fileMap_4289_ = lean_ctor_get(v_toInputContext_4287_, 2);
lean_inc_ref_n(v_fileMap_4289_, 2);
lean_dec_ref(v_toInputContext_4287_);
v_pos_4290_ = lean_ctor_get(v_s_4284_, 2);
v_savedPos_4291_ = l_Lean_FileMap_toPosition(v_fileMap_4289_, v_val_4288_);
lean_dec(v_val_4288_);
v_column_4292_ = lean_ctor_get(v_savedPos_4291_, 1);
lean_inc(v_column_4292_);
lean_dec_ref(v_savedPos_4291_);
v_pos_4293_ = l_Lean_FileMap_toPosition(v_fileMap_4289_, v_pos_4290_);
v_column_4294_ = lean_ctor_get(v_pos_4293_, 1);
lean_inc(v_column_4294_);
lean_dec_ref(v_pos_4293_);
v___x_4295_ = lean_nat_dec_le(v_column_4292_, v_column_4294_);
lean_dec(v_column_4294_);
lean_dec(v_column_4292_);
if (v___x_4295_ == 0)
{
lean_object* v___x_4296_; 
v___x_4296_ = l_Lean_Parser_ParserState_mkError(v_s_4284_, v_errorMsg_4282_);
return v___x_4296_;
}
else
{
lean_dec_ref(v_errorMsg_4282_);
return v_s_4284_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGe(lean_object* v_errorMsg_4297_){
_start:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; lean_object* v___x_4300_; 
v___x_4298_ = ((lean_object*)(l_Lean_Parser_epsilonInfo));
v___x_4299_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColGeFn), 3, 1);
lean_closure_set(v___x_4299_, 0, v_errorMsg_4297_);
v___x_4300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4300_, 0, v___x_4298_);
lean_ctor_set(v___x_4300_, 1, v___x_4299_);
return v___x_4300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1(){
_start:
{
lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4310_; 
v___x_4308_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__1));
v___x_4309_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___closed__2));
v___x_4310_ = l_Lean_addBuiltinDocString(v___x_4308_, v___x_4309_);
return v___x_4310_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1___boxed(lean_object* v_a_4311_){
_start:
{
lean_object* v_res_4312_; 
v_res_4312_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
return v_res_4312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGtFn(lean_object* v_errorMsg_4313_, lean_object* v_c_4314_, lean_object* v_s_4315_){
_start:
{
lean_object* v_toCacheableParserContext_4316_; lean_object* v_savedPos_x3f_4317_; 
v_toCacheableParserContext_4316_ = lean_ctor_get(v_c_4314_, 2);
v_savedPos_x3f_4317_ = lean_ctor_get(v_toCacheableParserContext_4316_, 2);
lean_inc(v_savedPos_x3f_4317_);
if (lean_obj_tag(v_savedPos_x3f_4317_) == 0)
{
lean_dec_ref(v_c_4314_);
lean_dec_ref(v_errorMsg_4313_);
return v_s_4315_;
}
else
{
lean_object* v_toInputContext_4318_; lean_object* v_val_4319_; lean_object* v_fileMap_4320_; lean_object* v_pos_4321_; lean_object* v_savedPos_4322_; lean_object* v_column_4323_; lean_object* v_pos_4324_; lean_object* v_column_4325_; uint8_t v___x_4326_; 
v_toInputContext_4318_ = lean_ctor_get(v_c_4314_, 0);
lean_inc_ref(v_toInputContext_4318_);
lean_dec_ref(v_c_4314_);
v_val_4319_ = lean_ctor_get(v_savedPos_x3f_4317_, 0);
lean_inc(v_val_4319_);
lean_dec_ref_known(v_savedPos_x3f_4317_, 1);
v_fileMap_4320_ = lean_ctor_get(v_toInputContext_4318_, 2);
lean_inc_ref_n(v_fileMap_4320_, 2);
lean_dec_ref(v_toInputContext_4318_);
v_pos_4321_ = lean_ctor_get(v_s_4315_, 2);
v_savedPos_4322_ = l_Lean_FileMap_toPosition(v_fileMap_4320_, v_val_4319_);
lean_dec(v_val_4319_);
v_column_4323_ = lean_ctor_get(v_savedPos_4322_, 1);
lean_inc(v_column_4323_);
lean_dec_ref(v_savedPos_4322_);
v_pos_4324_ = l_Lean_FileMap_toPosition(v_fileMap_4320_, v_pos_4321_);
v_column_4325_ = lean_ctor_get(v_pos_4324_, 1);
lean_inc(v_column_4325_);
lean_dec_ref(v_pos_4324_);
v___x_4326_ = lean_nat_dec_lt(v_column_4323_, v_column_4325_);
lean_dec(v_column_4325_);
lean_dec(v_column_4323_);
if (v___x_4326_ == 0)
{
lean_object* v___x_4327_; 
v___x_4327_ = l_Lean_Parser_ParserState_mkError(v_s_4315_, v_errorMsg_4313_);
return v___x_4327_;
}
else
{
lean_dec_ref(v_errorMsg_4313_);
return v_s_4315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkColGt(lean_object* v_errorMsg_4328_){
_start:
{
lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4329_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4330_ = lean_alloc_closure((void*)(l_Lean_Parser_checkColGtFn), 3, 1);
lean_closure_set(v___x_4330_, 0, v_errorMsg_4328_);
v___x_4331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4331_, 0, v___x_4329_);
lean_ctor_set(v___x_4331_, 1, v___x_4330_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1(){
_start:
{
lean_object* v___x_4339_; lean_object* v___x_4340_; lean_object* v___x_4341_; 
v___x_4339_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__1));
v___x_4340_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___closed__2));
v___x_4341_ = l_Lean_addBuiltinDocString(v___x_4339_, v___x_4340_);
return v___x_4341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1___boxed(lean_object* v_a_4342_){
_start:
{
lean_object* v_res_4343_; 
v_res_4343_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
return v_res_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEqFn(lean_object* v_errorMsg_4344_, lean_object* v_c_4345_, lean_object* v_s_4346_){
_start:
{
lean_object* v_toCacheableParserContext_4347_; lean_object* v_savedPos_x3f_4348_; 
v_toCacheableParserContext_4347_ = lean_ctor_get(v_c_4345_, 2);
v_savedPos_x3f_4348_ = lean_ctor_get(v_toCacheableParserContext_4347_, 2);
lean_inc(v_savedPos_x3f_4348_);
if (lean_obj_tag(v_savedPos_x3f_4348_) == 0)
{
lean_dec_ref(v_c_4345_);
lean_dec_ref(v_errorMsg_4344_);
return v_s_4346_;
}
else
{
lean_object* v_toInputContext_4349_; lean_object* v_val_4350_; lean_object* v_fileMap_4351_; lean_object* v_pos_4352_; lean_object* v_savedPos_4353_; lean_object* v_pos_4354_; lean_object* v_line_4355_; lean_object* v_line_4356_; uint8_t v___x_4357_; 
v_toInputContext_4349_ = lean_ctor_get(v_c_4345_, 0);
lean_inc_ref(v_toInputContext_4349_);
lean_dec_ref(v_c_4345_);
v_val_4350_ = lean_ctor_get(v_savedPos_x3f_4348_, 0);
lean_inc(v_val_4350_);
lean_dec_ref_known(v_savedPos_x3f_4348_, 1);
v_fileMap_4351_ = lean_ctor_get(v_toInputContext_4349_, 2);
lean_inc_ref_n(v_fileMap_4351_, 2);
lean_dec_ref(v_toInputContext_4349_);
v_pos_4352_ = lean_ctor_get(v_s_4346_, 2);
v_savedPos_4353_ = l_Lean_FileMap_toPosition(v_fileMap_4351_, v_val_4350_);
lean_dec(v_val_4350_);
v_pos_4354_ = l_Lean_FileMap_toPosition(v_fileMap_4351_, v_pos_4352_);
v_line_4355_ = lean_ctor_get(v_pos_4354_, 0);
lean_inc(v_line_4355_);
lean_dec_ref(v_pos_4354_);
v_line_4356_ = lean_ctor_get(v_savedPos_4353_, 0);
lean_inc(v_line_4356_);
lean_dec_ref(v_savedPos_4353_);
v___x_4357_ = lean_nat_dec_eq(v_line_4355_, v_line_4356_);
lean_dec(v_line_4356_);
lean_dec(v_line_4355_);
if (v___x_4357_ == 0)
{
lean_object* v___x_4358_; 
v___x_4358_ = l_Lean_Parser_ParserState_mkError(v_s_4346_, v_errorMsg_4344_);
return v___x_4358_;
}
else
{
lean_dec_ref(v_errorMsg_4344_);
return v_s_4346_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkLineEq(lean_object* v_errorMsg_4359_){
_start:
{
lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; 
v___x_4360_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4361_ = lean_alloc_closure((void*)(l_Lean_Parser_checkLineEqFn), 3, 1);
lean_closure_set(v___x_4361_, 0, v_errorMsg_4359_);
v___x_4362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4362_, 0, v___x_4360_);
lean_ctor_set(v___x_4362_, 1, v___x_4361_);
return v___x_4362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1(){
_start:
{
lean_object* v___x_4370_; lean_object* v___x_4371_; lean_object* v___x_4372_; 
v___x_4370_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__1));
v___x_4371_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___closed__2));
v___x_4372_ = l_Lean_addBuiltinDocString(v___x_4370_, v___x_4371_);
return v___x_4372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1___boxed(lean_object* v_a_4373_){
_start:
{
lean_object* v_res_4374_; 
v_res_4374_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
return v_res_4374_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0(lean_object* v_s_4375_, lean_object* v_x_4376_){
_start:
{
lean_object* v_prec_4377_; lean_object* v_quotDepth_4378_; uint8_t v_suppressInsideQuot_4379_; lean_object* v_forbiddenTk_x3f_4380_; lean_object* v___x_4382_; uint8_t v_isShared_4383_; uint8_t v_isSharedCheck_4389_; 
v_prec_4377_ = lean_ctor_get(v_x_4376_, 0);
v_quotDepth_4378_ = lean_ctor_get(v_x_4376_, 1);
v_suppressInsideQuot_4379_ = lean_ctor_get_uint8(v_x_4376_, sizeof(void*)*4);
v_forbiddenTk_x3f_4380_ = lean_ctor_get(v_x_4376_, 3);
v_isSharedCheck_4389_ = !lean_is_exclusive(v_x_4376_);
if (v_isSharedCheck_4389_ == 0)
{
lean_object* v_unused_4390_; 
v_unused_4390_ = lean_ctor_get(v_x_4376_, 2);
lean_dec(v_unused_4390_);
v___x_4382_ = v_x_4376_;
v_isShared_4383_ = v_isSharedCheck_4389_;
goto v_resetjp_4381_;
}
else
{
lean_inc(v_forbiddenTk_x3f_4380_);
lean_inc(v_quotDepth_4378_);
lean_inc(v_prec_4377_);
lean_dec(v_x_4376_);
v___x_4382_ = lean_box(0);
v_isShared_4383_ = v_isSharedCheck_4389_;
goto v_resetjp_4381_;
}
v_resetjp_4381_:
{
lean_object* v_pos_4384_; lean_object* v___x_4385_; lean_object* v___x_4387_; 
v_pos_4384_ = lean_ctor_get(v_s_4375_, 2);
lean_inc(v_pos_4384_);
v___x_4385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4385_, 0, v_pos_4384_);
if (v_isShared_4383_ == 0)
{
lean_ctor_set(v___x_4382_, 2, v___x_4385_);
v___x_4387_ = v___x_4382_;
goto v_reusejp_4386_;
}
else
{
lean_object* v_reuseFailAlloc_4388_; 
v_reuseFailAlloc_4388_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4388_, 0, v_prec_4377_);
lean_ctor_set(v_reuseFailAlloc_4388_, 1, v_quotDepth_4378_);
lean_ctor_set(v_reuseFailAlloc_4388_, 2, v___x_4385_);
lean_ctor_set(v_reuseFailAlloc_4388_, 3, v_forbiddenTk_x3f_4380_);
lean_ctor_set_uint8(v_reuseFailAlloc_4388_, sizeof(void*)*4, v_suppressInsideQuot_4379_);
v___x_4387_ = v_reuseFailAlloc_4388_;
goto v_reusejp_4386_;
}
v_reusejp_4386_:
{
return v___x_4387_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__0___boxed(lean_object* v_s_4391_, lean_object* v_x_4392_){
_start:
{
lean_object* v_res_4393_; 
v_res_4393_ = l_Lean_Parser_withPosition___lam__0(v_s_4391_, v_x_4392_);
lean_dec_ref(v_s_4391_);
return v_res_4393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__1(lean_object* v_fn_4394_, lean_object* v_c_4395_, lean_object* v_s_4396_){
_start:
{
lean_object* v___f_4397_; lean_object* v___x_4398_; 
lean_inc_ref(v_s_4396_);
v___f_4397_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4397_, 0, v_s_4396_);
v___x_4398_ = l_Lean_Parser_adaptCacheableContextFn(v___f_4397_, v_fn_4394_, v_c_4395_, v_s_4396_);
return v___x_4398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition___lam__2(lean_object* v___f_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_){
_start:
{
lean_object* v_traces_4403_; lean_object* v___x_4404_; lean_object* v___x_4405_; uint8_t v___x_4406_; 
v_traces_4403_ = lean_ctor_get(v___y_4402_, 6);
v___x_4404_ = lean_array_get_size(v_traces_4403_);
v___x_4405_ = lean_unsigned_to_nat(0u);
v___x_4406_ = lean_nat_dec_eq(v___x_4404_, v___x_4405_);
if (v___x_4406_ == 0)
{
lean_object* v___x_4407_; lean_object* v___x_4408_; lean_object* v___x_4409_; 
v___x_4407_ = ((lean_object*)(l_Lean_Parser_withPosition___lam__2___closed__0));
v___x_4408_ = lean_apply_1(v___f_4400_, v___y_4401_);
v___x_4409_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v___y_4402_, v___x_4407_, v___x_4408_);
return v___x_4409_;
}
else
{
lean_object* v___x_4410_; 
v___x_4410_ = lean_apply_2(v___f_4400_, v___y_4401_, v___y_4402_);
return v___x_4410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPosition(lean_object* v_p_4411_){
_start:
{
lean_object* v_info_4412_; lean_object* v_fn_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4422_; 
v_info_4412_ = lean_ctor_get(v_p_4411_, 0);
v_fn_4413_ = lean_ctor_get(v_p_4411_, 1);
v_isSharedCheck_4422_ = !lean_is_exclusive(v_p_4411_);
if (v_isSharedCheck_4422_ == 0)
{
v___x_4415_ = v_p_4411_;
v_isShared_4416_ = v_isSharedCheck_4422_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_fn_4413_);
lean_inc(v_info_4412_);
lean_dec(v_p_4411_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4422_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___f_4417_; lean_object* v___f_4418_; lean_object* v___x_4420_; 
v___f_4417_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__1), 3, 1);
lean_closure_set(v___f_4417_, 0, v_fn_4413_);
v___f_4418_ = lean_alloc_closure((void*)(l_Lean_Parser_withPosition___lam__2), 3, 1);
lean_closure_set(v___f_4418_, 0, v___f_4417_);
if (v_isShared_4416_ == 0)
{
lean_ctor_set(v___x_4415_, 1, v___f_4418_);
v___x_4420_ = v___x_4415_;
goto v_reusejp_4419_;
}
else
{
lean_object* v_reuseFailAlloc_4421_; 
v_reuseFailAlloc_4421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4421_, 0, v_info_4412_);
lean_ctor_set(v_reuseFailAlloc_4421_, 1, v___f_4418_);
v___x_4420_ = v_reuseFailAlloc_4421_;
goto v_reusejp_4419_;
}
v_reusejp_4419_:
{
return v___x_4420_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1(){
_start:
{
lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; 
v___x_4429_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__0));
v___x_4430_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___closed__1));
v___x_4431_ = l_Lean_addBuiltinDocString(v___x_4429_, v___x_4430_);
return v___x_4431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1___boxed(lean_object* v_a_4432_){
_start:
{
lean_object* v_res_4433_; 
v_res_4433_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
return v_res_4433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0(lean_object* v_prev_4434_, lean_object* v_pos_4435_, lean_object* v_c_4436_){
_start:
{
uint8_t v___x_4437_; 
v___x_4437_ = l_Lean_Parser_checkTailLinebreak(v_prev_4434_);
if (v___x_4437_ == 0)
{
lean_dec(v_pos_4435_);
return v_c_4436_;
}
else
{
lean_object* v_prec_4438_; lean_object* v_quotDepth_4439_; uint8_t v_suppressInsideQuot_4440_; lean_object* v_forbiddenTk_x3f_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4449_; 
v_prec_4438_ = lean_ctor_get(v_c_4436_, 0);
v_quotDepth_4439_ = lean_ctor_get(v_c_4436_, 1);
v_suppressInsideQuot_4440_ = lean_ctor_get_uint8(v_c_4436_, sizeof(void*)*4);
v_forbiddenTk_x3f_4441_ = lean_ctor_get(v_c_4436_, 3);
v_isSharedCheck_4449_ = !lean_is_exclusive(v_c_4436_);
if (v_isSharedCheck_4449_ == 0)
{
lean_object* v_unused_4450_; 
v_unused_4450_ = lean_ctor_get(v_c_4436_, 2);
lean_dec(v_unused_4450_);
v___x_4443_ = v_c_4436_;
v_isShared_4444_ = v_isSharedCheck_4449_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_forbiddenTk_x3f_4441_);
lean_inc(v_quotDepth_4439_);
lean_inc(v_prec_4438_);
lean_dec(v_c_4436_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4449_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
lean_object* v___x_4445_; lean_object* v___x_4447_; 
v___x_4445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4445_, 0, v_pos_4435_);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 2, v___x_4445_);
v___x_4447_ = v___x_4443_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4448_; 
v_reuseFailAlloc_4448_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4448_, 0, v_prec_4438_);
lean_ctor_set(v_reuseFailAlloc_4448_, 1, v_quotDepth_4439_);
lean_ctor_set(v_reuseFailAlloc_4448_, 2, v___x_4445_);
lean_ctor_set(v_reuseFailAlloc_4448_, 3, v_forbiddenTk_x3f_4441_);
lean_ctor_set_uint8(v_reuseFailAlloc_4448_, sizeof(void*)*4, v_suppressInsideQuot_4440_);
v___x_4447_ = v_reuseFailAlloc_4448_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
return v___x_4447_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed(lean_object* v_prev_4451_, lean_object* v_pos_4452_, lean_object* v_c_4453_){
_start:
{
lean_object* v_res_4454_; 
v_res_4454_ = l_Lean_Parser_withPositionAfterLinebreak___lam__0(v_prev_4451_, v_pos_4452_, v_c_4453_);
lean_dec(v_prev_4451_);
return v_res_4454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__1(lean_object* v_fn_4455_, lean_object* v_c_4456_, lean_object* v_s_4457_){
_start:
{
lean_object* v_stxStack_4458_; lean_object* v_pos_4459_; lean_object* v_prev_4460_; lean_object* v___f_4461_; lean_object* v___x_4462_; 
v_stxStack_4458_ = lean_ctor_get(v_s_4457_, 0);
v_pos_4459_ = lean_ctor_get(v_s_4457_, 2);
v_prev_4460_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_4458_);
lean_inc(v_pos_4459_);
v___f_4461_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4461_, 0, v_prev_4460_);
lean_closure_set(v___f_4461_, 1, v_pos_4459_);
v___x_4462_ = l_Lean_Parser_adaptCacheableContextFn(v___f_4461_, v_fn_4455_, v_c_4456_, v_s_4457_);
return v___x_4462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak___lam__2(lean_object* v___f_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_){
_start:
{
lean_object* v_traces_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; uint8_t v___x_4470_; 
v_traces_4467_ = lean_ctor_get(v___y_4466_, 6);
v___x_4468_ = lean_array_get_size(v_traces_4467_);
v___x_4469_ = lean_unsigned_to_nat(0u);
v___x_4470_ = lean_nat_dec_eq(v___x_4468_, v___x_4469_);
if (v___x_4470_ == 0)
{
lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4471_ = ((lean_object*)(l_Lean_Parser_withPositionAfterLinebreak___lam__2___closed__0));
v___x_4472_ = lean_apply_1(v___f_4464_, v___y_4465_);
v___x_4473_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v___y_4466_, v___x_4471_, v___x_4472_);
return v___x_4473_;
}
else
{
lean_object* v___x_4474_; 
v___x_4474_ = lean_apply_2(v___f_4464_, v___y_4465_, v___y_4466_);
return v___x_4474_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withPositionAfterLinebreak(lean_object* v_p_4475_){
_start:
{
lean_object* v_info_4476_; lean_object* v_fn_4477_; lean_object* v___x_4479_; uint8_t v_isShared_4480_; uint8_t v_isSharedCheck_4486_; 
v_info_4476_ = lean_ctor_get(v_p_4475_, 0);
v_fn_4477_ = lean_ctor_get(v_p_4475_, 1);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_p_4475_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4479_ = v_p_4475_;
v_isShared_4480_ = v_isSharedCheck_4486_;
goto v_resetjp_4478_;
}
else
{
lean_inc(v_fn_4477_);
lean_inc(v_info_4476_);
lean_dec(v_p_4475_);
v___x_4479_ = lean_box(0);
v_isShared_4480_ = v_isSharedCheck_4486_;
goto v_resetjp_4478_;
}
v_resetjp_4478_:
{
lean_object* v___f_4481_; lean_object* v___f_4482_; lean_object* v___x_4484_; 
v___f_4481_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__1), 3, 1);
lean_closure_set(v___f_4481_, 0, v_fn_4477_);
v___f_4482_ = lean_alloc_closure((void*)(l_Lean_Parser_withPositionAfterLinebreak___lam__2), 3, 1);
lean_closure_set(v___f_4482_, 0, v___f_4481_);
if (v_isShared_4480_ == 0)
{
lean_ctor_set(v___x_4479_, 1, v___f_4482_);
v___x_4484_ = v___x_4479_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_info_4476_);
lean_ctor_set(v_reuseFailAlloc_4485_, 1, v___f_4482_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
return v___x_4484_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__0(lean_object* v_x_4487_){
_start:
{
lean_object* v_prec_4488_; lean_object* v_quotDepth_4489_; uint8_t v_suppressInsideQuot_4490_; lean_object* v_forbiddenTk_x3f_4491_; lean_object* v___x_4493_; uint8_t v_isShared_4494_; uint8_t v_isSharedCheck_4499_; 
v_prec_4488_ = lean_ctor_get(v_x_4487_, 0);
v_quotDepth_4489_ = lean_ctor_get(v_x_4487_, 1);
v_suppressInsideQuot_4490_ = lean_ctor_get_uint8(v_x_4487_, sizeof(void*)*4);
v_forbiddenTk_x3f_4491_ = lean_ctor_get(v_x_4487_, 3);
v_isSharedCheck_4499_ = !lean_is_exclusive(v_x_4487_);
if (v_isSharedCheck_4499_ == 0)
{
lean_object* v_unused_4500_; 
v_unused_4500_ = lean_ctor_get(v_x_4487_, 2);
lean_dec(v_unused_4500_);
v___x_4493_ = v_x_4487_;
v_isShared_4494_ = v_isSharedCheck_4499_;
goto v_resetjp_4492_;
}
else
{
lean_inc(v_forbiddenTk_x3f_4491_);
lean_inc(v_quotDepth_4489_);
lean_inc(v_prec_4488_);
lean_dec(v_x_4487_);
v___x_4493_ = lean_box(0);
v_isShared_4494_ = v_isSharedCheck_4499_;
goto v_resetjp_4492_;
}
v_resetjp_4492_:
{
lean_object* v___x_4495_; lean_object* v___x_4497_; 
v___x_4495_ = lean_box(0);
if (v_isShared_4494_ == 0)
{
lean_ctor_set(v___x_4493_, 2, v___x_4495_);
v___x_4497_ = v___x_4493_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4498_; 
v_reuseFailAlloc_4498_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4498_, 0, v_prec_4488_);
lean_ctor_set(v_reuseFailAlloc_4498_, 1, v_quotDepth_4489_);
lean_ctor_set(v_reuseFailAlloc_4498_, 2, v___x_4495_);
lean_ctor_set(v_reuseFailAlloc_4498_, 3, v_forbiddenTk_x3f_4491_);
lean_ctor_set_uint8(v_reuseFailAlloc_4498_, sizeof(void*)*4, v_suppressInsideQuot_4490_);
v___x_4497_ = v_reuseFailAlloc_4498_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
return v___x_4497_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition___lam__1(lean_object* v_fn_4501_, lean_object* v___x_4502_, lean_object* v___y_4503_, lean_object* v___y_4504_){
_start:
{
lean_object* v_traces_4505_; lean_object* v___x_4506_; lean_object* v___x_4507_; uint8_t v___x_4508_; 
v_traces_4505_ = lean_ctor_get(v___y_4504_, 6);
v___x_4506_ = lean_array_get_size(v_traces_4505_);
v___x_4507_ = lean_unsigned_to_nat(0u);
v___x_4508_ = lean_nat_dec_eq(v___x_4506_, v___x_4507_);
if (v___x_4508_ == 0)
{
lean_object* v___x_4509_; lean_object* v___x_4510_; 
v___x_4509_ = lean_apply_1(v_fn_4501_, v___y_4503_);
v___x_4510_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v___y_4504_, v___x_4502_, v___x_4509_);
return v___x_4510_;
}
else
{
lean_object* v___x_4511_; 
lean_dec_ref(v___x_4502_);
v___x_4511_ = lean_apply_2(v_fn_4501_, v___y_4503_, v___y_4504_);
return v___x_4511_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutPosition(lean_object* v_p_4514_){
_start:
{
lean_object* v___f_4515_; lean_object* v___x_4516_; lean_object* v_info_4517_; lean_object* v_fn_4518_; lean_object* v___x_4520_; uint8_t v_isShared_4521_; uint8_t v_isSharedCheck_4527_; 
v___f_4515_ = ((lean_object*)(l_Lean_Parser_withoutPosition___closed__0));
v___x_4516_ = l_Lean_Parser_adaptCacheableContext(v___f_4515_, v_p_4514_);
v_info_4517_ = lean_ctor_get(v___x_4516_, 0);
v_fn_4518_ = lean_ctor_get(v___x_4516_, 1);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4516_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4520_ = v___x_4516_;
v_isShared_4521_ = v_isSharedCheck_4527_;
goto v_resetjp_4519_;
}
else
{
lean_inc(v_fn_4518_);
lean_inc(v_info_4517_);
lean_dec(v___x_4516_);
v___x_4520_ = lean_box(0);
v_isShared_4521_ = v_isSharedCheck_4527_;
goto v_resetjp_4519_;
}
v_resetjp_4519_:
{
lean_object* v___x_4522_; lean_object* v___f_4523_; lean_object* v___x_4525_; 
v___x_4522_ = ((lean_object*)(l_Lean_Parser_withoutPosition___closed__1));
v___f_4523_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition___lam__1), 4, 2);
lean_closure_set(v___f_4523_, 0, v_fn_4518_);
lean_closure_set(v___f_4523_, 1, v___x_4522_);
if (v_isShared_4521_ == 0)
{
lean_ctor_set(v___x_4520_, 1, v___f_4523_);
v___x_4525_ = v___x_4520_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4526_; 
v_reuseFailAlloc_4526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4526_, 0, v_info_4517_);
lean_ctor_set(v_reuseFailAlloc_4526_, 1, v___f_4523_);
v___x_4525_ = v_reuseFailAlloc_4526_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
return v___x_4525_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1(){
_start:
{
lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; 
v___x_4534_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__0));
v___x_4535_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___closed__1));
v___x_4536_ = l_Lean_addBuiltinDocString(v___x_4534_, v___x_4535_);
return v___x_4536_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1___boxed(lean_object* v_a_4537_){
_start:
{
lean_object* v_res_4538_; 
v_res_4538_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
return v_res_4538_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden___lam__0(lean_object* v_tk_4539_, lean_object* v_x_4540_){
_start:
{
lean_object* v_prec_4541_; lean_object* v_quotDepth_4542_; uint8_t v_suppressInsideQuot_4543_; lean_object* v_savedPos_x3f_4544_; lean_object* v___x_4546_; uint8_t v_isShared_4547_; uint8_t v_isSharedCheck_4552_; 
v_prec_4541_ = lean_ctor_get(v_x_4540_, 0);
v_quotDepth_4542_ = lean_ctor_get(v_x_4540_, 1);
v_suppressInsideQuot_4543_ = lean_ctor_get_uint8(v_x_4540_, sizeof(void*)*4);
v_savedPos_x3f_4544_ = lean_ctor_get(v_x_4540_, 2);
v_isSharedCheck_4552_ = !lean_is_exclusive(v_x_4540_);
if (v_isSharedCheck_4552_ == 0)
{
lean_object* v_unused_4553_; 
v_unused_4553_ = lean_ctor_get(v_x_4540_, 3);
lean_dec(v_unused_4553_);
v___x_4546_ = v_x_4540_;
v_isShared_4547_ = v_isSharedCheck_4552_;
goto v_resetjp_4545_;
}
else
{
lean_inc(v_savedPos_x3f_4544_);
lean_inc(v_quotDepth_4542_);
lean_inc(v_prec_4541_);
lean_dec(v_x_4540_);
v___x_4546_ = lean_box(0);
v_isShared_4547_ = v_isSharedCheck_4552_;
goto v_resetjp_4545_;
}
v_resetjp_4545_:
{
lean_object* v___x_4548_; lean_object* v___x_4550_; 
v___x_4548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4548_, 0, v_tk_4539_);
if (v_isShared_4547_ == 0)
{
lean_ctor_set(v___x_4546_, 3, v___x_4548_);
v___x_4550_ = v___x_4546_;
goto v_reusejp_4549_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v_prec_4541_);
lean_ctor_set(v_reuseFailAlloc_4551_, 1, v_quotDepth_4542_);
lean_ctor_set(v_reuseFailAlloc_4551_, 2, v_savedPos_x3f_4544_);
lean_ctor_set(v_reuseFailAlloc_4551_, 3, v___x_4548_);
lean_ctor_set_uint8(v_reuseFailAlloc_4551_, sizeof(void*)*4, v_suppressInsideQuot_4543_);
v___x_4550_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4549_;
}
v_reusejp_4549_:
{
return v___x_4550_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withForbidden(lean_object* v_tk_4555_, lean_object* v_p_4556_){
_start:
{
lean_object* v___f_4557_; lean_object* v___x_4558_; lean_object* v_info_4559_; lean_object* v_fn_4560_; lean_object* v___x_4562_; uint8_t v_isShared_4563_; uint8_t v_isSharedCheck_4569_; 
v___f_4557_ = lean_alloc_closure((void*)(l_Lean_Parser_withForbidden___lam__0), 2, 1);
lean_closure_set(v___f_4557_, 0, v_tk_4555_);
v___x_4558_ = l_Lean_Parser_adaptCacheableContext(v___f_4557_, v_p_4556_);
v_info_4559_ = lean_ctor_get(v___x_4558_, 0);
v_fn_4560_ = lean_ctor_get(v___x_4558_, 1);
v_isSharedCheck_4569_ = !lean_is_exclusive(v___x_4558_);
if (v_isSharedCheck_4569_ == 0)
{
v___x_4562_ = v___x_4558_;
v_isShared_4563_ = v_isSharedCheck_4569_;
goto v_resetjp_4561_;
}
else
{
lean_inc(v_fn_4560_);
lean_inc(v_info_4559_);
lean_dec(v___x_4558_);
v___x_4562_ = lean_box(0);
v_isShared_4563_ = v_isSharedCheck_4569_;
goto v_resetjp_4561_;
}
v_resetjp_4561_:
{
lean_object* v___x_4564_; lean_object* v___f_4565_; lean_object* v___x_4567_; 
v___x_4564_ = ((lean_object*)(l_Lean_Parser_withForbidden___closed__0));
v___f_4565_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition___lam__1), 4, 2);
lean_closure_set(v___f_4565_, 0, v_fn_4560_);
lean_closure_set(v___f_4565_, 1, v___x_4564_);
if (v_isShared_4563_ == 0)
{
lean_ctor_set(v___x_4562_, 1, v___f_4565_);
v___x_4567_ = v___x_4562_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_info_4559_);
lean_ctor_set(v_reuseFailAlloc_4568_, 1, v___f_4565_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
return v___x_4567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1(){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; lean_object* v___x_4578_; 
v___x_4576_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__0));
v___x_4577_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___closed__1));
v___x_4578_ = l_Lean_addBuiltinDocString(v___x_4576_, v___x_4577_);
return v___x_4578_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1___boxed(lean_object* v_a_4579_){
_start:
{
lean_object* v_res_4580_; 
v_res_4580_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
return v_res_4580_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden___lam__0(lean_object* v_x_4581_){
_start:
{
lean_object* v_prec_4582_; lean_object* v_quotDepth_4583_; uint8_t v_suppressInsideQuot_4584_; lean_object* v_savedPos_x3f_4585_; lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4593_; 
v_prec_4582_ = lean_ctor_get(v_x_4581_, 0);
v_quotDepth_4583_ = lean_ctor_get(v_x_4581_, 1);
v_suppressInsideQuot_4584_ = lean_ctor_get_uint8(v_x_4581_, sizeof(void*)*4);
v_savedPos_x3f_4585_ = lean_ctor_get(v_x_4581_, 2);
v_isSharedCheck_4593_ = !lean_is_exclusive(v_x_4581_);
if (v_isSharedCheck_4593_ == 0)
{
lean_object* v_unused_4594_; 
v_unused_4594_ = lean_ctor_get(v_x_4581_, 3);
lean_dec(v_unused_4594_);
v___x_4587_ = v_x_4581_;
v_isShared_4588_ = v_isSharedCheck_4593_;
goto v_resetjp_4586_;
}
else
{
lean_inc(v_savedPos_x3f_4585_);
lean_inc(v_quotDepth_4583_);
lean_inc(v_prec_4582_);
lean_dec(v_x_4581_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4593_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4589_; lean_object* v___x_4591_; 
v___x_4589_ = lean_box(0);
if (v_isShared_4588_ == 0)
{
lean_ctor_set(v___x_4587_, 3, v___x_4589_);
v___x_4591_ = v___x_4587_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v_prec_4582_);
lean_ctor_set(v_reuseFailAlloc_4592_, 1, v_quotDepth_4583_);
lean_ctor_set(v_reuseFailAlloc_4592_, 2, v_savedPos_x3f_4585_);
lean_ctor_set(v_reuseFailAlloc_4592_, 3, v___x_4589_);
lean_ctor_set_uint8(v_reuseFailAlloc_4592_, sizeof(void*)*4, v_suppressInsideQuot_4584_);
v___x_4591_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
return v___x_4591_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutForbidden(lean_object* v_p_4597_){
_start:
{
lean_object* v___f_4598_; lean_object* v___x_4599_; lean_object* v_info_4600_; lean_object* v_fn_4601_; lean_object* v___x_4603_; uint8_t v_isShared_4604_; uint8_t v_isSharedCheck_4610_; 
v___f_4598_ = ((lean_object*)(l_Lean_Parser_withoutForbidden___closed__0));
v___x_4599_ = l_Lean_Parser_adaptCacheableContext(v___f_4598_, v_p_4597_);
v_info_4600_ = lean_ctor_get(v___x_4599_, 0);
v_fn_4601_ = lean_ctor_get(v___x_4599_, 1);
v_isSharedCheck_4610_ = !lean_is_exclusive(v___x_4599_);
if (v_isSharedCheck_4610_ == 0)
{
v___x_4603_ = v___x_4599_;
v_isShared_4604_ = v_isSharedCheck_4610_;
goto v_resetjp_4602_;
}
else
{
lean_inc(v_fn_4601_);
lean_inc(v_info_4600_);
lean_dec(v___x_4599_);
v___x_4603_ = lean_box(0);
v_isShared_4604_ = v_isSharedCheck_4610_;
goto v_resetjp_4602_;
}
v_resetjp_4602_:
{
lean_object* v___x_4605_; lean_object* v___f_4606_; lean_object* v___x_4608_; 
v___x_4605_ = ((lean_object*)(l_Lean_Parser_withoutForbidden___closed__1));
v___f_4606_ = lean_alloc_closure((void*)(l_Lean_Parser_withoutPosition___lam__1), 4, 2);
lean_closure_set(v___f_4606_, 0, v_fn_4601_);
lean_closure_set(v___f_4606_, 1, v___x_4605_);
if (v_isShared_4604_ == 0)
{
lean_ctor_set(v___x_4603_, 1, v___f_4606_);
v___x_4608_ = v___x_4603_;
goto v_reusejp_4607_;
}
else
{
lean_object* v_reuseFailAlloc_4609_; 
v_reuseFailAlloc_4609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4609_, 0, v_info_4600_);
lean_ctor_set(v_reuseFailAlloc_4609_, 1, v___f_4606_);
v___x_4608_ = v_reuseFailAlloc_4609_;
goto v_reusejp_4607_;
}
v_reusejp_4607_:
{
return v___x_4608_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1(){
_start:
{
lean_object* v___x_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; 
v___x_4617_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__0));
v___x_4618_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___closed__1));
v___x_4619_ = l_Lean_addBuiltinDocString(v___x_4617_, v___x_4618_);
return v___x_4619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1___boxed(lean_object* v_a_4620_){
_start:
{
lean_object* v_res_4621_; 
v_res_4621_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
return v_res_4621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn(lean_object* v_c_4623_, lean_object* v_s_4624_){
_start:
{
lean_object* v_pos_4625_; lean_object* v_toInputContext_4626_; uint8_t v___x_4627_; 
v_pos_4625_ = lean_ctor_get(v_s_4624_, 2);
v_toInputContext_4626_ = lean_ctor_get(v_c_4623_, 0);
v___x_4627_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_4626_, v_pos_4625_);
if (v___x_4627_ == 0)
{
lean_object* v___x_4628_; lean_object* v___x_4629_; 
v___x_4628_ = ((lean_object*)(l_Lean_Parser_eoiFn___closed__0));
v___x_4629_ = l_Lean_Parser_ParserState_mkError(v_s_4624_, v___x_4628_);
return v___x_4629_;
}
else
{
return v_s_4624_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_eoiFn___boxed(lean_object* v_c_4630_, lean_object* v_s_4631_){
_start:
{
lean_object* v_res_4632_; 
v_res_4632_ = l_Lean_Parser_eoiFn(v_c_4630_, v_s_4631_);
lean_dec_ref(v_c_4630_);
return v_res_4632_;
}
}
static lean_object* _init_l_Lean_Parser_eoi___closed__0(void){
_start:
{
lean_object* v___x_4633_; lean_object* v___x_4634_; lean_object* v___x_4635_; 
v___x_4633_ = lean_alloc_closure((void*)(l_Lean_Parser_eoiFn___boxed), 2, 0);
v___x_4634_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_4635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4635_, 0, v___x_4634_);
lean_ctor_set(v___x_4635_, 1, v___x_4633_);
return v___x_4635_;
}
}
static lean_object* _init_l_Lean_Parser_eoi(void){
_start:
{
lean_object* v___x_4636_; 
v___x_4636_ = lean_obj_once(&l_Lean_Parser_eoi___closed__0, &l_Lean_Parser_eoi___closed__0_once, _init_l_Lean_Parser_eoi___closed__0);
return v___x_4636_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(lean_object* v_k_4637_, lean_object* v_v_4638_, lean_object* v_t_4639_){
_start:
{
if (lean_obj_tag(v_t_4639_) == 0)
{
lean_object* v_size_4640_; lean_object* v_k_4641_; lean_object* v_v_4642_; lean_object* v_l_4643_; lean_object* v_r_4644_; lean_object* v___x_4646_; uint8_t v_isShared_4647_; uint8_t v_isSharedCheck_4924_; 
v_size_4640_ = lean_ctor_get(v_t_4639_, 0);
v_k_4641_ = lean_ctor_get(v_t_4639_, 1);
v_v_4642_ = lean_ctor_get(v_t_4639_, 2);
v_l_4643_ = lean_ctor_get(v_t_4639_, 3);
v_r_4644_ = lean_ctor_get(v_t_4639_, 4);
v_isSharedCheck_4924_ = !lean_is_exclusive(v_t_4639_);
if (v_isSharedCheck_4924_ == 0)
{
v___x_4646_ = v_t_4639_;
v_isShared_4647_ = v_isSharedCheck_4924_;
goto v_resetjp_4645_;
}
else
{
lean_inc(v_r_4644_);
lean_inc(v_l_4643_);
lean_inc(v_v_4642_);
lean_inc(v_k_4641_);
lean_inc(v_size_4640_);
lean_dec(v_t_4639_);
v___x_4646_ = lean_box(0);
v_isShared_4647_ = v_isSharedCheck_4924_;
goto v_resetjp_4645_;
}
v_resetjp_4645_:
{
uint8_t v___x_4648_; 
v___x_4648_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4637_, v_k_4641_);
switch(v___x_4648_)
{
case 0:
{
lean_object* v_impl_4649_; lean_object* v___x_4650_; 
lean_dec(v_size_4640_);
v_impl_4649_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4637_, v_v_4638_, v_l_4643_);
v___x_4650_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_4644_) == 0)
{
lean_object* v_size_4651_; lean_object* v_size_4652_; lean_object* v_k_4653_; lean_object* v_v_4654_; lean_object* v_l_4655_; lean_object* v_r_4656_; lean_object* v___x_4657_; lean_object* v___x_4658_; uint8_t v___x_4659_; 
v_size_4651_ = lean_ctor_get(v_r_4644_, 0);
v_size_4652_ = lean_ctor_get(v_impl_4649_, 0);
lean_inc(v_size_4652_);
v_k_4653_ = lean_ctor_get(v_impl_4649_, 1);
lean_inc(v_k_4653_);
v_v_4654_ = lean_ctor_get(v_impl_4649_, 2);
lean_inc(v_v_4654_);
v_l_4655_ = lean_ctor_get(v_impl_4649_, 3);
lean_inc(v_l_4655_);
v_r_4656_ = lean_ctor_get(v_impl_4649_, 4);
lean_inc(v_r_4656_);
v___x_4657_ = lean_unsigned_to_nat(3u);
v___x_4658_ = lean_nat_mul(v___x_4657_, v_size_4651_);
v___x_4659_ = lean_nat_dec_lt(v___x_4658_, v_size_4652_);
lean_dec(v___x_4658_);
if (v___x_4659_ == 0)
{
lean_object* v___x_4660_; lean_object* v___x_4661_; lean_object* v___x_4663_; 
lean_dec(v_r_4656_);
lean_dec(v_l_4655_);
lean_dec(v_v_4654_);
lean_dec(v_k_4653_);
v___x_4660_ = lean_nat_add(v___x_4650_, v_size_4652_);
lean_dec(v_size_4652_);
v___x_4661_ = lean_nat_add(v___x_4660_, v_size_4651_);
lean_dec(v___x_4660_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 3, v_impl_4649_);
lean_ctor_set(v___x_4646_, 0, v___x_4661_);
v___x_4663_ = v___x_4646_;
goto v_reusejp_4662_;
}
else
{
lean_object* v_reuseFailAlloc_4664_; 
v_reuseFailAlloc_4664_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4664_, 0, v___x_4661_);
lean_ctor_set(v_reuseFailAlloc_4664_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4664_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4664_, 3, v_impl_4649_);
lean_ctor_set(v_reuseFailAlloc_4664_, 4, v_r_4644_);
v___x_4663_ = v_reuseFailAlloc_4664_;
goto v_reusejp_4662_;
}
v_reusejp_4662_:
{
return v___x_4663_;
}
}
else
{
lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4730_; 
v_isSharedCheck_4730_ = !lean_is_exclusive(v_impl_4649_);
if (v_isSharedCheck_4730_ == 0)
{
lean_object* v_unused_4731_; lean_object* v_unused_4732_; lean_object* v_unused_4733_; lean_object* v_unused_4734_; lean_object* v_unused_4735_; 
v_unused_4731_ = lean_ctor_get(v_impl_4649_, 4);
lean_dec(v_unused_4731_);
v_unused_4732_ = lean_ctor_get(v_impl_4649_, 3);
lean_dec(v_unused_4732_);
v_unused_4733_ = lean_ctor_get(v_impl_4649_, 2);
lean_dec(v_unused_4733_);
v_unused_4734_ = lean_ctor_get(v_impl_4649_, 1);
lean_dec(v_unused_4734_);
v_unused_4735_ = lean_ctor_get(v_impl_4649_, 0);
lean_dec(v_unused_4735_);
v___x_4666_ = v_impl_4649_;
v_isShared_4667_ = v_isSharedCheck_4730_;
goto v_resetjp_4665_;
}
else
{
lean_dec(v_impl_4649_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4730_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v_size_4668_; lean_object* v_size_4669_; lean_object* v_k_4670_; lean_object* v_v_4671_; lean_object* v_l_4672_; lean_object* v_r_4673_; lean_object* v___x_4674_; lean_object* v___x_4675_; uint8_t v___x_4676_; 
v_size_4668_ = lean_ctor_get(v_l_4655_, 0);
v_size_4669_ = lean_ctor_get(v_r_4656_, 0);
v_k_4670_ = lean_ctor_get(v_r_4656_, 1);
v_v_4671_ = lean_ctor_get(v_r_4656_, 2);
v_l_4672_ = lean_ctor_get(v_r_4656_, 3);
v_r_4673_ = lean_ctor_get(v_r_4656_, 4);
v___x_4674_ = lean_unsigned_to_nat(2u);
v___x_4675_ = lean_nat_mul(v___x_4674_, v_size_4668_);
v___x_4676_ = lean_nat_dec_lt(v_size_4669_, v___x_4675_);
lean_dec(v___x_4675_);
if (v___x_4676_ == 0)
{
lean_object* v___x_4678_; uint8_t v_isShared_4679_; uint8_t v_isSharedCheck_4705_; 
lean_inc(v_r_4673_);
lean_inc(v_l_4672_);
lean_inc(v_v_4671_);
lean_inc(v_k_4670_);
v_isSharedCheck_4705_ = !lean_is_exclusive(v_r_4656_);
if (v_isSharedCheck_4705_ == 0)
{
lean_object* v_unused_4706_; lean_object* v_unused_4707_; lean_object* v_unused_4708_; lean_object* v_unused_4709_; lean_object* v_unused_4710_; 
v_unused_4706_ = lean_ctor_get(v_r_4656_, 4);
lean_dec(v_unused_4706_);
v_unused_4707_ = lean_ctor_get(v_r_4656_, 3);
lean_dec(v_unused_4707_);
v_unused_4708_ = lean_ctor_get(v_r_4656_, 2);
lean_dec(v_unused_4708_);
v_unused_4709_ = lean_ctor_get(v_r_4656_, 1);
lean_dec(v_unused_4709_);
v_unused_4710_ = lean_ctor_get(v_r_4656_, 0);
lean_dec(v_unused_4710_);
v___x_4678_ = v_r_4656_;
v_isShared_4679_ = v_isSharedCheck_4705_;
goto v_resetjp_4677_;
}
else
{
lean_dec(v_r_4656_);
v___x_4678_ = lean_box(0);
v_isShared_4679_ = v_isSharedCheck_4705_;
goto v_resetjp_4677_;
}
v_resetjp_4677_:
{
lean_object* v___x_4680_; lean_object* v___x_4681_; lean_object* v___y_4683_; lean_object* v___y_4684_; lean_object* v___y_4685_; lean_object* v___x_4693_; lean_object* v___y_4695_; 
v___x_4680_ = lean_nat_add(v___x_4650_, v_size_4652_);
lean_dec(v_size_4652_);
v___x_4681_ = lean_nat_add(v___x_4680_, v_size_4651_);
lean_dec(v___x_4680_);
v___x_4693_ = lean_nat_add(v___x_4650_, v_size_4668_);
if (lean_obj_tag(v_l_4672_) == 0)
{
lean_object* v_size_4703_; 
v_size_4703_ = lean_ctor_get(v_l_4672_, 0);
lean_inc(v_size_4703_);
v___y_4695_ = v_size_4703_;
goto v___jp_4694_;
}
else
{
lean_object* v___x_4704_; 
v___x_4704_ = lean_unsigned_to_nat(0u);
v___y_4695_ = v___x_4704_;
goto v___jp_4694_;
}
v___jp_4682_:
{
lean_object* v___x_4686_; lean_object* v___x_4688_; 
v___x_4686_ = lean_nat_add(v___y_4683_, v___y_4685_);
lean_dec(v___y_4685_);
lean_dec(v___y_4683_);
if (v_isShared_4679_ == 0)
{
lean_ctor_set(v___x_4678_, 4, v_r_4644_);
lean_ctor_set(v___x_4678_, 3, v_r_4673_);
lean_ctor_set(v___x_4678_, 2, v_v_4642_);
lean_ctor_set(v___x_4678_, 1, v_k_4641_);
lean_ctor_set(v___x_4678_, 0, v___x_4686_);
v___x_4688_ = v___x_4678_;
goto v_reusejp_4687_;
}
else
{
lean_object* v_reuseFailAlloc_4692_; 
v_reuseFailAlloc_4692_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4692_, 0, v___x_4686_);
lean_ctor_set(v_reuseFailAlloc_4692_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4692_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4692_, 3, v_r_4673_);
lean_ctor_set(v_reuseFailAlloc_4692_, 4, v_r_4644_);
v___x_4688_ = v_reuseFailAlloc_4692_;
goto v_reusejp_4687_;
}
v_reusejp_4687_:
{
lean_object* v___x_4690_; 
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 4, v___x_4688_);
lean_ctor_set(v___x_4666_, 3, v___y_4684_);
lean_ctor_set(v___x_4666_, 2, v_v_4671_);
lean_ctor_set(v___x_4666_, 1, v_k_4670_);
lean_ctor_set(v___x_4666_, 0, v___x_4681_);
v___x_4690_ = v___x_4666_;
goto v_reusejp_4689_;
}
else
{
lean_object* v_reuseFailAlloc_4691_; 
v_reuseFailAlloc_4691_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4691_, 0, v___x_4681_);
lean_ctor_set(v_reuseFailAlloc_4691_, 1, v_k_4670_);
lean_ctor_set(v_reuseFailAlloc_4691_, 2, v_v_4671_);
lean_ctor_set(v_reuseFailAlloc_4691_, 3, v___y_4684_);
lean_ctor_set(v_reuseFailAlloc_4691_, 4, v___x_4688_);
v___x_4690_ = v_reuseFailAlloc_4691_;
goto v_reusejp_4689_;
}
v_reusejp_4689_:
{
return v___x_4690_;
}
}
}
v___jp_4694_:
{
lean_object* v___x_4696_; lean_object* v___x_4698_; 
v___x_4696_ = lean_nat_add(v___x_4693_, v___y_4695_);
lean_dec(v___y_4695_);
lean_dec(v___x_4693_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v_l_4672_);
lean_ctor_set(v___x_4646_, 3, v_l_4655_);
lean_ctor_set(v___x_4646_, 2, v_v_4654_);
lean_ctor_set(v___x_4646_, 1, v_k_4653_);
lean_ctor_set(v___x_4646_, 0, v___x_4696_);
v___x_4698_ = v___x_4646_;
goto v_reusejp_4697_;
}
else
{
lean_object* v_reuseFailAlloc_4702_; 
v_reuseFailAlloc_4702_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4702_, 0, v___x_4696_);
lean_ctor_set(v_reuseFailAlloc_4702_, 1, v_k_4653_);
lean_ctor_set(v_reuseFailAlloc_4702_, 2, v_v_4654_);
lean_ctor_set(v_reuseFailAlloc_4702_, 3, v_l_4655_);
lean_ctor_set(v_reuseFailAlloc_4702_, 4, v_l_4672_);
v___x_4698_ = v_reuseFailAlloc_4702_;
goto v_reusejp_4697_;
}
v_reusejp_4697_:
{
lean_object* v___x_4699_; 
v___x_4699_ = lean_nat_add(v___x_4650_, v_size_4651_);
if (lean_obj_tag(v_r_4673_) == 0)
{
lean_object* v_size_4700_; 
v_size_4700_ = lean_ctor_get(v_r_4673_, 0);
lean_inc(v_size_4700_);
v___y_4683_ = v___x_4699_;
v___y_4684_ = v___x_4698_;
v___y_4685_ = v_size_4700_;
goto v___jp_4682_;
}
else
{
lean_object* v___x_4701_; 
v___x_4701_ = lean_unsigned_to_nat(0u);
v___y_4683_ = v___x_4699_;
v___y_4684_ = v___x_4698_;
v___y_4685_ = v___x_4701_;
goto v___jp_4682_;
}
}
}
}
}
else
{
lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4716_; 
lean_del_object(v___x_4646_);
v___x_4711_ = lean_nat_add(v___x_4650_, v_size_4652_);
lean_dec(v_size_4652_);
v___x_4712_ = lean_nat_add(v___x_4711_, v_size_4651_);
lean_dec(v___x_4711_);
v___x_4713_ = lean_nat_add(v___x_4650_, v_size_4651_);
v___x_4714_ = lean_nat_add(v___x_4713_, v_size_4669_);
lean_dec(v___x_4713_);
lean_inc_ref(v_r_4644_);
if (v_isShared_4667_ == 0)
{
lean_ctor_set(v___x_4666_, 4, v_r_4644_);
lean_ctor_set(v___x_4666_, 3, v_r_4656_);
lean_ctor_set(v___x_4666_, 2, v_v_4642_);
lean_ctor_set(v___x_4666_, 1, v_k_4641_);
lean_ctor_set(v___x_4666_, 0, v___x_4714_);
v___x_4716_ = v___x_4666_;
goto v_reusejp_4715_;
}
else
{
lean_object* v_reuseFailAlloc_4729_; 
v_reuseFailAlloc_4729_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4729_, 0, v___x_4714_);
lean_ctor_set(v_reuseFailAlloc_4729_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4729_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4729_, 3, v_r_4656_);
lean_ctor_set(v_reuseFailAlloc_4729_, 4, v_r_4644_);
v___x_4716_ = v_reuseFailAlloc_4729_;
goto v_reusejp_4715_;
}
v_reusejp_4715_:
{
lean_object* v___x_4718_; uint8_t v_isShared_4719_; uint8_t v_isSharedCheck_4723_; 
v_isSharedCheck_4723_ = !lean_is_exclusive(v_r_4644_);
if (v_isSharedCheck_4723_ == 0)
{
lean_object* v_unused_4724_; lean_object* v_unused_4725_; lean_object* v_unused_4726_; lean_object* v_unused_4727_; lean_object* v_unused_4728_; 
v_unused_4724_ = lean_ctor_get(v_r_4644_, 4);
lean_dec(v_unused_4724_);
v_unused_4725_ = lean_ctor_get(v_r_4644_, 3);
lean_dec(v_unused_4725_);
v_unused_4726_ = lean_ctor_get(v_r_4644_, 2);
lean_dec(v_unused_4726_);
v_unused_4727_ = lean_ctor_get(v_r_4644_, 1);
lean_dec(v_unused_4727_);
v_unused_4728_ = lean_ctor_get(v_r_4644_, 0);
lean_dec(v_unused_4728_);
v___x_4718_ = v_r_4644_;
v_isShared_4719_ = v_isSharedCheck_4723_;
goto v_resetjp_4717_;
}
else
{
lean_dec(v_r_4644_);
v___x_4718_ = lean_box(0);
v_isShared_4719_ = v_isSharedCheck_4723_;
goto v_resetjp_4717_;
}
v_resetjp_4717_:
{
lean_object* v___x_4721_; 
if (v_isShared_4719_ == 0)
{
lean_ctor_set(v___x_4718_, 4, v___x_4716_);
lean_ctor_set(v___x_4718_, 3, v_l_4655_);
lean_ctor_set(v___x_4718_, 2, v_v_4654_);
lean_ctor_set(v___x_4718_, 1, v_k_4653_);
lean_ctor_set(v___x_4718_, 0, v___x_4712_);
v___x_4721_ = v___x_4718_;
goto v_reusejp_4720_;
}
else
{
lean_object* v_reuseFailAlloc_4722_; 
v_reuseFailAlloc_4722_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4722_, 0, v___x_4712_);
lean_ctor_set(v_reuseFailAlloc_4722_, 1, v_k_4653_);
lean_ctor_set(v_reuseFailAlloc_4722_, 2, v_v_4654_);
lean_ctor_set(v_reuseFailAlloc_4722_, 3, v_l_4655_);
lean_ctor_set(v_reuseFailAlloc_4722_, 4, v___x_4716_);
v___x_4721_ = v_reuseFailAlloc_4722_;
goto v_reusejp_4720_;
}
v_reusejp_4720_:
{
return v___x_4721_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4736_; 
v_l_4736_ = lean_ctor_get(v_impl_4649_, 3);
lean_inc(v_l_4736_);
if (lean_obj_tag(v_l_4736_) == 0)
{
lean_object* v_r_4737_; lean_object* v_k_4738_; lean_object* v_v_4739_; lean_object* v___x_4741_; uint8_t v_isShared_4742_; uint8_t v_isSharedCheck_4750_; 
v_r_4737_ = lean_ctor_get(v_impl_4649_, 4);
v_k_4738_ = lean_ctor_get(v_impl_4649_, 1);
v_v_4739_ = lean_ctor_get(v_impl_4649_, 2);
v_isSharedCheck_4750_ = !lean_is_exclusive(v_impl_4649_);
if (v_isSharedCheck_4750_ == 0)
{
lean_object* v_unused_4751_; lean_object* v_unused_4752_; 
v_unused_4751_ = lean_ctor_get(v_impl_4649_, 3);
lean_dec(v_unused_4751_);
v_unused_4752_ = lean_ctor_get(v_impl_4649_, 0);
lean_dec(v_unused_4752_);
v___x_4741_ = v_impl_4649_;
v_isShared_4742_ = v_isSharedCheck_4750_;
goto v_resetjp_4740_;
}
else
{
lean_inc(v_r_4737_);
lean_inc(v_v_4739_);
lean_inc(v_k_4738_);
lean_dec(v_impl_4649_);
v___x_4741_ = lean_box(0);
v_isShared_4742_ = v_isSharedCheck_4750_;
goto v_resetjp_4740_;
}
v_resetjp_4740_:
{
lean_object* v___x_4743_; lean_object* v___x_4745_; 
v___x_4743_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_4737_);
if (v_isShared_4742_ == 0)
{
lean_ctor_set(v___x_4741_, 3, v_r_4737_);
lean_ctor_set(v___x_4741_, 2, v_v_4642_);
lean_ctor_set(v___x_4741_, 1, v_k_4641_);
lean_ctor_set(v___x_4741_, 0, v___x_4650_);
v___x_4745_ = v___x_4741_;
goto v_reusejp_4744_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v___x_4650_);
lean_ctor_set(v_reuseFailAlloc_4749_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4749_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4749_, 3, v_r_4737_);
lean_ctor_set(v_reuseFailAlloc_4749_, 4, v_r_4737_);
v___x_4745_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4744_;
}
v_reusejp_4744_:
{
lean_object* v___x_4747_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v___x_4745_);
lean_ctor_set(v___x_4646_, 3, v_l_4736_);
lean_ctor_set(v___x_4646_, 2, v_v_4739_);
lean_ctor_set(v___x_4646_, 1, v_k_4738_);
lean_ctor_set(v___x_4646_, 0, v___x_4743_);
v___x_4747_ = v___x_4646_;
goto v_reusejp_4746_;
}
else
{
lean_object* v_reuseFailAlloc_4748_; 
v_reuseFailAlloc_4748_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4748_, 0, v___x_4743_);
lean_ctor_set(v_reuseFailAlloc_4748_, 1, v_k_4738_);
lean_ctor_set(v_reuseFailAlloc_4748_, 2, v_v_4739_);
lean_ctor_set(v_reuseFailAlloc_4748_, 3, v_l_4736_);
lean_ctor_set(v_reuseFailAlloc_4748_, 4, v___x_4745_);
v___x_4747_ = v_reuseFailAlloc_4748_;
goto v_reusejp_4746_;
}
v_reusejp_4746_:
{
return v___x_4747_;
}
}
}
}
else
{
lean_object* v_r_4753_; 
v_r_4753_ = lean_ctor_get(v_impl_4649_, 4);
lean_inc(v_r_4753_);
if (lean_obj_tag(v_r_4753_) == 0)
{
lean_object* v_k_4754_; lean_object* v_v_4755_; lean_object* v___x_4757_; uint8_t v_isShared_4758_; uint8_t v_isSharedCheck_4778_; 
v_k_4754_ = lean_ctor_get(v_impl_4649_, 1);
v_v_4755_ = lean_ctor_get(v_impl_4649_, 2);
v_isSharedCheck_4778_ = !lean_is_exclusive(v_impl_4649_);
if (v_isSharedCheck_4778_ == 0)
{
lean_object* v_unused_4779_; lean_object* v_unused_4780_; lean_object* v_unused_4781_; 
v_unused_4779_ = lean_ctor_get(v_impl_4649_, 4);
lean_dec(v_unused_4779_);
v_unused_4780_ = lean_ctor_get(v_impl_4649_, 3);
lean_dec(v_unused_4780_);
v_unused_4781_ = lean_ctor_get(v_impl_4649_, 0);
lean_dec(v_unused_4781_);
v___x_4757_ = v_impl_4649_;
v_isShared_4758_ = v_isSharedCheck_4778_;
goto v_resetjp_4756_;
}
else
{
lean_inc(v_v_4755_);
lean_inc(v_k_4754_);
lean_dec(v_impl_4649_);
v___x_4757_ = lean_box(0);
v_isShared_4758_ = v_isSharedCheck_4778_;
goto v_resetjp_4756_;
}
v_resetjp_4756_:
{
lean_object* v_k_4759_; lean_object* v_v_4760_; lean_object* v___x_4762_; uint8_t v_isShared_4763_; uint8_t v_isSharedCheck_4774_; 
v_k_4759_ = lean_ctor_get(v_r_4753_, 1);
v_v_4760_ = lean_ctor_get(v_r_4753_, 2);
v_isSharedCheck_4774_ = !lean_is_exclusive(v_r_4753_);
if (v_isSharedCheck_4774_ == 0)
{
lean_object* v_unused_4775_; lean_object* v_unused_4776_; lean_object* v_unused_4777_; 
v_unused_4775_ = lean_ctor_get(v_r_4753_, 4);
lean_dec(v_unused_4775_);
v_unused_4776_ = lean_ctor_get(v_r_4753_, 3);
lean_dec(v_unused_4776_);
v_unused_4777_ = lean_ctor_get(v_r_4753_, 0);
lean_dec(v_unused_4777_);
v___x_4762_ = v_r_4753_;
v_isShared_4763_ = v_isSharedCheck_4774_;
goto v_resetjp_4761_;
}
else
{
lean_inc(v_v_4760_);
lean_inc(v_k_4759_);
lean_dec(v_r_4753_);
v___x_4762_ = lean_box(0);
v_isShared_4763_ = v_isSharedCheck_4774_;
goto v_resetjp_4761_;
}
v_resetjp_4761_:
{
lean_object* v___x_4764_; lean_object* v___x_4766_; 
v___x_4764_ = lean_unsigned_to_nat(3u);
if (v_isShared_4763_ == 0)
{
lean_ctor_set(v___x_4762_, 4, v_l_4736_);
lean_ctor_set(v___x_4762_, 3, v_l_4736_);
lean_ctor_set(v___x_4762_, 2, v_v_4755_);
lean_ctor_set(v___x_4762_, 1, v_k_4754_);
lean_ctor_set(v___x_4762_, 0, v___x_4650_);
v___x_4766_ = v___x_4762_;
goto v_reusejp_4765_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v___x_4650_);
lean_ctor_set(v_reuseFailAlloc_4773_, 1, v_k_4754_);
lean_ctor_set(v_reuseFailAlloc_4773_, 2, v_v_4755_);
lean_ctor_set(v_reuseFailAlloc_4773_, 3, v_l_4736_);
lean_ctor_set(v_reuseFailAlloc_4773_, 4, v_l_4736_);
v___x_4766_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4765_;
}
v_reusejp_4765_:
{
lean_object* v___x_4768_; 
if (v_isShared_4758_ == 0)
{
lean_ctor_set(v___x_4757_, 4, v_l_4736_);
lean_ctor_set(v___x_4757_, 2, v_v_4642_);
lean_ctor_set(v___x_4757_, 1, v_k_4641_);
lean_ctor_set(v___x_4757_, 0, v___x_4650_);
v___x_4768_ = v___x_4757_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4772_; 
v_reuseFailAlloc_4772_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4772_, 0, v___x_4650_);
lean_ctor_set(v_reuseFailAlloc_4772_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4772_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4772_, 3, v_l_4736_);
lean_ctor_set(v_reuseFailAlloc_4772_, 4, v_l_4736_);
v___x_4768_ = v_reuseFailAlloc_4772_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
lean_object* v___x_4770_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v___x_4768_);
lean_ctor_set(v___x_4646_, 3, v___x_4766_);
lean_ctor_set(v___x_4646_, 2, v_v_4760_);
lean_ctor_set(v___x_4646_, 1, v_k_4759_);
lean_ctor_set(v___x_4646_, 0, v___x_4764_);
v___x_4770_ = v___x_4646_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4771_; 
v_reuseFailAlloc_4771_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4771_, 0, v___x_4764_);
lean_ctor_set(v_reuseFailAlloc_4771_, 1, v_k_4759_);
lean_ctor_set(v_reuseFailAlloc_4771_, 2, v_v_4760_);
lean_ctor_set(v_reuseFailAlloc_4771_, 3, v___x_4766_);
lean_ctor_set(v_reuseFailAlloc_4771_, 4, v___x_4768_);
v___x_4770_ = v_reuseFailAlloc_4771_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
return v___x_4770_;
}
}
}
}
}
}
else
{
lean_object* v___x_4782_; lean_object* v___x_4784_; 
v___x_4782_ = lean_unsigned_to_nat(2u);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v_r_4753_);
lean_ctor_set(v___x_4646_, 3, v_impl_4649_);
lean_ctor_set(v___x_4646_, 0, v___x_4782_);
v___x_4784_ = v___x_4646_;
goto v_reusejp_4783_;
}
else
{
lean_object* v_reuseFailAlloc_4785_; 
v_reuseFailAlloc_4785_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4785_, 0, v___x_4782_);
lean_ctor_set(v_reuseFailAlloc_4785_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4785_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4785_, 3, v_impl_4649_);
lean_ctor_set(v_reuseFailAlloc_4785_, 4, v_r_4753_);
v___x_4784_ = v_reuseFailAlloc_4785_;
goto v_reusejp_4783_;
}
v_reusejp_4783_:
{
return v___x_4784_;
}
}
}
}
}
case 1:
{
lean_object* v___x_4787_; 
lean_dec(v_v_4642_);
lean_dec(v_k_4641_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 2, v_v_4638_);
lean_ctor_set(v___x_4646_, 1, v_k_4637_);
v___x_4787_ = v___x_4646_;
goto v_reusejp_4786_;
}
else
{
lean_object* v_reuseFailAlloc_4788_; 
v_reuseFailAlloc_4788_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4788_, 0, v_size_4640_);
lean_ctor_set(v_reuseFailAlloc_4788_, 1, v_k_4637_);
lean_ctor_set(v_reuseFailAlloc_4788_, 2, v_v_4638_);
lean_ctor_set(v_reuseFailAlloc_4788_, 3, v_l_4643_);
lean_ctor_set(v_reuseFailAlloc_4788_, 4, v_r_4644_);
v___x_4787_ = v_reuseFailAlloc_4788_;
goto v_reusejp_4786_;
}
v_reusejp_4786_:
{
return v___x_4787_;
}
}
default: 
{
lean_object* v_impl_4789_; lean_object* v___x_4790_; 
lean_dec(v_size_4640_);
v_impl_4789_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4637_, v_v_4638_, v_r_4644_);
v___x_4790_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_4643_) == 0)
{
lean_object* v_size_4791_; lean_object* v_size_4792_; lean_object* v_k_4793_; lean_object* v_v_4794_; lean_object* v_l_4795_; lean_object* v_r_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; uint8_t v___x_4799_; 
v_size_4791_ = lean_ctor_get(v_l_4643_, 0);
v_size_4792_ = lean_ctor_get(v_impl_4789_, 0);
lean_inc(v_size_4792_);
v_k_4793_ = lean_ctor_get(v_impl_4789_, 1);
lean_inc(v_k_4793_);
v_v_4794_ = lean_ctor_get(v_impl_4789_, 2);
lean_inc(v_v_4794_);
v_l_4795_ = lean_ctor_get(v_impl_4789_, 3);
lean_inc(v_l_4795_);
v_r_4796_ = lean_ctor_get(v_impl_4789_, 4);
lean_inc(v_r_4796_);
v___x_4797_ = lean_unsigned_to_nat(3u);
v___x_4798_ = lean_nat_mul(v___x_4797_, v_size_4791_);
v___x_4799_ = lean_nat_dec_lt(v___x_4798_, v_size_4792_);
lean_dec(v___x_4798_);
if (v___x_4799_ == 0)
{
lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4803_; 
lean_dec(v_r_4796_);
lean_dec(v_l_4795_);
lean_dec(v_v_4794_);
lean_dec(v_k_4793_);
v___x_4800_ = lean_nat_add(v___x_4790_, v_size_4791_);
v___x_4801_ = lean_nat_add(v___x_4800_, v_size_4792_);
lean_dec(v_size_4792_);
lean_dec(v___x_4800_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v_impl_4789_);
lean_ctor_set(v___x_4646_, 0, v___x_4801_);
v___x_4803_ = v___x_4646_;
goto v_reusejp_4802_;
}
else
{
lean_object* v_reuseFailAlloc_4804_; 
v_reuseFailAlloc_4804_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4804_, 0, v___x_4801_);
lean_ctor_set(v_reuseFailAlloc_4804_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4804_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4804_, 3, v_l_4643_);
lean_ctor_set(v_reuseFailAlloc_4804_, 4, v_impl_4789_);
v___x_4803_ = v_reuseFailAlloc_4804_;
goto v_reusejp_4802_;
}
v_reusejp_4802_:
{
return v___x_4803_;
}
}
else
{
lean_object* v___x_4806_; uint8_t v_isShared_4807_; uint8_t v_isSharedCheck_4868_; 
v_isSharedCheck_4868_ = !lean_is_exclusive(v_impl_4789_);
if (v_isSharedCheck_4868_ == 0)
{
lean_object* v_unused_4869_; lean_object* v_unused_4870_; lean_object* v_unused_4871_; lean_object* v_unused_4872_; lean_object* v_unused_4873_; 
v_unused_4869_ = lean_ctor_get(v_impl_4789_, 4);
lean_dec(v_unused_4869_);
v_unused_4870_ = lean_ctor_get(v_impl_4789_, 3);
lean_dec(v_unused_4870_);
v_unused_4871_ = lean_ctor_get(v_impl_4789_, 2);
lean_dec(v_unused_4871_);
v_unused_4872_ = lean_ctor_get(v_impl_4789_, 1);
lean_dec(v_unused_4872_);
v_unused_4873_ = lean_ctor_get(v_impl_4789_, 0);
lean_dec(v_unused_4873_);
v___x_4806_ = v_impl_4789_;
v_isShared_4807_ = v_isSharedCheck_4868_;
goto v_resetjp_4805_;
}
else
{
lean_dec(v_impl_4789_);
v___x_4806_ = lean_box(0);
v_isShared_4807_ = v_isSharedCheck_4868_;
goto v_resetjp_4805_;
}
v_resetjp_4805_:
{
lean_object* v_size_4808_; lean_object* v_k_4809_; lean_object* v_v_4810_; lean_object* v_l_4811_; lean_object* v_r_4812_; lean_object* v_size_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; uint8_t v___x_4816_; 
v_size_4808_ = lean_ctor_get(v_l_4795_, 0);
v_k_4809_ = lean_ctor_get(v_l_4795_, 1);
v_v_4810_ = lean_ctor_get(v_l_4795_, 2);
v_l_4811_ = lean_ctor_get(v_l_4795_, 3);
v_r_4812_ = lean_ctor_get(v_l_4795_, 4);
v_size_4813_ = lean_ctor_get(v_r_4796_, 0);
v___x_4814_ = lean_unsigned_to_nat(2u);
v___x_4815_ = lean_nat_mul(v___x_4814_, v_size_4813_);
v___x_4816_ = lean_nat_dec_lt(v_size_4808_, v___x_4815_);
lean_dec(v___x_4815_);
if (v___x_4816_ == 0)
{
lean_object* v___x_4818_; uint8_t v_isShared_4819_; uint8_t v_isSharedCheck_4844_; 
lean_inc(v_r_4812_);
lean_inc(v_l_4811_);
lean_inc(v_v_4810_);
lean_inc(v_k_4809_);
v_isSharedCheck_4844_ = !lean_is_exclusive(v_l_4795_);
if (v_isSharedCheck_4844_ == 0)
{
lean_object* v_unused_4845_; lean_object* v_unused_4846_; lean_object* v_unused_4847_; lean_object* v_unused_4848_; lean_object* v_unused_4849_; 
v_unused_4845_ = lean_ctor_get(v_l_4795_, 4);
lean_dec(v_unused_4845_);
v_unused_4846_ = lean_ctor_get(v_l_4795_, 3);
lean_dec(v_unused_4846_);
v_unused_4847_ = lean_ctor_get(v_l_4795_, 2);
lean_dec(v_unused_4847_);
v_unused_4848_ = lean_ctor_get(v_l_4795_, 1);
lean_dec(v_unused_4848_);
v_unused_4849_ = lean_ctor_get(v_l_4795_, 0);
lean_dec(v_unused_4849_);
v___x_4818_ = v_l_4795_;
v_isShared_4819_ = v_isSharedCheck_4844_;
goto v_resetjp_4817_;
}
else
{
lean_dec(v_l_4795_);
v___x_4818_ = lean_box(0);
v_isShared_4819_ = v_isSharedCheck_4844_;
goto v_resetjp_4817_;
}
v_resetjp_4817_:
{
lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___y_4823_; lean_object* v___y_4824_; lean_object* v___y_4825_; lean_object* v___y_4834_; 
v___x_4820_ = lean_nat_add(v___x_4790_, v_size_4791_);
v___x_4821_ = lean_nat_add(v___x_4820_, v_size_4792_);
lean_dec(v_size_4792_);
if (lean_obj_tag(v_l_4811_) == 0)
{
lean_object* v_size_4842_; 
v_size_4842_ = lean_ctor_get(v_l_4811_, 0);
lean_inc(v_size_4842_);
v___y_4834_ = v_size_4842_;
goto v___jp_4833_;
}
else
{
lean_object* v___x_4843_; 
v___x_4843_ = lean_unsigned_to_nat(0u);
v___y_4834_ = v___x_4843_;
goto v___jp_4833_;
}
v___jp_4822_:
{
lean_object* v___x_4826_; lean_object* v___x_4828_; 
v___x_4826_ = lean_nat_add(v___y_4824_, v___y_4825_);
lean_dec(v___y_4825_);
lean_dec(v___y_4824_);
if (v_isShared_4819_ == 0)
{
lean_ctor_set(v___x_4818_, 4, v_r_4796_);
lean_ctor_set(v___x_4818_, 3, v_r_4812_);
lean_ctor_set(v___x_4818_, 2, v_v_4794_);
lean_ctor_set(v___x_4818_, 1, v_k_4793_);
lean_ctor_set(v___x_4818_, 0, v___x_4826_);
v___x_4828_ = v___x_4818_;
goto v_reusejp_4827_;
}
else
{
lean_object* v_reuseFailAlloc_4832_; 
v_reuseFailAlloc_4832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4832_, 0, v___x_4826_);
lean_ctor_set(v_reuseFailAlloc_4832_, 1, v_k_4793_);
lean_ctor_set(v_reuseFailAlloc_4832_, 2, v_v_4794_);
lean_ctor_set(v_reuseFailAlloc_4832_, 3, v_r_4812_);
lean_ctor_set(v_reuseFailAlloc_4832_, 4, v_r_4796_);
v___x_4828_ = v_reuseFailAlloc_4832_;
goto v_reusejp_4827_;
}
v_reusejp_4827_:
{
lean_object* v___x_4830_; 
if (v_isShared_4807_ == 0)
{
lean_ctor_set(v___x_4806_, 4, v___x_4828_);
lean_ctor_set(v___x_4806_, 3, v___y_4823_);
lean_ctor_set(v___x_4806_, 2, v_v_4810_);
lean_ctor_set(v___x_4806_, 1, v_k_4809_);
lean_ctor_set(v___x_4806_, 0, v___x_4821_);
v___x_4830_ = v___x_4806_;
goto v_reusejp_4829_;
}
else
{
lean_object* v_reuseFailAlloc_4831_; 
v_reuseFailAlloc_4831_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4831_, 0, v___x_4821_);
lean_ctor_set(v_reuseFailAlloc_4831_, 1, v_k_4809_);
lean_ctor_set(v_reuseFailAlloc_4831_, 2, v_v_4810_);
lean_ctor_set(v_reuseFailAlloc_4831_, 3, v___y_4823_);
lean_ctor_set(v_reuseFailAlloc_4831_, 4, v___x_4828_);
v___x_4830_ = v_reuseFailAlloc_4831_;
goto v_reusejp_4829_;
}
v_reusejp_4829_:
{
return v___x_4830_;
}
}
}
v___jp_4833_:
{
lean_object* v___x_4835_; lean_object* v___x_4837_; 
v___x_4835_ = lean_nat_add(v___x_4820_, v___y_4834_);
lean_dec(v___y_4834_);
lean_dec(v___x_4820_);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v_l_4811_);
lean_ctor_set(v___x_4646_, 0, v___x_4835_);
v___x_4837_ = v___x_4646_;
goto v_reusejp_4836_;
}
else
{
lean_object* v_reuseFailAlloc_4841_; 
v_reuseFailAlloc_4841_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4841_, 0, v___x_4835_);
lean_ctor_set(v_reuseFailAlloc_4841_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4841_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4841_, 3, v_l_4643_);
lean_ctor_set(v_reuseFailAlloc_4841_, 4, v_l_4811_);
v___x_4837_ = v_reuseFailAlloc_4841_;
goto v_reusejp_4836_;
}
v_reusejp_4836_:
{
lean_object* v___x_4838_; 
v___x_4838_ = lean_nat_add(v___x_4790_, v_size_4813_);
if (lean_obj_tag(v_r_4812_) == 0)
{
lean_object* v_size_4839_; 
v_size_4839_ = lean_ctor_get(v_r_4812_, 0);
lean_inc(v_size_4839_);
v___y_4823_ = v___x_4837_;
v___y_4824_ = v___x_4838_;
v___y_4825_ = v_size_4839_;
goto v___jp_4822_;
}
else
{
lean_object* v___x_4840_; 
v___x_4840_ = lean_unsigned_to_nat(0u);
v___y_4823_ = v___x_4837_;
v___y_4824_ = v___x_4838_;
v___y_4825_ = v___x_4840_;
goto v___jp_4822_;
}
}
}
}
}
else
{
lean_object* v___x_4850_; lean_object* v___x_4851_; lean_object* v___x_4852_; lean_object* v___x_4854_; 
lean_del_object(v___x_4646_);
v___x_4850_ = lean_nat_add(v___x_4790_, v_size_4791_);
v___x_4851_ = lean_nat_add(v___x_4850_, v_size_4792_);
lean_dec(v_size_4792_);
v___x_4852_ = lean_nat_add(v___x_4850_, v_size_4808_);
lean_dec(v___x_4850_);
lean_inc_ref(v_l_4643_);
if (v_isShared_4807_ == 0)
{
lean_ctor_set(v___x_4806_, 4, v_l_4795_);
lean_ctor_set(v___x_4806_, 3, v_l_4643_);
lean_ctor_set(v___x_4806_, 2, v_v_4642_);
lean_ctor_set(v___x_4806_, 1, v_k_4641_);
lean_ctor_set(v___x_4806_, 0, v___x_4852_);
v___x_4854_ = v___x_4806_;
goto v_reusejp_4853_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v___x_4852_);
lean_ctor_set(v_reuseFailAlloc_4867_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4867_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4867_, 3, v_l_4643_);
lean_ctor_set(v_reuseFailAlloc_4867_, 4, v_l_4795_);
v___x_4854_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4853_;
}
v_reusejp_4853_:
{
lean_object* v___x_4856_; uint8_t v_isShared_4857_; uint8_t v_isSharedCheck_4861_; 
v_isSharedCheck_4861_ = !lean_is_exclusive(v_l_4643_);
if (v_isSharedCheck_4861_ == 0)
{
lean_object* v_unused_4862_; lean_object* v_unused_4863_; lean_object* v_unused_4864_; lean_object* v_unused_4865_; lean_object* v_unused_4866_; 
v_unused_4862_ = lean_ctor_get(v_l_4643_, 4);
lean_dec(v_unused_4862_);
v_unused_4863_ = lean_ctor_get(v_l_4643_, 3);
lean_dec(v_unused_4863_);
v_unused_4864_ = lean_ctor_get(v_l_4643_, 2);
lean_dec(v_unused_4864_);
v_unused_4865_ = lean_ctor_get(v_l_4643_, 1);
lean_dec(v_unused_4865_);
v_unused_4866_ = lean_ctor_get(v_l_4643_, 0);
lean_dec(v_unused_4866_);
v___x_4856_ = v_l_4643_;
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
else
{
lean_dec(v_l_4643_);
v___x_4856_ = lean_box(0);
v_isShared_4857_ = v_isSharedCheck_4861_;
goto v_resetjp_4855_;
}
v_resetjp_4855_:
{
lean_object* v___x_4859_; 
if (v_isShared_4857_ == 0)
{
lean_ctor_set(v___x_4856_, 4, v_r_4796_);
lean_ctor_set(v___x_4856_, 3, v___x_4854_);
lean_ctor_set(v___x_4856_, 2, v_v_4794_);
lean_ctor_set(v___x_4856_, 1, v_k_4793_);
lean_ctor_set(v___x_4856_, 0, v___x_4851_);
v___x_4859_ = v___x_4856_;
goto v_reusejp_4858_;
}
else
{
lean_object* v_reuseFailAlloc_4860_; 
v_reuseFailAlloc_4860_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4860_, 0, v___x_4851_);
lean_ctor_set(v_reuseFailAlloc_4860_, 1, v_k_4793_);
lean_ctor_set(v_reuseFailAlloc_4860_, 2, v_v_4794_);
lean_ctor_set(v_reuseFailAlloc_4860_, 3, v___x_4854_);
lean_ctor_set(v_reuseFailAlloc_4860_, 4, v_r_4796_);
v___x_4859_ = v_reuseFailAlloc_4860_;
goto v_reusejp_4858_;
}
v_reusejp_4858_:
{
return v___x_4859_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_4874_; 
v_l_4874_ = lean_ctor_get(v_impl_4789_, 3);
lean_inc(v_l_4874_);
if (lean_obj_tag(v_l_4874_) == 0)
{
lean_object* v_r_4875_; lean_object* v_k_4876_; lean_object* v_v_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4900_; 
v_r_4875_ = lean_ctor_get(v_impl_4789_, 4);
v_k_4876_ = lean_ctor_get(v_impl_4789_, 1);
v_v_4877_ = lean_ctor_get(v_impl_4789_, 2);
v_isSharedCheck_4900_ = !lean_is_exclusive(v_impl_4789_);
if (v_isSharedCheck_4900_ == 0)
{
lean_object* v_unused_4901_; lean_object* v_unused_4902_; 
v_unused_4901_ = lean_ctor_get(v_impl_4789_, 3);
lean_dec(v_unused_4901_);
v_unused_4902_ = lean_ctor_get(v_impl_4789_, 0);
lean_dec(v_unused_4902_);
v___x_4879_ = v_impl_4789_;
v_isShared_4880_ = v_isSharedCheck_4900_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_r_4875_);
lean_inc(v_v_4877_);
lean_inc(v_k_4876_);
lean_dec(v_impl_4789_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4900_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v_k_4881_; lean_object* v_v_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4896_; 
v_k_4881_ = lean_ctor_get(v_l_4874_, 1);
v_v_4882_ = lean_ctor_get(v_l_4874_, 2);
v_isSharedCheck_4896_ = !lean_is_exclusive(v_l_4874_);
if (v_isSharedCheck_4896_ == 0)
{
lean_object* v_unused_4897_; lean_object* v_unused_4898_; lean_object* v_unused_4899_; 
v_unused_4897_ = lean_ctor_get(v_l_4874_, 4);
lean_dec(v_unused_4897_);
v_unused_4898_ = lean_ctor_get(v_l_4874_, 3);
lean_dec(v_unused_4898_);
v_unused_4899_ = lean_ctor_get(v_l_4874_, 0);
lean_dec(v_unused_4899_);
v___x_4884_ = v_l_4874_;
v_isShared_4885_ = v_isSharedCheck_4896_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_v_4882_);
lean_inc(v_k_4881_);
lean_dec(v_l_4874_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4896_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4886_; lean_object* v___x_4888_; 
v___x_4886_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_4875_, 2);
if (v_isShared_4885_ == 0)
{
lean_ctor_set(v___x_4884_, 4, v_r_4875_);
lean_ctor_set(v___x_4884_, 3, v_r_4875_);
lean_ctor_set(v___x_4884_, 2, v_v_4642_);
lean_ctor_set(v___x_4884_, 1, v_k_4641_);
lean_ctor_set(v___x_4884_, 0, v___x_4790_);
v___x_4888_ = v___x_4884_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4895_; 
v_reuseFailAlloc_4895_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4895_, 0, v___x_4790_);
lean_ctor_set(v_reuseFailAlloc_4895_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4895_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4895_, 3, v_r_4875_);
lean_ctor_set(v_reuseFailAlloc_4895_, 4, v_r_4875_);
v___x_4888_ = v_reuseFailAlloc_4895_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
lean_object* v___x_4890_; 
lean_inc(v_r_4875_);
if (v_isShared_4880_ == 0)
{
lean_ctor_set(v___x_4879_, 3, v_r_4875_);
lean_ctor_set(v___x_4879_, 0, v___x_4790_);
v___x_4890_ = v___x_4879_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4894_; 
v_reuseFailAlloc_4894_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4894_, 0, v___x_4790_);
lean_ctor_set(v_reuseFailAlloc_4894_, 1, v_k_4876_);
lean_ctor_set(v_reuseFailAlloc_4894_, 2, v_v_4877_);
lean_ctor_set(v_reuseFailAlloc_4894_, 3, v_r_4875_);
lean_ctor_set(v_reuseFailAlloc_4894_, 4, v_r_4875_);
v___x_4890_ = v_reuseFailAlloc_4894_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
lean_object* v___x_4892_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v___x_4890_);
lean_ctor_set(v___x_4646_, 3, v___x_4888_);
lean_ctor_set(v___x_4646_, 2, v_v_4882_);
lean_ctor_set(v___x_4646_, 1, v_k_4881_);
lean_ctor_set(v___x_4646_, 0, v___x_4886_);
v___x_4892_ = v___x_4646_;
goto v_reusejp_4891_;
}
else
{
lean_object* v_reuseFailAlloc_4893_; 
v_reuseFailAlloc_4893_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4893_, 0, v___x_4886_);
lean_ctor_set(v_reuseFailAlloc_4893_, 1, v_k_4881_);
lean_ctor_set(v_reuseFailAlloc_4893_, 2, v_v_4882_);
lean_ctor_set(v_reuseFailAlloc_4893_, 3, v___x_4888_);
lean_ctor_set(v_reuseFailAlloc_4893_, 4, v___x_4890_);
v___x_4892_ = v_reuseFailAlloc_4893_;
goto v_reusejp_4891_;
}
v_reusejp_4891_:
{
return v___x_4892_;
}
}
}
}
}
}
else
{
lean_object* v_r_4903_; 
v_r_4903_ = lean_ctor_get(v_impl_4789_, 4);
lean_inc(v_r_4903_);
if (lean_obj_tag(v_r_4903_) == 0)
{
lean_object* v_k_4904_; lean_object* v_v_4905_; lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4916_; 
v_k_4904_ = lean_ctor_get(v_impl_4789_, 1);
v_v_4905_ = lean_ctor_get(v_impl_4789_, 2);
v_isSharedCheck_4916_ = !lean_is_exclusive(v_impl_4789_);
if (v_isSharedCheck_4916_ == 0)
{
lean_object* v_unused_4917_; lean_object* v_unused_4918_; lean_object* v_unused_4919_; 
v_unused_4917_ = lean_ctor_get(v_impl_4789_, 4);
lean_dec(v_unused_4917_);
v_unused_4918_ = lean_ctor_get(v_impl_4789_, 3);
lean_dec(v_unused_4918_);
v_unused_4919_ = lean_ctor_get(v_impl_4789_, 0);
lean_dec(v_unused_4919_);
v___x_4907_ = v_impl_4789_;
v_isShared_4908_ = v_isSharedCheck_4916_;
goto v_resetjp_4906_;
}
else
{
lean_inc(v_v_4905_);
lean_inc(v_k_4904_);
lean_dec(v_impl_4789_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4916_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
lean_object* v___x_4909_; lean_object* v___x_4911_; 
v___x_4909_ = lean_unsigned_to_nat(3u);
if (v_isShared_4908_ == 0)
{
lean_ctor_set(v___x_4907_, 4, v_l_4874_);
lean_ctor_set(v___x_4907_, 2, v_v_4642_);
lean_ctor_set(v___x_4907_, 1, v_k_4641_);
lean_ctor_set(v___x_4907_, 0, v___x_4790_);
v___x_4911_ = v___x_4907_;
goto v_reusejp_4910_;
}
else
{
lean_object* v_reuseFailAlloc_4915_; 
v_reuseFailAlloc_4915_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4915_, 0, v___x_4790_);
lean_ctor_set(v_reuseFailAlloc_4915_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4915_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4915_, 3, v_l_4874_);
lean_ctor_set(v_reuseFailAlloc_4915_, 4, v_l_4874_);
v___x_4911_ = v_reuseFailAlloc_4915_;
goto v_reusejp_4910_;
}
v_reusejp_4910_:
{
lean_object* v___x_4913_; 
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v_r_4903_);
lean_ctor_set(v___x_4646_, 3, v___x_4911_);
lean_ctor_set(v___x_4646_, 2, v_v_4905_);
lean_ctor_set(v___x_4646_, 1, v_k_4904_);
lean_ctor_set(v___x_4646_, 0, v___x_4909_);
v___x_4913_ = v___x_4646_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v___x_4909_);
lean_ctor_set(v_reuseFailAlloc_4914_, 1, v_k_4904_);
lean_ctor_set(v_reuseFailAlloc_4914_, 2, v_v_4905_);
lean_ctor_set(v_reuseFailAlloc_4914_, 3, v___x_4911_);
lean_ctor_set(v_reuseFailAlloc_4914_, 4, v_r_4903_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
return v___x_4913_;
}
}
}
}
else
{
lean_object* v___x_4920_; lean_object* v___x_4922_; 
v___x_4920_ = lean_unsigned_to_nat(2u);
if (v_isShared_4647_ == 0)
{
lean_ctor_set(v___x_4646_, 4, v_impl_4789_);
lean_ctor_set(v___x_4646_, 3, v_r_4903_);
lean_ctor_set(v___x_4646_, 0, v___x_4920_);
v___x_4922_ = v___x_4646_;
goto v_reusejp_4921_;
}
else
{
lean_object* v_reuseFailAlloc_4923_; 
v_reuseFailAlloc_4923_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4923_, 0, v___x_4920_);
lean_ctor_set(v_reuseFailAlloc_4923_, 1, v_k_4641_);
lean_ctor_set(v_reuseFailAlloc_4923_, 2, v_v_4642_);
lean_ctor_set(v_reuseFailAlloc_4923_, 3, v_r_4903_);
lean_ctor_set(v_reuseFailAlloc_4923_, 4, v_impl_4789_);
v___x_4922_ = v_reuseFailAlloc_4923_;
goto v_reusejp_4921_;
}
v_reusejp_4921_:
{
return v___x_4922_;
}
}
}
}
}
}
}
}
else
{
lean_object* v___x_4925_; lean_object* v___x_4926_; 
v___x_4925_ = lean_unsigned_to_nat(1u);
v___x_4926_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4926_, 0, v___x_4925_);
lean_ctor_set(v___x_4926_, 1, v_k_4637_);
lean_ctor_set(v___x_4926_, 2, v_v_4638_);
lean_ctor_set(v___x_4926_, 3, v_t_4639_);
lean_ctor_set(v___x_4926_, 4, v_t_4639_);
return v___x_4926_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(lean_object* v_t_4927_, lean_object* v_k_4928_){
_start:
{
if (lean_obj_tag(v_t_4927_) == 0)
{
lean_object* v_k_4929_; lean_object* v_v_4930_; lean_object* v_l_4931_; lean_object* v_r_4932_; uint8_t v___x_4933_; 
v_k_4929_ = lean_ctor_get(v_t_4927_, 1);
v_v_4930_ = lean_ctor_get(v_t_4927_, 2);
v_l_4931_ = lean_ctor_get(v_t_4927_, 3);
v_r_4932_ = lean_ctor_get(v_t_4927_, 4);
v___x_4933_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_4928_, v_k_4929_);
switch(v___x_4933_)
{
case 0:
{
v_t_4927_ = v_l_4931_;
goto _start;
}
case 1:
{
lean_object* v___x_4935_; 
lean_inc(v_v_4930_);
v___x_4935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4935_, 0, v_v_4930_);
return v___x_4935_;
}
default: 
{
v_t_4927_ = v_r_4932_;
goto _start;
}
}
}
else
{
lean_object* v___x_4937_; 
v___x_4937_ = lean_box(0);
return v___x_4937_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg___boxed(lean_object* v_t_4938_, lean_object* v_k_4939_){
_start:
{
lean_object* v_res_4940_; 
v_res_4940_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_t_4938_, v_k_4939_);
lean_dec(v_k_4939_);
lean_dec(v_t_4938_);
return v_res_4940_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert___redArg(lean_object* v_map_4941_, lean_object* v_k_4942_, lean_object* v_v_4943_){
_start:
{
lean_object* v___x_4944_; 
v___x_4944_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_4941_, v_k_4942_);
if (lean_obj_tag(v___x_4944_) == 0)
{
lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; 
v___x_4945_ = lean_box(0);
v___x_4946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4946_, 0, v_v_4943_);
lean_ctor_set(v___x_4946_, 1, v___x_4945_);
v___x_4947_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4942_, v___x_4946_, v_map_4941_);
return v___x_4947_;
}
else
{
lean_object* v_val_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; 
v_val_4948_ = lean_ctor_get(v___x_4944_, 0);
lean_inc(v_val_4948_);
lean_dec_ref_known(v___x_4944_, 1);
v___x_4949_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4949_, 0, v_v_4943_);
lean_ctor_set(v___x_4949_, 1, v_val_4948_);
v___x_4950_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4942_, v___x_4949_, v_map_4941_);
return v___x_4950_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_insert(lean_object* v_00_u03b1_4951_, lean_object* v_map_4952_, lean_object* v_k_4953_, lean_object* v_v_4954_){
_start:
{
lean_object* v___x_4955_; 
v___x_4955_ = l_Lean_Parser_TokenMap_insert___redArg(v_map_4952_, v_k_4953_, v_v_4954_);
return v___x_4955_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(lean_object* v_00_u03b4_4956_, lean_object* v_t_4957_, lean_object* v_k_4958_){
_start:
{
lean_object* v___x_4959_; 
v___x_4959_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_t_4957_, v_k_4958_);
return v___x_4959_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___boxed(lean_object* v_00_u03b4_4960_, lean_object* v_t_4961_, lean_object* v_k_4962_){
_start:
{
lean_object* v_res_4963_; 
v_res_4963_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0(v_00_u03b4_4960_, v_t_4961_, v_k_4962_);
lean_dec(v_k_4962_);
lean_dec(v_t_4961_);
return v_res_4963_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1(lean_object* v_00_u03b2_4964_, lean_object* v_k_4965_, lean_object* v_v_4966_, lean_object* v_t_4967_, lean_object* v_hl_4968_){
_start:
{
lean_object* v___x_4969_; 
v___x_4969_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_Parser_TokenMap_insert_spec__1___redArg(v_k_4965_, v_v_4966_, v_t_4967_);
return v___x_4969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instInhabited(lean_object* v_00_u03b1_4970_){
_start:
{
lean_object* v___x_4971_; 
v___x_4971_ = lean_box(1);
return v___x_4971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instEmptyCollection(lean_object* v_00_u03b1_4972_){
_start:
{
lean_object* v___x_4973_; 
v___x_4973_ = lean_box(1);
return v___x_4973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0(lean_object* v_f_4974_, lean_object* v_a_4975_, lean_object* v_b_4976_, lean_object* v_c_4977_){
_start:
{
lean_object* v___x_4978_; lean_object* v___x_4979_; 
v___x_4978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4978_, 0, v_a_4975_);
lean_ctor_set(v___x_4978_, 1, v_b_4976_);
v___x_4979_ = lean_apply_2(v_f_4974_, v___x_4978_, v_c_4977_);
return v___x_4979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1(lean_object* v_toPure_4980_, lean_object* v_____do__lift_4981_){
_start:
{
lean_object* v_a_4982_; lean_object* v___x_4983_; 
v_a_4982_ = lean_ctor_get(v_____do__lift_4981_, 0);
lean_inc(v_a_4982_);
lean_dec_ref(v_____do__lift_4981_);
v___x_4983_ = lean_apply_2(v_toPure_4980_, lean_box(0), v_a_4982_);
return v___x_4983_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg(lean_object* v_inst_4984_, lean_object* v_m_4985_, lean_object* v_init_4986_, lean_object* v_f_4987_){
_start:
{
lean_object* v_toApplicative_4988_; lean_object* v_toBind_4989_; lean_object* v_toPure_4990_; lean_object* v___f_4991_; lean_object* v___x_4992_; lean_object* v___f_4993_; lean_object* v___x_4994_; 
v_toApplicative_4988_ = lean_ctor_get(v_inst_4984_, 0);
v_toBind_4989_ = lean_ctor_get(v_inst_4984_, 1);
lean_inc(v_toBind_4989_);
v_toPure_4990_ = lean_ctor_get(v_toApplicative_4988_, 1);
lean_inc(v_toPure_4990_);
v___f_4991_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_4991_, 0, v_f_4987_);
v___x_4992_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_4984_, v___f_4991_, v_init_4986_, v_m_4985_);
v___f_4993_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4993_, 0, v_toPure_4990_);
v___x_4994_ = lean_apply_4(v_toBind_4989_, lean_box(0), lean_box(0), v___x_4992_, v___f_4993_);
return v___x_4994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1(lean_object* v_m_4995_, lean_object* v_00_u03b1_4996_, lean_object* v_inst_4997_, lean_object* v_00_u03b2_4998_, lean_object* v_m_4999_, lean_object* v_init_5000_, lean_object* v_f_5001_){
_start:
{
lean_object* v_toApplicative_5002_; lean_object* v_toBind_5003_; lean_object* v_toPure_5004_; lean_object* v___f_5005_; lean_object* v___x_5006_; lean_object* v___f_5007_; lean_object* v___x_5008_; 
v_toApplicative_5002_ = lean_ctor_get(v_inst_4997_, 0);
v_toBind_5003_ = lean_ctor_get(v_inst_4997_, 1);
lean_inc(v_toBind_5003_);
v_toPure_5004_ = lean_ctor_get(v_toApplicative_5002_, 1);
lean_inc(v_toPure_5004_);
v___f_5005_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_5005_, 0, v_f_5001_);
v___x_5006_ = l_Std_DTreeMap_Internal_Impl_forInStep___redArg(v_inst_4997_, v___f_5005_, v_init_5000_, v_m_4999_);
v___f_5007_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1___redArg___lam__1), 2, 1);
lean_closure_set(v___f_5007_, 0, v_toPure_5004_);
v___x_5008_ = lean_apply_4(v_toBind_5003_, lean_box(0), lean_box(0), v___x_5006_, v___f_5007_);
return v___x_5008_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___redArg(lean_object* v_inst_5009_){
_start:
{
lean_object* v___x_5010_; 
v___x_5010_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_5010_, 0, lean_box(0));
lean_closure_set(v___x_5010_, 1, lean_box(0));
lean_closure_set(v___x_5010_, 2, v_inst_5009_);
return v___x_5010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_TokenMap_instForInProdNameListOfMonad(lean_object* v_m_5011_, lean_object* v_00_u03b1_5012_, lean_object* v_inst_5013_){
_start:
{
lean_object* v___x_5014_; 
v___x_5014_ = lean_alloc_closure((void*)(l_Lean_Parser_TokenMap_instForInProdNameListOfMonad___aux__1), 7, 3);
lean_closure_set(v___x_5014_, 0, lean_box(0));
lean_closure_set(v___x_5014_, 1, lean_box(0));
lean_closure_set(v___x_5014_, 2, v_inst_5013_);
return v___x_5014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx(uint8_t v_x_5019_){
_start:
{
switch(v_x_5019_)
{
case 0:
{
lean_object* v___x_5020_; 
v___x_5020_ = lean_unsigned_to_nat(0u);
return v___x_5020_;
}
case 1:
{
lean_object* v___x_5021_; 
v___x_5021_ = lean_unsigned_to_nat(1u);
return v___x_5021_;
}
default: 
{
lean_object* v___x_5022_; 
v___x_5022_ = lean_unsigned_to_nat(2u);
return v___x_5022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorIdx___boxed(lean_object* v_x_5023_){
_start:
{
uint8_t v_x_boxed_5024_; lean_object* v_res_5025_; 
v_x_boxed_5024_ = lean_unbox(v_x_5023_);
v_res_5025_ = l_Lean_Parser_LeadingIdentBehavior_ctorIdx(v_x_boxed_5024_);
return v_res_5025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_toCtorIdx(uint8_t v_x_5026_){
_start:
{
lean_object* v___x_5027_; 
v___x_5027_ = l_Lean_Parser_LeadingIdentBehavior_ctorIdx(v_x_5026_);
return v___x_5027_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_toCtorIdx___boxed(lean_object* v_x_5028_){
_start:
{
uint8_t v_x_4__boxed_5029_; lean_object* v_res_5030_; 
v_x_4__boxed_5029_ = lean_unbox(v_x_5028_);
v_res_5030_ = l_Lean_Parser_LeadingIdentBehavior_toCtorIdx(v_x_4__boxed_5029_);
return v_res_5030_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(lean_object* v_k_5031_){
_start:
{
lean_inc(v_k_5031_);
return v_k_5031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg___boxed(lean_object* v_k_5032_){
_start:
{
lean_object* v_res_5033_; 
v_res_5033_ = l_Lean_Parser_LeadingIdentBehavior_ctorElim___redArg(v_k_5032_);
lean_dec(v_k_5032_);
return v_res_5033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim(lean_object* v_motive_5034_, lean_object* v_ctorIdx_5035_, uint8_t v_t_5036_, lean_object* v_h_5037_, lean_object* v_k_5038_){
_start:
{
lean_inc(v_k_5038_);
return v_k_5038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_ctorElim___boxed(lean_object* v_motive_5039_, lean_object* v_ctorIdx_5040_, lean_object* v_t_5041_, lean_object* v_h_5042_, lean_object* v_k_5043_){
_start:
{
uint8_t v_t_boxed_5044_; lean_object* v_res_5045_; 
v_t_boxed_5044_ = lean_unbox(v_t_5041_);
v_res_5045_ = l_Lean_Parser_LeadingIdentBehavior_ctorElim(v_motive_5039_, v_ctorIdx_5040_, v_t_boxed_5044_, v_h_5042_, v_k_5043_);
lean_dec(v_k_5043_);
lean_dec(v_ctorIdx_5040_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(lean_object* v_default_5046_){
_start:
{
lean_inc(v_default_5046_);
return v_default_5046_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg___boxed(lean_object* v_default_5047_){
_start:
{
lean_object* v_res_5048_; 
v_res_5048_ = l_Lean_Parser_LeadingIdentBehavior_default_elim___redArg(v_default_5047_);
lean_dec(v_default_5047_);
return v_res_5048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim(lean_object* v_motive_5049_, uint8_t v_t_5050_, lean_object* v_h_5051_, lean_object* v_default_5052_){
_start:
{
lean_inc(v_default_5052_);
return v_default_5052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_default_elim___boxed(lean_object* v_motive_5053_, lean_object* v_t_5054_, lean_object* v_h_5055_, lean_object* v_default_5056_){
_start:
{
uint8_t v_t_boxed_5057_; lean_object* v_res_5058_; 
v_t_boxed_5057_ = lean_unbox(v_t_5054_);
v_res_5058_ = l_Lean_Parser_LeadingIdentBehavior_default_elim(v_motive_5053_, v_t_boxed_5057_, v_h_5055_, v_default_5056_);
lean_dec(v_default_5056_);
return v_res_5058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(lean_object* v_symbol_5059_){
_start:
{
lean_inc(v_symbol_5059_);
return v_symbol_5059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg___boxed(lean_object* v_symbol_5060_){
_start:
{
lean_object* v_res_5061_; 
v_res_5061_ = l_Lean_Parser_LeadingIdentBehavior_symbol_elim___redArg(v_symbol_5060_);
lean_dec(v_symbol_5060_);
return v_res_5061_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim(lean_object* v_motive_5062_, uint8_t v_t_5063_, lean_object* v_h_5064_, lean_object* v_symbol_5065_){
_start:
{
lean_inc(v_symbol_5065_);
return v_symbol_5065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_symbol_elim___boxed(lean_object* v_motive_5066_, lean_object* v_t_5067_, lean_object* v_h_5068_, lean_object* v_symbol_5069_){
_start:
{
uint8_t v_t_boxed_5070_; lean_object* v_res_5071_; 
v_t_boxed_5070_ = lean_unbox(v_t_5067_);
v_res_5071_ = l_Lean_Parser_LeadingIdentBehavior_symbol_elim(v_motive_5066_, v_t_boxed_5070_, v_h_5068_, v_symbol_5069_);
lean_dec(v_symbol_5069_);
return v_res_5071_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(lean_object* v_both_5072_){
_start:
{
lean_inc(v_both_5072_);
return v_both_5072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg___boxed(lean_object* v_both_5073_){
_start:
{
lean_object* v_res_5074_; 
v_res_5074_ = l_Lean_Parser_LeadingIdentBehavior_both_elim___redArg(v_both_5073_);
lean_dec(v_both_5073_);
return v_res_5074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim(lean_object* v_motive_5075_, uint8_t v_t_5076_, lean_object* v_h_5077_, lean_object* v_both_5078_){
_start:
{
lean_inc(v_both_5078_);
return v_both_5078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_LeadingIdentBehavior_both_elim___boxed(lean_object* v_motive_5079_, lean_object* v_t_5080_, lean_object* v_h_5081_, lean_object* v_both_5082_){
_start:
{
uint8_t v_t_boxed_5083_; lean_object* v_res_5084_; 
v_t_boxed_5083_ = lean_unbox(v_t_5080_);
v_res_5084_ = l_Lean_Parser_LeadingIdentBehavior_both_elim(v_motive_5079_, v_t_boxed_5083_, v_h_5081_, v_both_5082_);
lean_dec(v_both_5082_);
return v_res_5084_;
}
}
static uint8_t _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior_default(void){
_start:
{
uint8_t v___x_5085_; 
v___x_5085_ = 0;
return v___x_5085_;
}
}
static uint8_t _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior(void){
_start:
{
uint8_t v___x_5086_; 
v___x_5086_ = 0;
return v___x_5086_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqLeadingIdentBehavior_beq(uint8_t v_x_5087_, uint8_t v_y_5088_){
_start:
{
lean_object* v___x_5089_; lean_object* v___x_5090_; uint8_t v___x_5091_; 
v___x_5089_ = l_Lean_Parser_LeadingIdentBehavior_ctorIdx(v_x_5087_);
v___x_5090_ = l_Lean_Parser_LeadingIdentBehavior_ctorIdx(v_y_5088_);
v___x_5091_ = lean_nat_dec_eq(v___x_5089_, v___x_5090_);
lean_dec(v___x_5090_);
lean_dec(v___x_5089_);
return v___x_5091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqLeadingIdentBehavior_beq___boxed(lean_object* v_x_5092_, lean_object* v_y_5093_){
_start:
{
uint8_t v_x_17__boxed_5094_; uint8_t v_y_18__boxed_5095_; uint8_t v_res_5096_; lean_object* v_r_5097_; 
v_x_17__boxed_5094_ = lean_unbox(v_x_5092_);
v_y_18__boxed_5095_ = lean_unbox(v_y_5093_);
v_res_5096_ = l_Lean_Parser_instBEqLeadingIdentBehavior_beq(v_x_17__boxed_5094_, v_y_18__boxed_5095_);
v_r_5097_ = lean_box(v_res_5096_);
return v_r_5097_;
}
}
static lean_object* _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6(void){
_start:
{
lean_object* v___x_5109_; lean_object* v___x_5110_; 
v___x_5109_ = lean_unsigned_to_nat(2u);
v___x_5110_ = lean_nat_to_int(v___x_5109_);
return v___x_5110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr(uint8_t v_x_5111_, lean_object* v_prec_5112_){
_start:
{
lean_object* v___y_5114_; lean_object* v___y_5121_; lean_object* v___y_5128_; 
switch(v_x_5111_)
{
case 0:
{
lean_object* v___x_5134_; uint8_t v___x_5135_; 
v___x_5134_ = lean_unsigned_to_nat(1024u);
v___x_5135_ = lean_nat_dec_le(v___x_5134_, v_prec_5112_);
if (v___x_5135_ == 0)
{
lean_object* v___x_5136_; 
v___x_5136_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_5114_ = v___x_5136_;
goto v___jp_5113_;
}
else
{
lean_object* v___x_5137_; 
v___x_5137_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_5114_ = v___x_5137_;
goto v___jp_5113_;
}
}
case 1:
{
lean_object* v___x_5138_; uint8_t v___x_5139_; 
v___x_5138_ = lean_unsigned_to_nat(1024u);
v___x_5139_ = lean_nat_dec_le(v___x_5138_, v_prec_5112_);
if (v___x_5139_ == 0)
{
lean_object* v___x_5140_; 
v___x_5140_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_5121_ = v___x_5140_;
goto v___jp_5120_;
}
else
{
lean_object* v___x_5141_; 
v___x_5141_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_5121_ = v___x_5141_;
goto v___jp_5120_;
}
}
default: 
{
lean_object* v___x_5142_; uint8_t v___x_5143_; 
v___x_5142_ = lean_unsigned_to_nat(1024u);
v___x_5143_ = lean_nat_dec_le(v___x_5142_, v_prec_5112_);
if (v___x_5143_ == 0)
{
lean_object* v___x_5144_; 
v___x_5144_ = lean_obj_once(&l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6, &l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6_once, _init_l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__6);
v___y_5128_ = v___x_5144_;
goto v___jp_5127_;
}
else
{
lean_object* v___x_5145_; 
v___x_5145_ = lean_obj_once(&l_Lean_Parser_incQuotDepth___closed__0, &l_Lean_Parser_incQuotDepth___closed__0_once, _init_l_Lean_Parser_incQuotDepth___closed__0);
v___y_5128_ = v___x_5145_;
goto v___jp_5127_;
}
}
}
v___jp_5113_:
{
lean_object* v___x_5115_; lean_object* v___x_5116_; uint8_t v___x_5117_; lean_object* v___x_5118_; lean_object* v___x_5119_; 
v___x_5115_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__1));
lean_inc(v___y_5114_);
v___x_5116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5116_, 0, v___y_5114_);
lean_ctor_set(v___x_5116_, 1, v___x_5115_);
v___x_5117_ = 0;
v___x_5118_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5118_, 0, v___x_5116_);
lean_ctor_set_uint8(v___x_5118_, sizeof(void*)*1, v___x_5117_);
v___x_5119_ = l_Repr_addAppParen(v___x_5118_, v_prec_5112_);
return v___x_5119_;
}
v___jp_5120_:
{
lean_object* v___x_5122_; lean_object* v___x_5123_; uint8_t v___x_5124_; lean_object* v___x_5125_; lean_object* v___x_5126_; 
v___x_5122_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__3));
lean_inc(v___y_5121_);
v___x_5123_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5123_, 0, v___y_5121_);
lean_ctor_set(v___x_5123_, 1, v___x_5122_);
v___x_5124_ = 0;
v___x_5125_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5125_, 0, v___x_5123_);
lean_ctor_set_uint8(v___x_5125_, sizeof(void*)*1, v___x_5124_);
v___x_5126_ = l_Repr_addAppParen(v___x_5125_, v_prec_5112_);
return v___x_5126_;
}
v___jp_5127_:
{
lean_object* v___x_5129_; lean_object* v___x_5130_; uint8_t v___x_5131_; lean_object* v___x_5132_; lean_object* v___x_5133_; 
v___x_5129_ = ((lean_object*)(l_Lean_Parser_instReprLeadingIdentBehavior_repr___closed__5));
lean_inc(v___y_5128_);
v___x_5130_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_5130_, 0, v___y_5128_);
lean_ctor_set(v___x_5130_, 1, v___x_5129_);
v___x_5131_ = 0;
v___x_5132_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_5132_, 0, v___x_5130_);
lean_ctor_set_uint8(v___x_5132_, sizeof(void*)*1, v___x_5131_);
v___x_5133_ = l_Repr_addAppParen(v___x_5132_, v_prec_5112_);
return v___x_5133_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instReprLeadingIdentBehavior_repr___boxed(lean_object* v_x_5146_, lean_object* v_prec_5147_){
_start:
{
uint8_t v_x_175__boxed_5148_; lean_object* v_res_5149_; 
v_x_175__boxed_5148_ = lean_unbox(v_x_5146_);
v_res_5149_ = l_Lean_Parser_instReprLeadingIdentBehavior_repr(v_x_175__boxed_5148_, v_prec_5147_);
lean_dec(v_prec_5147_);
return v_res_5149_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__0(void){
_start:
{
lean_object* v___x_5152_; 
v___x_5152_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_5152_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__1(void){
_start:
{
lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5153_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__0, &l_Lean_Parser_instInhabitedParserCategory_default___closed__0_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__0);
v___x_5154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5154_, 0, v___x_5153_);
return v___x_5154_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__2(void){
_start:
{
uint8_t v___x_5155_; lean_object* v___x_5156_; lean_object* v___x_5157_; lean_object* v___x_5158_; lean_object* v___x_5159_; 
v___x_5155_ = 0;
v___x_5156_ = ((lean_object*)(l_Lean_Parser_instInhabitedPrattParsingTables___closed__0));
v___x_5157_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__1, &l_Lean_Parser_instInhabitedParserCategory_default___closed__1_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__1);
v___x_5158_ = lean_box(0);
v___x_5159_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5159_, 0, v___x_5158_);
lean_ctor_set(v___x_5159_, 1, v___x_5157_);
lean_ctor_set(v___x_5159_, 2, v___x_5156_);
lean_ctor_set_uint8(v___x_5159_, sizeof(void*)*3, v___x_5155_);
return v___x_5159_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory_default(void){
_start:
{
lean_object* v___x_5160_; 
v___x_5160_ = lean_obj_once(&l_Lean_Parser_instInhabitedParserCategory_default___closed__2, &l_Lean_Parser_instInhabitedParserCategory_default___closed__2_once, _init_l_Lean_Parser_instInhabitedParserCategory_default___closed__2);
return v___x_5160_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedParserCategory(void){
_start:
{
lean_object* v___x_5161_; 
v___x_5161_ = l_Lean_Parser_instInhabitedParserCategory_default;
return v___x_5161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg(lean_object* v_map_5162_, lean_object* v_c_5163_, lean_object* v_s_5164_, uint8_t v_behavior_5165_){
_start:
{
lean_object* v___x_5166_; lean_object* v_fst_5167_; lean_object* v_snd_5168_; lean_object* v___x_5170_; uint8_t v_isShared_5171_; uint8_t v_isSharedCheck_5210_; 
v___x_5166_ = l_Lean_Parser_peekToken(v_c_5163_, v_s_5164_);
v_fst_5167_ = lean_ctor_get(v___x_5166_, 0);
v_snd_5168_ = lean_ctor_get(v___x_5166_, 1);
v_isSharedCheck_5210_ = !lean_is_exclusive(v___x_5166_);
if (v_isSharedCheck_5210_ == 0)
{
v___x_5170_ = v___x_5166_;
v_isShared_5171_ = v_isSharedCheck_5210_;
goto v_resetjp_5169_;
}
else
{
lean_inc(v_snd_5168_);
lean_inc(v_fst_5167_);
lean_dec(v___x_5166_);
v___x_5170_ = lean_box(0);
v_isShared_5171_ = v_isSharedCheck_5210_;
goto v_resetjp_5169_;
}
v_resetjp_5169_:
{
lean_object* v_n_5173_; 
if (lean_obj_tag(v_snd_5168_) == 0)
{
lean_object* v_a_5185_; lean_object* v___x_5186_; lean_object* v___x_5187_; 
lean_del_object(v___x_5170_);
lean_dec(v_fst_5167_);
v_a_5185_ = lean_ctor_get(v_snd_5168_, 0);
lean_inc(v_a_5185_);
lean_dec_ref_known(v_snd_5168_, 1);
v___x_5186_ = lean_box(0);
v___x_5187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5187_, 0, v_a_5185_);
lean_ctor_set(v___x_5187_, 1, v___x_5186_);
return v___x_5187_;
}
else
{
lean_object* v_a_5188_; 
v_a_5188_ = lean_ctor_get(v_snd_5168_, 0);
lean_inc(v_a_5188_);
lean_dec_ref_known(v_snd_5168_, 1);
switch(lean_obj_tag(v_a_5188_))
{
case 2:
{
lean_object* v_val_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; 
v_val_5189_ = lean_ctor_get(v_a_5188_, 1);
lean_inc_ref(v_val_5189_);
lean_dec_ref_known(v_a_5188_, 2);
v___x_5190_ = lean_box(0);
v___x_5191_ = l_Lean_Name_str___override(v___x_5190_, v_val_5189_);
v_n_5173_ = v___x_5191_;
goto v___jp_5172_;
}
case 3:
{
switch(v_behavior_5165_)
{
case 0:
{
lean_dec_ref_known(v_a_5188_, 4);
goto v___jp_5183_;
}
case 1:
{
lean_object* v_val_5192_; lean_object* v___x_5193_; 
v_val_5192_ = lean_ctor_get(v_a_5188_, 2);
lean_inc(v_val_5192_);
lean_dec_ref_known(v_a_5188_, 4);
v___x_5193_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_5162_, v_val_5192_);
lean_dec(v_val_5192_);
if (lean_obj_tag(v___x_5193_) == 0)
{
goto v___jp_5183_;
}
else
{
lean_object* v_val_5194_; lean_object* v___x_5195_; 
lean_del_object(v___x_5170_);
v_val_5194_ = lean_ctor_get(v___x_5193_, 0);
lean_inc(v_val_5194_);
lean_dec_ref_known(v___x_5193_, 1);
v___x_5195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5195_, 0, v_fst_5167_);
lean_ctor_set(v___x_5195_, 1, v_val_5194_);
return v___x_5195_;
}
}
default: 
{
lean_object* v_val_5196_; lean_object* v___x_5197_; 
v_val_5196_ = lean_ctor_get(v_a_5188_, 2);
lean_inc(v_val_5196_);
lean_dec_ref_known(v_a_5188_, 4);
v___x_5197_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_5162_, v_val_5196_);
if (lean_obj_tag(v___x_5197_) == 0)
{
lean_dec(v_val_5196_);
goto v___jp_5183_;
}
else
{
lean_object* v_val_5198_; lean_object* v___x_5199_; uint8_t v___x_5200_; 
lean_del_object(v___x_5170_);
v_val_5198_ = lean_ctor_get(v___x_5197_, 0);
lean_inc(v_val_5198_);
lean_dec_ref_known(v___x_5197_, 1);
v___x_5199_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v___x_5200_ = lean_name_eq(v_val_5196_, v___x_5199_);
lean_dec(v_val_5196_);
if (v___x_5200_ == 0)
{
lean_object* v___x_5201_; 
v___x_5201_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_5162_, v___x_5199_);
if (lean_obj_tag(v___x_5201_) == 1)
{
lean_object* v_val_5202_; lean_object* v___x_5203_; lean_object* v___x_5204_; 
v_val_5202_ = lean_ctor_get(v___x_5201_, 0);
lean_inc(v_val_5202_);
lean_dec_ref_known(v___x_5201_, 1);
v___x_5203_ = l_List_appendTR___redArg(v_val_5198_, v_val_5202_);
v___x_5204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5204_, 0, v_fst_5167_);
lean_ctor_set(v___x_5204_, 1, v___x_5203_);
return v___x_5204_;
}
else
{
lean_object* v___x_5205_; 
lean_dec(v___x_5201_);
v___x_5205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5205_, 0, v_fst_5167_);
lean_ctor_set(v___x_5205_, 1, v_val_5198_);
return v___x_5205_;
}
}
else
{
lean_object* v___x_5206_; 
v___x_5206_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5206_, 0, v_fst_5167_);
lean_ctor_set(v___x_5206_, 1, v_val_5198_);
return v___x_5206_;
}
}
}
}
}
case 1:
{
lean_object* v_kind_5207_; 
v_kind_5207_ = lean_ctor_get(v_a_5188_, 1);
lean_inc(v_kind_5207_);
lean_dec_ref_known(v_a_5188_, 3);
v_n_5173_ = v_kind_5207_;
goto v___jp_5172_;
}
default: 
{
lean_object* v___x_5208_; lean_object* v___x_5209_; 
lean_dec(v_a_5188_);
lean_del_object(v___x_5170_);
v___x_5208_ = lean_box(0);
v___x_5209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5209_, 0, v_fst_5167_);
lean_ctor_set(v___x_5209_, 1, v___x_5208_);
return v___x_5209_;
}
}
}
v___jp_5172_:
{
lean_object* v___x_5174_; 
v___x_5174_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_Parser_TokenMap_insert_spec__0___redArg(v_map_5162_, v_n_5173_);
lean_dec(v_n_5173_);
if (lean_obj_tag(v___x_5174_) == 1)
{
lean_object* v_val_5175_; lean_object* v___x_5177_; 
v_val_5175_ = lean_ctor_get(v___x_5174_, 0);
lean_inc(v_val_5175_);
lean_dec_ref_known(v___x_5174_, 1);
if (v_isShared_5171_ == 0)
{
lean_ctor_set(v___x_5170_, 1, v_val_5175_);
v___x_5177_ = v___x_5170_;
goto v_reusejp_5176_;
}
else
{
lean_object* v_reuseFailAlloc_5178_; 
v_reuseFailAlloc_5178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5178_, 0, v_fst_5167_);
lean_ctor_set(v_reuseFailAlloc_5178_, 1, v_val_5175_);
v___x_5177_ = v_reuseFailAlloc_5178_;
goto v_reusejp_5176_;
}
v_reusejp_5176_:
{
return v___x_5177_;
}
}
else
{
lean_object* v___x_5179_; lean_object* v___x_5181_; 
lean_dec(v___x_5174_);
v___x_5179_ = lean_box(0);
if (v_isShared_5171_ == 0)
{
lean_ctor_set(v___x_5170_, 1, v___x_5179_);
v___x_5181_ = v___x_5170_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5182_; 
v_reuseFailAlloc_5182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5182_, 0, v_fst_5167_);
lean_ctor_set(v_reuseFailAlloc_5182_, 1, v___x_5179_);
v___x_5181_ = v_reuseFailAlloc_5182_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
return v___x_5181_;
}
}
}
v___jp_5183_:
{
lean_object* v___x_5184_; 
v___x_5184_ = ((lean_object*)(l_Lean_Parser_identFn___closed__0));
v_n_5173_ = v___x_5184_;
goto v___jp_5172_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___redArg___boxed(lean_object* v_map_5211_, lean_object* v_c_5212_, lean_object* v_s_5213_, lean_object* v_behavior_5214_){
_start:
{
uint8_t v_behavior_boxed_5215_; lean_object* v_res_5216_; 
v_behavior_boxed_5215_ = lean_unbox(v_behavior_5214_);
v_res_5216_ = l_Lean_Parser_indexed___redArg(v_map_5211_, v_c_5212_, v_s_5213_, v_behavior_boxed_5215_);
lean_dec(v_map_5211_);
return v_res_5216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed(lean_object* v_00_u03b1_5217_, lean_object* v_map_5218_, lean_object* v_c_5219_, lean_object* v_s_5220_, uint8_t v_behavior_5221_){
_start:
{
lean_object* v___x_5222_; 
v___x_5222_ = l_Lean_Parser_indexed___redArg(v_map_5218_, v_c_5219_, v_s_5220_, v_behavior_5221_);
return v___x_5222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_indexed___boxed(lean_object* v_00_u03b1_5223_, lean_object* v_map_5224_, lean_object* v_c_5225_, lean_object* v_s_5226_, lean_object* v_behavior_5227_){
_start:
{
uint8_t v_behavior_boxed_5228_; lean_object* v_res_5229_; 
v_behavior_boxed_5228_ = lean_unbox(v_behavior_5227_);
v_res_5229_ = l_Lean_Parser_indexed(v_00_u03b1_5223_, v_map_5224_, v_c_5225_, v_s_5226_, v_behavior_boxed_5228_);
lean_dec(v_map_5224_);
return v_res_5229_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(lean_object* v_x_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_){
_start:
{
lean_object* v___x_5233_; 
v___x_5233_ = l_Lean_Parser_whitespace(v___y_5231_, v___y_5232_);
return v___x_5233_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object* v_x_5234_, lean_object* v___y_5235_, lean_object* v___y_5236_){
_start:
{
lean_object* v_res_5237_; 
v_res_5237_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(v_x_5234_, v___y_5235_, v___y_5236_);
lean_dec(v_x_5234_);
return v_res_5237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; 
v___f_5240_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_));
v___x_5241_ = lean_st_mk_ref(v___f_5240_);
v___x_5242_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5242_, 0, v___x_5241_);
return v___x_5242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2____boxed(lean_object* v_a_5243_){
_start:
{
lean_object* v_res_5244_; 
v_res_5244_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
return v_res_5244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(lean_object* v___x_5245_){
_start:
{
lean_object* v___x_5247_; lean_object* v___x_5248_; 
v___x_5247_ = lean_st_ref_get(v___x_5245_);
v___x_5248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5248_, 0, v___x_5247_);
return v___x_5248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object* v___x_5249_, lean_object* v___y_5250_){
_start:
{
lean_object* v_res_5251_; 
v_res_5251_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(v___x_5249_);
lean_dec(v___x_5249_);
return v_res_5251_;
}
}
static lean_object* _init_l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_5252_; lean_object* v___f_5253_; 
v___x_5252_ = l_Lean_Parser_categoryParserFnRef;
v___f_5253_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___lam__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed), 2, 1);
lean_closure_set(v___f_5253_, 0, v___x_5252_);
return v___f_5253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; 
v___f_5255_ = lean_obj_once(&l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_, &l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2__once, _init_l___private_Lean_Parser_Basic_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_);
v___x_5256_ = lean_box(0);
v___x_5257_ = lean_box(2);
v___x_5258_ = l_Lean_registerEnvExtension___redArg(v___f_5255_, v___x_5256_, v___x_5257_);
return v___x_5258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2____boxed(lean_object* v_a_5259_){
_start:
{
lean_object* v_res_5260_; 
v_res_5260_ = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
return v_res_5260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0(lean_object* v_a_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_){
_start:
{
lean_object* v___x_5264_; 
v___x_5264_ = l_Lean_Parser_instInhabitedParserFn___lam__0(v___y_5262_, v___y_5263_);
return v___x_5264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn___lam__0___boxed(lean_object* v_a_5265_, lean_object* v___y_5266_, lean_object* v___y_5267_){
_start:
{
lean_object* v_res_5268_; 
v_res_5268_ = l_Lean_Parser_categoryParserFn___lam__0(v_a_5265_, v___y_5266_, v___y_5267_);
lean_dec_ref(v___y_5267_);
lean_dec_ref(v___y_5266_);
lean_dec(v_a_5265_);
return v_res_5268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParserFn(lean_object* v_catName_5272_, lean_object* v_ctx_5273_, lean_object* v_s_5274_){
_start:
{
lean_object* v_toParserModuleContext_5275_; lean_object* v_env_5276_; lean_object* v___x_5277_; lean_object* v_asyncMode_5278_; lean_object* v___f_5279_; lean_object* v___x_5280_; lean_object* v___x_11__overap_5281_; lean_object* v___x_5282_; 
v_toParserModuleContext_5275_ = lean_ctor_get(v_ctx_5273_, 1);
v_env_5276_ = lean_ctor_get(v_toParserModuleContext_5275_, 0);
v___x_5277_ = l_Lean_Parser_categoryParserFnExtension;
v_asyncMode_5278_ = lean_ctor_get(v___x_5277_, 2);
v___f_5279_ = ((lean_object*)(l_Lean_Parser_categoryParserFn___closed__1));
v___x_5280_ = lean_box(0);
lean_inc_ref(v_env_5276_);
v___x_11__overap_5281_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___f_5279_, v___x_5277_, v_env_5276_, v_asyncMode_5278_, v___x_5280_);
v___x_5282_ = lean_apply_3(v___x_11__overap_5281_, v_catName_5272_, v_ctx_5273_, v_s_5274_);
return v___x_5282_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__2(lean_object* v_prec_5283_, lean_object* v_x_5284_){
_start:
{
lean_object* v_quotDepth_5285_; uint8_t v_suppressInsideQuot_5286_; lean_object* v_savedPos_x3f_5287_; lean_object* v_forbiddenTk_x3f_5288_; lean_object* v___x_5290_; uint8_t v_isShared_5291_; uint8_t v_isSharedCheck_5295_; 
v_quotDepth_5285_ = lean_ctor_get(v_x_5284_, 1);
v_suppressInsideQuot_5286_ = lean_ctor_get_uint8(v_x_5284_, sizeof(void*)*4);
v_savedPos_x3f_5287_ = lean_ctor_get(v_x_5284_, 2);
v_forbiddenTk_x3f_5288_ = lean_ctor_get(v_x_5284_, 3);
v_isSharedCheck_5295_ = !lean_is_exclusive(v_x_5284_);
if (v_isSharedCheck_5295_ == 0)
{
lean_object* v_unused_5296_; 
v_unused_5296_ = lean_ctor_get(v_x_5284_, 0);
lean_dec(v_unused_5296_);
v___x_5290_ = v_x_5284_;
v_isShared_5291_ = v_isSharedCheck_5295_;
goto v_resetjp_5289_;
}
else
{
lean_inc(v_forbiddenTk_x3f_5288_);
lean_inc(v_savedPos_x3f_5287_);
lean_inc(v_quotDepth_5285_);
lean_dec(v_x_5284_);
v___x_5290_ = lean_box(0);
v_isShared_5291_ = v_isSharedCheck_5295_;
goto v_resetjp_5289_;
}
v_resetjp_5289_:
{
lean_object* v___x_5293_; 
if (v_isShared_5291_ == 0)
{
lean_ctor_set(v___x_5290_, 0, v_prec_5283_);
v___x_5293_ = v___x_5290_;
goto v_reusejp_5292_;
}
else
{
lean_object* v_reuseFailAlloc_5294_; 
v_reuseFailAlloc_5294_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_5294_, 0, v_prec_5283_);
lean_ctor_set(v_reuseFailAlloc_5294_, 1, v_quotDepth_5285_);
lean_ctor_set(v_reuseFailAlloc_5294_, 2, v_savedPos_x3f_5287_);
lean_ctor_set(v_reuseFailAlloc_5294_, 3, v_forbiddenTk_x3f_5288_);
lean_ctor_set_uint8(v_reuseFailAlloc_5294_, sizeof(void*)*4, v_suppressInsideQuot_5286_);
v___x_5293_ = v_reuseFailAlloc_5294_;
goto v_reusejp_5292_;
}
v_reusejp_5292_:
{
return v___x_5293_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser___lam__0(lean_object* v___f_5297_, lean_object* v___x_5298_, lean_object* v___x_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_){
_start:
{
lean_object* v_traces_5302_; lean_object* v___x_5303_; lean_object* v___x_5304_; uint8_t v___x_5305_; 
v_traces_5302_ = lean_ctor_get(v___y_5301_, 6);
v___x_5303_ = lean_array_get_size(v_traces_5302_);
v___x_5304_ = lean_unsigned_to_nat(0u);
v___x_5305_ = lean_nat_dec_eq(v___x_5303_, v___x_5304_);
if (v___x_5305_ == 0)
{
lean_object* v___x_5306_; lean_object* v___x_5307_; 
v___x_5306_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 3);
lean_closure_set(v___x_5306_, 0, v___f_5297_);
lean_closure_set(v___x_5306_, 1, v___x_5298_);
lean_closure_set(v___x_5306_, 2, v___y_5300_);
v___x_5307_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v___y_5301_, v___x_5299_, v___x_5306_);
return v___x_5307_;
}
else
{
lean_object* v___x_5308_; 
lean_dec_ref(v___x_5299_);
v___x_5308_ = l_Lean_Parser_adaptCacheableContextFn(v___f_5297_, v___x_5298_, v___y_5300_, v___y_5301_);
return v___x_5308_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_categoryParser(lean_object* v_catName_5311_, lean_object* v_prec_5312_){
_start:
{
lean_object* v___f_5313_; lean_object* v___x_5314_; lean_object* v___x_5315_; uint8_t v___x_5316_; lean_object* v___x_5317_; lean_object* v___x_5318_; lean_object* v___x_5319_; lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___f_5325_; lean_object* v___x_5326_; 
lean_inc(v_prec_5312_);
v___f_5313_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___lam__2), 2, 1);
lean_closure_set(v___f_5313_, 0, v_prec_5312_);
v___x_5314_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
v___x_5315_ = ((lean_object*)(l_Lean_Parser_categoryParser___closed__0));
v___x_5316_ = 1;
lean_inc_n(v_catName_5311_, 2);
v___x_5317_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_catName_5311_, v___x_5316_);
v___x_5318_ = lean_string_append(v___x_5315_, v___x_5317_);
lean_dec_ref(v___x_5317_);
v___x_5319_ = ((lean_object*)(l_Lean_Parser_categoryParser___closed__1));
v___x_5320_ = lean_string_append(v___x_5318_, v___x_5319_);
v___x_5321_ = l_Nat_reprFast(v_prec_5312_);
v___x_5322_ = lean_string_append(v___x_5320_, v___x_5321_);
lean_dec_ref(v___x_5321_);
v___x_5323_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParserFn), 3, 1);
lean_closure_set(v___x_5323_, 0, v_catName_5311_);
v___x_5324_ = lean_alloc_closure((void*)(l_Lean_Parser_withCacheFn), 4, 2);
lean_closure_set(v___x_5324_, 0, v_catName_5311_);
lean_closure_set(v___x_5324_, 1, v___x_5323_);
v___f_5325_ = lean_alloc_closure((void*)(l_Lean_Parser_categoryParser___lam__0), 5, 3);
lean_closure_set(v___f_5325_, 0, v___f_5313_);
lean_closure_set(v___f_5325_, 1, v___x_5324_);
lean_closure_set(v___f_5325_, 2, v___x_5322_);
v___x_5326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5326_, 0, v___x_5314_);
lean_ctor_set(v___x_5326_, 1, v___f_5325_);
return v___x_5326_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_termParser(lean_object* v_prec_5330_){
_start:
{
lean_object* v___x_5331_; lean_object* v___x_5332_; 
v___x_5331_ = ((lean_object*)(l_Lean_Parser_termParser___closed__1));
v___x_5332_ = l_Lean_Parser_categoryParser(v___x_5331_, v_prec_5330_);
return v___x_5332_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0(lean_object* v_c_5334_, lean_object* v_s_5335_){
_start:
{
lean_object* v_stxStack_5336_; lean_object* v_pos_5337_; lean_object* v_prev_5338_; uint8_t v___x_5339_; 
v_stxStack_5336_ = lean_ctor_get(v_s_5335_, 0);
v_pos_5337_ = lean_ctor_get(v_s_5335_, 2);
v_prev_5338_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5336_);
v___x_5339_ = l_Lean_Parser_checkTailNoWs(v_prev_5338_);
lean_dec(v_prev_5338_);
if (v___x_5339_ == 0)
{
return v_s_5335_;
}
else
{
lean_object* v_toInputContext_5340_; uint8_t v___x_5341_; 
v_toInputContext_5340_ = lean_ctor_get(v_c_5334_, 0);
v___x_5341_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_5340_, v_pos_5337_);
if (v___x_5341_ == 0)
{
lean_object* v_inputString_5342_; uint32_t v_curr_5343_; uint32_t v___x_5344_; uint8_t v___x_5345_; 
v_inputString_5342_ = lean_ctor_get(v_toInputContext_5340_, 0);
v_curr_5343_ = lean_string_utf8_get_fast(v_inputString_5342_, v_pos_5337_);
v___x_5344_ = 58;
v___x_5345_ = lean_uint32_dec_eq(v_curr_5343_, v___x_5344_);
if (v___x_5345_ == 0)
{
return v_s_5335_;
}
else
{
lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; 
v___x_5346_ = ((lean_object*)(l_Lean_Parser_checkNoImmediateColon___lam__0___closed__0));
v___x_5347_ = lean_box(0);
v___x_5348_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_5335_, v___x_5346_, v___x_5347_, v___x_5345_);
return v___x_5348_;
}
}
else
{
return v_s_5335_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_checkNoImmediateColon___lam__0___boxed(lean_object* v_c_5349_, lean_object* v_s_5350_){
_start:
{
lean_object* v_res_5351_; 
v_res_5351_ = l_Lean_Parser_checkNoImmediateColon___lam__0(v_c_5349_, v_s_5350_);
lean_dec_ref(v_c_5349_);
return v_res_5351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1(){
_start:
{
lean_object* v___x_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; 
v___x_5364_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__1));
v___x_5365_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___closed__2));
v___x_5366_ = l_Lean_addBuiltinDocString(v___x_5364_, v___x_5365_);
return v___x_5366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1___boxed(lean_object* v_a_5367_){
_start:
{
lean_object* v_res_5368_; 
v_res_5368_ = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
return v_res_5368_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpectedFn(lean_object* v_expected_5369_, lean_object* v_p_5370_, lean_object* v_c_5371_, lean_object* v_s_5372_){
_start:
{
lean_object* v___x_5373_; lean_object* v_errorMsg_5374_; 
v___x_5373_ = lean_apply_2(v_p_5370_, v_c_5371_, v_s_5372_);
v_errorMsg_5374_ = lean_ctor_get(v___x_5373_, 4);
lean_inc(v_errorMsg_5374_);
if (lean_obj_tag(v_errorMsg_5374_) == 1)
{
lean_object* v_val_5375_; lean_object* v___x_5377_; uint8_t v_isShared_5378_; uint8_t v_isSharedCheck_5406_; 
v_val_5375_ = lean_ctor_get(v_errorMsg_5374_, 0);
v_isSharedCheck_5406_ = !lean_is_exclusive(v_errorMsg_5374_);
if (v_isSharedCheck_5406_ == 0)
{
v___x_5377_ = v_errorMsg_5374_;
v_isShared_5378_ = v_isSharedCheck_5406_;
goto v_resetjp_5376_;
}
else
{
lean_inc(v_val_5375_);
lean_dec(v_errorMsg_5374_);
v___x_5377_ = lean_box(0);
v_isShared_5378_ = v_isSharedCheck_5406_;
goto v_resetjp_5376_;
}
v_resetjp_5376_:
{
lean_object* v_stxStack_5379_; lean_object* v_lhsPrec_5380_; lean_object* v_pos_5381_; lean_object* v_cache_5382_; lean_object* v_recoveredErrors_5383_; lean_object* v_traces_5384_; lean_object* v___x_5386_; uint8_t v_isShared_5387_; uint8_t v_isSharedCheck_5404_; 
v_stxStack_5379_ = lean_ctor_get(v___x_5373_, 0);
v_lhsPrec_5380_ = lean_ctor_get(v___x_5373_, 1);
v_pos_5381_ = lean_ctor_get(v___x_5373_, 2);
v_cache_5382_ = lean_ctor_get(v___x_5373_, 3);
v_recoveredErrors_5383_ = lean_ctor_get(v___x_5373_, 5);
v_traces_5384_ = lean_ctor_get(v___x_5373_, 6);
v_isSharedCheck_5404_ = !lean_is_exclusive(v___x_5373_);
if (v_isSharedCheck_5404_ == 0)
{
lean_object* v_unused_5405_; 
v_unused_5405_ = lean_ctor_get(v___x_5373_, 4);
lean_dec(v_unused_5405_);
v___x_5386_ = v___x_5373_;
v_isShared_5387_ = v_isSharedCheck_5404_;
goto v_resetjp_5385_;
}
else
{
lean_inc(v_traces_5384_);
lean_inc(v_recoveredErrors_5383_);
lean_inc(v_cache_5382_);
lean_inc(v_pos_5381_);
lean_inc(v_lhsPrec_5380_);
lean_inc(v_stxStack_5379_);
lean_dec(v___x_5373_);
v___x_5386_ = lean_box(0);
v_isShared_5387_ = v_isSharedCheck_5404_;
goto v_resetjp_5385_;
}
v_resetjp_5385_:
{
lean_object* v_unexpectedTk_5388_; lean_object* v_unexpected_5389_; lean_object* v___x_5391_; uint8_t v_isShared_5392_; uint8_t v_isSharedCheck_5402_; 
v_unexpectedTk_5388_ = lean_ctor_get(v_val_5375_, 0);
v_unexpected_5389_ = lean_ctor_get(v_val_5375_, 1);
v_isSharedCheck_5402_ = !lean_is_exclusive(v_val_5375_);
if (v_isSharedCheck_5402_ == 0)
{
lean_object* v_unused_5403_; 
v_unused_5403_ = lean_ctor_get(v_val_5375_, 2);
lean_dec(v_unused_5403_);
v___x_5391_ = v_val_5375_;
v_isShared_5392_ = v_isSharedCheck_5402_;
goto v_resetjp_5390_;
}
else
{
lean_inc(v_unexpected_5389_);
lean_inc(v_unexpectedTk_5388_);
lean_dec(v_val_5375_);
v___x_5391_ = lean_box(0);
v_isShared_5392_ = v_isSharedCheck_5402_;
goto v_resetjp_5390_;
}
v_resetjp_5390_:
{
lean_object* v___x_5394_; 
if (v_isShared_5392_ == 0)
{
lean_ctor_set(v___x_5391_, 2, v_expected_5369_);
v___x_5394_ = v___x_5391_;
goto v_reusejp_5393_;
}
else
{
lean_object* v_reuseFailAlloc_5401_; 
v_reuseFailAlloc_5401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_5401_, 0, v_unexpectedTk_5388_);
lean_ctor_set(v_reuseFailAlloc_5401_, 1, v_unexpected_5389_);
lean_ctor_set(v_reuseFailAlloc_5401_, 2, v_expected_5369_);
v___x_5394_ = v_reuseFailAlloc_5401_;
goto v_reusejp_5393_;
}
v_reusejp_5393_:
{
lean_object* v___x_5396_; 
if (v_isShared_5378_ == 0)
{
lean_ctor_set(v___x_5377_, 0, v___x_5394_);
v___x_5396_ = v___x_5377_;
goto v_reusejp_5395_;
}
else
{
lean_object* v_reuseFailAlloc_5400_; 
v_reuseFailAlloc_5400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5400_, 0, v___x_5394_);
v___x_5396_ = v_reuseFailAlloc_5400_;
goto v_reusejp_5395_;
}
v_reusejp_5395_:
{
lean_object* v___x_5398_; 
if (v_isShared_5387_ == 0)
{
lean_ctor_set(v___x_5386_, 4, v___x_5396_);
v___x_5398_ = v___x_5386_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5399_; 
v_reuseFailAlloc_5399_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5399_, 0, v_stxStack_5379_);
lean_ctor_set(v_reuseFailAlloc_5399_, 1, v_lhsPrec_5380_);
lean_ctor_set(v_reuseFailAlloc_5399_, 2, v_pos_5381_);
lean_ctor_set(v_reuseFailAlloc_5399_, 3, v_cache_5382_);
lean_ctor_set(v_reuseFailAlloc_5399_, 4, v___x_5396_);
lean_ctor_set(v_reuseFailAlloc_5399_, 5, v_recoveredErrors_5383_);
lean_ctor_set(v_reuseFailAlloc_5399_, 6, v_traces_5384_);
v___x_5398_ = v_reuseFailAlloc_5399_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
return v___x_5398_;
}
}
}
}
}
}
}
else
{
lean_dec(v_errorMsg_5374_);
lean_dec(v_expected_5369_);
return v___x_5373_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_setExpected(lean_object* v_expected_5407_, lean_object* v_p_5408_){
_start:
{
lean_object* v_info_5409_; lean_object* v_fn_5410_; lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5418_; 
v_info_5409_ = lean_ctor_get(v_p_5408_, 0);
v_fn_5410_ = lean_ctor_get(v_p_5408_, 1);
v_isSharedCheck_5418_ = !lean_is_exclusive(v_p_5408_);
if (v_isSharedCheck_5418_ == 0)
{
v___x_5412_ = v_p_5408_;
v_isShared_5413_ = v_isSharedCheck_5418_;
goto v_resetjp_5411_;
}
else
{
lean_inc(v_fn_5410_);
lean_inc(v_info_5409_);
lean_dec(v_p_5408_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5418_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v___x_5414_; lean_object* v___x_5416_; 
v___x_5414_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpectedFn), 4, 2);
lean_closure_set(v___x_5414_, 0, v_expected_5407_);
lean_closure_set(v___x_5414_, 1, v_fn_5410_);
if (v_isShared_5413_ == 0)
{
lean_ctor_set(v___x_5412_, 1, v___x_5414_);
v___x_5416_ = v___x_5412_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v_info_5409_);
lean_ctor_set(v_reuseFailAlloc_5417_, 1, v___x_5414_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0(lean_object* v_x_5425_, lean_object* v_s_5426_){
_start:
{
lean_object* v___x_5427_; uint8_t v___x_5428_; lean_object* v___x_5429_; 
v___x_5427_ = ((lean_object*)(l_Lean_Parser_pushNone___lam__0___closed__1));
v___x_5428_ = 0;
v___x_5429_ = l_Lean_Parser_ParserState_pushSyntax(v_s_5426_, v___x_5427_, v___x_5428_);
return v___x_5429_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_pushNone___lam__0___boxed(lean_object* v_x_5430_, lean_object* v_s_5431_){
_start:
{
lean_object* v_res_5432_; 
v_res_5432_ = l_Lean_Parser_pushNone___lam__0(v_x_5430_, v_s_5431_);
lean_dec_ref(v_x_5430_);
return v_res_5432_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__2(void){
_start:
{
lean_object* v___x_5441_; lean_object* v___x_5442_; 
v___x_5441_ = ((lean_object*)(l_Lean_Parser_longestMatchStep___closed__1));
v___x_5442_ = l_Lean_Parser_symbolNoAntiquot(v___x_5441_);
return v___x_5442_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__3(void){
_start:
{
lean_object* v___x_5443_; lean_object* v___x_5444_; 
v___x_5443_ = lean_unsigned_to_nat(0u);
v___x_5444_ = l_Lean_Parser_termParser(v___x_5443_);
return v___x_5444_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__4(void){
_start:
{
lean_object* v___x_5445_; lean_object* v___x_5446_; 
v___x_5445_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__3, &l_Lean_Parser_antiquotNestedExpr___closed__3_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__3);
v___x_5446_ = l_Lean_Parser_decQuotDepth(v___x_5445_);
return v___x_5446_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__5(void){
_start:
{
lean_object* v___x_5447_; lean_object* v___x_5448_; 
v___x_5447_ = ((lean_object*)(l_Lean_Parser_dbgTraceStateFn___closed__6));
v___x_5448_ = l_Lean_Parser_symbolNoAntiquot(v___x_5447_);
return v___x_5448_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__6(void){
_start:
{
lean_object* v___x_5449_; lean_object* v___x_5450_; lean_object* v___x_5451_; 
v___x_5449_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__5, &l_Lean_Parser_antiquotNestedExpr___closed__5_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__5);
v___x_5450_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__4, &l_Lean_Parser_antiquotNestedExpr___closed__4_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__4);
v___x_5451_ = l_Lean_Parser_andthen(v___x_5450_, v___x_5449_);
return v___x_5451_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__7(void){
_start:
{
lean_object* v___x_5452_; lean_object* v___x_5453_; lean_object* v___x_5454_; 
v___x_5452_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__6, &l_Lean_Parser_antiquotNestedExpr___closed__6_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__6);
v___x_5453_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__2, &l_Lean_Parser_antiquotNestedExpr___closed__2_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__2);
v___x_5454_ = l_Lean_Parser_andthen(v___x_5453_, v___x_5452_);
return v___x_5454_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr___closed__8(void){
_start:
{
lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; 
v___x_5455_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__7, &l_Lean_Parser_antiquotNestedExpr___closed__7_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__7);
v___x_5456_ = ((lean_object*)(l_Lean_Parser_antiquotNestedExpr___closed__1));
v___x_5457_ = l_Lean_Parser_node(v___x_5456_, v___x_5455_);
return v___x_5457_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotNestedExpr(void){
_start:
{
lean_object* v___x_5458_; 
v___x_5458_ = lean_obj_once(&l_Lean_Parser_antiquotNestedExpr___closed__8, &l_Lean_Parser_antiquotNestedExpr___closed__8_once, _init_l_Lean_Parser_antiquotNestedExpr___closed__8);
return v___x_5458_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__1(void){
_start:
{
lean_object* v___x_5460_; lean_object* v___x_5461_; 
v___x_5460_ = ((lean_object*)(l_Lean_Parser_antiquotExpr___closed__0));
v___x_5461_ = l_Lean_Parser_symbolNoAntiquot(v___x_5460_);
return v___x_5461_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__2(void){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v___x_5462_ = l_Lean_Parser_antiquotNestedExpr;
v___x_5463_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__1, &l_Lean_Parser_antiquotExpr___closed__1_once, _init_l_Lean_Parser_antiquotExpr___closed__1);
v___x_5464_ = l_Lean_Parser_orelse(v___x_5463_, v___x_5462_);
return v___x_5464_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr___closed__3(void){
_start:
{
lean_object* v___x_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; 
v___x_5465_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__2, &l_Lean_Parser_antiquotExpr___closed__2_once, _init_l_Lean_Parser_antiquotExpr___closed__2);
v___x_5466_ = l_Lean_Parser_identNoAntiquot;
v___x_5467_ = l_Lean_Parser_orelse(v___x_5466_, v___x_5465_);
return v___x_5467_;
}
}
static lean_object* _init_l_Lean_Parser_antiquotExpr(void){
_start:
{
lean_object* v___x_5468_; 
v___x_5468_ = lean_obj_once(&l_Lean_Parser_antiquotExpr___closed__3, &l_Lean_Parser_antiquotExpr___closed__3_once, _init_l_Lean_Parser_antiquotExpr___closed__3);
return v___x_5468_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__1(void){
_start:
{
lean_object* v___x_5470_; lean_object* v___x_5471_; 
v___x_5470_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__0));
v___x_5471_ = l_Lean_Parser_checkNoWsBefore(v___x_5470_);
return v___x_5471_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__3(void){
_start:
{
lean_object* v___x_5473_; lean_object* v___x_5474_; 
v___x_5473_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__2));
v___x_5474_ = l_Lean_Parser_symbolNoAntiquot(v___x_5473_);
return v___x_5474_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__5(void){
_start:
{
lean_object* v___x_5476_; lean_object* v___x_5477_; 
v___x_5476_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__4));
v___x_5477_ = l_Lean_Parser_symbolNoAntiquot(v___x_5476_);
return v___x_5477_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__6(void){
_start:
{
lean_object* v___x_5478_; lean_object* v___x_5479_; lean_object* v___x_5480_; 
v___x_5478_ = l_Lean_Parser_antiquotExpr;
v___x_5479_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__1, &l_Lean_Parser_tokenAntiquotFn___closed__1_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__1);
v___x_5480_ = l_Lean_Parser_andthen(v___x_5479_, v___x_5478_);
return v___x_5480_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__7(void){
_start:
{
lean_object* v___x_5481_; lean_object* v___x_5482_; lean_object* v___x_5483_; 
v___x_5481_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__6, &l_Lean_Parser_tokenAntiquotFn___closed__6_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__6);
v___x_5482_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__5, &l_Lean_Parser_tokenAntiquotFn___closed__5_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__5);
v___x_5483_ = l_Lean_Parser_andthen(v___x_5482_, v___x_5481_);
return v___x_5483_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__8(void){
_start:
{
lean_object* v___x_5484_; lean_object* v___x_5485_; lean_object* v___x_5486_; 
v___x_5484_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__7, &l_Lean_Parser_tokenAntiquotFn___closed__7_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__7);
v___x_5485_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__3, &l_Lean_Parser_tokenAntiquotFn___closed__3_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__3);
v___x_5486_ = l_Lean_Parser_andthen(v___x_5485_, v___x_5484_);
return v___x_5486_;
}
}
static lean_object* _init_l_Lean_Parser_tokenAntiquotFn___closed__9(void){
_start:
{
lean_object* v___x_5487_; lean_object* v___x_5488_; lean_object* v___x_5489_; 
v___x_5487_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__8, &l_Lean_Parser_tokenAntiquotFn___closed__8_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__8);
v___x_5488_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__1, &l_Lean_Parser_tokenAntiquotFn___closed__1_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__1);
v___x_5489_ = l_Lean_Parser_andthen(v___x_5488_, v___x_5487_);
return v___x_5489_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenAntiquotFn(lean_object* v_c_5493_, lean_object* v_s_5494_){
_start:
{
lean_object* v_pos_5495_; lean_object* v_errorMsg_5496_; lean_object* v___x_5497_; uint8_t v___x_5498_; 
v_pos_5495_ = lean_ctor_get(v_s_5494_, 2);
v_errorMsg_5496_ = lean_ctor_get(v_s_5494_, 4);
v___x_5497_ = lean_box(0);
lean_inc(v_errorMsg_5496_);
v___x_5498_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5496_, v___x_5497_);
if (v___x_5498_ == 0)
{
lean_dec_ref(v_c_5493_);
return v_s_5494_;
}
else
{
lean_object* v___x_5499_; lean_object* v_fn_5500_; lean_object* v_iniSz_5501_; lean_object* v_s_5502_; lean_object* v_errorMsg_5503_; uint8_t v___x_5504_; 
lean_inc(v_pos_5495_);
v___x_5499_ = lean_obj_once(&l_Lean_Parser_tokenAntiquotFn___closed__9, &l_Lean_Parser_tokenAntiquotFn___closed__9_once, _init_l_Lean_Parser_tokenAntiquotFn___closed__9);
v_fn_5500_ = lean_ctor_get(v___x_5499_, 1);
v_iniSz_5501_ = l_Lean_Parser_ParserState_stackSize(v_s_5494_);
lean_inc_ref(v_fn_5500_);
v_s_5502_ = lean_apply_2(v_fn_5500_, v_c_5493_, v_s_5494_);
v_errorMsg_5503_ = lean_ctor_get(v_s_5502_, 4);
lean_inc(v_errorMsg_5503_);
v___x_5504_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5503_, v___x_5497_);
if (v___x_5504_ == 0)
{
lean_object* v___x_5505_; 
v___x_5505_ = l_Lean_Parser_ParserState_restore(v_s_5502_, v_iniSz_5501_, v_pos_5495_);
lean_dec(v_iniSz_5501_);
return v___x_5505_;
}
else
{
lean_object* v___x_5506_; lean_object* v___x_5507_; lean_object* v___x_5508_; lean_object* v___x_5509_; 
lean_dec(v_pos_5495_);
v___x_5506_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__11));
v___x_5507_ = lean_unsigned_to_nat(1u);
v___x_5508_ = lean_nat_sub(v_iniSz_5501_, v___x_5507_);
lean_dec(v_iniSz_5501_);
v___x_5509_ = l_Lean_Parser_ParserState_mkNode(v_s_5502_, v___x_5506_, v___x_5508_);
lean_dec(v___x_5508_);
return v___x_5509_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot___lam__0(lean_object* v_fn_5510_, lean_object* v___y_5511_, lean_object* v___y_5512_){
_start:
{
lean_object* v_toInputContext_5513_; lean_object* v_s_5514_; lean_object* v_pos_5515_; lean_object* v_inputString_5516_; uint32_t v___x_5517_; uint32_t v___x_5518_; uint8_t v___x_5519_; 
v_toInputContext_5513_ = lean_ctor_get(v___y_5511_, 0);
lean_inc_ref(v___y_5511_);
v_s_5514_ = lean_apply_2(v_fn_5510_, v___y_5511_, v___y_5512_);
v_pos_5515_ = lean_ctor_get(v_s_5514_, 2);
lean_inc(v_pos_5515_);
v_inputString_5516_ = lean_ctor_get(v_toInputContext_5513_, 0);
v___x_5517_ = lean_string_utf8_get(v_inputString_5516_, v_pos_5515_);
lean_dec(v_pos_5515_);
v___x_5518_ = 37;
v___x_5519_ = lean_uint32_dec_eq(v___x_5517_, v___x_5518_);
if (v___x_5519_ == 0)
{
lean_dec_ref(v___y_5511_);
return v_s_5514_;
}
else
{
lean_object* v___x_5520_; 
v___x_5520_ = l_Lean_Parser_tokenAntiquotFn(v___y_5511_, v_s_5514_);
return v___x_5520_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_tokenWithAntiquot(lean_object* v_p_5521_){
_start:
{
lean_object* v_info_5522_; lean_object* v_fn_5523_; lean_object* v___x_5525_; uint8_t v_isShared_5526_; uint8_t v_isSharedCheck_5531_; 
v_info_5522_ = lean_ctor_get(v_p_5521_, 0);
v_fn_5523_ = lean_ctor_get(v_p_5521_, 1);
v_isSharedCheck_5531_ = !lean_is_exclusive(v_p_5521_);
if (v_isSharedCheck_5531_ == 0)
{
v___x_5525_ = v_p_5521_;
v_isShared_5526_ = v_isSharedCheck_5531_;
goto v_resetjp_5524_;
}
else
{
lean_inc(v_fn_5523_);
lean_inc(v_info_5522_);
lean_dec(v_p_5521_);
v___x_5525_ = lean_box(0);
v_isShared_5526_ = v_isSharedCheck_5531_;
goto v_resetjp_5524_;
}
v_resetjp_5524_:
{
lean_object* v___f_5527_; lean_object* v___x_5529_; 
v___f_5527_ = lean_alloc_closure((void*)(l_Lean_Parser_tokenWithAntiquot___lam__0), 3, 1);
lean_closure_set(v___f_5527_, 0, v_fn_5523_);
if (v_isShared_5526_ == 0)
{
lean_ctor_set(v___x_5525_, 1, v___f_5527_);
v___x_5529_ = v___x_5525_;
goto v_reusejp_5528_;
}
else
{
lean_object* v_reuseFailAlloc_5530_; 
v_reuseFailAlloc_5530_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5530_, 0, v_info_5522_);
lean_ctor_set(v_reuseFailAlloc_5530_, 1, v___f_5527_);
v___x_5529_ = v_reuseFailAlloc_5530_;
goto v_reusejp_5528_;
}
v_reusejp_5528_:
{
return v___x_5529_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_symbol(lean_object* v_sym_5532_){
_start:
{
lean_object* v___x_5533_; lean_object* v___x_5534_; 
v___x_5533_ = l_Lean_Parser_symbolNoAntiquot(v_sym_5532_);
v___x_5534_ = l_Lean_Parser_tokenWithAntiquot(v___x_5533_);
return v___x_5534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol(lean_object* v_sym_5537_, uint8_t v_includeIdent_5538_){
_start:
{
lean_object* v___x_5539_; lean_object* v___x_5540_; 
v___x_5539_ = l_Lean_Parser_nonReservedSymbolNoAntiquot(v_sym_5537_, v_includeIdent_5538_);
v___x_5540_ = l_Lean_Parser_tokenWithAntiquot(v___x_5539_);
return v___x_5540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nonReservedSymbol___boxed(lean_object* v_sym_5541_, lean_object* v_includeIdent_5542_){
_start:
{
uint8_t v_includeIdent_boxed_5543_; lean_object* v_res_5544_; 
v_includeIdent_boxed_5543_ = lean_unbox(v_includeIdent_5542_);
v_res_5544_ = l_Lean_Parser_nonReservedSymbol(v_sym_5541_, v_includeIdent_boxed_5543_);
return v_res_5544_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___redArg(lean_object* v_sym_5545_, lean_object* v_asciiSym_5546_){
_start:
{
lean_object* v___x_5547_; lean_object* v___x_5548_; 
v___x_5547_ = l_Lean_Parser_unicodeSymbolNoAntiquot___redArg(v_sym_5545_, v_asciiSym_5546_);
v___x_5548_ = l_Lean_Parser_tokenWithAntiquot(v___x_5547_);
return v___x_5548_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol(lean_object* v_sym_5549_, lean_object* v_asciiSym_5550_, uint8_t v_preserveForPP_5551_){
_start:
{
lean_object* v___x_5552_; 
v___x_5552_ = l_Lean_Parser_unicodeSymbol___redArg(v_sym_5549_, v_asciiSym_5550_);
return v___x_5552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_unicodeSymbol___boxed(lean_object* v_sym_5553_, lean_object* v_asciiSym_5554_, lean_object* v_preserveForPP_5555_){
_start:
{
uint8_t v_preserveForPP_boxed_5556_; lean_object* v_res_5557_; 
v_preserveForPP_boxed_5556_ = lean_unbox(v_preserveForPP_5555_);
v_res_5557_ = l_Lean_Parser_unicodeSymbol(v_sym_5553_, v_asciiSym_5554_, v_preserveForPP_boxed_5556_);
return v_res_5557_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__0(void){
_start:
{
lean_object* v___x_5558_; lean_object* v___x_5559_; 
v___x_5558_ = ((lean_object*)(l_Lean_Parser_tokenAntiquotFn___closed__4));
v___x_5559_ = l_Lean_Parser_symbol(v___x_5558_);
return v___x_5559_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__1(void){
_start:
{
lean_object* v___x_5560_; lean_object* v___x_5561_; lean_object* v___x_5562_; 
v___x_5560_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__0, &l_Lean_Parser_mkAntiquot___closed__0_once, _init_l_Lean_Parser_mkAntiquot___closed__0);
v___x_5561_ = lean_box(0);
v___x_5562_ = l_Lean_Parser_setExpected(v___x_5561_, v___x_5560_);
return v___x_5562_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__2(void){
_start:
{
lean_object* v___x_5563_; lean_object* v___x_5564_; 
v___x_5563_ = ((lean_object*)(l_Lean_Parser_chFn___closed__1));
v___x_5564_ = l_Lean_Parser_checkNoWsBefore(v___x_5563_);
return v___x_5564_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__3(void){
_start:
{
lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; 
v___x_5565_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__0, &l_Lean_Parser_mkAntiquot___closed__0_once, _init_l_Lean_Parser_mkAntiquot___closed__0);
v___x_5566_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__2, &l_Lean_Parser_mkAntiquot___closed__2_once, _init_l_Lean_Parser_mkAntiquot___closed__2);
v___x_5567_ = l_Lean_Parser_andthen(v___x_5566_, v___x_5565_);
return v___x_5567_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__4(void){
_start:
{
lean_object* v___x_5568_; lean_object* v___x_5569_; 
v___x_5568_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__3, &l_Lean_Parser_mkAntiquot___closed__3_once, _init_l_Lean_Parser_mkAntiquot___closed__3);
v___x_5569_ = l_Lean_Parser_manyNoAntiquot(v___x_5568_);
return v___x_5569_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__6(void){
_start:
{
lean_object* v___x_5571_; lean_object* v___x_5572_; 
v___x_5571_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__5));
v___x_5572_ = l_Lean_Parser_checkNoWsBefore(v___x_5571_);
return v___x_5572_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__12(void){
_start:
{
lean_object* v___x_5580_; lean_object* v___x_5581_; 
v___x_5580_ = ((lean_object*)(l_Lean_Parser_categoryParser___closed__1));
v___x_5581_ = l_Lean_Parser_symbol(v___x_5580_);
return v___x_5581_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquot___closed__13(void){
_start:
{
lean_object* v___x_5582_; lean_object* v___x_5583_; lean_object* v___x_5584_; 
v___x_5582_ = ((lean_object*)(l_Lean_Parser_pushNone));
v___x_5583_ = ((lean_object*)(l_Lean_Parser_checkNoImmediateColon));
v___x_5584_ = l_Lean_Parser_andthen(v___x_5583_, v___x_5582_);
return v___x_5584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot(lean_object* v_name_5588_, lean_object* v_kind_5589_, uint8_t v_anonymous_5590_, uint8_t v_isPseudoKind_5591_){
_start:
{
lean_object* v___y_5593_; lean_object* v___y_5594_; lean_object* v___y_5607_; 
if (v_isPseudoKind_5591_ == 0)
{
lean_object* v___x_5625_; 
v___x_5625_ = lean_box(0);
v___y_5607_ = v___x_5625_;
goto v___jp_5606_;
}
else
{
lean_object* v___x_5626_; 
v___x_5626_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__15));
v___y_5607_ = v___x_5626_;
goto v___jp_5606_;
}
v___jp_5592_:
{
lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; lean_object* v___x_5603_; lean_object* v___x_5604_; lean_object* v___x_5605_; 
v___x_5595_ = l_Lean_Parser_maxPrec;
v___x_5596_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__1, &l_Lean_Parser_mkAntiquot___closed__1_once, _init_l_Lean_Parser_mkAntiquot___closed__1);
v___x_5597_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__4, &l_Lean_Parser_mkAntiquot___closed__4_once, _init_l_Lean_Parser_mkAntiquot___closed__4);
v___x_5598_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__6, &l_Lean_Parser_mkAntiquot___closed__6_once, _init_l_Lean_Parser_mkAntiquot___closed__6);
v___x_5599_ = l_Lean_Parser_antiquotExpr;
v___x_5600_ = l_Lean_Parser_andthen(v___x_5599_, v___y_5594_);
v___x_5601_ = l_Lean_Parser_andthen(v___x_5598_, v___x_5600_);
v___x_5602_ = l_Lean_Parser_andthen(v___x_5597_, v___x_5601_);
v___x_5603_ = l_Lean_Parser_andthen(v___x_5596_, v___x_5602_);
v___x_5604_ = l_Lean_Parser_atomic(v___x_5603_);
v___x_5605_ = l_Lean_Parser_leadingNode(v___y_5593_, v___x_5595_, v___x_5604_);
return v___x_5605_;
}
v___jp_5606_:
{
lean_object* v___x_5608_; lean_object* v___x_5609_; lean_object* v_kind_5610_; lean_object* v___x_5611_; lean_object* v___x_5612_; lean_object* v___x_5613_; lean_object* v___x_5614_; lean_object* v___x_5615_; lean_object* v___x_5616_; lean_object* v___x_5617_; uint8_t v___x_5618_; lean_object* v___x_5619_; lean_object* v___x_5620_; lean_object* v___x_5621_; lean_object* v_nameP_5622_; 
lean_inc(v___y_5607_);
v___x_5608_ = l_Lean_Name_append(v_kind_5589_, v___y_5607_);
v___x_5609_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__8));
v_kind_5610_ = l_Lean_Name_append(v___x_5608_, v___x_5609_);
v___x_5611_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__10));
v___x_5612_ = ((lean_object*)(l_Lean_Parser_mkAntiquot___closed__11));
v___x_5613_ = lean_string_append(v___x_5612_, v_name_5588_);
v___x_5614_ = ((lean_object*)(l_Lean_Parser_chFn___closed__0));
v___x_5615_ = lean_string_append(v___x_5613_, v___x_5614_);
v___x_5616_ = l_Lean_Parser_checkNoWsBefore(v___x_5615_);
v___x_5617_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__12, &l_Lean_Parser_mkAntiquot___closed__12_once, _init_l_Lean_Parser_mkAntiquot___closed__12);
v___x_5618_ = 0;
v___x_5619_ = l_Lean_Parser_nonReservedSymbol(v_name_5588_, v___x_5618_);
v___x_5620_ = l_Lean_Parser_andthen(v___x_5617_, v___x_5619_);
v___x_5621_ = l_Lean_Parser_andthen(v___x_5616_, v___x_5620_);
v_nameP_5622_ = l_Lean_Parser_node(v___x_5611_, v___x_5621_);
if (v_anonymous_5590_ == 0)
{
v___y_5593_ = v_kind_5610_;
v___y_5594_ = v_nameP_5622_;
goto v___jp_5592_;
}
else
{
lean_object* v___x_5623_; lean_object* v___x_5624_; 
v___x_5623_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__13, &l_Lean_Parser_mkAntiquot___closed__13_once, _init_l_Lean_Parser_mkAntiquot___closed__13);
v___x_5624_ = l_Lean_Parser_orelse(v_nameP_5622_, v___x_5623_);
v___y_5593_ = v_kind_5610_;
v___y_5594_ = v___x_5624_;
goto v___jp_5592_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquot___boxed(lean_object* v_name_5627_, lean_object* v_kind_5628_, lean_object* v_anonymous_5629_, lean_object* v_isPseudoKind_5630_){
_start:
{
uint8_t v_anonymous_boxed_5631_; uint8_t v_isPseudoKind_boxed_5632_; lean_object* v_res_5633_; 
v_anonymous_boxed_5631_ = lean_unbox(v_anonymous_5629_);
v_isPseudoKind_boxed_5632_ = lean_unbox(v_isPseudoKind_5630_);
v_res_5633_ = l_Lean_Parser_mkAntiquot(v_name_5627_, v_kind_5628_, v_anonymous_boxed_5631_, v_isPseudoKind_boxed_5632_);
return v_res_5633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1(){
_start:
{
lean_object* v___x_5641_; lean_object* v___x_5642_; lean_object* v___x_5643_; 
v___x_5641_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__1));
v___x_5642_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___closed__2));
v___x_5643_ = l_Lean_addBuiltinDocString(v___x_5641_, v___x_5642_);
return v___x_5643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1___boxed(lean_object* v_a_5644_){
_start:
{
lean_object* v_res_5645_; 
v_res_5645_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
return v_res_5645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn(lean_object* v_antiquotP_5646_, lean_object* v_p_5647_, uint8_t v_isCatAntiquot_5648_, lean_object* v_c_5649_, lean_object* v_s_5650_){
_start:
{
lean_object* v_toInputContext_5651_; lean_object* v_pos_5652_; lean_object* v_inputString_5653_; uint32_t v___x_5654_; uint32_t v___x_5655_; uint8_t v___x_5656_; 
v_toInputContext_5651_ = lean_ctor_get(v_c_5649_, 0);
v_pos_5652_ = lean_ctor_get(v_s_5650_, 2);
v_inputString_5653_ = lean_ctor_get(v_toInputContext_5651_, 0);
v___x_5654_ = lean_string_utf8_get(v_inputString_5653_, v_pos_5652_);
v___x_5655_ = 36;
v___x_5656_ = lean_uint32_dec_eq(v___x_5654_, v___x_5655_);
if (v___x_5656_ == 0)
{
lean_object* v___x_5657_; 
lean_dec_ref(v_antiquotP_5646_);
v___x_5657_ = lean_apply_2(v_p_5647_, v_c_5649_, v_s_5650_);
return v___x_5657_;
}
else
{
if (v_isCatAntiquot_5648_ == 0)
{
uint8_t v___x_5658_; lean_object* v___x_5659_; 
v___x_5658_ = 1;
v___x_5659_ = l_Lean_Parser_orelseFnCore(v_antiquotP_5646_, v_p_5647_, v___x_5658_, v_c_5649_, v_s_5650_);
return v___x_5659_;
}
else
{
uint8_t v___x_5660_; lean_object* v___x_5661_; 
v___x_5660_ = 0;
v___x_5661_ = l_Lean_Parser_orelseFnCore(v_antiquotP_5646_, v_p_5647_, v___x_5660_, v_c_5649_, v_s_5650_);
return v___x_5661_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotFn___boxed(lean_object* v_antiquotP_5662_, lean_object* v_p_5663_, lean_object* v_isCatAntiquot_5664_, lean_object* v_c_5665_, lean_object* v_s_5666_){
_start:
{
uint8_t v_isCatAntiquot_boxed_5667_; lean_object* v_res_5668_; 
v_isCatAntiquot_boxed_5667_ = lean_unbox(v_isCatAntiquot_5664_);
v_res_5668_ = l_Lean_Parser_withAntiquotFn(v_antiquotP_5662_, v_p_5663_, v_isCatAntiquot_boxed_5667_, v_c_5665_, v_s_5666_);
return v_res_5668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquot(lean_object* v_antiquotP_5669_, lean_object* v_p_5670_){
_start:
{
lean_object* v_info_5671_; lean_object* v_fn_5672_; lean_object* v_info_5673_; lean_object* v_fn_5674_; lean_object* v___x_5676_; uint8_t v_isShared_5677_; uint8_t v_isSharedCheck_5685_; 
v_info_5671_ = lean_ctor_get(v_antiquotP_5669_, 0);
lean_inc_ref(v_info_5671_);
v_fn_5672_ = lean_ctor_get(v_antiquotP_5669_, 1);
lean_inc_ref(v_fn_5672_);
lean_dec_ref(v_antiquotP_5669_);
v_info_5673_ = lean_ctor_get(v_p_5670_, 0);
v_fn_5674_ = lean_ctor_get(v_p_5670_, 1);
v_isSharedCheck_5685_ = !lean_is_exclusive(v_p_5670_);
if (v_isSharedCheck_5685_ == 0)
{
v___x_5676_ = v_p_5670_;
v_isShared_5677_ = v_isSharedCheck_5685_;
goto v_resetjp_5675_;
}
else
{
lean_inc(v_fn_5674_);
lean_inc(v_info_5673_);
lean_dec(v_p_5670_);
v___x_5676_ = lean_box(0);
v_isShared_5677_ = v_isSharedCheck_5685_;
goto v_resetjp_5675_;
}
v_resetjp_5675_:
{
lean_object* v___x_5678_; uint8_t v___x_5679_; lean_object* v___x_5680_; lean_object* v___x_5681_; lean_object* v___x_5683_; 
v___x_5678_ = l_Lean_Parser_orelseInfo(v_info_5671_, v_info_5673_);
v___x_5679_ = 0;
v___x_5680_ = lean_box(v___x_5679_);
v___x_5681_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotFn___boxed), 5, 3);
lean_closure_set(v___x_5681_, 0, v_fn_5672_);
lean_closure_set(v___x_5681_, 1, v_fn_5674_);
lean_closure_set(v___x_5681_, 2, v___x_5680_);
if (v_isShared_5677_ == 0)
{
lean_ctor_set(v___x_5676_, 1, v___x_5681_);
lean_ctor_set(v___x_5676_, 0, v___x_5678_);
v___x_5683_ = v___x_5676_;
goto v_reusejp_5682_;
}
else
{
lean_object* v_reuseFailAlloc_5684_; 
v_reuseFailAlloc_5684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5684_, 0, v___x_5678_);
lean_ctor_set(v_reuseFailAlloc_5684_, 1, v___x_5681_);
v___x_5683_ = v_reuseFailAlloc_5684_;
goto v_reusejp_5682_;
}
v_reusejp_5682_:
{
return v___x_5683_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1(){
_start:
{
lean_object* v___x_5693_; lean_object* v___x_5694_; lean_object* v___x_5695_; 
v___x_5693_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__1));
v___x_5694_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___closed__2));
v___x_5695_ = l_Lean_addBuiltinDocString(v___x_5693_, v___x_5694_);
return v___x_5695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1___boxed(lean_object* v_a_5696_){
_start:
{
lean_object* v_res_5697_; 
v_res_5697_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
return v_res_5697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withoutInfo(lean_object* v_p_5698_){
_start:
{
lean_object* v_fn_5699_; lean_object* v___x_5701_; uint8_t v_isShared_5702_; uint8_t v_isSharedCheck_5707_; 
v_fn_5699_ = lean_ctor_get(v_p_5698_, 1);
v_isSharedCheck_5707_ = !lean_is_exclusive(v_p_5698_);
if (v_isSharedCheck_5707_ == 0)
{
lean_object* v_unused_5708_; 
v_unused_5708_ = lean_ctor_get(v_p_5698_, 0);
lean_dec(v_unused_5708_);
v___x_5701_ = v_p_5698_;
v_isShared_5702_ = v_isSharedCheck_5707_;
goto v_resetjp_5700_;
}
else
{
lean_inc(v_fn_5699_);
lean_dec(v_p_5698_);
v___x_5701_ = lean_box(0);
v_isShared_5702_ = v_isSharedCheck_5707_;
goto v_resetjp_5700_;
}
v_resetjp_5700_:
{
lean_object* v___x_5703_; lean_object* v___x_5705_; 
v___x_5703_ = ((lean_object*)(l_Lean_Parser_errorAtSavedPos___closed__0));
if (v_isShared_5702_ == 0)
{
lean_ctor_set(v___x_5701_, 0, v___x_5703_);
v___x_5705_ = v___x_5701_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v___x_5703_);
lean_ctor_set(v_reuseFailAlloc_5706_, 1, v_fn_5699_);
v___x_5705_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
return v___x_5705_;
}
}
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice___closed__2(void){
_start:
{
lean_object* v___x_5712_; lean_object* v___x_5713_; 
v___x_5712_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__1));
v___x_5713_ = l_Lean_Parser_symbol(v___x_5712_);
return v___x_5713_;
}
}
static lean_object* _init_l_Lean_Parser_mkAntiquotSplice___closed__3(void){
_start:
{
lean_object* v___x_5714_; lean_object* v___x_5715_; 
v___x_5714_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_dbgTraceStateFn_spec__0___closed__2));
v___x_5715_ = l_Lean_Parser_symbol(v___x_5714_);
return v___x_5715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkAntiquotSplice(lean_object* v_kind_5716_, lean_object* v_p_5717_, lean_object* v_suffix_5718_){
_start:
{
lean_object* v___x_5719_; lean_object* v_kind_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; lean_object* v___x_5728_; lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; lean_object* v___x_5733_; lean_object* v___x_5734_; lean_object* v___x_5735_; lean_object* v___x_5736_; 
v___x_5719_ = ((lean_object*)(l_Lean_Parser_mkAntiquotSplice___closed__1));
v_kind_5720_ = l_Lean_Name_append(v_kind_5716_, v___x_5719_);
v___x_5721_ = l_Lean_Parser_maxPrec;
v___x_5722_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__1, &l_Lean_Parser_mkAntiquot___closed__1_once, _init_l_Lean_Parser_mkAntiquot___closed__1);
v___x_5723_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__4, &l_Lean_Parser_mkAntiquot___closed__4_once, _init_l_Lean_Parser_mkAntiquot___closed__4);
v___x_5724_ = lean_obj_once(&l_Lean_Parser_mkAntiquot___closed__6, &l_Lean_Parser_mkAntiquot___closed__6_once, _init_l_Lean_Parser_mkAntiquot___closed__6);
v___x_5725_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice___closed__2, &l_Lean_Parser_mkAntiquotSplice___closed__2_once, _init_l_Lean_Parser_mkAntiquotSplice___closed__2);
v___x_5726_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_5727_ = l_Lean_Parser_node(v___x_5726_, v_p_5717_);
v___x_5728_ = lean_obj_once(&l_Lean_Parser_mkAntiquotSplice___closed__3, &l_Lean_Parser_mkAntiquotSplice___closed__3_once, _init_l_Lean_Parser_mkAntiquotSplice___closed__3);
v___x_5729_ = l_Lean_Parser_andthen(v___x_5728_, v_suffix_5718_);
v___x_5730_ = l_Lean_Parser_andthen(v___x_5727_, v___x_5729_);
v___x_5731_ = l_Lean_Parser_andthen(v___x_5725_, v___x_5730_);
v___x_5732_ = l_Lean_Parser_andthen(v___x_5724_, v___x_5731_);
v___x_5733_ = l_Lean_Parser_andthen(v___x_5723_, v___x_5732_);
v___x_5734_ = l_Lean_Parser_andthen(v___x_5722_, v___x_5733_);
v___x_5735_ = l_Lean_Parser_atomic(v___x_5734_);
v___x_5736_ = l_Lean_Parser_leadingNode(v_kind_5720_, v___x_5721_, v___x_5735_);
return v___x_5736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1(){
_start:
{
lean_object* v___x_5744_; lean_object* v___x_5745_; lean_object* v___x_5746_; 
v___x_5744_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__1));
v___x_5745_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___closed__2));
v___x_5746_ = l_Lean_addBuiltinDocString(v___x_5744_, v___x_5745_);
return v___x_5746_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1___boxed(lean_object* v_a_5747_){
_start:
{
lean_object* v_res_5748_; 
v_res_5748_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
return v_res_5748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(lean_object* v_kind_5752_, lean_object* v_suffix_5753_, lean_object* v_c_5754_, lean_object* v_s_5755_){
_start:
{
lean_object* v_pos_5756_; lean_object* v_iniSz_5757_; lean_object* v_s_5758_; lean_object* v_stxStack_5759_; lean_object* v_errorMsg_5760_; lean_object* v___x_5761_; uint8_t v___x_5762_; 
v_pos_5756_ = lean_ctor_get(v_s_5755_, 2);
lean_inc(v_pos_5756_);
v_iniSz_5757_ = l_Lean_Parser_ParserState_stackSize(v_s_5755_);
v_s_5758_ = lean_apply_2(v_suffix_5753_, v_c_5754_, v_s_5755_);
v_stxStack_5759_ = lean_ctor_get(v_s_5758_, 0);
lean_inc_ref(v_stxStack_5759_);
v_errorMsg_5760_ = lean_ctor_get(v_s_5758_, 4);
lean_inc(v_errorMsg_5760_);
v___x_5761_ = lean_box(0);
v___x_5762_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5760_, v___x_5761_);
if (v___x_5762_ == 0)
{
lean_object* v___x_5763_; 
lean_dec_ref(v_stxStack_5759_);
lean_dec(v_kind_5752_);
v___x_5763_ = l_Lean_Parser_ParserState_restore(v_s_5758_, v_iniSz_5757_, v_pos_5756_);
lean_dec(v_iniSz_5757_);
return v___x_5763_;
}
else
{
lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; lean_object* v___x_5767_; lean_object* v___x_5768_; lean_object* v___x_5769_; 
lean_dec(v_iniSz_5757_);
lean_dec(v_pos_5756_);
v___x_5764_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn___closed__1));
v___x_5765_ = l_Lean_Name_append(v_kind_5752_, v___x_5764_);
v___x_5766_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_5759_);
lean_dec_ref(v_stxStack_5759_);
v___x_5767_ = lean_unsigned_to_nat(2u);
v___x_5768_ = lean_nat_sub(v___x_5766_, v___x_5767_);
lean_dec(v___x_5766_);
v___x_5769_ = l_Lean_Parser_ParserState_mkNode(v_s_5758_, v___x_5765_, v___x_5768_);
lean_dec(v___x_5768_);
return v___x_5769_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice___lam__0(lean_object* v_fn_5770_, lean_object* v_kind_5771_, lean_object* v_fn_5772_, lean_object* v_c_5773_, lean_object* v_s_5774_){
_start:
{
lean_object* v_s_5775_; lean_object* v_stxStack_5776_; lean_object* v_errorMsg_5777_; lean_object* v___x_5778_; uint8_t v___x_5779_; 
lean_inc_ref(v_c_5773_);
v_s_5775_ = lean_apply_2(v_fn_5770_, v_c_5773_, v_s_5774_);
v_stxStack_5776_ = lean_ctor_get(v_s_5775_, 0);
lean_inc_ref(v_stxStack_5776_);
v_errorMsg_5777_ = lean_ctor_get(v_s_5775_, 4);
lean_inc(v_errorMsg_5777_);
v___x_5778_ = lean_box(0);
v___x_5779_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5777_, v___x_5778_);
if (v___x_5779_ == 0)
{
lean_dec_ref(v_stxStack_5776_);
lean_dec_ref(v_c_5773_);
lean_dec_ref(v_fn_5772_);
lean_dec(v_kind_5771_);
return v_s_5775_;
}
else
{
lean_object* v___x_5780_; uint8_t v___x_5781_; 
v___x_5780_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5776_);
lean_dec_ref(v_stxStack_5776_);
v___x_5781_ = l_Lean_Syntax_isAntiquots(v___x_5780_);
if (v___x_5781_ == 0)
{
lean_dec_ref(v_c_5773_);
lean_dec_ref(v_fn_5772_);
lean_dec(v_kind_5771_);
return v_s_5775_;
}
else
{
lean_object* v___x_5782_; 
v___x_5782_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSpliceFn(v_kind_5771_, v_fn_5772_, v_c_5773_, v_s_5775_);
return v___x_5782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSuffixSplice(lean_object* v_kind_5783_, lean_object* v_p_5784_, lean_object* v_suffix_5785_){
_start:
{
lean_object* v_info_5786_; lean_object* v_fn_5787_; lean_object* v_info_5788_; lean_object* v_fn_5789_; lean_object* v___x_5791_; uint8_t v_isShared_5792_; uint8_t v_isSharedCheck_5798_; 
v_info_5786_ = lean_ctor_get(v_p_5784_, 0);
lean_inc_ref(v_info_5786_);
v_fn_5787_ = lean_ctor_get(v_p_5784_, 1);
lean_inc_ref(v_fn_5787_);
lean_dec_ref(v_p_5784_);
v_info_5788_ = lean_ctor_get(v_suffix_5785_, 0);
v_fn_5789_ = lean_ctor_get(v_suffix_5785_, 1);
v_isSharedCheck_5798_ = !lean_is_exclusive(v_suffix_5785_);
if (v_isSharedCheck_5798_ == 0)
{
v___x_5791_ = v_suffix_5785_;
v_isShared_5792_ = v_isSharedCheck_5798_;
goto v_resetjp_5790_;
}
else
{
lean_inc(v_fn_5789_);
lean_inc(v_info_5788_);
lean_dec(v_suffix_5785_);
v___x_5791_ = lean_box(0);
v_isShared_5792_ = v_isSharedCheck_5798_;
goto v_resetjp_5790_;
}
v_resetjp_5790_:
{
lean_object* v___f_5793_; lean_object* v___x_5794_; lean_object* v___x_5796_; 
v___f_5793_ = lean_alloc_closure((void*)(l_Lean_Parser_withAntiquotSuffixSplice___lam__0), 5, 3);
lean_closure_set(v___f_5793_, 0, v_fn_5787_);
lean_closure_set(v___f_5793_, 1, v_kind_5783_);
lean_closure_set(v___f_5793_, 2, v_fn_5789_);
v___x_5794_ = l_Lean_Parser_andthenInfo(v_info_5786_, v_info_5788_);
if (v_isShared_5792_ == 0)
{
lean_ctor_set(v___x_5791_, 1, v___f_5793_);
lean_ctor_set(v___x_5791_, 0, v___x_5794_);
v___x_5796_ = v___x_5791_;
goto v_reusejp_5795_;
}
else
{
lean_object* v_reuseFailAlloc_5797_; 
v_reuseFailAlloc_5797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5797_, 0, v___x_5794_);
lean_ctor_set(v_reuseFailAlloc_5797_, 1, v___f_5793_);
v___x_5796_ = v_reuseFailAlloc_5797_;
goto v_reusejp_5795_;
}
v_reusejp_5795_:
{
return v___x_5796_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1(){
_start:
{
lean_object* v___x_5806_; lean_object* v___x_5807_; lean_object* v___x_5808_; 
v___x_5806_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__1));
v___x_5807_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___closed__2));
v___x_5808_ = l_Lean_addBuiltinDocString(v___x_5806_, v___x_5807_);
return v___x_5808_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1___boxed(lean_object* v_a_5809_){
_start:
{
lean_object* v_res_5810_; 
v_res_5810_ = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
return v_res_5810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object* v_kind_5811_, lean_object* v_p_5812_, lean_object* v_suffix_5813_){
_start:
{
lean_object* v___x_5814_; lean_object* v___x_5815_; lean_object* v___x_5816_; lean_object* v___x_5817_; 
lean_inc_ref(v_p_5812_);
v___x_5814_ = l_Lean_Parser_withoutInfo(v_p_5812_);
lean_inc_ref(v_suffix_5813_);
lean_inc(v_kind_5811_);
v___x_5815_ = l_Lean_Parser_mkAntiquotSplice(v_kind_5811_, v___x_5814_, v_suffix_5813_);
v___x_5816_ = l_Lean_Parser_withAntiquotSuffixSplice(v_kind_5811_, v_p_5812_, v_suffix_5813_);
v___x_5817_ = l_Lean_Parser_withAntiquot(v___x_5815_, v___x_5816_);
return v___x_5817_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object* v_name_5818_, lean_object* v_kind_5819_, lean_object* v_p_5820_, uint8_t v_anonymous_5821_){
_start:
{
uint8_t v___x_5822_; lean_object* v___x_5823_; lean_object* v___x_5824_; lean_object* v___x_5825_; 
v___x_5822_ = 0;
lean_inc(v_kind_5819_);
v___x_5823_ = l_Lean_Parser_mkAntiquot(v_name_5818_, v_kind_5819_, v_anonymous_5821_, v___x_5822_);
v___x_5824_ = l_Lean_Parser_node(v_kind_5819_, v_p_5820_);
v___x_5825_ = l_Lean_Parser_withAntiquot(v___x_5823_, v___x_5824_);
return v___x_5825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_nodeWithAntiquot___boxed(lean_object* v_name_5826_, lean_object* v_kind_5827_, lean_object* v_p_5828_, lean_object* v_anonymous_5829_){
_start:
{
uint8_t v_anonymous_boxed_5830_; lean_object* v_res_5831_; 
v_anonymous_boxed_5830_ = lean_unbox(v_anonymous_5829_);
v_res_5831_ = l_Lean_Parser_nodeWithAntiquot(v_name_5826_, v_kind_5827_, v_p_5828_, v_anonymous_boxed_5830_);
return v_res_5831_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepByElemParser(lean_object* v_p_5835_, lean_object* v_sep_5836_){
_start:
{
lean_object* v___x_5837_; lean_object* v___x_5838_; lean_object* v___x_5839_; lean_object* v___x_5840_; lean_object* v_str_5841_; lean_object* v_startInclusive_5842_; lean_object* v_endExclusive_5843_; lean_object* v___x_5844_; lean_object* v___x_5845_; lean_object* v___x_5846_; lean_object* v___x_5847_; lean_object* v___x_5848_; lean_object* v___x_5849_; 
v___x_5837_ = lean_unsigned_to_nat(0u);
v___x_5838_ = lean_string_utf8_byte_size(v_sep_5836_);
v___x_5839_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_5839_, 0, v_sep_5836_);
lean_ctor_set(v___x_5839_, 1, v___x_5837_);
lean_ctor_set(v___x_5839_, 2, v___x_5838_);
v___x_5840_ = l_String_Slice_trimAscii(v___x_5839_);
v_str_5841_ = lean_ctor_get(v___x_5840_, 0);
lean_inc_ref(v_str_5841_);
v_startInclusive_5842_ = lean_ctor_get(v___x_5840_, 1);
lean_inc(v_startInclusive_5842_);
v_endExclusive_5843_ = lean_ctor_get(v___x_5840_, 2);
lean_inc(v_endExclusive_5843_);
lean_dec_ref(v___x_5840_);
v___x_5844_ = ((lean_object*)(l_Lean_Parser_sepByElemParser___closed__0));
v___x_5845_ = lean_string_utf8_extract(v_str_5841_, v_startInclusive_5842_, v_endExclusive_5843_);
lean_dec(v_endExclusive_5843_);
lean_dec(v_startInclusive_5842_);
lean_dec_ref(v_str_5841_);
v___x_5846_ = ((lean_object*)(l_Lean_Parser_sepByElemParser___closed__1));
v___x_5847_ = lean_string_append(v___x_5845_, v___x_5846_);
v___x_5848_ = l_Lean_Parser_symbol(v___x_5847_);
v___x_5849_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_5844_, v_p_5835_, v___x_5848_);
return v___x_5849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy(lean_object* v_p_5850_, lean_object* v_sep_5851_, lean_object* v_psep_5852_, uint8_t v_allowTrailingSep_5853_){
_start:
{
lean_object* v___x_5854_; lean_object* v___x_5855_; 
v___x_5854_ = l_Lean_Parser_sepByElemParser(v_p_5850_, v_sep_5851_);
v___x_5855_ = l_Lean_Parser_sepByNoAntiquot(v___x_5854_, v_psep_5852_, v_allowTrailingSep_5853_);
return v___x_5855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy___boxed(lean_object* v_p_5856_, lean_object* v_sep_5857_, lean_object* v_psep_5858_, lean_object* v_allowTrailingSep_5859_){
_start:
{
uint8_t v_allowTrailingSep_boxed_5860_; lean_object* v_res_5861_; 
v_allowTrailingSep_boxed_5860_ = lean_unbox(v_allowTrailingSep_5859_);
v_res_5861_ = l_Lean_Parser_sepBy(v_p_5856_, v_sep_5857_, v_psep_5858_, v_allowTrailingSep_boxed_5860_);
return v_res_5861_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1(lean_object* v_p_5862_, lean_object* v_sep_5863_, lean_object* v_psep_5864_, uint8_t v_allowTrailingSep_5865_){
_start:
{
lean_object* v___x_5866_; lean_object* v___x_5867_; 
v___x_5866_ = l_Lean_Parser_sepByElemParser(v_p_5862_, v_sep_5863_);
v___x_5867_ = l_Lean_Parser_sepBy1NoAntiquot(v___x_5866_, v_psep_5864_, v_allowTrailingSep_5865_);
return v___x_5867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_sepBy1___boxed(lean_object* v_p_5868_, lean_object* v_sep_5869_, lean_object* v_psep_5870_, lean_object* v_allowTrailingSep_5871_){
_start:
{
uint8_t v_allowTrailingSep_boxed_5872_; lean_object* v_res_5873_; 
v_allowTrailingSep_boxed_5872_ = lean_unbox(v_allowTrailingSep_5871_);
v_res_5873_ = l_Lean_Parser_sepBy1(v_p_5868_, v_sep_5869_, v_psep_5870_, v_allowTrailingSep_boxed_5872_);
return v_res_5873_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(lean_object* v_s_5874_, lean_object* v_iniSz_5875_){
_start:
{
lean_object* v___x_5876_; lean_object* v___x_5877_; lean_object* v___x_5878_; uint8_t v___x_5879_; 
v___x_5876_ = l_Lean_Parser_ParserState_stackSize(v_s_5874_);
v___x_5877_ = lean_unsigned_to_nat(1u);
v___x_5878_ = lean_nat_add(v_iniSz_5875_, v___x_5877_);
v___x_5879_ = lean_nat_dec_eq(v___x_5876_, v___x_5878_);
lean_dec(v___x_5878_);
lean_dec(v___x_5876_);
if (v___x_5879_ == 0)
{
lean_object* v___x_5880_; lean_object* v___x_5881_; 
v___x_5880_ = ((lean_object*)(l_Lean_Parser_optionalFn___lam__0___closed__1));
v___x_5881_ = l_Lean_Parser_ParserState_mkNode(v_s_5874_, v___x_5880_, v_iniSz_5875_);
return v___x_5881_;
}
else
{
return v_s_5874_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult___boxed(lean_object* v_s_5882_, lean_object* v_iniSz_5883_){
_start:
{
lean_object* v_res_5884_; 
v_res_5884_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(v_s_5882_, v_iniSz_5883_);
lean_dec(v_iniSz_5883_);
return v_res_5884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux(lean_object* v_kind_5885_, lean_object* v_tables_5886_, uint8_t v_behavior_5887_, lean_object* v_c_5888_, lean_object* v_s_5889_){
_start:
{
lean_object* v_leadingTable_5890_; lean_object* v_leadingParsers_5891_; lean_object* v_iniSz_5892_; lean_object* v___x_5893_; lean_object* v_fst_5894_; lean_object* v_snd_5895_; lean_object* v___x_5897_; uint8_t v_isShared_5898_; uint8_t v_isSharedCheck_5917_; 
v_leadingTable_5890_ = lean_ctor_get(v_tables_5886_, 0);
lean_inc(v_leadingTable_5890_);
v_leadingParsers_5891_ = lean_ctor_get(v_tables_5886_, 1);
lean_inc(v_leadingParsers_5891_);
lean_dec_ref(v_tables_5886_);
v_iniSz_5892_ = l_Lean_Parser_ParserState_stackSize(v_s_5889_);
lean_inc_ref(v_c_5888_);
v___x_5893_ = l_Lean_Parser_indexed___redArg(v_leadingTable_5890_, v_c_5888_, v_s_5889_, v_behavior_5887_);
lean_dec(v_leadingTable_5890_);
v_fst_5894_ = lean_ctor_get(v___x_5893_, 0);
v_snd_5895_ = lean_ctor_get(v___x_5893_, 1);
v_isSharedCheck_5917_ = !lean_is_exclusive(v___x_5893_);
if (v_isSharedCheck_5917_ == 0)
{
v___x_5897_ = v___x_5893_;
v_isShared_5898_ = v_isSharedCheck_5917_;
goto v_resetjp_5896_;
}
else
{
lean_inc(v_snd_5895_);
lean_inc(v_fst_5894_);
lean_dec(v___x_5893_);
v___x_5897_ = lean_box(0);
v_isShared_5898_ = v_isSharedCheck_5917_;
goto v_resetjp_5896_;
}
v_resetjp_5896_:
{
lean_object* v_errorMsg_5899_; lean_object* v___x_5900_; uint8_t v___x_5901_; 
v_errorMsg_5899_ = lean_ctor_get(v_fst_5894_, 4);
v___x_5900_ = lean_box(0);
lean_inc(v_errorMsg_5899_);
v___x_5901_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5899_, v___x_5900_);
if (v___x_5901_ == 0)
{
lean_del_object(v___x_5897_);
lean_dec(v_snd_5895_);
lean_dec(v_iniSz_5892_);
lean_dec(v_leadingParsers_5891_);
lean_dec_ref(v_c_5888_);
lean_dec(v_kind_5885_);
return v_fst_5894_;
}
else
{
lean_object* v_ps_5902_; uint8_t v___x_5903_; 
v_ps_5902_ = l_List_appendTR___redArg(v_leadingParsers_5891_, v_snd_5895_);
v___x_5903_ = l_List_isEmpty___redArg(v_ps_5902_);
if (v___x_5903_ == 0)
{
lean_object* v_s_5904_; lean_object* v___x_5905_; 
lean_del_object(v___x_5897_);
lean_dec(v_kind_5885_);
v_s_5904_ = l_Lean_Parser_longestMatchFn(v___x_5900_, v_ps_5902_, v_c_5888_, v_fst_5894_);
v___x_5905_ = l___private_Lean_Parser_Basic_0__Lean_Parser_mkResult(v_s_5904_, v_iniSz_5892_);
lean_dec(v_iniSz_5892_);
return v___x_5905_;
}
else
{
lean_object* v___x_5906_; lean_object* v___x_5907_; lean_object* v___x_5909_; 
lean_dec(v_ps_5902_);
lean_dec(v_iniSz_5892_);
v___x_5906_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_5885_, v___x_5903_);
v___x_5907_ = lean_box(0);
lean_inc_ref(v___x_5906_);
if (v_isShared_5898_ == 0)
{
lean_ctor_set_tag(v___x_5897_, 1);
lean_ctor_set(v___x_5897_, 1, v___x_5907_);
lean_ctor_set(v___x_5897_, 0, v___x_5906_);
v___x_5909_ = v___x_5897_;
goto v_reusejp_5908_;
}
else
{
lean_object* v_reuseFailAlloc_5916_; 
v_reuseFailAlloc_5916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5916_, 0, v___x_5906_);
lean_ctor_set(v_reuseFailAlloc_5916_, 1, v___x_5907_);
v___x_5909_ = v_reuseFailAlloc_5916_;
goto v_reusejp_5908_;
}
v_reusejp_5908_:
{
lean_object* v_s_5910_; lean_object* v_errorMsg_5914_; uint8_t v___x_5915_; 
v_s_5910_ = l_Lean_Parser_tokenFn(v___x_5909_, v_c_5888_, v_fst_5894_);
v_errorMsg_5914_ = lean_ctor_get(v_s_5910_, 4);
lean_inc(v_errorMsg_5914_);
v___x_5915_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5914_, v___x_5900_);
if (v___x_5915_ == 0)
{
if (v___x_5903_ == 0)
{
goto v___jp_5911_;
}
else
{
lean_dec_ref(v___x_5906_);
return v_s_5910_;
}
}
else
{
goto v___jp_5911_;
}
v___jp_5911_:
{
lean_object* v___x_5912_; lean_object* v___x_5913_; 
v___x_5912_ = lean_unsigned_to_nat(0u);
v___x_5913_ = l_Lean_Parser_ParserState_mkUnexpectedTokenError(v_s_5910_, v___x_5906_, v___x_5912_);
return v___x_5913_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParserAux___boxed(lean_object* v_kind_5918_, lean_object* v_tables_5919_, lean_object* v_behavior_5920_, lean_object* v_c_5921_, lean_object* v_s_5922_){
_start:
{
uint8_t v_behavior_boxed_5923_; lean_object* v_res_5924_; 
v_behavior_boxed_5923_ = lean_unbox(v_behavior_5920_);
v_res_5924_ = l_Lean_Parser_leadingParserAux(v_kind_5918_, v_tables_5919_, v_behavior_boxed_5923_, v_c_5921_, v_s_5922_);
return v_res_5924_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser(lean_object* v_kind_5925_, lean_object* v_tables_5926_, uint8_t v_behavior_5927_, lean_object* v_antiquotParser_5928_, lean_object* v_a_5929_, lean_object* v_a_5930_){
_start:
{
lean_object* v___x_5931_; lean_object* v___x_5932_; uint8_t v___x_5933_; lean_object* v___x_5934_; 
v___x_5931_ = lean_box(v_behavior_5927_);
v___x_5932_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingParserAux___boxed), 5, 3);
lean_closure_set(v___x_5932_, 0, v_kind_5925_);
lean_closure_set(v___x_5932_, 1, v_tables_5926_);
lean_closure_set(v___x_5932_, 2, v___x_5931_);
v___x_5933_ = 1;
v___x_5934_ = l_Lean_Parser_withAntiquotFn(v_antiquotParser_5928_, v___x_5932_, v___x_5933_, v_a_5929_, v_a_5930_);
return v___x_5934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_leadingParser___boxed(lean_object* v_kind_5935_, lean_object* v_tables_5936_, lean_object* v_behavior_5937_, lean_object* v_antiquotParser_5938_, lean_object* v_a_5939_, lean_object* v_a_5940_){
_start:
{
uint8_t v_behavior_boxed_5941_; lean_object* v_res_5942_; 
v_behavior_boxed_5941_ = lean_unbox(v_behavior_5937_);
v_res_5942_ = l_Lean_Parser_leadingParser(v_kind_5935_, v_tables_5936_, v_behavior_boxed_5941_, v_antiquotParser_5938_, v_a_5939_, v_a_5940_);
return v_res_5942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoopStep(lean_object* v_tables_5943_, lean_object* v_left_5944_, lean_object* v_ps_5945_, lean_object* v_c_5946_, lean_object* v_s_5947_){
_start:
{
lean_object* v_trailingParsers_5948_; lean_object* v___x_5949_; lean_object* v___x_5950_; lean_object* v___x_5951_; 
v_trailingParsers_5948_ = lean_ctor_get(v_tables_5943_, 3);
lean_inc(v_trailingParsers_5948_);
lean_dec_ref(v_tables_5943_);
v___x_5949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5949_, 0, v_left_5944_);
v___x_5950_ = l_List_appendTR___redArg(v_ps_5945_, v_trailingParsers_5948_);
v___x_5951_ = l_Lean_Parser_longestMatchFn(v___x_5949_, v___x_5950_, v_c_5946_, v_s_5947_);
return v___x_5951_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_trailingLoop(lean_object* v_tables_5958_, lean_object* v_c_5959_, lean_object* v_s_5960_){
_start:
{
lean_object* v_pos_5961_; lean_object* v_trailingTable_5962_; lean_object* v_trailingParsers_5963_; lean_object* v_iniSz_5964_; uint8_t v___x_5965_; lean_object* v___x_5966_; lean_object* v_fst_5967_; lean_object* v_snd_5968_; lean_object* v_stxStack_5969_; lean_object* v_errorMsg_5970_; lean_object* v___x_5971_; uint8_t v___x_5972_; uint8_t v___y_5974_; 
v_pos_5961_ = lean_ctor_get(v_s_5960_, 2);
lean_inc(v_pos_5961_);
v_trailingTable_5962_ = lean_ctor_get(v_tables_5958_, 2);
v_trailingParsers_5963_ = lean_ctor_get(v_tables_5958_, 3);
v_iniSz_5964_ = l_Lean_Parser_ParserState_stackSize(v_s_5960_);
v___x_5965_ = 0;
lean_inc_ref(v_c_5959_);
v___x_5966_ = l_Lean_Parser_indexed___redArg(v_trailingTable_5962_, v_c_5959_, v_s_5960_, v___x_5965_);
v_fst_5967_ = lean_ctor_get(v___x_5966_, 0);
lean_inc(v_fst_5967_);
v_snd_5968_ = lean_ctor_get(v___x_5966_, 1);
lean_inc(v_snd_5968_);
lean_dec_ref(v___x_5966_);
v_stxStack_5969_ = lean_ctor_get(v_fst_5967_, 0);
v_errorMsg_5970_ = lean_ctor_get(v_fst_5967_, 4);
v___x_5971_ = lean_box(0);
lean_inc(v_errorMsg_5970_);
v___x_5972_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5970_, v___x_5971_);
if (v___x_5972_ == 0)
{
lean_object* v___x_6037_; 
lean_dec(v_snd_5968_);
lean_dec_ref(v_c_5959_);
lean_dec_ref(v_tables_5958_);
v___x_6037_ = l_Lean_Parser_ParserState_restore(v_fst_5967_, v_iniSz_5964_, v_pos_5961_);
lean_dec(v_iniSz_5964_);
return v___x_6037_;
}
else
{
uint8_t v___x_6038_; 
v___x_6038_ = l_List_isEmpty___redArg(v_snd_5968_);
if (v___x_6038_ == 0)
{
v___y_5974_ = v___x_6038_;
goto v___jp_5973_;
}
else
{
uint8_t v___x_6039_; 
v___x_6039_ = l_List_isEmpty___redArg(v_trailingParsers_5963_);
v___y_5974_ = v___x_6039_;
goto v___jp_5973_;
}
}
v___jp_5973_:
{
if (v___y_5974_ == 0)
{
lean_object* v_left_5975_; lean_object* v_s_5976_; lean_object* v_s_5977_; lean_object* v_stxStack_5978_; lean_object* v_lhsPrec_5979_; lean_object* v_pos_5980_; lean_object* v_cache_5981_; lean_object* v_errorMsg_5982_; lean_object* v_recoveredErrors_5983_; lean_object* v_traces_5984_; uint8_t v___x_5985_; 
v_left_5975_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_5969_);
v_s_5976_ = l_Lean_Parser_ParserState_popSyntax(v_fst_5967_);
lean_inc_ref(v_c_5959_);
lean_inc(v_left_5975_);
lean_inc_ref(v_tables_5958_);
v_s_5977_ = l_Lean_Parser_trailingLoopStep(v_tables_5958_, v_left_5975_, v_snd_5968_, v_c_5959_, v_s_5976_);
v_stxStack_5978_ = lean_ctor_get(v_s_5977_, 0);
lean_inc_ref(v_stxStack_5978_);
v_lhsPrec_5979_ = lean_ctor_get(v_s_5977_, 1);
lean_inc(v_lhsPrec_5979_);
v_pos_5980_ = lean_ctor_get(v_s_5977_, 2);
lean_inc(v_pos_5980_);
v_cache_5981_ = lean_ctor_get(v_s_5977_, 3);
lean_inc_ref(v_cache_5981_);
v_errorMsg_5982_ = lean_ctor_get(v_s_5977_, 4);
lean_inc_n(v_errorMsg_5982_, 2);
v_recoveredErrors_5983_ = lean_ctor_get(v_s_5977_, 5);
lean_inc_ref(v_recoveredErrors_5983_);
v_traces_5984_ = lean_ctor_get(v_s_5977_, 6);
lean_inc_ref(v_traces_5984_);
v___x_5985_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_5982_, v___x_5971_);
if (v___x_5985_ == 0)
{
uint8_t v___x_5986_; 
lean_dec_ref(v_c_5959_);
lean_dec_ref(v_tables_5958_);
v___x_5986_ = lean_nat_dec_eq(v_pos_5980_, v_pos_5961_);
if (v___x_5986_ == 0)
{
lean_object* v___x_5987_; lean_object* v___x_5988_; uint8_t v___x_5989_; 
lean_dec(v_left_5975_);
lean_dec(v_iniSz_5964_);
lean_dec(v_pos_5961_);
v___x_5987_ = lean_array_get_size(v_traces_5984_);
v___x_5988_ = lean_unsigned_to_nat(0u);
v___x_5989_ = lean_nat_dec_eq(v___x_5987_, v___x_5988_);
if (v___x_5989_ == 0)
{
lean_object* v___x_5991_; uint8_t v_isShared_5992_; uint8_t v_isSharedCheck_5998_; 
v_isSharedCheck_5998_ = !lean_is_exclusive(v_s_5977_);
if (v_isSharedCheck_5998_ == 0)
{
lean_object* v_unused_5999_; lean_object* v_unused_6000_; lean_object* v_unused_6001_; lean_object* v_unused_6002_; lean_object* v_unused_6003_; lean_object* v_unused_6004_; lean_object* v_unused_6005_; 
v_unused_5999_ = lean_ctor_get(v_s_5977_, 6);
lean_dec(v_unused_5999_);
v_unused_6000_ = lean_ctor_get(v_s_5977_, 5);
lean_dec(v_unused_6000_);
v_unused_6001_ = lean_ctor_get(v_s_5977_, 4);
lean_dec(v_unused_6001_);
v_unused_6002_ = lean_ctor_get(v_s_5977_, 3);
lean_dec(v_unused_6002_);
v_unused_6003_ = lean_ctor_get(v_s_5977_, 2);
lean_dec(v_unused_6003_);
v_unused_6004_ = lean_ctor_get(v_s_5977_, 1);
lean_dec(v_unused_6004_);
v_unused_6005_ = lean_ctor_get(v_s_5977_, 0);
lean_dec(v_unused_6005_);
v___x_5991_ = v_s_5977_;
v_isShared_5992_ = v_isSharedCheck_5998_;
goto v_resetjp_5990_;
}
else
{
lean_dec(v_s_5977_);
v___x_5991_ = lean_box(0);
v_isShared_5992_ = v_isSharedCheck_5998_;
goto v_resetjp_5990_;
}
v_resetjp_5990_:
{
lean_object* v___x_5993_; lean_object* v___x_5994_; lean_object* v___x_5996_; 
v___x_5993_ = ((lean_object*)(l_Lean_Parser_trailingLoop___closed__1));
v___x_5994_ = lean_array_push(v_traces_5984_, v___x_5993_);
if (v_isShared_5992_ == 0)
{
lean_ctor_set(v___x_5991_, 6, v___x_5994_);
v___x_5996_ = v___x_5991_;
goto v_reusejp_5995_;
}
else
{
lean_object* v_reuseFailAlloc_5997_; 
v_reuseFailAlloc_5997_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_5997_, 0, v_stxStack_5978_);
lean_ctor_set(v_reuseFailAlloc_5997_, 1, v_lhsPrec_5979_);
lean_ctor_set(v_reuseFailAlloc_5997_, 2, v_pos_5980_);
lean_ctor_set(v_reuseFailAlloc_5997_, 3, v_cache_5981_);
lean_ctor_set(v_reuseFailAlloc_5997_, 4, v_errorMsg_5982_);
lean_ctor_set(v_reuseFailAlloc_5997_, 5, v_recoveredErrors_5983_);
lean_ctor_set(v_reuseFailAlloc_5997_, 6, v___x_5994_);
v___x_5996_ = v_reuseFailAlloc_5997_;
goto v_reusejp_5995_;
}
v_reusejp_5995_:
{
return v___x_5996_;
}
}
}
else
{
lean_dec_ref(v_traces_5984_);
lean_dec_ref(v_recoveredErrors_5983_);
lean_dec(v_errorMsg_5982_);
lean_dec_ref(v_cache_5981_);
lean_dec(v_pos_5980_);
lean_dec(v_lhsPrec_5979_);
lean_dec_ref(v_stxStack_5978_);
return v_s_5977_;
}
}
else
{
lean_object* v___x_6006_; lean_object* v___x_6007_; lean_object* v___x_6008_; lean_object* v___x_6009_; lean_object* v_stxStack_6010_; lean_object* v_lhsPrec_6011_; lean_object* v_pos_6012_; lean_object* v_cache_6013_; lean_object* v_errorMsg_6014_; lean_object* v_recoveredErrors_6015_; lean_object* v_traces_6016_; lean_object* v___x_6017_; lean_object* v___x_6018_; uint8_t v___x_6019_; 
lean_dec_ref(v_traces_5984_);
lean_dec_ref(v_recoveredErrors_5983_);
lean_dec(v_errorMsg_5982_);
lean_dec_ref(v_cache_5981_);
lean_dec(v_pos_5980_);
lean_dec(v_lhsPrec_5979_);
lean_dec_ref(v_stxStack_5978_);
v___x_6006_ = lean_unsigned_to_nat(1u);
v___x_6007_ = lean_nat_sub(v_iniSz_5964_, v___x_6006_);
lean_dec(v_iniSz_5964_);
v___x_6008_ = l_Lean_Parser_ParserState_restore(v_s_5977_, v___x_6007_, v_pos_5961_);
lean_dec(v___x_6007_);
v___x_6009_ = l_Lean_Parser_ParserState_pushSyntax(v___x_6008_, v_left_5975_, v___x_5972_);
v_stxStack_6010_ = lean_ctor_get(v___x_6009_, 0);
lean_inc_ref(v_stxStack_6010_);
v_lhsPrec_6011_ = lean_ctor_get(v___x_6009_, 1);
lean_inc(v_lhsPrec_6011_);
v_pos_6012_ = lean_ctor_get(v___x_6009_, 2);
lean_inc(v_pos_6012_);
v_cache_6013_ = lean_ctor_get(v___x_6009_, 3);
lean_inc_ref(v_cache_6013_);
v_errorMsg_6014_ = lean_ctor_get(v___x_6009_, 4);
lean_inc(v_errorMsg_6014_);
v_recoveredErrors_6015_ = lean_ctor_get(v___x_6009_, 5);
lean_inc_ref(v_recoveredErrors_6015_);
v_traces_6016_ = lean_ctor_get(v___x_6009_, 6);
lean_inc_ref(v_traces_6016_);
v___x_6017_ = lean_array_get_size(v_traces_6016_);
v___x_6018_ = lean_unsigned_to_nat(0u);
v___x_6019_ = lean_nat_dec_eq(v___x_6017_, v___x_6018_);
if (v___x_6019_ == 0)
{
lean_object* v___x_6021_; uint8_t v_isShared_6022_; uint8_t v_isSharedCheck_6028_; 
v_isSharedCheck_6028_ = !lean_is_exclusive(v___x_6009_);
if (v_isSharedCheck_6028_ == 0)
{
lean_object* v_unused_6029_; lean_object* v_unused_6030_; lean_object* v_unused_6031_; lean_object* v_unused_6032_; lean_object* v_unused_6033_; lean_object* v_unused_6034_; lean_object* v_unused_6035_; 
v_unused_6029_ = lean_ctor_get(v___x_6009_, 6);
lean_dec(v_unused_6029_);
v_unused_6030_ = lean_ctor_get(v___x_6009_, 5);
lean_dec(v_unused_6030_);
v_unused_6031_ = lean_ctor_get(v___x_6009_, 4);
lean_dec(v_unused_6031_);
v_unused_6032_ = lean_ctor_get(v___x_6009_, 3);
lean_dec(v_unused_6032_);
v_unused_6033_ = lean_ctor_get(v___x_6009_, 2);
lean_dec(v_unused_6033_);
v_unused_6034_ = lean_ctor_get(v___x_6009_, 1);
lean_dec(v_unused_6034_);
v_unused_6035_ = lean_ctor_get(v___x_6009_, 0);
lean_dec(v_unused_6035_);
v___x_6021_ = v___x_6009_;
v_isShared_6022_ = v_isSharedCheck_6028_;
goto v_resetjp_6020_;
}
else
{
lean_dec(v___x_6009_);
v___x_6021_ = lean_box(0);
v_isShared_6022_ = v_isSharedCheck_6028_;
goto v_resetjp_6020_;
}
v_resetjp_6020_:
{
lean_object* v___x_6023_; lean_object* v___x_6024_; lean_object* v___x_6026_; 
v___x_6023_ = ((lean_object*)(l_Lean_Parser_trailingLoop___closed__3));
v___x_6024_ = lean_array_push(v_traces_6016_, v___x_6023_);
if (v_isShared_6022_ == 0)
{
lean_ctor_set(v___x_6021_, 6, v___x_6024_);
v___x_6026_ = v___x_6021_;
goto v_reusejp_6025_;
}
else
{
lean_object* v_reuseFailAlloc_6027_; 
v_reuseFailAlloc_6027_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_6027_, 0, v_stxStack_6010_);
lean_ctor_set(v_reuseFailAlloc_6027_, 1, v_lhsPrec_6011_);
lean_ctor_set(v_reuseFailAlloc_6027_, 2, v_pos_6012_);
lean_ctor_set(v_reuseFailAlloc_6027_, 3, v_cache_6013_);
lean_ctor_set(v_reuseFailAlloc_6027_, 4, v_errorMsg_6014_);
lean_ctor_set(v_reuseFailAlloc_6027_, 5, v_recoveredErrors_6015_);
lean_ctor_set(v_reuseFailAlloc_6027_, 6, v___x_6024_);
v___x_6026_ = v_reuseFailAlloc_6027_;
goto v_reusejp_6025_;
}
v_reusejp_6025_:
{
return v___x_6026_;
}
}
}
else
{
lean_dec_ref(v_traces_6016_);
lean_dec_ref(v_recoveredErrors_6015_);
lean_dec(v_errorMsg_6014_);
lean_dec_ref(v_cache_6013_);
lean_dec(v_pos_6012_);
lean_dec(v_lhsPrec_6011_);
lean_dec_ref(v_stxStack_6010_);
return v___x_6009_;
}
}
}
else
{
lean_dec_ref(v_traces_5984_);
lean_dec_ref(v_recoveredErrors_5983_);
lean_dec(v_errorMsg_5982_);
lean_dec_ref(v_cache_5981_);
lean_dec(v_pos_5980_);
lean_dec(v_lhsPrec_5979_);
lean_dec_ref(v_stxStack_5978_);
lean_dec(v_left_5975_);
lean_dec(v_iniSz_5964_);
lean_dec(v_pos_5961_);
v_s_5960_ = v_s_5977_;
goto _start;
}
}
else
{
lean_dec(v_snd_5968_);
lean_dec(v_iniSz_5964_);
lean_dec(v_pos_5961_);
lean_dec_ref(v_c_5959_);
lean_dec_ref(v_tables_5958_);
return v_fst_5967_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser(lean_object* v_kind_6040_, lean_object* v_tables_6041_, uint8_t v_behavior_6042_, lean_object* v_antiquotParser_6043_, lean_object* v_c_6044_, lean_object* v_s_6045_){
_start:
{
lean_object* v_s_6046_; lean_object* v_errorMsg_6047_; lean_object* v___x_6048_; uint8_t v___x_6049_; 
lean_inc_ref(v_c_6044_);
lean_inc_ref(v_tables_6041_);
v_s_6046_ = l_Lean_Parser_leadingParser(v_kind_6040_, v_tables_6041_, v_behavior_6042_, v_antiquotParser_6043_, v_c_6044_, v_s_6045_);
v_errorMsg_6047_ = lean_ctor_get(v_s_6046_, 4);
lean_inc(v_errorMsg_6047_);
v___x_6048_ = lean_box(0);
v___x_6049_ = l_Option_instBEq_beq___at___00Lean_Parser_andthenFn_spec__0(v_errorMsg_6047_, v___x_6048_);
if (v___x_6049_ == 0)
{
lean_dec_ref(v_c_6044_);
lean_dec_ref(v_tables_6041_);
return v_s_6046_;
}
else
{
lean_object* v___x_6050_; 
v___x_6050_ = l_Lean_Parser_trailingLoop(v_tables_6041_, v_c_6044_, v_s_6046_);
return v___x_6050_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_prattParser___boxed(lean_object* v_kind_6051_, lean_object* v_tables_6052_, lean_object* v_behavior_6053_, lean_object* v_antiquotParser_6054_, lean_object* v_c_6055_, lean_object* v_s_6056_){
_start:
{
uint8_t v_behavior_boxed_6057_; lean_object* v_res_6058_; 
v_behavior_boxed_6057_ = lean_unbox(v_behavior_6053_);
v_res_6058_ = l_Lean_Parser_prattParser(v_kind_6051_, v_tables_6052_, v_behavior_boxed_6057_, v_antiquotParser_6054_, v_c_6055_, v_s_6056_);
return v_res_6058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_fieldIdxFn(lean_object* v_c_6063_, lean_object* v_s_6064_){
_start:
{
lean_object* v_toInputContext_6065_; lean_object* v_pos_6066_; lean_object* v_inputString_6067_; lean_object* v___f_6068_; lean_object* v_initStackSz_6069_; uint32_t v_curr_6074_; uint8_t v___y_6076_; uint32_t v___x_6082_; uint8_t v___x_6083_; 
v_toInputContext_6065_ = lean_ctor_get(v_c_6063_, 0);
v_pos_6066_ = lean_ctor_get(v_s_6064_, 2);
lean_inc(v_pos_6066_);
v_inputString_6067_ = lean_ctor_get(v_toInputContext_6065_, 0);
v___f_6068_ = ((lean_object*)(l___private_Lean_Parser_Basic_0__Lean_Parser_decimalNumberFn_parseOptExp___closed__0));
v_initStackSz_6069_ = l_Lean_Parser_ParserState_stackSize(v_s_6064_);
v_curr_6074_ = lean_string_utf8_get(v_inputString_6067_, v_pos_6066_);
v___x_6082_ = 48;
v___x_6083_ = lean_uint32_dec_le(v___x_6082_, v_curr_6074_);
if (v___x_6083_ == 0)
{
v___y_6076_ = v___x_6083_;
goto v___jp_6075_;
}
else
{
uint32_t v___x_6084_; uint8_t v___x_6085_; 
v___x_6084_ = 57;
v___x_6085_ = lean_uint32_dec_le(v_curr_6074_, v___x_6084_);
v___y_6076_ = v___x_6085_;
goto v___jp_6075_;
}
v___jp_6070_:
{
lean_object* v___x_6071_; lean_object* v___x_6072_; lean_object* v___x_6073_; 
v___x_6071_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__0));
v___x_6072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6072_, 0, v_initStackSz_6069_);
v___x_6073_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_6064_, v___x_6071_, v_pos_6066_, v___x_6072_);
lean_dec_ref_known(v___x_6072_, 1);
return v___x_6073_;
}
v___jp_6075_:
{
if (v___y_6076_ == 0)
{
lean_dec_ref(v_c_6063_);
goto v___jp_6070_;
}
else
{
uint32_t v___x_6077_; uint8_t v___x_6078_; 
v___x_6077_ = 48;
v___x_6078_ = lean_uint32_dec_eq(v_curr_6074_, v___x_6077_);
if (v___x_6078_ == 0)
{
lean_object* v_s_6079_; lean_object* v___x_6080_; lean_object* v___x_6081_; 
lean_dec(v_initStackSz_6069_);
v_s_6079_ = l_Lean_Parser_takeWhileFn(v___f_6068_, v_c_6063_, v_s_6064_);
v___x_6080_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__2));
v___x_6081_ = l_Lean_Parser_mkNodeToken(v___x_6080_, v_pos_6066_, v___y_6076_, v_c_6063_, v_s_6079_);
return v___x_6081_;
}
else
{
lean_dec_ref(v_c_6063_);
goto v___jp_6070_;
}
}
}
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__0(void){
_start:
{
uint8_t v___x_6086_; uint8_t v___x_6087_; lean_object* v___x_6088_; lean_object* v___x_6089_; lean_object* v___x_6090_; 
v___x_6086_ = 0;
v___x_6087_ = 1;
v___x_6088_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__2));
v___x_6089_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__1));
v___x_6090_ = l_Lean_Parser_mkAntiquot(v___x_6089_, v___x_6088_, v___x_6087_, v___x_6086_);
return v___x_6090_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__1(void){
_start:
{
lean_object* v___x_6091_; lean_object* v___x_6092_; 
v___x_6091_ = ((lean_object*)(l_Lean_Parser_fieldIdxFn___closed__1));
v___x_6092_ = l_Lean_Parser_mkAtomicInfo(v___x_6091_);
return v___x_6092_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__2(void){
_start:
{
lean_object* v___x_6093_; lean_object* v___x_6094_; lean_object* v___x_6095_; 
v___x_6093_ = lean_alloc_closure((void*)(l_Lean_Parser_fieldIdxFn), 2, 0);
v___x_6094_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__1, &l_Lean_Parser_fieldIdx___closed__1_once, _init_l_Lean_Parser_fieldIdx___closed__1);
v___x_6095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6095_, 0, v___x_6094_);
lean_ctor_set(v___x_6095_, 1, v___x_6093_);
return v___x_6095_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx___closed__3(void){
_start:
{
lean_object* v___x_6096_; lean_object* v___x_6097_; lean_object* v___x_6098_; 
v___x_6096_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__2, &l_Lean_Parser_fieldIdx___closed__2_once, _init_l_Lean_Parser_fieldIdx___closed__2);
v___x_6097_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__0, &l_Lean_Parser_fieldIdx___closed__0_once, _init_l_Lean_Parser_fieldIdx___closed__0);
v___x_6098_ = l_Lean_Parser_withAntiquot(v___x_6097_, v___x_6096_);
return v___x_6098_;
}
}
static lean_object* _init_l_Lean_Parser_fieldIdx(void){
_start:
{
lean_object* v___x_6099_; 
v___x_6099_ = lean_obj_once(&l_Lean_Parser_fieldIdx___closed__3, &l_Lean_Parser_fieldIdx___closed__3_once, _init_l_Lean_Parser_fieldIdx___closed__3);
return v___x_6099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0(lean_object* v_x_6100_, lean_object* v_s_6101_){
_start:
{
lean_inc_ref(v_s_6101_);
return v_s_6101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_skip___lam__0___boxed(lean_object* v_x_6102_, lean_object* v_s_6103_){
_start:
{
lean_object* v_res_6104_; 
v_res_6104_ = l_Lean_Parser_skip___lam__0(v_x_6102_, v_s_6103_);
lean_dec_ref(v_s_6103_);
lean_dec_ref(v_x_6102_);
return v_res_6104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg(lean_object* v_inst_6110_, lean_object* v_s_6111_, lean_object* v_f_6112_, lean_object* v_b_6113_){
_start:
{
lean_object* v___x_6114_; lean_object* v___x_6115_; lean_object* v___x_6116_; uint8_t v___x_6117_; 
v___x_6114_ = l_Lean_Syntax_getArgs(v_s_6111_);
v___x_6115_ = lean_unsigned_to_nat(0u);
v___x_6116_ = lean_array_get_size(v___x_6114_);
v___x_6117_ = lean_nat_dec_lt(v___x_6115_, v___x_6116_);
if (v___x_6117_ == 0)
{
lean_object* v_toApplicative_6118_; lean_object* v_toPure_6119_; lean_object* v___x_6120_; 
lean_dec_ref(v___x_6114_);
lean_dec(v_f_6112_);
v_toApplicative_6118_ = lean_ctor_get(v_inst_6110_, 0);
lean_inc_ref(v_toApplicative_6118_);
lean_dec_ref(v_inst_6110_);
v_toPure_6119_ = lean_ctor_get(v_toApplicative_6118_, 1);
lean_inc(v_toPure_6119_);
lean_dec_ref(v_toApplicative_6118_);
v___x_6120_ = lean_apply_2(v_toPure_6119_, lean_box(0), v_b_6113_);
return v___x_6120_;
}
else
{
lean_object* v___x_6121_; uint8_t v___x_6122_; 
v___x_6121_ = lean_alloc_closure((void*)(l_flip), 6, 4);
lean_closure_set(v___x_6121_, 0, lean_box(0));
lean_closure_set(v___x_6121_, 1, lean_box(0));
lean_closure_set(v___x_6121_, 2, lean_box(0));
lean_closure_set(v___x_6121_, 3, v_f_6112_);
v___x_6122_ = lean_nat_dec_le(v___x_6116_, v___x_6116_);
if (v___x_6122_ == 0)
{
if (v___x_6117_ == 0)
{
lean_object* v_toApplicative_6123_; lean_object* v_toPure_6124_; lean_object* v___x_6125_; 
lean_dec_ref(v___x_6121_);
lean_dec_ref(v___x_6114_);
v_toApplicative_6123_ = lean_ctor_get(v_inst_6110_, 0);
lean_inc_ref(v_toApplicative_6123_);
lean_dec_ref(v_inst_6110_);
v_toPure_6124_ = lean_ctor_get(v_toApplicative_6123_, 1);
lean_inc(v_toPure_6124_);
lean_dec_ref(v_toApplicative_6123_);
v___x_6125_ = lean_apply_2(v_toPure_6124_, lean_box(0), v_b_6113_);
return v___x_6125_;
}
else
{
size_t v___x_6126_; size_t v___x_6127_; lean_object* v___x_6128_; 
v___x_6126_ = ((size_t)0ULL);
v___x_6127_ = lean_usize_of_nat(v___x_6116_);
v___x_6128_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_6110_, v___x_6121_, v___x_6114_, v___x_6126_, v___x_6127_, v_b_6113_);
return v___x_6128_;
}
}
else
{
size_t v___x_6129_; size_t v___x_6130_; lean_object* v___x_6131_; 
v___x_6129_ = ((size_t)0ULL);
v___x_6130_ = lean_usize_of_nat(v___x_6116_);
v___x_6131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_6110_, v___x_6121_, v___x_6114_, v___x_6129_, v___x_6130_, v_b_6113_);
return v___x_6131_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___redArg___boxed(lean_object* v_inst_6132_, lean_object* v_s_6133_, lean_object* v_f_6134_, lean_object* v_b_6135_){
_start:
{
lean_object* v_res_6136_; 
v_res_6136_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_6132_, v_s_6133_, v_f_6134_, v_b_6135_);
lean_dec(v_s_6133_);
return v_res_6136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM(lean_object* v_m_6137_, lean_object* v_inst_6138_, lean_object* v_00_u03b2_6139_, lean_object* v_s_6140_, lean_object* v_f_6141_, lean_object* v_b_6142_){
_start:
{
lean_object* v___x_6143_; 
v___x_6143_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_6138_, v_s_6140_, v_f_6141_, v_b_6142_);
return v___x_6143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___boxed(lean_object* v_m_6144_, lean_object* v_inst_6145_, lean_object* v_00_u03b2_6146_, lean_object* v_s_6147_, lean_object* v_f_6148_, lean_object* v_b_6149_){
_start:
{
lean_object* v_res_6150_; 
v_res_6150_ = l_Lean_Syntax_foldArgsM(v_m_6144_, v_inst_6145_, v_00_u03b2_6146_, v_s_6147_, v_f_6148_, v_b_6149_);
lean_dec(v_s_6147_);
return v_res_6150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___lam__0(lean_object* v_f_6151_, lean_object* v_x1_6152_, lean_object* v_x2_6153_){
_start:
{
lean_object* v___x_6154_; 
v___x_6154_ = lean_apply_2(v_f_6151_, v_x1_6152_, v_x2_6153_);
return v___x_6154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(lean_object* v_f_6155_, lean_object* v_as_6156_, size_t v_i_6157_, size_t v_stop_6158_, lean_object* v_b_6159_){
_start:
{
uint8_t v___x_6160_; 
v___x_6160_ = lean_usize_dec_eq(v_i_6157_, v_stop_6158_);
if (v___x_6160_ == 0)
{
lean_object* v___x_6161_; lean_object* v___x_6162_; size_t v___x_6163_; size_t v___x_6164_; 
v___x_6161_ = lean_array_uget_borrowed(v_as_6156_, v_i_6157_);
lean_inc(v_f_6155_);
lean_inc(v___x_6161_);
v___x_6162_ = lean_apply_2(v_f_6155_, v___x_6161_, v_b_6159_);
v___x_6163_ = ((size_t)1ULL);
v___x_6164_ = lean_usize_add(v_i_6157_, v___x_6163_);
v_i_6157_ = v___x_6164_;
v_b_6159_ = v___x_6162_;
goto _start;
}
else
{
lean_dec(v_f_6155_);
return v_b_6159_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg___boxed(lean_object* v_f_6166_, lean_object* v_as_6167_, lean_object* v_i_6168_, lean_object* v_stop_6169_, lean_object* v_b_6170_){
_start:
{
size_t v_i_boxed_6171_; size_t v_stop_boxed_6172_; lean_object* v_res_6173_; 
v_i_boxed_6171_ = lean_unbox_usize(v_i_6168_);
lean_dec(v_i_6168_);
v_stop_boxed_6172_ = lean_unbox_usize(v_stop_6169_);
lean_dec(v_stop_6169_);
v_res_6173_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_6166_, v_as_6167_, v_i_boxed_6171_, v_stop_boxed_6172_, v_b_6170_);
lean_dec_ref(v_as_6167_);
return v_res_6173_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(lean_object* v_s_6174_, lean_object* v_f_6175_, lean_object* v_b_6176_){
_start:
{
lean_object* v___x_6177_; lean_object* v___x_6178_; lean_object* v___x_6179_; uint8_t v___x_6180_; 
v___x_6177_ = l_Lean_Syntax_getArgs(v_s_6174_);
v___x_6178_ = lean_unsigned_to_nat(0u);
v___x_6179_ = lean_array_get_size(v___x_6177_);
v___x_6180_ = lean_nat_dec_lt(v___x_6178_, v___x_6179_);
if (v___x_6180_ == 0)
{
lean_dec_ref(v___x_6177_);
lean_dec(v_f_6175_);
return v_b_6176_;
}
else
{
uint8_t v___x_6181_; 
v___x_6181_ = lean_nat_dec_le(v___x_6179_, v___x_6179_);
if (v___x_6181_ == 0)
{
if (v___x_6180_ == 0)
{
lean_dec_ref(v___x_6177_);
lean_dec(v_f_6175_);
return v_b_6176_;
}
else
{
size_t v___x_6182_; size_t v___x_6183_; lean_object* v___x_6184_; 
v___x_6182_ = ((size_t)0ULL);
v___x_6183_ = lean_usize_of_nat(v___x_6179_);
v___x_6184_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_6175_, v___x_6177_, v___x_6182_, v___x_6183_, v_b_6176_);
lean_dec_ref(v___x_6177_);
return v___x_6184_;
}
}
else
{
size_t v___x_6185_; size_t v___x_6186_; lean_object* v___x_6187_; 
v___x_6185_ = ((size_t)0ULL);
v___x_6186_ = lean_usize_of_nat(v___x_6179_);
v___x_6187_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_6175_, v___x_6177_, v___x_6185_, v___x_6186_, v_b_6176_);
lean_dec_ref(v___x_6177_);
return v___x_6187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg___boxed(lean_object* v_s_6188_, lean_object* v_f_6189_, lean_object* v_b_6190_){
_start:
{
lean_object* v_res_6191_; 
v_res_6191_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_6188_, v_f_6189_, v_b_6190_);
lean_dec(v_s_6188_);
return v_res_6191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg(lean_object* v_s_6192_, lean_object* v_f_6193_, lean_object* v_b_6194_){
_start:
{
lean_object* v___f_6195_; lean_object* v___x_6196_; 
v___f_6195_ = lean_alloc_closure((void*)(l_Lean_Syntax_foldArgs___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6195_, 0, v_f_6193_);
v___x_6196_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_6192_, v___f_6195_, v_b_6194_);
return v___x_6196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___redArg___boxed(lean_object* v_s_6197_, lean_object* v_f_6198_, lean_object* v_b_6199_){
_start:
{
lean_object* v_res_6200_; 
v_res_6200_ = l_Lean_Syntax_foldArgs___redArg(v_s_6197_, v_f_6198_, v_b_6199_);
lean_dec(v_s_6197_);
return v_res_6200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs(lean_object* v_00_u03b2_6201_, lean_object* v_s_6202_, lean_object* v_f_6203_, lean_object* v_b_6204_){
_start:
{
lean_object* v___x_6205_; 
v___x_6205_ = l_Lean_Syntax_foldArgs___redArg(v_s_6202_, v_f_6203_, v_b_6204_);
return v___x_6205_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgs___boxed(lean_object* v_00_u03b2_6206_, lean_object* v_s_6207_, lean_object* v_f_6208_, lean_object* v_b_6209_){
_start:
{
lean_object* v_res_6210_; 
v_res_6210_ = l_Lean_Syntax_foldArgs(v_00_u03b2_6206_, v_s_6207_, v_f_6208_, v_b_6209_);
lean_dec(v_s_6207_);
return v_res_6210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(lean_object* v_00_u03b2_6211_, lean_object* v_s_6212_, lean_object* v_f_6213_, lean_object* v_b_6214_){
_start:
{
lean_object* v___x_6215_; 
v___x_6215_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___redArg(v_s_6212_, v_f_6213_, v_b_6214_);
return v___x_6215_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0___boxed(lean_object* v_00_u03b2_6216_, lean_object* v_s_6217_, lean_object* v_f_6218_, lean_object* v_b_6219_){
_start:
{
lean_object* v_res_6220_; 
v_res_6220_ = l_Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0(v_00_u03b2_6216_, v_s_6217_, v_f_6218_, v_b_6219_);
lean_dec(v_s_6217_);
return v_res_6220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(lean_object* v_00_u03b2_6221_, lean_object* v_f_6222_, lean_object* v_as_6223_, size_t v_i_6224_, size_t v_stop_6225_, lean_object* v_b_6226_){
_start:
{
lean_object* v___x_6227_; 
v___x_6227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___redArg(v_f_6222_, v_as_6223_, v_i_6224_, v_stop_6225_, v_b_6226_);
return v___x_6227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_6228_, lean_object* v_f_6229_, lean_object* v_as_6230_, lean_object* v_i_6231_, lean_object* v_stop_6232_, lean_object* v_b_6233_){
_start:
{
size_t v_i_boxed_6234_; size_t v_stop_boxed_6235_; lean_object* v_res_6236_; 
v_i_boxed_6234_ = lean_unbox_usize(v_i_6231_);
lean_dec(v_i_6231_);
v_stop_boxed_6235_ = lean_unbox_usize(v_stop_6232_);
lean_dec(v_stop_6232_);
v_res_6236_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Syntax_foldArgsM___at___00Lean_Syntax_foldArgs_spec__0_spec__0(v_00_u03b2_6228_, v_f_6229_, v_as_6230_, v_i_boxed_6234_, v_stop_boxed_6235_, v_b_6233_);
lean_dec_ref(v_as_6230_);
return v_res_6236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___lam__0(lean_object* v_f_6237_, lean_object* v_s_6238_, lean_object* v_x_6239_){
_start:
{
lean_object* v___x_6240_; 
v___x_6240_ = lean_apply_1(v_f_6237_, v_s_6238_);
return v___x_6240_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg(lean_object* v_inst_6241_, lean_object* v_s_6242_, lean_object* v_f_6243_){
_start:
{
lean_object* v___f_6244_; lean_object* v___x_6245_; lean_object* v___x_6246_; 
v___f_6244_ = lean_alloc_closure((void*)(l_Lean_Syntax_forArgsM___redArg___lam__0), 3, 1);
lean_closure_set(v___f_6244_, 0, v_f_6243_);
v___x_6245_ = lean_box(0);
v___x_6246_ = l_Lean_Syntax_foldArgsM___redArg(v_inst_6241_, v_s_6242_, v___f_6244_, v___x_6245_);
return v___x_6246_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___redArg___boxed(lean_object* v_inst_6247_, lean_object* v_s_6248_, lean_object* v_f_6249_){
_start:
{
lean_object* v_res_6250_; 
v_res_6250_ = l_Lean_Syntax_forArgsM___redArg(v_inst_6247_, v_s_6248_, v_f_6249_);
lean_dec(v_s_6248_);
return v_res_6250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM(lean_object* v_m_6251_, lean_object* v_inst_6252_, lean_object* v_s_6253_, lean_object* v_f_6254_){
_start:
{
lean_object* v___x_6255_; 
v___x_6255_ = l_Lean_Syntax_forArgsM___redArg(v_inst_6252_, v_s_6253_, v_f_6254_);
return v___x_6255_;
}
}
LEAN_EXPORT lean_object* l_Lean_Syntax_forArgsM___boxed(lean_object* v_m_6256_, lean_object* v_inst_6257_, lean_object* v_s_6258_, lean_object* v_f_6259_){
_start:
{
lean_object* v_res_6260_; 
v_res_6260_ = l_Lean_Syntax_forArgsM(v_m_6256_, v_inst_6257_, v_s_6258_, v_f_6259_);
lean_dec(v_s_6258_);
return v_res_6260_;
}
}
lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Basic(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_errorAtSavedPos___regBuiltin_Lean_Parser_errorAtSavedPos_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_orelse___regBuiltin_Lean_Parser_orelse_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_atomic___regBuiltin_Lean_Parser_atomic_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_recover_x27___regBuiltin_Lean_Parser_recover_x27_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_recover___regBuiltin_Lean_Parser_recover_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_lookahead___regBuiltin_Lean_Parser_lookahead_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_notFollowedBy___regBuiltin_Lean_Parser_notFollowedBy_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkWsBefore___regBuiltin_Lean_Parser_checkWsBefore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLinebreakBefore___regBuiltin_Lean_Parser_checkLinebreakBefore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoWsBefore___regBuiltin_Lean_Parser_checkNoWsBefore_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_numLitNoAntiquot = _init_l_Lean_Parser_numLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_numLitNoAntiquot);
l_Lean_Parser_hexnumNoAntiquot = _init_l_Lean_Parser_hexnumNoAntiquot();
lean_mark_persistent(l_Lean_Parser_hexnumNoAntiquot);
l_Lean_Parser_scientificLitNoAntiquot = _init_l_Lean_Parser_scientificLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_scientificLitNoAntiquot);
l_Lean_Parser_strLitNoAntiquot = _init_l_Lean_Parser_strLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_strLitNoAntiquot);
l_Lean_Parser_charLitNoAntiquot = _init_l_Lean_Parser_charLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_charLitNoAntiquot);
l_Lean_Parser_nameLitNoAntiquot = _init_l_Lean_Parser_nameLitNoAntiquot();
lean_mark_persistent(l_Lean_Parser_nameLitNoAntiquot);
l_Lean_Parser_identNoAntiquot = _init_l_Lean_Parser_identNoAntiquot();
lean_mark_persistent(l_Lean_Parser_identNoAntiquot);
l_Lean_Parser_hygieneInfoNoAntiquot = _init_l_Lean_Parser_hygieneInfoNoAntiquot();
lean_mark_persistent(l_Lean_Parser_hygieneInfoNoAntiquot);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColEq___regBuiltin_Lean_Parser_checkColEq_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGe___regBuiltin_Lean_Parser_checkColGe_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkColGt___regBuiltin_Lean_Parser_checkColGt_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkLineEq___regBuiltin_Lean_Parser_checkLineEq_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withPosition___regBuiltin_Lean_Parser_withPosition_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutPosition___regBuiltin_Lean_Parser_withoutPosition_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withForbidden___regBuiltin_Lean_Parser_withForbidden_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withoutForbidden___regBuiltin_Lean_Parser_withoutForbidden_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_eoi = _init_l_Lean_Parser_eoi();
lean_mark_persistent(l_Lean_Parser_eoi);
l_Lean_Parser_instInhabitedLeadingIdentBehavior_default = _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior_default();
l_Lean_Parser_instInhabitedLeadingIdentBehavior = _init_l_Lean_Parser_instInhabitedLeadingIdentBehavior();
l_Lean_Parser_instInhabitedParserCategory_default = _init_l_Lean_Parser_instInhabitedParserCategory_default();
lean_mark_persistent(l_Lean_Parser_instInhabitedParserCategory_default);
l_Lean_Parser_instInhabitedParserCategory = _init_l_Lean_Parser_instInhabitedParserCategory();
lean_mark_persistent(l_Lean_Parser_instInhabitedParserCategory);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_367397207____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_categoryParserFnRef = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_categoryParserFnRef);
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_initFn_00___x40_Lean_Parser_Basic_281847278____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Parser_categoryParserFnExtension = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Parser_categoryParserFnExtension);
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_checkNoImmediateColon___regBuiltin_Lean_Parser_checkNoImmediateColon_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_antiquotNestedExpr = _init_l_Lean_Parser_antiquotNestedExpr();
lean_mark_persistent(l_Lean_Parser_antiquotNestedExpr);
l_Lean_Parser_antiquotExpr = _init_l_Lean_Parser_antiquotExpr();
lean_mark_persistent(l_Lean_Parser_antiquotExpr);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquot___regBuiltin_Lean_Parser_mkAntiquot_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquot___regBuiltin_Lean_Parser_withAntiquot_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_mkAntiquotSplice___regBuiltin_Lean_Parser_mkAntiquotSplice_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Basic_0__Lean_Parser_withAntiquotSuffixSplice___regBuiltin_Lean_Parser_withAntiquotSuffixSplice_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_fieldIdx = _init_l_Lean_Parser_fieldIdx();
lean_mark_persistent(l_Lean_Parser_fieldIdx);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Basic(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Types(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Basic(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Basic(builtin);
}
#ifdef __cplusplus
}
#endif
