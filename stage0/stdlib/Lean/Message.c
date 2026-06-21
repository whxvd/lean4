// Lean compiler output
// Module: Lean.Message
// Imports: public import Init.Data.Slice.Array public import Lean.Util.PPExt public import Lean.Util.Sorry import Init.Data.String.Search import Init.Data.Format.Macro import Init.Data.Iterators.Consumers.Collect import Init.Data.String.Length
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
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_String_Slice_subslice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_formatRawGoal(lean_object*);
lean_object* l_Lean_ppGoal(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
double lean_float_sub(double, double);
lean_object* lean_float_to_string(double);
double lean_float_of_nat(lean_object*);
uint8_t lean_float_beq(double, double);
lean_object* l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(lean_object*, lean_object*);
lean_object* l___private_Init_Dynamic_0__Dynamic_typeNameImpl(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
extern lean_object* l_Std_Format_defWidth;
lean_object* l_Std_Format_pretty(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Function_comp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSyntheticSorry(lean_object*);
lean_object* lean_expr_dbg_to_string(lean_object*);
lean_object* l_Lean_ppExprWithInfos(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_Syntax_copyHeadTailInfoFrom(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_formatStx(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ppTerm(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_instFromJsonPosition_fromJson(lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_Lean_Json_getTag_x3f(lean_object*);
lean_object* l_Lean_Name_fromJson_x3f(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_List_mapTR_loop___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* l_Lean_instToJsonPosition_toJson(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_simp_macro_scopes(lean_object*);
lean_object* l_Lean_ppConstNameWithInfos(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
lean_object* l_Option_toJson___redArg(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_balance___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_TSyntax_expandInterpolatedStr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_elab_environment_of_kernel_env(lean_object*);
lean_object* l_String_Slice_Pos_prev_x3f(lean_object*, lean_object*);
lean_object* l_String_Slice_Pos_get_x3f(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Level_format(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_ppLevel(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
lean_object* lean_register_option(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_List_getLast_x21___redArg(lean_object*, lean_object*);
lean_object* l_Option_fromJson_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValAs_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f___boxed(lean_object*);
extern lean_object* l_Lean_instInhabitedPosition_default;
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__0 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__0_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__1 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__1_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__2 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__2_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__3 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__3_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__4 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__4_value;
static const lean_string_object l_Lean_mkErrorStringWithPos___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_mkErrorStringWithPos___closed__5 = (const lean_object*)&l_Lean_mkErrorStringWithPos___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedMessageSeverity_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedMessageSeverity;
LEAN_EXPORT uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqMessageSeverity_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqMessageSeverity_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instBEqMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqMessageSeverity = (const lean_object*)&l_Lean_instBEqMessageSeverity___closed__0_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "information"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__0_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__0_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__1 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__1_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "warning"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__2 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__3 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__3_value;
static const lean_string_object l_Lean_instToJsonMessageSeverity_toJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__4 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value;
static const lean_ctor_object l_Lean_instToJsonMessageSeverity_toJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value)}};
static const lean_object* l_Lean_instToJsonMessageSeverity_toJson___closed__5 = (const lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t);
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson___boxed(lean_object*);
static const lean_closure_object l_Lean_instToJsonMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonMessageSeverity_toJson___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instToJsonMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonMessageSeverity = (const lean_object*)&l_Lean_instToJsonMessageSeverity___closed__0_value;
static const lean_string_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "no inductive tag found"};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__0_value)}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__1_value;
static const lean_string_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "no inductive constructor matched"};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__2 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__2_value)}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__3 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__3_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__4 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__4_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__5 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__5_value;
static const lean_ctor_object l_Lean_instFromJsonMessageSeverity_fromJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_instFromJsonMessageSeverity_fromJson___closed__6 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity_fromJson___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonMessageSeverity_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instFromJsonMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonMessageSeverity = (const lean_object*)&l_Lean_instFromJsonMessageSeverity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString(uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString___boxed(lean_object*);
static const lean_closure_object l_Lean_instToStringMessageSeverity___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageSeverity_toString___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToStringMessageSeverity___closed__0 = (const lean_object*)&l_Lean_instToStringMessageSeverity___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToStringMessageSeverity = (const lean_object*)&l_Lean_instToStringMessageSeverity___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_toCtorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_toCtorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_instInhabitedTraceResult_default;
LEAN_EXPORT uint8_t l_Lean_instInhabitedTraceResult;
LEAN_EXPORT uint8_t l_Lean_instBEqTraceResult_beq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_instBEqTraceResult_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instBEqTraceResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqTraceResult_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instBEqTraceResult___closed__0 = (const lean_object*)&l_Lean_instBEqTraceResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instBEqTraceResult = (const lean_object*)&l_Lean_instBEqTraceResult___closed__0_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TraceResult.success"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__0 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__0_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__0_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__1 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__1_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.TraceResult.failure"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__2 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__2_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__2_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__3 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__3_value;
static const lean_string_object l_Lean_instReprTraceResult_repr___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Lean.TraceResult.error"};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__4 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__4_value;
static const lean_ctor_object l_Lean_instReprTraceResult_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instReprTraceResult_repr___closed__4_value)}};
static const lean_object* l_Lean_instReprTraceResult_repr___closed__5 = (const lean_object*)&l_Lean_instReprTraceResult_repr___closed__5_value;
static lean_once_cell_t l_Lean_instReprTraceResult_repr___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTraceResult_repr___closed__6;
static lean_once_cell_t l_Lean_instReprTraceResult_repr___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instReprTraceResult_repr___closed__7;
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instReprTraceResult___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instReprTraceResult_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instReprTraceResult___closed__0 = (const lean_object*)&l_Lean_instReprTraceResult___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instReprTraceResult = (const lean_object*)&l_Lean_instReprTraceResult___closed__0_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "✅️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__0 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__0_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 2, .m_data = "❌️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__1 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__1_value;
static const lean_string_object l_Lean_TraceResult_toEmoji___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 2, .m_data = "💥️"};
static const lean_object* l_Lean_TraceResult_toEmoji___closed__2 = (const lean_object*)&l_Lean_TraceResult_toEmoji___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji(uint8_t);
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_instInhabitedMessageData_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_instInhabitedMessageData_default___closed__0 = (const lean_object*)&l_Lean_instInhabitedMessageData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedMessageData_default = (const lean_object*)&l_Lean_instInhabitedMessageData_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instInhabitedMessageData = (const lean_object*)&l_Lean_instInhabitedMessageData_default___closed__0_value;
static const lean_string_object l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_ = (const lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value;
static const lean_string_object l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "MessageData"};
static const lean_object* l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_ = (const lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value;
static const lean_ctor_object l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value_aux_0),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_object* l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_ = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value;
LEAN_EXPORT const lean_object* l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_ = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value;
LEAN_EXPORT const lean_object* l_Lean_instTypeNameMessageData = (const lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hasTag___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_kind___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_originatingSyntax_x3f(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_isTrace(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_isTrace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_composePreservingKind(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_MessageData_nil___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_nil___closed__0;
LEAN_EXPORT lean_object* l_Lean_MessageData_nil;
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofSyntax___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofSyntax___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofSyntax___closed__0 = (const lean_object*)&l_Lean_MessageData_ofSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_ofExpr___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_ofLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofLevel___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_ofLevel___closed__0 = (const lean_object*)&l_Lean_MessageData_ofLevel___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofName(lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_ofConstName___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "pp"};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__0 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__0_value;
static const lean_string_object l_Lean_MessageData_ofConstName___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "fullNames"};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__1 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_ofConstName___lam__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 51, 192, 169, 230, 180, 160, 93)}};
static const lean_ctor_object l_Lean_MessageData_ofConstName___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__2_value_aux_0),((lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(26, 29, 178, 193, 83, 135, 18, 31)}};
static const lean_object* l_Lean_MessageData_ofConstName___lam__1___closed__2 = (const lean_object*)&l_Lean_MessageData_ofConstName___lam__1___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_withExprHover___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Delab"};
static const lean_object* l_Lean_MessageData_withExprHover___closed__0 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__0_value;
static const lean_string_object l_Lean_MessageData_withExprHover___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "withExprHover"};
static const lean_object* l_Lean_MessageData_withExprHover___closed__1 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_withExprHover___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 78, 224, 2, 255, 4, 162, 217)}};
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value_aux_0),((lean_object*)&l_Lean_MessageData_withExprHover___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 205, 246, 77, 218, 147, 213, 253)}};
static const lean_object* l_Lean_MessageData_withExprHover___closed__2 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value;
static const lean_ctor_object l_Lean_MessageData_withExprHover___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_MessageData_withExprHover___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MessageData_withExprHover___closed__3 = (const lean_object*)&l_Lean_MessageData_withExprHover___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0;
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1;
static lean_once_cell_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2;
LEAN_EXPORT uint8_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_hasSyntheticSorry___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "maxTraceChildren"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(148, 113, 99, 32, 64, 25, 169, 239)}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value;
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Maximum number of trace node children to display"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__2_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value;
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value_aux_0),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(204, 233, 154, 112, 39, 152, 210, 6)}};
static const lean_ctor_object l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value_aux_1),((lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__0_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value),LEAN_SCALAR_PTR_LITERAL(175, 61, 140, 215, 80, 247, 40, 222)}};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_ = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__value;
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_();
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_maxTraceChildren;
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_MessageData_formatAux_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_mkErrorStringWithPos___closed__1_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__0 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__0_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l_Lean_MessageData_formatAux___closed__1 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__1_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__2 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__2_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_MessageData_formatAux___closed__3 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__3_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__4 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__4_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_MessageData_formatAux___closed__5 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__5_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__5_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__6 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__6_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " ["};
static const lean_object* l_Lean_MessageData_formatAux___closed__7 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__7_value;
static const lean_ctor_object l_Lean_MessageData_formatAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_formatAux___closed__7_value)}};
static const lean_object* l_Lean_MessageData_formatAux___closed__8 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__8_value;
static lean_once_cell_t l_Lean_MessageData_formatAux___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_MessageData_formatAux___closed__9;
static const lean_string_object l_Lean_MessageData_formatAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Lean.Message"};
static const lean_object* l_Lean_MessageData_formatAux___closed__10 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__10_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.MessageData.formatAux"};
static const lean_object* l_Lean_MessageData_formatAux___closed__11 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__11_value;
static const lean_string_object l_Lean_MessageData_formatAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = "MessageData.ofLazy: expected MessageData in Dynamic, got "};
static const lean_object* l_Lean_MessageData_formatAux___closed__12 = (const lean_object*)&l_Lean_MessageData_formatAux___closed__12_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MessageData_format___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MessageData_format___closed__0 = (const lean_object*)&l_Lean_MessageData_format___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_format(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_format___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_toString(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_instAppend___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageData_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instAppend___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instAppend___closed__0 = (const lean_object*)&l_Lean_MessageData_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instAppend = (const lean_object*)&l_Lean_MessageData_instAppend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeString___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofFormat, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
static const lean_closure_object l_Lean_MessageData_instCoeString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Function_comp, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value),((lean_object*)&l_Lean_MessageData_instCoeString___closed__0_value)} };
static const lean_object* l_Lean_MessageData_instCoeString___closed__2 = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeString = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeFormat = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
static const lean_closure_object l_Lean_MessageData_instCoeLevel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofLevel, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeLevel___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeLevel = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofExpr, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeExpr = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofName, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeName___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeName = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
static const lean_closure_object l_Lean_MessageData_instCoeSyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofSyntax, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeSyntax___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeSyntax = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeMVarId___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeMVarId___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeMVarId___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeMVarId___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeMVarId = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
static const lean_string_object l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeOptionExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeOptionExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeOptionExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeOptionExpr = (const lean_object*)&l_Lean_MessageData_instCoeOptionExpr___closed__0_value;
static lean_once_cell_t l_Lean_MessageData_arrayExpr_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__0;
static const lean_string_object l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__1 = (const lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_arrayExpr_toMessageData___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__1_value)}};
static const lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__2 = (const lean_object*)&l_Lean_MessageData_arrayExpr_toMessageData___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_arrayExpr_toMessageData___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeArrayExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeArrayExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeArrayExpr = (const lean_object*)&l_Lean_MessageData_instCoeArrayExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_bracket(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_paren(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_sbracket(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_joinSep(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_fill(lean_object*);
static const lean_string_object l_Lean_MessageData_ofList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_Lean_MessageData_ofList___closed__0 = (const lean_object*)&l_Lean_MessageData_ofList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_ofList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_ofList___closed__1 = (const lean_object*)&l_Lean_MessageData_ofList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__2;
static const lean_string_object l_Lean_MessageData_ofList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_MessageData_ofList___closed__3 = (const lean_object*)&l_Lean_MessageData_ofList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_ofList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_ofList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_ofList___closed__4 = (const lean_object*)&l_Lean_MessageData_ofList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__5;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__6;
static lean_once_cell_t l_Lean_MessageData_ofList___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_ofList___closed__7;
LEAN_EXPORT lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_ofArray(lean_object*);
static const lean_string_object l_Lean_MessageData_orList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 8, .m_data = "– none –"};
static const lean_object* l_Lean_MessageData_orList___closed__0 = (const lean_object*)&l_Lean_MessageData_orList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__1 = (const lean_object*)&l_Lean_MessageData_orList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__2;
static const lean_string_object l_Lean_MessageData_orList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l_Lean_MessageData_orList___closed__3 = (const lean_object*)&l_Lean_MessageData_orList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__4 = (const lean_object*)&l_Lean_MessageData_orList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__5;
static const lean_string_object l_Lean_MessageData_orList___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ", or "};
static const lean_object* l_Lean_MessageData_orList___closed__6 = (const lean_object*)&l_Lean_MessageData_orList___closed__6_value;
static const lean_ctor_object l_Lean_MessageData_orList___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_orList___closed__6_value)}};
static const lean_object* l_Lean_MessageData_orList___closed__7 = (const lean_object*)&l_Lean_MessageData_orList___closed__7_value;
static lean_once_cell_t l_Lean_MessageData_orList___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_orList___closed__8;
LEAN_EXPORT lean_object* l_Lean_MessageData_orList(lean_object*);
static const lean_string_object l_Lean_MessageData_andList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* l_Lean_MessageData_andList___closed__0 = (const lean_object*)&l_Lean_MessageData_andList___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_andList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_andList___closed__0_value)}};
static const lean_object* l_Lean_MessageData_andList___closed__1 = (const lean_object*)&l_Lean_MessageData_andList___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_andList___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_andList___closed__2;
static const lean_string_object l_Lean_MessageData_andList___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", and "};
static const lean_object* l_Lean_MessageData_andList___closed__3 = (const lean_object*)&l_Lean_MessageData_andList___closed__3_value;
static const lean_ctor_object l_Lean_MessageData_andList___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_andList___closed__3_value)}};
static const lean_object* l_Lean_MessageData_andList___closed__4 = (const lean_object*)&l_Lean_MessageData_andList___closed__4_value;
static lean_once_cell_t l_Lean_MessageData_andList___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_andList___closed__5;
LEAN_EXPORT lean_object* l_Lean_MessageData_andList(lean_object*);
static lean_once_cell_t l_Lean_MessageData_note___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__0;
static const lean_string_object l_Lean_MessageData_note___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Note: "};
static const lean_object* l_Lean_MessageData_note___closed__1 = (const lean_object*)&l_Lean_MessageData_note___closed__1_value;
static const lean_ctor_object l_Lean_MessageData_note___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_note___closed__1_value)}};
static const lean_object* l_Lean_MessageData_note___closed__2 = (const lean_object*)&l_Lean_MessageData_note___closed__2_value;
static lean_once_cell_t l_Lean_MessageData_note___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__3;
static lean_once_cell_t l_Lean_MessageData_note___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_note___closed__4;
LEAN_EXPORT lean_object* l_Lean_MessageData_note(lean_object*);
static const lean_string_object l_Lean_MessageData_hint_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Hint: "};
static const lean_object* l_Lean_MessageData_hint_x27___closed__0 = (const lean_object*)&l_Lean_MessageData_hint_x27___closed__0_value;
static const lean_ctor_object l_Lean_MessageData_hint_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MessageData_hint_x27___closed__0_value)}};
static const lean_object* l_Lean_MessageData_hint_x27___closed__1 = (const lean_object*)&l_Lean_MessageData_hint_x27___closed__1_value;
static lean_once_cell_t l_Lean_MessageData_hint_x27___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint_x27___closed__2;
static lean_once_cell_t l_Lean_MessageData_hint_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MessageData_hint_x27___closed__3;
LEAN_EXPORT lean_object* l_Lean_MessageData_hint_x27(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_ofList, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeList___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeList___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeList = (const lean_object*)&l_Lean_MessageData_instCoeList___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeListExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_MessageData_instCoeListExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageData_instCoeListExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageData_instCoeListExpr___closed__0 = (const lean_object*)&l_Lean_MessageData_instCoeListExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageData_instCoeListExpr = (const lean_object*)&l_Lean_MessageData_instCoeListExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonPosition_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "fileName"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "endPos"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "keepFullRange"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "severity"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "isSilent"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caption"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value;
static const lean_string_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value;
static const lean_closure_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9_value;
static const lean_array_object l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10 = (const lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage(lean_object*, lean_object*);
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getStr_x3f, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0_value;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "BaseMessage"};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(135, 105, 232, 242, 0, 63, 252, 70)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(67, 201, 140, 230, 1, 55, 95, 217)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8;
static const lean_string_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonPosition_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_fromJson_x3f, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11_value)} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(175, 67, 188, 228, 198, 126, 180, 88)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(230, 71, 4, 163, 123, 133, 137, 84)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20;
static const lean_closure_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Json_getBool_x3f___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21_value;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(98, 109, 20, 206, 1, 23, 246, 165)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(220, 87, 21, 107, 78, 188, 130, 35)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(6, 63, 220, 237, 219, 125, 166, 5)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(42, 121, 35, 234, 39, 185, 10, 205)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37;
static const lean_ctor_object l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(157, 185, 242, 82, 251, 25, 14, 198)}};
static const lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38 = (const lean_object*)&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38_value;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40;
static lean_once_cell_t l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41;
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToJsonSerialMessage_toJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* l_Lean_instToJsonSerialMessage_toJson___closed__0 = (const lean_object*)&l_Lean_instToJsonSerialMessage_toJson___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToJsonSerialMessage_toJson(lean_object*);
static const lean_closure_object l_Lean_instToJsonSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToJsonSerialMessage_toJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToJsonSerialMessage___closed__0 = (const lean_object*)&l_Lean_instToJsonSerialMessage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToJsonSerialMessage = (const lean_object*)&l_Lean_instToJsonSerialMessage___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0 = (const lean_object*)&l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "SerialMessage"};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__0 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value;
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value_aux_0),((lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(35, 10, 29, 109, 171, 11, 228, 164)}};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__1 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__1_value;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__2;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__3;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__4;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__5;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__6;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__7;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__8;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__9;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__10;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__11;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__12;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__13;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__14;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__15;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__16;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__17;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__18;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__19;
static const lean_ctor_object l_Lean_instFromJsonSerialMessage_fromJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instToJsonSerialMessage_toJson___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 186, 66, 236, 16, 221, 215, 158)}};
static const lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__20 = (const lean_object*)&l_Lean_instFromJsonSerialMessage_fromJson___closed__20_value;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__21;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__22;
static lean_once_cell_t l_Lean_instFromJsonSerialMessage_fromJson___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instFromJsonSerialMessage_fromJson___closed__23;
LEAN_EXPORT lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object*);
static const lean_closure_object l_Lean_instFromJsonSerialMessage___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instFromJsonSerialMessage_fromJson, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instFromJsonSerialMessage___closed__0 = (const lean_object*)&l_Lean_instFromJsonSerialMessage___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instFromJsonSerialMessage = (const lean_object*)&l_Lean_instFromJsonSerialMessage___closed__0_value;
static const lean_string_object l_Lean_errorNameSuffix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_errorNameSuffix___closed__0 = (const lean_object*)&l_Lean_errorNameSuffix___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_errorNameSuffix = (const lean_object*)&l_Lean_errorNameSuffix___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_kindOfErrorName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_tagWithErrorName(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "nested"};
static const lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0 = (const lean_object*)&l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_stripNestedTags(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toMessage(lean_object*);
static const lean_ctor_object l_Lean_SerialMessage_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__2_value)}};
static const lean_object* l_Lean_SerialMessage_toString___closed__0 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__0_value;
static const lean_ctor_object l_Lean_SerialMessage_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instToJsonMessageSeverity_toJson___closed__4_value)}};
static const lean_object* l_Lean_SerialMessage_toString___closed__1 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__1_value;
static const lean_string_object l_Lean_SerialMessage_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":\n"};
static const lean_object* l_Lean_SerialMessage_toString___closed__2 = (const lean_object*)&l_Lean_SerialMessage_toString___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SerialMessage_instToString___lam__0(lean_object*);
static const lean_closure_object l_Lean_SerialMessage_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SerialMessage_instToString___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SerialMessage_instToString___closed__0 = (const lean_object*)&l_Lean_SerialMessage_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_SerialMessage_instToString = (const lean_object*)&l_Lean_SerialMessage_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Message_kind(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_kind___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Message_isTrace(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_isTrace___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_serialize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_serialize___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toString(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Message_toString___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toJson(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Message_toJson___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__0;
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__1;
static lean_once_cell_t l_Lean_instInhabitedMessageLog_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMessageLog_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageLog_default;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMessageLog;
LEAN_EXPORT lean_object* l_Lean_MessageLog_empty;
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasUnreported(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasUnreported___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
static const lean_ctor_object l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MessageLog_instAppend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MessageLog_append, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MessageLog_instAppend___closed__0 = (const lean_object*)&l_Lean_MessageLog_instAppend___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_MessageLog_instAppend = (const lean_object*)&l_Lean_MessageLog_instAppend___closed__0_value;
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(uint8_t, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasErrors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasErrors___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_markAllReported(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToWarnings(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToInfos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_getInfoMessages(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_getWarningMessages(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MessageData_nestD(lean_object*);
LEAN_EXPORT lean_object* l_Lean_indentD(lean_object*);
LEAN_EXPORT lean_object* l_Lean_indentExpr(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_inlineExpr_spec__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_inlineExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " `"};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_inlineExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__2;
static const lean_string_object l_Lean_inlineExpr___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "` "};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__3 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_inlineExpr___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExpr___lam__0___closed__3_value)}};
static const lean_object* l_Lean_inlineExpr___lam__0___closed__4 = (const lean_object*)&l_Lean_inlineExpr___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__5;
static lean_once_cell_t l_Lean_inlineExpr___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExpr___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExpr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_inlineExprTrailing___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_inlineExprTrailing___lam__0___closed__0 = (const lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_inlineExprTrailing___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__0_value)}};
static const lean_object* l_Lean_inlineExprTrailing___lam__0___closed__1 = (const lean_object*)&l_Lean_inlineExprTrailing___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_inlineExprTrailing___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_inlineExprTrailing___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing(lean_object*, lean_object*);
static const lean_string_object l_Lean_aquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "「"};
static const lean_object* l_Lean_aquote___closed__0 = (const lean_object*)&l_Lean_aquote___closed__0_value;
static const lean_ctor_object l_Lean_aquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_aquote___closed__0_value)}};
static const lean_object* l_Lean_aquote___closed__1 = (const lean_object*)&l_Lean_aquote___closed__1_value;
static lean_once_cell_t l_Lean_aquote___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_aquote___closed__2;
static const lean_string_object l_Lean_aquote___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "」"};
static const lean_object* l_Lean_aquote___closed__3 = (const lean_object*)&l_Lean_aquote___closed__3_value;
static const lean_ctor_object l_Lean_aquote___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_aquote___closed__3_value)}};
static const lean_object* l_Lean_aquote___closed__4 = (const lean_object*)&l_Lean_aquote___closed__4_value;
static lean_once_cell_t l_Lean_aquote___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_aquote___closed__5;
LEAN_EXPORT lean_object* l_Lean_aquote(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___redArg___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0 = (const lean_object*)&l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_stringToMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_stringToMessageData___closed__0 = (const lean_object*)&l_Lean_stringToMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat(lean_object*, lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataExpr = (const lean_object*)&l_Lean_MessageData_instCoeExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataLevel = (const lean_object*)&l_Lean_MessageData_instCoeLevel___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataName = (const lean_object*)&l_Lean_MessageData_instCoeName___closed__0_value;
static const lean_closure_object l_Lean_instToMessageDataString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_stringToMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataString___closed__0 = (const lean_object*)&l_Lean_instToMessageDataString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataString = (const lean_object*)&l_Lean_instToMessageDataString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataSyntax = (const lean_object*)&l_Lean_MessageData_instCoeSyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataFormat = (const lean_object*)&l_Lean_MessageData_instCoeString___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataMVarId = (const lean_object*)&l_Lean_MessageData_instCoeMVarId___closed__0_value;
static const lean_closure_object l_Lean_instToMessageDataMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_instToMessageDataMessageData___closed__0 = (const lean_object*)&l_Lean_instToMessageDataMessageData___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataMessageData = (const lean_object*)&l_Lean_instToMessageDataMessageData___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_instToMessageDataSubarray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToMessageDataSubarray___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataSubarray___redArg___closed__0 = (const lean_object*)&l_Lean_instToMessageDataSubarray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray(lean_object*, lean_object*);
static const lean_string_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "some ("};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instToMessageDataOption___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__2;
static const lean_ctor_object l_Lean_instToMessageDataOption___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_mkErrorStringWithPos___closed__4_value)}};
static const lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_instToMessageDataOption___redArg___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_instToMessageDataOption___redArg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOption___redArg___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_instToMessageDataOptionExpr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__0_value)}};
static const lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__1 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_instToMessageDataOptionExpr___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instToMessageDataOptionExpr___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOptionExpr___lam__0(lean_object*);
static const lean_closure_object l_Lean_instToMessageDataOptionExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instToMessageDataOptionExpr___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instToMessageDataOptionExpr___closed__0 = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_instToMessageDataOptionExpr = (const lean_object*)&l_Lean_instToMessageDataOptionExpr___closed__0_value;
static const lean_string_object l_Lean_termM_x21___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "termM!_"};
static const lean_object* l_Lean_termM_x21___00__closed__0 = (const lean_object*)&l_Lean_termM_x21___00__closed__0_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_termM_x21___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__1_value_aux_0),((lean_object*)&l_Lean_termM_x21___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 254, 249, 246, 41, 222, 210, 184)}};
static const lean_object* l_Lean_termM_x21___00__closed__1 = (const lean_object*)&l_Lean_termM_x21___00__closed__1_value;
static const lean_string_object l_Lean_termM_x21___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lean_termM_x21___00__closed__2 = (const lean_object*)&l_Lean_termM_x21___00__closed__2_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lean_termM_x21___00__closed__3 = (const lean_object*)&l_Lean_termM_x21___00__closed__3_value;
static const lean_string_object l_Lean_termM_x21___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "m!"};
static const lean_object* l_Lean_termM_x21___00__closed__4 = (const lean_object*)&l_Lean_termM_x21___00__closed__4_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__4_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__5 = (const lean_object*)&l_Lean_termM_x21___00__closed__5_value;
static const lean_string_object l_Lean_termM_x21___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "interpolatedStr"};
static const lean_object* l_Lean_termM_x21___00__closed__6 = (const lean_object*)&l_Lean_termM_x21___00__closed__6_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(156, 58, 177, 246, 99, 11, 16, 252)}};
static const lean_object* l_Lean_termM_x21___00__closed__7 = (const lean_object*)&l_Lean_termM_x21___00__closed__7_value;
static const lean_string_object l_Lean_termM_x21___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l_Lean_termM_x21___00__closed__8 = (const lean_object*)&l_Lean_termM_x21___00__closed__8_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__8_value),LEAN_SCALAR_PTR_LITERAL(187, 230, 181, 162, 253, 146, 122, 119)}};
static const lean_object* l_Lean_termM_x21___00__closed__9 = (const lean_object*)&l_Lean_termM_x21___00__closed__9_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 7}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_termM_x21___00__closed__10 = (const lean_object*)&l_Lean_termM_x21___00__closed__10_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__7_value),((lean_object*)&l_Lean_termM_x21___00__closed__10_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__11 = (const lean_object*)&l_Lean_termM_x21___00__closed__11_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__3_value),((lean_object*)&l_Lean_termM_x21___00__closed__5_value),((lean_object*)&l_Lean_termM_x21___00__closed__11_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__12 = (const lean_object*)&l_Lean_termM_x21___00__closed__12_value;
static const lean_ctor_object l_Lean_termM_x21___00__closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_termM_x21___00__closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_termM_x21___00__closed__12_value)}};
static const lean_object* l_Lean_termM_x21___00__closed__13 = (const lean_object*)&l_Lean_termM_x21___00__closed__13_value;
LEAN_EXPORT const lean_object* l_Lean_termM_x21__ = (const lean_object*)&l_Lean_termM_x21___00__closed__13_value;
static lean_once_cell_t l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(117, 193, 162, 252, 67, 31, 191, 159)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instImpl___closed__2_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__2_value),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__4_value)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5_value;
static const lean_string_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "toMessageData"};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value;
static lean_once_cell_t l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(214, 4, 57, 33, 167, 136, 170, 64)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8_value;
static const lean_string_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ToMessageData"};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instImpl___closed__0_00___x40_Lean_Message_4238524789____hygCtx___hyg_144__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_0),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(14, 83, 41, 225, 154, 14, 42, 20)}};
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value_aux_1),((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(167, 56, 87, 160, 191, 253, 244, 156)}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__10_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value;
static const lean_ctor_object l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12 = (const lean_object*)&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12_value;
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_toMessageList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* l_Lean_toMessageList___closed__0 = (const lean_object*)&l_Lean_toMessageList___closed__0_value;
static lean_once_cell_t l_Lean_toMessageList___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_toMessageList___closed__1;
LEAN_EXPORT lean_object* l_Lean_toMessageList(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "(kernel) declaration type mismatch, '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "' has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nbut it is expected to have type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__0;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__1;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__2;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "(kernel) unknown constant '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__3 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__3_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__4;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__5 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__5_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__6;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "(kernel) constant has already been declared '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__7 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__7_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__8;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "(kernel) declaration type mismatch"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__9 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__9_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__9_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__10 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__10_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__11;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(kernel) declaration has metavariables '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__12 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__12_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__13;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "(kernel) declaration has free variables '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__14 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__14_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__15;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "', expression: "};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__16 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__16_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__17;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(kernel) function expected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__18 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__18_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__19;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "(kernel) type expected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__20 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__20_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__21;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "(kernel) let-declaration type mismatch '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__22 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__22_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__23;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "(kernel) type mismatch at"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__24 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__24_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__25;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "(kernel) application type mismatch"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__26 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__26_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__27;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "\nargument has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__28 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__28_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__29;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\nbut function has type"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__30 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__30_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__31;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "(kernel) invalid projection"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__32 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__32_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__33;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "(kernel) type of theorem '"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__34 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__34_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__35;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "' is not a proposition"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__36 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__36_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__37_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__37;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(kernel) "};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__38 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__38_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__39;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "(kernel) deterministic timeout"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__40 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__40_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__40_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__41 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__41_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__42_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__42;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "(kernel) excessive memory consumption detected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__43 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__43_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__43_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__44 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__44_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__45;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "(kernel) deep recursion detected"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__46 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__46_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__46_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__47 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__47_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__48;
static const lean_string_object l_Lean_Kernel_Exception_toMessageData___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "(kernel) interrupted"};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__49 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__49_value;
static const lean_ctor_object l_Lean_Kernel_Exception_toMessageData___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__49_value)}};
static const lean_object* l_Lean_Kernel_Exception_toMessageData___closed__50 = (const lean_object*)&l_Lean_Kernel_Exception_toMessageData___closed__50_value;
static lean_once_cell_t l_Lean_Kernel_Exception_toMessageData___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Kernel_Exception_toMessageData___closed__51;
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toTraceElem___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_toTraceElem(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos(lean_object* v_fileName_7_, lean_object* v_pos_8_, lean_object* v_msg_9_, lean_object* v_endPos_10_, lean_object* v_kind_11_, lean_object* v_name_12_){
_start:
{
lean_object* v___y_14_; lean_object* v___y_15_; lean_object* v___y_32_; lean_object* v___y_33_; lean_object* v___y_34_; lean_object* v___y_39_; lean_object* v___y_40_; lean_object* v___y_41_; lean_object* v___y_42_; lean_object* v___y_47_; lean_object* v___y_48_; lean_object* v___y_53_; lean_object* v___y_70_; 
if (lean_obj_tag(v_endPos_10_) == 0)
{
lean_object* v___x_72_; 
v___x_72_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_70_ = v___x_72_;
goto v___jp_69_;
}
else
{
lean_object* v_val_73_; lean_object* v_line_74_; lean_object* v_column_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v_val_73_ = lean_ctor_get(v_endPos_10_, 0);
lean_inc(v_val_73_);
lean_dec_ref_known(v_endPos_10_, 1);
v_line_74_ = lean_ctor_get(v_val_73_, 0);
lean_inc(v_line_74_);
v_column_75_ = lean_ctor_get(v_val_73_, 1);
lean_inc(v_column_75_);
lean_dec(v_val_73_);
v___x_76_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__5));
v___x_77_ = l_Nat_reprFast(v_line_74_);
v___x_78_ = lean_string_append(v___x_76_, v___x_77_);
lean_dec_ref(v___x_77_);
v___x_79_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_80_ = lean_string_append(v___x_78_, v___x_79_);
v___x_81_ = l_Nat_reprFast(v_column_75_);
v___x_82_ = lean_string_append(v___x_80_, v___x_81_);
lean_dec_ref(v___x_81_);
v___y_70_ = v___x_82_;
goto v___jp_69_;
}
v___jp_13_:
{
lean_object* v_line_16_; lean_object* v_column_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v_line_16_ = lean_ctor_get(v_pos_8_, 0);
lean_inc(v_line_16_);
v_column_17_ = lean_ctor_get(v_pos_8_, 1);
lean_inc(v_column_17_);
lean_dec_ref(v_pos_8_);
v___x_18_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_19_ = lean_string_append(v_fileName_7_, v___x_18_);
v___x_20_ = l_Nat_reprFast(v_line_16_);
v___x_21_ = lean_string_append(v___x_19_, v___x_20_);
lean_dec_ref(v___x_20_);
v___x_22_ = lean_string_append(v___x_21_, v___x_18_);
v___x_23_ = l_Nat_reprFast(v_column_17_);
v___x_24_ = lean_string_append(v___x_22_, v___x_23_);
lean_dec_ref(v___x_23_);
v___x_25_ = lean_string_append(v___x_24_, v___y_14_);
lean_dec_ref(v___y_14_);
v___x_26_ = lean_string_append(v___x_25_, v___x_18_);
v___x_27_ = lean_string_append(v___x_26_, v___y_15_);
lean_dec_ref(v___y_15_);
v___x_28_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__1));
v___x_29_ = lean_string_append(v___x_27_, v___x_28_);
v___x_30_ = lean_string_append(v___x_29_, v_msg_9_);
return v___x_30_;
}
v___jp_31_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_string_append(v___y_32_, v___y_34_);
lean_dec_ref(v___y_34_);
v___x_36_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__0));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
v___y_14_ = v___y_33_;
v___y_15_ = v___x_37_;
goto v___jp_13_;
}
v___jp_38_:
{
lean_object* v___x_43_; 
lean_inc_ref(v___y_41_);
v___x_43_ = lean_string_append(v___y_41_, v___y_42_);
if (lean_obj_tag(v___y_40_) == 0)
{
lean_object* v___x_44_; 
v___x_44_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_32_ = v___x_43_;
v___y_33_ = v___y_39_;
v___y_34_ = v___x_44_;
goto v___jp_31_;
}
else
{
lean_object* v_val_45_; 
v_val_45_ = lean_ctor_get(v___y_40_, 0);
lean_inc(v_val_45_);
lean_dec_ref_known(v___y_40_, 1);
v___y_32_ = v___x_43_;
v___y_33_ = v___y_39_;
v___y_34_ = v_val_45_;
goto v___jp_31_;
}
}
v___jp_46_:
{
lean_object* v___x_49_; 
v___x_49_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__1));
if (lean_obj_tag(v_kind_11_) == 0)
{
lean_object* v___x_50_; 
v___x_50_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_39_ = v___y_47_;
v___y_40_ = v___y_48_;
v___y_41_ = v___x_49_;
v___y_42_ = v___x_50_;
goto v___jp_38_;
}
else
{
lean_object* v_val_51_; 
v_val_51_ = lean_ctor_get(v_kind_11_, 0);
v___y_39_ = v___y_47_;
v___y_40_ = v___y_48_;
v___y_41_ = v___x_49_;
v___y_42_ = v_val_51_;
goto v___jp_38_;
}
}
v___jp_52_:
{
if (lean_obj_tag(v_name_12_) == 0)
{
lean_object* v___x_54_; 
v___x_54_ = lean_box(0);
v___y_47_ = v___y_53_;
v___y_48_ = v___x_54_;
goto v___jp_46_;
}
else
{
lean_object* v_val_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_68_; 
v_val_55_ = lean_ctor_get(v_name_12_, 0);
v_isSharedCheck_68_ = !lean_is_exclusive(v_name_12_);
if (v_isSharedCheck_68_ == 0)
{
v___x_57_ = v_name_12_;
v_isShared_58_ = v_isSharedCheck_68_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_val_55_);
lean_dec(v_name_12_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_68_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_66_; 
v___x_59_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__3));
v___x_60_ = 1;
v___x_61_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_val_55_, v___x_60_);
v___x_62_ = lean_string_append(v___x_59_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__4));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_64_);
v___x_66_ = v___x_57_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v___x_64_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
v___y_47_ = v___y_53_;
v___y_48_ = v___x_66_;
goto v___jp_46_;
}
}
}
}
v___jp_69_:
{
if (lean_obj_tag(v_name_12_) == 0)
{
if (lean_obj_tag(v_kind_11_) == 0)
{
lean_object* v___x_71_; 
v___x_71_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___y_14_ = v___y_70_;
v___y_15_ = v___x_71_;
goto v___jp_13_;
}
else
{
v___y_53_ = v___y_70_;
goto v___jp_52_;
}
}
else
{
v___y_53_ = v___y_70_;
goto v___jp_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkErrorStringWithPos___boxed(lean_object* v_fileName_83_, lean_object* v_pos_84_, lean_object* v_msg_85_, lean_object* v_endPos_86_, lean_object* v_kind_87_, lean_object* v_name_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l_Lean_mkErrorStringWithPos(v_fileName_83_, v_pos_84_, v_msg_85_, v_endPos_86_, v_kind_87_, v_name_88_);
lean_dec(v_kind_87_);
lean_dec_ref(v_msg_85_);
return v_res_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx(uint8_t v_x_90_){
_start:
{
switch(v_x_90_)
{
case 0:
{
lean_object* v___x_91_; 
v___x_91_ = lean_unsigned_to_nat(0u);
return v___x_91_;
}
case 1:
{
lean_object* v___x_92_; 
v___x_92_ = lean_unsigned_to_nat(1u);
return v___x_92_;
}
default: 
{
lean_object* v___x_93_; 
v___x_93_ = lean_unsigned_to_nat(2u);
return v___x_93_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorIdx___boxed(lean_object* v_x_94_){
_start:
{
uint8_t v_x_boxed_95_; lean_object* v_res_96_; 
v_x_boxed_95_ = lean_unbox(v_x_94_);
v_res_96_ = l_Lean_MessageSeverity_ctorIdx(v_x_boxed_95_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toCtorIdx(uint8_t v_x_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = l_Lean_MessageSeverity_ctorIdx(v_x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toCtorIdx___boxed(lean_object* v_x_99_){
_start:
{
uint8_t v_x_4__boxed_100_; lean_object* v_res_101_; 
v_x_4__boxed_100_ = lean_unbox(v_x_99_);
v_res_101_ = l_Lean_MessageSeverity_toCtorIdx(v_x_4__boxed_100_);
return v_res_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg(lean_object* v_k_102_){
_start:
{
lean_inc(v_k_102_);
return v_k_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___redArg___boxed(lean_object* v_k_103_){
_start:
{
lean_object* v_res_104_; 
v_res_104_ = l_Lean_MessageSeverity_ctorElim___redArg(v_k_103_);
lean_dec(v_k_103_);
return v_res_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim(lean_object* v_motive_105_, lean_object* v_ctorIdx_106_, uint8_t v_t_107_, lean_object* v_h_108_, lean_object* v_k_109_){
_start:
{
lean_inc(v_k_109_);
return v_k_109_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_ctorElim___boxed(lean_object* v_motive_110_, lean_object* v_ctorIdx_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_k_114_){
_start:
{
uint8_t v_t_boxed_115_; lean_object* v_res_116_; 
v_t_boxed_115_ = lean_unbox(v_t_112_);
v_res_116_ = l_Lean_MessageSeverity_ctorElim(v_motive_110_, v_ctorIdx_111_, v_t_boxed_115_, v_h_113_, v_k_114_);
lean_dec(v_k_114_);
lean_dec(v_ctorIdx_111_);
return v_res_116_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg(lean_object* v_information_117_){
_start:
{
lean_inc(v_information_117_);
return v_information_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___redArg___boxed(lean_object* v_information_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l_Lean_MessageSeverity_information_elim___redArg(v_information_118_);
lean_dec(v_information_118_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim(lean_object* v_motive_120_, uint8_t v_t_121_, lean_object* v_h_122_, lean_object* v_information_123_){
_start:
{
lean_inc(v_information_123_);
return v_information_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_information_elim___boxed(lean_object* v_motive_124_, lean_object* v_t_125_, lean_object* v_h_126_, lean_object* v_information_127_){
_start:
{
uint8_t v_t_boxed_128_; lean_object* v_res_129_; 
v_t_boxed_128_ = lean_unbox(v_t_125_);
v_res_129_ = l_Lean_MessageSeverity_information_elim(v_motive_124_, v_t_boxed_128_, v_h_126_, v_information_127_);
lean_dec(v_information_127_);
return v_res_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg(lean_object* v_warning_130_){
_start:
{
lean_inc(v_warning_130_);
return v_warning_130_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___redArg___boxed(lean_object* v_warning_131_){
_start:
{
lean_object* v_res_132_; 
v_res_132_ = l_Lean_MessageSeverity_warning_elim___redArg(v_warning_131_);
lean_dec(v_warning_131_);
return v_res_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim(lean_object* v_motive_133_, uint8_t v_t_134_, lean_object* v_h_135_, lean_object* v_warning_136_){
_start:
{
lean_inc(v_warning_136_);
return v_warning_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_warning_elim___boxed(lean_object* v_motive_137_, lean_object* v_t_138_, lean_object* v_h_139_, lean_object* v_warning_140_){
_start:
{
uint8_t v_t_boxed_141_; lean_object* v_res_142_; 
v_t_boxed_141_ = lean_unbox(v_t_138_);
v_res_142_ = l_Lean_MessageSeverity_warning_elim(v_motive_137_, v_t_boxed_141_, v_h_139_, v_warning_140_);
lean_dec(v_warning_140_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg(lean_object* v_error_143_){
_start:
{
lean_inc(v_error_143_);
return v_error_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___redArg___boxed(lean_object* v_error_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = l_Lean_MessageSeverity_error_elim___redArg(v_error_144_);
lean_dec(v_error_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim(lean_object* v_motive_146_, uint8_t v_t_147_, lean_object* v_h_148_, lean_object* v_error_149_){
_start:
{
lean_inc(v_error_149_);
return v_error_149_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_error_elim___boxed(lean_object* v_motive_150_, lean_object* v_t_151_, lean_object* v_h_152_, lean_object* v_error_153_){
_start:
{
uint8_t v_t_boxed_154_; lean_object* v_res_155_; 
v_t_boxed_154_ = lean_unbox(v_t_151_);
v_res_155_ = l_Lean_MessageSeverity_error_elim(v_motive_150_, v_t_boxed_154_, v_h_152_, v_error_153_);
lean_dec(v_error_153_);
return v_res_155_;
}
}
static uint8_t _init_l_Lean_instInhabitedMessageSeverity_default(void){
_start:
{
uint8_t v___x_156_; 
v___x_156_ = 0;
return v___x_156_;
}
}
static uint8_t _init_l_Lean_instInhabitedMessageSeverity(void){
_start:
{
uint8_t v___x_157_; 
v___x_157_ = 0;
return v___x_157_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t v_x_158_, uint8_t v_y_159_){
_start:
{
lean_object* v___x_160_; lean_object* v___x_161_; uint8_t v___x_162_; 
v___x_160_ = l_Lean_MessageSeverity_ctorIdx(v_x_158_);
v___x_161_ = l_Lean_MessageSeverity_ctorIdx(v_y_159_);
v___x_162_ = lean_nat_dec_eq(v___x_160_, v___x_161_);
lean_dec(v___x_161_);
lean_dec(v___x_160_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqMessageSeverity_beq___boxed(lean_object* v_x_163_, lean_object* v_y_164_){
_start:
{
uint8_t v_x_17__boxed_165_; uint8_t v_y_18__boxed_166_; uint8_t v_res_167_; lean_object* v_r_168_; 
v_x_17__boxed_165_ = lean_unbox(v_x_163_);
v_y_18__boxed_166_ = lean_unbox(v_y_164_);
v_res_167_ = l_Lean_instBEqMessageSeverity_beq(v_x_17__boxed_165_, v_y_18__boxed_166_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson(uint8_t v_x_180_){
_start:
{
switch(v_x_180_)
{
case 0:
{
lean_object* v___x_181_; 
v___x_181_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__1));
return v___x_181_;
}
case 1:
{
lean_object* v___x_182_; 
v___x_182_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__3));
return v___x_182_;
}
default: 
{
lean_object* v___x_183_; 
v___x_183_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__5));
return v___x_183_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonMessageSeverity_toJson___boxed(lean_object* v_x_184_){
_start:
{
uint8_t v_x_67__boxed_185_; lean_object* v_res_186_; 
v_x_67__boxed_185_ = lean_unbox(v_x_184_);
v_res_186_ = l_Lean_instToJsonMessageSeverity_toJson(v_x_67__boxed_185_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonMessageSeverity_fromJson(lean_object* v_json_204_){
_start:
{
lean_object* v___x_205_; 
v___x_205_ = l_Lean_Json_getTag_x3f(v_json_204_);
if (lean_obj_tag(v___x_205_) == 0)
{
lean_object* v___x_206_; 
v___x_206_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__1));
return v___x_206_;
}
else
{
lean_object* v_val_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v_val_207_ = lean_ctor_get(v___x_205_, 0);
lean_inc(v_val_207_);
lean_dec_ref_known(v___x_205_, 1);
v___x_208_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__4));
v___x_209_ = lean_string_dec_eq(v_val_207_, v___x_208_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; uint8_t v___x_211_; 
v___x_210_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__0));
v___x_211_ = lean_string_dec_eq(v_val_207_, v___x_210_);
if (v___x_211_ == 0)
{
lean_object* v___x_212_; uint8_t v___x_213_; 
v___x_212_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__2));
v___x_213_ = lean_string_dec_eq(v_val_207_, v___x_212_);
lean_dec(v_val_207_);
if (v___x_213_ == 0)
{
lean_object* v___x_214_; 
v___x_214_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__3));
return v___x_214_;
}
else
{
lean_object* v___x_215_; 
v___x_215_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__4));
return v___x_215_;
}
}
else
{
lean_object* v___x_216_; 
lean_dec(v_val_207_);
v___x_216_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__5));
return v___x_216_;
}
}
else
{
lean_object* v___x_217_; 
lean_dec(v_val_207_);
v___x_217_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity_fromJson___closed__6));
return v___x_217_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString(uint8_t v_x_220_){
_start:
{
switch(v_x_220_)
{
case 0:
{
lean_object* v___x_221_; 
v___x_221_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__0));
return v___x_221_;
}
case 1:
{
lean_object* v___x_222_; 
v___x_222_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__2));
return v___x_222_;
}
default: 
{
lean_object* v___x_223_; 
v___x_223_ = ((lean_object*)(l_Lean_instToJsonMessageSeverity_toJson___closed__4));
return v___x_223_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageSeverity_toString___boxed(lean_object* v_x_224_){
_start:
{
uint8_t v_x_28__boxed_225_; lean_object* v_res_226_; 
v_x_28__boxed_225_ = lean_unbox(v_x_224_);
v_res_226_ = l_Lean_MessageSeverity_toString(v_x_28__boxed_225_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx(uint8_t v_x_229_){
_start:
{
switch(v_x_229_)
{
case 0:
{
lean_object* v___x_230_; 
v___x_230_ = lean_unsigned_to_nat(0u);
return v___x_230_;
}
case 1:
{
lean_object* v___x_231_; 
v___x_231_ = lean_unsigned_to_nat(1u);
return v___x_231_;
}
default: 
{
lean_object* v___x_232_; 
v___x_232_ = lean_unsigned_to_nat(2u);
return v___x_232_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorIdx___boxed(lean_object* v_x_233_){
_start:
{
uint8_t v_x_boxed_234_; lean_object* v_res_235_; 
v_x_boxed_234_ = lean_unbox(v_x_233_);
v_res_235_ = l_Lean_TraceResult_ctorIdx(v_x_boxed_234_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toCtorIdx(uint8_t v_x_236_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l_Lean_TraceResult_ctorIdx(v_x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toCtorIdx___boxed(lean_object* v_x_238_){
_start:
{
uint8_t v_x_4__boxed_239_; lean_object* v_res_240_; 
v_x_4__boxed_239_ = lean_unbox(v_x_238_);
v_res_240_ = l_Lean_TraceResult_toCtorIdx(v_x_4__boxed_239_);
return v_res_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg(lean_object* v_k_241_){
_start:
{
lean_inc(v_k_241_);
return v_k_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___redArg___boxed(lean_object* v_k_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_TraceResult_ctorElim___redArg(v_k_242_);
lean_dec(v_k_242_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim(lean_object* v_motive_244_, lean_object* v_ctorIdx_245_, uint8_t v_t_246_, lean_object* v_h_247_, lean_object* v_k_248_){
_start:
{
lean_inc(v_k_248_);
return v_k_248_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_ctorElim___boxed(lean_object* v_motive_249_, lean_object* v_ctorIdx_250_, lean_object* v_t_251_, lean_object* v_h_252_, lean_object* v_k_253_){
_start:
{
uint8_t v_t_boxed_254_; lean_object* v_res_255_; 
v_t_boxed_254_ = lean_unbox(v_t_251_);
v_res_255_ = l_Lean_TraceResult_ctorElim(v_motive_249_, v_ctorIdx_250_, v_t_boxed_254_, v_h_252_, v_k_253_);
lean_dec(v_k_253_);
lean_dec(v_ctorIdx_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg(lean_object* v_success_256_){
_start:
{
lean_inc(v_success_256_);
return v_success_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___redArg___boxed(lean_object* v_success_257_){
_start:
{
lean_object* v_res_258_; 
v_res_258_ = l_Lean_TraceResult_success_elim___redArg(v_success_257_);
lean_dec(v_success_257_);
return v_res_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim(lean_object* v_motive_259_, uint8_t v_t_260_, lean_object* v_h_261_, lean_object* v_success_262_){
_start:
{
lean_inc(v_success_262_);
return v_success_262_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_success_elim___boxed(lean_object* v_motive_263_, lean_object* v_t_264_, lean_object* v_h_265_, lean_object* v_success_266_){
_start:
{
uint8_t v_t_boxed_267_; lean_object* v_res_268_; 
v_t_boxed_267_ = lean_unbox(v_t_264_);
v_res_268_ = l_Lean_TraceResult_success_elim(v_motive_263_, v_t_boxed_267_, v_h_265_, v_success_266_);
lean_dec(v_success_266_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg(lean_object* v_failure_269_){
_start:
{
lean_inc(v_failure_269_);
return v_failure_269_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___redArg___boxed(lean_object* v_failure_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_TraceResult_failure_elim___redArg(v_failure_270_);
lean_dec(v_failure_270_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim(lean_object* v_motive_272_, uint8_t v_t_273_, lean_object* v_h_274_, lean_object* v_failure_275_){
_start:
{
lean_inc(v_failure_275_);
return v_failure_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_failure_elim___boxed(lean_object* v_motive_276_, lean_object* v_t_277_, lean_object* v_h_278_, lean_object* v_failure_279_){
_start:
{
uint8_t v_t_boxed_280_; lean_object* v_res_281_; 
v_t_boxed_280_ = lean_unbox(v_t_277_);
v_res_281_ = l_Lean_TraceResult_failure_elim(v_motive_276_, v_t_boxed_280_, v_h_278_, v_failure_279_);
lean_dec(v_failure_279_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg(lean_object* v_error_282_){
_start:
{
lean_inc(v_error_282_);
return v_error_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___redArg___boxed(lean_object* v_error_283_){
_start:
{
lean_object* v_res_284_; 
v_res_284_ = l_Lean_TraceResult_error_elim___redArg(v_error_283_);
lean_dec(v_error_283_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim(lean_object* v_motive_285_, uint8_t v_t_286_, lean_object* v_h_287_, lean_object* v_error_288_){
_start:
{
lean_inc(v_error_288_);
return v_error_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_error_elim___boxed(lean_object* v_motive_289_, lean_object* v_t_290_, lean_object* v_h_291_, lean_object* v_error_292_){
_start:
{
uint8_t v_t_boxed_293_; lean_object* v_res_294_; 
v_t_boxed_293_ = lean_unbox(v_t_290_);
v_res_294_ = l_Lean_TraceResult_error_elim(v_motive_289_, v_t_boxed_293_, v_h_291_, v_error_292_);
lean_dec(v_error_292_);
return v_res_294_;
}
}
static uint8_t _init_l_Lean_instInhabitedTraceResult_default(void){
_start:
{
uint8_t v___x_295_; 
v___x_295_ = 0;
return v___x_295_;
}
}
static uint8_t _init_l_Lean_instInhabitedTraceResult(void){
_start:
{
uint8_t v___x_296_; 
v___x_296_ = 0;
return v___x_296_;
}
}
LEAN_EXPORT uint8_t l_Lean_instBEqTraceResult_beq(uint8_t v_x_297_, uint8_t v_y_298_){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; uint8_t v___x_301_; 
v___x_299_ = l_Lean_TraceResult_ctorIdx(v_x_297_);
v___x_300_ = l_Lean_TraceResult_ctorIdx(v_y_298_);
v___x_301_ = lean_nat_dec_eq(v___x_299_, v___x_300_);
lean_dec(v___x_300_);
lean_dec(v___x_299_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_instBEqTraceResult_beq___boxed(lean_object* v_x_302_, lean_object* v_y_303_){
_start:
{
uint8_t v_x_17__boxed_304_; uint8_t v_y_18__boxed_305_; uint8_t v_res_306_; lean_object* v_r_307_; 
v_x_17__boxed_304_ = lean_unbox(v_x_302_);
v_y_18__boxed_305_ = lean_unbox(v_y_303_);
v_res_306_ = l_Lean_instBEqTraceResult_beq(v_x_17__boxed_304_, v_y_18__boxed_305_);
v_r_307_ = lean_box(v_res_306_);
return v_r_307_;
}
}
static lean_object* _init_l_Lean_instReprTraceResult_repr___closed__6(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_319_ = lean_unsigned_to_nat(2u);
v___x_320_ = lean_nat_to_int(v___x_319_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_instReprTraceResult_repr___closed__7(void){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_to_int(v___x_321_);
return v___x_322_;
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr(uint8_t v_x_323_, lean_object* v_prec_324_){
_start:
{
lean_object* v___y_326_; lean_object* v___y_333_; lean_object* v___y_340_; 
switch(v_x_323_)
{
case 0:
{
lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_346_ = lean_unsigned_to_nat(1024u);
v___x_347_ = lean_nat_dec_le(v___x_346_, v_prec_324_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_326_ = v___x_348_;
goto v___jp_325_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_326_ = v___x_349_;
goto v___jp_325_;
}
}
case 1:
{
lean_object* v___x_350_; uint8_t v___x_351_; 
v___x_350_ = lean_unsigned_to_nat(1024u);
v___x_351_ = lean_nat_dec_le(v___x_350_, v_prec_324_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
v___x_352_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_333_ = v___x_352_;
goto v___jp_332_;
}
else
{
lean_object* v___x_353_; 
v___x_353_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_333_ = v___x_353_;
goto v___jp_332_;
}
}
default: 
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(1024u);
v___x_355_ = lean_nat_dec_le(v___x_354_, v_prec_324_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; 
v___x_356_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___y_340_ = v___x_356_;
goto v___jp_339_;
}
else
{
lean_object* v___x_357_; 
v___x_357_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__7, &l_Lean_instReprTraceResult_repr___closed__7_once, _init_l_Lean_instReprTraceResult_repr___closed__7);
v___y_340_ = v___x_357_;
goto v___jp_339_;
}
}
}
v___jp_325_:
{
lean_object* v___x_327_; lean_object* v___x_328_; uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; 
v___x_327_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__1));
lean_inc(v___y_326_);
v___x_328_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_328_, 0, v___y_326_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
v___x_329_ = 0;
v___x_330_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_330_, 0, v___x_328_);
lean_ctor_set_uint8(v___x_330_, sizeof(void*)*1, v___x_329_);
v___x_331_ = l_Repr_addAppParen(v___x_330_, v_prec_324_);
return v___x_331_;
}
v___jp_332_:
{
lean_object* v___x_334_; lean_object* v___x_335_; uint8_t v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; 
v___x_334_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__3));
lean_inc(v___y_333_);
v___x_335_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_335_, 0, v___y_333_);
lean_ctor_set(v___x_335_, 1, v___x_334_);
v___x_336_ = 0;
v___x_337_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_337_, 0, v___x_335_);
lean_ctor_set_uint8(v___x_337_, sizeof(void*)*1, v___x_336_);
v___x_338_ = l_Repr_addAppParen(v___x_337_, v_prec_324_);
return v___x_338_;
}
v___jp_339_:
{
lean_object* v___x_341_; lean_object* v___x_342_; uint8_t v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_341_ = ((lean_object*)(l_Lean_instReprTraceResult_repr___closed__5));
lean_inc(v___y_340_);
v___x_342_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_342_, 0, v___y_340_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v___x_343_ = 0;
v___x_344_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set_uint8(v___x_344_, sizeof(void*)*1, v___x_343_);
v___x_345_ = l_Repr_addAppParen(v___x_344_, v_prec_324_);
return v___x_345_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instReprTraceResult_repr___boxed(lean_object* v_x_358_, lean_object* v_prec_359_){
_start:
{
uint8_t v_x_177__boxed_360_; lean_object* v_res_361_; 
v_x_177__boxed_360_ = lean_unbox(v_x_358_);
v_res_361_ = l_Lean_instReprTraceResult_repr(v_x_177__boxed_360_, v_prec_359_);
lean_dec(v_prec_359_);
return v_res_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji(uint8_t v_x_367_){
_start:
{
switch(v_x_367_)
{
case 0:
{
lean_object* v___x_368_; 
v___x_368_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__0));
return v___x_368_;
}
case 1:
{
lean_object* v___x_369_; 
v___x_369_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__1));
return v___x_369_;
}
default: 
{
lean_object* v___x_370_; 
v___x_370_ = ((lean_object*)(l_Lean_TraceResult_toEmoji___closed__2));
return v___x_370_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TraceResult_toEmoji___boxed(lean_object* v_x_371_){
_start:
{
uint8_t v_x_31__boxed_372_; lean_object* v_res_373_; 
v_x_31__boxed_372_ = lean_unbox(v_x_371_);
v_res_373_ = l_Lean_TraceResult_toEmoji(v_x_31__boxed_372_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx(lean_object* v_x_374_){
_start:
{
switch(lean_obj_tag(v_x_374_))
{
case 0:
{
lean_object* v___x_375_; 
v___x_375_ = lean_unsigned_to_nat(0u);
return v___x_375_;
}
case 1:
{
lean_object* v___x_376_; 
v___x_376_ = lean_unsigned_to_nat(1u);
return v___x_376_;
}
case 2:
{
lean_object* v___x_377_; 
v___x_377_ = lean_unsigned_to_nat(2u);
return v___x_377_;
}
case 3:
{
lean_object* v___x_378_; 
v___x_378_ = lean_unsigned_to_nat(3u);
return v___x_378_;
}
case 4:
{
lean_object* v___x_379_; 
v___x_379_ = lean_unsigned_to_nat(4u);
return v___x_379_;
}
case 5:
{
lean_object* v___x_380_; 
v___x_380_ = lean_unsigned_to_nat(5u);
return v___x_380_;
}
case 6:
{
lean_object* v___x_381_; 
v___x_381_ = lean_unsigned_to_nat(6u);
return v___x_381_;
}
case 7:
{
lean_object* v___x_382_; 
v___x_382_ = lean_unsigned_to_nat(7u);
return v___x_382_;
}
case 8:
{
lean_object* v___x_383_; 
v___x_383_ = lean_unsigned_to_nat(8u);
return v___x_383_;
}
case 9:
{
lean_object* v___x_384_; 
v___x_384_ = lean_unsigned_to_nat(9u);
return v___x_384_;
}
case 10:
{
lean_object* v___x_385_; 
v___x_385_ = lean_unsigned_to_nat(10u);
return v___x_385_;
}
default: 
{
lean_object* v___x_386_; 
v___x_386_ = lean_unsigned_to_nat(11u);
return v___x_386_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorIdx___boxed(lean_object* v_x_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_Lean_MessageData_ctorIdx(v_x_387_);
lean_dec_ref(v_x_387_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___redArg(lean_object* v_t_389_, lean_object* v_k_390_){
_start:
{
switch(lean_obj_tag(v_t_389_))
{
case 0:
{
lean_object* v_a_391_; lean_object* v___x_392_; 
v_a_391_ = lean_ctor_get(v_t_389_, 0);
lean_inc_ref(v_a_391_);
lean_dec_ref_known(v_t_389_, 1);
v___x_392_ = lean_apply_1(v_k_390_, v_a_391_);
return v___x_392_;
}
case 1:
{
lean_object* v_a_393_; lean_object* v___x_394_; 
v_a_393_ = lean_ctor_get(v_t_389_, 0);
lean_inc(v_a_393_);
lean_dec_ref_known(v_t_389_, 1);
v___x_394_ = lean_apply_1(v_k_390_, v_a_393_);
return v___x_394_;
}
case 5:
{
lean_object* v_a_395_; lean_object* v_a_396_; lean_object* v___x_397_; 
v_a_395_ = lean_ctor_get(v_t_389_, 0);
lean_inc(v_a_395_);
v_a_396_ = lean_ctor_get(v_t_389_, 1);
lean_inc_ref(v_a_396_);
lean_dec_ref_known(v_t_389_, 2);
v___x_397_ = lean_apply_2(v_k_390_, v_a_395_, v_a_396_);
return v___x_397_;
}
case 6:
{
lean_object* v_a_398_; uint8_t v_behavior_399_; lean_object* v___x_400_; lean_object* v___x_401_; 
v_a_398_ = lean_ctor_get(v_t_389_, 0);
lean_inc_ref(v_a_398_);
v_behavior_399_ = lean_ctor_get_uint8(v_t_389_, sizeof(void*)*1);
lean_dec_ref_known(v_t_389_, 1);
v___x_400_ = lean_box(v_behavior_399_);
v___x_401_ = lean_apply_2(v_k_390_, v_a_398_, v___x_400_);
return v___x_401_;
}
case 8:
{
lean_object* v_a_402_; lean_object* v_a_403_; lean_object* v___x_404_; 
v_a_402_ = lean_ctor_get(v_t_389_, 0);
lean_inc(v_a_402_);
v_a_403_ = lean_ctor_get(v_t_389_, 1);
lean_inc_ref(v_a_403_);
lean_dec_ref_known(v_t_389_, 2);
v___x_404_ = lean_apply_2(v_k_390_, v_a_402_, v_a_403_);
return v___x_404_;
}
case 9:
{
lean_object* v_data_405_; lean_object* v_msg_406_; lean_object* v_children_407_; lean_object* v___x_408_; 
v_data_405_ = lean_ctor_get(v_t_389_, 0);
lean_inc_ref(v_data_405_);
v_msg_406_ = lean_ctor_get(v_t_389_, 1);
lean_inc_ref(v_msg_406_);
v_children_407_ = lean_ctor_get(v_t_389_, 2);
lean_inc_ref(v_children_407_);
lean_dec_ref_known(v_t_389_, 3);
v___x_408_ = lean_apply_3(v_k_390_, v_data_405_, v_msg_406_, v_children_407_);
return v___x_408_;
}
case 11:
{
lean_object* v_a_409_; lean_object* v_a_410_; lean_object* v___x_411_; 
v_a_409_ = lean_ctor_get(v_t_389_, 0);
lean_inc(v_a_409_);
v_a_410_ = lean_ctor_get(v_t_389_, 1);
lean_inc_ref(v_a_410_);
lean_dec_ref_known(v_t_389_, 2);
v___x_411_ = lean_apply_2(v_k_390_, v_a_409_, v_a_410_);
return v___x_411_;
}
default: 
{
lean_object* v_a_412_; lean_object* v_a_413_; lean_object* v___x_414_; 
v_a_412_ = lean_ctor_get(v_t_389_, 0);
lean_inc_ref(v_a_412_);
v_a_413_ = lean_ctor_get(v_t_389_, 1);
lean_inc_ref(v_a_413_);
lean_dec_ref(v_t_389_);
v___x_414_ = lean_apply_2(v_k_390_, v_a_412_, v_a_413_);
return v___x_414_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim(lean_object* v_motive__1_415_, lean_object* v_ctorIdx_416_, lean_object* v_t_417_, lean_object* v_h_418_, lean_object* v_k_419_){
_start:
{
lean_object* v___x_420_; 
v___x_420_ = l_Lean_MessageData_ctorElim___redArg(v_t_417_, v_k_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ctorElim___boxed(lean_object* v_motive__1_421_, lean_object* v_ctorIdx_422_, lean_object* v_t_423_, lean_object* v_h_424_, lean_object* v_k_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_MessageData_ctorElim(v_motive__1_421_, v_ctorIdx_422_, v_t_423_, v_h_424_, v_k_425_);
lean_dec(v_ctorIdx_422_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim___redArg(lean_object* v_t_427_, lean_object* v_ofFormatWithInfos_428_){
_start:
{
lean_object* v___x_429_; 
v___x_429_ = l_Lean_MessageData_ctorElim___redArg(v_t_427_, v_ofFormatWithInfos_428_);
return v___x_429_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormatWithInfos_elim(lean_object* v_motive__1_430_, lean_object* v_t_431_, lean_object* v_h_432_, lean_object* v_ofFormatWithInfos_433_){
_start:
{
lean_object* v___x_434_; 
v___x_434_ = l_Lean_MessageData_ctorElim___redArg(v_t_431_, v_ofFormatWithInfos_433_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim___redArg(lean_object* v_t_435_, lean_object* v_ofGoal_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l_Lean_MessageData_ctorElim___redArg(v_t_435_, v_ofGoal_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofGoal_elim(lean_object* v_motive__1_438_, lean_object* v_t_439_, lean_object* v_h_440_, lean_object* v_ofGoal_441_){
_start:
{
lean_object* v___x_442_; 
v___x_442_ = l_Lean_MessageData_ctorElim___redArg(v_t_439_, v_ofGoal_441_);
return v___x_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim___redArg(lean_object* v_t_443_, lean_object* v_ofWidget_444_){
_start:
{
lean_object* v___x_445_; 
v___x_445_ = l_Lean_MessageData_ctorElim___redArg(v_t_443_, v_ofWidget_444_);
return v___x_445_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofWidget_elim(lean_object* v_motive__1_446_, lean_object* v_t_447_, lean_object* v_h_448_, lean_object* v_ofWidget_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Lean_MessageData_ctorElim___redArg(v_t_447_, v_ofWidget_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim___redArg(lean_object* v_t_451_, lean_object* v_withContext_452_){
_start:
{
lean_object* v___x_453_; 
v___x_453_ = l_Lean_MessageData_ctorElim___redArg(v_t_451_, v_withContext_452_);
return v___x_453_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withContext_elim(lean_object* v_motive__1_454_, lean_object* v_t_455_, lean_object* v_h_456_, lean_object* v_withContext_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Lean_MessageData_ctorElim___redArg(v_t_455_, v_withContext_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim___redArg(lean_object* v_t_459_, lean_object* v_withNamingContext_460_){
_start:
{
lean_object* v___x_461_; 
v___x_461_ = l_Lean_MessageData_ctorElim___redArg(v_t_459_, v_withNamingContext_460_);
return v___x_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withNamingContext_elim(lean_object* v_motive__1_462_, lean_object* v_t_463_, lean_object* v_h_464_, lean_object* v_withNamingContext_465_){
_start:
{
lean_object* v___x_466_; 
v___x_466_ = l_Lean_MessageData_ctorElim___redArg(v_t_463_, v_withNamingContext_465_);
return v___x_466_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim___redArg(lean_object* v_t_467_, lean_object* v_nest_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_MessageData_ctorElim___redArg(v_t_467_, v_nest_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nest_elim(lean_object* v_motive__1_470_, lean_object* v_t_471_, lean_object* v_h_472_, lean_object* v_nest_473_){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = l_Lean_MessageData_ctorElim___redArg(v_t_471_, v_nest_473_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim___redArg(lean_object* v_t_475_, lean_object* v_group_476_){
_start:
{
lean_object* v___x_477_; 
v___x_477_ = l_Lean_MessageData_ctorElim___redArg(v_t_475_, v_group_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_group_elim(lean_object* v_motive__1_478_, lean_object* v_t_479_, lean_object* v_h_480_, lean_object* v_group_481_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_MessageData_ctorElim___redArg(v_t_479_, v_group_481_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim___redArg(lean_object* v_t_483_, lean_object* v_compose_484_){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Lean_MessageData_ctorElim___redArg(v_t_483_, v_compose_484_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_compose_elim(lean_object* v_motive__1_486_, lean_object* v_t_487_, lean_object* v_h_488_, lean_object* v_compose_489_){
_start:
{
lean_object* v___x_490_; 
v___x_490_ = l_Lean_MessageData_ctorElim___redArg(v_t_487_, v_compose_489_);
return v___x_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim___redArg(lean_object* v_t_491_, lean_object* v_tagged_492_){
_start:
{
lean_object* v___x_493_; 
v___x_493_ = l_Lean_MessageData_ctorElim___redArg(v_t_491_, v_tagged_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagged_elim(lean_object* v_motive__1_494_, lean_object* v_t_495_, lean_object* v_h_496_, lean_object* v_tagged_497_){
_start:
{
lean_object* v___x_498_; 
v___x_498_ = l_Lean_MessageData_ctorElim___redArg(v_t_495_, v_tagged_497_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim___redArg(lean_object* v_t_499_, lean_object* v_trace_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = l_Lean_MessageData_ctorElim___redArg(v_t_499_, v_trace_500_);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_trace_elim(lean_object* v_motive__1_502_, lean_object* v_t_503_, lean_object* v_h_504_, lean_object* v_trace_505_){
_start:
{
lean_object* v___x_506_; 
v___x_506_ = l_Lean_MessageData_ctorElim___redArg(v_t_503_, v_trace_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim___redArg(lean_object* v_t_507_, lean_object* v_ofLazy_508_){
_start:
{
lean_object* v___x_509_; 
v___x_509_ = l_Lean_MessageData_ctorElim___redArg(v_t_507_, v_ofLazy_508_);
return v___x_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLazy_elim(lean_object* v_motive__1_510_, lean_object* v_t_511_, lean_object* v_h_512_, lean_object* v_ofLazy_513_){
_start:
{
lean_object* v___x_514_; 
v___x_514_ = l_Lean_MessageData_ctorElim___redArg(v_t_511_, v_ofLazy_513_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim___redArg(lean_object* v_t_515_, lean_object* v_ofOriginatingSyntax_516_){
_start:
{
lean_object* v___x_517_; 
v___x_517_ = l_Lean_MessageData_ctorElim___redArg(v_t_515_, v_ofOriginatingSyntax_516_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofOriginatingSyntax_elim(lean_object* v_motive__1_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_ofOriginatingSyntax_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_MessageData_ctorElim___redArg(v_t_519_, v_ofOriginatingSyntax_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofFormat(lean_object* v_fmt_534_){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_535_ = lean_box(1);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_fmt_534_);
lean_ctor_set(v___x_536_, 1, v___x_535_);
v___x_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_537_, 0, v___x_536_);
return v___x_537_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0(lean_object* v___x_538_, lean_object* v_onMissingContext_539_, lean_object* v_f_540_, lean_object* v_ctx_x3f_541_){
_start:
{
lean_object* v_msg_544_; 
if (lean_obj_tag(v_ctx_x3f_541_) == 0)
{
lean_object* v___x_546_; lean_object* v___x_547_; 
lean_dec_ref(v_f_540_);
v___x_546_ = lean_box(0);
v___x_547_ = lean_apply_2(v_onMissingContext_539_, v___x_546_, lean_box(0));
v_msg_544_ = v___x_547_;
goto v___jp_543_;
}
else
{
lean_object* v_val_548_; lean_object* v___x_549_; 
lean_dec_ref(v_onMissingContext_539_);
v_val_548_ = lean_ctor_get(v_ctx_x3f_541_, 0);
lean_inc(v_val_548_);
lean_dec_ref_known(v_ctx_x3f_541_, 1);
v___x_549_ = lean_apply_2(v_f_540_, v_val_548_, lean_box(0));
v_msg_544_ = v___x_549_;
goto v___jp_543_;
}
v___jp_543_:
{
lean_object* v___x_545_; 
v___x_545_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_545_, 0, v___x_538_);
lean_ctor_set(v___x_545_, 1, v_msg_544_);
return v___x_545_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy___lam__0___boxed(lean_object* v___x_550_, lean_object* v_onMissingContext_551_, lean_object* v_f_552_, lean_object* v_ctx_x3f_553_, lean_object* v___y_554_){
_start:
{
lean_object* v_res_555_; 
v_res_555_ = l_Lean_MessageData_lazy___lam__0(v___x_550_, v_onMissingContext_551_, v_f_552_, v_ctx_x3f_553_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_lazy(lean_object* v_f_556_, lean_object* v_hasSyntheticSorry_557_, lean_object* v_onMissingContext_558_){
_start:
{
lean_object* v___x_559_; lean_object* v___f_560_; lean_object* v___x_561_; 
v___x_559_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
v___f_560_ = lean_alloc_closure((void*)(l_Lean_MessageData_lazy___lam__0___boxed), 5, 3);
lean_closure_set(v___f_560_, 0, v___x_559_);
lean_closure_set(v___f_560_, 1, v_onMissingContext_558_);
lean_closure_set(v___f_560_, 2, v_f_556_);
v___x_561_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_561_, 0, v___f_560_);
lean_ctor_set(v___x_561_, 1, v_hasSyntheticSorry_557_);
return v___x_561_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_hasTag(lean_object* v_p_562_, lean_object* v_x_563_){
_start:
{
switch(lean_obj_tag(v_x_563_))
{
case 3:
{
lean_object* v_a_564_; 
v_a_564_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_a_564_);
lean_dec_ref_known(v_x_563_, 2);
v_x_563_ = v_a_564_;
goto _start;
}
case 4:
{
lean_object* v_a_566_; 
v_a_566_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_a_566_);
lean_dec_ref_known(v_x_563_, 2);
v_x_563_ = v_a_566_;
goto _start;
}
case 5:
{
lean_object* v_a_568_; 
v_a_568_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_a_568_);
lean_dec_ref_known(v_x_563_, 2);
v_x_563_ = v_a_568_;
goto _start;
}
case 6:
{
lean_object* v_a_570_; 
v_a_570_ = lean_ctor_get(v_x_563_, 0);
lean_inc_ref(v_a_570_);
lean_dec_ref_known(v_x_563_, 1);
v_x_563_ = v_a_570_;
goto _start;
}
case 7:
{
lean_object* v_a_572_; lean_object* v_a_573_; uint8_t v___x_574_; 
v_a_572_ = lean_ctor_get(v_x_563_, 0);
lean_inc_ref(v_a_572_);
v_a_573_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_a_573_);
lean_dec_ref_known(v_x_563_, 2);
lean_inc_ref(v_p_562_);
v___x_574_ = l_Lean_MessageData_hasTag(v_p_562_, v_a_572_);
if (v___x_574_ == 0)
{
v_x_563_ = v_a_573_;
goto _start;
}
else
{
lean_dec_ref(v_a_573_);
lean_dec_ref(v_p_562_);
return v___x_574_;
}
}
case 8:
{
lean_object* v_a_576_; lean_object* v_a_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v_a_576_ = lean_ctor_get(v_x_563_, 0);
lean_inc(v_a_576_);
v_a_577_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_a_577_);
lean_dec_ref_known(v_x_563_, 2);
lean_inc_ref(v_p_562_);
v___x_578_ = lean_apply_1(v_p_562_, v_a_576_);
v___x_579_ = lean_unbox(v___x_578_);
if (v___x_579_ == 0)
{
v_x_563_ = v_a_577_;
goto _start;
}
else
{
uint8_t v___x_581_; 
lean_dec_ref(v_a_577_);
lean_dec_ref(v_p_562_);
v___x_581_ = lean_unbox(v___x_578_);
return v___x_581_;
}
}
case 9:
{
lean_object* v_data_582_; lean_object* v_msg_583_; lean_object* v_children_584_; lean_object* v_cls_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v_data_582_ = lean_ctor_get(v_x_563_, 0);
lean_inc_ref(v_data_582_);
v_msg_583_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_msg_583_);
v_children_584_ = lean_ctor_get(v_x_563_, 2);
lean_inc_ref(v_children_584_);
lean_dec_ref_known(v_x_563_, 3);
v_cls_585_ = lean_ctor_get(v_data_582_, 0);
lean_inc(v_cls_585_);
lean_dec_ref(v_data_582_);
lean_inc_ref(v_p_562_);
v___x_586_ = lean_apply_1(v_p_562_, v_cls_585_);
v___x_587_ = lean_unbox(v___x_586_);
if (v___x_587_ == 0)
{
uint8_t v___x_588_; 
lean_inc_ref(v_p_562_);
v___x_588_ = l_Lean_MessageData_hasTag(v_p_562_, v_msg_583_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_589_ = lean_unsigned_to_nat(0u);
v___x_590_ = lean_array_get_size(v_children_584_);
v___x_591_ = lean_nat_dec_lt(v___x_589_, v___x_590_);
if (v___x_591_ == 0)
{
lean_dec_ref(v_children_584_);
lean_dec_ref(v_p_562_);
return v___x_588_;
}
else
{
if (v___x_591_ == 0)
{
lean_dec_ref(v_children_584_);
lean_dec_ref(v_p_562_);
return v___x_588_;
}
else
{
size_t v___x_592_; size_t v___x_593_; uint8_t v___x_594_; 
v___x_592_ = ((size_t)0ULL);
v___x_593_ = lean_usize_of_nat(v___x_590_);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(v_p_562_, v_children_584_, v___x_592_, v___x_593_);
lean_dec_ref(v_children_584_);
return v___x_594_;
}
}
}
else
{
lean_dec_ref(v_children_584_);
lean_dec_ref(v_p_562_);
return v___x_588_;
}
}
else
{
uint8_t v___x_595_; 
lean_dec_ref(v_children_584_);
lean_dec_ref(v_msg_583_);
lean_dec_ref(v_p_562_);
v___x_595_ = lean_unbox(v___x_586_);
return v___x_595_;
}
}
case 11:
{
lean_object* v_a_596_; 
v_a_596_ = lean_ctor_get(v_x_563_, 1);
lean_inc_ref(v_a_596_);
lean_dec_ref_known(v_x_563_, 2);
v_x_563_ = v_a_596_;
goto _start;
}
default: 
{
uint8_t v___x_598_; 
lean_dec_ref(v_x_563_);
lean_dec_ref(v_p_562_);
v___x_598_ = 0;
return v___x_598_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(lean_object* v_p_599_, lean_object* v_as_600_, size_t v_i_601_, size_t v_stop_602_){
_start:
{
uint8_t v___x_603_; 
v___x_603_ = lean_usize_dec_eq(v_i_601_, v_stop_602_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; uint8_t v___x_605_; 
v___x_604_ = lean_array_uget_borrowed(v_as_600_, v_i_601_);
lean_inc(v___x_604_);
lean_inc_ref(v_p_599_);
v___x_605_ = l_Lean_MessageData_hasTag(v_p_599_, v___x_604_);
if (v___x_605_ == 0)
{
size_t v___x_606_; size_t v___x_607_; 
v___x_606_ = ((size_t)1ULL);
v___x_607_ = lean_usize_add(v_i_601_, v___x_606_);
v_i_601_ = v___x_607_;
goto _start;
}
else
{
lean_dec_ref(v_p_599_);
return v___x_605_;
}
}
else
{
uint8_t v___x_609_; 
lean_dec_ref(v_p_599_);
v___x_609_ = 0;
return v___x_609_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0___boxed(lean_object* v_p_610_, lean_object* v_as_611_, lean_object* v_i_612_, lean_object* v_stop_613_){
_start:
{
size_t v_i_boxed_614_; size_t v_stop_boxed_615_; uint8_t v_res_616_; lean_object* v_r_617_; 
v_i_boxed_614_ = lean_unbox_usize(v_i_612_);
lean_dec(v_i_612_);
v_stop_boxed_615_ = lean_unbox_usize(v_stop_613_);
lean_dec(v_stop_613_);
v_res_616_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_MessageData_hasTag_spec__0(v_p_610_, v_as_611_, v_i_boxed_614_, v_stop_boxed_615_);
lean_dec_ref(v_as_611_);
v_r_617_ = lean_box(v_res_616_);
return v_r_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hasTag___boxed(lean_object* v_p_618_, lean_object* v_x_619_){
_start:
{
uint8_t v_res_620_; lean_object* v_r_621_; 
v_res_620_ = l_Lean_MessageData_hasTag(v_p_618_, v_x_619_);
v_r_621_ = lean_box(v_res_620_);
return v_r_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_kind(lean_object* v_x_622_){
_start:
{
switch(lean_obj_tag(v_x_622_))
{
case 3:
{
lean_object* v_a_623_; 
v_a_623_ = lean_ctor_get(v_x_622_, 1);
v_x_622_ = v_a_623_;
goto _start;
}
case 4:
{
lean_object* v_a_625_; 
v_a_625_ = lean_ctor_get(v_x_622_, 1);
v_x_622_ = v_a_625_;
goto _start;
}
case 8:
{
lean_object* v_a_627_; 
v_a_627_ = lean_ctor_get(v_x_622_, 0);
lean_inc(v_a_627_);
return v_a_627_;
}
case 9:
{
lean_object* v_data_628_; lean_object* v_cls_629_; 
v_data_628_ = lean_ctor_get(v_x_622_, 0);
v_cls_629_ = lean_ctor_get(v_data_628_, 0);
lean_inc(v_cls_629_);
return v_cls_629_;
}
case 11:
{
lean_object* v_a_630_; 
v_a_630_ = lean_ctor_get(v_x_622_, 1);
v_x_622_ = v_a_630_;
goto _start;
}
default: 
{
lean_object* v___x_632_; 
v___x_632_ = lean_box(0);
return v___x_632_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_kind___boxed(lean_object* v_x_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lean_MessageData_kind(v_x_633_);
lean_dec_ref(v_x_633_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_originatingSyntax_x3f(lean_object* v_x_635_){
_start:
{
if (lean_obj_tag(v_x_635_) == 11)
{
lean_object* v_a_636_; lean_object* v_a_637_; lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_645_; 
v_a_636_ = lean_ctor_get(v_x_635_, 0);
v_a_637_ = lean_ctor_get(v_x_635_, 1);
v_isSharedCheck_645_ = !lean_is_exclusive(v_x_635_);
if (v_isSharedCheck_645_ == 0)
{
v___x_639_ = v_x_635_;
v_isShared_640_ = v_isSharedCheck_645_;
goto v_resetjp_638_;
}
else
{
lean_inc(v_a_637_);
lean_inc(v_a_636_);
lean_dec(v_x_635_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_645_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_641_, 0, v_a_636_);
if (v_isShared_640_ == 0)
{
lean_ctor_set_tag(v___x_639_, 0);
lean_ctor_set(v___x_639_, 0, v___x_641_);
v___x_643_ = v___x_639_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_644_; 
v_reuseFailAlloc_644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_644_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_644_, 1, v_a_637_);
v___x_643_ = v_reuseFailAlloc_644_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
return v___x_643_;
}
}
}
else
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_box(0);
v___x_647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_647_, 0, v___x_646_);
lean_ctor_set(v___x_647_, 1, v_x_635_);
return v___x_647_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_isTrace(lean_object* v_x_648_){
_start:
{
switch(lean_obj_tag(v_x_648_))
{
case 3:
{
lean_object* v_a_649_; 
v_a_649_ = lean_ctor_get(v_x_648_, 1);
v_x_648_ = v_a_649_;
goto _start;
}
case 4:
{
lean_object* v_a_651_; 
v_a_651_ = lean_ctor_get(v_x_648_, 1);
v_x_648_ = v_a_651_;
goto _start;
}
case 8:
{
lean_object* v_a_653_; 
v_a_653_ = lean_ctor_get(v_x_648_, 1);
v_x_648_ = v_a_653_;
goto _start;
}
case 9:
{
uint8_t v___x_655_; 
v___x_655_ = 1;
return v___x_655_;
}
case 11:
{
lean_object* v_a_656_; 
v_a_656_ = lean_ctor_get(v_x_648_, 1);
v_x_648_ = v_a_656_;
goto _start;
}
default: 
{
uint8_t v___x_658_; 
v___x_658_ = 0;
return v___x_658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_isTrace___boxed(lean_object* v_x_659_){
_start:
{
uint8_t v_res_660_; lean_object* v_r_661_; 
v_res_660_ = l_Lean_MessageData_isTrace(v_x_659_);
lean_dec_ref(v_x_659_);
v_r_661_ = lean_box(v_res_660_);
return v_r_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_composePreservingKind(lean_object* v_x_662_, lean_object* v_x_663_){
_start:
{
switch(lean_obj_tag(v_x_662_))
{
case 3:
{
lean_object* v_a_664_; lean_object* v_a_665_; lean_object* v___x_667_; uint8_t v_isShared_668_; uint8_t v_isSharedCheck_673_; 
v_a_664_ = lean_ctor_get(v_x_662_, 0);
v_a_665_ = lean_ctor_get(v_x_662_, 1);
v_isSharedCheck_673_ = !lean_is_exclusive(v_x_662_);
if (v_isSharedCheck_673_ == 0)
{
v___x_667_ = v_x_662_;
v_isShared_668_ = v_isSharedCheck_673_;
goto v_resetjp_666_;
}
else
{
lean_inc(v_a_665_);
lean_inc(v_a_664_);
lean_dec(v_x_662_);
v___x_667_ = lean_box(0);
v_isShared_668_ = v_isSharedCheck_673_;
goto v_resetjp_666_;
}
v_resetjp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = l_Lean_MessageData_composePreservingKind(v_a_665_, v_x_663_);
if (v_isShared_668_ == 0)
{
lean_ctor_set(v___x_667_, 1, v___x_669_);
v___x_671_ = v___x_667_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_664_);
lean_ctor_set(v_reuseFailAlloc_672_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
case 4:
{
lean_object* v_a_674_; lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_a_674_ = lean_ctor_get(v_x_662_, 0);
v_a_675_ = lean_ctor_get(v_x_662_, 1);
v_isSharedCheck_683_ = !lean_is_exclusive(v_x_662_);
if (v_isSharedCheck_683_ == 0)
{
v___x_677_ = v_x_662_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_inc(v_a_674_);
lean_dec(v_x_662_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = l_Lean_MessageData_composePreservingKind(v_a_675_, v_x_663_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 1, v___x_679_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_674_);
lean_ctor_set(v_reuseFailAlloc_682_, 1, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
case 8:
{
lean_object* v_a_684_; lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_693_; 
v_a_684_ = lean_ctor_get(v_x_662_, 0);
v_a_685_ = lean_ctor_get(v_x_662_, 1);
v_isSharedCheck_693_ = !lean_is_exclusive(v_x_662_);
if (v_isSharedCheck_693_ == 0)
{
v___x_687_ = v_x_662_;
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_inc(v_a_684_);
lean_dec(v_x_662_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_693_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
lean_ctor_set_tag(v___x_687_, 7);
lean_ctor_set(v___x_687_, 1, v_x_663_);
lean_ctor_set(v___x_687_, 0, v_a_685_);
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_685_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v_x_663_);
v___x_690_ = v_reuseFailAlloc_692_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; 
v___x_691_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_691_, 0, v_a_684_);
lean_ctor_set(v___x_691_, 1, v___x_690_);
return v___x_691_;
}
}
}
case 11:
{
lean_object* v_a_694_; lean_object* v_a_695_; lean_object* v___x_697_; uint8_t v_isShared_698_; uint8_t v_isSharedCheck_703_; 
v_a_694_ = lean_ctor_get(v_x_662_, 0);
v_a_695_ = lean_ctor_get(v_x_662_, 1);
v_isSharedCheck_703_ = !lean_is_exclusive(v_x_662_);
if (v_isSharedCheck_703_ == 0)
{
v___x_697_ = v_x_662_;
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
else
{
lean_inc(v_a_695_);
lean_inc(v_a_694_);
lean_dec(v_x_662_);
v___x_697_ = lean_box(0);
v_isShared_698_ = v_isSharedCheck_703_;
goto v_resetjp_696_;
}
v_resetjp_696_:
{
lean_object* v___x_699_; lean_object* v___x_701_; 
v___x_699_ = l_Lean_MessageData_composePreservingKind(v_a_695_, v_x_663_);
if (v_isShared_698_ == 0)
{
lean_ctor_set(v___x_697_, 1, v___x_699_);
v___x_701_ = v___x_697_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_694_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v___x_699_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
default: 
{
lean_object* v___x_704_; 
v___x_704_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_704_, 0, v_x_662_);
lean_ctor_set(v___x_704_, 1, v_x_663_);
return v___x_704_;
}
}
}
}
static lean_object* _init_l_Lean_MessageData_nil___closed__0(void){
_start:
{
lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = lean_box(0);
v___x_706_ = l_Lean_MessageData_ofFormat(v___x_705_);
return v___x_706_;
}
}
static lean_object* _init_l_Lean_MessageData_nil(void){
_start:
{
lean_object* v___x_707_; 
v___x_707_ = lean_obj_once(&l_Lean_MessageData_nil___closed__0, &l_Lean_MessageData_nil___closed__0_once, _init_l_Lean_MessageData_nil___closed__0);
return v___x_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext(lean_object* v_nCtx_708_, lean_object* v_ctx_709_){
_start:
{
lean_object* v_env_710_; lean_object* v_mctx_711_; lean_object* v_lctx_712_; lean_object* v_opts_713_; lean_object* v_currNamespace_714_; lean_object* v_openDecls_715_; lean_object* v___x_716_; 
v_env_710_ = lean_ctor_get(v_ctx_709_, 0);
v_mctx_711_ = lean_ctor_get(v_ctx_709_, 1);
v_lctx_712_ = lean_ctor_get(v_ctx_709_, 2);
v_opts_713_ = lean_ctor_get(v_ctx_709_, 3);
v_currNamespace_714_ = lean_ctor_get(v_nCtx_708_, 0);
v_openDecls_715_ = lean_ctor_get(v_nCtx_708_, 1);
lean_inc(v_openDecls_715_);
lean_inc(v_currNamespace_714_);
lean_inc_ref(v_opts_713_);
lean_inc_ref(v_lctx_712_);
lean_inc_ref(v_mctx_711_);
lean_inc_ref(v_env_710_);
v___x_716_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_716_, 0, v_env_710_);
lean_ctor_set(v___x_716_, 1, v_mctx_711_);
lean_ctor_set(v___x_716_, 2, v_lctx_712_);
lean_ctor_set(v___x_716_, 3, v_opts_713_);
lean_ctor_set(v___x_716_, 4, v_currNamespace_714_);
lean_ctor_set(v___x_716_, 5, v_openDecls_715_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_mkPPContext___boxed(lean_object* v_nCtx_717_, lean_object* v_ctx_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Lean_MessageData_mkPPContext(v_nCtx_717_, v_ctx_718_);
lean_dec_ref(v_ctx_718_);
lean_dec_ref(v_nCtx_717_);
return v_res_719_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofSyntax___lam__0(lean_object* v_x_720_){
_start:
{
uint8_t v___x_721_; 
v___x_721_ = 0;
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__0___boxed(lean_object* v_x_722_){
_start:
{
uint8_t v_res_723_; lean_object* v_r_724_; 
v_res_723_ = l_Lean_MessageData_ofSyntax___lam__0(v_x_722_);
lean_dec_ref(v_x_722_);
v_r_724_ = lean_box(v_res_723_);
return v_r_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1(lean_object* v___x_725_, lean_object* v_stx_726_, lean_object* v_ctx_x3f_727_){
_start:
{
lean_object* v_val_730_; 
if (lean_obj_tag(v_ctx_x3f_727_) == 0)
{
lean_object* v___x_733_; uint8_t v___x_734_; lean_object* v___x_735_; 
v___x_733_ = lean_box(0);
v___x_734_ = 0;
v___x_735_ = l_Lean_Syntax_formatStx(v_stx_726_, v___x_733_, v___x_734_);
v_val_730_ = v___x_735_;
goto v___jp_729_;
}
else
{
lean_object* v_val_736_; lean_object* v___x_737_; 
v_val_736_ = lean_ctor_get(v_ctx_x3f_727_, 0);
lean_inc(v_val_736_);
lean_dec_ref_known(v_ctx_x3f_727_, 1);
v___x_737_ = l_Lean_ppTerm(v_val_736_, v_stx_726_);
v_val_730_ = v___x_737_;
goto v___jp_729_;
}
v___jp_729_:
{
lean_object* v___x_731_; lean_object* v___x_732_; 
v___x_731_ = l_Lean_MessageData_ofFormat(v_val_730_);
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v___x_725_);
lean_ctor_set(v___x_732_, 1, v___x_731_);
return v___x_732_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax___lam__1___boxed(lean_object* v___x_738_, lean_object* v_stx_739_, lean_object* v_ctx_x3f_740_, lean_object* v___y_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lean_MessageData_ofSyntax___lam__1(v___x_738_, v_stx_739_, v_ctx_x3f_740_);
return v_res_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofSyntax(lean_object* v_stx_744_){
_start:
{
lean_object* v___f_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v_stx_748_; lean_object* v___f_749_; lean_object* v___x_750_; 
v___f_745_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_746_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
v___x_747_ = lean_box(0);
v_stx_748_ = l_Lean_Syntax_copyHeadTailInfoFrom(v_stx_744_, v___x_747_);
v___f_749_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofSyntax___lam__1___boxed), 4, 2);
lean_closure_set(v___f_749_, 0, v___x_746_);
lean_closure_set(v___f_749_, 1, v_stx_748_);
v___x_750_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_750_, 0, v___f_749_);
lean_ctor_set(v___x_750_, 1, v___f_745_);
return v___x_750_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_ofExpr___lam__0(lean_object* v_e_751_, lean_object* v_mctx_752_){
_start:
{
lean_object* v___x_753_; lean_object* v_fst_754_; uint8_t v___x_755_; 
v___x_753_ = l_Lean_instantiateMVarsCore(v_mctx_752_, v_e_751_);
v_fst_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_fst_754_);
lean_dec_ref(v___x_753_);
v___x_755_ = l_Lean_Expr_hasSyntheticSorry(v_fst_754_);
lean_dec(v_fst_754_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__0___boxed(lean_object* v_e_756_, lean_object* v_mctx_757_){
_start:
{
uint8_t v_res_758_; lean_object* v_r_759_; 
v_res_758_ = l_Lean_MessageData_ofExpr___lam__0(v_e_756_, v_mctx_757_);
v_r_759_ = lean_box(v_res_758_);
return v_r_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1(lean_object* v___x_760_, lean_object* v_e_761_, lean_object* v_ctx_x3f_762_){
_start:
{
lean_object* v_val_765_; 
if (lean_obj_tag(v_ctx_x3f_762_) == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_768_ = lean_expr_dbg_to_string(v_e_761_);
lean_dec_ref(v_e_761_);
v___x_769_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_769_, 0, v___x_768_);
v___x_770_ = lean_box(1);
v___x_771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_771_, 0, v___x_769_);
lean_ctor_set(v___x_771_, 1, v___x_770_);
v_val_765_ = v___x_771_;
goto v___jp_764_;
}
else
{
lean_object* v_val_772_; lean_object* v___x_773_; 
v_val_772_ = lean_ctor_get(v_ctx_x3f_762_, 0);
lean_inc(v_val_772_);
lean_dec_ref_known(v_ctx_x3f_762_, 1);
v___x_773_ = l_Lean_ppExprWithInfos(v_val_772_, v_e_761_);
v_val_765_ = v___x_773_;
goto v___jp_764_;
}
v___jp_764_:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_766_, 0, v_val_765_);
v___x_767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_767_, 0, v___x_760_);
lean_ctor_set(v___x_767_, 1, v___x_766_);
return v___x_767_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr___lam__1___boxed(lean_object* v___x_774_, lean_object* v_e_775_, lean_object* v_ctx_x3f_776_, lean_object* v___y_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_MessageData_ofExpr___lam__1(v___x_774_, v_e_775_, v_ctx_x3f_776_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofExpr(lean_object* v_e_779_){
_start:
{
lean_object* v___f_780_; lean_object* v___x_781_; lean_object* v___f_782_; lean_object* v___x_783_; 
lean_inc_ref(v_e_779_);
v___f_780_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_780_, 0, v_e_779_);
v___x_781_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
v___f_782_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__1___boxed), 4, 2);
lean_closure_set(v___f_782_, 0, v___x_781_);
lean_closure_set(v___f_782_, 1, v_e_779_);
v___x_783_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_783_, 0, v___f_782_);
lean_ctor_set(v___x_783_, 1, v___f_780_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0(lean_object* v_x_784_){
_start:
{
lean_object* v___x_785_; 
v___x_785_ = lean_box(0);
return v___x_785_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__0___boxed(lean_object* v_x_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_MessageData_ofLevel___lam__0(v_x_786_);
lean_dec(v_x_786_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2(lean_object* v___x_788_, lean_object* v_l_789_, lean_object* v___f_790_, lean_object* v_ctx_x3f_791_){
_start:
{
lean_object* v_val_794_; 
if (lean_obj_tag(v_ctx_x3f_791_) == 0)
{
uint8_t v___x_797_; lean_object* v___x_798_; 
v___x_797_ = 1;
v___x_798_ = l_Lean_Level_format(v_l_789_, v___x_797_, v___f_790_);
v_val_794_ = v___x_798_;
goto v___jp_793_;
}
else
{
lean_object* v_val_799_; lean_object* v___x_800_; 
lean_dec_ref(v___f_790_);
v_val_799_ = lean_ctor_get(v_ctx_x3f_791_, 0);
lean_inc(v_val_799_);
lean_dec_ref_known(v_ctx_x3f_791_, 1);
v___x_800_ = l_Lean_ppLevel(v_val_799_, v_l_789_);
v_val_794_ = v___x_800_;
goto v___jp_793_;
}
v___jp_793_:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = l_Lean_MessageData_ofFormat(v_val_794_);
v___x_796_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_796_, 0, v___x_788_);
lean_ctor_set(v___x_796_, 1, v___x_795_);
return v___x_796_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel___lam__2___boxed(lean_object* v___x_801_, lean_object* v_l_802_, lean_object* v___f_803_, lean_object* v_ctx_x3f_804_, lean_object* v___y_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_MessageData_ofLevel___lam__2(v___x_801_, v_l_802_, v___f_803_, v_ctx_x3f_804_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofLevel(lean_object* v_l_808_){
_start:
{
lean_object* v___f_809_; lean_object* v___f_810_; lean_object* v___x_811_; lean_object* v___f_812_; lean_object* v___x_813_; 
v___f_809_ = ((lean_object*)(l_Lean_MessageData_ofLevel___closed__0));
v___f_810_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_811_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
v___f_812_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofLevel___lam__2___boxed), 5, 3);
lean_closure_set(v___f_812_, 0, v___x_811_);
lean_closure_set(v___f_812_, 1, v_l_808_);
lean_closure_set(v___f_812_, 2, v___f_809_);
v___x_813_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_813_, 0, v___f_812_);
lean_ctor_set(v___x_813_, 1, v___f_810_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofName(lean_object* v_n_814_){
_start:
{
uint8_t v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; 
v___x_815_ = 1;
v___x_816_ = l_Lean_Name_toString(v_n_814_, v___x_815_);
v___x_817_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
v___x_818_ = l_Lean_MessageData_ofFormat(v___x_817_);
return v___x_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(lean_object* v_o_822_, lean_object* v_k_823_, uint8_t v_v_824_){
_start:
{
lean_object* v_map_825_; uint8_t v_hasTrace_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_840_; 
v_map_825_ = lean_ctor_get(v_o_822_, 0);
v_hasTrace_826_ = lean_ctor_get_uint8(v_o_822_, sizeof(void*)*1);
v_isSharedCheck_840_ = !lean_is_exclusive(v_o_822_);
if (v_isSharedCheck_840_ == 0)
{
v___x_828_ = v_o_822_;
v_isShared_829_ = v_isSharedCheck_840_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_map_825_);
lean_dec(v_o_822_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_840_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_830_, 0, v_v_824_);
lean_inc(v_k_823_);
v___x_831_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_823_, v___x_830_, v_map_825_);
if (v_hasTrace_826_ == 0)
{
lean_object* v___x_832_; uint8_t v___x_833_; lean_object* v___x_835_; 
v___x_832_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___closed__1));
v___x_833_ = l_Lean_Name_isPrefixOf(v___x_832_, v_k_823_);
lean_dec(v_k_823_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_831_);
v___x_835_ = v___x_828_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v___x_831_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
lean_ctor_set_uint8(v___x_835_, sizeof(void*)*1, v___x_833_);
return v___x_835_;
}
}
else
{
lean_object* v___x_838_; 
lean_dec(v_k_823_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 0, v___x_831_);
v___x_838_ = v___x_828_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v___x_831_);
lean_ctor_set_uint8(v_reuseFailAlloc_839_, sizeof(void*)*1, v_hasTrace_826_);
v___x_838_ = v_reuseFailAlloc_839_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
return v___x_838_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0___boxed(lean_object* v_o_841_, lean_object* v_k_842_, lean_object* v_v_843_){
_start:
{
uint8_t v_v_boxed_844_; lean_object* v_res_845_; 
v_v_boxed_844_ = lean_unbox(v_v_843_);
v_res_845_ = l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(v_o_841_, v_k_842_, v_v_boxed_844_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1(lean_object* v___x_851_, lean_object* v_constName_852_, uint8_t v_fullNames_853_, lean_object* v_ctx_x3f_854_){
_start:
{
lean_object* v_val_857_; lean_object* v___y_861_; 
if (lean_obj_tag(v_ctx_x3f_854_) == 0)
{
uint8_t v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_862_ = 1;
v___x_863_ = l_Lean_Name_toString(v_constName_852_, v___x_862_);
v___x_864_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_863_);
v___x_865_ = lean_box(1);
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_864_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v_val_857_ = v___x_866_;
goto v___jp_856_;
}
else
{
if (v_fullNames_853_ == 0)
{
lean_object* v_val_867_; lean_object* v___x_868_; 
v_val_867_ = lean_ctor_get(v_ctx_x3f_854_, 0);
lean_inc(v_val_867_);
lean_dec_ref_known(v_ctx_x3f_854_, 1);
v___x_868_ = l_Lean_ppConstNameWithInfos(v_val_867_, v_constName_852_);
v___y_861_ = v___x_868_;
goto v___jp_860_;
}
else
{
lean_object* v_val_869_; lean_object* v_env_870_; lean_object* v_mctx_871_; lean_object* v_lctx_872_; lean_object* v_opts_873_; lean_object* v_currNamespace_874_; lean_object* v_openDecls_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_885_; 
v_val_869_ = lean_ctor_get(v_ctx_x3f_854_, 0);
lean_inc(v_val_869_);
lean_dec_ref_known(v_ctx_x3f_854_, 1);
v_env_870_ = lean_ctor_get(v_val_869_, 0);
v_mctx_871_ = lean_ctor_get(v_val_869_, 1);
v_lctx_872_ = lean_ctor_get(v_val_869_, 2);
v_opts_873_ = lean_ctor_get(v_val_869_, 3);
v_currNamespace_874_ = lean_ctor_get(v_val_869_, 4);
v_openDecls_875_ = lean_ctor_get(v_val_869_, 5);
v_isSharedCheck_885_ = !lean_is_exclusive(v_val_869_);
if (v_isSharedCheck_885_ == 0)
{
v___x_877_ = v_val_869_;
v_isShared_878_ = v_isSharedCheck_885_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_openDecls_875_);
lean_inc(v_currNamespace_874_);
lean_inc(v_opts_873_);
lean_inc(v_lctx_872_);
lean_inc(v_mctx_871_);
lean_inc(v_env_870_);
lean_dec(v_val_869_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_885_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_882_; 
v___x_879_ = ((lean_object*)(l_Lean_MessageData_ofConstName___lam__1___closed__2));
v___x_880_ = l_Lean_Options_set___at___00Lean_MessageData_ofConstName_spec__0(v_opts_873_, v___x_879_, v_fullNames_853_);
if (v_isShared_878_ == 0)
{
lean_ctor_set(v___x_877_, 3, v___x_880_);
v___x_882_ = v___x_877_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_env_870_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v_mctx_871_);
lean_ctor_set(v_reuseFailAlloc_884_, 2, v_lctx_872_);
lean_ctor_set(v_reuseFailAlloc_884_, 3, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_884_, 4, v_currNamespace_874_);
lean_ctor_set(v_reuseFailAlloc_884_, 5, v_openDecls_875_);
v___x_882_ = v_reuseFailAlloc_884_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
lean_object* v___x_883_; 
v___x_883_ = l_Lean_ppConstNameWithInfos(v___x_882_, v_constName_852_);
v___y_861_ = v___x_883_;
goto v___jp_860_;
}
}
}
}
v___jp_856_:
{
lean_object* v___x_858_; lean_object* v___x_859_; 
v___x_858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_858_, 0, v_val_857_);
v___x_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_859_, 0, v___x_851_);
lean_ctor_set(v___x_859_, 1, v___x_858_);
return v___x_859_;
}
v___jp_860_:
{
v_val_857_ = v___y_861_;
goto v___jp_856_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___lam__1___boxed(lean_object* v___x_886_, lean_object* v_constName_887_, lean_object* v_fullNames_888_, lean_object* v_ctx_x3f_889_, lean_object* v___y_890_){
_start:
{
uint8_t v_fullNames_boxed_891_; lean_object* v_res_892_; 
v_fullNames_boxed_891_ = lean_unbox(v_fullNames_888_);
v_res_892_ = l_Lean_MessageData_ofConstName___lam__1(v___x_886_, v_constName_887_, v_fullNames_boxed_891_, v_ctx_x3f_889_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName(lean_object* v_constName_893_, uint8_t v_fullNames_894_){
_start:
{
lean_object* v___f_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___f_898_; lean_object* v___x_899_; 
v___f_895_ = ((lean_object*)(l_Lean_MessageData_ofSyntax___closed__0));
v___x_896_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
v___x_897_ = lean_box(v_fullNames_894_);
v___f_898_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofConstName___lam__1___boxed), 5, 3);
lean_closure_set(v___f_898_, 0, v___x_896_);
lean_closure_set(v___f_898_, 1, v_constName_893_);
lean_closure_set(v___f_898_, 2, v___x_897_);
v___x_899_ = lean_alloc_ctor(10, 2, 0);
lean_ctor_set(v___x_899_, 0, v___f_898_);
lean_ctor_set(v___x_899_, 1, v___f_895_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofConstName___boxed(lean_object* v_constName_900_, lean_object* v_fullNames_901_){
_start:
{
uint8_t v_fullNames_boxed_902_; lean_object* v_res_903_; 
v_fullNames_boxed_902_ = lean_unbox(v_fullNames_901_);
v_res_903_ = l_Lean_MessageData_ofConstName(v_constName_900_, v_fullNames_boxed_902_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0(lean_object* v_val_904_, lean_object* v___y_905_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_907_, 0, v_val_904_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___lam__0___boxed(lean_object* v_val_908_, lean_object* v___y_909_, lean_object* v___y_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Lean_MessageData_withExprHover___lam__0(v_val_908_, v___y_909_);
lean_dec_ref(v___y_909_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(lean_object* v_k_912_, lean_object* v_v_913_, lean_object* v_t_914_){
_start:
{
if (lean_obj_tag(v_t_914_) == 0)
{
lean_object* v_size_915_; lean_object* v_k_916_; lean_object* v_v_917_; lean_object* v_l_918_; lean_object* v_r_919_; lean_object* v___x_921_; uint8_t v_isShared_922_; uint8_t v_isSharedCheck_1200_; 
v_size_915_ = lean_ctor_get(v_t_914_, 0);
v_k_916_ = lean_ctor_get(v_t_914_, 1);
v_v_917_ = lean_ctor_get(v_t_914_, 2);
v_l_918_ = lean_ctor_get(v_t_914_, 3);
v_r_919_ = lean_ctor_get(v_t_914_, 4);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_t_914_);
if (v_isSharedCheck_1200_ == 0)
{
v___x_921_ = v_t_914_;
v_isShared_922_ = v_isSharedCheck_1200_;
goto v_resetjp_920_;
}
else
{
lean_inc(v_r_919_);
lean_inc(v_l_918_);
lean_inc(v_v_917_);
lean_inc(v_k_916_);
lean_inc(v_size_915_);
lean_dec(v_t_914_);
v___x_921_ = lean_box(0);
v_isShared_922_ = v_isSharedCheck_1200_;
goto v_resetjp_920_;
}
v_resetjp_920_:
{
uint8_t v___x_923_; 
v___x_923_ = lean_nat_dec_lt(v_k_912_, v_k_916_);
if (v___x_923_ == 0)
{
uint8_t v___x_924_; 
v___x_924_ = lean_nat_dec_eq(v_k_912_, v_k_916_);
if (v___x_924_ == 0)
{
lean_object* v_impl_925_; lean_object* v___x_926_; 
lean_dec(v_size_915_);
v_impl_925_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_912_, v_v_913_, v_r_919_);
v___x_926_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_l_918_) == 0)
{
lean_object* v_size_927_; lean_object* v_size_928_; lean_object* v_k_929_; lean_object* v_v_930_; lean_object* v_l_931_; lean_object* v_r_932_; lean_object* v___x_933_; lean_object* v___x_934_; uint8_t v___x_935_; 
v_size_927_ = lean_ctor_get(v_l_918_, 0);
v_size_928_ = lean_ctor_get(v_impl_925_, 0);
lean_inc(v_size_928_);
v_k_929_ = lean_ctor_get(v_impl_925_, 1);
lean_inc(v_k_929_);
v_v_930_ = lean_ctor_get(v_impl_925_, 2);
lean_inc(v_v_930_);
v_l_931_ = lean_ctor_get(v_impl_925_, 3);
lean_inc(v_l_931_);
v_r_932_ = lean_ctor_get(v_impl_925_, 4);
lean_inc(v_r_932_);
v___x_933_ = lean_unsigned_to_nat(3u);
v___x_934_ = lean_nat_mul(v___x_933_, v_size_927_);
v___x_935_ = lean_nat_dec_lt(v___x_934_, v_size_928_);
lean_dec(v___x_934_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
lean_dec(v_r_932_);
lean_dec(v_l_931_);
lean_dec(v_v_930_);
lean_dec(v_k_929_);
v___x_936_ = lean_nat_add(v___x_926_, v_size_927_);
v___x_937_ = lean_nat_add(v___x_936_, v_size_928_);
lean_dec(v_size_928_);
lean_dec(v___x_936_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v_impl_925_);
lean_ctor_set(v___x_921_, 0, v___x_937_);
v___x_939_ = v___x_921_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
lean_ctor_set(v_reuseFailAlloc_940_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_940_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_940_, 3, v_l_918_);
lean_ctor_set(v_reuseFailAlloc_940_, 4, v_impl_925_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
else
{
lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_1004_; 
v_isSharedCheck_1004_ = !lean_is_exclusive(v_impl_925_);
if (v_isSharedCheck_1004_ == 0)
{
lean_object* v_unused_1005_; lean_object* v_unused_1006_; lean_object* v_unused_1007_; lean_object* v_unused_1008_; lean_object* v_unused_1009_; 
v_unused_1005_ = lean_ctor_get(v_impl_925_, 4);
lean_dec(v_unused_1005_);
v_unused_1006_ = lean_ctor_get(v_impl_925_, 3);
lean_dec(v_unused_1006_);
v_unused_1007_ = lean_ctor_get(v_impl_925_, 2);
lean_dec(v_unused_1007_);
v_unused_1008_ = lean_ctor_get(v_impl_925_, 1);
lean_dec(v_unused_1008_);
v_unused_1009_ = lean_ctor_get(v_impl_925_, 0);
lean_dec(v_unused_1009_);
v___x_942_ = v_impl_925_;
v_isShared_943_ = v_isSharedCheck_1004_;
goto v_resetjp_941_;
}
else
{
lean_dec(v_impl_925_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_1004_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v_size_944_; lean_object* v_k_945_; lean_object* v_v_946_; lean_object* v_l_947_; lean_object* v_r_948_; lean_object* v_size_949_; lean_object* v___x_950_; lean_object* v___x_951_; uint8_t v___x_952_; 
v_size_944_ = lean_ctor_get(v_l_931_, 0);
v_k_945_ = lean_ctor_get(v_l_931_, 1);
v_v_946_ = lean_ctor_get(v_l_931_, 2);
v_l_947_ = lean_ctor_get(v_l_931_, 3);
v_r_948_ = lean_ctor_get(v_l_931_, 4);
v_size_949_ = lean_ctor_get(v_r_932_, 0);
v___x_950_ = lean_unsigned_to_nat(2u);
v___x_951_ = lean_nat_mul(v___x_950_, v_size_949_);
v___x_952_ = lean_nat_dec_lt(v_size_944_, v___x_951_);
lean_dec(v___x_951_);
if (v___x_952_ == 0)
{
lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_980_; 
lean_inc(v_r_948_);
lean_inc(v_l_947_);
lean_inc(v_v_946_);
lean_inc(v_k_945_);
v_isSharedCheck_980_ = !lean_is_exclusive(v_l_931_);
if (v_isSharedCheck_980_ == 0)
{
lean_object* v_unused_981_; lean_object* v_unused_982_; lean_object* v_unused_983_; lean_object* v_unused_984_; lean_object* v_unused_985_; 
v_unused_981_ = lean_ctor_get(v_l_931_, 4);
lean_dec(v_unused_981_);
v_unused_982_ = lean_ctor_get(v_l_931_, 3);
lean_dec(v_unused_982_);
v_unused_983_ = lean_ctor_get(v_l_931_, 2);
lean_dec(v_unused_983_);
v_unused_984_ = lean_ctor_get(v_l_931_, 1);
lean_dec(v_unused_984_);
v_unused_985_ = lean_ctor_get(v_l_931_, 0);
lean_dec(v_unused_985_);
v___x_954_ = v_l_931_;
v_isShared_955_ = v_isSharedCheck_980_;
goto v_resetjp_953_;
}
else
{
lean_dec(v_l_931_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_980_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___y_959_; lean_object* v___y_960_; lean_object* v___y_961_; lean_object* v___y_970_; 
v___x_956_ = lean_nat_add(v___x_926_, v_size_927_);
v___x_957_ = lean_nat_add(v___x_956_, v_size_928_);
lean_dec(v_size_928_);
if (lean_obj_tag(v_l_947_) == 0)
{
lean_object* v_size_978_; 
v_size_978_ = lean_ctor_get(v_l_947_, 0);
lean_inc(v_size_978_);
v___y_970_ = v_size_978_;
goto v___jp_969_;
}
else
{
lean_object* v___x_979_; 
v___x_979_ = lean_unsigned_to_nat(0u);
v___y_970_ = v___x_979_;
goto v___jp_969_;
}
v___jp_958_:
{
lean_object* v___x_962_; lean_object* v___x_964_; 
v___x_962_ = lean_nat_add(v___y_959_, v___y_961_);
lean_dec(v___y_961_);
lean_dec(v___y_959_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 4, v_r_932_);
lean_ctor_set(v___x_954_, 3, v_r_948_);
lean_ctor_set(v___x_954_, 2, v_v_930_);
lean_ctor_set(v___x_954_, 1, v_k_929_);
lean_ctor_set(v___x_954_, 0, v___x_962_);
v___x_964_ = v___x_954_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v___x_962_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_k_929_);
lean_ctor_set(v_reuseFailAlloc_968_, 2, v_v_930_);
lean_ctor_set(v_reuseFailAlloc_968_, 3, v_r_948_);
lean_ctor_set(v_reuseFailAlloc_968_, 4, v_r_932_);
v___x_964_ = v_reuseFailAlloc_968_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
lean_object* v___x_966_; 
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 4, v___x_964_);
lean_ctor_set(v___x_942_, 3, v___y_960_);
lean_ctor_set(v___x_942_, 2, v_v_946_);
lean_ctor_set(v___x_942_, 1, v_k_945_);
lean_ctor_set(v___x_942_, 0, v___x_957_);
v___x_966_ = v___x_942_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_967_; 
v_reuseFailAlloc_967_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_967_, 0, v___x_957_);
lean_ctor_set(v_reuseFailAlloc_967_, 1, v_k_945_);
lean_ctor_set(v_reuseFailAlloc_967_, 2, v_v_946_);
lean_ctor_set(v_reuseFailAlloc_967_, 3, v___y_960_);
lean_ctor_set(v_reuseFailAlloc_967_, 4, v___x_964_);
v___x_966_ = v_reuseFailAlloc_967_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
return v___x_966_;
}
}
}
v___jp_969_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_971_ = lean_nat_add(v___x_956_, v___y_970_);
lean_dec(v___y_970_);
lean_dec(v___x_956_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v_l_947_);
lean_ctor_set(v___x_921_, 0, v___x_971_);
v___x_973_ = v___x_921_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_971_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_977_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_977_, 3, v_l_918_);
lean_ctor_set(v_reuseFailAlloc_977_, 4, v_l_947_);
v___x_973_ = v_reuseFailAlloc_977_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
lean_object* v___x_974_; 
v___x_974_ = lean_nat_add(v___x_926_, v_size_949_);
if (lean_obj_tag(v_r_948_) == 0)
{
lean_object* v_size_975_; 
v_size_975_ = lean_ctor_get(v_r_948_, 0);
lean_inc(v_size_975_);
v___y_959_ = v___x_974_;
v___y_960_ = v___x_973_;
v___y_961_ = v_size_975_;
goto v___jp_958_;
}
else
{
lean_object* v___x_976_; 
v___x_976_ = lean_unsigned_to_nat(0u);
v___y_959_ = v___x_974_;
v___y_960_ = v___x_973_;
v___y_961_ = v___x_976_;
goto v___jp_958_;
}
}
}
}
}
else
{
lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_990_; 
lean_del_object(v___x_921_);
v___x_986_ = lean_nat_add(v___x_926_, v_size_927_);
v___x_987_ = lean_nat_add(v___x_986_, v_size_928_);
lean_dec(v_size_928_);
v___x_988_ = lean_nat_add(v___x_986_, v_size_944_);
lean_dec(v___x_986_);
lean_inc_ref(v_l_918_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 4, v_l_931_);
lean_ctor_set(v___x_942_, 3, v_l_918_);
lean_ctor_set(v___x_942_, 2, v_v_917_);
lean_ctor_set(v___x_942_, 1, v_k_916_);
lean_ctor_set(v___x_942_, 0, v___x_988_);
v___x_990_ = v___x_942_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_1003_; 
v_reuseFailAlloc_1003_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1003_, 0, v___x_988_);
lean_ctor_set(v_reuseFailAlloc_1003_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1003_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1003_, 3, v_l_918_);
lean_ctor_set(v_reuseFailAlloc_1003_, 4, v_l_931_);
v___x_990_ = v_reuseFailAlloc_1003_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
v_isSharedCheck_997_ = !lean_is_exclusive(v_l_918_);
if (v_isSharedCheck_997_ == 0)
{
lean_object* v_unused_998_; lean_object* v_unused_999_; lean_object* v_unused_1000_; lean_object* v_unused_1001_; lean_object* v_unused_1002_; 
v_unused_998_ = lean_ctor_get(v_l_918_, 4);
lean_dec(v_unused_998_);
v_unused_999_ = lean_ctor_get(v_l_918_, 3);
lean_dec(v_unused_999_);
v_unused_1000_ = lean_ctor_get(v_l_918_, 2);
lean_dec(v_unused_1000_);
v_unused_1001_ = lean_ctor_get(v_l_918_, 1);
lean_dec(v_unused_1001_);
v_unused_1002_ = lean_ctor_get(v_l_918_, 0);
lean_dec(v_unused_1002_);
v___x_992_ = v_l_918_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_dec(v_l_918_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
lean_ctor_set(v___x_992_, 4, v_r_932_);
lean_ctor_set(v___x_992_, 3, v___x_990_);
lean_ctor_set(v___x_992_, 2, v_v_930_);
lean_ctor_set(v___x_992_, 1, v_k_929_);
lean_ctor_set(v___x_992_, 0, v___x_987_);
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v___x_987_);
lean_ctor_set(v_reuseFailAlloc_996_, 1, v_k_929_);
lean_ctor_set(v_reuseFailAlloc_996_, 2, v_v_930_);
lean_ctor_set(v_reuseFailAlloc_996_, 3, v___x_990_);
lean_ctor_set(v_reuseFailAlloc_996_, 4, v_r_932_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1010_; 
v_l_1010_ = lean_ctor_get(v_impl_925_, 3);
lean_inc(v_l_1010_);
if (lean_obj_tag(v_l_1010_) == 0)
{
lean_object* v_r_1011_; lean_object* v_k_1012_; lean_object* v_v_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1036_; 
v_r_1011_ = lean_ctor_get(v_impl_925_, 4);
v_k_1012_ = lean_ctor_get(v_impl_925_, 1);
v_v_1013_ = lean_ctor_get(v_impl_925_, 2);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_impl_925_);
if (v_isSharedCheck_1036_ == 0)
{
lean_object* v_unused_1037_; lean_object* v_unused_1038_; 
v_unused_1037_ = lean_ctor_get(v_impl_925_, 3);
lean_dec(v_unused_1037_);
v_unused_1038_ = lean_ctor_get(v_impl_925_, 0);
lean_dec(v_unused_1038_);
v___x_1015_ = v_impl_925_;
v_isShared_1016_ = v_isSharedCheck_1036_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_r_1011_);
lean_inc(v_v_1013_);
lean_inc(v_k_1012_);
lean_dec(v_impl_925_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1036_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v_k_1017_; lean_object* v_v_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1032_; 
v_k_1017_ = lean_ctor_get(v_l_1010_, 1);
v_v_1018_ = lean_ctor_get(v_l_1010_, 2);
v_isSharedCheck_1032_ = !lean_is_exclusive(v_l_1010_);
if (v_isSharedCheck_1032_ == 0)
{
lean_object* v_unused_1033_; lean_object* v_unused_1034_; lean_object* v_unused_1035_; 
v_unused_1033_ = lean_ctor_get(v_l_1010_, 4);
lean_dec(v_unused_1033_);
v_unused_1034_ = lean_ctor_get(v_l_1010_, 3);
lean_dec(v_unused_1034_);
v_unused_1035_ = lean_ctor_get(v_l_1010_, 0);
lean_dec(v_unused_1035_);
v___x_1020_ = v_l_1010_;
v_isShared_1021_ = v_isSharedCheck_1032_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_v_1018_);
lean_inc(v_k_1017_);
lean_dec(v_l_1010_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1032_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1022_; lean_object* v___x_1024_; 
v___x_1022_ = lean_unsigned_to_nat(3u);
lean_inc_n(v_r_1011_, 2);
if (v_isShared_1021_ == 0)
{
lean_ctor_set(v___x_1020_, 4, v_r_1011_);
lean_ctor_set(v___x_1020_, 3, v_r_1011_);
lean_ctor_set(v___x_1020_, 2, v_v_917_);
lean_ctor_set(v___x_1020_, 1, v_k_916_);
lean_ctor_set(v___x_1020_, 0, v___x_926_);
v___x_1024_ = v___x_1020_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_1031_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1031_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1031_, 3, v_r_1011_);
lean_ctor_set(v_reuseFailAlloc_1031_, 4, v_r_1011_);
v___x_1024_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1026_; 
lean_inc(v_r_1011_);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 3, v_r_1011_);
lean_ctor_set(v___x_1015_, 0, v___x_926_);
v___x_1026_ = v___x_1015_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1030_; 
v_reuseFailAlloc_1030_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1030_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_1030_, 1, v_k_1012_);
lean_ctor_set(v_reuseFailAlloc_1030_, 2, v_v_1013_);
lean_ctor_set(v_reuseFailAlloc_1030_, 3, v_r_1011_);
lean_ctor_set(v_reuseFailAlloc_1030_, 4, v_r_1011_);
v___x_1026_ = v_reuseFailAlloc_1030_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1028_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v___x_1026_);
lean_ctor_set(v___x_921_, 3, v___x_1024_);
lean_ctor_set(v___x_921_, 2, v_v_1018_);
lean_ctor_set(v___x_921_, 1, v_k_1017_);
lean_ctor_set(v___x_921_, 0, v___x_1022_);
v___x_1028_ = v___x_921_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v___x_1022_);
lean_ctor_set(v_reuseFailAlloc_1029_, 1, v_k_1017_);
lean_ctor_set(v_reuseFailAlloc_1029_, 2, v_v_1018_);
lean_ctor_set(v_reuseFailAlloc_1029_, 3, v___x_1024_);
lean_ctor_set(v_reuseFailAlloc_1029_, 4, v___x_1026_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
}
}
else
{
lean_object* v_r_1039_; 
v_r_1039_ = lean_ctor_get(v_impl_925_, 4);
lean_inc(v_r_1039_);
if (lean_obj_tag(v_r_1039_) == 0)
{
lean_object* v_k_1040_; lean_object* v_v_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1052_; 
v_k_1040_ = lean_ctor_get(v_impl_925_, 1);
v_v_1041_ = lean_ctor_get(v_impl_925_, 2);
v_isSharedCheck_1052_ = !lean_is_exclusive(v_impl_925_);
if (v_isSharedCheck_1052_ == 0)
{
lean_object* v_unused_1053_; lean_object* v_unused_1054_; lean_object* v_unused_1055_; 
v_unused_1053_ = lean_ctor_get(v_impl_925_, 4);
lean_dec(v_unused_1053_);
v_unused_1054_ = lean_ctor_get(v_impl_925_, 3);
lean_dec(v_unused_1054_);
v_unused_1055_ = lean_ctor_get(v_impl_925_, 0);
lean_dec(v_unused_1055_);
v___x_1043_ = v_impl_925_;
v_isShared_1044_ = v_isSharedCheck_1052_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_v_1041_);
lean_inc(v_k_1040_);
lean_dec(v_impl_925_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1052_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1045_; lean_object* v___x_1047_; 
v___x_1045_ = lean_unsigned_to_nat(3u);
if (v_isShared_1044_ == 0)
{
lean_ctor_set(v___x_1043_, 4, v_l_1010_);
lean_ctor_set(v___x_1043_, 2, v_v_917_);
lean_ctor_set(v___x_1043_, 1, v_k_916_);
lean_ctor_set(v___x_1043_, 0, v___x_926_);
v___x_1047_ = v___x_1043_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_926_);
lean_ctor_set(v_reuseFailAlloc_1051_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1051_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1051_, 3, v_l_1010_);
lean_ctor_set(v_reuseFailAlloc_1051_, 4, v_l_1010_);
v___x_1047_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
lean_object* v___x_1049_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v_r_1039_);
lean_ctor_set(v___x_921_, 3, v___x_1047_);
lean_ctor_set(v___x_921_, 2, v_v_1041_);
lean_ctor_set(v___x_921_, 1, v_k_1040_);
lean_ctor_set(v___x_921_, 0, v___x_1045_);
v___x_1049_ = v___x_921_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1050_; 
v_reuseFailAlloc_1050_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1050_, 0, v___x_1045_);
lean_ctor_set(v_reuseFailAlloc_1050_, 1, v_k_1040_);
lean_ctor_set(v_reuseFailAlloc_1050_, 2, v_v_1041_);
lean_ctor_set(v_reuseFailAlloc_1050_, 3, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1050_, 4, v_r_1039_);
v___x_1049_ = v_reuseFailAlloc_1050_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
return v___x_1049_;
}
}
}
}
else
{
lean_object* v___x_1056_; lean_object* v___x_1058_; 
v___x_1056_ = lean_unsigned_to_nat(2u);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v_impl_925_);
lean_ctor_set(v___x_921_, 3, v_r_1039_);
lean_ctor_set(v___x_921_, 0, v___x_1056_);
v___x_1058_ = v___x_921_;
goto v_reusejp_1057_;
}
else
{
lean_object* v_reuseFailAlloc_1059_; 
v_reuseFailAlloc_1059_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1059_, 0, v___x_1056_);
lean_ctor_set(v_reuseFailAlloc_1059_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1059_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1059_, 3, v_r_1039_);
lean_ctor_set(v_reuseFailAlloc_1059_, 4, v_impl_925_);
v___x_1058_ = v_reuseFailAlloc_1059_;
goto v_reusejp_1057_;
}
v_reusejp_1057_:
{
return v___x_1058_;
}
}
}
}
}
else
{
lean_object* v___x_1061_; 
lean_dec(v_v_917_);
lean_dec(v_k_916_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 2, v_v_913_);
lean_ctor_set(v___x_921_, 1, v_k_912_);
v___x_1061_ = v___x_921_;
goto v_reusejp_1060_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v_size_915_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v_k_912_);
lean_ctor_set(v_reuseFailAlloc_1062_, 2, v_v_913_);
lean_ctor_set(v_reuseFailAlloc_1062_, 3, v_l_918_);
lean_ctor_set(v_reuseFailAlloc_1062_, 4, v_r_919_);
v___x_1061_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1060_;
}
v_reusejp_1060_:
{
return v___x_1061_;
}
}
}
else
{
lean_object* v_impl_1063_; lean_object* v___x_1064_; 
lean_dec(v_size_915_);
v_impl_1063_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_912_, v_v_913_, v_l_918_);
v___x_1064_ = lean_unsigned_to_nat(1u);
if (lean_obj_tag(v_r_919_) == 0)
{
lean_object* v_size_1065_; lean_object* v_size_1066_; lean_object* v_k_1067_; lean_object* v_v_1068_; lean_object* v_l_1069_; lean_object* v_r_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; 
v_size_1065_ = lean_ctor_get(v_r_919_, 0);
v_size_1066_ = lean_ctor_get(v_impl_1063_, 0);
lean_inc(v_size_1066_);
v_k_1067_ = lean_ctor_get(v_impl_1063_, 1);
lean_inc(v_k_1067_);
v_v_1068_ = lean_ctor_get(v_impl_1063_, 2);
lean_inc(v_v_1068_);
v_l_1069_ = lean_ctor_get(v_impl_1063_, 3);
lean_inc(v_l_1069_);
v_r_1070_ = lean_ctor_get(v_impl_1063_, 4);
lean_inc(v_r_1070_);
v___x_1071_ = lean_unsigned_to_nat(3u);
v___x_1072_ = lean_nat_mul(v___x_1071_, v_size_1065_);
v___x_1073_ = lean_nat_dec_lt(v___x_1072_, v_size_1066_);
lean_dec(v___x_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1077_; 
lean_dec(v_r_1070_);
lean_dec(v_l_1069_);
lean_dec(v_v_1068_);
lean_dec(v_k_1067_);
v___x_1074_ = lean_nat_add(v___x_1064_, v_size_1066_);
lean_dec(v_size_1066_);
v___x_1075_ = lean_nat_add(v___x_1074_, v_size_1065_);
lean_dec(v___x_1074_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 3, v_impl_1063_);
lean_ctor_set(v___x_921_, 0, v___x_1075_);
v___x_1077_ = v___x_921_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1075_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v_impl_1063_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v_r_919_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
else
{
lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1144_; 
v_isSharedCheck_1144_ = !lean_is_exclusive(v_impl_1063_);
if (v_isSharedCheck_1144_ == 0)
{
lean_object* v_unused_1145_; lean_object* v_unused_1146_; lean_object* v_unused_1147_; lean_object* v_unused_1148_; lean_object* v_unused_1149_; 
v_unused_1145_ = lean_ctor_get(v_impl_1063_, 4);
lean_dec(v_unused_1145_);
v_unused_1146_ = lean_ctor_get(v_impl_1063_, 3);
lean_dec(v_unused_1146_);
v_unused_1147_ = lean_ctor_get(v_impl_1063_, 2);
lean_dec(v_unused_1147_);
v_unused_1148_ = lean_ctor_get(v_impl_1063_, 1);
lean_dec(v_unused_1148_);
v_unused_1149_ = lean_ctor_get(v_impl_1063_, 0);
lean_dec(v_unused_1149_);
v___x_1080_ = v_impl_1063_;
v_isShared_1081_ = v_isSharedCheck_1144_;
goto v_resetjp_1079_;
}
else
{
lean_dec(v_impl_1063_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1144_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v_size_1082_; lean_object* v_size_1083_; lean_object* v_k_1084_; lean_object* v_v_1085_; lean_object* v_l_1086_; lean_object* v_r_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; uint8_t v___x_1090_; 
v_size_1082_ = lean_ctor_get(v_l_1069_, 0);
v_size_1083_ = lean_ctor_get(v_r_1070_, 0);
v_k_1084_ = lean_ctor_get(v_r_1070_, 1);
v_v_1085_ = lean_ctor_get(v_r_1070_, 2);
v_l_1086_ = lean_ctor_get(v_r_1070_, 3);
v_r_1087_ = lean_ctor_get(v_r_1070_, 4);
v___x_1088_ = lean_unsigned_to_nat(2u);
v___x_1089_ = lean_nat_mul(v___x_1088_, v_size_1082_);
v___x_1090_ = lean_nat_dec_lt(v_size_1083_, v___x_1089_);
lean_dec(v___x_1089_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1119_; 
lean_inc(v_r_1087_);
lean_inc(v_l_1086_);
lean_inc(v_v_1085_);
lean_inc(v_k_1084_);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_r_1070_);
if (v_isSharedCheck_1119_ == 0)
{
lean_object* v_unused_1120_; lean_object* v_unused_1121_; lean_object* v_unused_1122_; lean_object* v_unused_1123_; lean_object* v_unused_1124_; 
v_unused_1120_ = lean_ctor_get(v_r_1070_, 4);
lean_dec(v_unused_1120_);
v_unused_1121_ = lean_ctor_get(v_r_1070_, 3);
lean_dec(v_unused_1121_);
v_unused_1122_ = lean_ctor_get(v_r_1070_, 2);
lean_dec(v_unused_1122_);
v_unused_1123_ = lean_ctor_get(v_r_1070_, 1);
lean_dec(v_unused_1123_);
v_unused_1124_ = lean_ctor_get(v_r_1070_, 0);
lean_dec(v_unused_1124_);
v___x_1092_ = v_r_1070_;
v_isShared_1093_ = v_isSharedCheck_1119_;
goto v_resetjp_1091_;
}
else
{
lean_dec(v_r_1070_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1119_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___x_1107_; lean_object* v___y_1109_; 
v___x_1094_ = lean_nat_add(v___x_1064_, v_size_1066_);
lean_dec(v_size_1066_);
v___x_1095_ = lean_nat_add(v___x_1094_, v_size_1065_);
lean_dec(v___x_1094_);
v___x_1107_ = lean_nat_add(v___x_1064_, v_size_1082_);
if (lean_obj_tag(v_l_1086_) == 0)
{
lean_object* v_size_1117_; 
v_size_1117_ = lean_ctor_get(v_l_1086_, 0);
lean_inc(v_size_1117_);
v___y_1109_ = v_size_1117_;
goto v___jp_1108_;
}
else
{
lean_object* v___x_1118_; 
v___x_1118_ = lean_unsigned_to_nat(0u);
v___y_1109_ = v___x_1118_;
goto v___jp_1108_;
}
v___jp_1096_:
{
lean_object* v___x_1100_; lean_object* v___x_1102_; 
v___x_1100_ = lean_nat_add(v___y_1097_, v___y_1099_);
lean_dec(v___y_1099_);
lean_dec(v___y_1097_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 4, v_r_919_);
lean_ctor_set(v___x_1092_, 3, v_r_1087_);
lean_ctor_set(v___x_1092_, 2, v_v_917_);
lean_ctor_set(v___x_1092_, 1, v_k_916_);
lean_ctor_set(v___x_1092_, 0, v___x_1100_);
v___x_1102_ = v___x_1092_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1106_; 
v_reuseFailAlloc_1106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1106_, 0, v___x_1100_);
lean_ctor_set(v_reuseFailAlloc_1106_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1106_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1106_, 3, v_r_1087_);
lean_ctor_set(v_reuseFailAlloc_1106_, 4, v_r_919_);
v___x_1102_ = v_reuseFailAlloc_1106_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
lean_object* v___x_1104_; 
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 4, v___x_1102_);
lean_ctor_set(v___x_1080_, 3, v___y_1098_);
lean_ctor_set(v___x_1080_, 2, v_v_1085_);
lean_ctor_set(v___x_1080_, 1, v_k_1084_);
lean_ctor_set(v___x_1080_, 0, v___x_1095_);
v___x_1104_ = v___x_1080_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_k_1084_);
lean_ctor_set(v_reuseFailAlloc_1105_, 2, v_v_1085_);
lean_ctor_set(v_reuseFailAlloc_1105_, 3, v___y_1098_);
lean_ctor_set(v_reuseFailAlloc_1105_, 4, v___x_1102_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
v___jp_1108_:
{
lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1110_ = lean_nat_add(v___x_1107_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec(v___x_1107_);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v_l_1086_);
lean_ctor_set(v___x_921_, 3, v_l_1069_);
lean_ctor_set(v___x_921_, 2, v_v_1068_);
lean_ctor_set(v___x_921_, 1, v_k_1067_);
lean_ctor_set(v___x_921_, 0, v___x_1110_);
v___x_1112_ = v___x_921_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v___x_1110_);
lean_ctor_set(v_reuseFailAlloc_1116_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1116_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1116_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1116_, 4, v_l_1086_);
v___x_1112_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_nat_add(v___x_1064_, v_size_1065_);
if (lean_obj_tag(v_r_1087_) == 0)
{
lean_object* v_size_1114_; 
v_size_1114_ = lean_ctor_get(v_r_1087_, 0);
lean_inc(v_size_1114_);
v___y_1097_ = v___x_1113_;
v___y_1098_ = v___x_1112_;
v___y_1099_ = v_size_1114_;
goto v___jp_1096_;
}
else
{
lean_object* v___x_1115_; 
v___x_1115_ = lean_unsigned_to_nat(0u);
v___y_1097_ = v___x_1113_;
v___y_1098_ = v___x_1112_;
v___y_1099_ = v___x_1115_;
goto v___jp_1096_;
}
}
}
}
}
else
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1130_; 
lean_del_object(v___x_921_);
v___x_1125_ = lean_nat_add(v___x_1064_, v_size_1066_);
lean_dec(v_size_1066_);
v___x_1126_ = lean_nat_add(v___x_1125_, v_size_1065_);
lean_dec(v___x_1125_);
v___x_1127_ = lean_nat_add(v___x_1064_, v_size_1065_);
v___x_1128_ = lean_nat_add(v___x_1127_, v_size_1083_);
lean_dec(v___x_1127_);
lean_inc_ref(v_r_919_);
if (v_isShared_1081_ == 0)
{
lean_ctor_set(v___x_1080_, 4, v_r_919_);
lean_ctor_set(v___x_1080_, 3, v_r_1070_);
lean_ctor_set(v___x_1080_, 2, v_v_917_);
lean_ctor_set(v___x_1080_, 1, v_k_916_);
lean_ctor_set(v___x_1080_, 0, v___x_1128_);
v___x_1130_ = v___x_1080_;
goto v_reusejp_1129_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1143_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1143_, 3, v_r_1070_);
lean_ctor_set(v_reuseFailAlloc_1143_, 4, v_r_919_);
v___x_1130_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1129_;
}
v_reusejp_1129_:
{
lean_object* v___x_1132_; uint8_t v_isShared_1133_; uint8_t v_isSharedCheck_1137_; 
v_isSharedCheck_1137_ = !lean_is_exclusive(v_r_919_);
if (v_isSharedCheck_1137_ == 0)
{
lean_object* v_unused_1138_; lean_object* v_unused_1139_; lean_object* v_unused_1140_; lean_object* v_unused_1141_; lean_object* v_unused_1142_; 
v_unused_1138_ = lean_ctor_get(v_r_919_, 4);
lean_dec(v_unused_1138_);
v_unused_1139_ = lean_ctor_get(v_r_919_, 3);
lean_dec(v_unused_1139_);
v_unused_1140_ = lean_ctor_get(v_r_919_, 2);
lean_dec(v_unused_1140_);
v_unused_1141_ = lean_ctor_get(v_r_919_, 1);
lean_dec(v_unused_1141_);
v_unused_1142_ = lean_ctor_get(v_r_919_, 0);
lean_dec(v_unused_1142_);
v___x_1132_ = v_r_919_;
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
else
{
lean_dec(v_r_919_);
v___x_1132_ = lean_box(0);
v_isShared_1133_ = v_isSharedCheck_1137_;
goto v_resetjp_1131_;
}
v_resetjp_1131_:
{
lean_object* v___x_1135_; 
if (v_isShared_1133_ == 0)
{
lean_ctor_set(v___x_1132_, 4, v___x_1130_);
lean_ctor_set(v___x_1132_, 3, v_l_1069_);
lean_ctor_set(v___x_1132_, 2, v_v_1068_);
lean_ctor_set(v___x_1132_, 1, v_k_1067_);
lean_ctor_set(v___x_1132_, 0, v___x_1126_);
v___x_1135_ = v___x_1132_;
goto v_reusejp_1134_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v___x_1126_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_k_1067_);
lean_ctor_set(v_reuseFailAlloc_1136_, 2, v_v_1068_);
lean_ctor_set(v_reuseFailAlloc_1136_, 3, v_l_1069_);
lean_ctor_set(v_reuseFailAlloc_1136_, 4, v___x_1130_);
v___x_1135_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1134_;
}
v_reusejp_1134_:
{
return v___x_1135_;
}
}
}
}
}
}
}
else
{
lean_object* v_l_1150_; 
v_l_1150_ = lean_ctor_get(v_impl_1063_, 3);
lean_inc(v_l_1150_);
if (lean_obj_tag(v_l_1150_) == 0)
{
lean_object* v_r_1151_; lean_object* v_k_1152_; lean_object* v_v_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1164_; 
v_r_1151_ = lean_ctor_get(v_impl_1063_, 4);
v_k_1152_ = lean_ctor_get(v_impl_1063_, 1);
v_v_1153_ = lean_ctor_get(v_impl_1063_, 2);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_impl_1063_);
if (v_isSharedCheck_1164_ == 0)
{
lean_object* v_unused_1165_; lean_object* v_unused_1166_; 
v_unused_1165_ = lean_ctor_get(v_impl_1063_, 3);
lean_dec(v_unused_1165_);
v_unused_1166_ = lean_ctor_get(v_impl_1063_, 0);
lean_dec(v_unused_1166_);
v___x_1155_ = v_impl_1063_;
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_r_1151_);
lean_inc(v_v_1153_);
lean_inc(v_k_1152_);
lean_dec(v_impl_1063_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1164_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1157_; lean_object* v___x_1159_; 
v___x_1157_ = lean_unsigned_to_nat(3u);
lean_inc(v_r_1151_);
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 3, v_r_1151_);
lean_ctor_set(v___x_1155_, 2, v_v_917_);
lean_ctor_set(v___x_1155_, 1, v_k_916_);
lean_ctor_set(v___x_1155_, 0, v___x_1064_);
v___x_1159_ = v___x_1155_;
goto v_reusejp_1158_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1163_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1163_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1163_, 3, v_r_1151_);
lean_ctor_set(v_reuseFailAlloc_1163_, 4, v_r_1151_);
v___x_1159_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1158_;
}
v_reusejp_1158_:
{
lean_object* v___x_1161_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v___x_1159_);
lean_ctor_set(v___x_921_, 3, v_l_1150_);
lean_ctor_set(v___x_921_, 2, v_v_1153_);
lean_ctor_set(v___x_921_, 1, v_k_1152_);
lean_ctor_set(v___x_921_, 0, v___x_1157_);
v___x_1161_ = v___x_921_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v___x_1157_);
lean_ctor_set(v_reuseFailAlloc_1162_, 1, v_k_1152_);
lean_ctor_set(v_reuseFailAlloc_1162_, 2, v_v_1153_);
lean_ctor_set(v_reuseFailAlloc_1162_, 3, v_l_1150_);
lean_ctor_set(v_reuseFailAlloc_1162_, 4, v___x_1159_);
v___x_1161_ = v_reuseFailAlloc_1162_;
goto v_reusejp_1160_;
}
v_reusejp_1160_:
{
return v___x_1161_;
}
}
}
}
else
{
lean_object* v_r_1167_; 
v_r_1167_ = lean_ctor_get(v_impl_1063_, 4);
lean_inc(v_r_1167_);
if (lean_obj_tag(v_r_1167_) == 0)
{
lean_object* v_k_1168_; lean_object* v_v_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1192_; 
v_k_1168_ = lean_ctor_get(v_impl_1063_, 1);
v_v_1169_ = lean_ctor_get(v_impl_1063_, 2);
v_isSharedCheck_1192_ = !lean_is_exclusive(v_impl_1063_);
if (v_isSharedCheck_1192_ == 0)
{
lean_object* v_unused_1193_; lean_object* v_unused_1194_; lean_object* v_unused_1195_; 
v_unused_1193_ = lean_ctor_get(v_impl_1063_, 4);
lean_dec(v_unused_1193_);
v_unused_1194_ = lean_ctor_get(v_impl_1063_, 3);
lean_dec(v_unused_1194_);
v_unused_1195_ = lean_ctor_get(v_impl_1063_, 0);
lean_dec(v_unused_1195_);
v___x_1171_ = v_impl_1063_;
v_isShared_1172_ = v_isSharedCheck_1192_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_v_1169_);
lean_inc(v_k_1168_);
lean_dec(v_impl_1063_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1192_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v_k_1173_; lean_object* v_v_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1188_; 
v_k_1173_ = lean_ctor_get(v_r_1167_, 1);
v_v_1174_ = lean_ctor_get(v_r_1167_, 2);
v_isSharedCheck_1188_ = !lean_is_exclusive(v_r_1167_);
if (v_isSharedCheck_1188_ == 0)
{
lean_object* v_unused_1189_; lean_object* v_unused_1190_; lean_object* v_unused_1191_; 
v_unused_1189_ = lean_ctor_get(v_r_1167_, 4);
lean_dec(v_unused_1189_);
v_unused_1190_ = lean_ctor_get(v_r_1167_, 3);
lean_dec(v_unused_1190_);
v_unused_1191_ = lean_ctor_get(v_r_1167_, 0);
lean_dec(v_unused_1191_);
v___x_1176_ = v_r_1167_;
v_isShared_1177_ = v_isSharedCheck_1188_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_v_1174_);
lean_inc(v_k_1173_);
lean_dec(v_r_1167_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1188_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1178_ = lean_unsigned_to_nat(3u);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 4, v_l_1150_);
lean_ctor_set(v___x_1176_, 3, v_l_1150_);
lean_ctor_set(v___x_1176_, 2, v_v_1169_);
lean_ctor_set(v___x_1176_, 1, v_k_1168_);
lean_ctor_set(v___x_1176_, 0, v___x_1064_);
v___x_1180_ = v___x_1176_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1187_, 1, v_k_1168_);
lean_ctor_set(v_reuseFailAlloc_1187_, 2, v_v_1169_);
lean_ctor_set(v_reuseFailAlloc_1187_, 3, v_l_1150_);
lean_ctor_set(v_reuseFailAlloc_1187_, 4, v_l_1150_);
v___x_1180_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1182_; 
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 4, v_l_1150_);
lean_ctor_set(v___x_1171_, 2, v_v_917_);
lean_ctor_set(v___x_1171_, 1, v_k_916_);
lean_ctor_set(v___x_1171_, 0, v___x_1064_);
v___x_1182_ = v___x_1171_;
goto v_reusejp_1181_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v___x_1064_);
lean_ctor_set(v_reuseFailAlloc_1186_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1186_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1186_, 3, v_l_1150_);
lean_ctor_set(v_reuseFailAlloc_1186_, 4, v_l_1150_);
v___x_1182_ = v_reuseFailAlloc_1186_;
goto v_reusejp_1181_;
}
v_reusejp_1181_:
{
lean_object* v___x_1184_; 
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v___x_1182_);
lean_ctor_set(v___x_921_, 3, v___x_1180_);
lean_ctor_set(v___x_921_, 2, v_v_1174_);
lean_ctor_set(v___x_921_, 1, v_k_1173_);
lean_ctor_set(v___x_921_, 0, v___x_1178_);
v___x_1184_ = v___x_921_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1185_, 1, v_k_1173_);
lean_ctor_set(v_reuseFailAlloc_1185_, 2, v_v_1174_);
lean_ctor_set(v_reuseFailAlloc_1185_, 3, v___x_1180_);
lean_ctor_set(v_reuseFailAlloc_1185_, 4, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1198_; 
v___x_1196_ = lean_unsigned_to_nat(2u);
if (v_isShared_922_ == 0)
{
lean_ctor_set(v___x_921_, 4, v_r_1167_);
lean_ctor_set(v___x_921_, 3, v_impl_1063_);
lean_ctor_set(v___x_921_, 0, v___x_1196_);
v___x_1198_ = v___x_921_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v_k_916_);
lean_ctor_set(v_reuseFailAlloc_1199_, 2, v_v_917_);
lean_ctor_set(v_reuseFailAlloc_1199_, 3, v_impl_1063_);
lean_ctor_set(v_reuseFailAlloc_1199_, 4, v_r_1167_);
v___x_1198_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
return v___x_1198_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1201_; lean_object* v___x_1202_; 
v___x_1201_ = lean_unsigned_to_nat(1u);
v___x_1202_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1201_);
lean_ctor_set(v___x_1202_, 1, v_k_912_);
lean_ctor_set(v___x_1202_, 2, v_v_913_);
lean_ctor_set(v___x_1202_, 3, v_t_914_);
lean_ctor_set(v___x_1202_, 4, v_t_914_);
return v___x_1202_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(lean_object* v_as_x27_1203_, lean_object* v_b_1204_){
_start:
{
if (lean_obj_tag(v_as_x27_1203_) == 0)
{
return v_b_1204_;
}
else
{
lean_object* v_head_1205_; lean_object* v_tail_1206_; lean_object* v_fst_1207_; lean_object* v_snd_1208_; lean_object* v_r_1209_; 
v_head_1205_ = lean_ctor_get(v_as_x27_1203_, 0);
v_tail_1206_ = lean_ctor_get(v_as_x27_1203_, 1);
v_fst_1207_ = lean_ctor_get(v_head_1205_, 0);
v_snd_1208_ = lean_ctor_get(v_head_1205_, 1);
lean_inc(v_snd_1208_);
lean_inc(v_fst_1207_);
v_r_1209_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_fst_1207_, v_snd_1208_, v_b_1204_);
v_as_x27_1203_ = v_tail_1206_;
v_b_1204_ = v_r_1209_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg___boxed(lean_object* v_as_x27_1211_, lean_object* v_b_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v_as_x27_1211_, v_b_1212_);
lean_dec(v_as_x27_1211_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover(lean_object* v_fmt_1222_, lean_object* v_expr_1223_, lean_object* v_lctx_1224_, lean_object* v_location_x3f_1225_, lean_object* v_docString_x3f_1226_, lean_object* v_mkDocString_x3f_1227_, uint8_t v_explicit_1228_){
_start:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___y_1236_; 
v___x_1229_ = lean_unsigned_to_nat(0u);
v___x_1230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
lean_ctor_set(v___x_1230_, 1, v_fmt_1222_);
v___x_1231_ = ((lean_object*)(l_Lean_MessageData_withExprHover___closed__3));
v___x_1232_ = lean_box(0);
v___x_1233_ = 0;
v___x_1234_ = lean_alloc_ctor(0, 4, 2);
lean_ctor_set(v___x_1234_, 0, v___x_1231_);
lean_ctor_set(v___x_1234_, 1, v_lctx_1224_);
lean_ctor_set(v___x_1234_, 2, v___x_1232_);
lean_ctor_set(v___x_1234_, 3, v_expr_1223_);
lean_ctor_set_uint8(v___x_1234_, sizeof(void*)*4, v___x_1233_);
lean_ctor_set_uint8(v___x_1234_, sizeof(void*)*4 + 1, v___x_1233_);
if (lean_obj_tag(v_mkDocString_x3f_1227_) == 0)
{
if (lean_obj_tag(v_docString_x3f_1226_) == 0)
{
v___y_1236_ = v_mkDocString_x3f_1227_;
goto v___jp_1235_;
}
else
{
lean_object* v_val_1246_; lean_object* v___x_1248_; uint8_t v_isShared_1249_; uint8_t v_isSharedCheck_1254_; 
v_val_1246_ = lean_ctor_get(v_docString_x3f_1226_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v_docString_x3f_1226_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1248_ = v_docString_x3f_1226_;
v_isShared_1249_ = v_isSharedCheck_1254_;
goto v_resetjp_1247_;
}
else
{
lean_inc(v_val_1246_);
lean_dec(v_docString_x3f_1226_);
v___x_1248_ = lean_box(0);
v_isShared_1249_ = v_isSharedCheck_1254_;
goto v_resetjp_1247_;
}
v_resetjp_1247_:
{
lean_object* v___f_1250_; lean_object* v___x_1252_; 
v___f_1250_ = lean_alloc_closure((void*)(l_Lean_MessageData_withExprHover___lam__0___boxed), 3, 1);
lean_closure_set(v___f_1250_, 0, v_val_1246_);
if (v_isShared_1249_ == 0)
{
lean_ctor_set(v___x_1248_, 0, v___f_1250_);
v___x_1252_ = v___x_1248_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v___f_1250_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
v___y_1236_ = v___x_1252_;
goto v___jp_1235_;
}
}
}
}
else
{
lean_dec(v_docString_x3f_1226_);
v___y_1236_ = v_mkDocString_x3f_1227_;
goto v___jp_1235_;
}
v___jp_1235_:
{
lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v_r_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1237_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1237_, 0, v___x_1234_);
lean_ctor_set(v___x_1237_, 1, v_location_x3f_1225_);
lean_ctor_set(v___x_1237_, 2, v___y_1236_);
lean_ctor_set_uint8(v___x_1237_, sizeof(void*)*3, v_explicit_1228_);
v___x_1238_ = lean_alloc_ctor(13, 1, 0);
lean_ctor_set(v___x_1238_, 0, v___x_1237_);
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1229_);
lean_ctor_set(v___x_1239_, 1, v___x_1238_);
v___x_1240_ = lean_box(0);
v___x_1241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___x_1239_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v_r_1242_ = lean_box(1);
v___x_1243_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v___x_1241_, v_r_1242_);
lean_dec_ref_known(v___x_1241_, 2);
v___x_1244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1230_);
lean_ctor_set(v___x_1244_, 1, v___x_1243_);
v___x_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
return v___x_1245_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHover___boxed(lean_object* v_fmt_1255_, lean_object* v_expr_1256_, lean_object* v_lctx_1257_, lean_object* v_location_x3f_1258_, lean_object* v_docString_x3f_1259_, lean_object* v_mkDocString_x3f_1260_, lean_object* v_explicit_1261_){
_start:
{
uint8_t v_explicit_boxed_1262_; lean_object* v_res_1263_; 
v_explicit_boxed_1262_ = lean_unbox(v_explicit_1261_);
v_res_1263_ = l_Lean_MessageData_withExprHover(v_fmt_1255_, v_expr_1256_, v_lctx_1257_, v_location_x3f_1258_, v_docString_x3f_1259_, v_mkDocString_x3f_1260_, v_explicit_boxed_1262_);
return v_res_1263_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0(lean_object* v_00_u03b2_1264_, lean_object* v_k_1265_, lean_object* v_v_1266_, lean_object* v_t_1267_, lean_object* v_hl_1268_){
_start:
{
lean_object* v___x_1269_; 
v___x_1269_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_MessageData_withExprHover_spec__0___redArg(v_k_1265_, v_v_1266_, v_t_1267_);
return v___x_1269_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(lean_object* v_as_1270_, lean_object* v_as_x27_1271_, lean_object* v_b_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___redArg(v_as_x27_1271_, v_b_1272_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1___boxed(lean_object* v_as_1275_, lean_object* v_as_x27_1276_, lean_object* v_b_1277_, lean_object* v_a_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_List_forIn_x27_loop___at___00Lean_MessageData_withExprHover_spec__1(v_as_1275_, v_as_x27_1276_, v_b_1277_, v_a_1278_);
lean_dec(v_as_x27_1276_);
lean_dec(v_as_1275_);
return v_res_1279_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0(lean_object* v_fmt_1280_, lean_object* v_expr_1281_, lean_object* v_location_x3f_1282_, lean_object* v_docString_x3f_1283_, lean_object* v_mkDocString_x3f_1284_, uint8_t v_explicit_1285_, lean_object* v_toPure_1286_, lean_object* v_lctx_1287_){
_start:
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = l_Lean_MessageData_withExprHover(v_fmt_1280_, v_expr_1281_, v_lctx_1287_, v_location_x3f_1282_, v_docString_x3f_1283_, v_mkDocString_x3f_1284_, v_explicit_1285_);
v___x_1289_ = lean_apply_2(v_toPure_1286_, lean_box(0), v___x_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed(lean_object* v_fmt_1290_, lean_object* v_expr_1291_, lean_object* v_location_x3f_1292_, lean_object* v_docString_x3f_1293_, lean_object* v_mkDocString_x3f_1294_, lean_object* v_explicit_1295_, lean_object* v_toPure_1296_, lean_object* v_lctx_1297_){
_start:
{
uint8_t v_explicit_boxed_1298_; lean_object* v_res_1299_; 
v_explicit_boxed_1298_ = lean_unbox(v_explicit_1295_);
v_res_1299_ = l_Lean_MessageData_withExprHoverM___redArg___lam__0(v_fmt_1290_, v_expr_1291_, v_location_x3f_1292_, v_docString_x3f_1293_, v_mkDocString_x3f_1294_, v_explicit_boxed_1298_, v_toPure_1296_, v_lctx_1297_);
return v_res_1299_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg(lean_object* v_inst_1300_, lean_object* v_inst_1301_, lean_object* v_fmt_1302_, lean_object* v_expr_1303_, lean_object* v_lctx_x3f_1304_, lean_object* v_location_x3f_1305_, lean_object* v_docString_x3f_1306_, lean_object* v_mkDocString_x3f_1307_, uint8_t v_explicit_1308_){
_start:
{
lean_object* v_toApplicative_1309_; lean_object* v_toBind_1310_; lean_object* v_toPure_1311_; lean_object* v___x_1312_; lean_object* v___f_1313_; 
v_toApplicative_1309_ = lean_ctor_get(v_inst_1300_, 0);
lean_inc_ref(v_toApplicative_1309_);
v_toBind_1310_ = lean_ctor_get(v_inst_1300_, 1);
lean_inc(v_toBind_1310_);
lean_dec_ref(v_inst_1300_);
v_toPure_1311_ = lean_ctor_get(v_toApplicative_1309_, 1);
lean_inc_n(v_toPure_1311_, 2);
lean_dec_ref(v_toApplicative_1309_);
v___x_1312_ = lean_box(v_explicit_1308_);
v___f_1313_ = lean_alloc_closure((void*)(l_Lean_MessageData_withExprHoverM___redArg___lam__0___boxed), 8, 7);
lean_closure_set(v___f_1313_, 0, v_fmt_1302_);
lean_closure_set(v___f_1313_, 1, v_expr_1303_);
lean_closure_set(v___f_1313_, 2, v_location_x3f_1305_);
lean_closure_set(v___f_1313_, 3, v_docString_x3f_1306_);
lean_closure_set(v___f_1313_, 4, v_mkDocString_x3f_1307_);
lean_closure_set(v___f_1313_, 5, v___x_1312_);
lean_closure_set(v___f_1313_, 6, v_toPure_1311_);
if (lean_obj_tag(v_lctx_x3f_1304_) == 0)
{
lean_object* v___x_1314_; 
lean_dec(v_toPure_1311_);
v___x_1314_ = lean_apply_4(v_toBind_1310_, lean_box(0), lean_box(0), v_inst_1301_, v___f_1313_);
return v___x_1314_;
}
else
{
lean_object* v_val_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; 
lean_dec(v_inst_1301_);
v_val_1315_ = lean_ctor_get(v_lctx_x3f_1304_, 0);
lean_inc(v_val_1315_);
lean_dec_ref_known(v_lctx_x3f_1304_, 1);
v___x_1316_ = lean_apply_2(v_toPure_1311_, lean_box(0), v_val_1315_);
v___x_1317_ = lean_apply_4(v_toBind_1310_, lean_box(0), lean_box(0), v___x_1316_, v___f_1313_);
return v___x_1317_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___redArg___boxed(lean_object* v_inst_1318_, lean_object* v_inst_1319_, lean_object* v_fmt_1320_, lean_object* v_expr_1321_, lean_object* v_lctx_x3f_1322_, lean_object* v_location_x3f_1323_, lean_object* v_docString_x3f_1324_, lean_object* v_mkDocString_x3f_1325_, lean_object* v_explicit_1326_){
_start:
{
uint8_t v_explicit_boxed_1327_; lean_object* v_res_1328_; 
v_explicit_boxed_1327_ = lean_unbox(v_explicit_1326_);
v_res_1328_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1318_, v_inst_1319_, v_fmt_1320_, v_expr_1321_, v_lctx_x3f_1322_, v_location_x3f_1323_, v_docString_x3f_1324_, v_mkDocString_x3f_1325_, v_explicit_boxed_1327_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM(lean_object* v_m_1329_, lean_object* v_inst_1330_, lean_object* v_inst_1331_, lean_object* v_fmt_1332_, lean_object* v_expr_1333_, lean_object* v_lctx_x3f_1334_, lean_object* v_location_x3f_1335_, lean_object* v_docString_x3f_1336_, lean_object* v_mkDocString_x3f_1337_, uint8_t v_explicit_1338_){
_start:
{
lean_object* v___x_1339_; 
v___x_1339_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1330_, v_inst_1331_, v_fmt_1332_, v_expr_1333_, v_lctx_x3f_1334_, v_location_x3f_1335_, v_docString_x3f_1336_, v_mkDocString_x3f_1337_, v_explicit_1338_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_withExprHoverM___boxed(lean_object* v_m_1340_, lean_object* v_inst_1341_, lean_object* v_inst_1342_, lean_object* v_fmt_1343_, lean_object* v_expr_1344_, lean_object* v_lctx_x3f_1345_, lean_object* v_location_x3f_1346_, lean_object* v_docString_x3f_1347_, lean_object* v_mkDocString_x3f_1348_, lean_object* v_explicit_1349_){
_start:
{
uint8_t v_explicit_boxed_1350_; lean_object* v_res_1351_; 
v_explicit_boxed_1350_ = lean_unbox(v_explicit_1349_);
v_res_1351_ = l_Lean_MessageData_withExprHoverM(v_m_1340_, v_inst_1341_, v_inst_1342_, v_fmt_1343_, v_expr_1344_, v_lctx_x3f_1345_, v_location_x3f_1346_, v_docString_x3f_1347_, v_mkDocString_x3f_1348_, v_explicit_boxed_1350_);
return v_res_1351_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0(lean_object* v_userName_1352_, lean_object* v_display_1353_, lean_object* v_toPure_1354_, lean_object* v_inst_1355_, lean_object* v_inst_1356_, lean_object* v_____do__lift_1357_){
_start:
{
lean_object* v___x_1358_; 
v___x_1358_ = l_Lean_LocalContext_findFromUserName_x3f(v_____do__lift_1357_, v_userName_1352_);
if (lean_obj_tag(v___x_1358_) == 0)
{
lean_object* v___x_1359_; lean_object* v___x_1360_; 
lean_dec(v_inst_1356_);
lean_dec_ref(v_inst_1355_);
v___x_1359_ = l_Lean_MessageData_ofName(v_display_1353_);
v___x_1360_ = lean_apply_2(v_toPure_1354_, lean_box(0), v___x_1359_);
return v___x_1360_;
}
else
{
lean_object* v_val_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1375_; 
lean_dec(v_toPure_1354_);
v_val_1361_ = lean_ctor_get(v___x_1358_, 0);
v_isSharedCheck_1375_ = !lean_is_exclusive(v___x_1358_);
if (v_isSharedCheck_1375_ == 0)
{
v___x_1363_ = v___x_1358_;
v_isShared_1364_ = v_isSharedCheck_1375_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_val_1361_);
lean_dec(v___x_1358_);
v___x_1363_ = lean_box(0);
v_isShared_1364_ = v_isSharedCheck_1375_;
goto v_resetjp_1362_;
}
v_resetjp_1362_:
{
uint8_t v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1368_; 
v___x_1365_ = 1;
v___x_1366_ = l_Lean_Name_toString(v_display_1353_, v___x_1365_);
if (v_isShared_1364_ == 0)
{
lean_ctor_set_tag(v___x_1363_, 3);
lean_ctor_set(v___x_1363_, 0, v___x_1366_);
v___x_1368_ = v___x_1363_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1374_; 
v_reuseFailAlloc_1374_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1374_, 0, v___x_1366_);
v___x_1368_ = v_reuseFailAlloc_1374_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; uint8_t v___x_1372_; lean_object* v___x_1373_; 
v___x_1369_ = l_Lean_LocalDecl_fvarId(v_val_1361_);
lean_dec(v_val_1361_);
v___x_1370_ = l_Lean_Expr_fvar___override(v___x_1369_);
v___x_1371_ = lean_box(0);
v___x_1372_ = 0;
v___x_1373_ = l_Lean_MessageData_withExprHoverM___redArg(v_inst_1355_, v_inst_1356_, v___x_1368_, v___x_1370_, v___x_1371_, v___x_1371_, v___x_1371_, v___x_1371_, v___x_1372_);
return v___x_1373_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg___lam__0___boxed(lean_object* v_userName_1376_, lean_object* v_display_1377_, lean_object* v_toPure_1378_, lean_object* v_inst_1379_, lean_object* v_inst_1380_, lean_object* v_____do__lift_1381_){
_start:
{
lean_object* v_res_1382_; 
v_res_1382_ = l_Lean_MessageData_ofUserName___redArg___lam__0(v_userName_1376_, v_display_1377_, v_toPure_1378_, v_inst_1379_, v_inst_1380_, v_____do__lift_1381_);
lean_dec_ref(v_____do__lift_1381_);
lean_dec(v_userName_1376_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName___redArg(lean_object* v_inst_1383_, lean_object* v_inst_1384_, lean_object* v_userName_1385_){
_start:
{
lean_object* v_toApplicative_1386_; lean_object* v_toBind_1387_; lean_object* v_toPure_1388_; lean_object* v_display_1389_; lean_object* v___f_1390_; lean_object* v___x_1391_; 
v_toApplicative_1386_ = lean_ctor_get(v_inst_1383_, 0);
v_toBind_1387_ = lean_ctor_get(v_inst_1383_, 1);
lean_inc(v_toBind_1387_);
v_toPure_1388_ = lean_ctor_get(v_toApplicative_1386_, 1);
lean_inc(v_toPure_1388_);
lean_inc(v_userName_1385_);
v_display_1389_ = lean_simp_macro_scopes(v_userName_1385_);
lean_inc(v_inst_1384_);
v___f_1390_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofUserName___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1390_, 0, v_userName_1385_);
lean_closure_set(v___f_1390_, 1, v_display_1389_);
lean_closure_set(v___f_1390_, 2, v_toPure_1388_);
lean_closure_set(v___f_1390_, 3, v_inst_1383_);
lean_closure_set(v___f_1390_, 4, v_inst_1384_);
v___x_1391_ = lean_apply_4(v_toBind_1387_, lean_box(0), lean_box(0), v_inst_1384_, v___f_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofUserName(lean_object* v_m_1392_, lean_object* v_inst_1393_, lean_object* v_inst_1394_, lean_object* v_userName_1395_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Lean_MessageData_ofUserName___redArg(v_inst_1393_, v_inst_1394_, v_userName_1395_);
return v___x_1396_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0(void){
_start:
{
lean_object* v___x_1397_; 
v___x_1397_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1397_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1(void){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1398_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__0);
v___x_1399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1399_, 0, v___x_1398_);
return v___x_1399_;
}
}
static lean_object* _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2(void){
_start:
{
lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1400_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1);
v___x_1401_ = lean_unsigned_to_nat(0u);
v___x_1402_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1401_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
lean_ctor_set(v___x_1402_, 2, v___x_1401_);
lean_ctor_set(v___x_1402_, 3, v___x_1401_);
lean_ctor_set(v___x_1402_, 4, v___x_1400_);
lean_ctor_set(v___x_1402_, 5, v___x_1400_);
lean_ctor_set(v___x_1402_, 6, v___x_1400_);
lean_ctor_set(v___x_1402_, 7, v___x_1400_);
lean_ctor_set(v___x_1402_, 8, v___x_1400_);
lean_ctor_set(v___x_1402_, 9, v___x_1400_);
return v___x_1402_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(lean_object* v_mctx_x3f_1403_, lean_object* v_a_1404_){
_start:
{
switch(lean_obj_tag(v_a_1404_))
{
case 10:
{
if (lean_obj_tag(v_mctx_x3f_1403_) == 0)
{
lean_object* v_hasSyntheticSorry_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; uint8_t v___x_1408_; 
v_hasSyntheticSorry_1405_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_hasSyntheticSorry_1405_);
lean_dec_ref_known(v_a_1404_, 2);
v___x_1406_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_1407_ = lean_apply_1(v_hasSyntheticSorry_1405_, v___x_1406_);
v___x_1408_ = lean_unbox(v___x_1407_);
return v___x_1408_;
}
else
{
lean_object* v_hasSyntheticSorry_1409_; lean_object* v_val_1410_; lean_object* v___x_1411_; uint8_t v___x_1412_; 
v_hasSyntheticSorry_1409_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_hasSyntheticSorry_1409_);
lean_dec_ref_known(v_a_1404_, 2);
v_val_1410_ = lean_ctor_get(v_mctx_x3f_1403_, 0);
lean_inc(v_val_1410_);
lean_dec_ref_known(v_mctx_x3f_1403_, 1);
v___x_1411_ = lean_apply_1(v_hasSyntheticSorry_1409_, v_val_1410_);
v___x_1412_ = lean_unbox(v___x_1411_);
return v___x_1412_;
}
}
case 3:
{
lean_object* v_a_1413_; lean_object* v_a_1414_; lean_object* v_mctx_1415_; lean_object* v___x_1416_; 
lean_dec(v_mctx_x3f_1403_);
v_a_1413_ = lean_ctor_get(v_a_1404_, 0);
lean_inc_ref(v_a_1413_);
v_a_1414_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_a_1414_);
lean_dec_ref_known(v_a_1404_, 2);
v_mctx_1415_ = lean_ctor_get(v_a_1413_, 1);
lean_inc_ref(v_mctx_1415_);
lean_dec_ref(v_a_1413_);
v___x_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1416_, 0, v_mctx_1415_);
v_mctx_x3f_1403_ = v___x_1416_;
v_a_1404_ = v_a_1414_;
goto _start;
}
case 4:
{
lean_object* v_a_1418_; 
v_a_1418_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_a_1418_);
lean_dec_ref_known(v_a_1404_, 2);
v_a_1404_ = v_a_1418_;
goto _start;
}
case 5:
{
lean_object* v_a_1420_; 
v_a_1420_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_a_1420_);
lean_dec_ref_known(v_a_1404_, 2);
v_a_1404_ = v_a_1420_;
goto _start;
}
case 6:
{
lean_object* v_a_1422_; 
v_a_1422_ = lean_ctor_get(v_a_1404_, 0);
lean_inc_ref(v_a_1422_);
lean_dec_ref_known(v_a_1404_, 1);
v_a_1404_ = v_a_1422_;
goto _start;
}
case 7:
{
lean_object* v_a_1424_; lean_object* v_a_1425_; uint8_t v___x_1426_; 
v_a_1424_ = lean_ctor_get(v_a_1404_, 0);
lean_inc_ref(v_a_1424_);
v_a_1425_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_a_1425_);
lean_dec_ref_known(v_a_1404_, 2);
lean_inc(v_mctx_x3f_1403_);
v___x_1426_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1403_, v_a_1424_);
if (v___x_1426_ == 0)
{
v_a_1404_ = v_a_1425_;
goto _start;
}
else
{
lean_dec_ref(v_a_1425_);
lean_dec(v_mctx_x3f_1403_);
return v___x_1426_;
}
}
case 8:
{
lean_object* v_a_1428_; 
v_a_1428_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_a_1428_);
lean_dec_ref_known(v_a_1404_, 2);
v_a_1404_ = v_a_1428_;
goto _start;
}
case 11:
{
lean_object* v_a_1430_; 
v_a_1430_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_a_1430_);
lean_dec_ref_known(v_a_1404_, 2);
v_a_1404_ = v_a_1430_;
goto _start;
}
case 9:
{
lean_object* v_msg_1432_; lean_object* v_children_1433_; uint8_t v___x_1434_; 
v_msg_1432_ = lean_ctor_get(v_a_1404_, 1);
lean_inc_ref(v_msg_1432_);
v_children_1433_ = lean_ctor_get(v_a_1404_, 2);
lean_inc_ref(v_children_1433_);
lean_dec_ref_known(v_a_1404_, 3);
lean_inc(v_mctx_x3f_1403_);
v___x_1434_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1403_, v_msg_1432_);
if (v___x_1434_ == 0)
{
lean_object* v___x_1435_; lean_object* v___x_1436_; uint8_t v___x_1437_; 
v___x_1435_ = lean_unsigned_to_nat(0u);
v___x_1436_ = lean_array_get_size(v_children_1433_);
v___x_1437_ = lean_nat_dec_lt(v___x_1435_, v___x_1436_);
if (v___x_1437_ == 0)
{
lean_dec_ref(v_children_1433_);
lean_dec(v_mctx_x3f_1403_);
return v___x_1434_;
}
else
{
if (v___x_1437_ == 0)
{
lean_dec_ref(v_children_1433_);
lean_dec(v_mctx_x3f_1403_);
return v___x_1434_;
}
else
{
size_t v___x_1438_; size_t v___x_1439_; uint8_t v___x_1440_; 
v___x_1438_ = ((size_t)0ULL);
v___x_1439_ = lean_usize_of_nat(v___x_1436_);
v___x_1440_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(v_mctx_x3f_1403_, v_children_1433_, v___x_1438_, v___x_1439_);
lean_dec_ref(v_children_1433_);
return v___x_1440_;
}
}
}
else
{
lean_dec_ref(v_children_1433_);
lean_dec(v_mctx_x3f_1403_);
return v___x_1434_;
}
}
default: 
{
uint8_t v___x_1441_; 
lean_dec_ref(v_a_1404_);
lean_dec(v_mctx_x3f_1403_);
v___x_1441_ = 0;
return v___x_1441_;
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(lean_object* v_mctx_x3f_1442_, lean_object* v_as_1443_, size_t v_i_1444_, size_t v_stop_1445_){
_start:
{
uint8_t v___x_1446_; 
v___x_1446_ = lean_usize_dec_eq(v_i_1444_, v_stop_1445_);
if (v___x_1446_ == 0)
{
lean_object* v___x_1447_; uint8_t v___x_1448_; 
v___x_1447_ = lean_array_uget_borrowed(v_as_1443_, v_i_1444_);
lean_inc(v___x_1447_);
lean_inc(v_mctx_x3f_1442_);
v___x_1448_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1442_, v___x_1447_);
if (v___x_1448_ == 0)
{
size_t v___x_1449_; size_t v___x_1450_; 
v___x_1449_ = ((size_t)1ULL);
v___x_1450_ = lean_usize_add(v_i_1444_, v___x_1449_);
v_i_1444_ = v___x_1450_;
goto _start;
}
else
{
lean_dec(v_mctx_x3f_1442_);
return v___x_1448_;
}
}
else
{
uint8_t v___x_1452_; 
lean_dec(v_mctx_x3f_1442_);
v___x_1452_ = 0;
return v___x_1452_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0___boxed(lean_object* v_mctx_x3f_1453_, lean_object* v_as_1454_, lean_object* v_i_1455_, lean_object* v_stop_1456_){
_start:
{
size_t v_i_boxed_1457_; size_t v_stop_boxed_1458_; uint8_t v_res_1459_; lean_object* v_r_1460_; 
v_i_boxed_1457_ = lean_unbox_usize(v_i_1455_);
lean_dec(v_i_1455_);
v_stop_boxed_1458_ = lean_unbox_usize(v_stop_1456_);
lean_dec(v_stop_1456_);
v_res_1459_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit_spec__0(v_mctx_x3f_1453_, v_as_1454_, v_i_boxed_1457_, v_stop_boxed_1458_);
lean_dec_ref(v_as_1454_);
v_r_1460_ = lean_box(v_res_1459_);
return v_r_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___boxed(lean_object* v_mctx_x3f_1461_, lean_object* v_a_1462_){
_start:
{
uint8_t v_res_1463_; lean_object* v_r_1464_; 
v_res_1463_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v_mctx_x3f_1461_, v_a_1462_);
v_r_1464_ = lean_box(v_res_1463_);
return v_r_1464_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object* v_msg_1465_){
_start:
{
lean_object* v___x_1466_; uint8_t v___x_1467_; 
v___x_1466_ = lean_box(0);
v___x_1467_ = l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit(v___x_1466_, v_msg_1465_);
return v___x_1467_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hasSyntheticSorry___boxed(lean_object* v_msg_1468_){
_start:
{
uint8_t v_res_1469_; lean_object* v_r_1470_; 
v_res_1469_ = l_Lean_MessageData_hasSyntheticSorry(v_msg_1468_);
v_r_1470_ = lean_box(v_res_1469_);
return v_r_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__spec__0(lean_object* v_name_1471_, lean_object* v_decl_1472_, lean_object* v_ref_1473_){
_start:
{
lean_object* v_defValue_1475_; lean_object* v_descr_1476_; lean_object* v_deprecation_x3f_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; 
v_defValue_1475_ = lean_ctor_get(v_decl_1472_, 0);
v_descr_1476_ = lean_ctor_get(v_decl_1472_, 1);
v_deprecation_x3f_1477_ = lean_ctor_get(v_decl_1472_, 2);
lean_inc(v_defValue_1475_);
v___x_1478_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_defValue_1475_);
lean_inc(v_deprecation_x3f_1477_);
lean_inc_ref(v_descr_1476_);
lean_inc_n(v_name_1471_, 2);
v___x_1479_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1479_, 0, v_name_1471_);
lean_ctor_set(v___x_1479_, 1, v_ref_1473_);
lean_ctor_set(v___x_1479_, 2, v___x_1478_);
lean_ctor_set(v___x_1479_, 3, v_descr_1476_);
lean_ctor_set(v___x_1479_, 4, v_deprecation_x3f_1477_);
v___x_1480_ = lean_register_option(v_name_1471_, v___x_1479_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v___x_1482_; uint8_t v_isShared_1483_; uint8_t v_isSharedCheck_1488_; 
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1488_ == 0)
{
lean_object* v_unused_1489_; 
v_unused_1489_ = lean_ctor_get(v___x_1480_, 0);
lean_dec(v_unused_1489_);
v___x_1482_ = v___x_1480_;
v_isShared_1483_ = v_isSharedCheck_1488_;
goto v_resetjp_1481_;
}
else
{
lean_dec(v___x_1480_);
v___x_1482_ = lean_box(0);
v_isShared_1483_ = v_isSharedCheck_1488_;
goto v_resetjp_1481_;
}
v_resetjp_1481_:
{
lean_object* v___x_1484_; lean_object* v___x_1486_; 
lean_inc(v_defValue_1475_);
v___x_1484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1484_, 0, v_name_1471_);
lean_ctor_set(v___x_1484_, 1, v_defValue_1475_);
if (v_isShared_1483_ == 0)
{
lean_ctor_set(v___x_1482_, 0, v___x_1484_);
v___x_1486_ = v___x_1482_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
else
{
lean_object* v_a_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1497_; 
lean_dec(v_name_1471_);
v_a_1490_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1497_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1492_ = v___x_1480_;
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_a_1490_);
lean_dec(v___x_1480_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1497_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
lean_object* v___x_1495_; 
if (v_isShared_1493_ == 0)
{
v___x_1495_ = v___x_1492_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v_a_1490_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__spec__0___boxed(lean_object* v_name_1498_, lean_object* v_decl_1499_, lean_object* v_ref_1500_, lean_object* v_a_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__spec__0(v_name_1498_, v_decl_1499_, v_ref_1500_);
lean_dec_ref(v_decl_1499_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_(){
_start:
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; 
v___x_1516_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__1_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_));
v___x_1517_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__3_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_));
v___x_1518_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_initFn___closed__4_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_));
v___x_1519_ = l_Lean_Option_register___at___00__private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4__spec__0(v___x_1516_, v___x_1517_, v___x_1518_);
return v___x_1519_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4____boxed(lean_object* v_a_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_();
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_MessageData_formatAux_spec__0(lean_object* v_a_1522_){
_start:
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_nat_to_int(v_a_1522_);
return v___x_1523_;
}
}
static lean_object* _init_l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; 
v___x_1524_ = lean_box(0);
v___x_1525_ = l_instMonadBaseIO;
v___x_1526_ = l_instInhabitedOfMonad___redArg(v___x_1525_, v___x_1524_);
return v___x_1526_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3(lean_object* v_msg_1527_){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_2214__overap_1530_; lean_object* v___x_1531_; 
v___x_1529_ = lean_obj_once(&l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0, &l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0_once, _init_l_panic___at___00Lean_MessageData_formatAux_spec__3___closed__0);
v___x_2214__overap_1530_ = lean_panic_fn_borrowed(v___x_1529_, v_msg_1527_);
v___x_1531_ = lean_apply_1(v___x_2214__overap_1530_, lean_box(0));
return v___x_1531_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_MessageData_formatAux_spec__3___boxed(lean_object* v_msg_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_panic___at___00Lean_MessageData_formatAux_spec__3(v_msg_1532_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(lean_object* v_x_1535_, lean_object* v_x_1536_, lean_object* v_x_1537_){
_start:
{
if (lean_obj_tag(v_x_1537_) == 0)
{
lean_dec(v_x_1535_);
return v_x_1536_;
}
else
{
lean_object* v_head_1538_; lean_object* v_tail_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1548_; 
v_head_1538_ = lean_ctor_get(v_x_1537_, 0);
v_tail_1539_ = lean_ctor_get(v_x_1537_, 1);
v_isSharedCheck_1548_ = !lean_is_exclusive(v_x_1537_);
if (v_isSharedCheck_1548_ == 0)
{
v___x_1541_ = v_x_1537_;
v_isShared_1542_ = v_isSharedCheck_1548_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_tail_1539_);
lean_inc(v_head_1538_);
lean_dec(v_x_1537_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1548_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
lean_inc(v_x_1535_);
if (v_isShared_1542_ == 0)
{
lean_ctor_set_tag(v___x_1541_, 5);
lean_ctor_set(v___x_1541_, 1, v_x_1535_);
lean_ctor_set(v___x_1541_, 0, v_x_1536_);
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1547_; 
v_reuseFailAlloc_1547_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1547_, 0, v_x_1536_);
lean_ctor_set(v_reuseFailAlloc_1547_, 1, v_x_1535_);
v___x_1544_ = v_reuseFailAlloc_1547_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
lean_object* v___x_1545_; 
v___x_1545_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1545_, 0, v___x_1544_);
lean_ctor_set(v___x_1545_, 1, v_head_1538_);
v_x_1536_ = v___x_1545_;
v_x_1537_ = v_tail_1539_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(lean_object* v_x_1549_, lean_object* v_x_1550_){
_start:
{
if (lean_obj_tag(v_x_1549_) == 0)
{
lean_object* v___x_1551_; 
lean_dec(v_x_1550_);
v___x_1551_ = lean_box(0);
return v___x_1551_;
}
else
{
lean_object* v_tail_1552_; 
v_tail_1552_ = lean_ctor_get(v_x_1549_, 1);
if (lean_obj_tag(v_tail_1552_) == 0)
{
lean_object* v_head_1553_; 
lean_dec(v_x_1550_);
v_head_1553_ = lean_ctor_get(v_x_1549_, 0);
lean_inc(v_head_1553_);
lean_dec_ref_known(v_x_1549_, 2);
return v_head_1553_;
}
else
{
lean_object* v_head_1554_; lean_object* v___x_1555_; 
lean_inc(v_tail_1552_);
v_head_1554_ = lean_ctor_get(v_x_1549_, 0);
lean_inc(v_head_1554_);
lean_dec_ref_known(v_x_1549_, 2);
v___x_1555_ = l_List_foldl___at___00Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2_spec__2(v_x_1550_, v_head_1554_, v_tail_1552_);
return v___x_1555_;
}
}
}
}
static double _init_l_Lean_MessageData_formatAux___closed__9(void){
_start:
{
lean_object* v___x_1570_; double v___x_1571_; 
v___x_1570_ = lean_unsigned_to_nat(0u);
v___x_1571_ = lean_float_of_nat(v___x_1570_);
return v___x_1571_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux(lean_object* v_x_1575_, lean_object* v_x_1576_, lean_object* v_x_1577_){
_start:
{
switch(lean_obj_tag(v_x_1577_))
{
case 0:
{
lean_object* v_a_1579_; lean_object* v_fmt_1580_; 
lean_dec(v_x_1576_);
lean_dec_ref(v_x_1575_);
v_a_1579_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_a_1579_);
lean_dec_ref_known(v_x_1577_, 1);
v_fmt_1580_ = lean_ctor_get(v_a_1579_, 0);
lean_inc(v_fmt_1580_);
lean_dec_ref(v_a_1579_);
return v_fmt_1580_;
}
case 1:
{
if (lean_obj_tag(v_x_1576_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1582_; 
lean_dec_ref(v_x_1575_);
v_a_1581_ = lean_ctor_get(v_x_1577_, 0);
lean_inc(v_a_1581_);
lean_dec_ref_known(v_x_1577_, 1);
v___x_1582_ = l_Lean_formatRawGoal(v_a_1581_);
return v___x_1582_;
}
else
{
lean_object* v_a_1583_; lean_object* v_val_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; 
v_a_1583_ = lean_ctor_get(v_x_1577_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v_x_1577_, 1);
v_val_1584_ = lean_ctor_get(v_x_1576_, 0);
lean_inc(v_val_1584_);
lean_dec_ref_known(v_x_1576_, 1);
v___x_1585_ = l_Lean_MessageData_mkPPContext(v_x_1575_, v_val_1584_);
lean_dec(v_val_1584_);
lean_dec_ref(v_x_1575_);
v___x_1586_ = l_Lean_ppGoal(v___x_1585_, v_a_1583_);
return v___x_1586_;
}
}
case 3:
{
lean_object* v_a_1587_; lean_object* v_a_1588_; lean_object* v___x_1589_; 
lean_dec(v_x_1576_);
v_a_1587_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_a_1587_);
v_a_1588_ = lean_ctor_get(v_x_1577_, 1);
lean_inc_ref(v_a_1588_);
lean_dec_ref_known(v_x_1577_, 2);
v___x_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1589_, 0, v_a_1587_);
v_x_1576_ = v___x_1589_;
v_x_1577_ = v_a_1588_;
goto _start;
}
case 4:
{
lean_object* v_a_1591_; lean_object* v_a_1592_; 
lean_dec_ref(v_x_1575_);
v_a_1591_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_a_1591_);
v_a_1592_ = lean_ctor_get(v_x_1577_, 1);
lean_inc_ref(v_a_1592_);
lean_dec_ref_known(v_x_1577_, 2);
v_x_1575_ = v_a_1591_;
v_x_1577_ = v_a_1592_;
goto _start;
}
case 5:
{
lean_object* v_a_1594_; lean_object* v_a_1595_; lean_object* v___x_1597_; uint8_t v_isShared_1598_; uint8_t v_isSharedCheck_1604_; 
v_a_1594_ = lean_ctor_get(v_x_1577_, 0);
v_a_1595_ = lean_ctor_get(v_x_1577_, 1);
v_isSharedCheck_1604_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1604_ == 0)
{
v___x_1597_ = v_x_1577_;
v_isShared_1598_ = v_isSharedCheck_1604_;
goto v_resetjp_1596_;
}
else
{
lean_inc(v_a_1595_);
lean_inc(v_a_1594_);
lean_dec(v_x_1577_);
v___x_1597_ = lean_box(0);
v_isShared_1598_ = v_isSharedCheck_1604_;
goto v_resetjp_1596_;
}
v_resetjp_1596_:
{
lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1602_; 
v___x_1599_ = l_Lean_MessageData_formatAux(v_x_1575_, v_x_1576_, v_a_1595_);
v___x_1600_ = lean_nat_to_int(v_a_1594_);
if (v_isShared_1598_ == 0)
{
lean_ctor_set_tag(v___x_1597_, 4);
lean_ctor_set(v___x_1597_, 1, v___x_1599_);
lean_ctor_set(v___x_1597_, 0, v___x_1600_);
v___x_1602_ = v___x_1597_;
goto v_reusejp_1601_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1600_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v___x_1599_);
v___x_1602_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1601_;
}
v_reusejp_1601_:
{
return v___x_1602_;
}
}
}
case 6:
{
lean_object* v_a_1605_; uint8_t v_behavior_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1614_; 
v_a_1605_ = lean_ctor_get(v_x_1577_, 0);
v_behavior_1606_ = lean_ctor_get_uint8(v_x_1577_, sizeof(void*)*1);
v_isSharedCheck_1614_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1614_ == 0)
{
v___x_1608_ = v_x_1577_;
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_a_1605_);
lean_dec(v_x_1577_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1610_ = l_Lean_MessageData_formatAux(v_x_1575_, v_x_1576_, v_a_1605_);
if (v_isShared_1609_ == 0)
{
lean_ctor_set(v___x_1608_, 0, v___x_1610_);
v___x_1612_ = v___x_1608_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
lean_ctor_set_uint8(v_reuseFailAlloc_1613_, sizeof(void*)*1, v_behavior_1606_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
case 7:
{
lean_object* v_a_1615_; lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1625_; 
v_a_1615_ = lean_ctor_get(v_x_1577_, 0);
v_a_1616_ = lean_ctor_get(v_x_1577_, 1);
v_isSharedCheck_1625_ = !lean_is_exclusive(v_x_1577_);
if (v_isSharedCheck_1625_ == 0)
{
v___x_1618_ = v_x_1577_;
v_isShared_1619_ = v_isSharedCheck_1625_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_inc(v_a_1615_);
lean_dec(v_x_1577_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1625_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1623_; 
lean_inc(v_x_1576_);
lean_inc_ref(v_x_1575_);
v___x_1620_ = l_Lean_MessageData_formatAux(v_x_1575_, v_x_1576_, v_a_1615_);
v___x_1621_ = l_Lean_MessageData_formatAux(v_x_1575_, v_x_1576_, v_a_1616_);
if (v_isShared_1619_ == 0)
{
lean_ctor_set_tag(v___x_1618_, 5);
lean_ctor_set(v___x_1618_, 1, v___x_1621_);
lean_ctor_set(v___x_1618_, 0, v___x_1620_);
v___x_1623_ = v___x_1618_;
goto v_reusejp_1622_;
}
else
{
lean_object* v_reuseFailAlloc_1624_; 
v_reuseFailAlloc_1624_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1624_, 0, v___x_1620_);
lean_ctor_set(v_reuseFailAlloc_1624_, 1, v___x_1621_);
v___x_1623_ = v_reuseFailAlloc_1624_;
goto v_reusejp_1622_;
}
v_reusejp_1622_:
{
return v___x_1623_;
}
}
}
case 9:
{
lean_object* v_data_1626_; lean_object* v_msg_1627_; lean_object* v_children_1628_; size_t v_sz_1629_; size_t v___x_1630_; lean_object* v___x_1631_; lean_object* v___y_1633_; lean_object* v___y_1634_; lean_object* v_cls_1645_; lean_object* v_result_x3f_1646_; double v_startTime_1647_; double v_stopTime_1648_; lean_object* v_msg_1650_; uint8_t v___x_1665_; 
v_data_1626_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_data_1626_);
v_msg_1627_ = lean_ctor_get(v_x_1577_, 1);
lean_inc_ref(v_msg_1627_);
v_children_1628_ = lean_ctor_get(v_x_1577_, 2);
lean_inc_ref(v_children_1628_);
lean_dec_ref_known(v_x_1577_, 3);
v_sz_1629_ = lean_array_size(v_children_1628_);
v___x_1630_ = ((size_t)0ULL);
lean_inc(v_x_1576_);
lean_inc_ref(v_x_1575_);
v___x_1631_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(v_x_1575_, v_x_1576_, v_sz_1629_, v___x_1630_, v_children_1628_);
v_cls_1645_ = lean_ctor_get(v_data_1626_, 0);
lean_inc(v_cls_1645_);
v_result_x3f_1646_ = lean_ctor_get(v_data_1626_, 1);
lean_inc(v_result_x3f_1646_);
v_startTime_1647_ = lean_ctor_get_float(v_data_1626_, sizeof(void*)*3);
v_stopTime_1648_ = lean_ctor_get_float(v_data_1626_, sizeof(void*)*3 + 8);
lean_dec_ref(v_data_1626_);
v___x_1665_ = l_Lean_Name_isAnonymous(v_cls_1645_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; uint8_t v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; double v___x_1681_; uint8_t v___x_1682_; 
v___x_1666_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__4));
v___x_1667_ = 1;
v___x_1668_ = l_Lean_Name_toString(v_cls_1645_, v___x_1667_);
v___x_1669_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1669_, 0, v___x_1668_);
v___x_1670_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1670_, 0, v___x_1666_);
lean_ctor_set(v___x_1670_, 1, v___x_1669_);
v___x_1671_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__6));
v___x_1672_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1672_, 0, v___x_1670_);
lean_ctor_set(v___x_1672_, 1, v___x_1671_);
v___x_1681_ = lean_float_once(&l_Lean_MessageData_formatAux___closed__9, &l_Lean_MessageData_formatAux___closed__9_once, _init_l_Lean_MessageData_formatAux___closed__9);
v___x_1682_ = lean_float_beq(v_startTime_1647_, v___x_1681_);
if (v___x_1682_ == 0)
{
goto v___jp_1673_;
}
else
{
if (v___x_1665_ == 0)
{
v_msg_1650_ = v___x_1672_;
goto v___jp_1649_;
}
else
{
goto v___jp_1673_;
}
}
v___jp_1673_:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; double v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1674_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__8));
v___x_1675_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1672_);
lean_ctor_set(v___x_1675_, 1, v___x_1674_);
v___x_1676_ = lean_float_sub(v_stopTime_1648_, v_startTime_1647_);
v___x_1677_ = lean_float_to_string(v___x_1676_);
v___x_1678_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1678_, 0, v___x_1677_);
v___x_1679_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1675_);
lean_ctor_set(v___x_1679_, 1, v___x_1678_);
v___x_1680_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1680_, 0, v___x_1679_);
lean_ctor_set(v___x_1680_, 1, v___x_1671_);
v_msg_1650_ = v___x_1680_;
goto v___jp_1649_;
}
}
else
{
lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; 
lean_dec(v_result_x3f_1646_);
lean_dec(v_cls_1645_);
lean_dec_ref(v_msg_1627_);
lean_dec(v_x_1576_);
lean_dec_ref(v_x_1575_);
v___x_1683_ = lean_array_to_list(v___x_1631_);
v___x_1684_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_1685_ = l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(v___x_1683_, v___x_1684_);
return v___x_1685_;
}
v___jp_1632_:
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1635_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__0));
v___x_1636_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1636_, 0, v___y_1633_);
lean_ctor_set(v___x_1636_, 1, v___x_1635_);
v___x_1637_ = lean_obj_once(&l_Lean_instReprTraceResult_repr___closed__6, &l_Lean_instReprTraceResult_repr___closed__6_once, _init_l_Lean_instReprTraceResult_repr___closed__6);
v___x_1638_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1637_);
lean_ctor_set(v___x_1638_, 1, v___y_1634_);
v___x_1639_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1639_, 0, v___x_1636_);
lean_ctor_set(v___x_1639_, 1, v___x_1638_);
v___x_1640_ = lean_array_to_list(v___x_1631_);
v___x_1641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_1643_ = l_Std_Format_joinSep___at___00Lean_MessageData_formatAux_spec__2(v___x_1641_, v___x_1642_);
v___x_1644_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1637_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
return v___x_1644_;
}
v___jp_1649_:
{
lean_object* v___x_1651_; 
v___x_1651_ = l_Lean_MessageData_formatAux(v_x_1575_, v_x_1576_, v_msg_1627_);
if (lean_obj_tag(v_result_x3f_1646_) == 0)
{
v___y_1633_ = v_msg_1650_;
v___y_1634_ = v___x_1651_;
goto v___jp_1632_;
}
else
{
lean_object* v_val_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1664_; 
v_val_1652_ = lean_ctor_get(v_result_x3f_1646_, 0);
v_isSharedCheck_1664_ = !lean_is_exclusive(v_result_x3f_1646_);
if (v_isSharedCheck_1664_ == 0)
{
v___x_1654_ = v_result_x3f_1646_;
v_isShared_1655_ = v_isSharedCheck_1664_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_val_1652_);
lean_dec(v_result_x3f_1646_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1664_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
uint8_t v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1659_; 
v___x_1656_ = lean_unbox(v_val_1652_);
lean_dec(v_val_1652_);
v___x_1657_ = l_Lean_TraceResult_toEmoji(v___x_1656_);
if (v_isShared_1655_ == 0)
{
lean_ctor_set_tag(v___x_1654_, 3);
lean_ctor_set(v___x_1654_, 0, v___x_1657_);
v___x_1659_ = v___x_1654_;
goto v_reusejp_1658_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1657_);
v___x_1659_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1658_;
}
v_reusejp_1658_:
{
lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; 
v___x_1660_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__0));
v___x_1661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1659_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1661_);
lean_ctor_set(v___x_1662_, 1, v___x_1651_);
v___y_1633_ = v_msg_1650_;
v___y_1634_ = v___x_1662_;
goto v___jp_1632_;
}
}
}
}
}
case 10:
{
lean_object* v_f_1686_; lean_object* v___x_1687_; lean_object* v___y_1689_; 
v_f_1686_ = lean_ctor_get(v_x_1577_, 0);
lean_inc_ref(v_f_1686_);
lean_dec_ref_known(v_x_1577_, 2);
v___x_1687_ = ((lean_object*)(l_Lean_instImpl_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
if (lean_obj_tag(v_x_1576_) == 0)
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_box(0);
v___y_1689_ = v___x_1705_;
goto v___jp_1688_;
}
else
{
lean_object* v_val_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_val_1706_ = lean_ctor_get(v_x_1576_, 0);
v___x_1707_ = l_Lean_MessageData_mkPPContext(v_x_1575_, v_val_1706_);
v___x_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1708_, 0, v___x_1707_);
v___y_1689_ = v___x_1708_;
goto v___jp_1688_;
}
v___jp_1688_:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_apply_2(v_f_1686_, v___y_1689_, lean_box(0));
v___x_1691_ = l___private_Init_Dynamic_0__Dynamic_get_x3fImpl___redArg(v___x_1690_, v___x_1687_);
if (lean_obj_tag(v___x_1691_) == 1)
{
lean_object* v_val_1692_; 
lean_dec(v___x_1690_);
v_val_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_val_1692_);
lean_dec_ref_known(v___x_1691_, 1);
v_x_1577_ = v_val_1692_;
goto _start;
}
else
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; uint8_t v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; 
lean_dec(v___x_1691_);
lean_dec(v_x_1576_);
lean_dec_ref(v_x_1575_);
v___x_1694_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__10));
v___x_1695_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__11));
v___x_1696_ = lean_unsigned_to_nat(409u);
v___x_1697_ = lean_unsigned_to_nat(8u);
v___x_1698_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__12));
v___x_1699_ = l___private_Init_Dynamic_0__Dynamic_typeNameImpl(v___x_1690_);
lean_dec(v___x_1690_);
v___x_1700_ = 1;
v___x_1701_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1699_, v___x_1700_);
v___x_1702_ = lean_string_append(v___x_1698_, v___x_1701_);
lean_dec_ref(v___x_1701_);
v___x_1703_ = l_mkPanicMessageWithDecl(v___x_1694_, v___x_1695_, v___x_1696_, v___x_1697_, v___x_1702_);
lean_dec_ref(v___x_1702_);
v___x_1704_ = l_panic___at___00Lean_MessageData_formatAux_spec__3(v___x_1703_);
return v___x_1704_;
}
}
}
default: 
{
lean_object* v_a_1709_; 
v_a_1709_ = lean_ctor_get(v_x_1577_, 1);
lean_inc_ref(v_a_1709_);
lean_dec_ref(v_x_1577_);
v_x_1577_ = v_a_1709_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(lean_object* v_x_1711_, lean_object* v_x_1712_, size_t v_sz_1713_, size_t v_i_1714_, lean_object* v_bs_1715_){
_start:
{
uint8_t v___x_1717_; 
v___x_1717_ = lean_usize_dec_lt(v_i_1714_, v_sz_1713_);
if (v___x_1717_ == 0)
{
lean_dec(v_x_1712_);
lean_dec_ref(v_x_1711_);
return v_bs_1715_;
}
else
{
lean_object* v_v_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v_bs_x27_1721_; size_t v___x_1722_; size_t v___x_1723_; lean_object* v___x_1724_; 
v_v_1718_ = lean_array_uget_borrowed(v_bs_1715_, v_i_1714_);
lean_inc(v_v_1718_);
lean_inc(v_x_1712_);
lean_inc_ref(v_x_1711_);
v___x_1719_ = l_Lean_MessageData_formatAux(v_x_1711_, v_x_1712_, v_v_1718_);
v___x_1720_ = lean_unsigned_to_nat(0u);
v_bs_x27_1721_ = lean_array_uset(v_bs_1715_, v_i_1714_, v___x_1720_);
v___x_1722_ = ((size_t)1ULL);
v___x_1723_ = lean_usize_add(v_i_1714_, v___x_1722_);
v___x_1724_ = lean_array_uset(v_bs_x27_1721_, v_i_1714_, v___x_1719_);
v_i_1714_ = v___x_1723_;
v_bs_1715_ = v___x_1724_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1___boxed(lean_object* v_x_1726_, lean_object* v_x_1727_, lean_object* v_sz_1728_, lean_object* v_i_1729_, lean_object* v_bs_1730_, lean_object* v___y_1731_){
_start:
{
size_t v_sz_boxed_1732_; size_t v_i_boxed_1733_; lean_object* v_res_1734_; 
v_sz_boxed_1732_ = lean_unbox_usize(v_sz_1728_);
lean_dec(v_sz_1728_);
v_i_boxed_1733_ = lean_unbox_usize(v_i_1729_);
lean_dec(v_i_1729_);
v_res_1734_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MessageData_formatAux_spec__1(v_x_1726_, v_x_1727_, v_sz_boxed_1732_, v_i_boxed_1733_, v_bs_1730_);
return v_res_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_formatAux___boxed(lean_object* v_x_1735_, lean_object* v_x_1736_, lean_object* v_x_1737_, lean_object* v_a_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lean_MessageData_formatAux(v_x_1735_, v_x_1736_, v_x_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_format(lean_object* v_msgData_1743_, lean_object* v_ctx_x3f_1744_){
_start:
{
lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1746_ = ((lean_object*)(l_Lean_MessageData_format___closed__0));
v___x_1747_ = l_Lean_MessageData_formatAux(v___x_1746_, v_ctx_x3f_1744_, v_msgData_1743_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_format___boxed(lean_object* v_msgData_1748_, lean_object* v_ctx_x3f_1749_, lean_object* v_a_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_MessageData_format(v_msgData_1748_, v_ctx_x3f_1749_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_toString(lean_object* v_msgData_1752_){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1754_ = lean_box(0);
v___x_1755_ = l_Lean_MessageData_format(v_msgData_1752_, v___x_1754_);
v___x_1756_ = l_Std_Format_defWidth;
v___x_1757_ = lean_unsigned_to_nat(0u);
v___x_1758_ = l_Std_Format_pretty(v___x_1755_, v___x_1756_, v___x_1757_, v___x_1757_);
return v___x_1758_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_toString___boxed(lean_object* v_msgData_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_MessageData_toString(v_msgData_1759_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instAppend___lam__0(lean_object* v_a_1762_, lean_object* v_a_1763_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1764_, 0, v_a_1762_);
lean_ctor_set(v___x_1764_, 1, v_a_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeString___lam__0(lean_object* v_s_1767_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1768_, 0, v_s_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeMVarId___lam__0(lean_object* v_a_1784_){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1785_, 0, v_a_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1791_ = ((lean_object*)(l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__1));
v___x_1792_ = l_Lean_MessageData_ofFormat(v___x_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeOptionExpr___lam__0(lean_object* v_o_1793_){
_start:
{
if (lean_obj_tag(v_o_1793_) == 0)
{
lean_object* v___x_1794_; 
v___x_1794_ = lean_obj_once(&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2);
return v___x_1794_;
}
else
{
lean_object* v_val_1795_; lean_object* v___x_1796_; 
v_val_1795_ = lean_ctor_get(v_o_1793_, 0);
lean_inc(v_val_1795_);
lean_dec_ref_known(v_o_1793_, 1);
v___x_1796_ = l_Lean_MessageData_ofExpr(v_val_1795_);
return v___x_1796_;
}
}
}
static lean_object* _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; 
v___x_1799_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__6));
v___x_1800_ = l_Lean_MessageData_ofFormat(v___x_1799_);
return v___x_1800_;
}
}
static lean_object* _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3(void){
_start:
{
lean_object* v___x_1804_; lean_object* v___x_1805_; 
v___x_1804_ = ((lean_object*)(l_Lean_MessageData_arrayExpr_toMessageData___closed__2));
v___x_1805_ = l_Lean_MessageData_ofFormat(v___x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData(lean_object* v_es_1806_, lean_object* v_i_1807_, lean_object* v_acc_1808_){
_start:
{
lean_object* v___y_1810_; lean_object* v___x_1814_; uint8_t v___x_1815_; 
v___x_1814_ = lean_array_get_size(v_es_1806_);
v___x_1815_ = lean_nat_dec_lt(v_i_1807_, v___x_1814_);
if (v___x_1815_ == 0)
{
lean_object* v___x_1816_; lean_object* v___x_1817_; 
lean_dec(v_i_1807_);
v___x_1816_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__0, &l_Lean_MessageData_arrayExpr_toMessageData___closed__0_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__0);
v___x_1817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1817_, 0, v_acc_1808_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
return v___x_1817_;
}
else
{
lean_object* v_e_1818_; lean_object* v___x_1819_; uint8_t v___x_1820_; 
v_e_1818_ = lean_array_fget_borrowed(v_es_1806_, v_i_1807_);
v___x_1819_ = lean_unsigned_to_nat(0u);
v___x_1820_ = lean_nat_dec_eq(v_i_1807_, v___x_1819_);
if (v___x_1820_ == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; 
v___x_1821_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_1822_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1822_, 0, v_acc_1808_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
lean_inc(v_e_1818_);
v___x_1823_ = l_Lean_MessageData_ofExpr(v_e_1818_);
v___x_1824_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1824_, 0, v___x_1822_);
lean_ctor_set(v___x_1824_, 1, v___x_1823_);
v___y_1810_ = v___x_1824_;
goto v___jp_1809_;
}
else
{
lean_object* v___x_1825_; lean_object* v___x_1826_; 
lean_inc(v_e_1818_);
v___x_1825_ = l_Lean_MessageData_ofExpr(v_e_1818_);
v___x_1826_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1826_, 0, v_acc_1808_);
lean_ctor_set(v___x_1826_, 1, v___x_1825_);
v___y_1810_ = v___x_1826_;
goto v___jp_1809_;
}
}
v___jp_1809_:
{
lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1811_ = lean_unsigned_to_nat(1u);
v___x_1812_ = lean_nat_add(v_i_1807_, v___x_1811_);
lean_dec(v_i_1807_);
v_i_1807_ = v___x_1812_;
v_acc_1808_ = v___y_1810_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_arrayExpr_toMessageData___boxed(lean_object* v_es_1827_, lean_object* v_i_1828_, lean_object* v_acc_1829_){
_start:
{
lean_object* v_res_1830_; 
v_res_1830_ = l_Lean_MessageData_arrayExpr_toMessageData(v_es_1827_, v_i_1828_, v_acc_1829_);
lean_dec_ref(v_es_1827_);
return v_res_1830_;
}
}
static lean_object* _init_l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = ((lean_object*)(l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__1));
v___x_1835_ = l_Lean_MessageData_ofFormat(v___x_1834_);
return v___x_1835_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0(lean_object* v_es_1836_){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; 
v___x_1837_ = lean_unsigned_to_nat(0u);
v___x_1838_ = lean_obj_once(&l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeArrayExpr___lam__0___closed__2);
v___x_1839_ = l_Lean_MessageData_arrayExpr_toMessageData(v_es_1836_, v___x_1837_, v___x_1838_);
return v___x_1839_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeArrayExpr___lam__0___boxed(lean_object* v_es_1840_){
_start:
{
lean_object* v_res_1841_; 
v_res_1841_ = l_Lean_MessageData_instCoeArrayExpr___lam__0(v_es_1840_);
lean_dec_ref(v_es_1840_);
return v_res_1841_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_bracket(lean_object* v_l_1844_, lean_object* v_f_1845_, lean_object* v_r_1846_){
_start:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; uint8_t v___x_1855_; lean_object* v___x_1856_; 
v___x_1847_ = lean_string_length(v_l_1844_);
v___x_1848_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1848_, 0, v_l_1844_);
v___x_1849_ = l_Lean_MessageData_ofFormat(v___x_1848_);
v___x_1850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
lean_ctor_set(v___x_1850_, 1, v_f_1845_);
v___x_1851_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1851_, 0, v_r_1846_);
v___x_1852_ = l_Lean_MessageData_ofFormat(v___x_1851_);
v___x_1853_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1853_, 0, v___x_1850_);
lean_ctor_set(v___x_1853_, 1, v___x_1852_);
v___x_1854_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1847_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
v___x_1855_ = 0;
v___x_1856_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1856_, 0, v___x_1854_);
lean_ctor_set_uint8(v___x_1856_, sizeof(void*)*1, v___x_1855_);
return v___x_1856_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_paren(lean_object* v_f_1857_){
_start:
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; 
v___x_1858_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__3));
v___x_1859_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__4));
v___x_1860_ = l_Lean_MessageData_bracket(v___x_1858_, v_f_1857_, v___x_1859_);
return v___x_1860_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_sbracket(lean_object* v_f_1861_){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__3));
v___x_1863_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__5));
v___x_1864_ = l_Lean_MessageData_bracket(v___x_1862_, v_f_1861_, v___x_1863_);
return v___x_1864_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_joinSep(lean_object* v_x_1865_, lean_object* v_x_1866_){
_start:
{
if (lean_obj_tag(v_x_1865_) == 0)
{
lean_object* v___x_1867_; 
lean_dec_ref(v_x_1866_);
v___x_1867_ = lean_obj_once(&l_Lean_MessageData_nil___closed__0, &l_Lean_MessageData_nil___closed__0_once, _init_l_Lean_MessageData_nil___closed__0);
return v___x_1867_;
}
else
{
lean_object* v_tail_1868_; 
v_tail_1868_ = lean_ctor_get(v_x_1865_, 1);
if (lean_obj_tag(v_tail_1868_) == 0)
{
lean_object* v_head_1869_; 
lean_dec_ref(v_x_1866_);
v_head_1869_ = lean_ctor_get(v_x_1865_, 0);
lean_inc(v_head_1869_);
lean_dec_ref_known(v_x_1865_, 2);
return v_head_1869_;
}
else
{
lean_object* v_head_1870_; lean_object* v___x_1872_; uint8_t v_isShared_1873_; uint8_t v_isSharedCheck_1879_; 
lean_inc(v_tail_1868_);
v_head_1870_ = lean_ctor_get(v_x_1865_, 0);
v_isSharedCheck_1879_ = !lean_is_exclusive(v_x_1865_);
if (v_isSharedCheck_1879_ == 0)
{
lean_object* v_unused_1880_; 
v_unused_1880_ = lean_ctor_get(v_x_1865_, 1);
lean_dec(v_unused_1880_);
v___x_1872_ = v_x_1865_;
v_isShared_1873_ = v_isSharedCheck_1879_;
goto v_resetjp_1871_;
}
else
{
lean_inc(v_head_1870_);
lean_dec(v_x_1865_);
v___x_1872_ = lean_box(0);
v_isShared_1873_ = v_isSharedCheck_1879_;
goto v_resetjp_1871_;
}
v_resetjp_1871_:
{
lean_object* v___x_1875_; 
lean_inc_ref(v_x_1866_);
if (v_isShared_1873_ == 0)
{
lean_ctor_set_tag(v___x_1872_, 7);
lean_ctor_set(v___x_1872_, 1, v_x_1866_);
v___x_1875_ = v___x_1872_;
goto v_reusejp_1874_;
}
else
{
lean_object* v_reuseFailAlloc_1878_; 
v_reuseFailAlloc_1878_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1878_, 0, v_head_1870_);
lean_ctor_set(v_reuseFailAlloc_1878_, 1, v_x_1866_);
v___x_1875_ = v_reuseFailAlloc_1878_;
goto v_reusejp_1874_;
}
v_reusejp_1874_:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = l_Lean_MessageData_joinSep(v_tail_1868_, v_x_1866_);
v___x_1877_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1877_, 0, v___x_1875_);
lean_ctor_set(v___x_1877_, 1, v___x_1876_);
return v___x_1877_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_fill(lean_object* v_a_1881_){
_start:
{
uint8_t v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = 1;
v___x_1883_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_1883_, 0, v_a_1881_);
lean_ctor_set_uint8(v___x_1883_, sizeof(void*)*1, v___x_1882_);
return v___x_1883_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__2(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1887_ = ((lean_object*)(l_Lean_MessageData_ofList___closed__1));
v___x_1888_ = l_Lean_MessageData_ofFormat(v___x_1887_);
return v___x_1888_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__5(void){
_start:
{
lean_object* v___x_1892_; lean_object* v___x_1893_; 
v___x_1892_ = ((lean_object*)(l_Lean_MessageData_ofList___closed__4));
v___x_1893_ = l_Lean_MessageData_ofFormat(v___x_1892_);
return v___x_1893_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__6(void){
_start:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; 
v___x_1894_ = lean_box(1);
v___x_1895_ = l_Lean_MessageData_ofFormat(v___x_1894_);
return v___x_1895_;
}
}
static lean_object* _init_l_Lean_MessageData_ofList___closed__7(void){
_start:
{
lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; 
v___x_1896_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_1897_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__5, &l_Lean_MessageData_ofList___closed__5_once, _init_l_Lean_MessageData_ofList___closed__5);
v___x_1898_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1898_, 0, v___x_1897_);
lean_ctor_set(v___x_1898_, 1, v___x_1896_);
return v___x_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofList(lean_object* v_x_1899_){
_start:
{
if (lean_obj_tag(v_x_1899_) == 0)
{
lean_object* v___x_1900_; 
v___x_1900_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__2, &l_Lean_MessageData_ofList___closed__2_once, _init_l_Lean_MessageData_ofList___closed__2);
return v___x_1900_;
}
else
{
lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1901_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__7, &l_Lean_MessageData_ofList___closed__7_once, _init_l_Lean_MessageData_ofList___closed__7);
v___x_1902_ = l_Lean_MessageData_joinSep(v_x_1899_, v___x_1901_);
v___x_1903_ = l_Lean_MessageData_sbracket(v___x_1902_);
return v___x_1903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_ofArray(lean_object* v_msgs_1904_){
_start:
{
lean_object* v___x_1905_; lean_object* v___x_1906_; 
v___x_1905_ = lean_array_to_list(v_msgs_1904_);
v___x_1906_ = l_Lean_MessageData_ofList(v___x_1905_);
return v___x_1906_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__2(void){
_start:
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1910_ = ((lean_object*)(l_Lean_MessageData_orList___closed__1));
v___x_1911_ = l_Lean_MessageData_ofFormat(v___x_1910_);
return v___x_1911_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__5(void){
_start:
{
lean_object* v___x_1915_; lean_object* v___x_1916_; 
v___x_1915_ = ((lean_object*)(l_Lean_MessageData_orList___closed__4));
v___x_1916_ = l_Lean_MessageData_ofFormat(v___x_1915_);
return v___x_1916_;
}
}
static lean_object* _init_l_Lean_MessageData_orList___closed__8(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1920_ = ((lean_object*)(l_Lean_MessageData_orList___closed__7));
v___x_1921_ = l_Lean_MessageData_ofFormat(v___x_1920_);
return v___x_1921_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_orList(lean_object* v_xs_1922_){
_start:
{
if (lean_obj_tag(v_xs_1922_) == 0)
{
lean_object* v___x_1923_; 
v___x_1923_ = lean_obj_once(&l_Lean_MessageData_orList___closed__2, &l_Lean_MessageData_orList___closed__2_once, _init_l_Lean_MessageData_orList___closed__2);
return v___x_1923_;
}
else
{
lean_object* v_tail_1924_; 
v_tail_1924_ = lean_ctor_get(v_xs_1922_, 1);
lean_inc(v_tail_1924_);
if (lean_obj_tag(v_tail_1924_) == 0)
{
lean_object* v_head_1925_; 
v_head_1925_ = lean_ctor_get(v_xs_1922_, 0);
lean_inc(v_head_1925_);
lean_dec_ref_known(v_xs_1922_, 2);
return v_head_1925_;
}
else
{
lean_object* v_tail_1926_; 
v_tail_1926_ = lean_ctor_get(v_tail_1924_, 1);
if (lean_obj_tag(v_tail_1926_) == 0)
{
lean_object* v_head_1927_; lean_object* v___x_1929_; uint8_t v_isShared_1930_; uint8_t v_isSharedCheck_1944_; 
v_head_1927_ = lean_ctor_get(v_xs_1922_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_xs_1922_);
if (v_isSharedCheck_1944_ == 0)
{
lean_object* v_unused_1945_; 
v_unused_1945_ = lean_ctor_get(v_xs_1922_, 1);
lean_dec(v_unused_1945_);
v___x_1929_ = v_xs_1922_;
v_isShared_1930_ = v_isSharedCheck_1944_;
goto v_resetjp_1928_;
}
else
{
lean_inc(v_head_1927_);
lean_dec(v_xs_1922_);
v___x_1929_ = lean_box(0);
v_isShared_1930_ = v_isSharedCheck_1944_;
goto v_resetjp_1928_;
}
v_resetjp_1928_:
{
lean_object* v_head_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1942_; 
v_head_1931_ = lean_ctor_get(v_tail_1924_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v_tail_1924_);
if (v_isSharedCheck_1942_ == 0)
{
lean_object* v_unused_1943_; 
v_unused_1943_ = lean_ctor_get(v_tail_1924_, 1);
lean_dec(v_unused_1943_);
v___x_1933_ = v_tail_1924_;
v_isShared_1934_ = v_isSharedCheck_1942_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_head_1931_);
lean_dec(v_tail_1924_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1942_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1935_; lean_object* v___x_1937_; 
v___x_1935_ = lean_obj_once(&l_Lean_MessageData_orList___closed__5, &l_Lean_MessageData_orList___closed__5_once, _init_l_Lean_MessageData_orList___closed__5);
if (v_isShared_1934_ == 0)
{
lean_ctor_set_tag(v___x_1933_, 7);
lean_ctor_set(v___x_1933_, 1, v___x_1935_);
lean_ctor_set(v___x_1933_, 0, v_head_1927_);
v___x_1937_ = v___x_1933_;
goto v_reusejp_1936_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_head_1927_);
lean_ctor_set(v_reuseFailAlloc_1941_, 1, v___x_1935_);
v___x_1937_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1936_;
}
v_reusejp_1936_:
{
lean_object* v___x_1939_; 
if (v_isShared_1930_ == 0)
{
lean_ctor_set_tag(v___x_1929_, 7);
lean_ctor_set(v___x_1929_, 1, v_head_1931_);
lean_ctor_set(v___x_1929_, 0, v___x_1937_);
v___x_1939_ = v___x_1929_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
lean_ctor_set(v_reuseFailAlloc_1940_, 1, v_head_1931_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
}
}
}
else
{
lean_object* v___x_1947_; uint8_t v_isShared_1948_; uint8_t v_isSharedCheck_1969_; 
v_isSharedCheck_1969_ = !lean_is_exclusive(v_tail_1924_);
if (v_isSharedCheck_1969_ == 0)
{
lean_object* v_unused_1970_; lean_object* v_unused_1971_; 
v_unused_1970_ = lean_ctor_get(v_tail_1924_, 1);
lean_dec(v_unused_1970_);
v_unused_1971_ = lean_ctor_get(v_tail_1924_, 0);
lean_dec(v_unused_1971_);
v___x_1947_ = v_tail_1924_;
v_isShared_1948_ = v_isSharedCheck_1969_;
goto v_resetjp_1946_;
}
else
{
lean_dec(v_tail_1924_);
v___x_1947_ = lean_box(0);
v_isShared_1948_ = v_isSharedCheck_1969_;
goto v_resetjp_1946_;
}
v_resetjp_1946_:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1957_; 
v___x_1949_ = ((lean_object*)(l_Lean_instInhabitedMessageData_default));
lean_inc_ref(v_xs_1922_);
v___x_1950_ = lean_array_mk(v_xs_1922_);
v___x_1951_ = lean_array_pop(v___x_1950_);
v___x_1952_ = lean_array_to_list(v___x_1951_);
v___x_1953_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_1954_ = l_Lean_MessageData_joinSep(v___x_1952_, v___x_1953_);
v___x_1955_ = lean_obj_once(&l_Lean_MessageData_orList___closed__8, &l_Lean_MessageData_orList___closed__8_once, _init_l_Lean_MessageData_orList___closed__8);
if (v_isShared_1948_ == 0)
{
lean_ctor_set_tag(v___x_1947_, 7);
lean_ctor_set(v___x_1947_, 1, v___x_1955_);
lean_ctor_set(v___x_1947_, 0, v___x_1954_);
v___x_1957_ = v___x_1947_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v___x_1954_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v___x_1955_);
v___x_1957_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
lean_object* v___x_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1965_; 
v___x_1958_ = l_List_getLast_x21___redArg(v___x_1949_, v_xs_1922_);
v_isSharedCheck_1965_ = !lean_is_exclusive(v_xs_1922_);
if (v_isSharedCheck_1965_ == 0)
{
lean_object* v_unused_1966_; lean_object* v_unused_1967_; 
v_unused_1966_ = lean_ctor_get(v_xs_1922_, 1);
lean_dec(v_unused_1966_);
v_unused_1967_ = lean_ctor_get(v_xs_1922_, 0);
lean_dec(v_unused_1967_);
v___x_1960_ = v_xs_1922_;
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
else
{
lean_dec(v_xs_1922_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1965_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1963_; 
if (v_isShared_1961_ == 0)
{
lean_ctor_set_tag(v___x_1960_, 7);
lean_ctor_set(v___x_1960_, 1, v___x_1958_);
lean_ctor_set(v___x_1960_, 0, v___x_1957_);
v___x_1963_ = v___x_1960_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v___x_1957_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v___x_1958_);
v___x_1963_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
return v___x_1963_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_andList___closed__2(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = ((lean_object*)(l_Lean_MessageData_andList___closed__1));
v___x_1976_ = l_Lean_MessageData_ofFormat(v___x_1975_);
return v___x_1976_;
}
}
static lean_object* _init_l_Lean_MessageData_andList___closed__5(void){
_start:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = ((lean_object*)(l_Lean_MessageData_andList___closed__4));
v___x_1981_ = l_Lean_MessageData_ofFormat(v___x_1980_);
return v___x_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_andList(lean_object* v_xs_1982_){
_start:
{
if (lean_obj_tag(v_xs_1982_) == 0)
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_obj_once(&l_Lean_MessageData_orList___closed__2, &l_Lean_MessageData_orList___closed__2_once, _init_l_Lean_MessageData_orList___closed__2);
return v___x_1983_;
}
else
{
lean_object* v_tail_1984_; 
v_tail_1984_ = lean_ctor_get(v_xs_1982_, 1);
lean_inc(v_tail_1984_);
if (lean_obj_tag(v_tail_1984_) == 0)
{
lean_object* v_head_1985_; 
v_head_1985_ = lean_ctor_get(v_xs_1982_, 0);
lean_inc(v_head_1985_);
lean_dec_ref_known(v_xs_1982_, 2);
return v_head_1985_;
}
else
{
lean_object* v_tail_1986_; 
v_tail_1986_ = lean_ctor_get(v_tail_1984_, 1);
if (lean_obj_tag(v_tail_1986_) == 0)
{
lean_object* v_head_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_2004_; 
v_head_1987_ = lean_ctor_get(v_xs_1982_, 0);
v_isSharedCheck_2004_ = !lean_is_exclusive(v_xs_1982_);
if (v_isSharedCheck_2004_ == 0)
{
lean_object* v_unused_2005_; 
v_unused_2005_ = lean_ctor_get(v_xs_1982_, 1);
lean_dec(v_unused_2005_);
v___x_1989_ = v_xs_1982_;
v_isShared_1990_ = v_isSharedCheck_2004_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_head_1987_);
lean_dec(v_xs_1982_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_2004_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v_head_1991_; lean_object* v___x_1993_; uint8_t v_isShared_1994_; uint8_t v_isSharedCheck_2002_; 
v_head_1991_ = lean_ctor_get(v_tail_1984_, 0);
v_isSharedCheck_2002_ = !lean_is_exclusive(v_tail_1984_);
if (v_isSharedCheck_2002_ == 0)
{
lean_object* v_unused_2003_; 
v_unused_2003_ = lean_ctor_get(v_tail_1984_, 1);
lean_dec(v_unused_2003_);
v___x_1993_ = v_tail_1984_;
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
else
{
lean_inc(v_head_1991_);
lean_dec(v_tail_1984_);
v___x_1993_ = lean_box(0);
v_isShared_1994_ = v_isSharedCheck_2002_;
goto v_resetjp_1992_;
}
v_resetjp_1992_:
{
lean_object* v___x_1995_; lean_object* v___x_1997_; 
v___x_1995_ = lean_obj_once(&l_Lean_MessageData_andList___closed__2, &l_Lean_MessageData_andList___closed__2_once, _init_l_Lean_MessageData_andList___closed__2);
if (v_isShared_1994_ == 0)
{
lean_ctor_set_tag(v___x_1993_, 7);
lean_ctor_set(v___x_1993_, 1, v___x_1995_);
lean_ctor_set(v___x_1993_, 0, v_head_1987_);
v___x_1997_ = v___x_1993_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2001_; 
v_reuseFailAlloc_2001_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2001_, 0, v_head_1987_);
lean_ctor_set(v_reuseFailAlloc_2001_, 1, v___x_1995_);
v___x_1997_ = v_reuseFailAlloc_2001_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1999_; 
if (v_isShared_1990_ == 0)
{
lean_ctor_set_tag(v___x_1989_, 7);
lean_ctor_set(v___x_1989_, 1, v_head_1991_);
lean_ctor_set(v___x_1989_, 0, v___x_1997_);
v___x_1999_ = v___x_1989_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v___x_1997_);
lean_ctor_set(v_reuseFailAlloc_2000_, 1, v_head_1991_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
}
else
{
lean_object* v___x_2007_; uint8_t v_isShared_2008_; uint8_t v_isSharedCheck_2029_; 
v_isSharedCheck_2029_ = !lean_is_exclusive(v_tail_1984_);
if (v_isSharedCheck_2029_ == 0)
{
lean_object* v_unused_2030_; lean_object* v_unused_2031_; 
v_unused_2030_ = lean_ctor_get(v_tail_1984_, 1);
lean_dec(v_unused_2030_);
v_unused_2031_ = lean_ctor_get(v_tail_1984_, 0);
lean_dec(v_unused_2031_);
v___x_2007_ = v_tail_1984_;
v_isShared_2008_ = v_isSharedCheck_2029_;
goto v_resetjp_2006_;
}
else
{
lean_dec(v_tail_1984_);
v___x_2007_ = lean_box(0);
v_isShared_2008_ = v_isSharedCheck_2029_;
goto v_resetjp_2006_;
}
v_resetjp_2006_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2017_; 
v___x_2009_ = ((lean_object*)(l_Lean_instInhabitedMessageData_default));
lean_inc_ref(v_xs_1982_);
v___x_2010_ = lean_array_mk(v_xs_1982_);
v___x_2011_ = lean_array_pop(v___x_2010_);
v___x_2012_ = lean_array_to_list(v___x_2011_);
v___x_2013_ = lean_obj_once(&l_Lean_MessageData_arrayExpr_toMessageData___closed__3, &l_Lean_MessageData_arrayExpr_toMessageData___closed__3_once, _init_l_Lean_MessageData_arrayExpr_toMessageData___closed__3);
v___x_2014_ = l_Lean_MessageData_joinSep(v___x_2012_, v___x_2013_);
v___x_2015_ = lean_obj_once(&l_Lean_MessageData_andList___closed__5, &l_Lean_MessageData_andList___closed__5_once, _init_l_Lean_MessageData_andList___closed__5);
if (v_isShared_2008_ == 0)
{
lean_ctor_set_tag(v___x_2007_, 7);
lean_ctor_set(v___x_2007_, 1, v___x_2015_);
lean_ctor_set(v___x_2007_, 0, v___x_2014_);
v___x_2017_ = v___x_2007_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2028_; 
v_reuseFailAlloc_2028_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2028_, 0, v___x_2014_);
lean_ctor_set(v_reuseFailAlloc_2028_, 1, v___x_2015_);
v___x_2017_ = v_reuseFailAlloc_2028_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
lean_object* v___x_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2025_; 
v___x_2018_ = l_List_getLast_x21___redArg(v___x_2009_, v_xs_1982_);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_xs_1982_);
if (v_isSharedCheck_2025_ == 0)
{
lean_object* v_unused_2026_; lean_object* v_unused_2027_; 
v_unused_2026_ = lean_ctor_get(v_xs_1982_, 1);
lean_dec(v_unused_2026_);
v_unused_2027_ = lean_ctor_get(v_xs_1982_, 0);
lean_dec(v_unused_2027_);
v___x_2020_ = v_xs_1982_;
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
else
{
lean_dec(v_xs_1982_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2025_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2023_; 
if (v_isShared_2021_ == 0)
{
lean_ctor_set_tag(v___x_2020_, 7);
lean_ctor_set(v___x_2020_, 1, v___x_2018_);
lean_ctor_set(v___x_2020_, 0, v___x_2017_);
v___x_2023_ = v___x_2020_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2024_; 
v_reuseFailAlloc_2024_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2024_, 0, v___x_2017_);
lean_ctor_set(v_reuseFailAlloc_2024_, 1, v___x_2018_);
v___x_2023_ = v_reuseFailAlloc_2024_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
return v___x_2023_;
}
}
}
}
}
}
}
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__0(void){
_start:
{
lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2032_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_2033_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2033_, 0, v___x_2032_);
lean_ctor_set(v___x_2033_, 1, v___x_2032_);
return v___x_2033_;
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__3(void){
_start:
{
lean_object* v___x_2037_; lean_object* v___x_2038_; 
v___x_2037_ = ((lean_object*)(l_Lean_MessageData_note___closed__2));
v___x_2038_ = l_Lean_MessageData_ofFormat(v___x_2037_);
return v___x_2038_;
}
}
static lean_object* _init_l_Lean_MessageData_note___closed__4(void){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; 
v___x_2039_ = lean_obj_once(&l_Lean_MessageData_note___closed__3, &l_Lean_MessageData_note___closed__3_once, _init_l_Lean_MessageData_note___closed__3);
v___x_2040_ = lean_obj_once(&l_Lean_MessageData_note___closed__0, &l_Lean_MessageData_note___closed__0_once, _init_l_Lean_MessageData_note___closed__0);
v___x_2041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2041_, 0, v___x_2040_);
lean_ctor_set(v___x_2041_, 1, v___x_2039_);
return v___x_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_note(lean_object* v_note_2042_){
_start:
{
lean_object* v___x_2043_; lean_object* v___x_2044_; 
v___x_2043_ = lean_obj_once(&l_Lean_MessageData_note___closed__4, &l_Lean_MessageData_note___closed__4_once, _init_l_Lean_MessageData_note___closed__4);
v___x_2044_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2044_, 0, v___x_2043_);
lean_ctor_set(v___x_2044_, 1, v_note_2042_);
return v___x_2044_;
}
}
static lean_object* _init_l_Lean_MessageData_hint_x27___closed__2(void){
_start:
{
lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2048_ = ((lean_object*)(l_Lean_MessageData_hint_x27___closed__1));
v___x_2049_ = l_Lean_MessageData_ofFormat(v___x_2048_);
return v___x_2049_;
}
}
static lean_object* _init_l_Lean_MessageData_hint_x27___closed__3(void){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2050_ = lean_obj_once(&l_Lean_MessageData_hint_x27___closed__2, &l_Lean_MessageData_hint_x27___closed__2_once, _init_l_Lean_MessageData_hint_x27___closed__2);
v___x_2051_ = lean_obj_once(&l_Lean_MessageData_note___closed__0, &l_Lean_MessageData_note___closed__0_once, _init_l_Lean_MessageData_note___closed__0);
v___x_2052_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2052_, 0, v___x_2051_);
lean_ctor_set(v___x_2052_, 1, v___x_2050_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_hint_x27(lean_object* v_hint_2053_){
_start:
{
lean_object* v___x_2054_; lean_object* v___x_2055_; 
v___x_2054_ = lean_obj_once(&l_Lean_MessageData_hint_x27___closed__3, &l_Lean_MessageData_hint_x27___closed__3_once, _init_l_Lean_MessageData_hint_x27___closed__3);
v___x_2055_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2055_, 0, v___x_2054_);
lean_ctor_set(v___x_2055_, 1, v_hint_2053_);
return v___x_2055_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_instCoeListExpr___lam__0(lean_object* v_es_2058_){
_start:
{
lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2059_ = ((lean_object*)(l_Lean_MessageData_instCoeExpr___closed__0));
v___x_2060_ = lean_box(0);
v___x_2061_ = l_List_mapTR_loop___redArg(v___x_2059_, v_es_2058_, v___x_2060_);
v___x_2062_ = l_Lean_MessageData_ofList(v___x_2061_);
return v___x_2062_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default___redArg(lean_object* v_inst_2065_){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; uint8_t v___x_2070_; lean_object* v___x_2071_; 
v___x_2066_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_2067_ = l_Lean_instInhabitedPosition_default;
v___x_2068_ = lean_box(0);
v___x_2069_ = 0;
v___x_2070_ = 2;
v___x_2071_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2071_, 0, v___x_2066_);
lean_ctor_set(v___x_2071_, 1, v___x_2067_);
lean_ctor_set(v___x_2071_, 2, v___x_2068_);
lean_ctor_set(v___x_2071_, 3, v___x_2066_);
lean_ctor_set(v___x_2071_, 4, v_inst_2065_);
lean_ctor_set_uint8(v___x_2071_, sizeof(void*)*5, v___x_2069_);
lean_ctor_set_uint8(v___x_2071_, sizeof(void*)*5 + 1, v___x_2070_);
lean_ctor_set_uint8(v___x_2071_, sizeof(void*)*5 + 2, v___x_2069_);
return v___x_2071_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage_default(lean_object* v_00_u03b1_2072_, lean_object* v_inst_2073_){
_start:
{
lean_object* v___x_2074_; 
v___x_2074_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage___redArg(lean_object* v_inst_2075_){
_start:
{
lean_object* v___x_2076_; 
v___x_2076_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2075_);
return v___x_2076_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBaseMessage(lean_object* v_a_2077_, lean_object* v_inst_2078_){
_start:
{
lean_object* v___x_2079_; 
v___x_2079_ = l_Lean_instInhabitedBaseMessage_default___redArg(v_inst_2078_);
return v___x_2079_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson___redArg(lean_object* v_inst_2092_, lean_object* v_x_2093_){
_start:
{
lean_object* v_fileName_2094_; lean_object* v_pos_2095_; lean_object* v_endPos_2096_; uint8_t v_keepFullRange_2097_; uint8_t v_severity_2098_; uint8_t v_isSilent_2099_; lean_object* v_caption_2100_; lean_object* v_data_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; 
v_fileName_2094_ = lean_ctor_get(v_x_2093_, 0);
lean_inc_ref(v_fileName_2094_);
v_pos_2095_ = lean_ctor_get(v_x_2093_, 1);
lean_inc_ref(v_pos_2095_);
v_endPos_2096_ = lean_ctor_get(v_x_2093_, 2);
lean_inc(v_endPos_2096_);
v_keepFullRange_2097_ = lean_ctor_get_uint8(v_x_2093_, sizeof(void*)*5);
v_severity_2098_ = lean_ctor_get_uint8(v_x_2093_, sizeof(void*)*5 + 1);
v_isSilent_2099_ = lean_ctor_get_uint8(v_x_2093_, sizeof(void*)*5 + 2);
v_caption_2100_ = lean_ctor_get(v_x_2093_, 3);
lean_inc_ref(v_caption_2100_);
v_data_2101_ = lean_ctor_get(v_x_2093_, 4);
lean_inc(v_data_2101_);
lean_dec_ref(v_x_2093_);
v___x_2102_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__0));
v___x_2103_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_2104_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2104_, 0, v_fileName_2094_);
v___x_2105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2105_, 0, v___x_2103_);
lean_ctor_set(v___x_2105_, 1, v___x_2104_);
v___x_2106_ = lean_box(0);
v___x_2107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2105_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_2109_ = l_Lean_instToJsonPosition_toJson(v_pos_2095_);
v___x_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2110_, 0, v___x_2108_);
lean_ctor_set(v___x_2110_, 1, v___x_2109_);
v___x_2111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2110_);
lean_ctor_set(v___x_2111_, 1, v___x_2106_);
v___x_2112_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_2113_ = l_Option_toJson___redArg(v___x_2102_, v_endPos_2096_);
v___x_2114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2114_, 0, v___x_2112_);
lean_ctor_set(v___x_2114_, 1, v___x_2113_);
v___x_2115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2115_, 0, v___x_2114_);
lean_ctor_set(v___x_2115_, 1, v___x_2106_);
v___x_2116_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_2117_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2117_, 0, v_keepFullRange_2097_);
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2116_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
v___x_2119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2119_, 0, v___x_2118_);
lean_ctor_set(v___x_2119_, 1, v___x_2106_);
v___x_2120_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_2121_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_2098_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2120_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2123_, 0, v___x_2122_);
lean_ctor_set(v___x_2123_, 1, v___x_2106_);
v___x_2124_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_2125_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2125_, 0, v_isSilent_2099_);
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2124_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2126_);
lean_ctor_set(v___x_2127_, 1, v___x_2106_);
v___x_2128_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_2129_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2129_, 0, v_caption_2100_);
v___x_2130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2128_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2130_);
lean_ctor_set(v___x_2131_, 1, v___x_2106_);
v___x_2132_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2133_ = lean_apply_1(v_inst_2092_, v_data_2101_);
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v___x_2132_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2135_, 0, v___x_2134_);
lean_ctor_set(v___x_2135_, 1, v___x_2106_);
v___x_2136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2136_, 0, v___x_2135_);
lean_ctor_set(v___x_2136_, 1, v___x_2106_);
v___x_2137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2137_, 0, v___x_2131_);
lean_ctor_set(v___x_2137_, 1, v___x_2136_);
v___x_2138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2127_);
lean_ctor_set(v___x_2138_, 1, v___x_2137_);
v___x_2139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2123_);
lean_ctor_set(v___x_2139_, 1, v___x_2138_);
v___x_2140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2140_, 0, v___x_2119_);
lean_ctor_set(v___x_2140_, 1, v___x_2139_);
v___x_2141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2115_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
v___x_2142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2111_);
lean_ctor_set(v___x_2142_, 1, v___x_2141_);
v___x_2143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2107_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__9));
v___x_2145_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_2146_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go(lean_box(0), lean_box(0), v___x_2144_, v___x_2143_, v___x_2145_);
v___x_2147_ = l_Lean_Json_mkObj(v___x_2146_);
lean_dec(v___x_2146_);
return v___x_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage_toJson(lean_object* v_00_u03b1_2148_, lean_object* v_inst_2149_, lean_object* v_x_2150_){
_start:
{
lean_object* v___x_2151_; 
v___x_2151_ = l_Lean_instToJsonBaseMessage_toJson___redArg(v_inst_2149_, v_x_2150_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage___redArg(lean_object* v_inst_2152_){
_start:
{
lean_object* v___x_2153_; 
v___x_2153_ = lean_alloc_closure((void*)(l_Lean_instToJsonBaseMessage_toJson), 3, 2);
lean_closure_set(v___x_2153_, 0, lean_box(0));
lean_closure_set(v___x_2153_, 1, v_inst_2152_);
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonBaseMessage(lean_object* v_00_u03b1_2154_, lean_object* v_inst_2155_){
_start:
{
lean_object* v___x_2156_; 
v___x_2156_ = lean_alloc_closure((void*)(l_Lean_instToJsonBaseMessage_toJson), 3, 2);
lean_closure_set(v___x_2156_, 0, lean_box(0));
lean_closure_set(v___x_2156_, 1, v_inst_2155_);
return v___x_2156_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3(void){
_start:
{
uint8_t v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = 1;
v___x_2163_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__2));
v___x_2164_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2163_, v___x_2162_);
return v___x_2164_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5(void){
_start:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4));
v___x_2167_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__3);
v___x_2168_ = lean_string_append(v___x_2167_, v___x_2166_);
return v___x_2168_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7(void){
_start:
{
uint8_t v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = 1;
v___x_2172_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__6));
v___x_2173_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2172_, v___x_2171_);
return v___x_2173_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8(void){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; 
v___x_2174_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7);
v___x_2175_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2176_ = lean_string_append(v___x_2175_, v___x_2174_);
return v___x_2176_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10(void){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2178_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2179_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__8);
v___x_2180_ = lean_string_append(v___x_2179_, v___x_2178_);
return v___x_2180_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14(void){
_start:
{
uint8_t v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
v___x_2186_ = 1;
v___x_2187_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__13));
v___x_2188_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2187_, v___x_2186_);
return v___x_2188_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15(void){
_start:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2189_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14);
v___x_2190_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2191_ = lean_string_append(v___x_2190_, v___x_2189_);
return v___x_2191_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16(void){
_start:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; 
v___x_2192_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2193_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__15);
v___x_2194_ = lean_string_append(v___x_2193_, v___x_2192_);
return v___x_2194_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18(void){
_start:
{
uint8_t v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v___x_2197_ = 1;
v___x_2198_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__17));
v___x_2199_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2198_, v___x_2197_);
return v___x_2199_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19(void){
_start:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2200_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18);
v___x_2201_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2202_ = lean_string_append(v___x_2201_, v___x_2200_);
return v___x_2202_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20(void){
_start:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2203_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2204_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__19);
v___x_2205_ = lean_string_append(v___x_2204_, v___x_2203_);
return v___x_2205_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23(void){
_start:
{
uint8_t v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; 
v___x_2209_ = 1;
v___x_2210_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__22));
v___x_2211_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2210_, v___x_2209_);
return v___x_2211_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2212_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23);
v___x_2213_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2214_ = lean_string_append(v___x_2213_, v___x_2212_);
return v___x_2214_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25(void){
_start:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2216_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__24);
v___x_2217_ = lean_string_append(v___x_2216_, v___x_2215_);
return v___x_2217_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27(void){
_start:
{
uint8_t v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2220_ = 1;
v___x_2221_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__26));
v___x_2222_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2221_, v___x_2220_);
return v___x_2222_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28(void){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2223_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27);
v___x_2224_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2225_ = lean_string_append(v___x_2224_, v___x_2223_);
return v___x_2225_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29(void){
_start:
{
lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; 
v___x_2226_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2227_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__28);
v___x_2228_ = lean_string_append(v___x_2227_, v___x_2226_);
return v___x_2228_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31(void){
_start:
{
uint8_t v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2231_ = 1;
v___x_2232_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__30));
v___x_2233_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2232_, v___x_2231_);
return v___x_2233_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32(void){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2234_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31);
v___x_2235_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2236_ = lean_string_append(v___x_2235_, v___x_2234_);
return v___x_2236_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33(void){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2237_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2238_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__32);
v___x_2239_ = lean_string_append(v___x_2238_, v___x_2237_);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35(void){
_start:
{
uint8_t v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; 
v___x_2242_ = 1;
v___x_2243_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__34));
v___x_2244_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2243_, v___x_2242_);
return v___x_2244_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36(void){
_start:
{
lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2245_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35);
v___x_2246_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2247_ = lean_string_append(v___x_2246_, v___x_2245_);
return v___x_2247_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2248_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2249_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__36);
v___x_2250_ = lean_string_append(v___x_2249_, v___x_2248_);
return v___x_2250_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39(void){
_start:
{
uint8_t v___x_2253_; lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2253_ = 1;
v___x_2254_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__38));
v___x_2255_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2254_, v___x_2253_);
return v___x_2255_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40(void){
_start:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; 
v___x_2256_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39);
v___x_2257_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__5);
v___x_2258_ = lean_string_append(v___x_2257_, v___x_2256_);
return v___x_2258_;
}
}
static lean_object* _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41(void){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; 
v___x_2259_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2260_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__40);
v___x_2261_ = lean_string_append(v___x_2260_, v___x_2259_);
return v___x_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson___redArg(lean_object* v_inst_2262_, lean_object* v_json_2263_){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; 
v___x_2264_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__0));
v___x_2265_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
lean_inc(v_json_2263_);
v___x_2266_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2264_, v___x_2265_);
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2267_; lean_object* v___x_2269_; uint8_t v_isShared_2270_; uint8_t v_isSharedCheck_2276_; 
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2267_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2269_ = v___x_2266_;
v_isShared_2270_ = v_isSharedCheck_2276_;
goto v_resetjp_2268_;
}
else
{
lean_inc(v_a_2267_);
lean_dec(v___x_2266_);
v___x_2269_ = lean_box(0);
v_isShared_2270_ = v_isSharedCheck_2276_;
goto v_resetjp_2268_;
}
v_resetjp_2268_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2274_; 
v___x_2271_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__10);
v___x_2272_ = lean_string_append(v___x_2271_, v_a_2267_);
lean_dec(v_a_2267_);
if (v_isShared_2270_ == 0)
{
lean_ctor_set(v___x_2269_, 0, v___x_2272_);
v___x_2274_ = v___x_2269_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v___x_2272_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
else
{
if (lean_obj_tag(v___x_2266_) == 0)
{
lean_object* v_a_2277_; lean_object* v___x_2279_; uint8_t v_isShared_2280_; uint8_t v_isSharedCheck_2284_; 
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2277_ = lean_ctor_get(v___x_2266_, 0);
v_isSharedCheck_2284_ = !lean_is_exclusive(v___x_2266_);
if (v_isSharedCheck_2284_ == 0)
{
v___x_2279_ = v___x_2266_;
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
else
{
lean_inc(v_a_2277_);
lean_dec(v___x_2266_);
v___x_2279_ = lean_box(0);
v_isShared_2280_ = v_isSharedCheck_2284_;
goto v_resetjp_2278_;
}
v_resetjp_2278_:
{
lean_object* v___x_2282_; 
if (v_isShared_2280_ == 0)
{
lean_ctor_set_tag(v___x_2279_, 0);
v___x_2282_ = v___x_2279_;
goto v_reusejp_2281_;
}
else
{
lean_object* v_reuseFailAlloc_2283_; 
v_reuseFailAlloc_2283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2283_, 0, v_a_2277_);
v___x_2282_ = v_reuseFailAlloc_2283_;
goto v_reusejp_2281_;
}
v_reusejp_2281_:
{
return v___x_2282_;
}
}
}
else
{
lean_object* v_a_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; 
v_a_2285_ = lean_ctor_get(v___x_2266_, 0);
lean_inc(v_a_2285_);
lean_dec_ref_known(v___x_2266_, 1);
v___x_2286_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__11));
v___x_2287_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__12));
v___x_2288_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
lean_inc(v_json_2263_);
v___x_2289_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2286_, v___x_2288_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2299_; 
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2299_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2299_ == 0)
{
v___x_2292_ = v___x_2289_;
v_isShared_2293_ = v_isSharedCheck_2299_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2289_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2299_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2297_; 
v___x_2294_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__16);
v___x_2295_ = lean_string_append(v___x_2294_, v_a_2290_);
lean_dec(v_a_2290_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v___x_2295_);
v___x_2297_ = v___x_2292_;
goto v_reusejp_2296_;
}
else
{
lean_object* v_reuseFailAlloc_2298_; 
v_reuseFailAlloc_2298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2298_, 0, v___x_2295_);
v___x_2297_ = v_reuseFailAlloc_2298_;
goto v_reusejp_2296_;
}
v_reusejp_2296_:
{
return v___x_2297_;
}
}
}
else
{
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2307_; 
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2300_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2302_ = v___x_2289_;
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_a_2300_);
lean_dec(v___x_2289_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2307_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2305_; 
if (v_isShared_2303_ == 0)
{
lean_ctor_set_tag(v___x_2302_, 0);
v___x_2305_ = v___x_2302_;
goto v_reusejp_2304_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v_a_2300_);
v___x_2305_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2304_;
}
v_reusejp_2304_:
{
return v___x_2305_;
}
}
}
else
{
lean_object* v_a_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; 
v_a_2308_ = lean_ctor_get(v___x_2289_, 0);
lean_inc(v_a_2308_);
lean_dec_ref_known(v___x_2289_, 1);
v___x_2309_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
lean_inc(v_json_2263_);
v___x_2310_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2287_, v___x_2309_);
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2320_; 
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2311_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2313_ = v___x_2310_;
v_isShared_2314_ = v_isSharedCheck_2320_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2310_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2320_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2315_; lean_object* v___x_2316_; lean_object* v___x_2318_; 
v___x_2315_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__20);
v___x_2316_ = lean_string_append(v___x_2315_, v_a_2311_);
lean_dec(v_a_2311_);
if (v_isShared_2314_ == 0)
{
lean_ctor_set(v___x_2313_, 0, v___x_2316_);
v___x_2318_ = v___x_2313_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
else
{
if (lean_obj_tag(v___x_2310_) == 0)
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2321_ = lean_ctor_get(v___x_2310_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2310_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2310_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2310_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
lean_ctor_set_tag(v___x_2323_, 0);
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; 
v_a_2329_ = lean_ctor_get(v___x_2310_, 0);
lean_inc(v_a_2329_);
lean_dec_ref_known(v___x_2310_, 1);
v___x_2330_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__21));
v___x_2331_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
lean_inc(v_json_2263_);
v___x_2332_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2330_, v___x_2331_);
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2342_; 
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2333_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2335_ = v___x_2332_;
v_isShared_2336_ = v_isSharedCheck_2342_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_a_2333_);
lean_dec(v___x_2332_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2342_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2340_; 
v___x_2337_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__25);
v___x_2338_ = lean_string_append(v___x_2337_, v_a_2333_);
lean_dec(v_a_2333_);
if (v_isShared_2336_ == 0)
{
lean_ctor_set(v___x_2335_, 0, v___x_2338_);
v___x_2340_ = v___x_2335_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
else
{
if (lean_obj_tag(v___x_2332_) == 0)
{
lean_object* v_a_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2350_; 
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2343_ = lean_ctor_get(v___x_2332_, 0);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2332_);
if (v_isSharedCheck_2350_ == 0)
{
v___x_2345_ = v___x_2332_;
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_a_2343_);
lean_dec(v___x_2332_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2350_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2348_; 
if (v_isShared_2346_ == 0)
{
lean_ctor_set_tag(v___x_2345_, 0);
v___x_2348_ = v___x_2345_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_a_2343_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
else
{
lean_object* v_a_2351_; lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v_a_2351_ = lean_ctor_get(v___x_2332_, 0);
lean_inc(v_a_2351_);
lean_dec_ref_known(v___x_2332_, 1);
v___x_2352_ = ((lean_object*)(l_Lean_instFromJsonMessageSeverity___closed__0));
v___x_2353_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
lean_inc(v_json_2263_);
v___x_2354_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2352_, v___x_2353_);
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2364_; 
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2355_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2364_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2364_ == 0)
{
v___x_2357_ = v___x_2354_;
v_isShared_2358_ = v_isSharedCheck_2364_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2354_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2364_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2362_; 
v___x_2359_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__29);
v___x_2360_ = lean_string_append(v___x_2359_, v_a_2355_);
lean_dec(v_a_2355_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 0, v___x_2360_);
v___x_2362_ = v___x_2357_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2360_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
return v___x_2362_;
}
}
}
else
{
if (lean_obj_tag(v___x_2354_) == 0)
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2365_ = lean_ctor_get(v___x_2354_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2354_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2354_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2354_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
lean_ctor_set_tag(v___x_2367_, 0);
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
else
{
lean_object* v_a_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v_a_2373_ = lean_ctor_get(v___x_2354_, 0);
lean_inc(v_a_2373_);
lean_dec_ref_known(v___x_2354_, 1);
v___x_2374_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
lean_inc(v_json_2263_);
v___x_2375_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2330_, v___x_2374_);
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2385_; 
lean_dec(v_a_2373_);
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2376_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2385_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2385_ == 0)
{
v___x_2378_ = v___x_2375_;
v_isShared_2379_ = v_isSharedCheck_2385_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_a_2376_);
lean_dec(v___x_2375_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2385_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2383_; 
v___x_2380_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__33);
v___x_2381_ = lean_string_append(v___x_2380_, v_a_2376_);
lean_dec(v_a_2376_);
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v___x_2381_);
v___x_2383_ = v___x_2378_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2384_; 
v_reuseFailAlloc_2384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2384_, 0, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2384_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
return v___x_2383_;
}
}
}
else
{
if (lean_obj_tag(v___x_2375_) == 0)
{
lean_object* v_a_2386_; lean_object* v___x_2388_; uint8_t v_isShared_2389_; uint8_t v_isSharedCheck_2393_; 
lean_dec(v_a_2373_);
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2386_ = lean_ctor_get(v___x_2375_, 0);
v_isSharedCheck_2393_ = !lean_is_exclusive(v___x_2375_);
if (v_isSharedCheck_2393_ == 0)
{
v___x_2388_ = v___x_2375_;
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
else
{
lean_inc(v_a_2386_);
lean_dec(v___x_2375_);
v___x_2388_ = lean_box(0);
v_isShared_2389_ = v_isSharedCheck_2393_;
goto v_resetjp_2387_;
}
v_resetjp_2387_:
{
lean_object* v___x_2391_; 
if (v_isShared_2389_ == 0)
{
lean_ctor_set_tag(v___x_2388_, 0);
v___x_2391_ = v___x_2388_;
goto v_reusejp_2390_;
}
else
{
lean_object* v_reuseFailAlloc_2392_; 
v_reuseFailAlloc_2392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2392_, 0, v_a_2386_);
v___x_2391_ = v_reuseFailAlloc_2392_;
goto v_reusejp_2390_;
}
v_reusejp_2390_:
{
return v___x_2391_;
}
}
}
else
{
lean_object* v_a_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v_a_2394_ = lean_ctor_get(v___x_2375_, 0);
lean_inc(v_a_2394_);
lean_dec_ref_known(v___x_2375_, 1);
v___x_2395_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
lean_inc(v_json_2263_);
v___x_2396_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v___x_2264_, v___x_2395_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2406_; 
lean_dec(v_a_2394_);
lean_dec(v_a_2373_);
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2406_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2406_ == 0)
{
v___x_2399_ = v___x_2396_;
v_isShared_2400_ = v_isSharedCheck_2406_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2406_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2404_; 
v___x_2401_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__37);
v___x_2402_ = lean_string_append(v___x_2401_, v_a_2397_);
lean_dec(v_a_2397_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v___x_2402_);
v___x_2404_ = v___x_2399_;
goto v_reusejp_2403_;
}
else
{
lean_object* v_reuseFailAlloc_2405_; 
v_reuseFailAlloc_2405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2405_, 0, v___x_2402_);
v___x_2404_ = v_reuseFailAlloc_2405_;
goto v_reusejp_2403_;
}
v_reusejp_2403_:
{
return v___x_2404_;
}
}
}
else
{
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2414_; 
lean_dec(v_a_2394_);
lean_dec(v_a_2373_);
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
lean_dec(v_json_2263_);
lean_dec_ref(v_inst_2262_);
v_a_2407_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2409_ = v___x_2396_;
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_a_2407_);
lean_dec(v___x_2396_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2414_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v___x_2412_; 
if (v_isShared_2410_ == 0)
{
lean_ctor_set_tag(v___x_2409_, 0);
v___x_2412_ = v___x_2409_;
goto v_reusejp_2411_;
}
else
{
lean_object* v_reuseFailAlloc_2413_; 
v_reuseFailAlloc_2413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2413_, 0, v_a_2407_);
v___x_2412_ = v_reuseFailAlloc_2413_;
goto v_reusejp_2411_;
}
v_reusejp_2411_:
{
return v___x_2412_;
}
}
}
else
{
lean_object* v_a_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; 
v_a_2415_ = lean_ctor_get(v___x_2396_, 0);
lean_inc(v_a_2415_);
lean_dec_ref_known(v___x_2396_, 1);
v___x_2416_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2417_ = l_Lean_Json_getObjValAs_x3f___redArg(v_json_2263_, v_inst_2262_, v___x_2416_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2427_; 
lean_dec(v_a_2415_);
lean_dec(v_a_2394_);
lean_dec(v_a_2373_);
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2427_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2420_ = v___x_2417_;
v_isShared_2421_ = v_isSharedCheck_2427_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2417_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2427_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2425_; 
v___x_2422_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__41);
v___x_2423_ = lean_string_append(v___x_2422_, v_a_2418_);
lean_dec(v_a_2418_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set(v___x_2420_, 0, v___x_2423_);
v___x_2425_ = v___x_2420_;
goto v_reusejp_2424_;
}
else
{
lean_object* v_reuseFailAlloc_2426_; 
v_reuseFailAlloc_2426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2426_, 0, v___x_2423_);
v___x_2425_ = v_reuseFailAlloc_2426_;
goto v_reusejp_2424_;
}
v_reusejp_2424_:
{
return v___x_2425_;
}
}
}
else
{
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2428_; lean_object* v___x_2430_; uint8_t v_isShared_2431_; uint8_t v_isSharedCheck_2435_; 
lean_dec(v_a_2415_);
lean_dec(v_a_2394_);
lean_dec(v_a_2373_);
lean_dec(v_a_2351_);
lean_dec(v_a_2329_);
lean_dec(v_a_2308_);
lean_dec(v_a_2285_);
v_a_2428_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2435_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2430_ = v___x_2417_;
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
else
{
lean_inc(v_a_2428_);
lean_dec(v___x_2417_);
v___x_2430_ = lean_box(0);
v_isShared_2431_ = v_isSharedCheck_2435_;
goto v_resetjp_2429_;
}
v_resetjp_2429_:
{
lean_object* v___x_2433_; 
if (v_isShared_2431_ == 0)
{
lean_ctor_set_tag(v___x_2430_, 0);
v___x_2433_ = v___x_2430_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v_a_2428_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
return v___x_2433_;
}
}
}
else
{
lean_object* v_a_2436_; lean_object* v___x_2438_; uint8_t v_isShared_2439_; uint8_t v_isSharedCheck_2447_; 
v_a_2436_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2447_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2447_ == 0)
{
v___x_2438_ = v___x_2417_;
v_isShared_2439_ = v_isSharedCheck_2447_;
goto v_resetjp_2437_;
}
else
{
lean_inc(v_a_2436_);
lean_dec(v___x_2417_);
v___x_2438_ = lean_box(0);
v_isShared_2439_ = v_isSharedCheck_2447_;
goto v_resetjp_2437_;
}
v_resetjp_2437_:
{
lean_object* v___x_2440_; uint8_t v___x_2441_; uint8_t v___x_2442_; uint8_t v___x_2443_; lean_object* v___x_2445_; 
v___x_2440_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2440_, 0, v_a_2285_);
lean_ctor_set(v___x_2440_, 1, v_a_2308_);
lean_ctor_set(v___x_2440_, 2, v_a_2329_);
lean_ctor_set(v___x_2440_, 3, v_a_2415_);
lean_ctor_set(v___x_2440_, 4, v_a_2436_);
v___x_2441_ = lean_unbox(v_a_2351_);
lean_dec(v_a_2351_);
lean_ctor_set_uint8(v___x_2440_, sizeof(void*)*5, v___x_2441_);
v___x_2442_ = lean_unbox(v_a_2373_);
lean_dec(v_a_2373_);
lean_ctor_set_uint8(v___x_2440_, sizeof(void*)*5 + 1, v___x_2442_);
v___x_2443_ = lean_unbox(v_a_2394_);
lean_dec(v_a_2394_);
lean_ctor_set_uint8(v___x_2440_, sizeof(void*)*5 + 2, v___x_2443_);
if (v_isShared_2439_ == 0)
{
lean_ctor_set(v___x_2438_, 0, v___x_2440_);
v___x_2445_ = v___x_2438_;
goto v_reusejp_2444_;
}
else
{
lean_object* v_reuseFailAlloc_2446_; 
v_reuseFailAlloc_2446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2446_, 0, v___x_2440_);
v___x_2445_ = v_reuseFailAlloc_2446_;
goto v_reusejp_2444_;
}
v_reusejp_2444_:
{
return v___x_2445_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage_fromJson(lean_object* v_00_u03b1_2448_, lean_object* v_inst_2449_, lean_object* v_json_2450_){
_start:
{
lean_object* v___x_2451_; 
v___x_2451_ = l_Lean_instFromJsonBaseMessage_fromJson___redArg(v_inst_2449_, v_json_2450_);
return v___x_2451_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage___redArg(lean_object* v_inst_2452_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = lean_alloc_closure((void*)(l_Lean_instFromJsonBaseMessage_fromJson), 3, 2);
lean_closure_set(v___x_2453_, 0, lean_box(0));
lean_closure_set(v___x_2453_, 1, v_inst_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonBaseMessage(lean_object* v_00_u03b1_2454_, lean_object* v_inst_2455_){
_start:
{
lean_object* v___x_2456_; 
v___x_2456_ = lean_alloc_closure((void*)(l_Lean_instFromJsonBaseMessage_fromJson), 3, 2);
lean_closure_set(v___x_2456_, 0, lean_box(0));
lean_closure_set(v___x_2456_, 1, v_inst_2455_);
return v___x_2456_;
}
}
LEAN_EXPORT lean_object* l_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(lean_object* v_x_2457_){
_start:
{
if (lean_obj_tag(v_x_2457_) == 0)
{
lean_object* v___x_2458_; 
v___x_2458_ = lean_box(0);
return v___x_2458_;
}
else
{
lean_object* v_val_2459_; lean_object* v___x_2460_; 
v_val_2459_ = lean_ctor_get(v_x_2457_, 0);
lean_inc(v_val_2459_);
lean_dec_ref_known(v_x_2457_, 1);
v___x_2460_ = l_Lean_instToJsonPosition_toJson(v_val_2459_);
return v___x_2460_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(lean_object* v_a_2461_, lean_object* v_a_2462_){
_start:
{
if (lean_obj_tag(v_a_2461_) == 0)
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_array_to_list(v_a_2462_);
return v___x_2463_;
}
else
{
lean_object* v_head_2464_; lean_object* v_tail_2465_; lean_object* v___x_2466_; 
v_head_2464_ = lean_ctor_get(v_a_2461_, 0);
lean_inc(v_head_2464_);
v_tail_2465_ = lean_ctor_get(v_a_2461_, 1);
lean_inc(v_tail_2465_);
lean_dec_ref_known(v_a_2461_, 2);
v___x_2466_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2462_, v_head_2464_);
v_a_2461_ = v_tail_2465_;
v_a_2462_ = v___x_2466_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToJsonSerialMessage_toJson(lean_object* v_x_2469_){
_start:
{
lean_object* v_toBaseMessage_2470_; lean_object* v_kind_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2536_; 
v_toBaseMessage_2470_ = lean_ctor_get(v_x_2469_, 0);
v_kind_2471_ = lean_ctor_get(v_x_2469_, 1);
v_isSharedCheck_2536_ = !lean_is_exclusive(v_x_2469_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2473_ = v_x_2469_;
v_isShared_2474_ = v_isSharedCheck_2536_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_kind_2471_);
lean_inc(v_toBaseMessage_2470_);
lean_dec(v_x_2469_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2536_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v_fileName_2475_; lean_object* v_pos_2476_; lean_object* v_endPos_2477_; uint8_t v_keepFullRange_2478_; uint8_t v_severity_2479_; uint8_t v_isSilent_2480_; lean_object* v_caption_2481_; lean_object* v_data_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; lean_object* v___x_2486_; 
v_fileName_2475_ = lean_ctor_get(v_toBaseMessage_2470_, 0);
lean_inc_ref(v_fileName_2475_);
v_pos_2476_ = lean_ctor_get(v_toBaseMessage_2470_, 1);
lean_inc_ref(v_pos_2476_);
v_endPos_2477_ = lean_ctor_get(v_toBaseMessage_2470_, 2);
lean_inc(v_endPos_2477_);
v_keepFullRange_2478_ = lean_ctor_get_uint8(v_toBaseMessage_2470_, sizeof(void*)*5);
v_severity_2479_ = lean_ctor_get_uint8(v_toBaseMessage_2470_, sizeof(void*)*5 + 1);
v_isSilent_2480_ = lean_ctor_get_uint8(v_toBaseMessage_2470_, sizeof(void*)*5 + 2);
v_caption_2481_ = lean_ctor_get(v_toBaseMessage_2470_, 3);
lean_inc_ref(v_caption_2481_);
v_data_2482_ = lean_ctor_get(v_toBaseMessage_2470_, 4);
lean_inc(v_data_2482_);
lean_dec_ref(v_toBaseMessage_2470_);
v___x_2483_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_2484_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2484_, 0, v_fileName_2475_);
if (v_isShared_2474_ == 0)
{
lean_ctor_set(v___x_2473_, 1, v___x_2484_);
lean_ctor_set(v___x_2473_, 0, v___x_2483_);
v___x_2486_ = v___x_2473_;
goto v_reusejp_2485_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v___x_2483_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v___x_2484_);
v___x_2486_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2485_;
}
v_reusejp_2485_:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; lean_object* v___x_2517_; uint8_t v___x_2518_; lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2487_ = lean_box(0);
v___x_2488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2486_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
v___x_2489_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_2490_ = l_Lean_instToJsonPosition_toJson(v_pos_2476_);
v___x_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2489_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
v___x_2492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2491_);
lean_ctor_set(v___x_2492_, 1, v___x_2487_);
v___x_2493_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_2494_ = l_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(v_endPos_2477_);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v___x_2493_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v___x_2496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2496_, 0, v___x_2495_);
lean_ctor_set(v___x_2496_, 1, v___x_2487_);
v___x_2497_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_2498_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2498_, 0, v_keepFullRange_2478_);
v___x_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2497_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2499_);
lean_ctor_set(v___x_2500_, 1, v___x_2487_);
v___x_2501_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_2502_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_2479_);
v___x_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2501_);
lean_ctor_set(v___x_2503_, 1, v___x_2502_);
v___x_2504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2504_, 0, v___x_2503_);
lean_ctor_set(v___x_2504_, 1, v___x_2487_);
v___x_2505_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_2506_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2506_, 0, v_isSilent_2480_);
v___x_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2507_, 0, v___x_2505_);
lean_ctor_set(v___x_2507_, 1, v___x_2506_);
v___x_2508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
lean_ctor_set(v___x_2508_, 1, v___x_2487_);
v___x_2509_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_2510_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_caption_2481_);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2509_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
v___x_2512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2512_, 0, v___x_2511_);
lean_ctor_set(v___x_2512_, 1, v___x_2487_);
v___x_2513_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_2514_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2514_, 0, v_data_2482_);
v___x_2515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2515_, 0, v___x_2513_);
lean_ctor_set(v___x_2515_, 1, v___x_2514_);
v___x_2516_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2516_, 0, v___x_2515_);
lean_ctor_set(v___x_2516_, 1, v___x_2487_);
v___x_2517_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_2518_ = 1;
v___x_2519_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_2471_, v___x_2518_);
v___x_2520_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2520_, 0, v___x_2519_);
v___x_2521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2521_, 0, v___x_2517_);
lean_ctor_set(v___x_2521_, 1, v___x_2520_);
v___x_2522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2522_, 0, v___x_2521_);
lean_ctor_set(v___x_2522_, 1, v___x_2487_);
v___x_2523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2523_, 0, v___x_2522_);
lean_ctor_set(v___x_2523_, 1, v___x_2487_);
v___x_2524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2516_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2512_);
lean_ctor_set(v___x_2525_, 1, v___x_2524_);
v___x_2526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2508_);
lean_ctor_set(v___x_2526_, 1, v___x_2525_);
v___x_2527_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2527_, 0, v___x_2504_);
lean_ctor_set(v___x_2527_, 1, v___x_2526_);
v___x_2528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2500_);
lean_ctor_set(v___x_2528_, 1, v___x_2527_);
v___x_2529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2496_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2492_);
lean_ctor_set(v___x_2530_, 1, v___x_2529_);
v___x_2531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2531_, 0, v___x_2488_);
lean_ctor_set(v___x_2531_, 1, v___x_2530_);
v___x_2532_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_2533_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(v___x_2531_, v___x_2532_);
v___x_2534_ = l_Lean_Json_mkObj(v___x_2533_);
lean_dec(v___x_2533_);
return v___x_2534_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(lean_object* v_j_2539_, lean_object* v_k_2540_){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; 
v___x_2541_ = l_Lean_Json_getObjValD(v_j_2539_, v_k_2540_);
v___x_2542_ = l_Lean_Json_getStr_x3f(v___x_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0___boxed(lean_object* v_j_2543_, lean_object* v_k_2544_){
_start:
{
lean_object* v_res_2545_; 
v_res_2545_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_j_2543_, v_k_2544_);
lean_dec_ref(v_k_2544_);
return v_res_2545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(lean_object* v_j_2546_, lean_object* v_k_2547_){
_start:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = l_Lean_Json_getObjValD(v_j_2546_, v_k_2547_);
v___x_2549_ = l_Lean_instFromJsonPosition_fromJson(v___x_2548_);
return v___x_2549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1___boxed(lean_object* v_j_2550_, lean_object* v_k_2551_){
_start:
{
lean_object* v_res_2552_; 
v_res_2552_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(v_j_2550_, v_k_2551_);
lean_dec_ref(v_k_2551_);
return v_res_2552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(lean_object* v_j_2553_, lean_object* v_k_2554_){
_start:
{
lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2555_ = l_Lean_Json_getObjValD(v_j_2553_, v_k_2554_);
v___x_2556_ = l_Lean_Json_getBool_x3f(v___x_2555_);
lean_dec(v___x_2555_);
return v___x_2556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3___boxed(lean_object* v_j_2557_, lean_object* v_k_2558_){
_start:
{
lean_object* v_res_2559_; 
v_res_2559_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_j_2557_, v_k_2558_);
lean_dec_ref(v_k_2558_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(lean_object* v_j_2560_, lean_object* v_k_2561_){
_start:
{
lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2562_ = l_Lean_Json_getObjValD(v_j_2560_, v_k_2561_);
v___x_2563_ = l_Lean_instFromJsonMessageSeverity_fromJson(v___x_2562_);
return v___x_2563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4___boxed(lean_object* v_j_2564_, lean_object* v_k_2565_){
_start:
{
lean_object* v_res_2566_; 
v_res_2566_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(v_j_2564_, v_k_2565_);
lean_dec_ref(v_k_2565_);
return v_res_2566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(lean_object* v_j_2567_, lean_object* v_k_2568_){
_start:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; 
v___x_2569_ = l_Lean_Json_getObjValD(v_j_2567_, v_k_2568_);
v___x_2570_ = l_Lean_Name_fromJson_x3f(v___x_2569_);
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5___boxed(lean_object* v_j_2571_, lean_object* v_k_2572_){
_start:
{
lean_object* v_res_2573_; 
v_res_2573_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(v_j_2571_, v_k_2572_);
lean_dec_ref(v_k_2572_);
return v_res_2573_;
}
}
LEAN_EXPORT lean_object* l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(lean_object* v_x_2576_){
_start:
{
if (lean_obj_tag(v_x_2576_) == 0)
{
lean_object* v___x_2577_; 
v___x_2577_ = ((lean_object*)(l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2___closed__0));
return v___x_2577_;
}
else
{
lean_object* v___x_2578_; 
v___x_2578_ = l_Lean_instFromJsonPosition_fromJson(v_x_2576_);
if (lean_obj_tag(v___x_2578_) == 0)
{
lean_object* v_a_2579_; lean_object* v___x_2581_; uint8_t v_isShared_2582_; uint8_t v_isSharedCheck_2586_; 
v_a_2579_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2586_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2586_ == 0)
{
v___x_2581_ = v___x_2578_;
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
else
{
lean_inc(v_a_2579_);
lean_dec(v___x_2578_);
v___x_2581_ = lean_box(0);
v_isShared_2582_ = v_isSharedCheck_2586_;
goto v_resetjp_2580_;
}
v_resetjp_2580_:
{
lean_object* v___x_2584_; 
if (v_isShared_2582_ == 0)
{
v___x_2584_ = v___x_2581_;
goto v_reusejp_2583_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_a_2579_);
v___x_2584_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2583_;
}
v_reusejp_2583_:
{
return v___x_2584_;
}
}
}
else
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2595_; 
v_a_2587_ = lean_ctor_get(v___x_2578_, 0);
v_isSharedCheck_2595_ = !lean_is_exclusive(v___x_2578_);
if (v_isSharedCheck_2595_ == 0)
{
v___x_2589_ = v___x_2578_;
v_isShared_2590_ = v_isSharedCheck_2595_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2578_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2595_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v___x_2591_; lean_object* v___x_2593_; 
v___x_2591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2591_, 0, v_a_2587_);
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v___x_2591_);
v___x_2593_ = v___x_2589_;
goto v_reusejp_2592_;
}
else
{
lean_object* v_reuseFailAlloc_2594_; 
v_reuseFailAlloc_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2594_, 0, v___x_2591_);
v___x_2593_ = v_reuseFailAlloc_2594_;
goto v_reusejp_2592_;
}
v_reusejp_2592_:
{
return v___x_2593_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(lean_object* v_j_2596_, lean_object* v_k_2597_){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; 
v___x_2598_ = l_Lean_Json_getObjValD(v_j_2596_, v_k_2597_);
v___x_2599_ = l_Option_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2_spec__2(v___x_2598_);
return v___x_2599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2___boxed(lean_object* v_j_2600_, lean_object* v_k_2601_){
_start:
{
lean_object* v_res_2602_; 
v_res_2602_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(v_j_2600_, v_k_2601_);
lean_dec_ref(v_k_2601_);
return v_res_2602_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__2(void){
_start:
{
uint8_t v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2607_ = 1;
v___x_2608_ = ((lean_object*)(l_Lean_instFromJsonSerialMessage_fromJson___closed__1));
v___x_2609_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2608_, v___x_2607_);
return v___x_2609_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3(void){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__4));
v___x_2611_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__2, &l_Lean_instFromJsonSerialMessage_fromJson___closed__2_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__2);
v___x_2612_ = lean_string_append(v___x_2611_, v___x_2610_);
return v___x_2612_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__4(void){
_start:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v___x_2613_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__7);
v___x_2614_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2615_ = lean_string_append(v___x_2614_, v___x_2613_);
return v___x_2615_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__5(void){
_start:
{
lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2616_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2617_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__4, &l_Lean_instFromJsonSerialMessage_fromJson___closed__4_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__4);
v___x_2618_ = lean_string_append(v___x_2617_, v___x_2616_);
return v___x_2618_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__6(void){
_start:
{
lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v___x_2619_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__14);
v___x_2620_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2621_ = lean_string_append(v___x_2620_, v___x_2619_);
return v___x_2621_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__7(void){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; 
v___x_2622_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2623_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__6, &l_Lean_instFromJsonSerialMessage_fromJson___closed__6_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__6);
v___x_2624_ = lean_string_append(v___x_2623_, v___x_2622_);
return v___x_2624_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__8(void){
_start:
{
lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; 
v___x_2625_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__18);
v___x_2626_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2627_ = lean_string_append(v___x_2626_, v___x_2625_);
return v___x_2627_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__9(void){
_start:
{
lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2628_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2629_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__8, &l_Lean_instFromJsonSerialMessage_fromJson___closed__8_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__8);
v___x_2630_ = lean_string_append(v___x_2629_, v___x_2628_);
return v___x_2630_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__10(void){
_start:
{
lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2631_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__23);
v___x_2632_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2633_ = lean_string_append(v___x_2632_, v___x_2631_);
return v___x_2633_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__11(void){
_start:
{
lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; 
v___x_2634_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2635_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__10, &l_Lean_instFromJsonSerialMessage_fromJson___closed__10_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__10);
v___x_2636_ = lean_string_append(v___x_2635_, v___x_2634_);
return v___x_2636_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__12(void){
_start:
{
lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; 
v___x_2637_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__27);
v___x_2638_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2639_ = lean_string_append(v___x_2638_, v___x_2637_);
return v___x_2639_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__13(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2641_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__12, &l_Lean_instFromJsonSerialMessage_fromJson___closed__12_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__12);
v___x_2642_ = lean_string_append(v___x_2641_, v___x_2640_);
return v___x_2642_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__14(void){
_start:
{
lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; 
v___x_2643_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__31);
v___x_2644_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2645_ = lean_string_append(v___x_2644_, v___x_2643_);
return v___x_2645_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__15(void){
_start:
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v___x_2646_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2647_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__14, &l_Lean_instFromJsonSerialMessage_fromJson___closed__14_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__14);
v___x_2648_ = lean_string_append(v___x_2647_, v___x_2646_);
return v___x_2648_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__16(void){
_start:
{
lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; 
v___x_2649_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__35);
v___x_2650_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2651_ = lean_string_append(v___x_2650_, v___x_2649_);
return v___x_2651_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__17(void){
_start:
{
lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; 
v___x_2652_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2653_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__16, &l_Lean_instFromJsonSerialMessage_fromJson___closed__16_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__16);
v___x_2654_ = lean_string_append(v___x_2653_, v___x_2652_);
return v___x_2654_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__18(void){
_start:
{
lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; 
v___x_2655_ = lean_obj_once(&l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39, &l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39_once, _init_l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__39);
v___x_2656_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2657_ = lean_string_append(v___x_2656_, v___x_2655_);
return v___x_2657_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__19(void){
_start:
{
lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; 
v___x_2658_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2659_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__18, &l_Lean_instFromJsonSerialMessage_fromJson___closed__18_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__18);
v___x_2660_ = lean_string_append(v___x_2659_, v___x_2658_);
return v___x_2660_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__21(void){
_start:
{
uint8_t v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; 
v___x_2663_ = 1;
v___x_2664_ = ((lean_object*)(l_Lean_instFromJsonSerialMessage_fromJson___closed__20));
v___x_2665_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_2664_, v___x_2663_);
return v___x_2665_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__22(void){
_start:
{
lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; 
v___x_2666_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__21, &l_Lean_instFromJsonSerialMessage_fromJson___closed__21_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__21);
v___x_2667_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__3, &l_Lean_instFromJsonSerialMessage_fromJson___closed__3_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__3);
v___x_2668_ = lean_string_append(v___x_2667_, v___x_2666_);
return v___x_2668_;
}
}
static lean_object* _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__23(void){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2669_ = ((lean_object*)(l_Lean_instFromJsonBaseMessage_fromJson___redArg___closed__9));
v___x_2670_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__22, &l_Lean_instFromJsonSerialMessage_fromJson___closed__22_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__22);
v___x_2671_ = lean_string_append(v___x_2670_, v___x_2669_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l_Lean_instFromJsonSerialMessage_fromJson(lean_object* v_json_2672_){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; 
v___x_2673_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
lean_inc(v_json_2672_);
v___x_2674_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2672_, v___x_2673_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2684_; 
lean_dec(v_json_2672_);
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2677_ = v___x_2674_;
v_isShared_2678_ = v_isSharedCheck_2684_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_a_2675_);
lean_dec(v___x_2674_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2684_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2682_; 
v___x_2679_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__5, &l_Lean_instFromJsonSerialMessage_fromJson___closed__5_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__5);
v___x_2680_ = lean_string_append(v___x_2679_, v_a_2675_);
lean_dec(v_a_2675_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2680_);
v___x_2682_ = v___x_2677_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v___x_2680_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
else
{
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2685_; lean_object* v___x_2687_; uint8_t v_isShared_2688_; uint8_t v_isSharedCheck_2692_; 
lean_dec(v_json_2672_);
v_a_2685_ = lean_ctor_get(v___x_2674_, 0);
v_isSharedCheck_2692_ = !lean_is_exclusive(v___x_2674_);
if (v_isSharedCheck_2692_ == 0)
{
v___x_2687_ = v___x_2674_;
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
else
{
lean_inc(v_a_2685_);
lean_dec(v___x_2674_);
v___x_2687_ = lean_box(0);
v_isShared_2688_ = v_isSharedCheck_2692_;
goto v_resetjp_2686_;
}
v_resetjp_2686_:
{
lean_object* v___x_2690_; 
if (v_isShared_2688_ == 0)
{
lean_ctor_set_tag(v___x_2687_, 0);
v___x_2690_ = v___x_2687_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v_a_2685_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
}
else
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; 
v_a_2693_ = lean_ctor_get(v___x_2674_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2674_, 1);
v___x_2694_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
lean_inc(v_json_2672_);
v___x_2695_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__1(v_json_2672_, v___x_2694_);
if (lean_obj_tag(v___x_2695_) == 0)
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2705_; 
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2696_ = lean_ctor_get(v___x_2695_, 0);
v_isSharedCheck_2705_ = !lean_is_exclusive(v___x_2695_);
if (v_isSharedCheck_2705_ == 0)
{
v___x_2698_ = v___x_2695_;
v_isShared_2699_ = v_isSharedCheck_2705_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2695_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2705_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2703_; 
v___x_2700_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__7, &l_Lean_instFromJsonSerialMessage_fromJson___closed__7_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__7);
v___x_2701_ = lean_string_append(v___x_2700_, v_a_2696_);
lean_dec(v_a_2696_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 0, v___x_2701_);
v___x_2703_ = v___x_2698_;
goto v_reusejp_2702_;
}
else
{
lean_object* v_reuseFailAlloc_2704_; 
v_reuseFailAlloc_2704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2704_, 0, v___x_2701_);
v___x_2703_ = v_reuseFailAlloc_2704_;
goto v_reusejp_2702_;
}
v_reusejp_2702_:
{
return v___x_2703_;
}
}
}
else
{
if (lean_obj_tag(v___x_2695_) == 0)
{
lean_object* v_a_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2713_; 
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2706_ = lean_ctor_get(v___x_2695_, 0);
v_isSharedCheck_2713_ = !lean_is_exclusive(v___x_2695_);
if (v_isSharedCheck_2713_ == 0)
{
v___x_2708_ = v___x_2695_;
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_a_2706_);
lean_dec(v___x_2695_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2713_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v___x_2711_; 
if (v_isShared_2709_ == 0)
{
lean_ctor_set_tag(v___x_2708_, 0);
v___x_2711_ = v___x_2708_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v_a_2706_);
v___x_2711_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
return v___x_2711_;
}
}
}
else
{
lean_object* v_a_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
v_a_2714_ = lean_ctor_get(v___x_2695_, 0);
lean_inc(v_a_2714_);
lean_dec_ref_known(v___x_2695_, 1);
v___x_2715_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
lean_inc(v_json_2672_);
v___x_2716_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__2(v_json_2672_, v___x_2715_);
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2726_; 
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2717_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2726_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2719_ = v___x_2716_;
v_isShared_2720_ = v_isSharedCheck_2726_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2716_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2726_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2724_; 
v___x_2721_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__9, &l_Lean_instFromJsonSerialMessage_fromJson___closed__9_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__9);
v___x_2722_ = lean_string_append(v___x_2721_, v_a_2717_);
lean_dec(v_a_2717_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 0, v___x_2722_);
v___x_2724_ = v___x_2719_;
goto v_reusejp_2723_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v___x_2722_);
v___x_2724_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2723_;
}
v_reusejp_2723_:
{
return v___x_2724_;
}
}
}
else
{
if (lean_obj_tag(v___x_2716_) == 0)
{
lean_object* v_a_2727_; lean_object* v___x_2729_; uint8_t v_isShared_2730_; uint8_t v_isSharedCheck_2734_; 
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2727_ = lean_ctor_get(v___x_2716_, 0);
v_isSharedCheck_2734_ = !lean_is_exclusive(v___x_2716_);
if (v_isSharedCheck_2734_ == 0)
{
v___x_2729_ = v___x_2716_;
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
else
{
lean_inc(v_a_2727_);
lean_dec(v___x_2716_);
v___x_2729_ = lean_box(0);
v_isShared_2730_ = v_isSharedCheck_2734_;
goto v_resetjp_2728_;
}
v_resetjp_2728_:
{
lean_object* v___x_2732_; 
if (v_isShared_2730_ == 0)
{
lean_ctor_set_tag(v___x_2729_, 0);
v___x_2732_ = v___x_2729_;
goto v_reusejp_2731_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v_a_2727_);
v___x_2732_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2731_;
}
v_reusejp_2731_:
{
return v___x_2732_;
}
}
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2736_; lean_object* v___x_2737_; 
v_a_2735_ = lean_ctor_get(v___x_2716_, 0);
lean_inc(v_a_2735_);
lean_dec_ref_known(v___x_2716_, 1);
v___x_2736_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
lean_inc(v_json_2672_);
v___x_2737_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_json_2672_, v___x_2736_);
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2738_; lean_object* v___x_2740_; uint8_t v_isShared_2741_; uint8_t v_isSharedCheck_2747_; 
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2738_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2747_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2747_ == 0)
{
v___x_2740_ = v___x_2737_;
v_isShared_2741_ = v_isSharedCheck_2747_;
goto v_resetjp_2739_;
}
else
{
lean_inc(v_a_2738_);
lean_dec(v___x_2737_);
v___x_2740_ = lean_box(0);
v_isShared_2741_ = v_isSharedCheck_2747_;
goto v_resetjp_2739_;
}
v_resetjp_2739_:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2745_; 
v___x_2742_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__11, &l_Lean_instFromJsonSerialMessage_fromJson___closed__11_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__11);
v___x_2743_ = lean_string_append(v___x_2742_, v_a_2738_);
lean_dec(v_a_2738_);
if (v_isShared_2741_ == 0)
{
lean_ctor_set(v___x_2740_, 0, v___x_2743_);
v___x_2745_ = v___x_2740_;
goto v_reusejp_2744_;
}
else
{
lean_object* v_reuseFailAlloc_2746_; 
v_reuseFailAlloc_2746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2746_, 0, v___x_2743_);
v___x_2745_ = v_reuseFailAlloc_2746_;
goto v_reusejp_2744_;
}
v_reusejp_2744_:
{
return v___x_2745_;
}
}
}
else
{
if (lean_obj_tag(v___x_2737_) == 0)
{
lean_object* v_a_2748_; lean_object* v___x_2750_; uint8_t v_isShared_2751_; uint8_t v_isSharedCheck_2755_; 
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2748_ = lean_ctor_get(v___x_2737_, 0);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2737_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2750_ = v___x_2737_;
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
else
{
lean_inc(v_a_2748_);
lean_dec(v___x_2737_);
v___x_2750_ = lean_box(0);
v_isShared_2751_ = v_isSharedCheck_2755_;
goto v_resetjp_2749_;
}
v_resetjp_2749_:
{
lean_object* v___x_2753_; 
if (v_isShared_2751_ == 0)
{
lean_ctor_set_tag(v___x_2750_, 0);
v___x_2753_ = v___x_2750_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_a_2748_);
v___x_2753_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
return v___x_2753_;
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; 
v_a_2756_ = lean_ctor_get(v___x_2737_, 0);
lean_inc(v_a_2756_);
lean_dec_ref_known(v___x_2737_, 1);
v___x_2757_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
lean_inc(v_json_2672_);
v___x_2758_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__4(v_json_2672_, v___x_2757_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v_a_2759_; lean_object* v___x_2761_; uint8_t v_isShared_2762_; uint8_t v_isSharedCheck_2768_; 
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2759_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2768_ == 0)
{
v___x_2761_ = v___x_2758_;
v_isShared_2762_ = v_isSharedCheck_2768_;
goto v_resetjp_2760_;
}
else
{
lean_inc(v_a_2759_);
lean_dec(v___x_2758_);
v___x_2761_ = lean_box(0);
v_isShared_2762_ = v_isSharedCheck_2768_;
goto v_resetjp_2760_;
}
v_resetjp_2760_:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2763_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__13, &l_Lean_instFromJsonSerialMessage_fromJson___closed__13_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__13);
v___x_2764_ = lean_string_append(v___x_2763_, v_a_2759_);
lean_dec(v_a_2759_);
if (v_isShared_2762_ == 0)
{
lean_ctor_set(v___x_2761_, 0, v___x_2764_);
v___x_2766_ = v___x_2761_;
goto v_reusejp_2765_;
}
else
{
lean_object* v_reuseFailAlloc_2767_; 
v_reuseFailAlloc_2767_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2767_, 0, v___x_2764_);
v___x_2766_ = v_reuseFailAlloc_2767_;
goto v_reusejp_2765_;
}
v_reusejp_2765_:
{
return v___x_2766_;
}
}
}
else
{
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v_a_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2776_; 
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2769_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2776_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2776_ == 0)
{
v___x_2771_ = v___x_2758_;
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_a_2769_);
lean_dec(v___x_2758_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2776_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2774_; 
if (v_isShared_2772_ == 0)
{
lean_ctor_set_tag(v___x_2771_, 0);
v___x_2774_ = v___x_2771_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2769_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
return v___x_2774_;
}
}
}
else
{
lean_object* v_a_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_a_2777_ = lean_ctor_get(v___x_2758_, 0);
lean_inc(v_a_2777_);
lean_dec_ref_known(v___x_2758_, 1);
v___x_2778_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
lean_inc(v_json_2672_);
v___x_2779_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__3(v_json_2672_, v___x_2778_);
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2780_; lean_object* v___x_2782_; uint8_t v_isShared_2783_; uint8_t v_isSharedCheck_2789_; 
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2780_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2789_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2782_ = v___x_2779_;
v_isShared_2783_ = v_isSharedCheck_2789_;
goto v_resetjp_2781_;
}
else
{
lean_inc(v_a_2780_);
lean_dec(v___x_2779_);
v___x_2782_ = lean_box(0);
v_isShared_2783_ = v_isSharedCheck_2789_;
goto v_resetjp_2781_;
}
v_resetjp_2781_:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
v___x_2784_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__15, &l_Lean_instFromJsonSerialMessage_fromJson___closed__15_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__15);
v___x_2785_ = lean_string_append(v___x_2784_, v_a_2780_);
lean_dec(v_a_2780_);
if (v_isShared_2783_ == 0)
{
lean_ctor_set(v___x_2782_, 0, v___x_2785_);
v___x_2787_ = v___x_2782_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2785_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
else
{
if (lean_obj_tag(v___x_2779_) == 0)
{
lean_object* v_a_2790_; lean_object* v___x_2792_; uint8_t v_isShared_2793_; uint8_t v_isSharedCheck_2797_; 
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2790_ = lean_ctor_get(v___x_2779_, 0);
v_isSharedCheck_2797_ = !lean_is_exclusive(v___x_2779_);
if (v_isSharedCheck_2797_ == 0)
{
v___x_2792_ = v___x_2779_;
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
else
{
lean_inc(v_a_2790_);
lean_dec(v___x_2779_);
v___x_2792_ = lean_box(0);
v_isShared_2793_ = v_isSharedCheck_2797_;
goto v_resetjp_2791_;
}
v_resetjp_2791_:
{
lean_object* v___x_2795_; 
if (v_isShared_2793_ == 0)
{
lean_ctor_set_tag(v___x_2792_, 0);
v___x_2795_ = v___x_2792_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2796_; 
v_reuseFailAlloc_2796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2796_, 0, v_a_2790_);
v___x_2795_ = v_reuseFailAlloc_2796_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
return v___x_2795_;
}
}
}
else
{
lean_object* v_a_2798_; lean_object* v___x_2799_; lean_object* v___x_2800_; 
v_a_2798_ = lean_ctor_get(v___x_2779_, 0);
lean_inc(v_a_2798_);
lean_dec_ref_known(v___x_2779_, 1);
v___x_2799_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
lean_inc(v_json_2672_);
v___x_2800_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2672_, v___x_2799_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2810_; 
lean_dec(v_a_2798_);
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2801_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2803_ = v___x_2800_;
v_isShared_2804_ = v_isSharedCheck_2810_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2800_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2810_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2808_; 
v___x_2805_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__17, &l_Lean_instFromJsonSerialMessage_fromJson___closed__17_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__17);
v___x_2806_ = lean_string_append(v___x_2805_, v_a_2801_);
lean_dec(v_a_2801_);
if (v_isShared_2804_ == 0)
{
lean_ctor_set(v___x_2803_, 0, v___x_2806_);
v___x_2808_ = v___x_2803_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v___x_2806_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
else
{
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v_a_2811_; lean_object* v___x_2813_; uint8_t v_isShared_2814_; uint8_t v_isSharedCheck_2818_; 
lean_dec(v_a_2798_);
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2811_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2813_ = v___x_2800_;
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
else
{
lean_inc(v_a_2811_);
lean_dec(v___x_2800_);
v___x_2813_ = lean_box(0);
v_isShared_2814_ = v_isSharedCheck_2818_;
goto v_resetjp_2812_;
}
v_resetjp_2812_:
{
lean_object* v___x_2816_; 
if (v_isShared_2814_ == 0)
{
lean_ctor_set_tag(v___x_2813_, 0);
v___x_2816_ = v___x_2813_;
goto v_reusejp_2815_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v_a_2811_);
v___x_2816_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2815_;
}
v_reusejp_2815_:
{
return v___x_2816_;
}
}
}
else
{
lean_object* v_a_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; 
v_a_2819_ = lean_ctor_get(v___x_2800_, 0);
lean_inc(v_a_2819_);
lean_dec_ref_known(v___x_2800_, 1);
v___x_2820_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
lean_inc(v_json_2672_);
v___x_2821_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__0(v_json_2672_, v___x_2820_);
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2831_; 
lean_dec(v_a_2819_);
lean_dec(v_a_2798_);
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2822_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2824_ = v___x_2821_;
v_isShared_2825_ = v_isSharedCheck_2831_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_a_2822_);
lean_dec(v___x_2821_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2831_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2829_; 
v___x_2826_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__19, &l_Lean_instFromJsonSerialMessage_fromJson___closed__19_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__19);
v___x_2827_ = lean_string_append(v___x_2826_, v_a_2822_);
lean_dec(v_a_2822_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 0, v___x_2827_);
v___x_2829_ = v___x_2824_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v___x_2827_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
else
{
if (lean_obj_tag(v___x_2821_) == 0)
{
lean_object* v_a_2832_; lean_object* v___x_2834_; uint8_t v_isShared_2835_; uint8_t v_isSharedCheck_2839_; 
lean_dec(v_a_2819_);
lean_dec(v_a_2798_);
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
lean_dec(v_json_2672_);
v_a_2832_ = lean_ctor_get(v___x_2821_, 0);
v_isSharedCheck_2839_ = !lean_is_exclusive(v___x_2821_);
if (v_isSharedCheck_2839_ == 0)
{
v___x_2834_ = v___x_2821_;
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
else
{
lean_inc(v_a_2832_);
lean_dec(v___x_2821_);
v___x_2834_ = lean_box(0);
v_isShared_2835_ = v_isSharedCheck_2839_;
goto v_resetjp_2833_;
}
v_resetjp_2833_:
{
lean_object* v___x_2837_; 
if (v_isShared_2835_ == 0)
{
lean_ctor_set_tag(v___x_2834_, 0);
v___x_2837_ = v___x_2834_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2838_; 
v_reuseFailAlloc_2838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2838_, 0, v_a_2832_);
v___x_2837_ = v_reuseFailAlloc_2838_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
return v___x_2837_;
}
}
}
else
{
lean_object* v_a_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v_a_2840_ = lean_ctor_get(v___x_2821_, 0);
lean_inc(v_a_2840_);
lean_dec_ref_known(v___x_2821_, 1);
v___x_2841_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_2842_ = l_Lean_Json_getObjValAs_x3f___at___00Lean_instFromJsonSerialMessage_fromJson_spec__5(v_json_2672_, v___x_2841_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2852_; 
lean_dec(v_a_2840_);
lean_dec(v_a_2819_);
lean_dec(v_a_2798_);
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2852_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2852_ == 0)
{
v___x_2845_ = v___x_2842_;
v_isShared_2846_ = v_isSharedCheck_2852_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2842_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2852_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2850_; 
v___x_2847_ = lean_obj_once(&l_Lean_instFromJsonSerialMessage_fromJson___closed__23, &l_Lean_instFromJsonSerialMessage_fromJson___closed__23_once, _init_l_Lean_instFromJsonSerialMessage_fromJson___closed__23);
v___x_2848_ = lean_string_append(v___x_2847_, v_a_2843_);
lean_dec(v_a_2843_);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v___x_2848_);
v___x_2850_ = v___x_2845_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2851_; 
v_reuseFailAlloc_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2851_, 0, v___x_2848_);
v___x_2850_ = v_reuseFailAlloc_2851_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
return v___x_2850_;
}
}
}
else
{
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2860_; 
lean_dec(v_a_2840_);
lean_dec(v_a_2819_);
lean_dec(v_a_2798_);
lean_dec(v_a_2777_);
lean_dec(v_a_2756_);
lean_dec(v_a_2735_);
lean_dec(v_a_2714_);
lean_dec(v_a_2693_);
v_a_2853_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2860_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2860_ == 0)
{
v___x_2855_ = v___x_2842_;
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2842_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2860_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
lean_object* v___x_2858_; 
if (v_isShared_2856_ == 0)
{
lean_ctor_set_tag(v___x_2855_, 0);
v___x_2858_ = v___x_2855_;
goto v_reusejp_2857_;
}
else
{
lean_object* v_reuseFailAlloc_2859_; 
v_reuseFailAlloc_2859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2859_, 0, v_a_2853_);
v___x_2858_ = v_reuseFailAlloc_2859_;
goto v_reusejp_2857_;
}
v_reusejp_2857_:
{
return v___x_2858_;
}
}
}
else
{
lean_object* v_a_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2873_; 
v_a_2861_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2873_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2873_ == 0)
{
v___x_2863_ = v___x_2842_;
v_isShared_2864_ = v_isSharedCheck_2873_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_a_2861_);
lean_dec(v___x_2842_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2873_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2865_; uint8_t v___x_2866_; uint8_t v___x_2867_; uint8_t v___x_2868_; lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2865_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_2865_, 0, v_a_2693_);
lean_ctor_set(v___x_2865_, 1, v_a_2714_);
lean_ctor_set(v___x_2865_, 2, v_a_2735_);
lean_ctor_set(v___x_2865_, 3, v_a_2819_);
lean_ctor_set(v___x_2865_, 4, v_a_2840_);
v___x_2866_ = lean_unbox(v_a_2756_);
lean_dec(v_a_2756_);
lean_ctor_set_uint8(v___x_2865_, sizeof(void*)*5, v___x_2866_);
v___x_2867_ = lean_unbox(v_a_2777_);
lean_dec(v_a_2777_);
lean_ctor_set_uint8(v___x_2865_, sizeof(void*)*5 + 1, v___x_2867_);
v___x_2868_ = lean_unbox(v_a_2798_);
lean_dec(v_a_2798_);
lean_ctor_set_uint8(v___x_2865_, sizeof(void*)*5 + 2, v___x_2868_);
v___x_2869_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2869_, 0, v___x_2865_);
lean_ctor_set(v___x_2869_, 1, v_a_2861_);
if (v_isShared_2864_ == 0)
{
lean_ctor_set(v___x_2863_, 0, v___x_2869_);
v___x_2871_ = v___x_2863_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_kindOfErrorName(lean_object* v_errorName_2878_){
_start:
{
lean_object* v___x_2879_; lean_object* v___x_2880_; 
v___x_2879_ = ((lean_object*)(l_Lean_errorNameSuffix___closed__0));
v___x_2880_ = l_Lean_Name_str___override(v_errorName_2878_, v___x_2879_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_tagWithErrorName(lean_object* v_msg_2881_, lean_object* v_name_2882_){
_start:
{
lean_object* v___x_2883_; lean_object* v___x_2884_; 
v___x_2883_ = l_Lean_kindOfErrorName(v_name_2882_);
v___x_2884_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2884_, 0, v___x_2883_);
lean_ctor_set(v___x_2884_, 1, v_msg_2881_);
return v___x_2884_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(lean_object* v_a_2886_){
_start:
{
switch(lean_obj_tag(v_a_2886_))
{
case 0:
{
return v_a_2886_;
}
case 1:
{
lean_object* v_pre_2887_; lean_object* v_str_2888_; lean_object* v_p_x27_2889_; uint8_t v___y_2891_; uint8_t v___x_2894_; 
v_pre_2887_ = lean_ctor_get(v_a_2886_, 0);
lean_inc(v_pre_2887_);
v_str_2888_ = lean_ctor_get(v_a_2886_, 1);
lean_inc_ref(v_str_2888_);
lean_dec_ref_known(v_a_2886_, 2);
v_p_x27_2889_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_pre_2887_);
v___x_2894_ = l_Lean_Name_isAnonymous(v_p_x27_2889_);
if (v___x_2894_ == 0)
{
v___y_2891_ = v___x_2894_;
goto v___jp_2890_;
}
else
{
lean_object* v___x_2895_; uint8_t v___x_2896_; 
v___x_2895_ = ((lean_object*)(l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix___closed__0));
v___x_2896_ = lean_string_dec_eq(v_str_2888_, v___x_2895_);
v___y_2891_ = v___x_2896_;
goto v___jp_2890_;
}
v___jp_2890_:
{
if (v___y_2891_ == 0)
{
lean_object* v___x_2892_; 
v___x_2892_ = l_Lean_Name_str___override(v_p_x27_2889_, v_str_2888_);
return v___x_2892_;
}
else
{
lean_object* v___x_2893_; 
lean_dec(v_p_x27_2889_);
lean_dec_ref(v_str_2888_);
v___x_2893_ = lean_box(0);
return v___x_2893_;
}
}
}
default: 
{
lean_object* v_pre_2897_; lean_object* v_i_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; 
v_pre_2897_ = lean_ctor_get(v_a_2886_, 0);
lean_inc(v_pre_2897_);
v_i_2898_ = lean_ctor_get(v_a_2886_, 1);
lean_inc(v_i_2898_);
lean_dec_ref_known(v_a_2886_, 2);
v___x_2899_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_pre_2897_);
v___x_2900_ = l_Lean_Name_num___override(v___x_2899_, v_i_2898_);
return v___x_2900_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_stripNestedTags(lean_object* v_x_2901_){
_start:
{
switch(lean_obj_tag(v_x_2901_))
{
case 3:
{
lean_object* v_a_2902_; lean_object* v_a_2903_; lean_object* v___x_2905_; uint8_t v_isShared_2906_; uint8_t v_isSharedCheck_2911_; 
v_a_2902_ = lean_ctor_get(v_x_2901_, 0);
v_a_2903_ = lean_ctor_get(v_x_2901_, 1);
v_isSharedCheck_2911_ = !lean_is_exclusive(v_x_2901_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2905_ = v_x_2901_;
v_isShared_2906_ = v_isSharedCheck_2911_;
goto v_resetjp_2904_;
}
else
{
lean_inc(v_a_2903_);
lean_inc(v_a_2902_);
lean_dec(v_x_2901_);
v___x_2905_ = lean_box(0);
v_isShared_2906_ = v_isSharedCheck_2911_;
goto v_resetjp_2904_;
}
v_resetjp_2904_:
{
lean_object* v___x_2907_; lean_object* v___x_2909_; 
v___x_2907_ = l_Lean_MessageData_stripNestedTags(v_a_2903_);
if (v_isShared_2906_ == 0)
{
lean_ctor_set(v___x_2905_, 1, v___x_2907_);
v___x_2909_ = v___x_2905_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2902_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v___x_2907_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
case 4:
{
lean_object* v_a_2912_; lean_object* v_a_2913_; lean_object* v___x_2915_; uint8_t v_isShared_2916_; uint8_t v_isSharedCheck_2921_; 
v_a_2912_ = lean_ctor_get(v_x_2901_, 0);
v_a_2913_ = lean_ctor_get(v_x_2901_, 1);
v_isSharedCheck_2921_ = !lean_is_exclusive(v_x_2901_);
if (v_isSharedCheck_2921_ == 0)
{
v___x_2915_ = v_x_2901_;
v_isShared_2916_ = v_isSharedCheck_2921_;
goto v_resetjp_2914_;
}
else
{
lean_inc(v_a_2913_);
lean_inc(v_a_2912_);
lean_dec(v_x_2901_);
v___x_2915_ = lean_box(0);
v_isShared_2916_ = v_isSharedCheck_2921_;
goto v_resetjp_2914_;
}
v_resetjp_2914_:
{
lean_object* v___x_2917_; lean_object* v___x_2919_; 
v___x_2917_ = l_Lean_MessageData_stripNestedTags(v_a_2913_);
if (v_isShared_2916_ == 0)
{
lean_ctor_set(v___x_2915_, 1, v___x_2917_);
v___x_2919_ = v___x_2915_;
goto v_reusejp_2918_;
}
else
{
lean_object* v_reuseFailAlloc_2920_; 
v_reuseFailAlloc_2920_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2920_, 0, v_a_2912_);
lean_ctor_set(v_reuseFailAlloc_2920_, 1, v___x_2917_);
v___x_2919_ = v_reuseFailAlloc_2920_;
goto v_reusejp_2918_;
}
v_reusejp_2918_:
{
return v___x_2919_;
}
}
}
case 8:
{
lean_object* v_a_2922_; lean_object* v_a_2923_; lean_object* v___x_2925_; uint8_t v_isShared_2926_; uint8_t v_isSharedCheck_2931_; 
v_a_2922_ = lean_ctor_get(v_x_2901_, 0);
v_a_2923_ = lean_ctor_get(v_x_2901_, 1);
v_isSharedCheck_2931_ = !lean_is_exclusive(v_x_2901_);
if (v_isSharedCheck_2931_ == 0)
{
v___x_2925_ = v_x_2901_;
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
else
{
lean_inc(v_a_2923_);
lean_inc(v_a_2922_);
lean_dec(v_x_2901_);
v___x_2925_ = lean_box(0);
v_isShared_2926_ = v_isSharedCheck_2931_;
goto v_resetjp_2924_;
}
v_resetjp_2924_:
{
lean_object* v___x_2927_; lean_object* v___x_2929_; 
v___x_2927_ = l___private_Lean_Message_0__Lean_MessageData_stripNestedTags_stripNestedNamePrefix(v_a_2922_);
if (v_isShared_2926_ == 0)
{
lean_ctor_set(v___x_2925_, 0, v___x_2927_);
v___x_2929_ = v___x_2925_;
goto v_reusejp_2928_;
}
else
{
lean_object* v_reuseFailAlloc_2930_; 
v_reuseFailAlloc_2930_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2930_, 0, v___x_2927_);
lean_ctor_set(v_reuseFailAlloc_2930_, 1, v_a_2923_);
v___x_2929_ = v_reuseFailAlloc_2930_;
goto v_reusejp_2928_;
}
v_reusejp_2928_:
{
return v___x_2929_;
}
}
}
case 11:
{
lean_object* v_a_2932_; lean_object* v_a_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_2941_; 
v_a_2932_ = lean_ctor_get(v_x_2901_, 0);
v_a_2933_ = lean_ctor_get(v_x_2901_, 1);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_x_2901_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2935_ = v_x_2901_;
v_isShared_2936_ = v_isSharedCheck_2941_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_a_2933_);
lean_inc(v_a_2932_);
lean_dec(v_x_2901_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_2941_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
lean_object* v___x_2937_; lean_object* v___x_2939_; 
v___x_2937_ = l_Lean_MessageData_stripNestedTags(v_a_2933_);
if (v_isShared_2936_ == 0)
{
lean_ctor_set(v___x_2935_, 1, v___x_2937_);
v___x_2939_ = v___x_2935_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(11, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2932_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v___x_2937_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
default: 
{
return v_x_2901_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f(lean_object* v_x_2942_){
_start:
{
if (lean_obj_tag(v_x_2942_) == 1)
{
lean_object* v_pre_2943_; lean_object* v_str_2944_; lean_object* v___x_2945_; uint8_t v___x_2946_; 
v_pre_2943_ = lean_ctor_get(v_x_2942_, 0);
v_str_2944_ = lean_ctor_get(v_x_2942_, 1);
v___x_2945_ = ((lean_object*)(l_Lean_errorNameSuffix___closed__0));
v___x_2946_ = lean_string_dec_eq(v_str_2944_, v___x_2945_);
if (v___x_2946_ == 0)
{
lean_object* v___x_2947_; 
v___x_2947_ = lean_box(0);
return v___x_2947_;
}
else
{
lean_object* v___x_2948_; 
lean_inc(v_pre_2943_);
v___x_2948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2948_, 0, v_pre_2943_);
return v___x_2948_;
}
}
else
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_box(0);
return v___x_2949_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_errorNameOfKind_x3f___boxed(lean_object* v_x_2950_){
_start:
{
lean_object* v_res_2951_; 
v_res_2951_ = l_Lean_errorNameOfKind_x3f(v_x_2950_);
lean_dec(v_x_2950_);
return v_res_2951_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f(lean_object* v_msg_2952_){
_start:
{
lean_object* v___x_2953_; lean_object* v___x_2954_; 
v___x_2953_ = l_Lean_MessageData_kind(v_msg_2952_);
v___x_2954_ = l_Lean_errorNameOfKind_x3f(v___x_2953_);
lean_dec(v___x_2953_);
return v___x_2954_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_errorName_x3f___boxed(lean_object* v_msg_2955_){
_start:
{
lean_object* v_res_2956_; 
v_res_2956_ = l_Lean_MessageData_errorName_x3f(v_msg_2955_);
lean_dec_ref(v_msg_2955_);
return v_res_2956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f(lean_object* v_msg_2957_){
_start:
{
lean_object* v_data_2958_; lean_object* v___x_2959_; 
v_data_2958_ = lean_ctor_get(v_msg_2957_, 4);
v___x_2959_ = l_Lean_MessageData_errorName_x3f(v_data_2958_);
return v___x_2959_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_errorName_x3f___boxed(lean_object* v_msg_2960_){
_start:
{
lean_object* v_res_2961_; 
v_res_2961_ = l_Lean_Message_errorName_x3f(v_msg_2960_);
lean_dec_ref(v_msg_2960_);
return v_res_2961_;
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toMessage(lean_object* v_msg_2962_){
_start:
{
lean_object* v_toBaseMessage_2963_; lean_object* v_fileName_2964_; lean_object* v_pos_2965_; lean_object* v_endPos_2966_; uint8_t v_keepFullRange_2967_; uint8_t v_severity_2968_; uint8_t v_isSilent_2969_; lean_object* v_caption_2970_; lean_object* v_data_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2980_; 
v_toBaseMessage_2963_ = lean_ctor_get(v_msg_2962_, 0);
lean_inc_ref(v_toBaseMessage_2963_);
lean_dec_ref(v_msg_2962_);
v_fileName_2964_ = lean_ctor_get(v_toBaseMessage_2963_, 0);
v_pos_2965_ = lean_ctor_get(v_toBaseMessage_2963_, 1);
v_endPos_2966_ = lean_ctor_get(v_toBaseMessage_2963_, 2);
v_keepFullRange_2967_ = lean_ctor_get_uint8(v_toBaseMessage_2963_, sizeof(void*)*5);
v_severity_2968_ = lean_ctor_get_uint8(v_toBaseMessage_2963_, sizeof(void*)*5 + 1);
v_isSilent_2969_ = lean_ctor_get_uint8(v_toBaseMessage_2963_, sizeof(void*)*5 + 2);
v_caption_2970_ = lean_ctor_get(v_toBaseMessage_2963_, 3);
v_data_2971_ = lean_ctor_get(v_toBaseMessage_2963_, 4);
v_isSharedCheck_2980_ = !lean_is_exclusive(v_toBaseMessage_2963_);
if (v_isSharedCheck_2980_ == 0)
{
v___x_2973_ = v_toBaseMessage_2963_;
v_isShared_2974_ = v_isSharedCheck_2980_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_data_2971_);
lean_inc(v_caption_2970_);
lean_inc(v_endPos_2966_);
lean_inc(v_pos_2965_);
lean_inc(v_fileName_2964_);
lean_dec(v_toBaseMessage_2963_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2980_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
v___x_2975_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2975_, 0, v_data_2971_);
v___x_2976_ = l_Lean_MessageData_ofFormat(v___x_2975_);
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 4, v___x_2976_);
v___x_2978_ = v___x_2973_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2979_; 
v_reuseFailAlloc_2979_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_2979_, 0, v_fileName_2964_);
lean_ctor_set(v_reuseFailAlloc_2979_, 1, v_pos_2965_);
lean_ctor_set(v_reuseFailAlloc_2979_, 2, v_endPos_2966_);
lean_ctor_set(v_reuseFailAlloc_2979_, 3, v_caption_2970_);
lean_ctor_set(v_reuseFailAlloc_2979_, 4, v___x_2976_);
lean_ctor_set_uint8(v_reuseFailAlloc_2979_, sizeof(void*)*5, v_keepFullRange_2967_);
lean_ctor_set_uint8(v_reuseFailAlloc_2979_, sizeof(void*)*5 + 1, v_severity_2968_);
lean_ctor_set_uint8(v_reuseFailAlloc_2979_, sizeof(void*)*5 + 2, v_isSilent_2969_);
v___x_2978_ = v_reuseFailAlloc_2979_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
return v___x_2978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString(lean_object* v_msg_2986_, uint8_t v_includeEndPos_2987_){
_start:
{
lean_object* v___y_2989_; lean_object* v___y_2993_; uint8_t v___y_2994_; uint32_t v___y_2995_; lean_object* v_str_2999_; lean_object* v_toBaseMessage_3011_; lean_object* v_kind_3012_; lean_object* v_fileName_3013_; lean_object* v_pos_3014_; lean_object* v_endPos_3015_; uint8_t v_severity_3016_; lean_object* v_caption_3017_; lean_object* v_data_3018_; lean_object* v___y_3020_; lean_object* v_str_3021_; lean_object* v___y_3029_; 
v_toBaseMessage_3011_ = lean_ctor_get(v_msg_2986_, 0);
lean_inc_ref(v_toBaseMessage_3011_);
v_kind_3012_ = lean_ctor_get(v_msg_2986_, 1);
lean_inc(v_kind_3012_);
lean_dec_ref(v_msg_2986_);
v_fileName_3013_ = lean_ctor_get(v_toBaseMessage_3011_, 0);
lean_inc_ref(v_fileName_3013_);
v_pos_3014_ = lean_ctor_get(v_toBaseMessage_3011_, 1);
lean_inc_ref(v_pos_3014_);
v_endPos_3015_ = lean_ctor_get(v_toBaseMessage_3011_, 2);
lean_inc(v_endPos_3015_);
v_severity_3016_ = lean_ctor_get_uint8(v_toBaseMessage_3011_, sizeof(void*)*5 + 1);
v_caption_3017_ = lean_ctor_get(v_toBaseMessage_3011_, 3);
lean_inc_ref(v_caption_3017_);
v_data_3018_ = lean_ctor_get(v_toBaseMessage_3011_, 4);
lean_inc(v_data_3018_);
lean_dec_ref(v_toBaseMessage_3011_);
if (v_includeEndPos_2987_ == 0)
{
lean_object* v___x_3035_; 
lean_dec(v_endPos_3015_);
v___x_3035_ = lean_box(0);
v___y_3029_ = v___x_3035_;
goto v___jp_3028_;
}
else
{
v___y_3029_ = v_endPos_3015_;
goto v___jp_3028_;
}
v___jp_2988_:
{
lean_object* v___x_2990_; lean_object* v_str_2991_; 
v___x_2990_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__1));
v_str_2991_ = lean_string_append(v___y_2989_, v___x_2990_);
return v_str_2991_;
}
v___jp_2992_:
{
uint32_t v___x_2996_; uint8_t v___x_2997_; 
v___x_2996_ = 10;
v___x_2997_ = lean_uint32_dec_eq(v___y_2995_, v___x_2996_);
if (v___x_2997_ == 0)
{
v___y_2989_ = v___y_2993_;
goto v___jp_2988_;
}
else
{
if (v___y_2994_ == 0)
{
return v___y_2993_;
}
else
{
v___y_2989_ = v___y_2993_;
goto v___jp_2988_;
}
}
}
v___jp_2998_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; uint8_t v___x_3002_; 
v___x_3000_ = lean_string_utf8_byte_size(v_str_2999_);
v___x_3001_ = lean_unsigned_to_nat(0u);
v___x_3002_ = lean_nat_dec_eq(v___x_3000_, v___x_3001_);
if (v___x_3002_ == 0)
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
lean_inc_ref(v_str_2999_);
v___x_3003_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3003_, 0, v_str_2999_);
lean_ctor_set(v___x_3003_, 1, v___x_3001_);
lean_ctor_set(v___x_3003_, 2, v___x_3000_);
v___x_3004_ = l_String_Slice_Pos_prev_x3f(v___x_3003_, v___x_3000_);
if (lean_obj_tag(v___x_3004_) == 0)
{
uint32_t v___x_3005_; 
lean_dec_ref_known(v___x_3003_, 3);
v___x_3005_ = 65;
v___y_2993_ = v_str_2999_;
v___y_2994_ = v___x_3002_;
v___y_2995_ = v___x_3005_;
goto v___jp_2992_;
}
else
{
lean_object* v_val_3006_; lean_object* v___x_3007_; 
v_val_3006_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_val_3006_);
lean_dec_ref_known(v___x_3004_, 1);
v___x_3007_ = l_String_Slice_Pos_get_x3f(v___x_3003_, v_val_3006_);
lean_dec(v_val_3006_);
lean_dec_ref_known(v___x_3003_, 3);
if (lean_obj_tag(v___x_3007_) == 0)
{
uint32_t v___x_3008_; 
v___x_3008_ = 65;
v___y_2993_ = v_str_2999_;
v___y_2994_ = v___x_3002_;
v___y_2995_ = v___x_3008_;
goto v___jp_2992_;
}
else
{
lean_object* v_val_3009_; uint32_t v___x_3010_; 
v_val_3009_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_val_3009_);
lean_dec_ref_known(v___x_3007_, 1);
v___x_3010_ = lean_unbox_uint32(v_val_3009_);
lean_dec(v_val_3009_);
v___y_2993_ = v_str_2999_;
v___y_2994_ = v___x_3002_;
v___y_2995_ = v___x_3010_;
goto v___jp_2992_;
}
}
}
else
{
v___y_2989_ = v_str_2999_;
goto v___jp_2988_;
}
}
v___jp_3019_:
{
switch(v_severity_3016_)
{
case 0:
{
lean_dec(v___y_3020_);
lean_dec_ref(v_pos_3014_);
lean_dec_ref(v_fileName_3013_);
lean_dec(v_kind_3012_);
v_str_2999_ = v_str_3021_;
goto v___jp_2998_;
}
case 1:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v_str_3024_; 
v___x_3022_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__0));
v___x_3023_ = l_Lean_errorNameOfKind_x3f(v_kind_3012_);
lean_dec(v_kind_3012_);
v_str_3024_ = l_Lean_mkErrorStringWithPos(v_fileName_3013_, v_pos_3014_, v_str_3021_, v___y_3020_, v___x_3022_, v___x_3023_);
lean_dec_ref(v_str_3021_);
v_str_2999_ = v_str_3024_;
goto v___jp_2998_;
}
default: 
{
lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v_str_3027_; 
v___x_3025_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__1));
v___x_3026_ = l_Lean_errorNameOfKind_x3f(v_kind_3012_);
lean_dec(v_kind_3012_);
v_str_3027_ = l_Lean_mkErrorStringWithPos(v_fileName_3013_, v_pos_3014_, v_str_3021_, v___y_3020_, v___x_3025_, v___x_3026_);
lean_dec_ref(v_str_3021_);
v_str_2999_ = v_str_3027_;
goto v___jp_2998_;
}
}
}
v___jp_3028_:
{
lean_object* v___x_3030_; uint8_t v___x_3031_; 
v___x_3030_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_3031_ = lean_string_dec_eq(v_caption_3017_, v___x_3030_);
if (v___x_3031_ == 0)
{
lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v_str_3034_; 
v___x_3032_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__2));
v___x_3033_ = lean_string_append(v_caption_3017_, v___x_3032_);
v_str_3034_ = lean_string_append(v___x_3033_, v_data_3018_);
lean_dec(v_data_3018_);
v___y_3020_ = v___y_3029_;
v_str_3021_ = v_str_3034_;
goto v___jp_3019_;
}
else
{
lean_dec_ref(v_caption_3017_);
v___y_3020_ = v___y_3029_;
v_str_3021_ = v_data_3018_;
goto v___jp_3019_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_toString___boxed(lean_object* v_msg_3036_, lean_object* v_includeEndPos_3037_){
_start:
{
uint8_t v_includeEndPos_boxed_3038_; lean_object* v_res_3039_; 
v_includeEndPos_boxed_3038_ = lean_unbox(v_includeEndPos_3037_);
v_res_3039_ = l_Lean_SerialMessage_toString(v_msg_3036_, v_includeEndPos_boxed_3038_);
return v_res_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_SerialMessage_instToString___lam__0(lean_object* v_msg_3040_){
_start:
{
uint8_t v___x_3041_; lean_object* v___x_3042_; 
v___x_3041_ = 0;
v___x_3042_ = l_Lean_SerialMessage_toString(v_msg_3040_, v___x_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_kind(lean_object* v_msg_3045_){
_start:
{
lean_object* v_data_3046_; lean_object* v___x_3047_; 
v_data_3046_ = lean_ctor_get(v_msg_3045_, 4);
v___x_3047_ = l_Lean_MessageData_kind(v_data_3046_);
return v___x_3047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_kind___boxed(lean_object* v_msg_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Lean_Message_kind(v_msg_3048_);
lean_dec_ref(v_msg_3048_);
return v_res_3049_;
}
}
LEAN_EXPORT uint8_t l_Lean_Message_isTrace(lean_object* v_msg_3050_){
_start:
{
lean_object* v_data_3051_; uint8_t v___x_3052_; 
v_data_3051_ = lean_ctor_get(v_msg_3050_, 4);
v___x_3052_ = l_Lean_MessageData_isTrace(v_data_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_isTrace___boxed(lean_object* v_msg_3053_){
_start:
{
uint8_t v_res_3054_; lean_object* v_r_3055_; 
v_res_3054_ = l_Lean_Message_isTrace(v_msg_3053_);
lean_dec_ref(v_msg_3053_);
v_r_3055_ = lean_box(v_res_3054_);
return v_r_3055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_serialize(lean_object* v_msg_3056_){
_start:
{
lean_object* v_fileName_3058_; lean_object* v_pos_3059_; lean_object* v_endPos_3060_; uint8_t v_keepFullRange_3061_; uint8_t v_severity_3062_; uint8_t v_isSilent_3063_; lean_object* v_caption_3064_; lean_object* v_data_3065_; lean_object* v___x_3067_; uint8_t v_isShared_3068_; uint8_t v_isSharedCheck_3075_; 
v_fileName_3058_ = lean_ctor_get(v_msg_3056_, 0);
v_pos_3059_ = lean_ctor_get(v_msg_3056_, 1);
v_endPos_3060_ = lean_ctor_get(v_msg_3056_, 2);
v_keepFullRange_3061_ = lean_ctor_get_uint8(v_msg_3056_, sizeof(void*)*5);
v_severity_3062_ = lean_ctor_get_uint8(v_msg_3056_, sizeof(void*)*5 + 1);
v_isSilent_3063_ = lean_ctor_get_uint8(v_msg_3056_, sizeof(void*)*5 + 2);
v_caption_3064_ = lean_ctor_get(v_msg_3056_, 3);
v_data_3065_ = lean_ctor_get(v_msg_3056_, 4);
v_isSharedCheck_3075_ = !lean_is_exclusive(v_msg_3056_);
if (v_isSharedCheck_3075_ == 0)
{
v___x_3067_ = v_msg_3056_;
v_isShared_3068_ = v_isSharedCheck_3075_;
goto v_resetjp_3066_;
}
else
{
lean_inc(v_data_3065_);
lean_inc(v_caption_3064_);
lean_inc(v_endPos_3060_);
lean_inc(v_pos_3059_);
lean_inc(v_fileName_3058_);
lean_dec(v_msg_3056_);
v___x_3067_ = lean_box(0);
v_isShared_3068_ = v_isSharedCheck_3075_;
goto v_resetjp_3066_;
}
v_resetjp_3066_:
{
lean_object* v___x_3069_; lean_object* v___x_3071_; 
lean_inc(v_data_3065_);
v___x_3069_ = l_Lean_MessageData_toString(v_data_3065_);
if (v_isShared_3068_ == 0)
{
lean_ctor_set(v___x_3067_, 4, v___x_3069_);
v___x_3071_ = v___x_3067_;
goto v_reusejp_3070_;
}
else
{
lean_object* v_reuseFailAlloc_3074_; 
v_reuseFailAlloc_3074_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3074_, 0, v_fileName_3058_);
lean_ctor_set(v_reuseFailAlloc_3074_, 1, v_pos_3059_);
lean_ctor_set(v_reuseFailAlloc_3074_, 2, v_endPos_3060_);
lean_ctor_set(v_reuseFailAlloc_3074_, 3, v_caption_3064_);
lean_ctor_set(v_reuseFailAlloc_3074_, 4, v___x_3069_);
lean_ctor_set_uint8(v_reuseFailAlloc_3074_, sizeof(void*)*5, v_keepFullRange_3061_);
lean_ctor_set_uint8(v_reuseFailAlloc_3074_, sizeof(void*)*5 + 1, v_severity_3062_);
lean_ctor_set_uint8(v_reuseFailAlloc_3074_, sizeof(void*)*5 + 2, v_isSilent_3063_);
v___x_3071_ = v_reuseFailAlloc_3074_;
goto v_reusejp_3070_;
}
v_reusejp_3070_:
{
lean_object* v___x_3072_; lean_object* v___x_3073_; 
v___x_3072_ = l_Lean_MessageData_kind(v_data_3065_);
lean_dec(v_data_3065_);
v___x_3073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3073_, 0, v___x_3071_);
lean_ctor_set(v___x_3073_, 1, v___x_3072_);
return v___x_3073_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Message_serialize___boxed(lean_object* v_msg_3076_, lean_object* v_a_3077_){
_start:
{
lean_object* v_res_3078_; 
v_res_3078_ = l_Lean_Message_serialize(v_msg_3076_);
return v_res_3078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toString(lean_object* v_msg_3079_, uint8_t v_includeEndPos_3080_){
_start:
{
lean_object* v_fileName_3082_; lean_object* v_pos_3083_; lean_object* v_endPos_3084_; uint8_t v_severity_3085_; lean_object* v_caption_3086_; lean_object* v_data_3087_; lean_object* v___x_3088_; lean_object* v___y_3090_; uint8_t v___y_3094_; lean_object* v___y_3095_; uint32_t v___y_3096_; lean_object* v_str_3100_; lean_object* v___x_3112_; lean_object* v___y_3114_; lean_object* v_str_3115_; lean_object* v___y_3123_; 
v_fileName_3082_ = lean_ctor_get(v_msg_3079_, 0);
lean_inc_ref(v_fileName_3082_);
v_pos_3083_ = lean_ctor_get(v_msg_3079_, 1);
lean_inc_ref(v_pos_3083_);
v_endPos_3084_ = lean_ctor_get(v_msg_3079_, 2);
lean_inc(v_endPos_3084_);
v_severity_3085_ = lean_ctor_get_uint8(v_msg_3079_, sizeof(void*)*5 + 1);
v_caption_3086_ = lean_ctor_get(v_msg_3079_, 3);
lean_inc_ref(v_caption_3086_);
v_data_3087_ = lean_ctor_get(v_msg_3079_, 4);
lean_inc_n(v_data_3087_, 2);
lean_dec_ref(v_msg_3079_);
v___x_3088_ = l_Lean_MessageData_toString(v_data_3087_);
v___x_3112_ = l_Lean_MessageData_kind(v_data_3087_);
lean_dec(v_data_3087_);
if (v_includeEndPos_3080_ == 0)
{
lean_object* v___x_3129_; 
lean_dec(v_endPos_3084_);
v___x_3129_ = lean_box(0);
v___y_3123_ = v___x_3129_;
goto v___jp_3122_;
}
else
{
v___y_3123_ = v_endPos_3084_;
goto v___jp_3122_;
}
v___jp_3089_:
{
lean_object* v___x_3091_; lean_object* v_str_3092_; 
v___x_3091_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__1));
v_str_3092_ = lean_string_append(v___y_3090_, v___x_3091_);
return v_str_3092_;
}
v___jp_3093_:
{
uint32_t v___x_3097_; uint8_t v___x_3098_; 
v___x_3097_ = 10;
v___x_3098_ = lean_uint32_dec_eq(v___y_3096_, v___x_3097_);
if (v___x_3098_ == 0)
{
v___y_3090_ = v___y_3095_;
goto v___jp_3089_;
}
else
{
if (v___y_3094_ == 0)
{
return v___y_3095_;
}
else
{
v___y_3090_ = v___y_3095_;
goto v___jp_3089_;
}
}
}
v___jp_3099_:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; uint8_t v___x_3103_; 
v___x_3101_ = lean_string_utf8_byte_size(v_str_3100_);
v___x_3102_ = lean_unsigned_to_nat(0u);
v___x_3103_ = lean_nat_dec_eq(v___x_3101_, v___x_3102_);
if (v___x_3103_ == 0)
{
lean_object* v___x_3104_; lean_object* v___x_3105_; 
lean_inc_ref(v_str_3100_);
v___x_3104_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3104_, 0, v_str_3100_);
lean_ctor_set(v___x_3104_, 1, v___x_3102_);
lean_ctor_set(v___x_3104_, 2, v___x_3101_);
v___x_3105_ = l_String_Slice_Pos_prev_x3f(v___x_3104_, v___x_3101_);
if (lean_obj_tag(v___x_3105_) == 0)
{
uint32_t v___x_3106_; 
lean_dec_ref_known(v___x_3104_, 3);
v___x_3106_ = 65;
v___y_3094_ = v___x_3103_;
v___y_3095_ = v_str_3100_;
v___y_3096_ = v___x_3106_;
goto v___jp_3093_;
}
else
{
lean_object* v_val_3107_; lean_object* v___x_3108_; 
v_val_3107_ = lean_ctor_get(v___x_3105_, 0);
lean_inc(v_val_3107_);
lean_dec_ref_known(v___x_3105_, 1);
v___x_3108_ = l_String_Slice_Pos_get_x3f(v___x_3104_, v_val_3107_);
lean_dec(v_val_3107_);
lean_dec_ref_known(v___x_3104_, 3);
if (lean_obj_tag(v___x_3108_) == 0)
{
uint32_t v___x_3109_; 
v___x_3109_ = 65;
v___y_3094_ = v___x_3103_;
v___y_3095_ = v_str_3100_;
v___y_3096_ = v___x_3109_;
goto v___jp_3093_;
}
else
{
lean_object* v_val_3110_; uint32_t v___x_3111_; 
v_val_3110_ = lean_ctor_get(v___x_3108_, 0);
lean_inc(v_val_3110_);
lean_dec_ref_known(v___x_3108_, 1);
v___x_3111_ = lean_unbox_uint32(v_val_3110_);
lean_dec(v_val_3110_);
v___y_3094_ = v___x_3103_;
v___y_3095_ = v_str_3100_;
v___y_3096_ = v___x_3111_;
goto v___jp_3093_;
}
}
}
else
{
v___y_3090_ = v_str_3100_;
goto v___jp_3089_;
}
}
v___jp_3113_:
{
switch(v_severity_3085_)
{
case 0:
{
lean_dec(v___y_3114_);
lean_dec(v___x_3112_);
lean_dec_ref(v_pos_3083_);
lean_dec_ref(v_fileName_3082_);
v_str_3100_ = v_str_3115_;
goto v___jp_3099_;
}
case 1:
{
lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v_str_3118_; 
v___x_3116_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__0));
v___x_3117_ = l_Lean_errorNameOfKind_x3f(v___x_3112_);
lean_dec(v___x_3112_);
v_str_3118_ = l_Lean_mkErrorStringWithPos(v_fileName_3082_, v_pos_3083_, v_str_3115_, v___y_3114_, v___x_3116_, v___x_3117_);
lean_dec_ref(v_str_3115_);
v_str_3100_ = v_str_3118_;
goto v___jp_3099_;
}
default: 
{
lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v_str_3121_; 
v___x_3119_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__1));
v___x_3120_ = l_Lean_errorNameOfKind_x3f(v___x_3112_);
lean_dec(v___x_3112_);
v_str_3121_ = l_Lean_mkErrorStringWithPos(v_fileName_3082_, v_pos_3083_, v_str_3115_, v___y_3114_, v___x_3119_, v___x_3120_);
lean_dec_ref(v_str_3115_);
v_str_3100_ = v_str_3121_;
goto v___jp_3099_;
}
}
}
v___jp_3122_:
{
lean_object* v___x_3124_; uint8_t v___x_3125_; 
v___x_3124_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_3125_ = lean_string_dec_eq(v_caption_3086_, v___x_3124_);
if (v___x_3125_ == 0)
{
lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v_str_3128_; 
v___x_3126_ = ((lean_object*)(l_Lean_SerialMessage_toString___closed__2));
v___x_3127_ = lean_string_append(v_caption_3086_, v___x_3126_);
v_str_3128_ = lean_string_append(v___x_3127_, v___x_3088_);
lean_dec_ref(v___x_3088_);
v___y_3114_ = v___y_3123_;
v_str_3115_ = v_str_3128_;
goto v___jp_3113_;
}
else
{
lean_dec_ref(v_caption_3086_);
v___y_3114_ = v___y_3123_;
v_str_3115_ = v___x_3088_;
goto v___jp_3113_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toString___boxed(lean_object* v_msg_3130_, lean_object* v_includeEndPos_3131_, lean_object* v_a_3132_){
_start:
{
uint8_t v_includeEndPos_boxed_3133_; lean_object* v_res_3134_; 
v_includeEndPos_boxed_3133_ = lean_unbox(v_includeEndPos_3131_);
v_res_3134_ = l_Lean_Message_toString(v_msg_3130_, v_includeEndPos_boxed_3133_);
return v_res_3134_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toJson(lean_object* v_msg_3135_){
_start:
{
lean_object* v_fileName_3137_; lean_object* v_pos_3138_; lean_object* v_endPos_3139_; uint8_t v_keepFullRange_3140_; uint8_t v_severity_3141_; uint8_t v_isSilent_3142_; lean_object* v_caption_3143_; lean_object* v_data_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; lean_object* v___x_3169_; lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; uint8_t v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; 
v_fileName_3137_ = lean_ctor_get(v_msg_3135_, 0);
lean_inc_ref(v_fileName_3137_);
v_pos_3138_ = lean_ctor_get(v_msg_3135_, 1);
lean_inc_ref(v_pos_3138_);
v_endPos_3139_ = lean_ctor_get(v_msg_3135_, 2);
lean_inc(v_endPos_3139_);
v_keepFullRange_3140_ = lean_ctor_get_uint8(v_msg_3135_, sizeof(void*)*5);
v_severity_3141_ = lean_ctor_get_uint8(v_msg_3135_, sizeof(void*)*5 + 1);
v_isSilent_3142_ = lean_ctor_get_uint8(v_msg_3135_, sizeof(void*)*5 + 2);
v_caption_3143_ = lean_ctor_get(v_msg_3135_, 3);
lean_inc_ref(v_caption_3143_);
v_data_3144_ = lean_ctor_get(v_msg_3135_, 4);
lean_inc_n(v_data_3144_, 2);
lean_dec_ref(v_msg_3135_);
v___x_3145_ = l_Lean_MessageData_toString(v_data_3144_);
v___x_3146_ = l_Lean_MessageData_kind(v_data_3144_);
lean_dec(v_data_3144_);
v___x_3147_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__1));
v___x_3148_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3148_, 0, v_fileName_3137_);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
v___x_3150_ = lean_box(0);
v___x_3151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3151_, 0, v___x_3149_);
lean_ctor_set(v___x_3151_, 1, v___x_3150_);
v___x_3152_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__2));
v___x_3153_ = l_Lean_instToJsonPosition_toJson(v_pos_3138_);
v___x_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3152_);
lean_ctor_set(v___x_3154_, 1, v___x_3153_);
v___x_3155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3155_, 0, v___x_3154_);
lean_ctor_set(v___x_3155_, 1, v___x_3150_);
v___x_3156_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__3));
v___x_3157_ = l_Option_toJson___at___00Lean_instToJsonSerialMessage_toJson_spec__0(v_endPos_3139_);
v___x_3158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3156_);
lean_ctor_set(v___x_3158_, 1, v___x_3157_);
v___x_3159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
lean_ctor_set(v___x_3159_, 1, v___x_3150_);
v___x_3160_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__4));
v___x_3161_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3161_, 0, v_keepFullRange_3140_);
v___x_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3160_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3162_);
lean_ctor_set(v___x_3163_, 1, v___x_3150_);
v___x_3164_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__5));
v___x_3165_ = l_Lean_instToJsonMessageSeverity_toJson(v_severity_3141_);
v___x_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3164_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
v___x_3167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
lean_ctor_set(v___x_3167_, 1, v___x_3150_);
v___x_3168_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__6));
v___x_3169_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3169_, 0, v_isSilent_3142_);
v___x_3170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3168_);
lean_ctor_set(v___x_3170_, 1, v___x_3169_);
v___x_3171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3171_, 0, v___x_3170_);
lean_ctor_set(v___x_3171_, 1, v___x_3150_);
v___x_3172_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__7));
v___x_3173_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3173_, 0, v_caption_3143_);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v___x_3172_);
lean_ctor_set(v___x_3174_, 1, v___x_3173_);
v___x_3175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3175_, 0, v___x_3174_);
lean_ctor_set(v___x_3175_, 1, v___x_3150_);
v___x_3176_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__8));
v___x_3177_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3177_, 0, v___x_3145_);
v___x_3178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3178_, 0, v___x_3176_);
lean_ctor_set(v___x_3178_, 1, v___x_3177_);
v___x_3179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
lean_ctor_set(v___x_3179_, 1, v___x_3150_);
v___x_3180_ = ((lean_object*)(l_Lean_instToJsonSerialMessage_toJson___closed__0));
v___x_3181_ = 1;
v___x_3182_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_3146_, v___x_3181_);
v___x_3183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3183_, 0, v___x_3182_);
v___x_3184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3180_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3185_, 0, v___x_3184_);
lean_ctor_set(v___x_3185_, 1, v___x_3150_);
v___x_3186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3186_, 0, v___x_3185_);
lean_ctor_set(v___x_3186_, 1, v___x_3150_);
v___x_3187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3187_, 0, v___x_3179_);
lean_ctor_set(v___x_3187_, 1, v___x_3186_);
v___x_3188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3188_, 0, v___x_3175_);
lean_ctor_set(v___x_3188_, 1, v___x_3187_);
v___x_3189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3189_, 0, v___x_3171_);
lean_ctor_set(v___x_3189_, 1, v___x_3188_);
v___x_3190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3167_);
lean_ctor_set(v___x_3190_, 1, v___x_3189_);
v___x_3191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3163_);
lean_ctor_set(v___x_3191_, 1, v___x_3190_);
v___x_3192_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3159_);
lean_ctor_set(v___x_3192_, 1, v___x_3191_);
v___x_3193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3193_, 0, v___x_3155_);
lean_ctor_set(v___x_3193_, 1, v___x_3192_);
v___x_3194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3194_, 0, v___x_3151_);
lean_ctor_set(v___x_3194_, 1, v___x_3193_);
v___x_3195_ = ((lean_object*)(l_Lean_instToJsonBaseMessage_toJson___redArg___closed__10));
v___x_3196_ = l___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Lean_instToJsonSerialMessage_toJson_spec__1(v___x_3194_, v___x_3195_);
v___x_3197_ = l_Lean_Json_mkObj(v___x_3196_);
lean_dec(v___x_3196_);
return v___x_3197_;
}
}
LEAN_EXPORT lean_object* l_Lean_Message_toJson___boxed(lean_object* v_msg_3198_, lean_object* v_a_3199_){
_start:
{
lean_object* v_res_3200_; 
v_res_3200_ = l_Lean_Message_toJson(v_msg_3198_);
return v_res_3200_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__0(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; 
v___x_3201_ = lean_unsigned_to_nat(32u);
v___x_3202_ = lean_mk_empty_array_with_capacity(v___x_3201_);
v___x_3203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3203_, 0, v___x_3202_);
return v___x_3203_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__1(void){
_start:
{
size_t v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v___x_3209_; 
v___x_3204_ = ((size_t)5ULL);
v___x_3205_ = lean_unsigned_to_nat(0u);
v___x_3206_ = lean_unsigned_to_nat(32u);
v___x_3207_ = lean_mk_empty_array_with_capacity(v___x_3206_);
v___x_3208_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__0, &l_Lean_instInhabitedMessageLog_default___closed__0_once, _init_l_Lean_instInhabitedMessageLog_default___closed__0);
v___x_3209_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3209_, 0, v___x_3208_);
lean_ctor_set(v___x_3209_, 1, v___x_3207_);
lean_ctor_set(v___x_3209_, 2, v___x_3205_);
lean_ctor_set(v___x_3209_, 3, v___x_3205_);
lean_ctor_set_usize(v___x_3209_, 4, v___x_3204_);
return v___x_3209_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default___closed__2(void){
_start:
{
lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; 
v___x_3210_ = l_Lean_NameSet_empty;
v___x_3211_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v___x_3212_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3212_, 0, v___x_3211_);
lean_ctor_set(v___x_3212_, 1, v___x_3211_);
lean_ctor_set(v___x_3212_, 2, v___x_3210_);
return v___x_3212_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog_default(void){
_start:
{
lean_object* v___x_3213_; 
v___x_3213_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__2, &l_Lean_instInhabitedMessageLog_default___closed__2_once, _init_l_Lean_instInhabitedMessageLog_default___closed__2);
return v___x_3213_;
}
}
static lean_object* _init_l_Lean_instInhabitedMessageLog(void){
_start:
{
lean_object* v___x_3214_; 
v___x_3214_ = l_Lean_instInhabitedMessageLog_default;
return v___x_3214_;
}
}
static lean_object* _init_l_Lean_MessageLog_empty(void){
_start:
{
lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v___x_3215_ = lean_unsigned_to_nat(32u);
v___x_3216_ = lean_mk_empty_array_with_capacity(v___x_3215_);
lean_dec_ref(v___x_3216_);
v___x_3217_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__2, &l_Lean_instInhabitedMessageLog_default___closed__2_once, _init_l_Lean_instInhabitedMessageLog_default___closed__2);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs(lean_object* v_self_3218_){
_start:
{
lean_object* v_unreported_3219_; 
v_unreported_3219_ = lean_ctor_get(v_self_3218_, 1);
lean_inc_ref(v_unreported_3219_);
return v_unreported_3219_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_msgs___boxed(lean_object* v_self_3220_){
_start:
{
lean_object* v_res_3221_; 
v_res_3221_ = l_Lean_MessageLog_msgs(v_self_3220_);
lean_dec_ref(v_self_3220_);
return v_res_3221_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_reportedPlusUnreported(lean_object* v_x_3222_){
_start:
{
lean_object* v_reported_3223_; lean_object* v_unreported_3224_; lean_object* v___x_3225_; 
v_reported_3223_ = lean_ctor_get(v_x_3222_, 0);
lean_inc_ref(v_reported_3223_);
v_unreported_3224_ = lean_ctor_get(v_x_3222_, 1);
lean_inc_ref(v_unreported_3224_);
lean_dec_ref(v_x_3222_);
v___x_3225_ = l_Lean_PersistentArray_append___redArg(v_reported_3223_, v_unreported_3224_);
lean_dec_ref(v_unreported_3224_);
return v___x_3225_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasUnreported(lean_object* v_log_3226_){
_start:
{
lean_object* v_unreported_3227_; uint8_t v___x_3228_; 
v_unreported_3227_ = lean_ctor_get(v_log_3226_, 1);
v___x_3228_ = l_Lean_PersistentArray_isEmpty___redArg(v_unreported_3227_);
if (v___x_3228_ == 0)
{
uint8_t v___x_3229_; 
v___x_3229_ = 1;
return v___x_3229_;
}
else
{
uint8_t v___x_3230_; 
v___x_3230_ = 0;
return v___x_3230_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasUnreported___boxed(lean_object* v_log_3231_){
_start:
{
uint8_t v_res_3232_; lean_object* v_r_3233_; 
v_res_3232_ = l_Lean_MessageLog_hasUnreported(v_log_3231_);
lean_dec_ref(v_log_3231_);
v_r_3233_ = lean_box(v_res_3232_);
return v_r_3233_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_add(lean_object* v_msg_3234_, lean_object* v_log_3235_){
_start:
{
lean_object* v_reported_3236_; lean_object* v_unreported_3237_; lean_object* v_loggedKinds_3238_; lean_object* v___x_3240_; uint8_t v_isShared_3241_; uint8_t v_isSharedCheck_3246_; 
v_reported_3236_ = lean_ctor_get(v_log_3235_, 0);
v_unreported_3237_ = lean_ctor_get(v_log_3235_, 1);
v_loggedKinds_3238_ = lean_ctor_get(v_log_3235_, 2);
v_isSharedCheck_3246_ = !lean_is_exclusive(v_log_3235_);
if (v_isSharedCheck_3246_ == 0)
{
v___x_3240_ = v_log_3235_;
v_isShared_3241_ = v_isSharedCheck_3246_;
goto v_resetjp_3239_;
}
else
{
lean_inc(v_loggedKinds_3238_);
lean_inc(v_unreported_3237_);
lean_inc(v_reported_3236_);
lean_dec(v_log_3235_);
v___x_3240_ = lean_box(0);
v_isShared_3241_ = v_isSharedCheck_3246_;
goto v_resetjp_3239_;
}
v_resetjp_3239_:
{
lean_object* v___x_3242_; lean_object* v___x_3244_; 
v___x_3242_ = l_Lean_PersistentArray_push___redArg(v_unreported_3237_, v_msg_3234_);
if (v_isShared_3241_ == 0)
{
lean_ctor_set(v___x_3240_, 1, v___x_3242_);
v___x_3244_ = v___x_3240_;
goto v_reusejp_3243_;
}
else
{
lean_object* v_reuseFailAlloc_3245_; 
v_reuseFailAlloc_3245_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3245_, 0, v_reported_3236_);
lean_ctor_set(v_reuseFailAlloc_3245_, 1, v___x_3242_);
lean_ctor_set(v_reuseFailAlloc_3245_, 2, v_loggedKinds_3238_);
v___x_3244_ = v_reuseFailAlloc_3245_;
goto v_reusejp_3243_;
}
v_reusejp_3243_:
{
return v___x_3244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(lean_object* v_b_u2082_3249_, lean_object* v_x_3250_){
_start:
{
if (lean_obj_tag(v_x_3250_) == 0)
{
lean_object* v___x_3251_; 
v___x_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3251_, 0, v_b_u2082_3249_);
return v___x_3251_;
}
else
{
lean_object* v___x_3252_; 
v___x_3252_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___closed__0));
return v___x_3252_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0___boxed(lean_object* v_b_u2082_3253_, lean_object* v_x_3254_){
_start:
{
lean_object* v_res_3255_; 
v_res_3255_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(v_b_u2082_3253_, v_x_3254_);
lean_dec(v_x_3254_);
return v_res_3255_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(lean_object* v_b_u2082_3256_, lean_object* v_k_3257_, lean_object* v_t_3258_){
_start:
{
if (lean_obj_tag(v_t_3258_) == 0)
{
lean_object* v_size_3259_; lean_object* v_k_3260_; lean_object* v_v_3261_; lean_object* v_l_3262_; lean_object* v_r_3263_; lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3278_; 
v_size_3259_ = lean_ctor_get(v_t_3258_, 0);
v_k_3260_ = lean_ctor_get(v_t_3258_, 1);
v_v_3261_ = lean_ctor_get(v_t_3258_, 2);
v_l_3262_ = lean_ctor_get(v_t_3258_, 3);
v_r_3263_ = lean_ctor_get(v_t_3258_, 4);
v_isSharedCheck_3278_ = !lean_is_exclusive(v_t_3258_);
if (v_isSharedCheck_3278_ == 0)
{
v___x_3265_ = v_t_3258_;
v_isShared_3266_ = v_isSharedCheck_3278_;
goto v_resetjp_3264_;
}
else
{
lean_inc(v_r_3263_);
lean_inc(v_l_3262_);
lean_inc(v_v_3261_);
lean_inc(v_k_3260_);
lean_inc(v_size_3259_);
lean_dec(v_t_3258_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3278_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
uint8_t v___x_3267_; 
v___x_3267_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_3257_, v_k_3260_);
switch(v___x_3267_)
{
case 0:
{
lean_object* v_impl_3268_; lean_object* v___x_3269_; 
lean_del_object(v___x_3265_);
lean_dec(v_size_3259_);
v_impl_3268_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_b_u2082_3256_, v_k_3257_, v_l_3262_);
v___x_3269_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_3260_, v_v_3261_, v_impl_3268_, v_r_3263_);
return v___x_3269_;
}
case 1:
{
lean_object* v___x_3270_; lean_object* v___x_3271_; lean_object* v_val_3272_; lean_object* v___x_3274_; 
lean_dec(v_k_3260_);
v___x_3270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3270_, 0, v_v_3261_);
v___x_3271_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(v_b_u2082_3256_, v___x_3270_);
lean_dec_ref_known(v___x_3270_, 1);
v_val_3272_ = lean_ctor_get(v___x_3271_, 0);
lean_inc(v_val_3272_);
lean_dec(v___x_3271_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 2, v_val_3272_);
lean_ctor_set(v___x_3265_, 1, v_k_3257_);
v___x_3274_ = v___x_3265_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_size_3259_);
lean_ctor_set(v_reuseFailAlloc_3275_, 1, v_k_3257_);
lean_ctor_set(v_reuseFailAlloc_3275_, 2, v_val_3272_);
lean_ctor_set(v_reuseFailAlloc_3275_, 3, v_l_3262_);
lean_ctor_set(v_reuseFailAlloc_3275_, 4, v_r_3263_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
default: 
{
lean_object* v_impl_3276_; lean_object* v___x_3277_; 
lean_del_object(v___x_3265_);
lean_dec(v_size_3259_);
v_impl_3276_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_b_u2082_3256_, v_k_3257_, v_r_3263_);
v___x_3277_ = l_Std_DTreeMap_Internal_Impl_balance___redArg(v_k_3260_, v_v_3261_, v_l_3262_, v_impl_3276_);
return v___x_3277_;
}
}
}
}
else
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v_val_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3279_ = lean_box(0);
v___x_3280_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg___lam__0(v_b_u2082_3256_, v___x_3279_);
v_val_3281_ = lean_ctor_get(v___x_3280_, 0);
lean_inc(v_val_3281_);
lean_dec(v___x_3280_);
v___x_3282_ = lean_unsigned_to_nat(1u);
v___x_3283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3283_, 0, v___x_3282_);
lean_ctor_set(v___x_3283_, 1, v_k_3257_);
lean_ctor_set(v___x_3283_, 2, v_val_3281_);
lean_ctor_set(v___x_3283_, 3, v_t_3258_);
lean_ctor_set(v___x_3283_, 4, v_t_3258_);
return v___x_3283_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(lean_object* v_init_3284_, lean_object* v_x_3285_){
_start:
{
if (lean_obj_tag(v_x_3285_) == 0)
{
lean_object* v_k_3286_; lean_object* v_v_3287_; lean_object* v_l_3288_; lean_object* v_r_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; 
v_k_3286_ = lean_ctor_get(v_x_3285_, 1);
lean_inc(v_k_3286_);
v_v_3287_ = lean_ctor_get(v_x_3285_, 2);
lean_inc(v_v_3287_);
v_l_3288_ = lean_ctor_get(v_x_3285_, 3);
lean_inc(v_l_3288_);
v_r_3289_ = lean_ctor_get(v_x_3285_, 4);
lean_inc(v_r_3289_);
lean_dec_ref_known(v_x_3285_, 5);
v___x_3290_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(v_init_3284_, v_l_3288_);
v___x_3291_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_v_3287_, v_k_3286_, v___x_3290_);
v_init_3284_ = v___x_3291_;
v_x_3285_ = v_r_3289_;
goto _start;
}
else
{
return v_init_3284_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_append(lean_object* v_l_u2081_3293_, lean_object* v_l_u2082_3294_){
_start:
{
lean_object* v_reported_3295_; lean_object* v_unreported_3296_; lean_object* v_loggedKinds_3297_; lean_object* v_reported_3298_; lean_object* v_unreported_3299_; lean_object* v_loggedKinds_3300_; lean_object* v___x_3302_; uint8_t v_isShared_3303_; uint8_t v_isSharedCheck_3310_; 
v_reported_3295_ = lean_ctor_get(v_l_u2081_3293_, 0);
lean_inc_ref(v_reported_3295_);
v_unreported_3296_ = lean_ctor_get(v_l_u2081_3293_, 1);
lean_inc_ref(v_unreported_3296_);
v_loggedKinds_3297_ = lean_ctor_get(v_l_u2081_3293_, 2);
lean_inc(v_loggedKinds_3297_);
lean_dec_ref(v_l_u2081_3293_);
v_reported_3298_ = lean_ctor_get(v_l_u2082_3294_, 0);
v_unreported_3299_ = lean_ctor_get(v_l_u2082_3294_, 1);
v_loggedKinds_3300_ = lean_ctor_get(v_l_u2082_3294_, 2);
v_isSharedCheck_3310_ = !lean_is_exclusive(v_l_u2082_3294_);
if (v_isSharedCheck_3310_ == 0)
{
v___x_3302_ = v_l_u2082_3294_;
v_isShared_3303_ = v_isSharedCheck_3310_;
goto v_resetjp_3301_;
}
else
{
lean_inc(v_loggedKinds_3300_);
lean_inc(v_unreported_3299_);
lean_inc(v_reported_3298_);
lean_dec(v_l_u2082_3294_);
v___x_3302_ = lean_box(0);
v_isShared_3303_ = v_isSharedCheck_3310_;
goto v_resetjp_3301_;
}
v_resetjp_3301_:
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3308_; 
v___x_3304_ = l_Lean_PersistentArray_append___redArg(v_reported_3295_, v_reported_3298_);
lean_dec_ref(v_reported_3298_);
v___x_3305_ = l_Lean_PersistentArray_append___redArg(v_unreported_3296_, v_unreported_3299_);
lean_dec_ref(v_unreported_3299_);
v___x_3306_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(v_loggedKinds_3297_, v_loggedKinds_3300_);
if (v_isShared_3303_ == 0)
{
lean_ctor_set(v___x_3302_, 2, v___x_3306_);
lean_ctor_set(v___x_3302_, 1, v___x_3305_);
lean_ctor_set(v___x_3302_, 0, v___x_3304_);
v___x_3308_ = v___x_3302_;
goto v_reusejp_3307_;
}
else
{
lean_object* v_reuseFailAlloc_3309_; 
v_reuseFailAlloc_3309_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3309_, 0, v___x_3304_);
lean_ctor_set(v_reuseFailAlloc_3309_, 1, v___x_3305_);
lean_ctor_set(v_reuseFailAlloc_3309_, 2, v___x_3306_);
v___x_3308_ = v_reuseFailAlloc_3309_;
goto v_reusejp_3307_;
}
v_reusejp_3307_:
{
return v___x_3308_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0(lean_object* v_b_u2082_3311_, lean_object* v_k_3312_, lean_object* v_t_3313_, lean_object* v_hl_3314_){
_start:
{
lean_object* v___x_3315_; 
v___x_3315_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_MessageLog_append_spec__0___redArg(v_b_u2082_3311_, v_k_3312_, v_t_3313_);
return v___x_3315_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1(lean_object* v_init_3316_, lean_object* v_t_3317_){
_start:
{
lean_object* v___x_3318_; 
v___x_3318_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_MessageLog_append_spec__1_spec__1(v_init_3316_, v_t_3317_);
return v___x_3318_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(lean_object* v_as_3321_, size_t v_i_3322_, size_t v_stop_3323_){
_start:
{
uint8_t v___x_3324_; 
v___x_3324_ = lean_usize_dec_eq(v_i_3322_, v_stop_3323_);
if (v___x_3324_ == 0)
{
lean_object* v___x_3325_; uint8_t v_severity_3326_; uint8_t v___x_3327_; 
v___x_3325_ = lean_array_uget_borrowed(v_as_3321_, v_i_3322_);
v_severity_3326_ = lean_ctor_get_uint8(v___x_3325_, sizeof(void*)*5 + 1);
v___x_3327_ = 1;
if (v_severity_3326_ == 2)
{
return v___x_3327_;
}
else
{
if (v___x_3324_ == 0)
{
size_t v___x_3328_; size_t v___x_3329_; 
v___x_3328_ = ((size_t)1ULL);
v___x_3329_ = lean_usize_add(v_i_3322_, v___x_3328_);
v_i_3322_ = v___x_3329_;
goto _start;
}
else
{
return v___x_3327_;
}
}
}
else
{
uint8_t v___x_3331_; 
v___x_3331_ = 0;
return v___x_3331_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1___boxed(lean_object* v_as_3332_, lean_object* v_i_3333_, lean_object* v_stop_3334_){
_start:
{
size_t v_i_boxed_3335_; size_t v_stop_boxed_3336_; uint8_t v_res_3337_; lean_object* v_r_3338_; 
v_i_boxed_3335_ = lean_unbox_usize(v_i_3333_);
lean_dec(v_i_3333_);
v_stop_boxed_3336_ = lean_unbox_usize(v_stop_3334_);
lean_dec(v_stop_3334_);
v_res_3337_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_as_3332_, v_i_boxed_3335_, v_stop_boxed_3336_);
lean_dec_ref(v_as_3332_);
v_r_3338_ = lean_box(v_res_3337_);
return v_r_3338_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(lean_object* v_x_3339_){
_start:
{
if (lean_obj_tag(v_x_3339_) == 0)
{
lean_object* v_cs_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; uint8_t v___x_3343_; 
v_cs_3340_ = lean_ctor_get(v_x_3339_, 0);
v___x_3341_ = lean_unsigned_to_nat(0u);
v___x_3342_ = lean_array_get_size(v_cs_3340_);
v___x_3343_ = lean_nat_dec_lt(v___x_3341_, v___x_3342_);
if (v___x_3343_ == 0)
{
return v___x_3343_;
}
else
{
if (v___x_3343_ == 0)
{
return v___x_3343_;
}
else
{
size_t v___x_3344_; size_t v___x_3345_; uint8_t v___x_3346_; 
v___x_3344_ = ((size_t)0ULL);
v___x_3345_ = lean_usize_of_nat(v___x_3342_);
v___x_3346_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(v_cs_3340_, v___x_3344_, v___x_3345_);
return v___x_3346_;
}
}
}
else
{
lean_object* v_vs_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; uint8_t v___x_3350_; 
v_vs_3347_ = lean_ctor_get(v_x_3339_, 0);
v___x_3348_ = lean_unsigned_to_nat(0u);
v___x_3349_ = lean_array_get_size(v_vs_3347_);
v___x_3350_ = lean_nat_dec_lt(v___x_3348_, v___x_3349_);
if (v___x_3350_ == 0)
{
return v___x_3350_;
}
else
{
if (v___x_3350_ == 0)
{
return v___x_3350_;
}
else
{
size_t v___x_3351_; size_t v___x_3352_; uint8_t v___x_3353_; 
v___x_3351_ = ((size_t)0ULL);
v___x_3352_ = lean_usize_of_nat(v___x_3349_);
v___x_3353_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_vs_3347_, v___x_3351_, v___x_3352_);
return v___x_3353_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(lean_object* v_as_3354_, size_t v_i_3355_, size_t v_stop_3356_){
_start:
{
uint8_t v___x_3357_; 
v___x_3357_ = lean_usize_dec_eq(v_i_3355_, v_stop_3356_);
if (v___x_3357_ == 0)
{
lean_object* v___x_3358_; uint8_t v___x_3359_; 
v___x_3358_ = lean_array_uget_borrowed(v_as_3354_, v_i_3355_);
v___x_3359_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v___x_3358_);
if (v___x_3359_ == 0)
{
size_t v___x_3360_; size_t v___x_3361_; 
v___x_3360_ = ((size_t)1ULL);
v___x_3361_ = lean_usize_add(v_i_3355_, v___x_3360_);
v_i_3355_ = v___x_3361_;
goto _start;
}
else
{
return v___x_3359_;
}
}
else
{
uint8_t v___x_3363_; 
v___x_3363_ = 0;
return v___x_3363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3364_, lean_object* v_i_3365_, lean_object* v_stop_3366_){
_start:
{
size_t v_i_boxed_3367_; size_t v_stop_boxed_3368_; uint8_t v_res_3369_; lean_object* v_r_3370_; 
v_i_boxed_3367_ = lean_unbox_usize(v_i_3365_);
lean_dec(v_i_3365_);
v_stop_boxed_3368_ = lean_unbox_usize(v_stop_3366_);
lean_dec(v_stop_3366_);
v_res_3369_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0_spec__1(v_as_3364_, v_i_boxed_3367_, v_stop_boxed_3368_);
lean_dec_ref(v_as_3364_);
v_r_3370_ = lean_box(v_res_3369_);
return v_r_3370_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0___boxed(lean_object* v_x_3371_){
_start:
{
uint8_t v_res_3372_; lean_object* v_r_3373_; 
v_res_3372_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v_x_3371_);
lean_dec_ref(v_x_3371_);
v_r_3373_ = lean_box(v_res_3372_);
return v_r_3373_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(lean_object* v_t_3374_){
_start:
{
lean_object* v_root_3375_; lean_object* v_tail_3376_; uint8_t v___x_3377_; 
v_root_3375_ = lean_ctor_get(v_t_3374_, 0);
v_tail_3376_ = lean_ctor_get(v_t_3374_, 1);
v___x_3377_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__0(v_root_3375_);
if (v___x_3377_ == 0)
{
lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v___x_3380_; 
v___x_3378_ = lean_unsigned_to_nat(0u);
v___x_3379_ = lean_array_get_size(v_tail_3376_);
v___x_3380_ = lean_nat_dec_lt(v___x_3378_, v___x_3379_);
if (v___x_3380_ == 0)
{
return v___x_3377_;
}
else
{
if (v___x_3380_ == 0)
{
return v___x_3377_;
}
else
{
size_t v___x_3381_; size_t v___x_3382_; uint8_t v___x_3383_; 
v___x_3381_ = ((size_t)0ULL);
v___x_3382_ = lean_usize_of_nat(v___x_3379_);
v___x_3383_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0_spec__1(v_tail_3376_, v___x_3381_, v___x_3382_);
return v___x_3383_;
}
}
}
else
{
return v___x_3377_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0___boxed(lean_object* v_t_3384_){
_start:
{
uint8_t v_res_3385_; lean_object* v_r_3386_; 
v_res_3385_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(v_t_3384_);
lean_dec_ref(v_t_3384_);
v_r_3386_ = lean_box(v_res_3385_);
return v_r_3386_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(uint8_t v___x_3387_, lean_object* v_as_3388_, size_t v_i_3389_, size_t v_stop_3390_){
_start:
{
uint8_t v___x_3391_; 
v___x_3391_ = lean_usize_dec_eq(v_i_3389_, v_stop_3390_);
if (v___x_3391_ == 0)
{
lean_object* v___x_3392_; uint8_t v_severity_3393_; uint8_t v___x_3394_; 
v___x_3392_ = lean_array_uget_borrowed(v_as_3388_, v_i_3389_);
v_severity_3393_ = lean_ctor_get_uint8(v___x_3392_, sizeof(void*)*5 + 1);
v___x_3394_ = 1;
if (v_severity_3393_ == 2)
{
return v___x_3394_;
}
else
{
if (v___x_3387_ == 0)
{
size_t v___x_3395_; size_t v___x_3396_; 
v___x_3395_ = ((size_t)1ULL);
v___x_3396_ = lean_usize_add(v_i_3389_, v___x_3395_);
v_i_3389_ = v___x_3396_;
goto _start;
}
else
{
return v___x_3394_;
}
}
}
else
{
uint8_t v___x_3398_; 
v___x_3398_ = 0;
return v___x_3398_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4___boxed(lean_object* v___x_3399_, lean_object* v_as_3400_, lean_object* v_i_3401_, lean_object* v_stop_3402_){
_start:
{
uint8_t v___x_1884__boxed_3403_; size_t v_i_boxed_3404_; size_t v_stop_boxed_3405_; uint8_t v_res_3406_; lean_object* v_r_3407_; 
v___x_1884__boxed_3403_ = lean_unbox(v___x_3399_);
v_i_boxed_3404_ = lean_unbox_usize(v_i_3401_);
lean_dec(v_i_3401_);
v_stop_boxed_3405_ = lean_unbox_usize(v_stop_3402_);
lean_dec(v_stop_3402_);
v_res_3406_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_1884__boxed_3403_, v_as_3400_, v_i_boxed_3404_, v_stop_boxed_3405_);
lean_dec_ref(v_as_3400_);
v_r_3407_ = lean_box(v_res_3406_);
return v_r_3407_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(uint8_t v___x_3408_, lean_object* v_x_3409_){
_start:
{
if (lean_obj_tag(v_x_3409_) == 0)
{
lean_object* v_cs_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; uint8_t v___x_3413_; 
v_cs_3410_ = lean_ctor_get(v_x_3409_, 0);
v___x_3411_ = lean_unsigned_to_nat(0u);
v___x_3412_ = lean_array_get_size(v_cs_3410_);
v___x_3413_ = lean_nat_dec_lt(v___x_3411_, v___x_3412_);
if (v___x_3413_ == 0)
{
return v___x_3413_;
}
else
{
if (v___x_3413_ == 0)
{
return v___x_3413_;
}
else
{
size_t v___x_3414_; size_t v___x_3415_; uint8_t v___x_3416_; 
v___x_3414_ = ((size_t)0ULL);
v___x_3415_ = lean_usize_of_nat(v___x_3412_);
v___x_3416_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(v___x_3408_, v_cs_3410_, v___x_3414_, v___x_3415_);
return v___x_3416_;
}
}
}
else
{
lean_object* v_vs_3417_; lean_object* v___x_3418_; lean_object* v___x_3419_; uint8_t v___x_3420_; 
v_vs_3417_ = lean_ctor_get(v_x_3409_, 0);
v___x_3418_ = lean_unsigned_to_nat(0u);
v___x_3419_ = lean_array_get_size(v_vs_3417_);
v___x_3420_ = lean_nat_dec_lt(v___x_3418_, v___x_3419_);
if (v___x_3420_ == 0)
{
return v___x_3420_;
}
else
{
if (v___x_3420_ == 0)
{
return v___x_3420_;
}
else
{
size_t v___x_3421_; size_t v___x_3422_; uint8_t v___x_3423_; 
v___x_3421_ = ((size_t)0ULL);
v___x_3422_ = lean_usize_of_nat(v___x_3419_);
v___x_3423_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_3408_, v_vs_3417_, v___x_3421_, v___x_3422_);
return v___x_3423_;
}
}
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(uint8_t v___x_3424_, lean_object* v_as_3425_, size_t v_i_3426_, size_t v_stop_3427_){
_start:
{
uint8_t v___x_3428_; 
v___x_3428_ = lean_usize_dec_eq(v_i_3426_, v_stop_3427_);
if (v___x_3428_ == 0)
{
lean_object* v___x_3429_; uint8_t v___x_3430_; 
v___x_3429_ = lean_array_uget_borrowed(v_as_3425_, v_i_3426_);
v___x_3430_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_3424_, v___x_3429_);
if (v___x_3430_ == 0)
{
size_t v___x_3431_; size_t v___x_3432_; 
v___x_3431_ = ((size_t)1ULL);
v___x_3432_ = lean_usize_add(v_i_3426_, v___x_3431_);
v_i_3426_ = v___x_3432_;
goto _start;
}
else
{
return v___x_3430_;
}
}
else
{
uint8_t v___x_3434_; 
v___x_3434_ = 0;
return v___x_3434_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5___boxed(lean_object* v___x_3435_, lean_object* v_as_3436_, lean_object* v_i_3437_, lean_object* v_stop_3438_){
_start:
{
uint8_t v___x_1901__boxed_3439_; size_t v_i_boxed_3440_; size_t v_stop_boxed_3441_; uint8_t v_res_3442_; lean_object* v_r_3443_; 
v___x_1901__boxed_3439_ = lean_unbox(v___x_3435_);
v_i_boxed_3440_ = lean_unbox_usize(v_i_3437_);
lean_dec(v_i_3437_);
v_stop_boxed_3441_ = lean_unbox_usize(v_stop_3438_);
lean_dec(v_stop_3438_);
v_res_3442_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3_spec__5(v___x_1901__boxed_3439_, v_as_3436_, v_i_boxed_3440_, v_stop_boxed_3441_);
lean_dec_ref(v_as_3436_);
v_r_3443_ = lean_box(v_res_3442_);
return v_r_3443_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3___boxed(lean_object* v___x_3444_, lean_object* v_x_3445_){
_start:
{
uint8_t v___x_1909__boxed_3446_; uint8_t v_res_3447_; lean_object* v_r_3448_; 
v___x_1909__boxed_3446_ = lean_unbox(v___x_3444_);
v_res_3447_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_1909__boxed_3446_, v_x_3445_);
lean_dec_ref(v_x_3445_);
v_r_3448_ = lean_box(v_res_3447_);
return v_r_3448_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(uint8_t v___x_3449_, lean_object* v_t_3450_){
_start:
{
lean_object* v_root_3451_; lean_object* v_tail_3452_; uint8_t v___x_3453_; 
v_root_3451_ = lean_ctor_get(v_t_3450_, 0);
v_tail_3452_ = lean_ctor_get(v_t_3450_, 1);
v___x_3453_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__3(v___x_3449_, v_root_3451_);
if (v___x_3453_ == 0)
{
lean_object* v___x_3454_; lean_object* v___x_3455_; uint8_t v___x_3456_; 
v___x_3454_ = lean_unsigned_to_nat(0u);
v___x_3455_ = lean_array_get_size(v_tail_3452_);
v___x_3456_ = lean_nat_dec_lt(v___x_3454_, v___x_3455_);
if (v___x_3456_ == 0)
{
return v___x_3453_;
}
else
{
if (v___x_3456_ == 0)
{
return v___x_3453_;
}
else
{
size_t v___x_3457_; size_t v___x_3458_; uint8_t v___x_3459_; 
v___x_3457_ = ((size_t)0ULL);
v___x_3458_ = lean_usize_of_nat(v___x_3455_);
v___x_3459_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1_spec__4(v___x_3449_, v_tail_3452_, v___x_3457_, v___x_3458_);
return v___x_3459_;
}
}
}
else
{
return v___x_3453_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1___boxed(lean_object* v___x_3460_, lean_object* v_t_3461_){
_start:
{
uint8_t v___x_1952__boxed_3462_; uint8_t v_res_3463_; lean_object* v_r_3464_; 
v___x_1952__boxed_3462_ = lean_unbox(v___x_3460_);
v_res_3463_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(v___x_1952__boxed_3462_, v_t_3461_);
lean_dec_ref(v_t_3461_);
v_r_3464_ = lean_box(v_res_3463_);
return v_r_3464_;
}
}
LEAN_EXPORT uint8_t l_Lean_MessageLog_hasErrors(lean_object* v_log_3465_){
_start:
{
lean_object* v_reported_3466_; lean_object* v_unreported_3467_; uint8_t v___x_3468_; 
v_reported_3466_ = lean_ctor_get(v_log_3465_, 0);
v_unreported_3467_ = lean_ctor_get(v_log_3465_, 1);
v___x_3468_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__0(v_reported_3466_);
if (v___x_3468_ == 0)
{
uint8_t v___x_3469_; 
v___x_3469_ = l_Lean_PersistentArray_anyM___at___00Lean_MessageLog_hasErrors_spec__1(v___x_3468_, v_unreported_3467_);
return v___x_3469_;
}
else
{
return v___x_3468_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_hasErrors___boxed(lean_object* v_log_3470_){
_start:
{
uint8_t v_res_3471_; lean_object* v_r_3472_; 
v_res_3471_ = l_Lean_MessageLog_hasErrors(v_log_3470_);
lean_dec_ref(v_log_3470_);
v_r_3472_ = lean_box(v_res_3471_);
return v_r_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_markAllReported(lean_object* v_log_3473_){
_start:
{
lean_object* v_reported_3474_; lean_object* v_unreported_3475_; lean_object* v_loggedKinds_3476_; lean_object* v___x_3478_; uint8_t v_isShared_3479_; uint8_t v_isSharedCheck_3487_; 
v_reported_3474_ = lean_ctor_get(v_log_3473_, 0);
v_unreported_3475_ = lean_ctor_get(v_log_3473_, 1);
v_loggedKinds_3476_ = lean_ctor_get(v_log_3473_, 2);
v_isSharedCheck_3487_ = !lean_is_exclusive(v_log_3473_);
if (v_isSharedCheck_3487_ == 0)
{
v___x_3478_ = v_log_3473_;
v_isShared_3479_ = v_isSharedCheck_3487_;
goto v_resetjp_3477_;
}
else
{
lean_inc(v_loggedKinds_3476_);
lean_inc(v_unreported_3475_);
lean_inc(v_reported_3474_);
lean_dec(v_log_3473_);
v___x_3478_ = lean_box(0);
v_isShared_3479_ = v_isSharedCheck_3487_;
goto v_resetjp_3477_;
}
v_resetjp_3477_:
{
lean_object* v___x_3480_; lean_object* v___x_3481_; lean_object* v___x_3482_; lean_object* v___x_3483_; lean_object* v___x_3485_; 
v___x_3480_ = l_Lean_PersistentArray_append___redArg(v_reported_3474_, v_unreported_3475_);
lean_dec_ref(v_unreported_3475_);
v___x_3481_ = lean_unsigned_to_nat(32u);
v___x_3482_ = lean_mk_empty_array_with_capacity(v___x_3481_);
lean_dec_ref(v___x_3482_);
v___x_3483_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
if (v_isShared_3479_ == 0)
{
lean_ctor_set(v___x_3478_, 1, v___x_3483_);
lean_ctor_set(v___x_3478_, 0, v___x_3480_);
v___x_3485_ = v___x_3478_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v___x_3480_);
lean_ctor_set(v_reuseFailAlloc_3486_, 1, v___x_3483_);
lean_ctor_set(v_reuseFailAlloc_3486_, 2, v_loggedKinds_3476_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(size_t v_sz_3488_, size_t v_i_3489_, lean_object* v_bs_3490_){
_start:
{
uint8_t v___x_3491_; 
v___x_3491_ = lean_usize_dec_lt(v_i_3489_, v_sz_3488_);
if (v___x_3491_ == 0)
{
return v_bs_3490_;
}
else
{
lean_object* v_v_3492_; lean_object* v_fileName_3493_; lean_object* v_pos_3494_; lean_object* v_endPos_3495_; uint8_t v_keepFullRange_3496_; uint8_t v_severity_3497_; uint8_t v_isSilent_3498_; lean_object* v_caption_3499_; lean_object* v_data_3500_; lean_object* v___x_3501_; lean_object* v_bs_x27_3502_; lean_object* v___y_3504_; 
v_v_3492_ = lean_array_uget(v_bs_3490_, v_i_3489_);
v_fileName_3493_ = lean_ctor_get(v_v_3492_, 0);
v_pos_3494_ = lean_ctor_get(v_v_3492_, 1);
v_endPos_3495_ = lean_ctor_get(v_v_3492_, 2);
v_keepFullRange_3496_ = lean_ctor_get_uint8(v_v_3492_, sizeof(void*)*5);
v_severity_3497_ = lean_ctor_get_uint8(v_v_3492_, sizeof(void*)*5 + 1);
v_isSilent_3498_ = lean_ctor_get_uint8(v_v_3492_, sizeof(void*)*5 + 2);
v_caption_3499_ = lean_ctor_get(v_v_3492_, 3);
v_data_3500_ = lean_ctor_get(v_v_3492_, 4);
v___x_3501_ = lean_unsigned_to_nat(0u);
v_bs_x27_3502_ = lean_array_uset(v_bs_3490_, v_i_3489_, v___x_3501_);
if (v_severity_3497_ == 2)
{
lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3516_; 
lean_inc(v_data_3500_);
lean_inc_ref(v_caption_3499_);
lean_inc(v_endPos_3495_);
lean_inc_ref(v_pos_3494_);
lean_inc_ref(v_fileName_3493_);
v_isSharedCheck_3516_ = !lean_is_exclusive(v_v_3492_);
if (v_isSharedCheck_3516_ == 0)
{
lean_object* v_unused_3517_; lean_object* v_unused_3518_; lean_object* v_unused_3519_; lean_object* v_unused_3520_; lean_object* v_unused_3521_; 
v_unused_3517_ = lean_ctor_get(v_v_3492_, 4);
lean_dec(v_unused_3517_);
v_unused_3518_ = lean_ctor_get(v_v_3492_, 3);
lean_dec(v_unused_3518_);
v_unused_3519_ = lean_ctor_get(v_v_3492_, 2);
lean_dec(v_unused_3519_);
v_unused_3520_ = lean_ctor_get(v_v_3492_, 1);
lean_dec(v_unused_3520_);
v_unused_3521_ = lean_ctor_get(v_v_3492_, 0);
lean_dec(v_unused_3521_);
v___x_3510_ = v_v_3492_;
v_isShared_3511_ = v_isSharedCheck_3516_;
goto v_resetjp_3509_;
}
else
{
lean_dec(v_v_3492_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3516_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
uint8_t v___x_3512_; lean_object* v___x_3514_; 
v___x_3512_ = 1;
if (v_isShared_3511_ == 0)
{
v___x_3514_ = v___x_3510_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v_fileName_3493_);
lean_ctor_set(v_reuseFailAlloc_3515_, 1, v_pos_3494_);
lean_ctor_set(v_reuseFailAlloc_3515_, 2, v_endPos_3495_);
lean_ctor_set(v_reuseFailAlloc_3515_, 3, v_caption_3499_);
lean_ctor_set(v_reuseFailAlloc_3515_, 4, v_data_3500_);
lean_ctor_set_uint8(v_reuseFailAlloc_3515_, sizeof(void*)*5, v_keepFullRange_3496_);
lean_ctor_set_uint8(v_reuseFailAlloc_3515_, sizeof(void*)*5 + 2, v_isSilent_3498_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
lean_ctor_set_uint8(v___x_3514_, sizeof(void*)*5 + 1, v___x_3512_);
v___y_3504_ = v___x_3514_;
goto v___jp_3503_;
}
}
}
else
{
v___y_3504_ = v_v_3492_;
goto v___jp_3503_;
}
v___jp_3503_:
{
size_t v___x_3505_; size_t v___x_3506_; lean_object* v___x_3507_; 
v___x_3505_ = ((size_t)1ULL);
v___x_3506_ = lean_usize_add(v_i_3489_, v___x_3505_);
v___x_3507_ = lean_array_uset(v_bs_x27_3502_, v_i_3489_, v___y_3504_);
v_i_3489_ = v___x_3506_;
v_bs_3490_ = v___x_3507_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1___boxed(lean_object* v_sz_3522_, lean_object* v_i_3523_, lean_object* v_bs_3524_){
_start:
{
size_t v_sz_boxed_3525_; size_t v_i_boxed_3526_; lean_object* v_res_3527_; 
v_sz_boxed_3525_ = lean_unbox_usize(v_sz_3522_);
lean_dec(v_sz_3522_);
v_i_boxed_3526_ = lean_unbox_usize(v_i_3523_);
lean_dec(v_i_3523_);
v_res_3527_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_boxed_3525_, v_i_boxed_3526_, v_bs_3524_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(size_t v_sz_3528_, size_t v_i_3529_, lean_object* v_bs_3530_){
_start:
{
uint8_t v___x_3531_; 
v___x_3531_ = lean_usize_dec_lt(v_i_3529_, v_sz_3528_);
if (v___x_3531_ == 0)
{
return v_bs_3530_;
}
else
{
lean_object* v_v_3532_; lean_object* v___x_3533_; lean_object* v_bs_x27_3534_; lean_object* v___x_3535_; size_t v___x_3536_; size_t v___x_3537_; lean_object* v___x_3538_; 
v_v_3532_ = lean_array_uget(v_bs_3530_, v_i_3529_);
v___x_3533_ = lean_unsigned_to_nat(0u);
v_bs_x27_3534_ = lean_array_uset(v_bs_3530_, v_i_3529_, v___x_3533_);
v___x_3535_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(v_v_3532_);
v___x_3536_ = ((size_t)1ULL);
v___x_3537_ = lean_usize_add(v_i_3529_, v___x_3536_);
v___x_3538_ = lean_array_uset(v_bs_x27_3534_, v_i_3529_, v___x_3535_);
v_i_3529_ = v___x_3537_;
v_bs_3530_ = v___x_3538_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(lean_object* v_x_3540_){
_start:
{
if (lean_obj_tag(v_x_3540_) == 0)
{
lean_object* v_cs_3541_; lean_object* v___x_3543_; uint8_t v_isShared_3544_; uint8_t v_isSharedCheck_3551_; 
v_cs_3541_ = lean_ctor_get(v_x_3540_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v_x_3540_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3543_ = v_x_3540_;
v_isShared_3544_ = v_isSharedCheck_3551_;
goto v_resetjp_3542_;
}
else
{
lean_inc(v_cs_3541_);
lean_dec(v_x_3540_);
v___x_3543_ = lean_box(0);
v_isShared_3544_ = v_isSharedCheck_3551_;
goto v_resetjp_3542_;
}
v_resetjp_3542_:
{
size_t v_sz_3545_; size_t v___x_3546_; lean_object* v___x_3547_; lean_object* v___x_3549_; 
v_sz_3545_ = lean_array_size(v_cs_3541_);
v___x_3546_ = ((size_t)0ULL);
v___x_3547_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(v_sz_3545_, v___x_3546_, v_cs_3541_);
if (v_isShared_3544_ == 0)
{
lean_ctor_set(v___x_3543_, 0, v___x_3547_);
v___x_3549_ = v___x_3543_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v___x_3547_);
v___x_3549_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
return v___x_3549_;
}
}
}
else
{
lean_object* v_vs_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3562_; 
v_vs_3552_ = lean_ctor_get(v_x_3540_, 0);
v_isSharedCheck_3562_ = !lean_is_exclusive(v_x_3540_);
if (v_isSharedCheck_3562_ == 0)
{
v___x_3554_ = v_x_3540_;
v_isShared_3555_ = v_isSharedCheck_3562_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_vs_3552_);
lean_dec(v_x_3540_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3562_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
size_t v_sz_3556_; size_t v___x_3557_; lean_object* v___x_3558_; lean_object* v___x_3560_; 
v_sz_3556_ = lean_array_size(v_vs_3552_);
v___x_3557_ = ((size_t)0ULL);
v___x_3558_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_3556_, v___x_3557_, v_vs_3552_);
if (v_isShared_3555_ == 0)
{
lean_ctor_set(v___x_3554_, 0, v___x_3558_);
v___x_3560_ = v___x_3554_;
goto v_reusejp_3559_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3558_);
v___x_3560_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3559_;
}
v_reusejp_3559_:
{
return v___x_3560_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3563_, lean_object* v_i_3564_, lean_object* v_bs_3565_){
_start:
{
size_t v_sz_boxed_3566_; size_t v_i_boxed_3567_; lean_object* v_res_3568_; 
v_sz_boxed_3566_ = lean_unbox_usize(v_sz_3563_);
lean_dec(v_sz_3563_);
v_i_boxed_3567_ = lean_unbox_usize(v_i_3564_);
lean_dec(v_i_3564_);
v_res_3568_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0_spec__1(v_sz_boxed_3566_, v_i_boxed_3567_, v_bs_3565_);
return v_res_3568_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(lean_object* v_t_3569_){
_start:
{
lean_object* v_root_3570_; lean_object* v_tail_3571_; lean_object* v_size_3572_; size_t v_shift_3573_; lean_object* v_tailOff_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3585_; 
v_root_3570_ = lean_ctor_get(v_t_3569_, 0);
v_tail_3571_ = lean_ctor_get(v_t_3569_, 1);
v_size_3572_ = lean_ctor_get(v_t_3569_, 2);
v_shift_3573_ = lean_ctor_get_usize(v_t_3569_, 4);
v_tailOff_3574_ = lean_ctor_get(v_t_3569_, 3);
v_isSharedCheck_3585_ = !lean_is_exclusive(v_t_3569_);
if (v_isSharedCheck_3585_ == 0)
{
v___x_3576_ = v_t_3569_;
v_isShared_3577_ = v_isSharedCheck_3585_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_tailOff_3574_);
lean_inc(v_size_3572_);
lean_inc(v_tail_3571_);
lean_inc(v_root_3570_);
lean_dec(v_t_3569_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3585_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; size_t v_sz_3579_; size_t v___x_3580_; lean_object* v___x_3581_; lean_object* v___x_3583_; 
v___x_3578_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__0(v_root_3570_);
v_sz_3579_ = lean_array_size(v_tail_3571_);
v___x_3580_ = ((size_t)0ULL);
v___x_3581_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0_spec__1(v_sz_3579_, v___x_3580_, v_tail_3571_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 1, v___x_3581_);
lean_ctor_set(v___x_3576_, 0, v___x_3578_);
v___x_3583_ = v___x_3576_;
goto v_reusejp_3582_;
}
else
{
lean_object* v_reuseFailAlloc_3584_; 
v_reuseFailAlloc_3584_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3584_, 0, v___x_3578_);
lean_ctor_set(v_reuseFailAlloc_3584_, 1, v___x_3581_);
lean_ctor_set(v_reuseFailAlloc_3584_, 2, v_size_3572_);
lean_ctor_set(v_reuseFailAlloc_3584_, 3, v_tailOff_3574_);
lean_ctor_set_usize(v_reuseFailAlloc_3584_, 4, v_shift_3573_);
v___x_3583_ = v_reuseFailAlloc_3584_;
goto v_reusejp_3582_;
}
v_reusejp_3582_:
{
return v___x_3583_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToWarnings(lean_object* v_log_3586_){
_start:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v___x_3589_; lean_object* v_unreported_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3599_; 
v___x_3587_ = lean_unsigned_to_nat(32u);
v___x_3588_ = lean_mk_empty_array_with_capacity(v___x_3587_);
lean_dec_ref(v___x_3588_);
v___x_3589_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3590_ = lean_ctor_get(v_log_3586_, 1);
v_isSharedCheck_3599_ = !lean_is_exclusive(v_log_3586_);
if (v_isSharedCheck_3599_ == 0)
{
lean_object* v_unused_3600_; lean_object* v_unused_3601_; 
v_unused_3600_ = lean_ctor_get(v_log_3586_, 2);
lean_dec(v_unused_3600_);
v_unused_3601_ = lean_ctor_get(v_log_3586_, 0);
lean_dec(v_unused_3601_);
v___x_3592_ = v_log_3586_;
v_isShared_3593_ = v_isSharedCheck_3599_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_unreported_3590_);
lean_dec(v_log_3586_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3599_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3597_; 
v___x_3594_ = l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToWarnings_spec__0(v_unreported_3590_);
v___x_3595_ = l_Lean_NameSet_empty;
if (v_isShared_3593_ == 0)
{
lean_ctor_set(v___x_3592_, 2, v___x_3595_);
lean_ctor_set(v___x_3592_, 1, v___x_3594_);
lean_ctor_set(v___x_3592_, 0, v___x_3589_);
v___x_3597_ = v___x_3592_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3589_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v___x_3594_);
lean_ctor_set(v_reuseFailAlloc_3598_, 2, v___x_3595_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(size_t v_sz_3602_, size_t v_i_3603_, lean_object* v_bs_3604_){
_start:
{
uint8_t v___x_3605_; 
v___x_3605_ = lean_usize_dec_lt(v_i_3603_, v_sz_3602_);
if (v___x_3605_ == 0)
{
return v_bs_3604_;
}
else
{
lean_object* v_v_3606_; lean_object* v_fileName_3607_; lean_object* v_pos_3608_; lean_object* v_endPos_3609_; uint8_t v_keepFullRange_3610_; uint8_t v_severity_3611_; uint8_t v_isSilent_3612_; lean_object* v_caption_3613_; lean_object* v_data_3614_; lean_object* v___x_3615_; lean_object* v_bs_x27_3616_; lean_object* v___y_3618_; 
v_v_3606_ = lean_array_uget(v_bs_3604_, v_i_3603_);
v_fileName_3607_ = lean_ctor_get(v_v_3606_, 0);
v_pos_3608_ = lean_ctor_get(v_v_3606_, 1);
v_endPos_3609_ = lean_ctor_get(v_v_3606_, 2);
v_keepFullRange_3610_ = lean_ctor_get_uint8(v_v_3606_, sizeof(void*)*5);
v_severity_3611_ = lean_ctor_get_uint8(v_v_3606_, sizeof(void*)*5 + 1);
v_isSilent_3612_ = lean_ctor_get_uint8(v_v_3606_, sizeof(void*)*5 + 2);
v_caption_3613_ = lean_ctor_get(v_v_3606_, 3);
v_data_3614_ = lean_ctor_get(v_v_3606_, 4);
v___x_3615_ = lean_unsigned_to_nat(0u);
v_bs_x27_3616_ = lean_array_uset(v_bs_3604_, v_i_3603_, v___x_3615_);
if (v_severity_3611_ == 2)
{
lean_object* v___x_3624_; uint8_t v_isShared_3625_; uint8_t v_isSharedCheck_3630_; 
lean_inc(v_data_3614_);
lean_inc_ref(v_caption_3613_);
lean_inc(v_endPos_3609_);
lean_inc_ref(v_pos_3608_);
lean_inc_ref(v_fileName_3607_);
v_isSharedCheck_3630_ = !lean_is_exclusive(v_v_3606_);
if (v_isSharedCheck_3630_ == 0)
{
lean_object* v_unused_3631_; lean_object* v_unused_3632_; lean_object* v_unused_3633_; lean_object* v_unused_3634_; lean_object* v_unused_3635_; 
v_unused_3631_ = lean_ctor_get(v_v_3606_, 4);
lean_dec(v_unused_3631_);
v_unused_3632_ = lean_ctor_get(v_v_3606_, 3);
lean_dec(v_unused_3632_);
v_unused_3633_ = lean_ctor_get(v_v_3606_, 2);
lean_dec(v_unused_3633_);
v_unused_3634_ = lean_ctor_get(v_v_3606_, 1);
lean_dec(v_unused_3634_);
v_unused_3635_ = lean_ctor_get(v_v_3606_, 0);
lean_dec(v_unused_3635_);
v___x_3624_ = v_v_3606_;
v_isShared_3625_ = v_isSharedCheck_3630_;
goto v_resetjp_3623_;
}
else
{
lean_dec(v_v_3606_);
v___x_3624_ = lean_box(0);
v_isShared_3625_ = v_isSharedCheck_3630_;
goto v_resetjp_3623_;
}
v_resetjp_3623_:
{
uint8_t v___x_3626_; lean_object* v___x_3628_; 
v___x_3626_ = 0;
if (v_isShared_3625_ == 0)
{
v___x_3628_ = v___x_3624_;
goto v_reusejp_3627_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v_fileName_3607_);
lean_ctor_set(v_reuseFailAlloc_3629_, 1, v_pos_3608_);
lean_ctor_set(v_reuseFailAlloc_3629_, 2, v_endPos_3609_);
lean_ctor_set(v_reuseFailAlloc_3629_, 3, v_caption_3613_);
lean_ctor_set(v_reuseFailAlloc_3629_, 4, v_data_3614_);
lean_ctor_set_uint8(v_reuseFailAlloc_3629_, sizeof(void*)*5, v_keepFullRange_3610_);
lean_ctor_set_uint8(v_reuseFailAlloc_3629_, sizeof(void*)*5 + 2, v_isSilent_3612_);
v___x_3628_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3627_;
}
v_reusejp_3627_:
{
lean_ctor_set_uint8(v___x_3628_, sizeof(void*)*5 + 1, v___x_3626_);
v___y_3618_ = v___x_3628_;
goto v___jp_3617_;
}
}
}
else
{
v___y_3618_ = v_v_3606_;
goto v___jp_3617_;
}
v___jp_3617_:
{
size_t v___x_3619_; size_t v___x_3620_; lean_object* v___x_3621_; 
v___x_3619_ = ((size_t)1ULL);
v___x_3620_ = lean_usize_add(v_i_3603_, v___x_3619_);
v___x_3621_ = lean_array_uset(v_bs_x27_3616_, v_i_3603_, v___y_3618_);
v_i_3603_ = v___x_3620_;
v_bs_3604_ = v___x_3621_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1___boxed(lean_object* v_sz_3636_, lean_object* v_i_3637_, lean_object* v_bs_3638_){
_start:
{
size_t v_sz_boxed_3639_; size_t v_i_boxed_3640_; lean_object* v_res_3641_; 
v_sz_boxed_3639_ = lean_unbox_usize(v_sz_3636_);
lean_dec(v_sz_3636_);
v_i_boxed_3640_ = lean_unbox_usize(v_i_3637_);
lean_dec(v_i_3637_);
v_res_3641_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_boxed_3639_, v_i_boxed_3640_, v_bs_3638_);
return v_res_3641_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(size_t v_sz_3642_, size_t v_i_3643_, lean_object* v_bs_3644_){
_start:
{
uint8_t v___x_3645_; 
v___x_3645_ = lean_usize_dec_lt(v_i_3643_, v_sz_3642_);
if (v___x_3645_ == 0)
{
return v_bs_3644_;
}
else
{
lean_object* v_v_3646_; lean_object* v___x_3647_; lean_object* v_bs_x27_3648_; lean_object* v___x_3649_; size_t v___x_3650_; size_t v___x_3651_; lean_object* v___x_3652_; 
v_v_3646_ = lean_array_uget(v_bs_3644_, v_i_3643_);
v___x_3647_ = lean_unsigned_to_nat(0u);
v_bs_x27_3648_ = lean_array_uset(v_bs_3644_, v_i_3643_, v___x_3647_);
v___x_3649_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(v_v_3646_);
v___x_3650_ = ((size_t)1ULL);
v___x_3651_ = lean_usize_add(v_i_3643_, v___x_3650_);
v___x_3652_ = lean_array_uset(v_bs_x27_3648_, v_i_3643_, v___x_3649_);
v_i_3643_ = v___x_3651_;
v_bs_3644_ = v___x_3652_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(lean_object* v_x_3654_){
_start:
{
if (lean_obj_tag(v_x_3654_) == 0)
{
lean_object* v_cs_3655_; lean_object* v___x_3657_; uint8_t v_isShared_3658_; uint8_t v_isSharedCheck_3665_; 
v_cs_3655_ = lean_ctor_get(v_x_3654_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v_x_3654_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3657_ = v_x_3654_;
v_isShared_3658_ = v_isSharedCheck_3665_;
goto v_resetjp_3656_;
}
else
{
lean_inc(v_cs_3655_);
lean_dec(v_x_3654_);
v___x_3657_ = lean_box(0);
v_isShared_3658_ = v_isSharedCheck_3665_;
goto v_resetjp_3656_;
}
v_resetjp_3656_:
{
size_t v_sz_3659_; size_t v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3663_; 
v_sz_3659_ = lean_array_size(v_cs_3655_);
v___x_3660_ = ((size_t)0ULL);
v___x_3661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(v_sz_3659_, v___x_3660_, v_cs_3655_);
if (v_isShared_3658_ == 0)
{
lean_ctor_set(v___x_3657_, 0, v___x_3661_);
v___x_3663_ = v___x_3657_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v___x_3661_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
else
{
lean_object* v_vs_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3676_; 
v_vs_3666_ = lean_ctor_get(v_x_3654_, 0);
v_isSharedCheck_3676_ = !lean_is_exclusive(v_x_3654_);
if (v_isSharedCheck_3676_ == 0)
{
v___x_3668_ = v_x_3654_;
v_isShared_3669_ = v_isSharedCheck_3676_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_vs_3666_);
lean_dec(v_x_3654_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3676_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
size_t v_sz_3670_; size_t v___x_3671_; lean_object* v___x_3672_; lean_object* v___x_3674_; 
v_sz_3670_ = lean_array_size(v_vs_3666_);
v___x_3671_ = ((size_t)0ULL);
v___x_3672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_3670_, v___x_3671_, v_vs_3666_);
if (v_isShared_3669_ == 0)
{
lean_ctor_set(v___x_3668_, 0, v___x_3672_);
v___x_3674_ = v___x_3668_;
goto v_reusejp_3673_;
}
else
{
lean_object* v_reuseFailAlloc_3675_; 
v_reuseFailAlloc_3675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3675_, 0, v___x_3672_);
v___x_3674_ = v_reuseFailAlloc_3675_;
goto v_reusejp_3673_;
}
v_reusejp_3673_:
{
return v___x_3674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1___boxed(lean_object* v_sz_3677_, lean_object* v_i_3678_, lean_object* v_bs_3679_){
_start:
{
size_t v_sz_boxed_3680_; size_t v_i_boxed_3681_; lean_object* v_res_3682_; 
v_sz_boxed_3680_ = lean_unbox_usize(v_sz_3677_);
lean_dec(v_sz_3677_);
v_i_boxed_3681_ = lean_unbox_usize(v_i_3678_);
lean_dec(v_i_3678_);
v_res_3682_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0_spec__1(v_sz_boxed_3680_, v_i_boxed_3681_, v_bs_3679_);
return v_res_3682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(lean_object* v_t_3683_){
_start:
{
lean_object* v_root_3684_; lean_object* v_tail_3685_; lean_object* v_size_3686_; size_t v_shift_3687_; lean_object* v_tailOff_3688_; lean_object* v___x_3690_; uint8_t v_isShared_3691_; uint8_t v_isSharedCheck_3699_; 
v_root_3684_ = lean_ctor_get(v_t_3683_, 0);
v_tail_3685_ = lean_ctor_get(v_t_3683_, 1);
v_size_3686_ = lean_ctor_get(v_t_3683_, 2);
v_shift_3687_ = lean_ctor_get_usize(v_t_3683_, 4);
v_tailOff_3688_ = lean_ctor_get(v_t_3683_, 3);
v_isSharedCheck_3699_ = !lean_is_exclusive(v_t_3683_);
if (v_isSharedCheck_3699_ == 0)
{
v___x_3690_ = v_t_3683_;
v_isShared_3691_ = v_isSharedCheck_3699_;
goto v_resetjp_3689_;
}
else
{
lean_inc(v_tailOff_3688_);
lean_inc(v_size_3686_);
lean_inc(v_tail_3685_);
lean_inc(v_root_3684_);
lean_dec(v_t_3683_);
v___x_3690_ = lean_box(0);
v_isShared_3691_ = v_isSharedCheck_3699_;
goto v_resetjp_3689_;
}
v_resetjp_3689_:
{
lean_object* v___x_3692_; size_t v_sz_3693_; size_t v___x_3694_; lean_object* v___x_3695_; lean_object* v___x_3697_; 
v___x_3692_ = l_Lean_PersistentArray_mapMAux___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__0(v_root_3684_);
v_sz_3693_ = lean_array_size(v_tail_3685_);
v___x_3694_ = ((size_t)0ULL);
v___x_3695_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0_spec__1(v_sz_3693_, v___x_3694_, v_tail_3685_);
if (v_isShared_3691_ == 0)
{
lean_ctor_set(v___x_3690_, 1, v___x_3695_);
lean_ctor_set(v___x_3690_, 0, v___x_3692_);
v___x_3697_ = v___x_3690_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3698_; 
v_reuseFailAlloc_3698_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_3698_, 0, v___x_3692_);
lean_ctor_set(v_reuseFailAlloc_3698_, 1, v___x_3695_);
lean_ctor_set(v_reuseFailAlloc_3698_, 2, v_size_3686_);
lean_ctor_set(v_reuseFailAlloc_3698_, 3, v_tailOff_3688_);
lean_ctor_set_usize(v_reuseFailAlloc_3698_, 4, v_shift_3687_);
v___x_3697_ = v_reuseFailAlloc_3698_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
return v___x_3697_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_errorsToInfos(lean_object* v_log_3700_){
_start:
{
lean_object* v___x_3701_; lean_object* v___x_3702_; lean_object* v___x_3703_; lean_object* v_unreported_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3713_; 
v___x_3701_ = lean_unsigned_to_nat(32u);
v___x_3702_ = lean_mk_empty_array_with_capacity(v___x_3701_);
lean_dec_ref(v___x_3702_);
v___x_3703_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3704_ = lean_ctor_get(v_log_3700_, 1);
v_isSharedCheck_3713_ = !lean_is_exclusive(v_log_3700_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; lean_object* v_unused_3715_; 
v_unused_3714_ = lean_ctor_get(v_log_3700_, 2);
lean_dec(v_unused_3714_);
v_unused_3715_ = lean_ctor_get(v_log_3700_, 0);
lean_dec(v_unused_3715_);
v___x_3706_ = v_log_3700_;
v_isShared_3707_ = v_isSharedCheck_3713_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_unreported_3704_);
lean_dec(v_log_3700_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3713_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3708_; lean_object* v___x_3709_; lean_object* v___x_3711_; 
v___x_3708_ = l_Lean_PersistentArray_mapM___at___00Lean_MessageLog_errorsToInfos_spec__0(v_unreported_3704_);
v___x_3709_ = l_Lean_NameSet_empty;
if (v_isShared_3707_ == 0)
{
lean_ctor_set(v___x_3706_, 2, v___x_3709_);
lean_ctor_set(v___x_3706_, 1, v___x_3708_);
lean_ctor_set(v___x_3706_, 0, v___x_3703_);
v___x_3711_ = v___x_3706_;
goto v_reusejp_3710_;
}
else
{
lean_object* v_reuseFailAlloc_3712_; 
v_reuseFailAlloc_3712_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3712_, 0, v___x_3703_);
lean_ctor_set(v_reuseFailAlloc_3712_, 1, v___x_3708_);
lean_ctor_set(v_reuseFailAlloc_3712_, 2, v___x_3709_);
v___x_3711_ = v_reuseFailAlloc_3712_;
goto v_reusejp_3710_;
}
v_reusejp_3710_:
{
return v___x_3711_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(lean_object* v_as_3716_, size_t v_i_3717_, size_t v_stop_3718_, lean_object* v_b_3719_){
_start:
{
lean_object* v___y_3721_; uint8_t v___x_3725_; 
v___x_3725_ = lean_usize_dec_eq(v_i_3717_, v_stop_3718_);
if (v___x_3725_ == 0)
{
lean_object* v___x_3726_; uint8_t v_severity_3727_; 
v___x_3726_ = lean_array_uget_borrowed(v_as_3716_, v_i_3717_);
v_severity_3727_ = lean_ctor_get_uint8(v___x_3726_, sizeof(void*)*5 + 1);
if (v_severity_3727_ == 0)
{
lean_object* v___x_3728_; 
lean_inc(v___x_3726_);
v___x_3728_ = l_Lean_PersistentArray_push___redArg(v_b_3719_, v___x_3726_);
v___y_3721_ = v___x_3728_;
goto v___jp_3720_;
}
else
{
v___y_3721_ = v_b_3719_;
goto v___jp_3720_;
}
}
else
{
return v_b_3719_;
}
v___jp_3720_:
{
size_t v___x_3722_; size_t v___x_3723_; 
v___x_3722_ = ((size_t)1ULL);
v___x_3723_ = lean_usize_add(v_i_3717_, v___x_3722_);
v_i_3717_ = v___x_3723_;
v_b_3719_ = v___y_3721_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1___boxed(lean_object* v_as_3729_, lean_object* v_i_3730_, lean_object* v_stop_3731_, lean_object* v_b_3732_){
_start:
{
size_t v_i_boxed_3733_; size_t v_stop_boxed_3734_; lean_object* v_res_3735_; 
v_i_boxed_3733_ = lean_unbox_usize(v_i_3730_);
lean_dec(v_i_3730_);
v_stop_boxed_3734_ = lean_unbox_usize(v_stop_3731_);
lean_dec(v_stop_3731_);
v_res_3735_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_as_3729_, v_i_boxed_3733_, v_stop_boxed_3734_, v_b_3732_);
lean_dec_ref(v_as_3729_);
return v_res_3735_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(lean_object* v_x_3736_, lean_object* v_x_3737_){
_start:
{
if (lean_obj_tag(v_x_3736_) == 0)
{
lean_object* v_cs_3738_; lean_object* v___x_3739_; lean_object* v___x_3740_; uint8_t v___x_3741_; 
v_cs_3738_ = lean_ctor_get(v_x_3736_, 0);
v___x_3739_ = lean_unsigned_to_nat(0u);
v___x_3740_ = lean_array_get_size(v_cs_3738_);
v___x_3741_ = lean_nat_dec_lt(v___x_3739_, v___x_3740_);
if (v___x_3741_ == 0)
{
return v_x_3737_;
}
else
{
uint8_t v___x_3742_; 
v___x_3742_ = lean_nat_dec_le(v___x_3740_, v___x_3740_);
if (v___x_3742_ == 0)
{
if (v___x_3741_ == 0)
{
return v_x_3737_;
}
else
{
size_t v___x_3743_; size_t v___x_3744_; lean_object* v___x_3745_; 
v___x_3743_ = ((size_t)0ULL);
v___x_3744_ = lean_usize_of_nat(v___x_3740_);
v___x_3745_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3738_, v___x_3743_, v___x_3744_, v_x_3737_);
return v___x_3745_;
}
}
else
{
size_t v___x_3746_; size_t v___x_3747_; lean_object* v___x_3748_; 
v___x_3746_ = ((size_t)0ULL);
v___x_3747_ = lean_usize_of_nat(v___x_3740_);
v___x_3748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3738_, v___x_3746_, v___x_3747_, v_x_3737_);
return v___x_3748_;
}
}
}
else
{
lean_object* v_vs_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; uint8_t v___x_3752_; 
v_vs_3749_ = lean_ctor_get(v_x_3736_, 0);
v___x_3750_ = lean_unsigned_to_nat(0u);
v___x_3751_ = lean_array_get_size(v_vs_3749_);
v___x_3752_ = lean_nat_dec_lt(v___x_3750_, v___x_3751_);
if (v___x_3752_ == 0)
{
return v_x_3737_;
}
else
{
uint8_t v___x_3753_; 
v___x_3753_ = lean_nat_dec_le(v___x_3751_, v___x_3751_);
if (v___x_3753_ == 0)
{
if (v___x_3752_ == 0)
{
return v_x_3737_;
}
else
{
size_t v___x_3754_; size_t v___x_3755_; lean_object* v___x_3756_; 
v___x_3754_ = ((size_t)0ULL);
v___x_3755_ = lean_usize_of_nat(v___x_3751_);
v___x_3756_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3749_, v___x_3754_, v___x_3755_, v_x_3737_);
return v___x_3756_;
}
}
else
{
size_t v___x_3757_; size_t v___x_3758_; lean_object* v___x_3759_; 
v___x_3757_ = ((size_t)0ULL);
v___x_3758_ = lean_usize_of_nat(v___x_3751_);
v___x_3759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3749_, v___x_3757_, v___x_3758_, v_x_3737_);
return v___x_3759_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(lean_object* v_as_3760_, size_t v_i_3761_, size_t v_stop_3762_, lean_object* v_b_3763_){
_start:
{
uint8_t v___x_3764_; 
v___x_3764_ = lean_usize_dec_eq(v_i_3761_, v_stop_3762_);
if (v___x_3764_ == 0)
{
lean_object* v___x_3765_; lean_object* v___x_3766_; size_t v___x_3767_; size_t v___x_3768_; 
v___x_3765_ = lean_array_uget_borrowed(v_as_3760_, v_i_3761_);
v___x_3766_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v___x_3765_, v_b_3763_);
v___x_3767_ = ((size_t)1ULL);
v___x_3768_ = lean_usize_add(v_i_3761_, v___x_3767_);
v_i_3761_ = v___x_3768_;
v_b_3763_ = v___x_3766_;
goto _start;
}
else
{
return v_b_3763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3770_, lean_object* v_i_3771_, lean_object* v_stop_3772_, lean_object* v_b_3773_){
_start:
{
size_t v_i_boxed_3774_; size_t v_stop_boxed_3775_; lean_object* v_res_3776_; 
v_i_boxed_3774_ = lean_unbox_usize(v_i_3771_);
lean_dec(v_i_3771_);
v_stop_boxed_3775_ = lean_unbox_usize(v_stop_3772_);
lean_dec(v_stop_3772_);
v_res_3776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_as_3770_, v_i_boxed_3774_, v_stop_boxed_3775_, v_b_3773_);
lean_dec_ref(v_as_3770_);
return v_res_3776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2___boxed(lean_object* v_x_3777_, lean_object* v_x_3778_){
_start:
{
lean_object* v_res_3779_; 
v_res_3779_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v_x_3777_, v_x_3778_);
lean_dec_ref(v_x_3777_);
return v_res_3779_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_3780_; 
v___x_3780_ = l_Lean_instInhabitedPersistentArrayNode_default(lean_box(0));
return v___x_3780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(lean_object* v_x_3781_, size_t v_x_3782_, size_t v_x_3783_, lean_object* v_x_3784_){
_start:
{
if (lean_obj_tag(v_x_3781_) == 0)
{
lean_object* v_cs_3785_; lean_object* v___x_3786_; size_t v___x_3787_; lean_object* v_j_3788_; lean_object* v___x_3789_; size_t v___x_3790_; size_t v___x_3791_; size_t v___x_3792_; size_t v___x_3793_; size_t v___x_3794_; size_t v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; uint8_t v___x_3800_; 
v_cs_3785_ = lean_ctor_get(v_x_3781_, 0);
v___x_3786_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0);
v___x_3787_ = lean_usize_shift_right(v_x_3782_, v_x_3783_);
v_j_3788_ = lean_usize_to_nat(v___x_3787_);
v___x_3789_ = lean_array_get_borrowed(v___x_3786_, v_cs_3785_, v_j_3788_);
v___x_3790_ = ((size_t)1ULL);
v___x_3791_ = lean_usize_shift_left(v___x_3790_, v_x_3783_);
v___x_3792_ = lean_usize_sub(v___x_3791_, v___x_3790_);
v___x_3793_ = lean_usize_land(v_x_3782_, v___x_3792_);
v___x_3794_ = ((size_t)5ULL);
v___x_3795_ = lean_usize_sub(v_x_3783_, v___x_3794_);
v___x_3796_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v___x_3789_, v___x_3793_, v___x_3795_, v_x_3784_);
v___x_3797_ = lean_unsigned_to_nat(1u);
v___x_3798_ = lean_nat_add(v_j_3788_, v___x_3797_);
lean_dec(v_j_3788_);
v___x_3799_ = lean_array_get_size(v_cs_3785_);
v___x_3800_ = lean_nat_dec_lt(v___x_3798_, v___x_3799_);
if (v___x_3800_ == 0)
{
lean_dec(v___x_3798_);
return v___x_3796_;
}
else
{
uint8_t v___x_3801_; 
v___x_3801_ = lean_nat_dec_le(v___x_3799_, v___x_3799_);
if (v___x_3801_ == 0)
{
if (v___x_3800_ == 0)
{
lean_dec(v___x_3798_);
return v___x_3796_;
}
else
{
size_t v___x_3802_; size_t v___x_3803_; lean_object* v___x_3804_; 
v___x_3802_ = lean_usize_of_nat(v___x_3798_);
lean_dec(v___x_3798_);
v___x_3803_ = lean_usize_of_nat(v___x_3799_);
v___x_3804_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3785_, v___x_3802_, v___x_3803_, v___x_3796_);
return v___x_3804_;
}
}
else
{
size_t v___x_3805_; size_t v___x_3806_; lean_object* v___x_3807_; 
v___x_3805_ = lean_usize_of_nat(v___x_3798_);
lean_dec(v___x_3798_);
v___x_3806_ = lean_usize_of_nat(v___x_3799_);
v___x_3807_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0_spec__1(v_cs_3785_, v___x_3805_, v___x_3806_, v___x_3796_);
return v___x_3807_;
}
}
}
else
{
lean_object* v_vs_3808_; lean_object* v___x_3809_; lean_object* v___x_3810_; uint8_t v___x_3811_; 
v_vs_3808_ = lean_ctor_get(v_x_3781_, 0);
v___x_3809_ = lean_usize_to_nat(v_x_3782_);
v___x_3810_ = lean_array_get_size(v_vs_3808_);
v___x_3811_ = lean_nat_dec_lt(v___x_3809_, v___x_3810_);
if (v___x_3811_ == 0)
{
lean_dec(v___x_3809_);
return v_x_3784_;
}
else
{
uint8_t v___x_3812_; 
v___x_3812_ = lean_nat_dec_le(v___x_3810_, v___x_3810_);
if (v___x_3812_ == 0)
{
if (v___x_3811_ == 0)
{
lean_dec(v___x_3809_);
return v_x_3784_;
}
else
{
size_t v___x_3813_; size_t v___x_3814_; lean_object* v___x_3815_; 
v___x_3813_ = lean_usize_of_nat(v___x_3809_);
lean_dec(v___x_3809_);
v___x_3814_ = lean_usize_of_nat(v___x_3810_);
v___x_3815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3808_, v___x_3813_, v___x_3814_, v_x_3784_);
return v___x_3815_;
}
}
else
{
size_t v___x_3816_; size_t v___x_3817_; lean_object* v___x_3818_; 
v___x_3816_ = lean_usize_of_nat(v___x_3809_);
lean_dec(v___x_3809_);
v___x_3817_ = lean_usize_of_nat(v___x_3810_);
v___x_3818_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_vs_3808_, v___x_3816_, v___x_3817_, v_x_3784_);
return v___x_3818_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___boxed(lean_object* v_x_3819_, lean_object* v_x_3820_, lean_object* v_x_3821_, lean_object* v_x_3822_){
_start:
{
size_t v_x_1528__boxed_3823_; size_t v_x_1529__boxed_3824_; lean_object* v_res_3825_; 
v_x_1528__boxed_3823_ = lean_unbox_usize(v_x_3820_);
lean_dec(v_x_3820_);
v_x_1529__boxed_3824_ = lean_unbox_usize(v_x_3821_);
lean_dec(v_x_3821_);
v_res_3825_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v_x_3819_, v_x_1528__boxed_3823_, v_x_1529__boxed_3824_, v_x_3822_);
lean_dec_ref(v_x_3819_);
return v_res_3825_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(lean_object* v_t_3826_, lean_object* v_init_3827_, lean_object* v_start_3828_){
_start:
{
lean_object* v___x_3829_; uint8_t v___x_3830_; 
v___x_3829_ = lean_unsigned_to_nat(0u);
v___x_3830_ = lean_nat_dec_eq(v_start_3828_, v___x_3829_);
if (v___x_3830_ == 0)
{
lean_object* v_root_3831_; lean_object* v_tail_3832_; size_t v_shift_3833_; lean_object* v_tailOff_3834_; uint8_t v___x_3835_; 
v_root_3831_ = lean_ctor_get(v_t_3826_, 0);
v_tail_3832_ = lean_ctor_get(v_t_3826_, 1);
v_shift_3833_ = lean_ctor_get_usize(v_t_3826_, 4);
v_tailOff_3834_ = lean_ctor_get(v_t_3826_, 3);
v___x_3835_ = lean_nat_dec_le(v_tailOff_3834_, v_start_3828_);
if (v___x_3835_ == 0)
{
size_t v___x_3836_; lean_object* v___x_3837_; lean_object* v___x_3838_; uint8_t v___x_3839_; 
v___x_3836_ = lean_usize_of_nat(v_start_3828_);
v___x_3837_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0(v_root_3831_, v___x_3836_, v_shift_3833_, v_init_3827_);
v___x_3838_ = lean_array_get_size(v_tail_3832_);
v___x_3839_ = lean_nat_dec_lt(v___x_3829_, v___x_3838_);
if (v___x_3839_ == 0)
{
return v___x_3837_;
}
else
{
uint8_t v___x_3840_; 
v___x_3840_ = lean_nat_dec_le(v___x_3838_, v___x_3838_);
if (v___x_3840_ == 0)
{
if (v___x_3839_ == 0)
{
return v___x_3837_;
}
else
{
size_t v___x_3841_; size_t v___x_3842_; lean_object* v___x_3843_; 
v___x_3841_ = ((size_t)0ULL);
v___x_3842_ = lean_usize_of_nat(v___x_3838_);
v___x_3843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3832_, v___x_3841_, v___x_3842_, v___x_3837_);
return v___x_3843_;
}
}
else
{
size_t v___x_3844_; size_t v___x_3845_; lean_object* v___x_3846_; 
v___x_3844_ = ((size_t)0ULL);
v___x_3845_ = lean_usize_of_nat(v___x_3838_);
v___x_3846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3832_, v___x_3844_, v___x_3845_, v___x_3837_);
return v___x_3846_;
}
}
}
else
{
lean_object* v___x_3847_; lean_object* v___x_3848_; uint8_t v___x_3849_; 
v___x_3847_ = lean_nat_sub(v_start_3828_, v_tailOff_3834_);
v___x_3848_ = lean_array_get_size(v_tail_3832_);
v___x_3849_ = lean_nat_dec_lt(v___x_3847_, v___x_3848_);
if (v___x_3849_ == 0)
{
lean_dec(v___x_3847_);
return v_init_3827_;
}
else
{
uint8_t v___x_3850_; 
v___x_3850_ = lean_nat_dec_le(v___x_3848_, v___x_3848_);
if (v___x_3850_ == 0)
{
if (v___x_3849_ == 0)
{
lean_dec(v___x_3847_);
return v_init_3827_;
}
else
{
size_t v___x_3851_; size_t v___x_3852_; lean_object* v___x_3853_; 
v___x_3851_ = lean_usize_of_nat(v___x_3847_);
lean_dec(v___x_3847_);
v___x_3852_ = lean_usize_of_nat(v___x_3848_);
v___x_3853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3832_, v___x_3851_, v___x_3852_, v_init_3827_);
return v___x_3853_;
}
}
else
{
size_t v___x_3854_; size_t v___x_3855_; lean_object* v___x_3856_; 
v___x_3854_ = lean_usize_of_nat(v___x_3847_);
lean_dec(v___x_3847_);
v___x_3855_ = lean_usize_of_nat(v___x_3848_);
v___x_3856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3832_, v___x_3854_, v___x_3855_, v_init_3827_);
return v___x_3856_;
}
}
}
}
else
{
lean_object* v_root_3857_; lean_object* v_tail_3858_; lean_object* v___x_3859_; lean_object* v___x_3860_; uint8_t v___x_3861_; 
v_root_3857_ = lean_ctor_get(v_t_3826_, 0);
v_tail_3858_ = lean_ctor_get(v_t_3826_, 1);
v___x_3859_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__2(v_root_3857_, v_init_3827_);
v___x_3860_ = lean_array_get_size(v_tail_3858_);
v___x_3861_ = lean_nat_dec_lt(v___x_3829_, v___x_3860_);
if (v___x_3861_ == 0)
{
return v___x_3859_;
}
else
{
uint8_t v___x_3862_; 
v___x_3862_ = lean_nat_dec_le(v___x_3860_, v___x_3860_);
if (v___x_3862_ == 0)
{
if (v___x_3861_ == 0)
{
return v___x_3859_;
}
else
{
size_t v___x_3863_; size_t v___x_3864_; lean_object* v___x_3865_; 
v___x_3863_ = ((size_t)0ULL);
v___x_3864_ = lean_usize_of_nat(v___x_3860_);
v___x_3865_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3858_, v___x_3863_, v___x_3864_, v___x_3859_);
return v___x_3865_;
}
}
else
{
size_t v___x_3866_; size_t v___x_3867_; lean_object* v___x_3868_; 
v___x_3866_ = ((size_t)0ULL);
v___x_3867_ = lean_usize_of_nat(v___x_3860_);
v___x_3868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__1(v_tail_3858_, v___x_3866_, v___x_3867_, v___x_3859_);
return v___x_3868_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0___boxed(lean_object* v_t_3869_, lean_object* v_init_3870_, lean_object* v_start_3871_){
_start:
{
lean_object* v_res_3872_; 
v_res_3872_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(v_t_3869_, v_init_3870_, v_start_3871_);
lean_dec(v_start_3871_);
lean_dec_ref(v_t_3869_);
return v_res_3872_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_getInfoMessages(lean_object* v_log_3873_){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v_unreported_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3887_; 
v___x_3874_ = lean_unsigned_to_nat(32u);
v___x_3875_ = lean_mk_empty_array_with_capacity(v___x_3874_);
lean_dec_ref(v___x_3875_);
v___x_3876_ = lean_unsigned_to_nat(0u);
v___x_3877_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_3878_ = lean_ctor_get(v_log_3873_, 1);
v_isSharedCheck_3887_ = !lean_is_exclusive(v_log_3873_);
if (v_isSharedCheck_3887_ == 0)
{
lean_object* v_unused_3888_; lean_object* v_unused_3889_; 
v_unused_3888_ = lean_ctor_get(v_log_3873_, 2);
lean_dec(v_unused_3888_);
v_unused_3889_ = lean_ctor_get(v_log_3873_, 0);
lean_dec(v_unused_3889_);
v___x_3880_ = v_log_3873_;
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_unreported_3878_);
lean_dec(v_log_3873_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3885_; 
v___x_3882_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0(v_unreported_3878_, v___x_3877_, v___x_3876_);
lean_dec_ref(v_unreported_3878_);
v___x_3883_ = l_Lean_NameSet_empty;
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 2, v___x_3883_);
lean_ctor_set(v___x_3880_, 1, v___x_3882_);
lean_ctor_set(v___x_3880_, 0, v___x_3877_);
v___x_3885_ = v___x_3880_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3877_);
lean_ctor_set(v_reuseFailAlloc_3886_, 1, v___x_3882_);
lean_ctor_set(v_reuseFailAlloc_3886_, 2, v___x_3883_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(lean_object* v_as_3890_, size_t v_i_3891_, size_t v_stop_3892_, lean_object* v_b_3893_){
_start:
{
lean_object* v___y_3895_; uint8_t v___x_3899_; 
v___x_3899_ = lean_usize_dec_eq(v_i_3891_, v_stop_3892_);
if (v___x_3899_ == 0)
{
lean_object* v___x_3900_; uint8_t v_severity_3901_; 
v___x_3900_ = lean_array_uget_borrowed(v_as_3890_, v_i_3891_);
v_severity_3901_ = lean_ctor_get_uint8(v___x_3900_, sizeof(void*)*5 + 1);
if (v_severity_3901_ == 1)
{
lean_object* v___x_3902_; 
lean_inc(v___x_3900_);
v___x_3902_ = l_Lean_PersistentArray_push___redArg(v_b_3893_, v___x_3900_);
v___y_3895_ = v___x_3902_;
goto v___jp_3894_;
}
else
{
v___y_3895_ = v_b_3893_;
goto v___jp_3894_;
}
}
else
{
return v_b_3893_;
}
v___jp_3894_:
{
size_t v___x_3896_; size_t v___x_3897_; 
v___x_3896_ = ((size_t)1ULL);
v___x_3897_ = lean_usize_add(v_i_3891_, v___x_3896_);
v_i_3891_ = v___x_3897_;
v_b_3893_ = v___y_3895_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1___boxed(lean_object* v_as_3903_, lean_object* v_i_3904_, lean_object* v_stop_3905_, lean_object* v_b_3906_){
_start:
{
size_t v_i_boxed_3907_; size_t v_stop_boxed_3908_; lean_object* v_res_3909_; 
v_i_boxed_3907_ = lean_unbox_usize(v_i_3904_);
lean_dec(v_i_3904_);
v_stop_boxed_3908_ = lean_unbox_usize(v_stop_3905_);
lean_dec(v_stop_3905_);
v_res_3909_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_as_3903_, v_i_boxed_3907_, v_stop_boxed_3908_, v_b_3906_);
lean_dec_ref(v_as_3903_);
return v_res_3909_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(lean_object* v_x_3910_, lean_object* v_x_3911_){
_start:
{
if (lean_obj_tag(v_x_3910_) == 0)
{
lean_object* v_cs_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; uint8_t v___x_3915_; 
v_cs_3912_ = lean_ctor_get(v_x_3910_, 0);
v___x_3913_ = lean_unsigned_to_nat(0u);
v___x_3914_ = lean_array_get_size(v_cs_3912_);
v___x_3915_ = lean_nat_dec_lt(v___x_3913_, v___x_3914_);
if (v___x_3915_ == 0)
{
return v_x_3911_;
}
else
{
uint8_t v___x_3916_; 
v___x_3916_ = lean_nat_dec_le(v___x_3914_, v___x_3914_);
if (v___x_3916_ == 0)
{
if (v___x_3915_ == 0)
{
return v_x_3911_;
}
else
{
size_t v___x_3917_; size_t v___x_3918_; lean_object* v___x_3919_; 
v___x_3917_ = ((size_t)0ULL);
v___x_3918_ = lean_usize_of_nat(v___x_3914_);
v___x_3919_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3912_, v___x_3917_, v___x_3918_, v_x_3911_);
return v___x_3919_;
}
}
else
{
size_t v___x_3920_; size_t v___x_3921_; lean_object* v___x_3922_; 
v___x_3920_ = ((size_t)0ULL);
v___x_3921_ = lean_usize_of_nat(v___x_3914_);
v___x_3922_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3912_, v___x_3920_, v___x_3921_, v_x_3911_);
return v___x_3922_;
}
}
}
else
{
lean_object* v_vs_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; uint8_t v___x_3926_; 
v_vs_3923_ = lean_ctor_get(v_x_3910_, 0);
v___x_3924_ = lean_unsigned_to_nat(0u);
v___x_3925_ = lean_array_get_size(v_vs_3923_);
v___x_3926_ = lean_nat_dec_lt(v___x_3924_, v___x_3925_);
if (v___x_3926_ == 0)
{
return v_x_3911_;
}
else
{
uint8_t v___x_3927_; 
v___x_3927_ = lean_nat_dec_le(v___x_3925_, v___x_3925_);
if (v___x_3927_ == 0)
{
if (v___x_3926_ == 0)
{
return v_x_3911_;
}
else
{
size_t v___x_3928_; size_t v___x_3929_; lean_object* v___x_3930_; 
v___x_3928_ = ((size_t)0ULL);
v___x_3929_ = lean_usize_of_nat(v___x_3925_);
v___x_3930_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3923_, v___x_3928_, v___x_3929_, v_x_3911_);
return v___x_3930_;
}
}
else
{
size_t v___x_3931_; size_t v___x_3932_; lean_object* v___x_3933_; 
v___x_3931_ = ((size_t)0ULL);
v___x_3932_ = lean_usize_of_nat(v___x_3925_);
v___x_3933_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3923_, v___x_3931_, v___x_3932_, v_x_3911_);
return v___x_3933_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(lean_object* v_as_3934_, size_t v_i_3935_, size_t v_stop_3936_, lean_object* v_b_3937_){
_start:
{
uint8_t v___x_3938_; 
v___x_3938_ = lean_usize_dec_eq(v_i_3935_, v_stop_3936_);
if (v___x_3938_ == 0)
{
lean_object* v___x_3939_; lean_object* v___x_3940_; size_t v___x_3941_; size_t v___x_3942_; 
v___x_3939_ = lean_array_uget_borrowed(v_as_3934_, v_i_3935_);
v___x_3940_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v___x_3939_, v_b_3937_);
v___x_3941_ = ((size_t)1ULL);
v___x_3942_ = lean_usize_add(v_i_3935_, v___x_3941_);
v_i_3935_ = v___x_3942_;
v_b_3937_ = v___x_3940_;
goto _start;
}
else
{
return v_b_3937_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1___boxed(lean_object* v_as_3944_, lean_object* v_i_3945_, lean_object* v_stop_3946_, lean_object* v_b_3947_){
_start:
{
size_t v_i_boxed_3948_; size_t v_stop_boxed_3949_; lean_object* v_res_3950_; 
v_i_boxed_3948_ = lean_unbox_usize(v_i_3945_);
lean_dec(v_i_3945_);
v_stop_boxed_3949_ = lean_unbox_usize(v_stop_3946_);
lean_dec(v_stop_3946_);
v_res_3950_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_as_3944_, v_i_boxed_3948_, v_stop_boxed_3949_, v_b_3947_);
lean_dec_ref(v_as_3944_);
return v_res_3950_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2___boxed(lean_object* v_x_3951_, lean_object* v_x_3952_){
_start:
{
lean_object* v_res_3953_; 
v_res_3953_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v_x_3951_, v_x_3952_);
lean_dec_ref(v_x_3951_);
return v_res_3953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(lean_object* v_x_3954_, size_t v_x_3955_, size_t v_x_3956_, lean_object* v_x_3957_){
_start:
{
if (lean_obj_tag(v_x_3954_) == 0)
{
lean_object* v_cs_3958_; lean_object* v___x_3959_; size_t v___x_3960_; lean_object* v_j_3961_; lean_object* v___x_3962_; size_t v___x_3963_; size_t v___x_3964_; size_t v___x_3965_; size_t v___x_3966_; size_t v___x_3967_; size_t v___x_3968_; lean_object* v___x_3969_; lean_object* v___x_3970_; lean_object* v___x_3971_; lean_object* v___x_3972_; uint8_t v___x_3973_; 
v_cs_3958_ = lean_ctor_get(v_x_3954_, 0);
v___x_3959_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getInfoMessages_spec__0_spec__0___closed__0);
v___x_3960_ = lean_usize_shift_right(v_x_3955_, v_x_3956_);
v_j_3961_ = lean_usize_to_nat(v___x_3960_);
v___x_3962_ = lean_array_get_borrowed(v___x_3959_, v_cs_3958_, v_j_3961_);
v___x_3963_ = ((size_t)1ULL);
v___x_3964_ = lean_usize_shift_left(v___x_3963_, v_x_3956_);
v___x_3965_ = lean_usize_sub(v___x_3964_, v___x_3963_);
v___x_3966_ = lean_usize_land(v_x_3955_, v___x_3965_);
v___x_3967_ = ((size_t)5ULL);
v___x_3968_ = lean_usize_sub(v_x_3956_, v___x_3967_);
v___x_3969_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v___x_3962_, v___x_3966_, v___x_3968_, v_x_3957_);
v___x_3970_ = lean_unsigned_to_nat(1u);
v___x_3971_ = lean_nat_add(v_j_3961_, v___x_3970_);
lean_dec(v_j_3961_);
v___x_3972_ = lean_array_get_size(v_cs_3958_);
v___x_3973_ = lean_nat_dec_lt(v___x_3971_, v___x_3972_);
if (v___x_3973_ == 0)
{
lean_dec(v___x_3971_);
return v___x_3969_;
}
else
{
uint8_t v___x_3974_; 
v___x_3974_ = lean_nat_dec_le(v___x_3972_, v___x_3972_);
if (v___x_3974_ == 0)
{
if (v___x_3973_ == 0)
{
lean_dec(v___x_3971_);
return v___x_3969_;
}
else
{
size_t v___x_3975_; size_t v___x_3976_; lean_object* v___x_3977_; 
v___x_3975_ = lean_usize_of_nat(v___x_3971_);
lean_dec(v___x_3971_);
v___x_3976_ = lean_usize_of_nat(v___x_3972_);
v___x_3977_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3958_, v___x_3975_, v___x_3976_, v___x_3969_);
return v___x_3977_;
}
}
else
{
size_t v___x_3978_; size_t v___x_3979_; lean_object* v___x_3980_; 
v___x_3978_ = lean_usize_of_nat(v___x_3971_);
lean_dec(v___x_3971_);
v___x_3979_ = lean_usize_of_nat(v___x_3972_);
v___x_3980_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0_spec__1(v_cs_3958_, v___x_3978_, v___x_3979_, v___x_3969_);
return v___x_3980_;
}
}
}
else
{
lean_object* v_vs_3981_; lean_object* v___x_3982_; lean_object* v___x_3983_; uint8_t v___x_3984_; 
v_vs_3981_ = lean_ctor_get(v_x_3954_, 0);
v___x_3982_ = lean_usize_to_nat(v_x_3955_);
v___x_3983_ = lean_array_get_size(v_vs_3981_);
v___x_3984_ = lean_nat_dec_lt(v___x_3982_, v___x_3983_);
if (v___x_3984_ == 0)
{
lean_dec(v___x_3982_);
return v_x_3957_;
}
else
{
uint8_t v___x_3985_; 
v___x_3985_ = lean_nat_dec_le(v___x_3983_, v___x_3983_);
if (v___x_3985_ == 0)
{
if (v___x_3984_ == 0)
{
lean_dec(v___x_3982_);
return v_x_3957_;
}
else
{
size_t v___x_3986_; size_t v___x_3987_; lean_object* v___x_3988_; 
v___x_3986_ = lean_usize_of_nat(v___x_3982_);
lean_dec(v___x_3982_);
v___x_3987_ = lean_usize_of_nat(v___x_3983_);
v___x_3988_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3981_, v___x_3986_, v___x_3987_, v_x_3957_);
return v___x_3988_;
}
}
else
{
size_t v___x_3989_; size_t v___x_3990_; lean_object* v___x_3991_; 
v___x_3989_ = lean_usize_of_nat(v___x_3982_);
lean_dec(v___x_3982_);
v___x_3990_ = lean_usize_of_nat(v___x_3983_);
v___x_3991_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_vs_3981_, v___x_3989_, v___x_3990_, v_x_3957_);
return v___x_3991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0___boxed(lean_object* v_x_3992_, lean_object* v_x_3993_, lean_object* v_x_3994_, lean_object* v_x_3995_){
_start:
{
size_t v_x_1527__boxed_3996_; size_t v_x_1528__boxed_3997_; lean_object* v_res_3998_; 
v_x_1527__boxed_3996_ = lean_unbox_usize(v_x_3993_);
lean_dec(v_x_3993_);
v_x_1528__boxed_3997_ = lean_unbox_usize(v_x_3994_);
lean_dec(v_x_3994_);
v_res_3998_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v_x_3992_, v_x_1527__boxed_3996_, v_x_1528__boxed_3997_, v_x_3995_);
lean_dec_ref(v_x_3992_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(lean_object* v_t_3999_, lean_object* v_init_4000_, lean_object* v_start_4001_){
_start:
{
lean_object* v___x_4002_; uint8_t v___x_4003_; 
v___x_4002_ = lean_unsigned_to_nat(0u);
v___x_4003_ = lean_nat_dec_eq(v_start_4001_, v___x_4002_);
if (v___x_4003_ == 0)
{
lean_object* v_root_4004_; lean_object* v_tail_4005_; size_t v_shift_4006_; lean_object* v_tailOff_4007_; uint8_t v___x_4008_; 
v_root_4004_ = lean_ctor_get(v_t_3999_, 0);
v_tail_4005_ = lean_ctor_get(v_t_3999_, 1);
v_shift_4006_ = lean_ctor_get_usize(v_t_3999_, 4);
v_tailOff_4007_ = lean_ctor_get(v_t_3999_, 3);
v___x_4008_ = lean_nat_dec_le(v_tailOff_4007_, v_start_4001_);
if (v___x_4008_ == 0)
{
size_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; uint8_t v___x_4012_; 
v___x_4009_ = lean_usize_of_nat(v_start_4001_);
v___x_4010_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__0(v_root_4004_, v___x_4009_, v_shift_4006_, v_init_4000_);
v___x_4011_ = lean_array_get_size(v_tail_4005_);
v___x_4012_ = lean_nat_dec_lt(v___x_4002_, v___x_4011_);
if (v___x_4012_ == 0)
{
return v___x_4010_;
}
else
{
uint8_t v___x_4013_; 
v___x_4013_ = lean_nat_dec_le(v___x_4011_, v___x_4011_);
if (v___x_4013_ == 0)
{
if (v___x_4012_ == 0)
{
return v___x_4010_;
}
else
{
size_t v___x_4014_; size_t v___x_4015_; lean_object* v___x_4016_; 
v___x_4014_ = ((size_t)0ULL);
v___x_4015_ = lean_usize_of_nat(v___x_4011_);
v___x_4016_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_4005_, v___x_4014_, v___x_4015_, v___x_4010_);
return v___x_4016_;
}
}
else
{
size_t v___x_4017_; size_t v___x_4018_; lean_object* v___x_4019_; 
v___x_4017_ = ((size_t)0ULL);
v___x_4018_ = lean_usize_of_nat(v___x_4011_);
v___x_4019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_4005_, v___x_4017_, v___x_4018_, v___x_4010_);
return v___x_4019_;
}
}
}
else
{
lean_object* v___x_4020_; lean_object* v___x_4021_; uint8_t v___x_4022_; 
v___x_4020_ = lean_nat_sub(v_start_4001_, v_tailOff_4007_);
v___x_4021_ = lean_array_get_size(v_tail_4005_);
v___x_4022_ = lean_nat_dec_lt(v___x_4020_, v___x_4021_);
if (v___x_4022_ == 0)
{
lean_dec(v___x_4020_);
return v_init_4000_;
}
else
{
uint8_t v___x_4023_; 
v___x_4023_ = lean_nat_dec_le(v___x_4021_, v___x_4021_);
if (v___x_4023_ == 0)
{
if (v___x_4022_ == 0)
{
lean_dec(v___x_4020_);
return v_init_4000_;
}
else
{
size_t v___x_4024_; size_t v___x_4025_; lean_object* v___x_4026_; 
v___x_4024_ = lean_usize_of_nat(v___x_4020_);
lean_dec(v___x_4020_);
v___x_4025_ = lean_usize_of_nat(v___x_4021_);
v___x_4026_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_4005_, v___x_4024_, v___x_4025_, v_init_4000_);
return v___x_4026_;
}
}
else
{
size_t v___x_4027_; size_t v___x_4028_; lean_object* v___x_4029_; 
v___x_4027_ = lean_usize_of_nat(v___x_4020_);
lean_dec(v___x_4020_);
v___x_4028_ = lean_usize_of_nat(v___x_4021_);
v___x_4029_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_4005_, v___x_4027_, v___x_4028_, v_init_4000_);
return v___x_4029_;
}
}
}
}
else
{
lean_object* v_root_4030_; lean_object* v_tail_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; uint8_t v___x_4034_; 
v_root_4030_ = lean_ctor_get(v_t_3999_, 0);
v_tail_4031_ = lean_ctor_get(v_t_3999_, 1);
v___x_4032_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__2(v_root_4030_, v_init_4000_);
v___x_4033_ = lean_array_get_size(v_tail_4031_);
v___x_4034_ = lean_nat_dec_lt(v___x_4002_, v___x_4033_);
if (v___x_4034_ == 0)
{
return v___x_4032_;
}
else
{
uint8_t v___x_4035_; 
v___x_4035_ = lean_nat_dec_le(v___x_4033_, v___x_4033_);
if (v___x_4035_ == 0)
{
if (v___x_4034_ == 0)
{
return v___x_4032_;
}
else
{
size_t v___x_4036_; size_t v___x_4037_; lean_object* v___x_4038_; 
v___x_4036_ = ((size_t)0ULL);
v___x_4037_ = lean_usize_of_nat(v___x_4033_);
v___x_4038_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_4031_, v___x_4036_, v___x_4037_, v___x_4032_);
return v___x_4038_;
}
}
else
{
size_t v___x_4039_; size_t v___x_4040_; lean_object* v___x_4041_; 
v___x_4039_ = ((size_t)0ULL);
v___x_4040_ = lean_usize_of_nat(v___x_4033_);
v___x_4041_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0_spec__1(v_tail_4031_, v___x_4039_, v___x_4040_, v___x_4032_);
return v___x_4041_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0___boxed(lean_object* v_t_4042_, lean_object* v_init_4043_, lean_object* v_start_4044_){
_start:
{
lean_object* v_res_4045_; 
v_res_4045_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(v_t_4042_, v_init_4043_, v_start_4044_);
lean_dec(v_start_4044_);
lean_dec_ref(v_t_4042_);
return v_res_4045_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_getWarningMessages(lean_object* v_log_4046_){
_start:
{
lean_object* v___x_4047_; lean_object* v___x_4048_; lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v_unreported_4051_; lean_object* v___x_4053_; uint8_t v_isShared_4054_; uint8_t v_isSharedCheck_4060_; 
v___x_4047_ = lean_unsigned_to_nat(32u);
v___x_4048_ = lean_mk_empty_array_with_capacity(v___x_4047_);
lean_dec_ref(v___x_4048_);
v___x_4049_ = lean_unsigned_to_nat(0u);
v___x_4050_ = lean_obj_once(&l_Lean_instInhabitedMessageLog_default___closed__1, &l_Lean_instInhabitedMessageLog_default___closed__1_once, _init_l_Lean_instInhabitedMessageLog_default___closed__1);
v_unreported_4051_ = lean_ctor_get(v_log_4046_, 1);
v_isSharedCheck_4060_ = !lean_is_exclusive(v_log_4046_);
if (v_isSharedCheck_4060_ == 0)
{
lean_object* v_unused_4061_; lean_object* v_unused_4062_; 
v_unused_4061_ = lean_ctor_get(v_log_4046_, 2);
lean_dec(v_unused_4061_);
v_unused_4062_ = lean_ctor_get(v_log_4046_, 0);
lean_dec(v_unused_4062_);
v___x_4053_ = v_log_4046_;
v_isShared_4054_ = v_isSharedCheck_4060_;
goto v_resetjp_4052_;
}
else
{
lean_inc(v_unreported_4051_);
lean_dec(v_log_4046_);
v___x_4053_ = lean_box(0);
v_isShared_4054_ = v_isSharedCheck_4060_;
goto v_resetjp_4052_;
}
v_resetjp_4052_:
{
lean_object* v___x_4055_; lean_object* v___x_4056_; lean_object* v___x_4058_; 
v___x_4055_ = l_Lean_PersistentArray_foldlM___at___00Lean_MessageLog_getWarningMessages_spec__0(v_unreported_4051_, v___x_4050_, v___x_4049_);
lean_dec_ref(v_unreported_4051_);
v___x_4056_ = l_Lean_NameSet_empty;
if (v_isShared_4054_ == 0)
{
lean_ctor_set(v___x_4053_, 2, v___x_4056_);
lean_ctor_set(v___x_4053_, 1, v___x_4055_);
lean_ctor_set(v___x_4053_, 0, v___x_4050_);
v___x_4058_ = v___x_4053_;
goto v_reusejp_4057_;
}
else
{
lean_object* v_reuseFailAlloc_4059_; 
v_reuseFailAlloc_4059_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4059_, 0, v___x_4050_);
lean_ctor_set(v_reuseFailAlloc_4059_, 1, v___x_4055_);
lean_ctor_set(v_reuseFailAlloc_4059_, 2, v___x_4056_);
v___x_4058_ = v_reuseFailAlloc_4059_;
goto v_reusejp_4057_;
}
v_reusejp_4057_:
{
return v___x_4058_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM___redArg(lean_object* v_inst_4063_, lean_object* v_log_4064_, lean_object* v_f_4065_){
_start:
{
lean_object* v_unreported_4066_; lean_object* v___x_4067_; lean_object* v___x_4068_; 
v_unreported_4066_ = lean_ctor_get(v_log_4064_, 1);
lean_inc_ref(v_unreported_4066_);
lean_dec_ref(v_log_4064_);
v___x_4067_ = lean_unsigned_to_nat(0u);
v___x_4068_ = l_Lean_PersistentArray_forM___redArg(v_inst_4063_, v_unreported_4066_, v_f_4065_, v___x_4067_);
return v___x_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_forM(lean_object* v_m_4069_, lean_object* v_inst_4070_, lean_object* v_log_4071_, lean_object* v_f_4072_){
_start:
{
lean_object* v___x_4073_; 
v___x_4073_ = l_Lean_MessageLog_forM___redArg(v_inst_4070_, v_log_4071_, v_f_4072_);
return v___x_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList(lean_object* v_log_4074_){
_start:
{
lean_object* v_unreported_4075_; lean_object* v___x_4076_; 
v_unreported_4075_ = lean_ctor_get(v_log_4074_, 1);
v___x_4076_ = l_Lean_PersistentArray_toList___redArg(v_unreported_4075_);
return v___x_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toList___boxed(lean_object* v_log_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_Lean_MessageLog_toList(v_log_4077_);
lean_dec_ref(v_log_4077_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray(lean_object* v_log_4079_){
_start:
{
lean_object* v_unreported_4080_; lean_object* v___x_4081_; 
v_unreported_4080_ = lean_ctor_get(v_log_4079_, 1);
v___x_4081_ = l_Lean_PersistentArray_toArray___redArg(v_unreported_4080_);
return v___x_4081_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageLog_toArray___boxed(lean_object* v_log_4082_){
_start:
{
lean_object* v_res_4083_; 
v_res_4083_ = l_Lean_MessageLog_toArray(v_log_4082_);
lean_dec_ref(v_log_4082_);
return v_res_4083_;
}
}
LEAN_EXPORT lean_object* l_Lean_MessageData_nestD(lean_object* v_msg_4084_){
_start:
{
lean_object* v___x_4085_; lean_object* v___x_4086_; 
v___x_4085_ = lean_unsigned_to_nat(2u);
v___x_4086_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_4086_, 0, v___x_4085_);
lean_ctor_set(v___x_4086_, 1, v_msg_4084_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_indentD(lean_object* v_msg_4087_){
_start:
{
lean_object* v___x_4088_; lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4088_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4089_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4089_, 0, v___x_4088_);
lean_ctor_set(v___x_4089_, 1, v_msg_4087_);
v___x_4090_ = l_Lean_MessageData_nestD(v___x_4089_);
return v___x_4090_;
}
}
LEAN_EXPORT lean_object* l_Lean_indentExpr(lean_object* v_e_4091_){
_start:
{
lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4092_ = l_Lean_MessageData_ofExpr(v_e_4091_);
v___x_4093_ = l_Lean_indentD(v___x_4092_);
return v___x_4093_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively(lean_object* v_ctx_4094_, lean_object* v_msg_4095_){
_start:
{
lean_object* v_env_4097_; lean_object* v_mctx_4098_; lean_object* v_lctx_4099_; lean_object* v_opts_4100_; lean_object* v_currNamespace_4101_; lean_object* v_openDecls_4102_; lean_object* v___x_4103_; lean_object* v_msg_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; 
v_env_4097_ = lean_ctor_get(v_ctx_4094_, 0);
v_mctx_4098_ = lean_ctor_get(v_ctx_4094_, 1);
v_lctx_4099_ = lean_ctor_get(v_ctx_4094_, 2);
v_opts_4100_ = lean_ctor_get(v_ctx_4094_, 3);
v_currNamespace_4101_ = lean_ctor_get(v_ctx_4094_, 4);
v_openDecls_4102_ = lean_ctor_get(v_ctx_4094_, 5);
lean_inc(v_openDecls_4102_);
lean_inc(v_currNamespace_4101_);
v___x_4103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4103_, 0, v_currNamespace_4101_);
lean_ctor_set(v___x_4103_, 1, v_openDecls_4102_);
v_msg_4104_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_msg_4104_, 0, v___x_4103_);
lean_ctor_set(v_msg_4104_, 1, v_msg_4095_);
lean_inc_ref(v_opts_4100_);
lean_inc_ref(v_lctx_4099_);
lean_inc_ref(v_mctx_4098_);
lean_inc_ref(v_env_4097_);
v___x_4105_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4105_, 0, v_env_4097_);
lean_ctor_set(v___x_4105_, 1, v_mctx_4098_);
lean_ctor_set(v___x_4105_, 2, v_lctx_4099_);
lean_ctor_set(v___x_4105_, 3, v_opts_4100_);
v___x_4106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
v___x_4107_ = l_Lean_MessageData_format(v_msg_4104_, v___x_4106_);
v___x_4108_ = l_Std_Format_defWidth;
v___x_4109_ = lean_unsigned_to_nat(0u);
v___x_4110_ = l_Std_Format_pretty(v___x_4107_, v___x_4108_, v___x_4109_, v___x_4109_);
return v___x_4110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_MessageData_formatExpensively___boxed(lean_object* v_ctx_4111_, lean_object* v_msg_4112_, lean_object* v_a_4113_){
_start:
{
lean_object* v_res_4114_; 
v_res_4114_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4111_, v_msg_4112_);
lean_dec_ref(v_ctx_4111_);
return v_res_4114_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(lean_object* v_s_4115_, lean_object* v_a_4116_, uint8_t v_b_4117_){
_start:
{
lean_object* v_str_4118_; lean_object* v_startInclusive_4119_; lean_object* v_endExclusive_4120_; lean_object* v___x_4121_; uint8_t v___x_4122_; 
v_str_4118_ = lean_ctor_get(v_s_4115_, 0);
v_startInclusive_4119_ = lean_ctor_get(v_s_4115_, 1);
v_endExclusive_4120_ = lean_ctor_get(v_s_4115_, 2);
v___x_4121_ = lean_nat_sub(v_endExclusive_4120_, v_startInclusive_4119_);
v___x_4122_ = lean_nat_dec_eq(v_a_4116_, v___x_4121_);
lean_dec(v___x_4121_);
if (v___x_4122_ == 0)
{
lean_object* v___x_4123_; uint32_t v___x_4124_; uint32_t v___x_4125_; uint8_t v___x_4126_; 
v___x_4123_ = lean_nat_add(v_startInclusive_4119_, v_a_4116_);
lean_dec(v_a_4116_);
v___x_4124_ = lean_string_utf8_get_fast(v_str_4118_, v___x_4123_);
v___x_4125_ = 10;
v___x_4126_ = lean_uint32_dec_eq(v___x_4124_, v___x_4125_);
if (v___x_4126_ == 0)
{
lean_object* v___x_4127_; lean_object* v___x_4128_; 
v___x_4127_ = lean_string_utf8_next_fast(v_str_4118_, v___x_4123_);
lean_dec(v___x_4123_);
v___x_4128_ = lean_nat_sub(v___x_4127_, v_startInclusive_4119_);
v_a_4116_ = v___x_4128_;
v_b_4117_ = v___x_4126_;
goto _start;
}
else
{
lean_dec(v___x_4123_);
return v___x_4126_;
}
}
else
{
lean_dec(v_a_4116_);
return v_b_4117_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg___boxed(lean_object* v_s_4130_, lean_object* v_a_4131_, lean_object* v_b_4132_){
_start:
{
uint8_t v_b_boxed_4133_; uint8_t v_res_4134_; lean_object* v_r_4135_; 
v_b_boxed_4133_ = lean_unbox(v_b_4132_);
v_res_4134_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4130_, v_a_4131_, v_b_boxed_4133_);
lean_dec_ref(v_s_4130_);
v_r_4135_ = lean_box(v_res_4134_);
return v_r_4135_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(lean_object* v_s_4136_){
_start:
{
lean_object* v_searcher_4137_; uint8_t v___x_4138_; uint8_t v___x_4139_; 
v_searcher_4137_ = lean_unsigned_to_nat(0u);
v___x_4138_ = 0;
v___x_4139_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4136_, v_searcher_4137_, v___x_4138_);
return v___x_4139_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_inlineExpr_spec__1___boxed(lean_object* v_s_4140_){
_start:
{
uint8_t v_res_4141_; lean_object* v_r_4142_; 
v_res_4141_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v_s_4140_);
lean_dec_ref(v_s_4140_);
v_r_4142_ = lean_box(v_res_4141_);
return v_r_4142_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(lean_object* v___x_4143_, lean_object* v_val_4144_, lean_object* v_a_4145_, lean_object* v_b_4146_){
_start:
{
lean_object* v_startInclusive_4147_; lean_object* v_endExclusive_4148_; lean_object* v___x_4149_; uint8_t v___x_4150_; 
v_startInclusive_4147_ = lean_ctor_get(v___x_4143_, 1);
v_endExclusive_4148_ = lean_ctor_get(v___x_4143_, 2);
v___x_4149_ = lean_nat_sub(v_endExclusive_4148_, v_startInclusive_4147_);
v___x_4150_ = lean_nat_dec_eq(v_a_4145_, v___x_4149_);
lean_dec(v___x_4149_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; 
v___x_4151_ = lean_string_utf8_next_fast(v_val_4144_, v_a_4145_);
lean_dec(v_a_4145_);
v___x_4152_ = lean_unsigned_to_nat(1u);
v___x_4153_ = lean_nat_add(v_b_4146_, v___x_4152_);
lean_dec(v_b_4146_);
v_a_4145_ = v___x_4151_;
v_b_4146_ = v___x_4153_;
goto _start;
}
else
{
lean_dec(v_a_4145_);
return v_b_4146_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg___boxed(lean_object* v___x_4155_, lean_object* v_val_4156_, lean_object* v_a_4157_, lean_object* v_b_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4155_, v_val_4156_, v_a_4157_, v_b_4158_);
lean_dec_ref(v_val_4156_);
lean_dec_ref(v___x_4155_);
return v_res_4159_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4163_; lean_object* v___x_4164_; 
v___x_4163_ = ((lean_object*)(l_Lean_inlineExpr___lam__0___closed__1));
v___x_4164_ = l_Lean_MessageData_ofFormat(v___x_4163_);
return v___x_4164_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4168_; lean_object* v___x_4169_; 
v___x_4168_ = ((lean_object*)(l_Lean_inlineExpr___lam__0___closed__4));
v___x_4169_ = l_Lean_MessageData_ofFormat(v___x_4168_);
return v___x_4169_;
}
}
static lean_object* _init_l_Lean_inlineExpr___lam__0___closed__6(void){
_start:
{
lean_object* v___x_4170_; lean_object* v___x_4171_; 
v___x_4170_ = ((lean_object*)(l_Lean_MessageData_formatAux___closed__2));
v___x_4171_ = l_Lean_MessageData_ofFormat(v___x_4170_);
return v___x_4171_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0(lean_object* v_e_4172_, lean_object* v_maxInlineLength_4173_, lean_object* v_ctx_4174_){
_start:
{
lean_object* v_msg_4176_; lean_object* v___x_4177_; uint8_t v___y_4179_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; uint8_t v___x_4191_; 
v_msg_4176_ = l_Lean_MessageData_ofExpr(v_e_4172_);
lean_inc_ref(v_msg_4176_);
v___x_4177_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4174_, v_msg_4176_);
v___x_4187_ = lean_unsigned_to_nat(0u);
v___x_4188_ = lean_string_utf8_byte_size(v___x_4177_);
lean_inc_ref(v___x_4177_);
v___x_4189_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4177_);
lean_ctor_set(v___x_4189_, 1, v___x_4187_);
lean_ctor_set(v___x_4189_, 2, v___x_4188_);
v___x_4190_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4189_, v___x_4177_, v___x_4187_, v___x_4187_);
lean_dec_ref(v___x_4177_);
v___x_4191_ = lean_nat_dec_lt(v_maxInlineLength_4173_, v___x_4190_);
lean_dec(v___x_4190_);
if (v___x_4191_ == 0)
{
uint8_t v___x_4192_; 
v___x_4192_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v___x_4189_);
lean_dec_ref_known(v___x_4189_, 3);
v___y_4179_ = v___x_4192_;
goto v___jp_4178_;
}
else
{
lean_dec_ref_known(v___x_4189_, 3);
v___y_4179_ = v___x_4191_;
goto v___jp_4178_;
}
v___jp_4178_:
{
if (v___y_4179_ == 0)
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; 
v___x_4180_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__2, &l_Lean_inlineExpr___lam__0___closed__2_once, _init_l_Lean_inlineExpr___lam__0___closed__2);
v___x_4181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4180_);
lean_ctor_set(v___x_4181_, 1, v_msg_4176_);
v___x_4182_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__5, &l_Lean_inlineExpr___lam__0___closed__5_once, _init_l_Lean_inlineExpr___lam__0___closed__5);
v___x_4183_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4181_);
lean_ctor_set(v___x_4183_, 1, v___x_4182_);
return v___x_4183_;
}
else
{
lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; 
v___x_4184_ = l_Lean_indentD(v_msg_4176_);
v___x_4185_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__6, &l_Lean_inlineExpr___lam__0___closed__6_once, _init_l_Lean_inlineExpr___lam__0___closed__6);
v___x_4186_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4186_, 0, v___x_4184_);
lean_ctor_set(v___x_4186_, 1, v___x_4185_);
return v___x_4186_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__0___boxed(lean_object* v_e_4193_, lean_object* v_maxInlineLength_4194_, lean_object* v_ctx_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v_res_4197_; 
v_res_4197_ = l_Lean_inlineExpr___lam__0(v_e_4193_, v_maxInlineLength_4194_, v_ctx_4195_);
lean_dec_ref(v_ctx_4195_);
lean_dec(v_maxInlineLength_4194_);
return v_res_4197_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2(lean_object* v_e_4198_, lean_object* v_x_4199_){
_start:
{
lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; 
v___x_4201_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__2, &l_Lean_inlineExpr___lam__0___closed__2_once, _init_l_Lean_inlineExpr___lam__0___closed__2);
v___x_4202_ = l_Lean_MessageData_ofExpr(v_e_4198_);
v___x_4203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4203_, 0, v___x_4201_);
lean_ctor_set(v___x_4203_, 1, v___x_4202_);
v___x_4204_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__5, &l_Lean_inlineExpr___lam__0___closed__5_once, _init_l_Lean_inlineExpr___lam__0___closed__5);
v___x_4205_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4203_);
lean_ctor_set(v___x_4205_, 1, v___x_4204_);
return v___x_4205_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr___lam__2___boxed(lean_object* v_e_4206_, lean_object* v_x_4207_, lean_object* v___y_4208_){
_start:
{
lean_object* v_res_4209_; 
v_res_4209_ = l_Lean_inlineExpr___lam__2(v_e_4206_, v_x_4207_);
return v_res_4209_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExpr(lean_object* v_e_4210_, lean_object* v_maxInlineLength_4211_){
_start:
{
lean_object* v___f_4212_; lean_object* v___f_4213_; lean_object* v___f_4214_; lean_object* v___x_4215_; 
lean_inc_ref_n(v_e_4210_, 2);
v___f_4212_ = lean_alloc_closure((void*)(l_Lean_inlineExpr___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4212_, 0, v_e_4210_);
lean_closure_set(v___f_4212_, 1, v_maxInlineLength_4211_);
v___f_4213_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4213_, 0, v_e_4210_);
v___f_4214_ = lean_alloc_closure((void*)(l_Lean_inlineExpr___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4214_, 0, v_e_4210_);
v___x_4215_ = l_Lean_MessageData_lazy(v___f_4212_, v___f_4213_, v___f_4214_);
return v___x_4215_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(lean_object* v___x_4216_, lean_object* v_val_4217_, lean_object* v_inst_4218_, lean_object* v_R_4219_, lean_object* v_a_4220_, lean_object* v_b_4221_, lean_object* v_c_4222_){
_start:
{
lean_object* v___x_4223_; 
v___x_4223_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4216_, v_val_4217_, v_a_4220_, v_b_4221_);
return v___x_4223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___boxed(lean_object* v___x_4224_, lean_object* v_val_4225_, lean_object* v_inst_4226_, lean_object* v_R_4227_, lean_object* v_a_4228_, lean_object* v_b_4229_, lean_object* v_c_4230_){
_start:
{
lean_object* v_res_4231_; 
v_res_4231_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0(v___x_4224_, v_val_4225_, v_inst_4226_, v_R_4227_, v_a_4228_, v_b_4229_, v_c_4230_);
lean_dec_ref(v_val_4225_);
lean_dec_ref(v___x_4224_);
return v_res_4231_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(lean_object* v_s_4232_, lean_object* v_inst_4233_, lean_object* v_R_4234_, lean_object* v_a_4235_, uint8_t v_b_4236_, lean_object* v_c_4237_){
_start:
{
uint8_t v___x_4238_; 
v___x_4238_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___redArg(v_s_4232_, v_a_4235_, v_b_4236_);
return v___x_4238_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1___boxed(lean_object* v_s_4239_, lean_object* v_inst_4240_, lean_object* v_R_4241_, lean_object* v_a_4242_, lean_object* v_b_4243_, lean_object* v_c_4244_){
_start:
{
uint8_t v_b_boxed_4245_; uint8_t v_res_4246_; lean_object* v_r_4247_; 
v_b_boxed_4245_ = lean_unbox(v_b_4243_);
v_res_4246_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_inlineExpr_spec__1_spec__1(v_s_4239_, v_inst_4240_, v_R_4241_, v_a_4242_, v_b_boxed_4245_, v_c_4244_);
lean_dec_ref(v_s_4239_);
v_r_4247_ = lean_box(v_res_4246_);
return v_r_4247_;
}
}
static lean_object* _init_l_Lean_inlineExprTrailing___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4251_ = ((lean_object*)(l_Lean_inlineExprTrailing___lam__0___closed__1));
v___x_4252_ = l_Lean_MessageData_ofFormat(v___x_4251_);
return v___x_4252_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0(lean_object* v_e_4253_, lean_object* v_maxInlineLength_4254_, lean_object* v_ctx_4255_){
_start:
{
lean_object* v_msg_4257_; lean_object* v___x_4258_; uint8_t v___y_4260_; lean_object* v___x_4266_; lean_object* v___x_4267_; lean_object* v___x_4268_; lean_object* v___x_4269_; uint8_t v___x_4270_; 
v_msg_4257_ = l_Lean_MessageData_ofExpr(v_e_4253_);
lean_inc_ref(v_msg_4257_);
v___x_4258_ = l___private_Lean_Message_0__Lean_MessageData_formatExpensively(v_ctx_4255_, v_msg_4257_);
v___x_4266_ = lean_unsigned_to_nat(0u);
v___x_4267_ = lean_string_utf8_byte_size(v___x_4258_);
lean_inc_ref(v___x_4258_);
v___x_4268_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4268_, 0, v___x_4258_);
lean_ctor_set(v___x_4268_, 1, v___x_4266_);
lean_ctor_set(v___x_4268_, 2, v___x_4267_);
v___x_4269_ = l_WellFounded_opaqueFix_u2083___at___00Lean_inlineExpr_spec__0___redArg(v___x_4268_, v___x_4258_, v___x_4266_, v___x_4266_);
lean_dec_ref(v___x_4258_);
v___x_4270_ = lean_nat_dec_lt(v_maxInlineLength_4254_, v___x_4269_);
lean_dec(v___x_4269_);
if (v___x_4270_ == 0)
{
uint8_t v___x_4271_; 
v___x_4271_ = l_String_Slice_contains___at___00Lean_inlineExpr_spec__1(v___x_4268_);
lean_dec_ref_known(v___x_4268_, 3);
v___y_4260_ = v___x_4271_;
goto v___jp_4259_;
}
else
{
lean_dec_ref_known(v___x_4268_, 3);
v___y_4260_ = v___x_4270_;
goto v___jp_4259_;
}
v___jp_4259_:
{
if (v___y_4260_ == 0)
{
lean_object* v___x_4261_; lean_object* v___x_4262_; lean_object* v___x_4263_; lean_object* v___x_4264_; 
v___x_4261_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__2, &l_Lean_inlineExpr___lam__0___closed__2_once, _init_l_Lean_inlineExpr___lam__0___closed__2);
v___x_4262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4261_);
lean_ctor_set(v___x_4262_, 1, v_msg_4257_);
v___x_4263_ = lean_obj_once(&l_Lean_inlineExprTrailing___lam__0___closed__2, &l_Lean_inlineExprTrailing___lam__0___closed__2_once, _init_l_Lean_inlineExprTrailing___lam__0___closed__2);
v___x_4264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4264_, 0, v___x_4262_);
lean_ctor_set(v___x_4264_, 1, v___x_4263_);
return v___x_4264_;
}
else
{
lean_object* v___x_4265_; 
v___x_4265_ = l_Lean_indentD(v_msg_4257_);
return v___x_4265_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__0___boxed(lean_object* v_e_4272_, lean_object* v_maxInlineLength_4273_, lean_object* v_ctx_4274_, lean_object* v___y_4275_){
_start:
{
lean_object* v_res_4276_; 
v_res_4276_ = l_Lean_inlineExprTrailing___lam__0(v_e_4272_, v_maxInlineLength_4273_, v_ctx_4274_);
lean_dec_ref(v_ctx_4274_);
lean_dec(v_maxInlineLength_4273_);
return v_res_4276_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2(lean_object* v_e_4277_, lean_object* v_x_4278_){
_start:
{
lean_object* v___x_4280_; lean_object* v___x_4281_; lean_object* v___x_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; 
v___x_4280_ = lean_obj_once(&l_Lean_inlineExpr___lam__0___closed__2, &l_Lean_inlineExpr___lam__0___closed__2_once, _init_l_Lean_inlineExpr___lam__0___closed__2);
v___x_4281_ = l_Lean_MessageData_ofExpr(v_e_4277_);
v___x_4282_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4282_, 0, v___x_4280_);
lean_ctor_set(v___x_4282_, 1, v___x_4281_);
v___x_4283_ = lean_obj_once(&l_Lean_inlineExprTrailing___lam__0___closed__2, &l_Lean_inlineExprTrailing___lam__0___closed__2_once, _init_l_Lean_inlineExprTrailing___lam__0___closed__2);
v___x_4284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4284_, 0, v___x_4282_);
lean_ctor_set(v___x_4284_, 1, v___x_4283_);
return v___x_4284_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing___lam__2___boxed(lean_object* v_e_4285_, lean_object* v_x_4286_, lean_object* v___y_4287_){
_start:
{
lean_object* v_res_4288_; 
v_res_4288_ = l_Lean_inlineExprTrailing___lam__2(v_e_4285_, v_x_4286_);
return v_res_4288_;
}
}
LEAN_EXPORT lean_object* l_Lean_inlineExprTrailing(lean_object* v_e_4289_, lean_object* v_maxInlineLength_4290_){
_start:
{
lean_object* v___f_4291_; lean_object* v___f_4292_; lean_object* v___f_4293_; lean_object* v___x_4294_; 
lean_inc_ref_n(v_e_4289_, 2);
v___f_4291_ = lean_alloc_closure((void*)(l_Lean_inlineExprTrailing___lam__0___boxed), 4, 2);
lean_closure_set(v___f_4291_, 0, v_e_4289_);
lean_closure_set(v___f_4291_, 1, v_maxInlineLength_4290_);
v___f_4292_ = lean_alloc_closure((void*)(l_Lean_MessageData_ofExpr___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4292_, 0, v_e_4289_);
v___f_4293_ = lean_alloc_closure((void*)(l_Lean_inlineExprTrailing___lam__2___boxed), 3, 1);
lean_closure_set(v___f_4293_, 0, v_e_4289_);
v___x_4294_ = l_Lean_MessageData_lazy(v___f_4291_, v___f_4292_, v___f_4293_);
return v___x_4294_;
}
}
static lean_object* _init_l_Lean_aquote___closed__2(void){
_start:
{
lean_object* v___x_4298_; lean_object* v___x_4299_; 
v___x_4298_ = ((lean_object*)(l_Lean_aquote___closed__1));
v___x_4299_ = l_Lean_MessageData_ofFormat(v___x_4298_);
return v___x_4299_;
}
}
static lean_object* _init_l_Lean_aquote___closed__5(void){
_start:
{
lean_object* v___x_4303_; lean_object* v___x_4304_; 
v___x_4303_ = ((lean_object*)(l_Lean_aquote___closed__4));
v___x_4304_ = l_Lean_MessageData_ofFormat(v___x_4303_);
return v___x_4304_;
}
}
LEAN_EXPORT lean_object* l_Lean_aquote(lean_object* v_msg_4305_){
_start:
{
lean_object* v___x_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; 
v___x_4306_ = lean_obj_once(&l_Lean_aquote___closed__2, &l_Lean_aquote___closed__2_once, _init_l_Lean_aquote___closed__2);
v___x_4307_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4307_, 0, v___x_4306_);
lean_ctor_set(v___x_4307_, 1, v_msg_4305_);
v___x_4308_ = lean_obj_once(&l_Lean_aquote___closed__5, &l_Lean_aquote___closed__5_once, _init_l_Lean_aquote___closed__5);
v___x_4309_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4309_, 0, v___x_4307_);
lean_ctor_set(v___x_4309_, 1, v___x_4308_);
return v___x_4309_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0(lean_object* v_inst_4310_, lean_object* v_inst_4311_, lean_object* v_msg_4312_){
_start:
{
lean_object* v___x_4313_; lean_object* v___x_4314_; 
v___x_4313_ = lean_apply_1(v_inst_4310_, v_msg_4312_);
v___x_4314_ = lean_apply_2(v_inst_4311_, lean_box(0), v___x_4313_);
return v___x_4314_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift___redArg(lean_object* v_inst_4315_, lean_object* v_inst_4316_){
_start:
{
lean_object* v___f_4317_; 
v___f_4317_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4317_, 0, v_inst_4316_);
lean_closure_set(v___f_4317_, 1, v_inst_4315_);
return v___f_4317_;
}
}
LEAN_EXPORT lean_object* l_Lean_instAddMessageContextOfMonadLift(lean_object* v_m_4318_, lean_object* v_n_4319_, lean_object* v_inst_4320_, lean_object* v_inst_4321_){
_start:
{
lean_object* v___f_4322_; 
v___f_4322_ = lean_alloc_closure((void*)(l_Lean_instAddMessageContextOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4322_, 0, v_inst_4321_);
lean_closure_set(v___f_4322_, 1, v_inst_4320_);
return v___f_4322_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__0(void){
_start:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; lean_object* v___x_4325_; 
v___x_4323_ = lean_unsigned_to_nat(32u);
v___x_4324_ = lean_mk_empty_array_with_capacity(v___x_4323_);
v___x_4325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4325_, 0, v___x_4324_);
return v___x_4325_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1(void){
_start:
{
size_t v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4326_ = ((size_t)5ULL);
v___x_4327_ = lean_unsigned_to_nat(0u);
v___x_4328_ = lean_unsigned_to_nat(32u);
v___x_4329_ = lean_mk_empty_array_with_capacity(v___x_4328_);
v___x_4330_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__0, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__0_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__0);
v___x_4331_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_4331_, 0, v___x_4330_);
lean_ctor_set(v___x_4331_, 1, v___x_4329_);
lean_ctor_set(v___x_4331_, 2, v___x_4327_);
lean_ctor_set(v___x_4331_, 3, v___x_4327_);
lean_ctor_set_usize(v___x_4331_, 4, v___x_4326_);
return v___x_4331_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4332_; lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; 
v___x_4332_ = lean_box(1);
v___x_4333_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__1, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1);
v___x_4334_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__1);
v___x_4335_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4335_, 0, v___x_4334_);
lean_ctor_set(v___x_4335_, 1, v___x_4333_);
lean_ctor_set(v___x_4335_, 2, v___x_4332_);
return v___x_4335_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__0(lean_object* v_env_4336_, lean_object* v_msgData_4337_, lean_object* v_toPure_4338_, lean_object* v_opts_4339_){
_start:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; 
v___x_4340_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_4341_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__2, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__2_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__2);
v___x_4342_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4342_, 0, v_env_4336_);
lean_ctor_set(v___x_4342_, 1, v___x_4340_);
lean_ctor_set(v___x_4342_, 2, v___x_4341_);
lean_ctor_set(v___x_4342_, 3, v_opts_4339_);
v___x_4343_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4342_);
lean_ctor_set(v___x_4343_, 1, v_msgData_4337_);
v___x_4344_ = lean_apply_2(v_toPure_4338_, lean_box(0), v___x_4343_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg___lam__1(lean_object* v_msgData_4345_, lean_object* v_toPure_4346_, lean_object* v_toBind_4347_, lean_object* v_inst_4348_, lean_object* v_env_4349_){
_start:
{
lean_object* v___f_4350_; lean_object* v___x_4351_; 
v___f_4350_ = lean_alloc_closure((void*)(l_Lean_addMessageContextPartial___redArg___lam__0), 4, 3);
lean_closure_set(v___f_4350_, 0, v_env_4349_);
lean_closure_set(v___f_4350_, 1, v_msgData_4345_);
lean_closure_set(v___f_4350_, 2, v_toPure_4346_);
v___x_4351_ = lean_apply_4(v_toBind_4347_, lean_box(0), lean_box(0), v_inst_4348_, v___f_4350_);
return v___x_4351_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___redArg(lean_object* v_inst_4352_, lean_object* v_inst_4353_, lean_object* v_inst_4354_, lean_object* v_msgData_4355_){
_start:
{
lean_object* v_toApplicative_4356_; lean_object* v_toBind_4357_; lean_object* v_getEnv_4358_; lean_object* v_toPure_4359_; lean_object* v___f_4360_; lean_object* v___x_4361_; 
v_toApplicative_4356_ = lean_ctor_get(v_inst_4352_, 0);
lean_inc_ref(v_toApplicative_4356_);
v_toBind_4357_ = lean_ctor_get(v_inst_4352_, 1);
lean_inc_n(v_toBind_4357_, 2);
lean_dec_ref(v_inst_4352_);
v_getEnv_4358_ = lean_ctor_get(v_inst_4353_, 0);
lean_inc(v_getEnv_4358_);
lean_dec_ref(v_inst_4353_);
v_toPure_4359_ = lean_ctor_get(v_toApplicative_4356_, 1);
lean_inc(v_toPure_4359_);
lean_dec_ref(v_toApplicative_4356_);
v___f_4360_ = lean_alloc_closure((void*)(l_Lean_addMessageContextPartial___redArg___lam__1), 5, 4);
lean_closure_set(v___f_4360_, 0, v_msgData_4355_);
lean_closure_set(v___f_4360_, 1, v_toPure_4359_);
lean_closure_set(v___f_4360_, 2, v_toBind_4357_);
lean_closure_set(v___f_4360_, 3, v_inst_4354_);
v___x_4361_ = lean_apply_4(v_toBind_4357_, lean_box(0), lean_box(0), v_getEnv_4358_, v___f_4360_);
return v___x_4361_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial(lean_object* v_m_4362_, lean_object* v_inst_4363_, lean_object* v_inst_4364_, lean_object* v_inst_4365_, lean_object* v_msgData_4366_){
_start:
{
lean_object* v___x_4367_; 
v___x_4367_ = l_Lean_addMessageContextPartial___redArg(v_inst_4363_, v_inst_4364_, v_inst_4365_, v_msgData_4366_);
return v___x_4367_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__0(lean_object* v_env_4368_, lean_object* v_mctx_4369_, lean_object* v_lctx_4370_, lean_object* v_msgData_4371_, lean_object* v_toPure_4372_, lean_object* v_opts_4373_){
_start:
{
lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; 
v___x_4374_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4374_, 0, v_env_4368_);
lean_ctor_set(v___x_4374_, 1, v_mctx_4369_);
lean_ctor_set(v___x_4374_, 2, v_lctx_4370_);
lean_ctor_set(v___x_4374_, 3, v_opts_4373_);
v___x_4375_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4374_);
lean_ctor_set(v___x_4375_, 1, v_msgData_4371_);
v___x_4376_ = lean_apply_2(v_toPure_4372_, lean_box(0), v___x_4375_);
return v___x_4376_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__1(lean_object* v_env_4377_, lean_object* v_mctx_4378_, lean_object* v_msgData_4379_, lean_object* v_toPure_4380_, lean_object* v_toBind_4381_, lean_object* v_inst_4382_, lean_object* v_lctx_4383_){
_start:
{
lean_object* v___f_4384_; lean_object* v___x_4385_; 
v___f_4384_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__0), 6, 5);
lean_closure_set(v___f_4384_, 0, v_env_4377_);
lean_closure_set(v___f_4384_, 1, v_mctx_4378_);
lean_closure_set(v___f_4384_, 2, v_lctx_4383_);
lean_closure_set(v___f_4384_, 3, v_msgData_4379_);
lean_closure_set(v___f_4384_, 4, v_toPure_4380_);
v___x_4385_ = lean_apply_4(v_toBind_4381_, lean_box(0), lean_box(0), v_inst_4382_, v___f_4384_);
return v___x_4385_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__2(lean_object* v_env_4386_, lean_object* v_msgData_4387_, lean_object* v_toPure_4388_, lean_object* v_toBind_4389_, lean_object* v_inst_4390_, lean_object* v_inst_4391_, lean_object* v_mctx_4392_){
_start:
{
lean_object* v___f_4393_; lean_object* v___x_4394_; 
lean_inc(v_toBind_4389_);
v___f_4393_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__1), 7, 6);
lean_closure_set(v___f_4393_, 0, v_env_4386_);
lean_closure_set(v___f_4393_, 1, v_mctx_4392_);
lean_closure_set(v___f_4393_, 2, v_msgData_4387_);
lean_closure_set(v___f_4393_, 3, v_toPure_4388_);
lean_closure_set(v___f_4393_, 4, v_toBind_4389_);
lean_closure_set(v___f_4393_, 5, v_inst_4390_);
v___x_4394_ = lean_apply_4(v_toBind_4389_, lean_box(0), lean_box(0), v_inst_4391_, v___f_4393_);
return v___x_4394_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg___lam__3(lean_object* v_inst_4395_, lean_object* v_msgData_4396_, lean_object* v_toPure_4397_, lean_object* v_toBind_4398_, lean_object* v_inst_4399_, lean_object* v_inst_4400_, lean_object* v_env_4401_){
_start:
{
lean_object* v_getMCtx_4402_; lean_object* v___f_4403_; lean_object* v___x_4404_; 
v_getMCtx_4402_ = lean_ctor_get(v_inst_4395_, 0);
lean_inc(v_getMCtx_4402_);
lean_dec_ref(v_inst_4395_);
lean_inc(v_toBind_4398_);
v___f_4403_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__2), 7, 6);
lean_closure_set(v___f_4403_, 0, v_env_4401_);
lean_closure_set(v___f_4403_, 1, v_msgData_4396_);
lean_closure_set(v___f_4403_, 2, v_toPure_4397_);
lean_closure_set(v___f_4403_, 3, v_toBind_4398_);
lean_closure_set(v___f_4403_, 4, v_inst_4399_);
lean_closure_set(v___f_4403_, 5, v_inst_4400_);
v___x_4404_ = lean_apply_4(v_toBind_4398_, lean_box(0), lean_box(0), v_getMCtx_4402_, v___f_4403_);
return v___x_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___redArg(lean_object* v_inst_4405_, lean_object* v_inst_4406_, lean_object* v_inst_4407_, lean_object* v_inst_4408_, lean_object* v_inst_4409_, lean_object* v_msgData_4410_){
_start:
{
lean_object* v_toApplicative_4411_; lean_object* v_toBind_4412_; lean_object* v_getEnv_4413_; lean_object* v_toPure_4414_; lean_object* v___f_4415_; lean_object* v___x_4416_; 
v_toApplicative_4411_ = lean_ctor_get(v_inst_4405_, 0);
lean_inc_ref(v_toApplicative_4411_);
v_toBind_4412_ = lean_ctor_get(v_inst_4405_, 1);
lean_inc_n(v_toBind_4412_, 2);
lean_dec_ref(v_inst_4405_);
v_getEnv_4413_ = lean_ctor_get(v_inst_4406_, 0);
lean_inc(v_getEnv_4413_);
lean_dec_ref(v_inst_4406_);
v_toPure_4414_ = lean_ctor_get(v_toApplicative_4411_, 1);
lean_inc(v_toPure_4414_);
lean_dec_ref(v_toApplicative_4411_);
v___f_4415_ = lean_alloc_closure((void*)(l_Lean_addMessageContextFull___redArg___lam__3), 7, 6);
lean_closure_set(v___f_4415_, 0, v_inst_4407_);
lean_closure_set(v___f_4415_, 1, v_msgData_4410_);
lean_closure_set(v___f_4415_, 2, v_toPure_4414_);
lean_closure_set(v___f_4415_, 3, v_toBind_4412_);
lean_closure_set(v___f_4415_, 4, v_inst_4409_);
lean_closure_set(v___f_4415_, 5, v_inst_4408_);
v___x_4416_ = lean_apply_4(v_toBind_4412_, lean_box(0), lean_box(0), v_getEnv_4413_, v___f_4415_);
return v___x_4416_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull(lean_object* v_m_4417_, lean_object* v_inst_4418_, lean_object* v_inst_4419_, lean_object* v_inst_4420_, lean_object* v_inst_4421_, lean_object* v_inst_4422_, lean_object* v_msgData_4423_){
_start:
{
lean_object* v___x_4424_; 
v___x_4424_ = l_Lean_addMessageContextFull___redArg(v_inst_4418_, v_inst_4419_, v_inst_4420_, v_inst_4421_, v_inst_4422_, v_msgData_4423_);
return v___x_4424_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(lean_object* v_s_4427_){
_start:
{
lean_object* v___x_4428_; 
v___x_4428_ = ((lean_object*)(l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___closed__0));
return v___x_4428_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0___boxed(lean_object* v_s_4429_){
_start:
{
lean_object* v_res_4430_; 
v_res_4430_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(v_s_4429_);
lean_dec_ref(v_s_4429_);
return v_res_4430_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(lean_object* v_str_4431_, lean_object* v___x_4432_, lean_object* v___x_4433_, lean_object* v_a_4434_, lean_object* v_b_4435_){
_start:
{
lean_object* v_it_4437_; lean_object* v_startInclusive_4438_; lean_object* v_endExclusive_4439_; 
if (lean_obj_tag(v_a_4434_) == 0)
{
lean_object* v_currPos_4445_; lean_object* v_searcher_4446_; lean_object* v___x_4448_; uint8_t v_isShared_4449_; uint8_t v_isSharedCheck_4472_; 
v_currPos_4445_ = lean_ctor_get(v_a_4434_, 0);
v_searcher_4446_ = lean_ctor_get(v_a_4434_, 1);
v_isSharedCheck_4472_ = !lean_is_exclusive(v_a_4434_);
if (v_isSharedCheck_4472_ == 0)
{
v___x_4448_ = v_a_4434_;
v_isShared_4449_ = v_isSharedCheck_4472_;
goto v_resetjp_4447_;
}
else
{
lean_inc(v_searcher_4446_);
lean_inc(v_currPos_4445_);
lean_dec(v_a_4434_);
v___x_4448_ = lean_box(0);
v_isShared_4449_ = v_isSharedCheck_4472_;
goto v_resetjp_4447_;
}
v_resetjp_4447_:
{
lean_object* v_startInclusive_4450_; lean_object* v_endExclusive_4451_; lean_object* v___x_4452_; uint8_t v___x_4453_; 
v_startInclusive_4450_ = lean_ctor_get(v___x_4432_, 1);
v_endExclusive_4451_ = lean_ctor_get(v___x_4432_, 2);
v___x_4452_ = lean_nat_sub(v_endExclusive_4451_, v_startInclusive_4450_);
v___x_4453_ = lean_nat_dec_eq(v_searcher_4446_, v___x_4452_);
lean_dec(v___x_4452_);
if (v___x_4453_ == 0)
{
uint32_t v___x_4454_; uint32_t v___x_4455_; uint8_t v___x_4456_; 
v___x_4454_ = 10;
v___x_4455_ = lean_string_utf8_get_fast(v_str_4431_, v_searcher_4446_);
v___x_4456_ = lean_uint32_dec_eq(v___x_4455_, v___x_4454_);
if (v___x_4456_ == 0)
{
lean_object* v___x_4457_; lean_object* v___x_4459_; 
v___x_4457_ = lean_string_utf8_next_fast(v_str_4431_, v_searcher_4446_);
lean_dec(v_searcher_4446_);
if (v_isShared_4449_ == 0)
{
lean_ctor_set(v___x_4448_, 1, v___x_4457_);
v___x_4459_ = v___x_4448_;
goto v_reusejp_4458_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_currPos_4445_);
lean_ctor_set(v_reuseFailAlloc_4461_, 1, v___x_4457_);
v___x_4459_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4458_;
}
v_reusejp_4458_:
{
v_a_4434_ = v___x_4459_;
goto _start;
}
}
else
{
lean_object* v___x_4462_; lean_object* v___x_4463_; lean_object* v___x_4464_; lean_object* v_slice_4465_; lean_object* v_nextIt_4467_; 
v___x_4462_ = lean_string_utf8_next_fast(v_str_4431_, v_searcher_4446_);
v___x_4463_ = lean_nat_sub(v___x_4462_, v_searcher_4446_);
v___x_4464_ = lean_nat_add(v_searcher_4446_, v___x_4463_);
lean_dec(v___x_4463_);
v_slice_4465_ = l_String_Slice_subslice_x21(v___x_4432_, v_currPos_4445_, v_searcher_4446_);
lean_inc(v___x_4464_);
if (v_isShared_4449_ == 0)
{
lean_ctor_set(v___x_4448_, 1, v___x_4464_);
lean_ctor_set(v___x_4448_, 0, v___x_4464_);
v_nextIt_4467_ = v___x_4448_;
goto v_reusejp_4466_;
}
else
{
lean_object* v_reuseFailAlloc_4470_; 
v_reuseFailAlloc_4470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4470_, 0, v___x_4464_);
lean_ctor_set(v_reuseFailAlloc_4470_, 1, v___x_4464_);
v_nextIt_4467_ = v_reuseFailAlloc_4470_;
goto v_reusejp_4466_;
}
v_reusejp_4466_:
{
lean_object* v_startInclusive_4468_; lean_object* v_endExclusive_4469_; 
v_startInclusive_4468_ = lean_ctor_get(v_slice_4465_, 0);
lean_inc(v_startInclusive_4468_);
v_endExclusive_4469_ = lean_ctor_get(v_slice_4465_, 1);
lean_inc(v_endExclusive_4469_);
lean_dec_ref(v_slice_4465_);
v_it_4437_ = v_nextIt_4467_;
v_startInclusive_4438_ = v_startInclusive_4468_;
v_endExclusive_4439_ = v_endExclusive_4469_;
goto v___jp_4436_;
}
}
}
else
{
lean_object* v___x_4471_; 
lean_del_object(v___x_4448_);
lean_dec(v_searcher_4446_);
v___x_4471_ = lean_box(1);
lean_inc(v___x_4433_);
v_it_4437_ = v___x_4471_;
v_startInclusive_4438_ = v_currPos_4445_;
v_endExclusive_4439_ = v___x_4433_;
goto v___jp_4436_;
}
}
}
else
{
lean_dec(v___x_4433_);
return v_b_4435_;
}
v___jp_4436_:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; 
v___x_4440_ = lean_string_utf8_extract(v_str_4431_, v_startInclusive_4438_, v_endExclusive_4439_);
lean_dec(v_endExclusive_4439_);
lean_dec(v_startInclusive_4438_);
v___x_4441_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4440_);
v___x_4442_ = l_Lean_MessageData_ofFormat(v___x_4441_);
v___x_4443_ = lean_array_push(v_b_4435_, v___x_4442_);
v_a_4434_ = v_it_4437_;
v_b_4435_ = v___x_4443_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg___boxed(lean_object* v_str_4473_, lean_object* v___x_4474_, lean_object* v___x_4475_, lean_object* v_a_4476_, lean_object* v_b_4477_){
_start:
{
lean_object* v_res_4478_; 
v_res_4478_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4473_, v___x_4474_, v___x_4475_, v_a_4476_, v_b_4477_);
lean_dec_ref(v___x_4474_);
lean_dec_ref(v_str_4473_);
return v_res_4478_;
}
}
LEAN_EXPORT lean_object* l_Lean_stringToMessageData(lean_object* v_str_4481_){
_start:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v_lines_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; lean_object* v___x_4488_; lean_object* v___x_4489_; lean_object* v___x_4490_; 
v___x_4482_ = lean_unsigned_to_nat(0u);
v___x_4483_ = lean_string_utf8_byte_size(v_str_4481_);
lean_inc_ref(v_str_4481_);
v___x_4484_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4484_, 0, v_str_4481_);
lean_ctor_set(v___x_4484_, 1, v___x_4482_);
lean_ctor_set(v___x_4484_, 2, v___x_4483_);
v_lines_4485_ = l_String_Slice_splitToSubslice___at___00Lean_stringToMessageData_spec__0(v___x_4484_);
v___x_4486_ = ((lean_object*)(l_Lean_stringToMessageData___closed__0));
v___x_4487_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4481_, v___x_4484_, v___x_4483_, v_lines_4485_, v___x_4486_);
lean_dec_ref_known(v___x_4484_, 3);
lean_dec_ref(v_str_4481_);
v___x_4488_ = lean_array_to_list(v___x_4487_);
v___x_4489_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4490_ = l_Lean_MessageData_joinSep(v___x_4488_, v___x_4489_);
return v___x_4490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(lean_object* v_str_4491_, lean_object* v___x_4492_, lean_object* v___x_4493_, lean_object* v_inst_4494_, lean_object* v_R_4495_, lean_object* v_a_4496_, lean_object* v_b_4497_){
_start:
{
lean_object* v___x_4498_; 
v___x_4498_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___redArg(v_str_4491_, v___x_4492_, v___x_4493_, v_a_4496_, v_b_4497_);
return v___x_4498_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1___boxed(lean_object* v_str_4499_, lean_object* v___x_4500_, lean_object* v___x_4501_, lean_object* v_inst_4502_, lean_object* v_R_4503_, lean_object* v_a_4504_, lean_object* v_b_4505_){
_start:
{
lean_object* v_res_4506_; 
v_res_4506_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_stringToMessageData_spec__1(v_str_4499_, v___x_4500_, v___x_4501_, v_inst_4502_, v_R_4503_, v_a_4504_, v_b_4505_);
lean_dec_ref(v___x_4500_);
lean_dec_ref(v_str_4499_);
return v_res_4506_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat___redArg(lean_object* v_inst_4507_){
_start:
{
lean_object* v___x_4508_; lean_object* v___x_4509_; 
v___x_4508_ = ((lean_object*)(l_Lean_MessageData_instCoeString___closed__1));
v___x_4509_ = lean_alloc_closure((void*)(l_Function_comp), 6, 5);
lean_closure_set(v___x_4509_, 0, lean_box(0));
lean_closure_set(v___x_4509_, 1, lean_box(0));
lean_closure_set(v___x_4509_, 2, lean_box(0));
lean_closure_set(v___x_4509_, 3, v___x_4508_);
lean_closure_set(v___x_4509_, 4, v_inst_4507_);
return v___x_4509_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOfToFormat(lean_object* v_00_u03b1_4510_, lean_object* v_inst_4511_){
_start:
{
lean_object* v___x_4512_; 
v___x_4512_ = l_Lean_instToMessageDataOfToFormat___redArg(v_inst_4511_);
return v___x_4512_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax(lean_object* v_k_4519_){
_start:
{
lean_object* v___f_4520_; 
v___f_4520_ = ((lean_object*)(l_Lean_MessageData_instCoeSyntax___closed__0));
return v___f_4520_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataTSyntax___boxed(lean_object* v_k_4521_){
_start:
{
lean_object* v_res_4522_; 
v_res_4522_ = l_Lean_instToMessageDataTSyntax(v_k_4521_);
lean_dec(v_k_4521_);
return v_res_4522_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg___lam__0(lean_object* v_inst_4527_, lean_object* v_as_4528_){
_start:
{
lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; 
v___x_4529_ = lean_box(0);
v___x_4530_ = l_List_mapTR_loop___redArg(v_inst_4527_, v_as_4528_, v___x_4529_);
v___x_4531_ = l_Lean_MessageData_ofList(v___x_4530_);
return v___x_4531_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList___redArg(lean_object* v_inst_4532_){
_start:
{
lean_object* v___f_4533_; 
v___f_4533_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4533_, 0, v_inst_4532_);
return v___f_4533_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataList(lean_object* v_00_u03b1_4534_, lean_object* v_inst_4535_){
_start:
{
lean_object* v___f_4536_; 
v___f_4536_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataList___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4536_, 0, v_inst_4535_);
return v___f_4536_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg___lam__0(lean_object* v_inst_4537_, lean_object* v_as_4538_){
_start:
{
lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; 
v___x_4539_ = lean_array_to_list(v_as_4538_);
v___x_4540_ = lean_box(0);
v___x_4541_ = l_List_mapTR_loop___redArg(v_inst_4537_, v___x_4539_, v___x_4540_);
v___x_4542_ = l_Lean_MessageData_ofList(v___x_4541_);
return v___x_4542_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray___redArg(lean_object* v_inst_4543_){
_start:
{
lean_object* v___f_4544_; 
v___f_4544_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4544_, 0, v_inst_4543_);
return v___f_4544_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataArray(lean_object* v_00_u03b1_4545_, lean_object* v_inst_4546_){
_start:
{
lean_object* v___f_4547_; 
v___f_4547_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataArray___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4547_, 0, v_inst_4546_);
return v___f_4547_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__0(lean_object* v_it_4548_, lean_object* v_acc_4549_, lean_object* v_recur_4550_){
_start:
{
lean_object* v_array_4551_; lean_object* v_start_4552_; lean_object* v_stop_4553_; lean_object* v___x_4555_; uint8_t v_isShared_4556_; uint8_t v_isSharedCheck_4566_; 
v_array_4551_ = lean_ctor_get(v_it_4548_, 0);
v_start_4552_ = lean_ctor_get(v_it_4548_, 1);
v_stop_4553_ = lean_ctor_get(v_it_4548_, 2);
v_isSharedCheck_4566_ = !lean_is_exclusive(v_it_4548_);
if (v_isSharedCheck_4566_ == 0)
{
v___x_4555_ = v_it_4548_;
v_isShared_4556_ = v_isSharedCheck_4566_;
goto v_resetjp_4554_;
}
else
{
lean_inc(v_stop_4553_);
lean_inc(v_start_4552_);
lean_inc(v_array_4551_);
lean_dec(v_it_4548_);
v___x_4555_ = lean_box(0);
v_isShared_4556_ = v_isSharedCheck_4566_;
goto v_resetjp_4554_;
}
v_resetjp_4554_:
{
uint8_t v___x_4557_; 
v___x_4557_ = lean_nat_dec_lt(v_start_4552_, v_stop_4553_);
if (v___x_4557_ == 0)
{
lean_del_object(v___x_4555_);
lean_dec(v_stop_4553_);
lean_dec(v_start_4552_);
lean_dec_ref(v_array_4551_);
lean_dec_ref(v_recur_4550_);
return v_acc_4549_;
}
else
{
lean_object* v___x_4558_; lean_object* v___x_4559_; lean_object* v___x_4561_; 
v___x_4558_ = lean_unsigned_to_nat(1u);
v___x_4559_ = lean_nat_add(v_start_4552_, v___x_4558_);
lean_inc_ref(v_array_4551_);
if (v_isShared_4556_ == 0)
{
lean_ctor_set(v___x_4555_, 1, v___x_4559_);
v___x_4561_ = v___x_4555_;
goto v_reusejp_4560_;
}
else
{
lean_object* v_reuseFailAlloc_4565_; 
v_reuseFailAlloc_4565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4565_, 0, v_array_4551_);
lean_ctor_set(v_reuseFailAlloc_4565_, 1, v___x_4559_);
lean_ctor_set(v_reuseFailAlloc_4565_, 2, v_stop_4553_);
v___x_4561_ = v_reuseFailAlloc_4565_;
goto v_reusejp_4560_;
}
v_reusejp_4560_:
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; 
v___x_4562_ = lean_array_fget(v_array_4551_, v_start_4552_);
lean_dec(v_start_4552_);
lean_dec_ref(v_array_4551_);
v___x_4563_ = lean_array_push(v_acc_4549_, v___x_4562_);
v___x_4564_ = lean_apply_3(v_recur_4550_, v___x_4561_, v___x_4563_, lean_box(0));
return v___x_4564_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg___lam__1(lean_object* v___f_4569_, lean_object* v_inst_4570_, lean_object* v_as_4571_){
_start:
{
lean_object* v___x_4572_; lean_object* v___x_4573_; lean_object* v___x_4574_; lean_object* v___x_4575_; lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4572_ = ((lean_object*)(l_Lean_instToMessageDataSubarray___redArg___lam__1___closed__0));
v___x_4573_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___redArg(v___f_4569_, v_as_4571_, v___x_4572_);
v___x_4574_ = lean_array_to_list(v___x_4573_);
v___x_4575_ = lean_box(0);
v___x_4576_ = l_List_mapTR_loop___redArg(v_inst_4570_, v___x_4574_, v___x_4575_);
v___x_4577_ = l_Lean_MessageData_ofList(v___x_4576_);
return v___x_4577_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray___redArg(lean_object* v_inst_4579_){
_start:
{
lean_object* v___f_4580_; lean_object* v___f_4581_; 
v___f_4580_ = ((lean_object*)(l_Lean_instToMessageDataSubarray___redArg___closed__0));
v___f_4581_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataSubarray___redArg___lam__1), 3, 2);
lean_closure_set(v___f_4581_, 0, v___f_4580_);
lean_closure_set(v___f_4581_, 1, v_inst_4579_);
return v___f_4581_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataSubarray(lean_object* v_00_u03b1_4582_, lean_object* v_inst_4583_){
_start:
{
lean_object* v___x_4584_; 
v___x_4584_ = l_Lean_instToMessageDataSubarray___redArg(v_inst_4583_);
return v___x_4584_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4588_ = ((lean_object*)(l_Lean_instToMessageDataOption___redArg___lam__0___closed__1));
v___x_4589_ = l_Lean_MessageData_ofFormat(v___x_4588_);
return v___x_4589_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_4592_; lean_object* v___x_4593_; 
v___x_4592_ = ((lean_object*)(l_Lean_instToMessageDataOption___redArg___lam__0___closed__3));
v___x_4593_ = l_Lean_MessageData_ofFormat(v___x_4592_);
return v___x_4593_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg___lam__0(lean_object* v_inst_4594_, lean_object* v_x_4595_){
_start:
{
if (lean_obj_tag(v_x_4595_) == 0)
{
lean_object* v___x_4596_; 
lean_dec_ref(v_inst_4594_);
v___x_4596_ = lean_obj_once(&l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2, &l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2_once, _init_l_Lean_MessageData_instCoeOptionExpr___lam__0___closed__2);
return v___x_4596_;
}
else
{
lean_object* v_val_4597_; lean_object* v___x_4598_; lean_object* v___x_4599_; lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v_val_4597_ = lean_ctor_get(v_x_4595_, 0);
lean_inc(v_val_4597_);
lean_dec_ref_known(v_x_4595_, 1);
v___x_4598_ = lean_obj_once(&l_Lean_instToMessageDataOption___redArg___lam__0___closed__2, &l_Lean_instToMessageDataOption___redArg___lam__0___closed__2_once, _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__2);
v___x_4599_ = lean_apply_1(v_inst_4594_, v_val_4597_);
v___x_4600_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4600_, 0, v___x_4598_);
lean_ctor_set(v___x_4600_, 1, v___x_4599_);
v___x_4601_ = lean_obj_once(&l_Lean_instToMessageDataOption___redArg___lam__0___closed__4, &l_Lean_instToMessageDataOption___redArg___lam__0___closed__4_once, _init_l_Lean_instToMessageDataOption___redArg___lam__0___closed__4);
v___x_4602_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4600_);
lean_ctor_set(v___x_4602_, 1, v___x_4601_);
return v___x_4602_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption___redArg(lean_object* v_inst_4603_){
_start:
{
lean_object* v___f_4604_; 
v___f_4604_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4604_, 0, v_inst_4603_);
return v___f_4604_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOption(lean_object* v_00_u03b1_4605_, lean_object* v_inst_4606_){
_start:
{
lean_object* v___f_4607_; 
v___f_4607_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataOption___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4607_, 0, v_inst_4606_);
return v___f_4607_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg___lam__0(lean_object* v_inst_4608_, lean_object* v_inst_4609_, lean_object* v_x_4610_){
_start:
{
lean_object* v_fst_4611_; lean_object* v_snd_4612_; lean_object* v___x_4614_; uint8_t v_isShared_4615_; uint8_t v_isSharedCheck_4626_; 
v_fst_4611_ = lean_ctor_get(v_x_4610_, 0);
v_snd_4612_ = lean_ctor_get(v_x_4610_, 1);
v_isSharedCheck_4626_ = !lean_is_exclusive(v_x_4610_);
if (v_isSharedCheck_4626_ == 0)
{
v___x_4614_ = v_x_4610_;
v_isShared_4615_ = v_isSharedCheck_4626_;
goto v_resetjp_4613_;
}
else
{
lean_inc(v_snd_4612_);
lean_inc(v_fst_4611_);
lean_dec(v_x_4610_);
v___x_4614_ = lean_box(0);
v_isShared_4615_ = v_isSharedCheck_4626_;
goto v_resetjp_4613_;
}
v_resetjp_4613_:
{
lean_object* v___x_4616_; lean_object* v___x_4617_; lean_object* v___x_4619_; 
v___x_4616_ = lean_apply_1(v_inst_4608_, v_fst_4611_);
v___x_4617_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__5, &l_Lean_MessageData_ofList___closed__5_once, _init_l_Lean_MessageData_ofList___closed__5);
if (v_isShared_4615_ == 0)
{
lean_ctor_set_tag(v___x_4614_, 7);
lean_ctor_set(v___x_4614_, 1, v___x_4617_);
lean_ctor_set(v___x_4614_, 0, v___x_4616_);
v___x_4619_ = v___x_4614_;
goto v_reusejp_4618_;
}
else
{
lean_object* v_reuseFailAlloc_4625_; 
v_reuseFailAlloc_4625_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4625_, 0, v___x_4616_);
lean_ctor_set(v_reuseFailAlloc_4625_, 1, v___x_4617_);
v___x_4619_ = v_reuseFailAlloc_4625_;
goto v_reusejp_4618_;
}
v_reusejp_4618_:
{
lean_object* v___x_4620_; lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; lean_object* v___x_4624_; 
v___x_4620_ = lean_obj_once(&l_Lean_MessageData_ofList___closed__6, &l_Lean_MessageData_ofList___closed__6_once, _init_l_Lean_MessageData_ofList___closed__6);
v___x_4621_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4621_, 0, v___x_4619_);
lean_ctor_set(v___x_4621_, 1, v___x_4620_);
v___x_4622_ = lean_apply_1(v_inst_4609_, v_snd_4612_);
v___x_4623_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4623_, 0, v___x_4621_);
lean_ctor_set(v___x_4623_, 1, v___x_4622_);
v___x_4624_ = l_Lean_MessageData_paren(v___x_4623_);
return v___x_4624_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd___redArg(lean_object* v_inst_4627_, lean_object* v_inst_4628_){
_start:
{
lean_object* v___f_4629_; 
v___f_4629_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4629_, 0, v_inst_4627_);
lean_closure_set(v___f_4629_, 1, v_inst_4628_);
return v___f_4629_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataProd(lean_object* v_00_u03b1_4630_, lean_object* v_00_u03b2_4631_, lean_object* v_inst_4632_, lean_object* v_inst_4633_){
_start:
{
lean_object* v___f_4634_; 
v___f_4634_ = lean_alloc_closure((void*)(l_Lean_instToMessageDataProd___redArg___lam__0), 3, 2);
lean_closure_set(v___f_4634_, 0, v_inst_4632_);
lean_closure_set(v___f_4634_, 1, v_inst_4633_);
return v___f_4634_;
}
}
static lean_object* _init_l_Lean_instToMessageDataOptionExpr___lam__0___closed__2(void){
_start:
{
lean_object* v___x_4638_; lean_object* v___x_4639_; 
v___x_4638_ = ((lean_object*)(l_Lean_instToMessageDataOptionExpr___lam__0___closed__1));
v___x_4639_ = l_Lean_MessageData_ofFormat(v___x_4638_);
return v___x_4639_;
}
}
LEAN_EXPORT lean_object* l_Lean_instToMessageDataOptionExpr___lam__0(lean_object* v_x_4640_){
_start:
{
if (lean_obj_tag(v_x_4640_) == 0)
{
lean_object* v___x_4641_; 
v___x_4641_ = lean_obj_once(&l_Lean_instToMessageDataOptionExpr___lam__0___closed__2, &l_Lean_instToMessageDataOptionExpr___lam__0___closed__2_once, _init_l_Lean_instToMessageDataOptionExpr___lam__0___closed__2);
return v___x_4641_;
}
else
{
lean_object* v_val_4642_; lean_object* v___x_4643_; 
v_val_4642_ = lean_ctor_get(v_x_4640_, 0);
lean_inc(v_val_4642_);
lean_dec_ref_known(v_x_4640_, 1);
v___x_4643_ = l_Lean_MessageData_ofExpr(v_val_4642_);
return v___x_4643_;
}
}
}
static lean_object* _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0(void){
_start:
{
lean_object* v___x_4677_; lean_object* v___x_4678_; 
v___x_4677_ = ((lean_object*)(l_Lean_instImpl___closed__1_00___x40_Lean_Message_4238524789____hygCtx___hyg_144_));
v___x_4678_ = l_String_toRawSubstring_x27(v___x_4677_);
return v___x_4678_;
}
}
static lean_object* _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7(void){
_start:
{
lean_object* v___x_4693_; lean_object* v___x_4694_; 
v___x_4693_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__6));
v___x_4694_ = l_String_toRawSubstring_x27(v___x_4693_);
return v___x_4694_;
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(lean_object* v_x_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_){
_start:
{
lean_object* v___x_4711_; uint8_t v___x_4712_; 
v___x_4711_ = ((lean_object*)(l_Lean_termM_x21___00__closed__1));
lean_inc(v_x_4708_);
v___x_4712_ = l_Lean_Syntax_isOfKind(v_x_4708_, v___x_4711_);
if (v___x_4712_ == 0)
{
lean_object* v___x_4713_; lean_object* v___x_4714_; 
lean_dec(v_x_4708_);
v___x_4713_ = lean_box(1);
v___x_4714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
lean_ctor_set(v___x_4714_, 1, v_a_4710_);
return v___x_4714_;
}
else
{
lean_object* v_quotContext_4715_; lean_object* v_currMacroScope_4716_; lean_object* v_ref_4717_; lean_object* v___x_4718_; lean_object* v_interpStr_4719_; uint8_t v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; 
v_quotContext_4715_ = lean_ctor_get(v_a_4709_, 1);
v_currMacroScope_4716_ = lean_ctor_get(v_a_4709_, 2);
v_ref_4717_ = lean_ctor_get(v_a_4709_, 5);
v___x_4718_ = lean_unsigned_to_nat(1u);
v_interpStr_4719_ = l_Lean_Syntax_getArg(v_x_4708_, v___x_4718_);
lean_dec(v_x_4708_);
v___x_4720_ = 0;
v___x_4721_ = l_Lean_SourceInfo_fromRef(v_ref_4717_, v___x_4720_);
v___x_4722_ = lean_obj_once(&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0, &l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0_once, _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__0);
v___x_4723_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__1));
lean_inc_n(v_currMacroScope_4716_, 2);
lean_inc_n(v_quotContext_4715_, 2);
v___x_4724_ = l_Lean_addMacroScope(v_quotContext_4715_, v___x_4723_, v_currMacroScope_4716_);
v___x_4725_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__5));
lean_inc(v___x_4721_);
v___x_4726_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4721_);
lean_ctor_set(v___x_4726_, 1, v___x_4722_);
lean_ctor_set(v___x_4726_, 2, v___x_4724_);
lean_ctor_set(v___x_4726_, 3, v___x_4725_);
v___x_4727_ = lean_obj_once(&l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7, &l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7_once, _init_l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__7);
v___x_4728_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__8));
v___x_4729_ = l_Lean_addMacroScope(v_quotContext_4715_, v___x_4728_, v_currMacroScope_4716_);
v___x_4730_ = ((lean_object*)(l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___closed__12));
v___x_4731_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4721_);
lean_ctor_set(v___x_4731_, 1, v___x_4727_);
lean_ctor_set(v___x_4731_, 2, v___x_4729_);
lean_ctor_set(v___x_4731_, 3, v___x_4730_);
lean_inc_ref(v___x_4731_);
v___x_4732_ = l_Lean_TSyntax_expandInterpolatedStr(v_interpStr_4719_, v___x_4726_, v___x_4731_, v___x_4731_, v_a_4709_, v_a_4710_);
lean_dec(v_interpStr_4719_);
if (lean_obj_tag(v___x_4732_) == 0)
{
lean_object* v_a_4733_; lean_object* v_a_4734_; lean_object* v___x_4736_; uint8_t v_isShared_4737_; uint8_t v_isSharedCheck_4741_; 
v_a_4733_ = lean_ctor_get(v___x_4732_, 0);
v_a_4734_ = lean_ctor_get(v___x_4732_, 1);
v_isSharedCheck_4741_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4741_ == 0)
{
v___x_4736_ = v___x_4732_;
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
else
{
lean_inc(v_a_4734_);
lean_inc(v_a_4733_);
lean_dec(v___x_4732_);
v___x_4736_ = lean_box(0);
v_isShared_4737_ = v_isSharedCheck_4741_;
goto v_resetjp_4735_;
}
v_resetjp_4735_:
{
lean_object* v___x_4739_; 
if (v_isShared_4737_ == 0)
{
v___x_4739_ = v___x_4736_;
goto v_reusejp_4738_;
}
else
{
lean_object* v_reuseFailAlloc_4740_; 
v_reuseFailAlloc_4740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4740_, 0, v_a_4733_);
lean_ctor_set(v_reuseFailAlloc_4740_, 1, v_a_4734_);
v___x_4739_ = v_reuseFailAlloc_4740_;
goto v_reusejp_4738_;
}
v_reusejp_4738_:
{
return v___x_4739_;
}
}
}
else
{
lean_object* v_a_4742_; lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4750_; 
v_a_4742_ = lean_ctor_get(v___x_4732_, 0);
v_a_4743_ = lean_ctor_get(v___x_4732_, 1);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4732_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4745_ = v___x_4732_;
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_inc(v_a_4742_);
lean_dec(v___x_4732_);
v___x_4745_ = lean_box(0);
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
v_resetjp_4744_:
{
lean_object* v___x_4748_; 
if (v_isShared_4746_ == 0)
{
v___x_4748_ = v___x_4745_;
goto v_reusejp_4747_;
}
else
{
lean_object* v_reuseFailAlloc_4749_; 
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4742_);
lean_ctor_set(v_reuseFailAlloc_4749_, 1, v_a_4743_);
v___x_4748_ = v_reuseFailAlloc_4749_;
goto v_reusejp_4747_;
}
v_reusejp_4747_:
{
return v___x_4748_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1___boxed(lean_object* v_x_4751_, lean_object* v_a_4752_, lean_object* v_a_4753_){
_start:
{
lean_object* v_res_4754_; 
v_res_4754_ = l_Lean___aux__Lean__Message______macroRules__Lean__termM_x21____1(v_x_4751_, v_a_4752_, v_a_4753_);
lean_dec_ref(v_a_4752_);
return v_res_4754_;
}
}
static lean_object* _init_l_Lean_toMessageList___closed__1(void){
_start:
{
lean_object* v___x_4756_; lean_object* v___x_4757_; 
v___x_4756_ = ((lean_object*)(l_Lean_toMessageList___closed__0));
v___x_4757_ = l_Lean_stringToMessageData(v___x_4756_);
return v___x_4757_;
}
}
LEAN_EXPORT lean_object* l_Lean_toMessageList(lean_object* v_msgs_4758_){
_start:
{
lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; 
v___x_4759_ = lean_array_to_list(v_msgs_4758_);
v___x_4760_ = lean_obj_once(&l_Lean_toMessageList___closed__1, &l_Lean_toMessageList___closed__1_once, _init_l_Lean_toMessageList___closed__1);
v___x_4761_ = l_Lean_MessageData_joinSep(v___x_4759_, v___x_4760_);
v___x_4762_ = l_Lean_indentD(v___x_4761_);
return v___x_4762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(lean_object* v_env_4763_, lean_object* v_lctx_4764_, lean_object* v_opts_4765_, lean_object* v_msg_4766_){
_start:
{
lean_object* v___x_4767_; lean_object* v___x_4768_; lean_object* v___x_4769_; lean_object* v___x_4770_; 
v___x_4767_ = lean_elab_environment_of_kernel_env(v_env_4763_);
v___x_4768_ = lean_obj_once(&l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2, &l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2_once, _init_l___private_Lean_Message_0__Lean_MessageData_hasSyntheticSorry_visit___closed__2);
v___x_4769_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4769_, 0, v___x_4767_);
lean_ctor_set(v___x_4769_, 1, v___x_4768_);
lean_ctor_set(v___x_4769_, 2, v_lctx_4764_);
lean_ctor_set(v___x_4769_, 3, v_opts_4765_);
v___x_4770_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_4770_, 0, v___x_4769_);
lean_ctor_set(v___x_4770_, 1, v_msg_4766_);
return v___x_4770_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4772_; lean_object* v___x_4773_; 
v___x_4772_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__0));
v___x_4773_ = l_Lean_stringToMessageData(v___x_4772_);
return v___x_4773_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4775_; lean_object* v___x_4776_; 
v___x_4775_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__2));
v___x_4776_ = l_Lean_stringToMessageData(v___x_4775_);
return v___x_4776_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4778_; lean_object* v___x_4779_; 
v___x_4778_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___lam__0___closed__4));
v___x_4779_ = l_Lean_stringToMessageData(v___x_4778_);
return v___x_4779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData___lam__0(lean_object* v_givenType_4780_, lean_object* v_n_4781_, lean_object* v_expectedType_4782_){
_start:
{
lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; 
v___x_4783_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__1);
v___x_4784_ = l_Lean_MessageData_ofName(v_n_4781_);
v___x_4785_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4785_, 0, v___x_4783_);
lean_ctor_set(v___x_4785_, 1, v___x_4784_);
v___x_4786_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__3);
v___x_4787_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4787_, 0, v___x_4785_);
lean_ctor_set(v___x_4787_, 1, v___x_4786_);
v___x_4788_ = l_Lean_indentExpr(v_givenType_4780_);
v___x_4789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4789_, 0, v___x_4787_);
lean_ctor_set(v___x_4789_, 1, v___x_4788_);
v___x_4790_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5, &l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5_once, _init_l_Lean_Kernel_Exception_toMessageData___lam__0___closed__5);
v___x_4791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4791_, 0, v___x_4789_);
lean_ctor_set(v___x_4791_, 1, v___x_4790_);
v___x_4792_ = l_Lean_indentExpr(v_expectedType_4782_);
v___x_4793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4791_);
lean_ctor_set(v___x_4793_, 1, v___x_4792_);
return v___x_4793_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__0(void){
_start:
{
lean_object* v___x_4794_; 
v___x_4794_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_4794_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__1(void){
_start:
{
lean_object* v___x_4795_; lean_object* v___x_4796_; 
v___x_4795_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__0, &l_Lean_Kernel_Exception_toMessageData___closed__0_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__0);
v___x_4796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4796_, 0, v___x_4795_);
return v___x_4796_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; 
v___x_4797_ = lean_box(1);
v___x_4798_ = lean_obj_once(&l_Lean_addMessageContextPartial___redArg___lam__0___closed__1, &l_Lean_addMessageContextPartial___redArg___lam__0___closed__1_once, _init_l_Lean_addMessageContextPartial___redArg___lam__0___closed__1);
v___x_4799_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__1, &l_Lean_Kernel_Exception_toMessageData___closed__1_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__1);
v___x_4800_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4800_, 0, v___x_4799_);
lean_ctor_set(v___x_4800_, 1, v___x_4798_);
lean_ctor_set(v___x_4800_, 2, v___x_4797_);
return v___x_4800_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_4802_; lean_object* v___x_4803_; 
v___x_4802_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__3));
v___x_4803_ = l_Lean_stringToMessageData(v___x_4802_);
return v___x_4803_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__6(void){
_start:
{
lean_object* v___x_4805_; lean_object* v___x_4806_; 
v___x_4805_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__5));
v___x_4806_ = l_Lean_stringToMessageData(v___x_4805_);
return v___x_4806_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__8(void){
_start:
{
lean_object* v___x_4808_; lean_object* v___x_4809_; 
v___x_4808_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__7));
v___x_4809_ = l_Lean_stringToMessageData(v___x_4808_);
return v___x_4809_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__11(void){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; 
v___x_4813_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__10));
v___x_4814_ = l_Lean_MessageData_ofFormat(v___x_4813_);
return v___x_4814_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__13(void){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4816_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__12));
v___x_4817_ = l_Lean_stringToMessageData(v___x_4816_);
return v___x_4817_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__15(void){
_start:
{
lean_object* v___x_4819_; lean_object* v___x_4820_; 
v___x_4819_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__14));
v___x_4820_ = l_Lean_stringToMessageData(v___x_4819_);
return v___x_4820_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__17(void){
_start:
{
lean_object* v___x_4822_; lean_object* v___x_4823_; 
v___x_4822_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__16));
v___x_4823_ = l_Lean_stringToMessageData(v___x_4822_);
return v___x_4823_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__19(void){
_start:
{
lean_object* v___x_4825_; lean_object* v___x_4826_; 
v___x_4825_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__18));
v___x_4826_ = l_Lean_stringToMessageData(v___x_4825_);
return v___x_4826_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__21(void){
_start:
{
lean_object* v___x_4828_; lean_object* v___x_4829_; 
v___x_4828_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__20));
v___x_4829_ = l_Lean_stringToMessageData(v___x_4828_);
return v___x_4829_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__23(void){
_start:
{
lean_object* v___x_4831_; lean_object* v___x_4832_; 
v___x_4831_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__22));
v___x_4832_ = l_Lean_stringToMessageData(v___x_4831_);
return v___x_4832_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__25(void){
_start:
{
lean_object* v___x_4834_; lean_object* v___x_4835_; 
v___x_4834_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__24));
v___x_4835_ = l_Lean_stringToMessageData(v___x_4834_);
return v___x_4835_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__27(void){
_start:
{
lean_object* v___x_4837_; lean_object* v___x_4838_; 
v___x_4837_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__26));
v___x_4838_ = l_Lean_stringToMessageData(v___x_4837_);
return v___x_4838_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__29(void){
_start:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; 
v___x_4840_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__28));
v___x_4841_ = l_Lean_stringToMessageData(v___x_4840_);
return v___x_4841_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__31(void){
_start:
{
lean_object* v___x_4843_; lean_object* v___x_4844_; 
v___x_4843_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__30));
v___x_4844_ = l_Lean_stringToMessageData(v___x_4843_);
return v___x_4844_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__33(void){
_start:
{
lean_object* v___x_4846_; lean_object* v___x_4847_; 
v___x_4846_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__32));
v___x_4847_ = l_Lean_stringToMessageData(v___x_4846_);
return v___x_4847_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__35(void){
_start:
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
v___x_4849_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__34));
v___x_4850_ = l_Lean_stringToMessageData(v___x_4849_);
return v___x_4850_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__37(void){
_start:
{
lean_object* v___x_4852_; lean_object* v___x_4853_; 
v___x_4852_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__36));
v___x_4853_ = l_Lean_stringToMessageData(v___x_4852_);
return v___x_4853_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__39(void){
_start:
{
lean_object* v___x_4855_; lean_object* v___x_4856_; 
v___x_4855_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__38));
v___x_4856_ = l_Lean_stringToMessageData(v___x_4855_);
return v___x_4856_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__42(void){
_start:
{
lean_object* v___x_4860_; lean_object* v___x_4861_; 
v___x_4860_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__41));
v___x_4861_ = l_Lean_MessageData_ofFormat(v___x_4860_);
return v___x_4861_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__45(void){
_start:
{
lean_object* v___x_4865_; lean_object* v___x_4866_; 
v___x_4865_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__44));
v___x_4866_ = l_Lean_MessageData_ofFormat(v___x_4865_);
return v___x_4866_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__48(void){
_start:
{
lean_object* v___x_4870_; lean_object* v___x_4871_; 
v___x_4870_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__47));
v___x_4871_ = l_Lean_MessageData_ofFormat(v___x_4870_);
return v___x_4871_;
}
}
static lean_object* _init_l_Lean_Kernel_Exception_toMessageData___closed__51(void){
_start:
{
lean_object* v___x_4875_; lean_object* v___x_4876_; 
v___x_4875_ = ((lean_object*)(l_Lean_Kernel_Exception_toMessageData___closed__50));
v___x_4876_ = l_Lean_MessageData_ofFormat(v___x_4875_);
return v___x_4876_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object* v_e_4877_, lean_object* v_opts_4878_){
_start:
{
switch(lean_obj_tag(v_e_4877_))
{
case 0:
{
lean_object* v_env_4879_; lean_object* v_name_4880_; lean_object* v___x_4882_; uint8_t v_isShared_4883_; uint8_t v_isSharedCheck_4893_; 
v_env_4879_ = lean_ctor_get(v_e_4877_, 0);
v_name_4880_ = lean_ctor_get(v_e_4877_, 1);
v_isSharedCheck_4893_ = !lean_is_exclusive(v_e_4877_);
if (v_isSharedCheck_4893_ == 0)
{
v___x_4882_ = v_e_4877_;
v_isShared_4883_ = v_isSharedCheck_4893_;
goto v_resetjp_4881_;
}
else
{
lean_inc(v_name_4880_);
lean_inc(v_env_4879_);
lean_dec(v_e_4877_);
v___x_4882_ = lean_box(0);
v_isShared_4883_ = v_isSharedCheck_4893_;
goto v_resetjp_4881_;
}
v_resetjp_4881_:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; lean_object* v___x_4886_; lean_object* v___x_4888_; 
v___x_4884_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__2, &l_Lean_Kernel_Exception_toMessageData___closed__2_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__2);
v___x_4885_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__4, &l_Lean_Kernel_Exception_toMessageData___closed__4_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__4);
v___x_4886_ = l_Lean_MessageData_ofName(v_name_4880_);
if (v_isShared_4883_ == 0)
{
lean_ctor_set_tag(v___x_4882_, 7);
lean_ctor_set(v___x_4882_, 1, v___x_4886_);
lean_ctor_set(v___x_4882_, 0, v___x_4885_);
v___x_4888_ = v___x_4882_;
goto v_reusejp_4887_;
}
else
{
lean_object* v_reuseFailAlloc_4892_; 
v_reuseFailAlloc_4892_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4892_, 0, v___x_4885_);
lean_ctor_set(v_reuseFailAlloc_4892_, 1, v___x_4886_);
v___x_4888_ = v_reuseFailAlloc_4892_;
goto v_reusejp_4887_;
}
v_reusejp_4887_:
{
lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4891_; 
v___x_4889_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__6, &l_Lean_Kernel_Exception_toMessageData___closed__6_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__6);
v___x_4890_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4890_, 0, v___x_4888_);
lean_ctor_set(v___x_4890_, 1, v___x_4889_);
v___x_4891_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4879_, v___x_4884_, v_opts_4878_, v___x_4890_);
return v___x_4891_;
}
}
}
case 1:
{
lean_object* v_env_4894_; lean_object* v_name_4895_; lean_object* v___x_4897_; uint8_t v_isShared_4898_; uint8_t v_isSharedCheck_4909_; 
v_env_4894_ = lean_ctor_get(v_e_4877_, 0);
v_name_4895_ = lean_ctor_get(v_e_4877_, 1);
v_isSharedCheck_4909_ = !lean_is_exclusive(v_e_4877_);
if (v_isSharedCheck_4909_ == 0)
{
v___x_4897_ = v_e_4877_;
v_isShared_4898_ = v_isSharedCheck_4909_;
goto v_resetjp_4896_;
}
else
{
lean_inc(v_name_4895_);
lean_inc(v_env_4894_);
lean_dec(v_e_4877_);
v___x_4897_ = lean_box(0);
v_isShared_4898_ = v_isSharedCheck_4909_;
goto v_resetjp_4896_;
}
v_resetjp_4896_:
{
lean_object* v___x_4899_; lean_object* v___x_4900_; uint8_t v___x_4901_; lean_object* v___x_4902_; lean_object* v___x_4904_; 
v___x_4899_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__2, &l_Lean_Kernel_Exception_toMessageData___closed__2_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__2);
v___x_4900_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__8, &l_Lean_Kernel_Exception_toMessageData___closed__8_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__8);
v___x_4901_ = 1;
v___x_4902_ = l_Lean_MessageData_ofConstName(v_name_4895_, v___x_4901_);
if (v_isShared_4898_ == 0)
{
lean_ctor_set_tag(v___x_4897_, 7);
lean_ctor_set(v___x_4897_, 1, v___x_4902_);
lean_ctor_set(v___x_4897_, 0, v___x_4900_);
v___x_4904_ = v___x_4897_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v___x_4900_);
lean_ctor_set(v_reuseFailAlloc_4908_, 1, v___x_4902_);
v___x_4904_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
lean_object* v___x_4905_; lean_object* v___x_4906_; lean_object* v___x_4907_; 
v___x_4905_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__6, &l_Lean_Kernel_Exception_toMessageData___closed__6_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__6);
v___x_4906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4906_, 0, v___x_4904_);
lean_ctor_set(v___x_4906_, 1, v___x_4905_);
v___x_4907_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4894_, v___x_4899_, v_opts_4878_, v___x_4906_);
return v___x_4907_;
}
}
}
case 2:
{
lean_object* v_env_4910_; lean_object* v_decl_4911_; lean_object* v_givenType_4912_; lean_object* v___x_4913_; 
v_env_4910_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4910_);
v_decl_4911_ = lean_ctor_get(v_e_4877_, 1);
lean_inc(v_decl_4911_);
v_givenType_4912_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_givenType_4912_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_4913_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__2, &l_Lean_Kernel_Exception_toMessageData___closed__2_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__2);
switch(lean_obj_tag(v_decl_4911_))
{
case 1:
{
lean_object* v_val_4914_; lean_object* v_toConstantVal_4915_; lean_object* v_name_4916_; lean_object* v_type_4917_; lean_object* v___x_4918_; lean_object* v___x_4919_; 
v_val_4914_ = lean_ctor_get(v_decl_4911_, 0);
lean_inc_ref(v_val_4914_);
lean_dec_ref_known(v_decl_4911_, 1);
v_toConstantVal_4915_ = lean_ctor_get(v_val_4914_, 0);
lean_inc_ref(v_toConstantVal_4915_);
lean_dec_ref(v_val_4914_);
v_name_4916_ = lean_ctor_get(v_toConstantVal_4915_, 0);
lean_inc(v_name_4916_);
v_type_4917_ = lean_ctor_get(v_toConstantVal_4915_, 2);
lean_inc_ref(v_type_4917_);
lean_dec_ref(v_toConstantVal_4915_);
v___x_4918_ = l_Lean_Kernel_Exception_toMessageData___lam__0(v_givenType_4912_, v_name_4916_, v_type_4917_);
v___x_4919_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4910_, v___x_4913_, v_opts_4878_, v___x_4918_);
return v___x_4919_;
}
case 2:
{
lean_object* v_val_4920_; lean_object* v_toConstantVal_4921_; lean_object* v_name_4922_; lean_object* v_type_4923_; lean_object* v___x_4924_; lean_object* v___x_4925_; 
v_val_4920_ = lean_ctor_get(v_decl_4911_, 0);
lean_inc_ref(v_val_4920_);
lean_dec_ref_known(v_decl_4911_, 1);
v_toConstantVal_4921_ = lean_ctor_get(v_val_4920_, 0);
lean_inc_ref(v_toConstantVal_4921_);
lean_dec_ref(v_val_4920_);
v_name_4922_ = lean_ctor_get(v_toConstantVal_4921_, 0);
lean_inc(v_name_4922_);
v_type_4923_ = lean_ctor_get(v_toConstantVal_4921_, 2);
lean_inc_ref(v_type_4923_);
lean_dec_ref(v_toConstantVal_4921_);
v___x_4924_ = l_Lean_Kernel_Exception_toMessageData___lam__0(v_givenType_4912_, v_name_4922_, v_type_4923_);
v___x_4925_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4910_, v___x_4913_, v_opts_4878_, v___x_4924_);
return v___x_4925_;
}
default: 
{
lean_object* v___x_4926_; lean_object* v___x_4927_; 
lean_dec_ref(v_givenType_4912_);
lean_dec(v_decl_4911_);
v___x_4926_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__11, &l_Lean_Kernel_Exception_toMessageData___closed__11_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__11);
v___x_4927_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4910_, v___x_4913_, v_opts_4878_, v___x_4926_);
return v___x_4927_;
}
}
}
case 3:
{
lean_object* v_env_4928_; lean_object* v_name_4929_; lean_object* v___x_4930_; lean_object* v___x_4931_; uint8_t v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; 
v_env_4928_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4928_);
v_name_4929_ = lean_ctor_get(v_e_4877_, 1);
lean_inc(v_name_4929_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_4930_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__2, &l_Lean_Kernel_Exception_toMessageData___closed__2_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__2);
v___x_4931_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__13, &l_Lean_Kernel_Exception_toMessageData___closed__13_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__13);
v___x_4932_ = 1;
v___x_4933_ = l_Lean_MessageData_ofConstName(v_name_4929_, v___x_4932_);
v___x_4934_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4931_);
lean_ctor_set(v___x_4934_, 1, v___x_4933_);
v___x_4935_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__6, &l_Lean_Kernel_Exception_toMessageData___closed__6_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__6);
v___x_4936_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4934_);
lean_ctor_set(v___x_4936_, 1, v___x_4935_);
v___x_4937_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4928_, v___x_4930_, v_opts_4878_, v___x_4936_);
return v___x_4937_;
}
case 4:
{
lean_object* v_env_4938_; lean_object* v_name_4939_; lean_object* v_expr_4940_; lean_object* v___x_4941_; lean_object* v___x_4942_; uint8_t v___x_4943_; lean_object* v___x_4944_; lean_object* v___x_4945_; lean_object* v___x_4946_; lean_object* v___x_4947_; lean_object* v___x_4948_; lean_object* v___x_4949_; lean_object* v___x_4950_; 
v_env_4938_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4938_);
v_name_4939_ = lean_ctor_get(v_e_4877_, 1);
lean_inc(v_name_4939_);
v_expr_4940_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_expr_4940_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_4941_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__2, &l_Lean_Kernel_Exception_toMessageData___closed__2_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__2);
v___x_4942_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__15, &l_Lean_Kernel_Exception_toMessageData___closed__15_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__15);
v___x_4943_ = 1;
v___x_4944_ = l_Lean_MessageData_ofConstName(v_name_4939_, v___x_4943_);
v___x_4945_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4945_, 0, v___x_4942_);
lean_ctor_set(v___x_4945_, 1, v___x_4944_);
v___x_4946_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__17, &l_Lean_Kernel_Exception_toMessageData___closed__17_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__17);
v___x_4947_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4947_, 0, v___x_4945_);
lean_ctor_set(v___x_4947_, 1, v___x_4946_);
v___x_4948_ = l_Lean_indentExpr(v_expr_4940_);
v___x_4949_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4949_, 0, v___x_4947_);
lean_ctor_set(v___x_4949_, 1, v___x_4948_);
v___x_4950_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4938_, v___x_4941_, v_opts_4878_, v___x_4949_);
return v___x_4950_;
}
case 5:
{
lean_object* v_env_4951_; lean_object* v_lctx_4952_; lean_object* v_expr_4953_; lean_object* v___x_4954_; lean_object* v___x_4955_; lean_object* v___x_4956_; lean_object* v___x_4957_; 
v_env_4951_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4951_);
v_lctx_4952_ = lean_ctor_get(v_e_4877_, 1);
lean_inc_ref(v_lctx_4952_);
v_expr_4953_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_expr_4953_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_4954_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__19, &l_Lean_Kernel_Exception_toMessageData___closed__19_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__19);
v___x_4955_ = l_Lean_indentExpr(v_expr_4953_);
v___x_4956_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4956_, 0, v___x_4954_);
lean_ctor_set(v___x_4956_, 1, v___x_4955_);
v___x_4957_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4951_, v_lctx_4952_, v_opts_4878_, v___x_4956_);
return v___x_4957_;
}
case 6:
{
lean_object* v_env_4958_; lean_object* v_lctx_4959_; lean_object* v_expr_4960_; lean_object* v___x_4961_; lean_object* v___x_4962_; lean_object* v___x_4963_; lean_object* v___x_4964_; 
v_env_4958_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4958_);
v_lctx_4959_ = lean_ctor_get(v_e_4877_, 1);
lean_inc_ref(v_lctx_4959_);
v_expr_4960_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_expr_4960_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_4961_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__21, &l_Lean_Kernel_Exception_toMessageData___closed__21_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__21);
v___x_4962_ = l_Lean_indentExpr(v_expr_4960_);
v___x_4963_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4963_, 0, v___x_4961_);
lean_ctor_set(v___x_4963_, 1, v___x_4962_);
v___x_4964_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4958_, v_lctx_4959_, v_opts_4878_, v___x_4963_);
return v___x_4964_;
}
case 7:
{
lean_object* v_env_4965_; lean_object* v_lctx_4966_; lean_object* v_name_4967_; lean_object* v___x_4968_; lean_object* v___x_4969_; lean_object* v___x_4970_; lean_object* v___x_4971_; lean_object* v___x_4972_; lean_object* v___x_4973_; 
v_env_4965_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4965_);
v_lctx_4966_ = lean_ctor_get(v_e_4877_, 1);
lean_inc_ref(v_lctx_4966_);
v_name_4967_ = lean_ctor_get(v_e_4877_, 2);
lean_inc(v_name_4967_);
lean_dec_ref_known(v_e_4877_, 5);
v___x_4968_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__23, &l_Lean_Kernel_Exception_toMessageData___closed__23_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__23);
v___x_4969_ = l_Lean_MessageData_ofName(v_name_4967_);
v___x_4970_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4970_, 0, v___x_4968_);
lean_ctor_set(v___x_4970_, 1, v___x_4969_);
v___x_4971_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__6, &l_Lean_Kernel_Exception_toMessageData___closed__6_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__6);
v___x_4972_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___x_4970_);
lean_ctor_set(v___x_4972_, 1, v___x_4971_);
v___x_4973_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4965_, v_lctx_4966_, v_opts_4878_, v___x_4972_);
return v___x_4973_;
}
case 8:
{
lean_object* v_env_4974_; lean_object* v_lctx_4975_; lean_object* v_expr_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; 
v_env_4974_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4974_);
v_lctx_4975_ = lean_ctor_get(v_e_4877_, 1);
lean_inc_ref(v_lctx_4975_);
v_expr_4976_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_expr_4976_);
lean_dec_ref_known(v_e_4877_, 4);
v___x_4977_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__25, &l_Lean_Kernel_Exception_toMessageData___closed__25_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__25);
v___x_4978_ = l_Lean_indentExpr(v_expr_4976_);
v___x_4979_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4979_, 0, v___x_4977_);
lean_ctor_set(v___x_4979_, 1, v___x_4978_);
v___x_4980_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4974_, v_lctx_4975_, v_opts_4878_, v___x_4979_);
return v___x_4980_;
}
case 9:
{
lean_object* v_env_4981_; lean_object* v_lctx_4982_; lean_object* v_app_4983_; lean_object* v_funType_4984_; lean_object* v_argType_4985_; lean_object* v___x_4986_; lean_object* v___x_4987_; lean_object* v___x_4988_; lean_object* v___x_4989_; lean_object* v___x_4990_; lean_object* v___x_4991_; lean_object* v___x_4992_; lean_object* v___x_4993_; lean_object* v___x_4994_; lean_object* v___x_4995_; lean_object* v___x_4996_; lean_object* v___x_4997_; 
v_env_4981_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4981_);
v_lctx_4982_ = lean_ctor_get(v_e_4877_, 1);
lean_inc_ref(v_lctx_4982_);
v_app_4983_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_app_4983_);
v_funType_4984_ = lean_ctor_get(v_e_4877_, 3);
lean_inc_ref(v_funType_4984_);
v_argType_4985_ = lean_ctor_get(v_e_4877_, 4);
lean_inc_ref(v_argType_4985_);
lean_dec_ref_known(v_e_4877_, 5);
v___x_4986_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__27, &l_Lean_Kernel_Exception_toMessageData___closed__27_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__27);
v___x_4987_ = l_Lean_indentExpr(v_app_4983_);
v___x_4988_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4988_, 0, v___x_4986_);
lean_ctor_set(v___x_4988_, 1, v___x_4987_);
v___x_4989_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__29, &l_Lean_Kernel_Exception_toMessageData___closed__29_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__29);
v___x_4990_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4990_, 0, v___x_4988_);
lean_ctor_set(v___x_4990_, 1, v___x_4989_);
v___x_4991_ = l_Lean_indentExpr(v_argType_4985_);
v___x_4992_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4992_, 0, v___x_4990_);
lean_ctor_set(v___x_4992_, 1, v___x_4991_);
v___x_4993_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__31, &l_Lean_Kernel_Exception_toMessageData___closed__31_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__31);
v___x_4994_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4994_, 0, v___x_4992_);
lean_ctor_set(v___x_4994_, 1, v___x_4993_);
v___x_4995_ = l_Lean_indentExpr(v_funType_4984_);
v___x_4996_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4996_, 0, v___x_4994_);
lean_ctor_set(v___x_4996_, 1, v___x_4995_);
v___x_4997_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4981_, v_lctx_4982_, v_opts_4878_, v___x_4996_);
return v___x_4997_;
}
case 10:
{
lean_object* v_env_4998_; lean_object* v_lctx_4999_; lean_object* v_proj_5000_; lean_object* v___x_5001_; lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v_env_4998_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_4998_);
v_lctx_4999_ = lean_ctor_get(v_e_4877_, 1);
lean_inc_ref(v_lctx_4999_);
v_proj_5000_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_proj_5000_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_5001_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__33, &l_Lean_Kernel_Exception_toMessageData___closed__33_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__33);
v___x_5002_ = l_Lean_indentExpr(v_proj_5000_);
v___x_5003_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5003_, 0, v___x_5001_);
lean_ctor_set(v___x_5003_, 1, v___x_5002_);
v___x_5004_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_4998_, v_lctx_4999_, v_opts_4878_, v___x_5003_);
return v___x_5004_;
}
case 11:
{
lean_object* v_env_5005_; lean_object* v_name_5006_; lean_object* v_type_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; uint8_t v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; 
v_env_5005_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_env_5005_);
v_name_5006_ = lean_ctor_get(v_e_4877_, 1);
lean_inc(v_name_5006_);
v_type_5007_ = lean_ctor_get(v_e_4877_, 2);
lean_inc_ref(v_type_5007_);
lean_dec_ref_known(v_e_4877_, 3);
v___x_5008_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__2, &l_Lean_Kernel_Exception_toMessageData___closed__2_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__2);
v___x_5009_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__35, &l_Lean_Kernel_Exception_toMessageData___closed__35_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__35);
v___x_5010_ = 1;
v___x_5011_ = l_Lean_MessageData_ofConstName(v_name_5006_, v___x_5010_);
v___x_5012_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5012_, 0, v___x_5009_);
lean_ctor_set(v___x_5012_, 1, v___x_5011_);
v___x_5013_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__37, &l_Lean_Kernel_Exception_toMessageData___closed__37_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__37);
v___x_5014_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5014_, 0, v___x_5012_);
lean_ctor_set(v___x_5014_, 1, v___x_5013_);
v___x_5015_ = l_Lean_indentExpr(v_type_5007_);
v___x_5016_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5016_, 0, v___x_5014_);
lean_ctor_set(v___x_5016_, 1, v___x_5015_);
v___x_5017_ = l___private_Lean_Message_0__Lean_Kernel_Exception_mkCtx(v_env_5005_, v___x_5008_, v_opts_4878_, v___x_5016_);
return v___x_5017_;
}
case 12:
{
lean_object* v_msg_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; 
lean_dec_ref(v_opts_4878_);
v_msg_5018_ = lean_ctor_get(v_e_4877_, 0);
lean_inc_ref(v_msg_5018_);
lean_dec_ref_known(v_e_4877_, 1);
v___x_5019_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__39, &l_Lean_Kernel_Exception_toMessageData___closed__39_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__39);
v___x_5020_ = l_Lean_stringToMessageData(v_msg_5018_);
v___x_5021_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_5021_, 0, v___x_5019_);
lean_ctor_set(v___x_5021_, 1, v___x_5020_);
return v___x_5021_;
}
case 13:
{
lean_object* v___x_5022_; 
lean_dec_ref(v_opts_4878_);
v___x_5022_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__42, &l_Lean_Kernel_Exception_toMessageData___closed__42_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__42);
return v___x_5022_;
}
case 14:
{
lean_object* v___x_5023_; 
lean_dec_ref(v_opts_4878_);
v___x_5023_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__45, &l_Lean_Kernel_Exception_toMessageData___closed__45_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__45);
return v___x_5023_;
}
case 15:
{
lean_object* v___x_5024_; 
lean_dec_ref(v_opts_4878_);
v___x_5024_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__48, &l_Lean_Kernel_Exception_toMessageData___closed__48_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__48);
return v___x_5024_;
}
default: 
{
lean_object* v___x_5025_; 
lean_dec_ref(v_opts_4878_);
v___x_5025_ = lean_obj_once(&l_Lean_Kernel_Exception_toMessageData___closed__51, &l_Lean_Kernel_Exception_toMessageData___closed__51_once, _init_l_Lean_Kernel_Exception_toMessageData___closed__51);
return v___x_5025_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_toTraceElem___redArg(lean_object* v_inst_5026_, lean_object* v_e_5027_, lean_object* v_cls_5028_){
_start:
{
lean_object* v___x_5029_; double v___x_5030_; uint8_t v___x_5031_; lean_object* v___x_5032_; lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; 
v___x_5029_ = lean_box(0);
v___x_5030_ = lean_float_once(&l_Lean_MessageData_formatAux___closed__9, &l_Lean_MessageData_formatAux___closed__9_once, _init_l_Lean_MessageData_formatAux___closed__9);
v___x_5031_ = 1;
v___x_5032_ = ((lean_object*)(l_Lean_mkErrorStringWithPos___closed__2));
v___x_5033_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_5033_, 0, v_cls_5028_);
lean_ctor_set(v___x_5033_, 1, v___x_5029_);
lean_ctor_set(v___x_5033_, 2, v___x_5032_);
lean_ctor_set_float(v___x_5033_, sizeof(void*)*3, v___x_5030_);
lean_ctor_set_float(v___x_5033_, sizeof(void*)*3 + 8, v___x_5030_);
lean_ctor_set_uint8(v___x_5033_, sizeof(void*)*3 + 16, v___x_5031_);
v___x_5034_ = lean_apply_1(v_inst_5026_, v_e_5027_);
v___x_5035_ = ((lean_object*)(l_Lean_stringToMessageData___closed__0));
v___x_5036_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_5036_, 0, v___x_5033_);
lean_ctor_set(v___x_5036_, 1, v___x_5034_);
lean_ctor_set(v___x_5036_, 2, v___x_5035_);
return v___x_5036_;
}
}
LEAN_EXPORT lean_object* l_Lean_toTraceElem(lean_object* v_00_u03b1_5037_, lean_object* v_inst_5038_, lean_object* v_e_5039_, lean_object* v_cls_5040_){
_start:
{
lean_object* v___x_5041_; 
v___x_5041_ = l_Lean_toTraceElem___redArg(v_inst_5038_, v_e_5039_, v_cls_5040_);
return v___x_5041_;
}
}
lean_object* runtime_initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_PPExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_Sorry(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_PPExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_instInhabitedMessageSeverity_default = _init_l_Lean_instInhabitedMessageSeverity_default();
l_Lean_instInhabitedMessageSeverity = _init_l_Lean_instInhabitedMessageSeverity();
l_Lean_instInhabitedTraceResult_default = _init_l_Lean_instInhabitedTraceResult_default();
l_Lean_instInhabitedTraceResult = _init_l_Lean_instInhabitedTraceResult();
l_Lean_MessageData_nil = _init_l_Lean_MessageData_nil();
lean_mark_persistent(l_Lean_MessageData_nil);
res = l___private_Lean_Message_0__Lean_MessageData_initFn_00___x40_Lean_Message_1084813479____hygCtx___hyg_4_();
if (lean_io_result_is_error(res)) return res;
l_Lean_MessageData_maxTraceChildren = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_MessageData_maxTraceChildren);
lean_dec_ref(res);
l_Lean_instInhabitedMessageLog_default = _init_l_Lean_instInhabitedMessageLog_default();
lean_mark_persistent(l_Lean_instInhabitedMessageLog_default);
l_Lean_instInhabitedMessageLog = _init_l_Lean_instInhabitedMessageLog();
lean_mark_persistent(l_Lean_instInhabitedMessageLog);
l_Lean_MessageLog_empty = _init_l_Lean_MessageLog_empty();
lean_mark_persistent(l_Lean_MessageLog_empty);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Slice_Array(uint8_t builtin);
lean_object* initialize_Lean_Util_PPExt(uint8_t builtin);
lean_object* initialize_Lean_Util_Sorry(uint8_t builtin);
lean_object* initialize_Init_Data_String_Search(uint8_t builtin);
lean_object* initialize_Init_Data_Format_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Iterators_Consumers_Collect(uint8_t builtin);
lean_object* initialize_Init_Data_String_Length(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Message(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Slice_Array(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_PPExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_Sorry(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Search(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Format_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Iterators_Consumers_Collect(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Length(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Message(builtin);
}
#ifdef __cplusplus
}
#endif
