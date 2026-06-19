// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.SpecDB
// Imports: public import Lean.Elab.Tactic.Do.Attr public import Lean.Meta.Sym.Pattern public import Lean.Meta.DiscrTree.Util import Lean.Meta.Sym.Simp.DiscrTree import Lean.Meta.Sym.Util
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
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_Key_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_key(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_instantiate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_Meta_simpGlobalConfig;
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescope(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_List_get_x21Internal___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_computeMVarBetaPotentialForSPred(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_DiscrTree_instBEqKey_beq(lean_object*, lean_object*);
uint64_t l_Lean_Meta_DiscrTree_Key_hash(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getMatch___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Pattern_match_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessDeclPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_mkBVar(lean_object*);
lean_object* lean_expr_lift_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_ofFn___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_instInhabited(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getEqnsFor_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_getProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getForallBody(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessExprPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecProof_default;
extern lean_object* l_Lean_Meta_Sym_instInhabitedPattern_default;
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_ofOrigin(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_triple_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_triple_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_simp_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_simp_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew;
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0(lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew;
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "conclusion is not a Triple "};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(31, 48, 165, 224, 255, 99, 7, 166)}};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__0_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = " was not a Triple. Should not happen with the previous tests in place."};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PostShape"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "args"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern_collectDomains(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "conclusion is not an equality"};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__17_spec__25(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__17(lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__0_value),((lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20_spec__30(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20_spec__30___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32_spec__37___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7(lean_object*);
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Meta.DiscrTree.Basic"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__0 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__0_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Meta.DiscrTree.insertKeyValue"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__1 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__1_value;
static const lean_string_object l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "invalid key sequence"};
static const lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__2 = (const lean_object*)&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__2_value;
static lean_once_cell_t l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcgen"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__0_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__1_value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 235, 69, 93, 100, 93, 190, 221)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__5_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Failed to migrate simp spec "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__7_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__8;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9___boxed(lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "could not migrate spec theorem "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__3;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__4_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__5;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__6_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__7;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__8_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__9;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Failed to migrate unfold spec "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__1___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__0_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__1_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__2, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__3_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__3___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__3_value)} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__4_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__4, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32_spec__37(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorIdx(v_x_4_);
lean_dec_ref(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
lean_object* v_etaPotential_8_; lean_object* v___x_9_; 
v_etaPotential_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc(v_etaPotential_8_);
lean_dec_ref(v_t_6_);
v___x_9_ = lean_apply_1(v_k_7_, v_etaPotential_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_triple_elim___redArg(lean_object* v_t_22_, lean_object* v_triple_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(v_t_22_, v_triple_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_triple_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_triple_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(v_t_26_, v_triple_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_simp_elim___redArg(lean_object* v_t_30_, lean_object* v_simp_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(v_t_30_, v_simp_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_simp_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_simp_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremKind_ctorElim___redArg(v_t_34_, v_simp_36_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default___closed__0(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_42_ = lean_unsigned_to_nat(1000u);
v___x_43_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremKind_default));
v___x_44_ = l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecProof_default;
v___x_45_ = l_Lean_Meta_Sym_instInhabitedPattern_default;
v___x_46_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_44_);
lean_ctor_set(v___x_46_, 2, v___x_43_);
lean_ctor_set(v___x_46_, 3, v___x_42_);
return v___x_46_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default(void){
_start:
{
lean_object* v___x_47_; 
v___x_47_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default___closed__0, &l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default___closed__0);
return v___x_47_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew(void){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default;
return v___x_48_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___lam__0(lean_object* v_thm_u2081_49_, lean_object* v_thm_u2082_50_){
_start:
{
lean_object* v_proof_51_; lean_object* v_proof_52_; uint8_t v___x_53_; 
v_proof_51_ = lean_ctor_get(v_thm_u2081_49_, 1);
lean_inc_ref(v_proof_51_);
lean_dec_ref(v_thm_u2081_49_);
v_proof_52_ = lean_ctor_get(v_thm_u2082_50_, 1);
lean_inc_ref(v_proof_52_);
lean_dec_ref(v_thm_u2082_50_);
v___x_53_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(v_proof_51_, v_proof_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___lam__0___boxed(lean_object* v_thm_u2081_54_, lean_object* v_thm_u2082_55_){
_start:
{
uint8_t v_res_56_; lean_object* v_r_57_; 
v_res_56_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecTheoremNew___lam__0(v_thm_u2081_54_, v_thm_u2082_55_);
v_r_57_ = lean_box(v_res_56_);
return v_r_57_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0(lean_object* v_as_60_, size_t v_i_61_, size_t v_stop_62_, lean_object* v_b_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_, lean_object* v___y_67_){
_start:
{
uint8_t v___x_69_; 
v___x_69_ = lean_usize_dec_eq(v_i_61_, v_stop_62_);
if (v___x_69_ == 0)
{
lean_object* v___x_70_; lean_object* v___x_71_; 
v___x_70_ = lean_array_uget_borrowed(v_as_60_, v_i_61_);
lean_inc(v___x_70_);
v___x_71_ = l_Lean_Meta_mkCongrFun(v_b_63_, v___x_70_, v___y_64_, v___y_65_, v___y_66_, v___y_67_);
if (lean_obj_tag(v___x_71_) == 0)
{
lean_object* v_a_72_; size_t v___x_73_; size_t v___x_74_; 
v_a_72_ = lean_ctor_get(v___x_71_, 0);
lean_inc(v_a_72_);
lean_dec_ref_known(v___x_71_, 1);
v___x_73_ = ((size_t)1ULL);
v___x_74_ = lean_usize_add(v_i_61_, v___x_73_);
v_i_61_ = v___x_74_;
v_b_63_ = v_a_72_;
goto _start;
}
else
{
return v___x_71_;
}
}
else
{
lean_object* v___x_76_; 
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v_b_63_);
return v___x_76_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0___boxed(lean_object* v_as_77_, lean_object* v_i_78_, lean_object* v_stop_79_, lean_object* v_b_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_){
_start:
{
size_t v_i_boxed_86_; size_t v_stop_boxed_87_; lean_object* v_res_88_; 
v_i_boxed_86_ = lean_unbox_usize(v_i_78_);
lean_dec(v_i_78_);
v_stop_boxed_87_ = lean_unbox_usize(v_stop_79_);
lean_dec(v_stop_79_);
v_res_88_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0(v_as_77_, v_i_boxed_86_, v_stop_boxed_87_, v_b_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec(v___y_82_);
lean_dec_ref(v___y_81_);
lean_dec_ref(v_as_77_);
return v_res_88_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__2(void){
_start:
{
uint8_t v___x_92_; uint64_t v___x_93_; 
v___x_92_ = 2;
v___x_93_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate(lean_object* v_specThm_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_){
_start:
{
lean_object* v_proof_100_; lean_object* v_kind_101_; lean_object* v___x_102_; 
v_proof_100_ = lean_ctor_get(v_specThm_94_, 1);
lean_inc_ref(v_proof_100_);
v_kind_101_ = lean_ctor_get(v_specThm_94_, 2);
lean_inc_ref(v_kind_101_);
lean_dec_ref(v_specThm_94_);
v___x_102_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_instantiate(v_proof_100_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v_snd_104_; lean_object* v_snd_105_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
v_snd_104_ = lean_ctor_get(v_a_103_, 1);
lean_inc(v_snd_104_);
v_snd_105_ = lean_ctor_get(v_snd_104_, 1);
lean_inc(v_snd_105_);
if (lean_obj_tag(v_kind_101_) == 1)
{
lean_object* v_fst_106_; lean_object* v_fst_107_; lean_object* v_fst_108_; lean_object* v_snd_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_244_; 
v_fst_106_ = lean_ctor_get(v_a_103_, 0);
lean_inc(v_fst_106_);
lean_dec(v_a_103_);
v_fst_107_ = lean_ctor_get(v_snd_104_, 0);
lean_inc(v_fst_107_);
lean_dec(v_snd_104_);
v_fst_108_ = lean_ctor_get(v_snd_105_, 0);
v_snd_109_ = lean_ctor_get(v_snd_105_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_snd_105_);
if (v_isSharedCheck_244_ == 0)
{
v___x_111_ = v_snd_105_;
v_isShared_112_ = v_isSharedCheck_244_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_snd_109_);
lean_inc(v_fst_108_);
lean_dec(v_snd_105_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_244_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v_etaArgs_113_; lean_object* v___x_114_; uint8_t v___x_115_; 
v_etaArgs_113_ = lean_ctor_get(v_kind_101_, 0);
lean_inc(v_etaArgs_113_);
lean_dec_ref_known(v_kind_101_, 1);
v___x_114_ = lean_unsigned_to_nat(0u);
v___x_115_ = lean_nat_dec_eq(v_etaArgs_113_, v___x_114_);
if (v___x_115_ == 0)
{
lean_object* v___x_116_; uint8_t v___x_117_; 
v___x_116_ = l_Lean_Expr_cleanupAnnotations(v_snd_109_);
v___x_117_ = l_Lean_Expr_isApp(v___x_116_);
if (v___x_117_ == 0)
{
lean_dec_ref(v___x_116_);
lean_dec(v_etaArgs_113_);
lean_del_object(v___x_111_);
lean_dec(v_fst_108_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
return v___x_102_;
}
else
{
lean_object* v___x_118_; uint8_t v___x_119_; 
v___x_118_ = l_Lean_Expr_appFnCleanup___redArg(v___x_116_);
v___x_119_ = l_Lean_Expr_isApp(v___x_118_);
if (v___x_119_ == 0)
{
lean_dec_ref(v___x_118_);
lean_dec(v_etaArgs_113_);
lean_del_object(v___x_111_);
lean_dec(v_fst_108_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
return v___x_102_;
}
else
{
lean_object* v___x_120_; uint8_t v___x_121_; 
v___x_120_ = l_Lean_Expr_appFnCleanup___redArg(v___x_118_);
v___x_121_ = l_Lean_Expr_isApp(v___x_120_);
if (v___x_121_ == 0)
{
lean_dec_ref(v___x_120_);
lean_dec(v_etaArgs_113_);
lean_del_object(v___x_111_);
lean_dec(v_fst_108_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
return v___x_102_;
}
else
{
lean_object* v_arg_122_; lean_object* v___x_123_; lean_object* v___x_124_; uint8_t v___x_125_; 
v_arg_122_ = lean_ctor_get(v___x_120_, 1);
lean_inc_ref(v_arg_122_);
v___x_123_ = l_Lean_Expr_appFnCleanup___redArg(v___x_120_);
v___x_124_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__1));
v___x_125_ = l_Lean_Expr_isConstOf(v___x_123_, v___x_124_);
lean_dec_ref(v___x_123_);
if (v___x_125_ == 0)
{
lean_dec_ref(v_arg_122_);
lean_dec(v_etaArgs_113_);
lean_del_object(v___x_111_);
lean_dec(v_fst_108_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
return v___x_102_;
}
else
{
lean_object* v___x_126_; uint8_t v_foApprox_127_; uint8_t v_ctxApprox_128_; uint8_t v_quasiPatternApprox_129_; uint8_t v_constApprox_130_; uint8_t v_isDefEqStuckEx_131_; uint8_t v_unificationHints_132_; uint8_t v_proofIrrelevance_133_; uint8_t v_assignSyntheticOpaque_134_; uint8_t v_offsetCnstrs_135_; uint8_t v_etaStruct_136_; uint8_t v_univApprox_137_; uint8_t v_iota_138_; uint8_t v_beta_139_; uint8_t v_proj_140_; uint8_t v_zeta_141_; uint8_t v_zetaDelta_142_; uint8_t v_zetaUnused_143_; uint8_t v_zetaHave_144_; lean_object* v___x_146_; uint8_t v_isShared_147_; uint8_t v_isSharedCheck_243_; 
lean_dec_ref_known(v___x_102_, 1);
v___x_126_ = l_Lean_Meta_Context_config(v_a_95_);
v_foApprox_127_ = lean_ctor_get_uint8(v___x_126_, 0);
v_ctxApprox_128_ = lean_ctor_get_uint8(v___x_126_, 1);
v_quasiPatternApprox_129_ = lean_ctor_get_uint8(v___x_126_, 2);
v_constApprox_130_ = lean_ctor_get_uint8(v___x_126_, 3);
v_isDefEqStuckEx_131_ = lean_ctor_get_uint8(v___x_126_, 4);
v_unificationHints_132_ = lean_ctor_get_uint8(v___x_126_, 5);
v_proofIrrelevance_133_ = lean_ctor_get_uint8(v___x_126_, 6);
v_assignSyntheticOpaque_134_ = lean_ctor_get_uint8(v___x_126_, 7);
v_offsetCnstrs_135_ = lean_ctor_get_uint8(v___x_126_, 8);
v_etaStruct_136_ = lean_ctor_get_uint8(v___x_126_, 10);
v_univApprox_137_ = lean_ctor_get_uint8(v___x_126_, 11);
v_iota_138_ = lean_ctor_get_uint8(v___x_126_, 12);
v_beta_139_ = lean_ctor_get_uint8(v___x_126_, 13);
v_proj_140_ = lean_ctor_get_uint8(v___x_126_, 14);
v_zeta_141_ = lean_ctor_get_uint8(v___x_126_, 15);
v_zetaDelta_142_ = lean_ctor_get_uint8(v___x_126_, 16);
v_zetaUnused_143_ = lean_ctor_get_uint8(v___x_126_, 17);
v_zetaHave_144_ = lean_ctor_get_uint8(v___x_126_, 18);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_126_);
if (v_isSharedCheck_243_ == 0)
{
v___x_146_ = v___x_126_;
v_isShared_147_ = v_isSharedCheck_243_;
goto v_resetjp_145_;
}
else
{
lean_dec(v___x_126_);
v___x_146_ = lean_box(0);
v_isShared_147_ = v_isSharedCheck_243_;
goto v_resetjp_145_;
}
v_resetjp_145_:
{
uint8_t v_trackZetaDelta_148_; lean_object* v_zetaDeltaSet_149_; lean_object* v_lctx_150_; lean_object* v_localInstances_151_; lean_object* v_defEqCtx_x3f_152_; lean_object* v_synthPendingDepth_153_; lean_object* v_canUnfold_x3f_154_; uint8_t v_univApprox_155_; uint8_t v_inTypeClassResolution_156_; uint8_t v_cacheInferType_157_; uint8_t v___x_158_; lean_object* v_config_160_; 
v_trackZetaDelta_148_ = lean_ctor_get_uint8(v_a_95_, sizeof(void*)*7);
v_zetaDeltaSet_149_ = lean_ctor_get(v_a_95_, 1);
v_lctx_150_ = lean_ctor_get(v_a_95_, 2);
v_localInstances_151_ = lean_ctor_get(v_a_95_, 3);
v_defEqCtx_x3f_152_ = lean_ctor_get(v_a_95_, 4);
v_synthPendingDepth_153_ = lean_ctor_get(v_a_95_, 5);
v_canUnfold_x3f_154_ = lean_ctor_get(v_a_95_, 6);
v_univApprox_155_ = lean_ctor_get_uint8(v_a_95_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_156_ = lean_ctor_get_uint8(v_a_95_, sizeof(void*)*7 + 2);
v_cacheInferType_157_ = lean_ctor_get_uint8(v_a_95_, sizeof(void*)*7 + 3);
v___x_158_ = 2;
if (v_isShared_147_ == 0)
{
v_config_160_ = v___x_146_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 0, v_foApprox_127_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 1, v_ctxApprox_128_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 2, v_quasiPatternApprox_129_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 3, v_constApprox_130_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 4, v_isDefEqStuckEx_131_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 5, v_unificationHints_132_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 6, v_proofIrrelevance_133_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 7, v_assignSyntheticOpaque_134_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 8, v_offsetCnstrs_135_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 10, v_etaStruct_136_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 11, v_univApprox_137_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 12, v_iota_138_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 13, v_beta_139_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 14, v_proj_140_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 15, v_zeta_141_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 16, v_zetaDelta_142_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 17, v_zetaUnused_143_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, 18, v_zetaHave_144_);
v_config_160_ = v_reuseFailAlloc_242_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
uint64_t v___x_161_; uint64_t v___x_162_; uint64_t v___x_163_; uint8_t v___x_164_; uint64_t v___x_165_; uint64_t v___x_166_; uint64_t v_key_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; 
lean_ctor_set_uint8(v_config_160_, 9, v___x_158_);
v___x_161_ = l_Lean_Meta_Context_configKey(v_a_95_);
v___x_162_ = 3ULL;
v___x_163_ = lean_uint64_shift_right(v___x_161_, v___x_162_);
v___x_164_ = 0;
v___x_165_ = lean_uint64_shift_left(v___x_163_, v___x_162_);
v___x_166_ = lean_uint64_once(&l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__2, &l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__2_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__2);
v_key_167_ = lean_uint64_lor(v___x_165_, v___x_166_);
v___x_168_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_168_, 0, v_config_160_);
lean_ctor_set_uint64(v___x_168_, sizeof(void*)*1, v_key_167_);
lean_inc(v_canUnfold_x3f_154_);
lean_inc(v_synthPendingDepth_153_);
lean_inc(v_defEqCtx_x3f_152_);
lean_inc_ref(v_localInstances_151_);
lean_inc_ref(v_lctx_150_);
lean_inc(v_zetaDeltaSet_149_);
v___x_169_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v_zetaDeltaSet_149_);
lean_ctor_set(v___x_169_, 2, v_lctx_150_);
lean_ctor_set(v___x_169_, 3, v_localInstances_151_);
lean_ctor_set(v___x_169_, 4, v_defEqCtx_x3f_152_);
lean_ctor_set(v___x_169_, 5, v_synthPendingDepth_153_);
lean_ctor_set(v___x_169_, 6, v_canUnfold_x3f_154_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*7, v_trackZetaDelta_148_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*7 + 1, v_univApprox_155_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*7 + 2, v_inTypeClassResolution_156_);
lean_ctor_set_uint8(v___x_169_, sizeof(void*)*7 + 3, v_cacheInferType_157_);
v___x_170_ = l_Lean_Meta_forallMetaBoundedTelescope(v_arg_122_, v_etaArgs_113_, v___x_164_, v___x_169_, v_a_96_, v_a_97_, v_a_98_);
lean_dec_ref_known(v___x_169_, 7);
if (lean_obj_tag(v___x_170_) == 0)
{
lean_object* v_a_171_; lean_object* v_snd_172_; lean_object* v_fst_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_233_; 
v_a_171_ = lean_ctor_get(v___x_170_, 0);
lean_inc(v_a_171_);
lean_dec_ref_known(v___x_170_, 1);
v_snd_172_ = lean_ctor_get(v_a_171_, 1);
v_fst_173_ = lean_ctor_get(v_a_171_, 0);
v_isSharedCheck_233_ = !lean_is_exclusive(v_a_171_);
if (v_isSharedCheck_233_ == 0)
{
v___x_175_ = v_a_171_;
v_isShared_176_ = v_isSharedCheck_233_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_snd_172_);
lean_inc(v_fst_173_);
lean_dec(v_a_171_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_233_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
lean_object* v_fst_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_231_; 
v_fst_177_ = lean_ctor_get(v_snd_172_, 0);
v_isSharedCheck_231_ = !lean_is_exclusive(v_snd_172_);
if (v_isSharedCheck_231_ == 0)
{
lean_object* v_unused_232_; 
v_unused_232_ = lean_ctor_get(v_snd_172_, 1);
lean_dec(v_unused_232_);
v___x_179_ = v_snd_172_;
v_isShared_180_ = v_isSharedCheck_231_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_fst_177_);
lean_dec(v_snd_172_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_231_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
lean_object* v_a_182_; lean_object* v___y_212_; lean_object* v___x_222_; uint8_t v___x_223_; 
v___x_222_ = lean_array_get_size(v_fst_173_);
v___x_223_ = lean_nat_dec_lt(v___x_114_, v___x_222_);
if (v___x_223_ == 0)
{
v_a_182_ = v_fst_108_;
goto v___jp_181_;
}
else
{
uint8_t v___x_224_; 
v___x_224_ = lean_nat_dec_le(v___x_222_, v___x_222_);
if (v___x_224_ == 0)
{
if (v___x_223_ == 0)
{
v_a_182_ = v_fst_108_;
goto v___jp_181_;
}
else
{
size_t v___x_225_; size_t v___x_226_; lean_object* v___x_227_; 
v___x_225_ = ((size_t)0ULL);
v___x_226_ = lean_usize_of_nat(v___x_222_);
v___x_227_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0(v_fst_173_, v___x_225_, v___x_226_, v_fst_108_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
v___y_212_ = v___x_227_;
goto v___jp_211_;
}
}
else
{
size_t v___x_228_; size_t v___x_229_; lean_object* v___x_230_; 
v___x_228_ = ((size_t)0ULL);
v___x_229_ = lean_usize_of_nat(v___x_222_);
v___x_230_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate_spec__0(v_fst_173_, v___x_228_, v___x_229_, v_fst_108_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
v___y_212_ = v___x_230_;
goto v___jp_211_;
}
}
v___jp_181_:
{
lean_object* v___x_183_; 
lean_inc(v_a_98_);
lean_inc_ref(v_a_97_);
lean_inc(v_a_96_);
lean_inc_ref(v_a_95_);
lean_inc_ref(v_a_182_);
v___x_183_ = lean_infer_type(v_a_182_, v_a_95_, v_a_96_, v_a_97_, v_a_98_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_202_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_202_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_202_ == 0)
{
v___x_186_ = v___x_183_;
v_isShared_187_ = v_isSharedCheck_202_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_dec(v___x_183_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_202_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_191_; 
v___x_188_ = l_Array_append___redArg(v_fst_106_, v_fst_173_);
lean_dec(v_fst_173_);
v___x_189_ = l_Array_append___redArg(v_fst_107_, v_fst_177_);
lean_dec(v_fst_177_);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v_a_184_);
lean_ctor_set(v___x_179_, 0, v_a_182_);
v___x_191_ = v___x_179_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_201_; 
v_reuseFailAlloc_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_201_, 0, v_a_182_);
lean_ctor_set(v_reuseFailAlloc_201_, 1, v_a_184_);
v___x_191_ = v_reuseFailAlloc_201_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
lean_object* v___x_193_; 
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 1, v___x_191_);
lean_ctor_set(v___x_175_, 0, v___x_189_);
v___x_193_ = v___x_175_;
goto v_reusejp_192_;
}
else
{
lean_object* v_reuseFailAlloc_200_; 
v_reuseFailAlloc_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_200_, 0, v___x_189_);
lean_ctor_set(v_reuseFailAlloc_200_, 1, v___x_191_);
v___x_193_ = v_reuseFailAlloc_200_;
goto v_reusejp_192_;
}
v_reusejp_192_:
{
lean_object* v___x_195_; 
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 1, v___x_193_);
lean_ctor_set(v___x_111_, 0, v___x_188_);
v___x_195_ = v___x_111_;
goto v_reusejp_194_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_188_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v___x_193_);
v___x_195_ = v_reuseFailAlloc_199_;
goto v_reusejp_194_;
}
v_reusejp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_187_ == 0)
{
lean_ctor_set(v___x_186_, 0, v___x_195_);
v___x_197_ = v___x_186_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_198_; 
v_reuseFailAlloc_198_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_198_, 0, v___x_195_);
v___x_197_ = v_reuseFailAlloc_198_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
return v___x_197_;
}
}
}
}
}
}
else
{
lean_object* v_a_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_210_; 
lean_dec_ref(v_a_182_);
lean_del_object(v___x_179_);
lean_dec(v_fst_177_);
lean_del_object(v___x_175_);
lean_dec(v_fst_173_);
lean_del_object(v___x_111_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
v_a_203_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_210_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_210_ == 0)
{
v___x_205_ = v___x_183_;
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_a_203_);
lean_dec(v___x_183_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_210_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v___x_208_; 
if (v_isShared_206_ == 0)
{
v___x_208_ = v___x_205_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_a_203_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
v___jp_211_:
{
if (lean_obj_tag(v___y_212_) == 0)
{
lean_object* v_a_213_; 
v_a_213_ = lean_ctor_get(v___y_212_, 0);
lean_inc(v_a_213_);
lean_dec_ref_known(v___y_212_, 1);
v_a_182_ = v_a_213_;
goto v___jp_181_;
}
else
{
lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_221_; 
lean_del_object(v___x_179_);
lean_dec(v_fst_177_);
lean_del_object(v___x_175_);
lean_dec(v_fst_173_);
lean_del_object(v___x_111_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
v_a_214_ = lean_ctor_get(v___y_212_, 0);
v_isSharedCheck_221_ = !lean_is_exclusive(v___y_212_);
if (v_isSharedCheck_221_ == 0)
{
v___x_216_ = v___y_212_;
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___y_212_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_221_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_219_; 
if (v_isShared_217_ == 0)
{
v___x_219_ = v___x_216_;
goto v_reusejp_218_;
}
else
{
lean_object* v_reuseFailAlloc_220_; 
v_reuseFailAlloc_220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_220_, 0, v_a_214_);
v___x_219_ = v_reuseFailAlloc_220_;
goto v_reusejp_218_;
}
v_reusejp_218_:
{
return v___x_219_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_234_; lean_object* v___x_236_; uint8_t v_isShared_237_; uint8_t v_isSharedCheck_241_; 
lean_del_object(v___x_111_);
lean_dec(v_fst_108_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
v_a_234_ = lean_ctor_get(v___x_170_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v___x_170_);
if (v_isSharedCheck_241_ == 0)
{
v___x_236_ = v___x_170_;
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
else
{
lean_inc(v_a_234_);
lean_dec(v___x_170_);
v___x_236_ = lean_box(0);
v_isShared_237_ = v_isSharedCheck_241_;
goto v_resetjp_235_;
}
v_resetjp_235_:
{
lean_object* v___x_239_; 
if (v_isShared_237_ == 0)
{
v___x_239_ = v___x_236_;
goto v_reusejp_238_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_a_234_);
v___x_239_ = v_reuseFailAlloc_240_;
goto v_reusejp_238_;
}
v_reusejp_238_:
{
return v___x_239_;
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
else
{
lean_dec(v_etaArgs_113_);
lean_del_object(v___x_111_);
lean_dec(v_snd_109_);
lean_dec(v_fst_108_);
lean_dec(v_fst_107_);
lean_dec(v_fst_106_);
return v___x_102_;
}
}
}
else
{
lean_dec(v_snd_105_);
lean_dec(v_snd_104_);
lean_dec(v_a_103_);
lean_dec_ref(v_kind_101_);
return v___x_102_;
}
}
else
{
lean_dec_ref(v_kind_101_);
return v___x_102_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___boxed(lean_object* v_specThm_245_, lean_object* v_a_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_){
_start:
{
lean_object* v_res_251_; 
v_res_251_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate(v_specThm_245_, v_a_246_, v_a_247_, v_a_248_, v_a_249_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
lean_dec(v_a_247_);
lean_dec_ref(v_a_246_);
return v_res_251_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__0(void){
_start:
{
lean_object* v___x_252_; 
v___x_252_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_252_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__1(void){
_start:
{
lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_253_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__0);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0(lean_object* v_00_u03b2_255_){
_start:
{
lean_object* v___x_256_; 
v___x_256_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0___closed__1);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return v___x_257_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__1(void){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default_spec__0(lean_box(0));
return v___x_258_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__2(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_259_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__1, &l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__1);
v___x_260_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0, &l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0);
v___x_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_261_, 0, v___x_260_);
lean_ctor_set(v___x_261_, 1, v___x_259_);
return v___x_261_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default(void){
_start:
{
lean_object* v___x_262_; 
v___x_262_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__2, &l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__2_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__2);
return v___x_262_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew(void){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default;
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0(lean_object* v_msgData_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_){
_start:
{
lean_object* v___x_270_; lean_object* v_env_271_; lean_object* v___x_272_; lean_object* v_mctx_273_; lean_object* v_lctx_274_; lean_object* v_options_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_270_ = lean_st_ref_get(v___y_268_);
v_env_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc_ref(v_env_271_);
lean_dec(v___x_270_);
v___x_272_ = lean_st_ref_get(v___y_266_);
v_mctx_273_ = lean_ctor_get(v___x_272_, 0);
lean_inc_ref(v_mctx_273_);
lean_dec(v___x_272_);
v_lctx_274_ = lean_ctor_get(v___y_265_, 2);
v_options_275_ = lean_ctor_get(v___y_267_, 2);
lean_inc_ref(v_options_275_);
lean_inc_ref(v_lctx_274_);
v___x_276_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_276_, 0, v_env_271_);
lean_ctor_set(v___x_276_, 1, v_mctx_273_);
lean_ctor_set(v___x_276_, 2, v_lctx_274_);
lean_ctor_set(v___x_276_, 3, v_options_275_);
v___x_277_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v_msgData_264_);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_277_);
return v___x_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0___boxed(lean_object* v_msgData_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0(v_msgData_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
lean_dec(v___y_281_);
lean_dec_ref(v___y_280_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg(lean_object* v_msg_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_ref_292_; lean_object* v___x_293_; lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_302_; 
v_ref_292_ = lean_ctor_get(v___y_289_, 5);
v___x_293_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0(v_msg_286_, v___y_287_, v___y_288_, v___y_289_, v___y_290_);
v_a_294_ = lean_ctor_get(v___x_293_, 0);
v_isSharedCheck_302_ = !lean_is_exclusive(v___x_293_);
if (v_isSharedCheck_302_ == 0)
{
v___x_296_ = v___x_293_;
v_isShared_297_ = v_isSharedCheck_302_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_293_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_302_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v___x_300_; 
lean_inc(v_ref_292_);
v___x_298_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_298_, 0, v_ref_292_);
lean_ctor_set(v___x_298_, 1, v_a_294_);
if (v_isShared_297_ == 0)
{
lean_ctor_set_tag(v___x_296_, 1);
lean_ctor_set(v___x_296_, 0, v___x_298_);
v___x_300_ = v___x_296_;
goto v_reusejp_299_;
}
else
{
lean_object* v_reuseFailAlloc_301_; 
v_reuseFailAlloc_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_301_, 0, v___x_298_);
v___x_300_ = v_reuseFailAlloc_301_;
goto v_reusejp_299_;
}
v_reusejp_299_:
{
return v___x_300_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg___boxed(lean_object* v_msg_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg(v_msg_303_, v___y_304_, v___y_305_, v___y_306_, v___y_307_);
lean_dec(v___y_307_);
lean_dec_ref(v___y_306_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
return v_res_309_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__0));
v___x_312_ = l_Lean_stringToMessageData(v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0(lean_object* v_type_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
lean_object* v___x_331_; uint8_t v___x_332_; 
lean_inc_ref(v_type_320_);
v___x_331_ = l_Lean_Expr_cleanupAnnotations(v_type_320_);
v___x_332_ = l_Lean_Expr_isApp(v___x_331_);
if (v___x_332_ == 0)
{
lean_dec_ref(v___x_331_);
goto v___jp_326_;
}
else
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = l_Lean_Expr_appFnCleanup___redArg(v___x_331_);
v___x_334_ = l_Lean_Expr_isApp(v___x_333_);
if (v___x_334_ == 0)
{
lean_dec_ref(v___x_333_);
goto v___jp_326_;
}
else
{
lean_object* v___x_335_; uint8_t v___x_336_; 
v___x_335_ = l_Lean_Expr_appFnCleanup___redArg(v___x_333_);
v___x_336_ = l_Lean_Expr_isApp(v___x_335_);
if (v___x_336_ == 0)
{
lean_dec_ref(v___x_335_);
goto v___jp_326_;
}
else
{
lean_object* v_arg_337_; lean_object* v___x_338_; uint8_t v___x_339_; 
v_arg_337_ = lean_ctor_get(v___x_335_, 1);
lean_inc_ref(v_arg_337_);
v___x_338_ = l_Lean_Expr_appFnCleanup___redArg(v___x_335_);
v___x_339_ = l_Lean_Expr_isApp(v___x_338_);
if (v___x_339_ == 0)
{
lean_dec_ref(v___x_338_);
lean_dec_ref(v_arg_337_);
goto v___jp_326_;
}
else
{
lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_340_ = l_Lean_Expr_appFnCleanup___redArg(v___x_338_);
v___x_341_ = l_Lean_Expr_isApp(v___x_340_);
if (v___x_341_ == 0)
{
lean_dec_ref(v___x_340_);
lean_dec_ref(v_arg_337_);
goto v___jp_326_;
}
else
{
lean_object* v___x_342_; uint8_t v___x_343_; 
v___x_342_ = l_Lean_Expr_appFnCleanup___redArg(v___x_340_);
v___x_343_ = l_Lean_Expr_isApp(v___x_342_);
if (v___x_343_ == 0)
{
lean_dec_ref(v___x_342_);
lean_dec_ref(v_arg_337_);
goto v___jp_326_;
}
else
{
lean_object* v___x_344_; uint8_t v___x_345_; 
v___x_344_ = l_Lean_Expr_appFnCleanup___redArg(v___x_342_);
v___x_345_ = l_Lean_Expr_isApp(v___x_344_);
if (v___x_345_ == 0)
{
lean_dec_ref(v___x_344_);
lean_dec_ref(v_arg_337_);
goto v___jp_326_;
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; uint8_t v___x_348_; 
v___x_346_ = l_Lean_Expr_appFnCleanup___redArg(v___x_344_);
v___x_347_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5));
v___x_348_ = l_Lean_Expr_isConstOf(v___x_346_, v___x_347_);
lean_dec_ref(v___x_346_);
if (v___x_348_ == 0)
{
lean_dec_ref(v_arg_337_);
goto v___jp_326_;
}
else
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
lean_dec_ref(v_type_320_);
v___x_349_ = lean_box(0);
v___x_350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_350_, 0, v_arg_337_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
}
}
}
}
}
}
}
v___jp_326_:
{
lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; 
v___x_327_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__1);
v___x_328_ = l_Lean_indentExpr(v_type_320_);
v___x_329_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_329_, 0, v___x_327_);
lean_ctor_set(v___x_329_, 1, v___x_328_);
v___x_330_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg(v___x_329_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___boxed(lean_object* v_type_352_, lean_object* v___y_353_, lean_object* v___y_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0(v_type_352_, v___y_353_, v___y_354_, v___y_355_, v___y_356_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
lean_dec(v___y_354_);
lean_dec_ref(v___y_353_);
return v_res_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg(lean_object* v_expr_362_, lean_object* v_levelParams_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_){
_start:
{
lean_object* v___x_369_; 
v___x_369_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessExprPattern(v_expr_362_, v_levelParams_363_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_369_) == 0)
{
lean_object* v_a_370_; lean_object* v_fst_371_; lean_object* v_snd_372_; lean_object* v___f_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v_a_370_ = lean_ctor_get(v___x_369_, 0);
lean_inc(v_a_370_);
lean_dec_ref_known(v___x_369_, 1);
v_fst_371_ = lean_ctor_get(v_a_370_, 0);
lean_inc(v_fst_371_);
v_snd_372_ = lean_ctor_get(v_a_370_, 1);
lean_inc_n(v_snd_372_, 2);
lean_dec(v_a_370_);
v___f_373_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__0));
v___x_374_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__1));
v___x_375_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_box(0), v_fst_371_, v_snd_372_, v___f_373_, v_snd_372_, v___x_374_, v_a_364_, v_a_365_, v_a_366_, v_a_367_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v_a_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_384_; 
v_a_376_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_384_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_384_ == 0)
{
v___x_378_ = v___x_375_;
v_isShared_379_ = v_isSharedCheck_384_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_a_376_);
lean_dec(v___x_375_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_384_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v_fst_380_; lean_object* v___x_382_; 
v_fst_380_ = lean_ctor_get(v_a_376_, 0);
lean_inc(v_fst_380_);
lean_dec(v_a_376_);
if (v_isShared_379_ == 0)
{
lean_ctor_set(v___x_378_, 0, v_fst_380_);
v___x_382_ = v___x_378_;
goto v_reusejp_381_;
}
else
{
lean_object* v_reuseFailAlloc_383_; 
v_reuseFailAlloc_383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_383_, 0, v_fst_380_);
v___x_382_ = v_reuseFailAlloc_383_;
goto v_reusejp_381_;
}
v_reusejp_381_:
{
return v___x_382_;
}
}
}
else
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_392_; 
v_a_385_ = lean_ctor_get(v___x_375_, 0);
v_isSharedCheck_392_ = !lean_is_exclusive(v___x_375_);
if (v_isSharedCheck_392_ == 0)
{
v___x_387_ = v___x_375_;
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_375_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_392_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_390_; 
if (v_isShared_388_ == 0)
{
v___x_390_ = v___x_387_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_a_385_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
}
}
else
{
lean_object* v_a_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_400_; 
v_a_393_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_400_ == 0)
{
v___x_395_ = v___x_369_;
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_a_393_);
lean_dec(v___x_369_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_400_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_398_; 
if (v_isShared_396_ == 0)
{
v___x_398_ = v___x_395_;
goto v_reusejp_397_;
}
else
{
lean_object* v_reuseFailAlloc_399_; 
v_reuseFailAlloc_399_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_399_, 0, v_a_393_);
v___x_398_ = v_reuseFailAlloc_399_;
goto v_reusejp_397_;
}
v_reusejp_397_:
{
return v___x_398_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___boxed(lean_object* v_expr_401_, lean_object* v_levelParams_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg(v_expr_401_, v_levelParams_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr(lean_object* v_expr_409_, lean_object* v_levelParams_410_, lean_object* v_a_411_, lean_object* v_a_412_, lean_object* v_a_413_, lean_object* v_a_414_, lean_object* v_a_415_, lean_object* v_a_416_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg(v_expr_409_, v_levelParams_410_, v_a_413_, v_a_414_, v_a_415_, v_a_416_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___boxed(lean_object* v_expr_419_, lean_object* v_levelParams_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr(v_expr_419_, v_levelParams_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_, v_a_425_, v_a_426_);
lean_dec(v_a_426_);
lean_dec_ref(v_a_425_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0(lean_object* v_00_u03b1_429_, lean_object* v_msg_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; 
v___x_436_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg(v_msg_430_, v___y_431_, v___y_432_, v___y_433_, v___y_434_);
return v___x_436_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___boxed(lean_object* v_00_u03b1_437_, lean_object* v_msg_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v_res_444_; 
v_res_444_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0(v_00_u03b1_437_, v_msg_438_, v___y_439_, v___y_440_, v___y_441_, v___y_442_);
lean_dec(v___y_442_);
lean_dec_ref(v___y_441_);
lean_dec(v___y_440_);
lean_dec_ref(v___y_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg(lean_object* v_e_445_, lean_object* v___y_446_){
_start:
{
uint8_t v___x_448_; 
v___x_448_ = l_Lean_Expr_hasMVar(v_e_445_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; 
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v_e_445_);
return v___x_449_;
}
else
{
lean_object* v___x_450_; lean_object* v_mctx_451_; lean_object* v___x_452_; lean_object* v_fst_453_; lean_object* v_snd_454_; lean_object* v___x_455_; lean_object* v_cache_456_; lean_object* v_zetaDeltaFVarIds_457_; lean_object* v_postponed_458_; lean_object* v_diag_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_468_; 
v___x_450_ = lean_st_ref_get(v___y_446_);
v_mctx_451_ = lean_ctor_get(v___x_450_, 0);
lean_inc_ref(v_mctx_451_);
lean_dec(v___x_450_);
v___x_452_ = l_Lean_instantiateMVarsCore(v_mctx_451_, v_e_445_);
v_fst_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_fst_453_);
v_snd_454_ = lean_ctor_get(v___x_452_, 1);
lean_inc(v_snd_454_);
lean_dec_ref(v___x_452_);
v___x_455_ = lean_st_ref_take(v___y_446_);
v_cache_456_ = lean_ctor_get(v___x_455_, 1);
v_zetaDeltaFVarIds_457_ = lean_ctor_get(v___x_455_, 2);
v_postponed_458_ = lean_ctor_get(v___x_455_, 3);
v_diag_459_ = lean_ctor_get(v___x_455_, 4);
v_isSharedCheck_468_ = !lean_is_exclusive(v___x_455_);
if (v_isSharedCheck_468_ == 0)
{
lean_object* v_unused_469_; 
v_unused_469_ = lean_ctor_get(v___x_455_, 0);
lean_dec(v_unused_469_);
v___x_461_ = v___x_455_;
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_diag_459_);
lean_inc(v_postponed_458_);
lean_inc(v_zetaDeltaFVarIds_457_);
lean_inc(v_cache_456_);
lean_dec(v___x_455_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_468_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
lean_ctor_set(v___x_461_, 0, v_snd_454_);
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_snd_454_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_cache_456_);
lean_ctor_set(v_reuseFailAlloc_467_, 2, v_zetaDeltaFVarIds_457_);
lean_ctor_set(v_reuseFailAlloc_467_, 3, v_postponed_458_);
lean_ctor_set(v_reuseFailAlloc_467_, 4, v_diag_459_);
v___x_464_ = v_reuseFailAlloc_467_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
v___x_465_ = lean_st_ref_set(v___y_446_, v___x_464_);
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v_fst_453_);
return v___x_466_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg___boxed(lean_object* v_e_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg(v_e_470_, v___y_471_);
lean_dec(v___y_471_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0(lean_object* v_e_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_){
_start:
{
lean_object* v___x_482_; 
v___x_482_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg(v_e_474_, v___y_478_);
return v___x_482_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___boxed(lean_object* v_e_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_res_491_; 
v_res_491_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0(v_e_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
return v_res_491_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___lam__0(lean_object* v_k_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v___x_500_; 
lean_inc(v___y_494_);
lean_inc_ref(v___y_493_);
v___x_500_ = lean_apply_7(v_k_492_, v___y_493_, v___y_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, lean_box(0));
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___lam__0___boxed(lean_object* v_k_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___lam__0(v_k_501_, v___y_502_, v___y_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_);
lean_dec(v___y_503_);
lean_dec_ref(v___y_502_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg(lean_object* v_k_510_, uint8_t v_allowLevelAssignments_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v___f_519_; lean_object* v___x_520_; 
lean_inc(v___y_513_);
lean_inc_ref(v___y_512_);
v___f_519_ = lean_alloc_closure((void*)(l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_519_, 0, v_k_510_);
lean_closure_set(v___f_519_, 1, v___y_512_);
lean_closure_set(v___f_519_, 2, v___y_513_);
v___x_520_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withNewMCtxDepthImp(lean_box(0), v_allowLevelAssignments_511_, v___f_519_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
if (lean_obj_tag(v___x_520_) == 0)
{
return v___x_520_;
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
v_a_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg___boxed(lean_object* v_k_529_, lean_object* v_allowLevelAssignments_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_538_; lean_object* v_res_539_; 
v_allowLevelAssignments_boxed_538_ = lean_unbox(v_allowLevelAssignments_530_);
v_res_539_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg(v_k_529_, v_allowLevelAssignments_boxed_538_, v___y_531_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v___y_533_);
lean_dec(v___y_532_);
lean_dec_ref(v___y_531_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2(lean_object* v_00_u03b1_540_, lean_object* v_k_541_, uint8_t v_allowLevelAssignments_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v___x_550_; 
v___x_550_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg(v_k_541_, v_allowLevelAssignments_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___boxed(lean_object* v_00_u03b1_551_, lean_object* v_k_552_, lean_object* v_allowLevelAssignments_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_){
_start:
{
uint8_t v_allowLevelAssignments_boxed_561_; lean_object* v_res_562_; 
v_allowLevelAssignments_boxed_561_ = lean_unbox(v_allowLevelAssignments_553_);
v_res_562_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2(v_00_u03b1_551_, v_k_552_, v_allowLevelAssignments_boxed_561_, v___y_554_, v___y_555_, v___y_556_, v___y_557_, v___y_558_, v___y_559_);
lean_dec(v___y_559_);
lean_dec_ref(v___y_558_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
return v_res_562_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg(lean_object* v_msg_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_){
_start:
{
lean_object* v_ref_569_; lean_object* v___x_570_; lean_object* v_a_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_579_; 
v_ref_569_ = lean_ctor_get(v___y_566_, 5);
v___x_570_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0(v_msg_563_, v___y_564_, v___y_565_, v___y_566_, v___y_567_);
v_a_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_579_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_579_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_a_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_579_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_575_; lean_object* v___x_577_; 
lean_inc(v_ref_569_);
v___x_575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_575_, 0, v_ref_569_);
lean_ctor_set(v___x_575_, 1, v_a_571_);
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 1);
lean_ctor_set(v___x_573_, 0, v___x_575_);
v___x_577_ = v___x_573_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg___boxed(lean_object* v_msg_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_, lean_object* v___y_584_, lean_object* v___y_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg(v_msg_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec(v___y_584_);
lean_dec_ref(v___y_583_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
return v_res_586_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__1(void){
_start:
{
lean_object* v___x_588_; lean_object* v___x_589_; 
v___x_588_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__0));
v___x_589_ = l_Lean_stringToMessageData(v___x_588_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0(lean_object* v_a_592_, uint8_t v___x_593_, lean_object* v___x_594_, lean_object* v___x_595_, lean_object* v___x_596_, lean_object* v_a_597_, lean_object* v_proof_598_, lean_object* v_prio_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_){
_start:
{
lean_object* v___x_607_; lean_object* v_config_608_; uint8_t v_trackZetaDelta_609_; lean_object* v_zetaDeltaSet_610_; lean_object* v_lctx_611_; lean_object* v_localInstances_612_; lean_object* v_defEqCtx_x3f_613_; lean_object* v_synthPendingDepth_614_; lean_object* v_canUnfold_x3f_615_; uint8_t v_univApprox_616_; uint8_t v_inTypeClassResolution_617_; uint8_t v_cacheInferType_618_; uint64_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v___x_607_ = l_Lean_Meta_simpGlobalConfig;
v_config_608_ = lean_ctor_get(v___x_607_, 0);
v_trackZetaDelta_609_ = lean_ctor_get_uint8(v___y_602_, sizeof(void*)*7);
v_zetaDeltaSet_610_ = lean_ctor_get(v___y_602_, 1);
v_lctx_611_ = lean_ctor_get(v___y_602_, 2);
v_localInstances_612_ = lean_ctor_get(v___y_602_, 3);
v_defEqCtx_x3f_613_ = lean_ctor_get(v___y_602_, 4);
v_synthPendingDepth_614_ = lean_ctor_get(v___y_602_, 5);
v_canUnfold_x3f_615_ = lean_ctor_get(v___y_602_, 6);
v_univApprox_616_ = lean_ctor_get_uint8(v___y_602_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_617_ = lean_ctor_get_uint8(v___y_602_, sizeof(void*)*7 + 2);
v_cacheInferType_618_ = lean_ctor_get_uint8(v___y_602_, sizeof(void*)*7 + 3);
v___x_619_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_608_);
lean_inc_ref(v_config_608_);
v___x_620_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_620_, 0, v_config_608_);
lean_ctor_set_uint64(v___x_620_, sizeof(void*)*1, v___x_619_);
lean_inc(v_canUnfold_x3f_615_);
lean_inc(v_synthPendingDepth_614_);
lean_inc(v_defEqCtx_x3f_613_);
lean_inc_ref(v_localInstances_612_);
lean_inc_ref(v_lctx_611_);
lean_inc(v_zetaDeltaSet_610_);
v___x_621_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_621_, 0, v___x_620_);
lean_ctor_set(v___x_621_, 1, v_zetaDeltaSet_610_);
lean_ctor_set(v___x_621_, 2, v_lctx_611_);
lean_ctor_set(v___x_621_, 3, v_localInstances_612_);
lean_ctor_set(v___x_621_, 4, v_defEqCtx_x3f_613_);
lean_ctor_set(v___x_621_, 5, v_synthPendingDepth_614_);
lean_ctor_set(v___x_621_, 6, v_canUnfold_x3f_615_);
lean_ctor_set_uint8(v___x_621_, sizeof(void*)*7, v_trackZetaDelta_609_);
lean_ctor_set_uint8(v___x_621_, sizeof(void*)*7 + 1, v_univApprox_616_);
lean_ctor_set_uint8(v___x_621_, sizeof(void*)*7 + 2, v_inTypeClassResolution_617_);
lean_ctor_set_uint8(v___x_621_, sizeof(void*)*7 + 3, v_cacheInferType_618_);
v___x_622_ = l_Lean_Meta_forallMetaTelescope(v_a_592_, v___x_593_, v___x_621_, v___y_603_, v___y_604_, v___y_605_);
lean_dec_ref_known(v___x_621_, 7);
if (lean_obj_tag(v___x_622_) == 0)
{
lean_object* v_a_623_; lean_object* v_snd_624_; lean_object* v_fst_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_709_; 
v_a_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_a_623_);
lean_dec_ref_known(v___x_622_, 1);
v_snd_624_ = lean_ctor_get(v_a_623_, 1);
v_fst_625_ = lean_ctor_get(v_a_623_, 0);
v_isSharedCheck_709_ = !lean_is_exclusive(v_a_623_);
if (v_isSharedCheck_709_ == 0)
{
v___x_627_ = v_a_623_;
v_isShared_628_ = v_isSharedCheck_709_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_snd_624_);
lean_inc(v_fst_625_);
lean_dec(v_a_623_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_709_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_snd_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_707_; 
v_snd_629_ = lean_ctor_get(v_snd_624_, 1);
v_isSharedCheck_707_ = !lean_is_exclusive(v_snd_624_);
if (v_isSharedCheck_707_ == 0)
{
lean_object* v_unused_708_; 
v_unused_708_ = lean_ctor_get(v_snd_624_, 0);
lean_dec(v_unused_708_);
v___x_631_ = v_snd_624_;
v_isShared_632_ = v_isSharedCheck_707_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_snd_629_);
lean_dec(v_snd_624_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_707_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v___x_633_; 
v___x_633_ = l_Lean_Meta_whnfR(v_snd_629_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___y_636_; lean_object* v___y_637_; lean_object* v___y_638_; lean_object* v___y_639_; lean_object* v___y_640_; lean_object* v___y_641_; lean_object* v___x_648_; uint8_t v___x_649_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
lean_inc_n(v_a_634_, 2);
lean_dec_ref_known(v___x_633_, 1);
v___x_648_ = l_Lean_Expr_cleanupAnnotations(v_a_634_);
v___x_649_ = l_Lean_Expr_isApp(v___x_648_);
if (v___x_649_ == 0)
{
lean_dec_ref(v___x_648_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = l_Lean_Expr_appFnCleanup___redArg(v___x_648_);
v___x_651_ = l_Lean_Expr_isApp(v___x_650_);
if (v___x_651_ == 0)
{
lean_dec_ref(v___x_650_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v_arg_652_; lean_object* v___x_653_; uint8_t v___x_654_; 
v_arg_652_ = lean_ctor_get(v___x_650_, 1);
lean_inc_ref(v_arg_652_);
v___x_653_ = l_Lean_Expr_appFnCleanup___redArg(v___x_650_);
v___x_654_ = l_Lean_Expr_isApp(v___x_653_);
if (v___x_654_ == 0)
{
lean_dec_ref(v___x_653_);
lean_dec_ref(v_arg_652_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v___x_655_; uint8_t v___x_656_; 
v___x_655_ = l_Lean_Expr_appFnCleanup___redArg(v___x_653_);
v___x_656_ = l_Lean_Expr_isApp(v___x_655_);
if (v___x_656_ == 0)
{
lean_dec_ref(v___x_655_);
lean_dec_ref(v_arg_652_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_657_ = l_Lean_Expr_appFnCleanup___redArg(v___x_655_);
v___x_658_ = l_Lean_Expr_isApp(v___x_657_);
if (v___x_658_ == 0)
{
lean_dec_ref(v___x_657_);
lean_dec_ref(v_arg_652_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_659_ = l_Lean_Expr_appFnCleanup___redArg(v___x_657_);
v___x_660_ = l_Lean_Expr_isApp(v___x_659_);
if (v___x_660_ == 0)
{
lean_dec_ref(v___x_659_);
lean_dec_ref(v_arg_652_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v_arg_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v_arg_661_ = lean_ctor_get(v___x_659_, 1);
lean_inc_ref(v_arg_661_);
v___x_662_ = l_Lean_Expr_appFnCleanup___redArg(v___x_659_);
v___x_663_ = l_Lean_Expr_isApp(v___x_662_);
if (v___x_663_ == 0)
{
lean_dec_ref(v___x_662_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_652_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = l_Lean_Expr_appFnCleanup___redArg(v___x_662_);
v___x_665_ = l_Lean_Expr_isConstOf(v___x_664_, v___x_594_);
if (v___x_665_ == 0)
{
lean_dec_ref(v___x_664_);
lean_dec_ref(v_arg_661_);
lean_dec_ref(v_arg_652_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v___y_636_ = v___y_600_;
v___y_637_ = v___y_601_;
v___y_638_ = v___y_602_;
v___y_639_ = v___y_603_;
v___y_640_ = v___y_604_;
v___y_641_ = v___y_605_;
goto v___jp_635_;
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
lean_dec(v_a_634_);
lean_del_object(v___x_631_);
v___x_666_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__2));
v___x_667_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__3));
v___x_668_ = l_Lean_Name_mkStr4(v___x_595_, v___x_596_, v___x_666_, v___x_667_);
v___x_669_ = lean_box(0);
v___x_670_ = l_Lean_Expr_constLevels_x21(v___x_664_);
lean_dec_ref(v___x_664_);
v___x_671_ = lean_unsigned_to_nat(0u);
v___x_672_ = l_List_get_x21Internal___redArg(v___x_669_, v___x_670_, v___x_671_);
lean_dec(v___x_670_);
v___x_673_ = lean_box(0);
if (v_isShared_628_ == 0)
{
lean_ctor_set_tag(v___x_627_, 1);
lean_ctor_set(v___x_627_, 1, v___x_673_);
lean_ctor_set(v___x_627_, 0, v___x_672_);
v___x_675_ = v___x_627_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_698_; 
v_reuseFailAlloc_698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_698_, 0, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_698_, 1, v___x_673_);
v___x_675_ = v_reuseFailAlloc_698_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_676_ = l_Lean_mkConst(v___x_668_, v___x_675_);
v___x_677_ = l_Lean_Expr_app___override(v___x_676_, v_arg_661_);
v___x_678_ = l_Lean_Elab_Tactic_Do_SpecAttr_computeMVarBetaPotentialForSPred(v_fst_625_, v___x_677_, v_arg_652_, v___y_602_, v___y_603_, v___y_604_, v___y_605_);
if (lean_obj_tag(v___x_678_) == 0)
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_689_; 
v_a_679_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_689_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_689_ == 0)
{
v___x_681_ = v___x_678_;
v_isShared_682_ = v_isSharedCheck_689_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_678_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_689_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_687_; 
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v_a_679_);
v___x_684_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_684_, 0, v_a_597_);
lean_ctor_set(v___x_684_, 1, v_proof_598_);
lean_ctor_set(v___x_684_, 2, v___x_683_);
lean_ctor_set(v___x_684_, 3, v_prio_599_);
v___x_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v___x_685_);
v___x_687_ = v___x_681_;
goto v_reusejp_686_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_685_);
v___x_687_ = v_reuseFailAlloc_688_;
goto v_reusejp_686_;
}
v_reusejp_686_:
{
return v___x_687_;
}
}
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
v_a_690_ = lean_ctor_get(v___x_678_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_678_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_678_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_678_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
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
v___jp_635_:
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_645_; 
v___x_642_ = l_Lean_MessageData_ofExpr(v_a_634_);
v___x_643_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___closed__1);
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 7);
lean_ctor_set(v___x_631_, 1, v___x_643_);
lean_ctor_set(v___x_631_, 0, v___x_642_);
v___x_645_ = v___x_631_;
goto v_reusejp_644_;
}
else
{
lean_object* v_reuseFailAlloc_647_; 
v_reuseFailAlloc_647_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_647_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_647_, 1, v___x_643_);
v___x_645_ = v_reuseFailAlloc_647_;
goto v_reusejp_644_;
}
v_reusejp_644_:
{
lean_object* v___x_646_; 
v___x_646_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg(v___x_645_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
return v___x_646_;
}
}
}
else
{
lean_object* v_a_699_; lean_object* v___x_701_; uint8_t v_isShared_702_; uint8_t v_isSharedCheck_706_; 
lean_del_object(v___x_631_);
lean_del_object(v___x_627_);
lean_dec(v_fst_625_);
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v_a_699_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_706_ == 0)
{
v___x_701_ = v___x_633_;
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
else
{
lean_inc(v_a_699_);
lean_dec(v___x_633_);
v___x_701_ = lean_box(0);
v_isShared_702_ = v_isSharedCheck_706_;
goto v_resetjp_700_;
}
v_resetjp_700_:
{
lean_object* v___x_704_; 
if (v_isShared_702_ == 0)
{
v___x_704_ = v___x_701_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v_a_699_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
}
}
else
{
lean_object* v_a_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_717_; 
lean_dec(v_prio_599_);
lean_dec_ref(v_proof_598_);
lean_dec_ref(v_a_597_);
lean_dec_ref(v___x_596_);
lean_dec_ref(v___x_595_);
v_a_710_ = lean_ctor_get(v___x_622_, 0);
v_isSharedCheck_717_ = !lean_is_exclusive(v___x_622_);
if (v_isSharedCheck_717_ == 0)
{
v___x_712_ = v___x_622_;
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_a_710_);
lean_dec(v___x_622_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_717_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_715_; 
if (v_isShared_713_ == 0)
{
v___x_715_ = v___x_712_;
goto v_reusejp_714_;
}
else
{
lean_object* v_reuseFailAlloc_716_; 
v_reuseFailAlloc_716_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_716_, 0, v_a_710_);
v___x_715_ = v_reuseFailAlloc_716_;
goto v_reusejp_714_;
}
v_reusejp_714_:
{
return v___x_715_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___boxed(lean_object* v_a_718_, lean_object* v___x_719_, lean_object* v___x_720_, lean_object* v___x_721_, lean_object* v___x_722_, lean_object* v_a_723_, lean_object* v_proof_724_, lean_object* v_prio_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_){
_start:
{
uint8_t v___x_16832__boxed_733_; lean_object* v_res_734_; 
v___x_16832__boxed_733_ = lean_unbox(v___x_719_);
v_res_734_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0(v_a_718_, v___x_16832__boxed_733_, v___x_720_, v___x_721_, v___x_722_, v_a_723_, v_proof_724_, v_prio_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___x_720_);
return v_res_734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew(lean_object* v_proof_735_, lean_object* v_prio_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_){
_start:
{
lean_object* v___x_744_; 
lean_inc_ref(v_proof_735_);
v___x_744_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_getProof(v_proof_735_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
if (lean_obj_tag(v___x_744_) == 0)
{
lean_object* v_a_745_; lean_object* v_fst_746_; lean_object* v_snd_747_; lean_object* v___x_748_; 
v_a_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc(v_a_745_);
lean_dec_ref_known(v___x_744_, 1);
v_fst_746_ = lean_ctor_get(v_a_745_, 0);
lean_inc(v_fst_746_);
v_snd_747_ = lean_ctor_get(v_a_745_, 1);
lean_inc_n(v_snd_747_, 2);
lean_dec(v_a_745_);
lean_inc(v_a_742_);
lean_inc_ref(v_a_741_);
lean_inc(v_a_740_);
lean_inc_ref(v_a_739_);
v___x_748_ = lean_infer_type(v_snd_747_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
if (lean_obj_tag(v___x_748_) == 0)
{
lean_object* v_a_749_; lean_object* v___x_750_; lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_780_; 
v_a_749_ = lean_ctor_get(v___x_748_, 0);
lean_inc(v_a_749_);
lean_dec_ref_known(v___x_748_, 1);
v___x_750_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg(v_a_749_, v_a_740_);
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_780_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_780_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
v___x_753_ = lean_box(0);
v_isShared_754_ = v_isSharedCheck_780_;
goto v_resetjp_752_;
}
v_resetjp_752_:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v___x_755_ = l_Lean_Expr_getForallBody(v_a_751_);
v___x_756_ = l_Lean_Expr_getAppFn(v___x_755_);
lean_dec_ref(v___x_755_);
v___x_757_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__2));
v___x_758_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__3));
v___x_759_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___lam__0___closed__5));
v___x_760_ = l_Lean_Expr_isConstOf(v___x_756_, v___x_759_);
lean_dec_ref(v___x_756_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_763_; 
lean_dec(v_a_751_);
lean_dec(v_snd_747_);
lean_dec(v_fst_746_);
lean_dec(v_prio_736_);
lean_dec_ref(v_proof_735_);
v___x_761_ = lean_box(0);
if (v_isShared_754_ == 0)
{
lean_ctor_set(v___x_753_, 0, v___x_761_);
v___x_763_ = v___x_753_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v___x_761_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
else
{
lean_object* v___x_765_; 
lean_del_object(v___x_753_);
v___x_765_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg(v_snd_747_, v_fst_746_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v_a_766_; uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___f_769_; uint8_t v___x_770_; lean_object* v___x_771_; 
v_a_766_ = lean_ctor_get(v___x_765_, 0);
lean_inc(v_a_766_);
lean_dec_ref_known(v___x_765_, 1);
v___x_767_ = 0;
v___x_768_ = lean_box(v___x_767_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___lam__0___boxed), 15, 8);
lean_closure_set(v___f_769_, 0, v_a_751_);
lean_closure_set(v___f_769_, 1, v___x_768_);
lean_closure_set(v___f_769_, 2, v___x_759_);
lean_closure_set(v___f_769_, 3, v___x_757_);
lean_closure_set(v___f_769_, 4, v___x_758_);
lean_closure_set(v___f_769_, 5, v_a_766_);
lean_closure_set(v___f_769_, 6, v_proof_735_);
lean_closure_set(v___f_769_, 7, v_prio_736_);
v___x_770_ = 0;
v___x_771_ = l_Lean_Meta_withNewMCtxDepth___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__2___redArg(v___f_769_, v___x_770_, v_a_737_, v_a_738_, v_a_739_, v_a_740_, v_a_741_, v_a_742_);
return v___x_771_;
}
else
{
lean_object* v_a_772_; lean_object* v___x_774_; uint8_t v_isShared_775_; uint8_t v_isSharedCheck_779_; 
lean_dec(v_a_751_);
lean_dec(v_prio_736_);
lean_dec_ref(v_proof_735_);
v_a_772_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_779_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_779_ == 0)
{
v___x_774_ = v___x_765_;
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
else
{
lean_inc(v_a_772_);
lean_dec(v___x_765_);
v___x_774_ = lean_box(0);
v_isShared_775_ = v_isSharedCheck_779_;
goto v_resetjp_773_;
}
v_resetjp_773_:
{
lean_object* v___x_777_; 
if (v_isShared_775_ == 0)
{
v___x_777_ = v___x_774_;
goto v_reusejp_776_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v_a_772_);
v___x_777_ = v_reuseFailAlloc_778_;
goto v_reusejp_776_;
}
v_reusejp_776_:
{
return v___x_777_;
}
}
}
}
}
}
else
{
lean_object* v_a_781_; lean_object* v___x_783_; uint8_t v_isShared_784_; uint8_t v_isSharedCheck_788_; 
lean_dec(v_snd_747_);
lean_dec(v_fst_746_);
lean_dec(v_prio_736_);
lean_dec_ref(v_proof_735_);
v_a_781_ = lean_ctor_get(v___x_748_, 0);
v_isSharedCheck_788_ = !lean_is_exclusive(v___x_748_);
if (v_isSharedCheck_788_ == 0)
{
v___x_783_ = v___x_748_;
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
else
{
lean_inc(v_a_781_);
lean_dec(v___x_748_);
v___x_783_ = lean_box(0);
v_isShared_784_ = v_isSharedCheck_788_;
goto v_resetjp_782_;
}
v_resetjp_782_:
{
lean_object* v___x_786_; 
if (v_isShared_784_ == 0)
{
v___x_786_ = v___x_783_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_787_; 
v_reuseFailAlloc_787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_787_, 0, v_a_781_);
v___x_786_ = v_reuseFailAlloc_787_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
return v___x_786_;
}
}
}
}
else
{
lean_object* v_a_789_; lean_object* v___x_791_; uint8_t v_isShared_792_; uint8_t v_isSharedCheck_796_; 
lean_dec(v_prio_736_);
lean_dec_ref(v_proof_735_);
v_a_789_ = lean_ctor_get(v___x_744_, 0);
v_isSharedCheck_796_ = !lean_is_exclusive(v___x_744_);
if (v_isSharedCheck_796_ == 0)
{
v___x_791_ = v___x_744_;
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
else
{
lean_inc(v_a_789_);
lean_dec(v___x_744_);
v___x_791_ = lean_box(0);
v_isShared_792_ = v_isSharedCheck_796_;
goto v_resetjp_790_;
}
v_resetjp_790_:
{
lean_object* v___x_794_; 
if (v_isShared_792_ == 0)
{
v___x_794_ = v___x_791_;
goto v_reusejp_793_;
}
else
{
lean_object* v_reuseFailAlloc_795_; 
v_reuseFailAlloc_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_795_, 0, v_a_789_);
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
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew___boxed(lean_object* v_proof_797_, lean_object* v_prio_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew(v_proof_797_, v_prio_798_, v_a_799_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_);
lean_dec(v_a_804_);
lean_dec_ref(v_a_803_);
lean_dec(v_a_802_);
lean_dec_ref(v_a_801_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1(lean_object* v_00_u03b1_807_, lean_object* v_msg_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
lean_object* v___x_816_; 
v___x_816_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg(v_msg_808_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___boxed(lean_object* v_00_u03b1_817_, lean_object* v_msg_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1(v_00_u03b1_817_, v_msg_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern_collectDomains(lean_object* v_ty_827_, lean_object* v_acc_828_){
_start:
{
if (lean_obj_tag(v_ty_827_) == 7)
{
lean_object* v_binderType_829_; lean_object* v_body_830_; lean_object* v___x_831_; 
v_binderType_829_ = lean_ctor_get(v_ty_827_, 1);
lean_inc_ref(v_binderType_829_);
v_body_830_ = lean_ctor_get(v_ty_827_, 2);
lean_inc_ref(v_body_830_);
lean_dec_ref_known(v_ty_827_, 3);
v___x_831_ = lean_array_push(v_acc_828_, v_binderType_829_);
v_ty_827_ = v_body_830_;
v_acc_828_ = v___x_831_;
goto _start;
}
else
{
lean_dec_ref(v_ty_827_);
return v_acc_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern___lam__0(lean_object* v_k_833_, lean_object* v_i_834_){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_835_ = lean_unsigned_to_nat(1u);
v___x_836_ = lean_nat_sub(v_k_833_, v___x_835_);
v___x_837_ = lean_nat_sub(v___x_836_, v_i_834_);
lean_dec(v___x_836_);
v___x_838_ = l_Lean_mkBVar(v___x_837_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern___lam__0___boxed(lean_object* v_k_839_, lean_object* v_i_840_){
_start:
{
lean_object* v_res_841_; 
v_res_841_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern___lam__0(v_k_839_, v_i_840_);
lean_dec(v_i_840_);
lean_dec(v_k_839_);
return v_res_841_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern(lean_object* v_pattern_842_, lean_object* v_eqTy_843_){
_start:
{
uint8_t v___x_844_; 
v___x_844_ = l_Lean_Expr_isForall(v_eqTy_843_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; lean_object* v___x_846_; 
lean_dec_ref(v_eqTy_843_);
v___x_845_ = lean_unsigned_to_nat(0u);
v___x_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_846_, 0, v_pattern_842_);
lean_ctor_set(v___x_846_, 1, v___x_845_);
return v___x_846_;
}
else
{
lean_object* v_levelParams_847_; lean_object* v_varTypes_848_; lean_object* v_pattern_849_; lean_object* v_fnInfos_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_868_; 
v_levelParams_847_ = lean_ctor_get(v_pattern_842_, 0);
v_varTypes_848_ = lean_ctor_get(v_pattern_842_, 1);
v_pattern_849_ = lean_ctor_get(v_pattern_842_, 3);
v_fnInfos_850_ = lean_ctor_get(v_pattern_842_, 4);
v_isSharedCheck_868_ = !lean_is_exclusive(v_pattern_842_);
if (v_isSharedCheck_868_ == 0)
{
lean_object* v_unused_869_; lean_object* v_unused_870_; 
v_unused_869_ = lean_ctor_get(v_pattern_842_, 5);
lean_dec(v_unused_869_);
v_unused_870_ = lean_ctor_get(v_pattern_842_, 2);
lean_dec(v_unused_870_);
v___x_852_ = v_pattern_842_;
v_isShared_853_ = v_isSharedCheck_868_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_fnInfos_850_);
lean_inc(v_pattern_849_);
lean_inc(v_varTypes_848_);
lean_inc(v_levelParams_847_);
lean_dec(v_pattern_842_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_868_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v_extraDomains_856_; lean_object* v_k_857_; lean_object* v___f_858_; lean_object* v_liftedPattern_859_; lean_object* v_newBVars_860_; lean_object* v_newPatternExpr_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v_newPattern_865_; 
v___x_854_ = lean_unsigned_to_nat(0u);
v___x_855_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__1));
v_extraDomains_856_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern_collectDomains(v_eqTy_843_, v___x_855_);
v_k_857_ = lean_array_get_size(v_extraDomains_856_);
v___f_858_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern___lam__0___boxed), 2, 1);
lean_closure_set(v___f_858_, 0, v_k_857_);
v_liftedPattern_859_ = lean_expr_lift_loose_bvars(v_pattern_849_, v___x_854_, v_k_857_);
lean_dec_ref(v_pattern_849_);
v_newBVars_860_ = l_Array_ofFn___redArg(v_k_857_, v___f_858_);
v_newPatternExpr_861_ = l_Lean_mkAppN(v_liftedPattern_859_, v_newBVars_860_);
lean_dec_ref(v_newBVars_860_);
v___x_862_ = l_Array_append___redArg(v_varTypes_848_, v_extraDomains_856_);
lean_dec_ref(v_extraDomains_856_);
v___x_863_ = lean_box(0);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 5, v___x_863_);
lean_ctor_set(v___x_852_, 3, v_newPatternExpr_861_);
lean_ctor_set(v___x_852_, 2, v___x_863_);
lean_ctor_set(v___x_852_, 1, v___x_862_);
v_newPattern_865_ = v___x_852_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_levelParams_847_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v___x_862_);
lean_ctor_set(v_reuseFailAlloc_867_, 2, v___x_863_);
lean_ctor_set(v_reuseFailAlloc_867_, 3, v_newPatternExpr_861_);
lean_ctor_set(v_reuseFailAlloc_867_, 4, v_fnInfos_850_);
lean_ctor_set(v_reuseFailAlloc_867_, 5, v___x_863_);
v_newPattern_865_ = v_reuseFailAlloc_867_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_866_; 
v___x_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_866_, 0, v_newPattern_865_);
lean_ctor_set(v___x_866_, 1, v_k_857_);
return v___x_866_;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_872_; lean_object* v___x_873_; 
v___x_872_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__0));
v___x_873_ = l_Lean_stringToMessageData(v___x_872_);
return v___x_873_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0(lean_object* v_body_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_){
_start:
{
lean_object* v___x_885_; uint8_t v___x_886_; 
lean_inc_ref(v_body_874_);
v___x_885_ = l_Lean_Expr_cleanupAnnotations(v_body_874_);
v___x_886_ = l_Lean_Expr_isApp(v___x_885_);
if (v___x_886_ == 0)
{
lean_dec_ref(v___x_885_);
goto v___jp_880_;
}
else
{
lean_object* v_arg_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v_arg_887_ = lean_ctor_get(v___x_885_, 1);
lean_inc_ref(v_arg_887_);
v___x_888_ = l_Lean_Expr_appFnCleanup___redArg(v___x_885_);
v___x_889_ = l_Lean_Expr_isApp(v___x_888_);
if (v___x_889_ == 0)
{
lean_dec_ref(v___x_888_);
lean_dec_ref(v_arg_887_);
goto v___jp_880_;
}
else
{
lean_object* v_arg_890_; lean_object* v___x_891_; uint8_t v___x_892_; 
v_arg_890_ = lean_ctor_get(v___x_888_, 1);
lean_inc_ref(v_arg_890_);
v___x_891_ = l_Lean_Expr_appFnCleanup___redArg(v___x_888_);
v___x_892_ = l_Lean_Expr_isApp(v___x_891_);
if (v___x_892_ == 0)
{
lean_dec_ref(v___x_891_);
lean_dec_ref(v_arg_890_);
lean_dec_ref(v_arg_887_);
goto v___jp_880_;
}
else
{
lean_object* v_arg_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v_arg_893_ = lean_ctor_get(v___x_891_, 1);
lean_inc_ref(v_arg_893_);
v___x_894_ = l_Lean_Expr_appFnCleanup___redArg(v___x_891_);
v___x_895_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremNew_instantiate___closed__1));
v___x_896_ = l_Lean_Expr_isConstOf(v___x_894_, v___x_895_);
lean_dec_ref(v___x_894_);
if (v___x_896_ == 0)
{
lean_dec_ref(v_arg_893_);
lean_dec_ref(v_arg_890_);
lean_dec_ref(v_arg_887_);
goto v___jp_880_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; 
lean_dec_ref(v_body_874_);
v___x_897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_897_, 0, v_arg_893_);
lean_ctor_set(v___x_897_, 1, v_arg_887_);
v___x_898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_898_, 0, v_arg_890_);
lean_ctor_set(v___x_898_, 1, v___x_897_);
v___x_899_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
return v___x_899_;
}
}
}
}
v___jp_880_:
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_881_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1, &l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___closed__1);
v___x_882_ = l_Lean_indentExpr(v_body_874_);
v___x_883_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_883_, 0, v___x_881_);
lean_ctor_set(v___x_883_, 1, v___x_882_);
v___x_884_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0___redArg(v___x_883_, v___y_875_, v___y_876_, v___y_877_, v___y_878_);
return v___x_884_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0___boxed(lean_object* v_body_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_res_906_; 
v_res_906_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___lam__0(v_body_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_);
lean_dec(v___y_904_);
lean_dec_ref(v___y_903_);
lean_dec(v___y_902_);
lean_dec_ref(v___y_901_);
return v_res_906_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f(lean_object* v_declName_908_, lean_object* v_prio_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v___x_915_; 
lean_inc(v_declName_908_);
v___x_915_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_preprocessDeclPattern(v_declName_908_, v_a_910_, v_a_911_, v_a_912_, v_a_913_);
if (lean_obj_tag(v___x_915_) == 0)
{
lean_object* v_a_916_; lean_object* v_fst_917_; lean_object* v_snd_918_; lean_object* v___f_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_a_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_a_916_);
lean_dec_ref_known(v___x_915_, 1);
v_fst_917_ = lean_ctor_get(v_a_916_, 0);
lean_inc(v_fst_917_);
v_snd_918_ = lean_ctor_get(v_a_916_, 1);
lean_inc_n(v_snd_918_, 2);
lean_dec(v_a_916_);
v___f_919_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___closed__0));
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr___redArg___closed__1));
v___x_922_ = l___private_Lean_Meta_Sym_Pattern_0__Lean_Meta_Sym_mkPatternFromTypeWithKey_go(lean_box(0), v_fst_917_, v_snd_918_, v___f_919_, v_snd_918_, v___x_921_, v_a_910_, v_a_911_, v_a_912_, v_a_913_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_950_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_950_ == 0)
{
v___x_925_ = v___x_922_;
v_isShared_926_ = v_isSharedCheck_950_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_a_923_);
lean_dec(v___x_922_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_950_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v_snd_927_; lean_object* v_fst_928_; lean_object* v_fst_929_; lean_object* v_snd_930_; lean_object* v___x_931_; lean_object* v_fst_932_; lean_object* v_snd_933_; uint8_t v___y_935_; uint8_t v___x_947_; 
v_snd_927_ = lean_ctor_get(v_a_923_, 1);
lean_inc(v_snd_927_);
v_fst_928_ = lean_ctor_get(v_a_923_, 0);
lean_inc(v_fst_928_);
lean_dec(v_a_923_);
v_fst_929_ = lean_ctor_get(v_snd_927_, 0);
lean_inc(v_fst_929_);
v_snd_930_ = lean_ctor_get(v_snd_927_, 1);
lean_inc(v_snd_930_);
lean_dec(v_snd_927_);
v___x_931_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB_0__Lean_Elab_Tactic_Do_SpecAttr_etaExpandEqPattern(v_fst_928_, v_fst_929_);
v_fst_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_fst_932_);
v_snd_933_ = lean_ctor_get(v___x_931_, 1);
lean_inc(v_snd_933_);
lean_dec_ref(v___x_931_);
v___x_947_ = lean_nat_dec_eq(v_snd_933_, v___x_920_);
if (v___x_947_ == 0)
{
lean_dec(v_snd_930_);
v___y_935_ = v___x_947_;
goto v___jp_934_;
}
else
{
lean_object* v_pattern_948_; uint8_t v___x_949_; 
v_pattern_948_ = lean_ctor_get(v_fst_932_, 3);
v___x_949_ = lean_expr_eqv(v_pattern_948_, v_snd_930_);
lean_dec(v_snd_930_);
v___y_935_ = v___x_949_;
goto v___jp_934_;
}
v___jp_934_:
{
if (v___y_935_ == 0)
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_941_; 
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v_declName_908_);
v___x_937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_937_, 0, v_snd_933_);
v___x_938_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_938_, 0, v_fst_932_);
lean_ctor_set(v___x_938_, 1, v___x_936_);
lean_ctor_set(v___x_938_, 2, v___x_937_);
lean_ctor_set(v___x_938_, 3, v_prio_909_);
v___x_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_939_, 0, v___x_938_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v___x_939_);
v___x_941_ = v___x_925_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_942_; 
v_reuseFailAlloc_942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_942_, 0, v___x_939_);
v___x_941_ = v_reuseFailAlloc_942_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
return v___x_941_;
}
}
else
{
lean_object* v___x_943_; lean_object* v___x_945_; 
lean_dec(v_snd_933_);
lean_dec(v_fst_932_);
lean_dec(v_prio_909_);
lean_dec(v_declName_908_);
v___x_943_ = lean_box(0);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v___x_943_);
v___x_945_ = v___x_925_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v___x_943_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
return v___x_945_;
}
}
}
}
}
else
{
lean_object* v_a_951_; lean_object* v___x_953_; uint8_t v_isShared_954_; uint8_t v_isSharedCheck_958_; 
lean_dec(v_prio_909_);
lean_dec(v_declName_908_);
v_a_951_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_958_ == 0)
{
v___x_953_ = v___x_922_;
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
else
{
lean_inc(v_a_951_);
lean_dec(v___x_922_);
v___x_953_ = lean_box(0);
v_isShared_954_ = v_isSharedCheck_958_;
goto v_resetjp_952_;
}
v_resetjp_952_:
{
lean_object* v___x_956_; 
if (v_isShared_954_ == 0)
{
v___x_956_ = v___x_953_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v_a_951_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
return v___x_956_;
}
}
}
}
else
{
lean_object* v_a_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_966_; 
lean_dec(v_prio_909_);
lean_dec(v_declName_908_);
v_a_959_ = lean_ctor_get(v___x_915_, 0);
v_isSharedCheck_966_ = !lean_is_exclusive(v___x_915_);
if (v_isSharedCheck_966_ == 0)
{
v___x_961_ = v___x_915_;
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_a_959_);
lean_dec(v___x_915_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_966_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_964_; 
if (v_isShared_962_ == 0)
{
v___x_964_ = v___x_961_;
goto v_reusejp_963_;
}
else
{
lean_object* v_reuseFailAlloc_965_; 
v_reuseFailAlloc_965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_965_, 0, v_a_959_);
v___x_964_ = v_reuseFailAlloc_965_;
goto v_reusejp_963_;
}
v_reusejp_963_:
{
return v___x_964_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f___boxed(lean_object* v_declName_967_, lean_object* v_prio_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f(v_declName_967_, v_prio_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_);
lean_dec(v_a_972_);
lean_dec_ref(v_a_971_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__0(lean_object* v_x1_975_, lean_object* v_x2_976_){
_start:
{
lean_object* v___x_977_; 
v___x_977_ = lean_array_push(v_x1_975_, v_x2_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(lean_object* v_f_978_, lean_object* v_as_979_, size_t v_i_980_, size_t v_stop_981_, lean_object* v_b_982_){
_start:
{
uint8_t v___x_983_; 
v___x_983_ = lean_usize_dec_eq(v_i_980_, v_stop_981_);
if (v___x_983_ == 0)
{
lean_object* v___x_984_; lean_object* v___x_985_; size_t v___x_986_; size_t v___x_987_; 
v___x_984_ = lean_array_uget_borrowed(v_as_979_, v_i_980_);
lean_inc(v_f_978_);
lean_inc(v___x_984_);
v___x_985_ = lean_apply_2(v_f_978_, v_b_982_, v___x_984_);
v___x_986_ = ((size_t)1ULL);
v___x_987_ = lean_usize_add(v_i_980_, v___x_986_);
v_i_980_ = v___x_987_;
v_b_982_ = v___x_985_;
goto _start;
}
else
{
lean_dec(v_f_978_);
return v_b_982_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg___boxed(lean_object* v_f_989_, lean_object* v_as_990_, lean_object* v_i_991_, lean_object* v_stop_992_, lean_object* v_b_993_){
_start:
{
size_t v_i_boxed_994_; size_t v_stop_boxed_995_; lean_object* v_res_996_; 
v_i_boxed_994_ = lean_unbox_usize(v_i_991_);
lean_dec(v_i_991_);
v_stop_boxed_995_ = lean_unbox_usize(v_stop_992_);
lean_dec(v_stop_992_);
v_res_996_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_989_, v_as_990_, v_i_boxed_994_, v_stop_boxed_995_, v_b_993_);
lean_dec_ref(v_as_990_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(lean_object* v_f_997_, lean_object* v_x_998_, lean_object* v_x_999_){
_start:
{
lean_object* v_vs_1000_; lean_object* v_children_1001_; lean_object* v___x_1002_; lean_object* v_s_1004_; lean_object* v___x_1014_; uint8_t v___x_1015_; 
v_vs_1000_ = lean_ctor_get(v_x_999_, 0);
v_children_1001_ = lean_ctor_get(v_x_999_, 1);
v___x_1002_ = lean_unsigned_to_nat(0u);
v___x_1014_ = lean_array_get_size(v_vs_1000_);
v___x_1015_ = lean_nat_dec_lt(v___x_1002_, v___x_1014_);
if (v___x_1015_ == 0)
{
lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = lean_array_get_size(v_children_1001_);
v___x_1017_ = lean_nat_dec_lt(v___x_1002_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_dec(v_f_997_);
return v_x_998_;
}
else
{
uint8_t v___x_1018_; 
v___x_1018_ = lean_nat_dec_le(v___x_1016_, v___x_1016_);
if (v___x_1018_ == 0)
{
if (v___x_1017_ == 0)
{
lean_dec(v_f_997_);
return v_x_998_;
}
else
{
size_t v___x_1019_; size_t v___x_1020_; lean_object* v___x_1021_; 
v___x_1019_ = ((size_t)0ULL);
v___x_1020_ = lean_usize_of_nat(v___x_1016_);
v___x_1021_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(v_f_997_, v_children_1001_, v___x_1019_, v___x_1020_, v_x_998_);
return v___x_1021_;
}
}
else
{
size_t v___x_1022_; size_t v___x_1023_; lean_object* v___x_1024_; 
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = lean_usize_of_nat(v___x_1016_);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(v_f_997_, v_children_1001_, v___x_1022_, v___x_1023_, v_x_998_);
return v___x_1024_;
}
}
}
else
{
uint8_t v___x_1025_; 
v___x_1025_ = lean_nat_dec_le(v___x_1014_, v___x_1014_);
if (v___x_1025_ == 0)
{
if (v___x_1015_ == 0)
{
v_s_1004_ = v_x_998_;
goto v___jp_1003_;
}
else
{
size_t v___x_1026_; size_t v___x_1027_; lean_object* v___x_1028_; 
v___x_1026_ = ((size_t)0ULL);
v___x_1027_ = lean_usize_of_nat(v___x_1014_);
lean_inc(v_f_997_);
v___x_1028_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_997_, v_vs_1000_, v___x_1026_, v___x_1027_, v_x_998_);
v_s_1004_ = v___x_1028_;
goto v___jp_1003_;
}
}
else
{
size_t v___x_1029_; size_t v___x_1030_; lean_object* v___x_1031_; 
v___x_1029_ = ((size_t)0ULL);
v___x_1030_ = lean_usize_of_nat(v___x_1014_);
lean_inc(v_f_997_);
v___x_1031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_997_, v_vs_1000_, v___x_1029_, v___x_1030_, v_x_998_);
v_s_1004_ = v___x_1031_;
goto v___jp_1003_;
}
}
v___jp_1003_:
{
lean_object* v___x_1005_; uint8_t v___x_1006_; 
v___x_1005_ = lean_array_get_size(v_children_1001_);
v___x_1006_ = lean_nat_dec_lt(v___x_1002_, v___x_1005_);
if (v___x_1006_ == 0)
{
lean_dec(v_f_997_);
return v_s_1004_;
}
else
{
uint8_t v___x_1007_; 
v___x_1007_ = lean_nat_dec_le(v___x_1005_, v___x_1005_);
if (v___x_1007_ == 0)
{
if (v___x_1006_ == 0)
{
lean_dec(v_f_997_);
return v_s_1004_;
}
else
{
size_t v___x_1008_; size_t v___x_1009_; lean_object* v___x_1010_; 
v___x_1008_ = ((size_t)0ULL);
v___x_1009_ = lean_usize_of_nat(v___x_1005_);
v___x_1010_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(v_f_997_, v_children_1001_, v___x_1008_, v___x_1009_, v_s_1004_);
return v___x_1010_;
}
}
else
{
size_t v___x_1011_; size_t v___x_1012_; lean_object* v___x_1013_; 
v___x_1011_ = ((size_t)0ULL);
v___x_1012_ = lean_usize_of_nat(v___x_1005_);
v___x_1013_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(v_f_997_, v_children_1001_, v___x_1011_, v___x_1012_, v_s_1004_);
return v___x_1013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(lean_object* v_f_1032_, lean_object* v_as_1033_, size_t v_i_1034_, size_t v_stop_1035_, lean_object* v_b_1036_){
_start:
{
uint8_t v___x_1037_; 
v___x_1037_ = lean_usize_dec_eq(v_i_1034_, v_stop_1035_);
if (v___x_1037_ == 0)
{
lean_object* v___x_1038_; lean_object* v_snd_1039_; lean_object* v___x_1040_; size_t v___x_1041_; size_t v___x_1042_; 
v___x_1038_ = lean_array_uget_borrowed(v_as_1033_, v_i_1034_);
v_snd_1039_ = lean_ctor_get(v___x_1038_, 1);
lean_inc(v_f_1032_);
v___x_1040_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(v_f_1032_, v_b_1036_, v_snd_1039_);
v___x_1041_ = ((size_t)1ULL);
v___x_1042_ = lean_usize_add(v_i_1034_, v___x_1041_);
v_i_1034_ = v___x_1042_;
v_b_1036_ = v___x_1040_;
goto _start;
}
else
{
lean_dec(v_f_1032_);
return v_b_1036_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg___boxed(lean_object* v_f_1044_, lean_object* v_as_1045_, lean_object* v_i_1046_, lean_object* v_stop_1047_, lean_object* v_b_1048_){
_start:
{
size_t v_i_boxed_1049_; size_t v_stop_boxed_1050_; lean_object* v_res_1051_; 
v_i_boxed_1049_ = lean_unbox_usize(v_i_1046_);
lean_dec(v_i_1046_);
v_stop_boxed_1050_ = lean_unbox_usize(v_stop_1047_);
lean_dec(v_stop_1047_);
v_res_1051_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(v_f_1044_, v_as_1045_, v_i_boxed_1049_, v_stop_boxed_1050_, v_b_1048_);
lean_dec_ref(v_as_1045_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg___boxed(lean_object* v_f_1052_, lean_object* v_x_1053_, lean_object* v_x_1054_){
_start:
{
lean_object* v_res_1055_; 
v_res_1055_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(v_f_1052_, v_x_1053_, v_x_1054_);
lean_dec_ref(v_x_1054_);
return v_res_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__1(lean_object* v___f_1056_, lean_object* v_s_1057_, lean_object* v_x_1058_, lean_object* v_t_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(v___f_1056_, v_s_1057_, v_t_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__1___boxed(lean_object* v___f_1061_, lean_object* v_s_1062_, lean_object* v_x_1063_, lean_object* v_t_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__1(v___f_1061_, v_s_1062_, v_x_1063_, v_t_1064_);
lean_dec_ref(v_t_1064_);
lean_dec(v_x_1063_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__2(lean_object* v_x1_1066_, lean_object* v_x2_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = lean_array_push(v_x1_1066_, v_x2_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__3(lean_object* v___f_1069_, lean_object* v_s_1070_, lean_object* v_x_1071_, lean_object* v_t_1072_){
_start:
{
lean_object* v___x_1073_; 
v___x_1073_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(v___f_1069_, v_s_1070_, v_t_1072_);
return v___x_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__3___boxed(lean_object* v___f_1074_, lean_object* v_s_1075_, lean_object* v_x_1076_, lean_object* v_t_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__3(v___f_1074_, v_s_1075_, v_x_1076_, v_t_1077_);
lean_dec_ref(v_t_1077_);
lean_dec(v_x_1076_);
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__13___redArg(lean_object* v_x_1079_, lean_object* v_x_1080_, lean_object* v_x_1081_, lean_object* v_x_1082_){
_start:
{
lean_object* v_ks_1083_; lean_object* v_vs_1084_; lean_object* v___x_1086_; uint8_t v_isShared_1087_; uint8_t v_isSharedCheck_1108_; 
v_ks_1083_ = lean_ctor_get(v_x_1079_, 0);
v_vs_1084_ = lean_ctor_get(v_x_1079_, 1);
v_isSharedCheck_1108_ = !lean_is_exclusive(v_x_1079_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1086_ = v_x_1079_;
v_isShared_1087_ = v_isSharedCheck_1108_;
goto v_resetjp_1085_;
}
else
{
lean_inc(v_vs_1084_);
lean_inc(v_ks_1083_);
lean_dec(v_x_1079_);
v___x_1086_ = lean_box(0);
v_isShared_1087_ = v_isSharedCheck_1108_;
goto v_resetjp_1085_;
}
v_resetjp_1085_:
{
lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1088_ = lean_array_get_size(v_ks_1083_);
v___x_1089_ = lean_nat_dec_lt(v_x_1080_, v___x_1088_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1093_; 
lean_dec(v_x_1080_);
v___x_1090_ = lean_array_push(v_ks_1083_, v_x_1081_);
v___x_1091_ = lean_array_push(v_vs_1084_, v_x_1082_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 1, v___x_1091_);
lean_ctor_set(v___x_1086_, 0, v___x_1090_);
v___x_1093_ = v___x_1086_;
goto v_reusejp_1092_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v___x_1090_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___x_1091_);
v___x_1093_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1092_;
}
v_reusejp_1092_:
{
return v___x_1093_;
}
}
else
{
lean_object* v_k_x27_1095_; uint8_t v___x_1096_; 
v_k_x27_1095_ = lean_array_fget_borrowed(v_ks_1083_, v_x_1080_);
lean_inc(v_k_x27_1095_);
lean_inc_ref(v_x_1081_);
v___x_1096_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(v_x_1081_, v_k_x27_1095_);
if (v___x_1096_ == 0)
{
lean_object* v___x_1098_; 
if (v_isShared_1087_ == 0)
{
v___x_1098_ = v___x_1086_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v_ks_1083_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v_vs_1084_);
v___x_1098_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; 
v___x_1099_ = lean_unsigned_to_nat(1u);
v___x_1100_ = lean_nat_add(v_x_1080_, v___x_1099_);
lean_dec(v_x_1080_);
v_x_1079_ = v___x_1098_;
v_x_1080_ = v___x_1100_;
goto _start;
}
}
else
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1103_ = lean_array_fset(v_ks_1083_, v_x_1080_, v_x_1081_);
v___x_1104_ = lean_array_fset(v_vs_1084_, v_x_1080_, v_x_1082_);
lean_dec(v_x_1080_);
if (v_isShared_1087_ == 0)
{
lean_ctor_set(v___x_1086_, 1, v___x_1104_);
lean_ctor_set(v___x_1086_, 0, v___x_1103_);
v___x_1106_ = v___x_1086_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1103_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v___x_1104_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(lean_object* v_n_1109_, lean_object* v_k_1110_, lean_object* v_v_1111_){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lean_unsigned_to_nat(0u);
v___x_1113_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__13___redArg(v_n_1109_, v___x_1112_, v_k_1110_, v_v_1111_);
return v___x_1113_;
}
}
static uint64_t _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1114_; uint64_t v___x_1115_; 
v___x_1114_ = lean_unsigned_to_nat(1723u);
v___x_1115_ = lean_uint64_of_nat(v___x_1114_);
return v___x_1115_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_1116_; 
v___x_1116_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1116_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(lean_object* v_x_1117_, size_t v_x_1118_, size_t v_x_1119_, lean_object* v_x_1120_, lean_object* v_x_1121_){
_start:
{
if (lean_obj_tag(v_x_1117_) == 0)
{
lean_object* v_es_1122_; size_t v___x_1123_; size_t v___x_1124_; lean_object* v_j_1125_; lean_object* v___x_1126_; uint8_t v___x_1127_; 
v_es_1122_ = lean_ctor_get(v_x_1117_, 0);
v___x_1123_ = ((size_t)31ULL);
v___x_1124_ = lean_usize_land(v_x_1118_, v___x_1123_);
v_j_1125_ = lean_usize_to_nat(v___x_1124_);
v___x_1126_ = lean_array_get_size(v_es_1122_);
v___x_1127_ = lean_nat_dec_lt(v_j_1125_, v___x_1126_);
if (v___x_1127_ == 0)
{
lean_dec(v_j_1125_);
lean_dec(v_x_1121_);
lean_dec_ref(v_x_1120_);
return v_x_1117_;
}
else
{
lean_object* v___x_1129_; uint8_t v_isShared_1130_; uint8_t v_isSharedCheck_1166_; 
lean_inc_ref(v_es_1122_);
v_isSharedCheck_1166_ = !lean_is_exclusive(v_x_1117_);
if (v_isSharedCheck_1166_ == 0)
{
lean_object* v_unused_1167_; 
v_unused_1167_ = lean_ctor_get(v_x_1117_, 0);
lean_dec(v_unused_1167_);
v___x_1129_ = v_x_1117_;
v_isShared_1130_ = v_isSharedCheck_1166_;
goto v_resetjp_1128_;
}
else
{
lean_dec(v_x_1117_);
v___x_1129_ = lean_box(0);
v_isShared_1130_ = v_isSharedCheck_1166_;
goto v_resetjp_1128_;
}
v_resetjp_1128_:
{
lean_object* v_v_1131_; lean_object* v___x_1132_; lean_object* v_xs_x27_1133_; lean_object* v___y_1135_; 
v_v_1131_ = lean_array_fget(v_es_1122_, v_j_1125_);
v___x_1132_ = lean_box(0);
v_xs_x27_1133_ = lean_array_fset(v_es_1122_, v_j_1125_, v___x_1132_);
switch(lean_obj_tag(v_v_1131_))
{
case 0:
{
lean_object* v_key_1140_; lean_object* v_val_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1151_; 
v_key_1140_ = lean_ctor_get(v_v_1131_, 0);
v_val_1141_ = lean_ctor_get(v_v_1131_, 1);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_v_1131_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1143_ = v_v_1131_;
v_isShared_1144_ = v_isSharedCheck_1151_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_val_1141_);
lean_inc(v_key_1140_);
lean_dec(v_v_1131_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1151_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
uint8_t v___x_1145_; 
lean_inc(v_key_1140_);
lean_inc_ref(v_x_1120_);
v___x_1145_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(v_x_1120_, v_key_1140_);
if (v___x_1145_ == 0)
{
lean_object* v___x_1146_; lean_object* v___x_1147_; 
lean_del_object(v___x_1143_);
v___x_1146_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1140_, v_val_1141_, v_x_1120_, v_x_1121_);
v___x_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1147_, 0, v___x_1146_);
v___y_1135_ = v___x_1147_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1149_; 
lean_dec(v_val_1141_);
lean_dec(v_key_1140_);
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 1, v_x_1121_);
lean_ctor_set(v___x_1143_, 0, v_x_1120_);
v___x_1149_ = v___x_1143_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_x_1120_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_x_1121_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
v___y_1135_ = v___x_1149_;
goto v___jp_1134_;
}
}
}
}
case 1:
{
lean_object* v_node_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1164_; 
v_node_1152_ = lean_ctor_get(v_v_1131_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v_v_1131_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1154_ = v_v_1131_;
v_isShared_1155_ = v_isSharedCheck_1164_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_node_1152_);
lean_dec(v_v_1131_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1164_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
size_t v___x_1156_; size_t v___x_1157_; size_t v___x_1158_; size_t v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1162_; 
v___x_1156_ = ((size_t)5ULL);
v___x_1157_ = lean_usize_shift_right(v_x_1118_, v___x_1156_);
v___x_1158_ = ((size_t)1ULL);
v___x_1159_ = lean_usize_add(v_x_1119_, v___x_1158_);
v___x_1160_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_node_1152_, v___x_1157_, v___x_1159_, v_x_1120_, v_x_1121_);
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 0, v___x_1160_);
v___x_1162_ = v___x_1154_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v___x_1160_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
v___y_1135_ = v___x_1162_;
goto v___jp_1134_;
}
}
}
default: 
{
lean_object* v___x_1165_; 
v___x_1165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1165_, 0, v_x_1120_);
lean_ctor_set(v___x_1165_, 1, v_x_1121_);
v___y_1135_ = v___x_1165_;
goto v___jp_1134_;
}
}
v___jp_1134_:
{
lean_object* v___x_1136_; lean_object* v___x_1138_; 
v___x_1136_ = lean_array_fset(v_xs_x27_1133_, v_j_1125_, v___y_1135_);
lean_dec(v_j_1125_);
if (v_isShared_1130_ == 0)
{
lean_ctor_set(v___x_1129_, 0, v___x_1136_);
v___x_1138_ = v___x_1129_;
goto v_reusejp_1137_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v___x_1136_);
v___x_1138_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1137_;
}
v_reusejp_1137_:
{
return v___x_1138_;
}
}
}
}
}
else
{
lean_object* v_ks_1168_; lean_object* v_vs_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1189_; 
v_ks_1168_ = lean_ctor_get(v_x_1117_, 0);
v_vs_1169_ = lean_ctor_get(v_x_1117_, 1);
v_isSharedCheck_1189_ = !lean_is_exclusive(v_x_1117_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1171_ = v_x_1117_;
v_isShared_1172_ = v_isSharedCheck_1189_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_vs_1169_);
lean_inc(v_ks_1168_);
lean_dec(v_x_1117_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1189_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1174_; 
if (v_isShared_1172_ == 0)
{
v___x_1174_ = v___x_1171_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_ks_1168_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_vs_1169_);
v___x_1174_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
lean_object* v_newNode_1175_; uint8_t v___y_1177_; size_t v___x_1183_; uint8_t v___x_1184_; 
v_newNode_1175_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(v___x_1174_, v_x_1120_, v_x_1121_);
v___x_1183_ = ((size_t)7ULL);
v___x_1184_ = lean_usize_dec_le(v___x_1183_, v_x_1119_);
if (v___x_1184_ == 0)
{
lean_object* v___x_1185_; lean_object* v___x_1186_; uint8_t v___x_1187_; 
v___x_1185_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1175_);
v___x_1186_ = lean_unsigned_to_nat(4u);
v___x_1187_ = lean_nat_dec_lt(v___x_1185_, v___x_1186_);
lean_dec(v___x_1185_);
v___y_1177_ = v___x_1187_;
goto v___jp_1176_;
}
else
{
v___y_1177_ = v___x_1184_;
goto v___jp_1176_;
}
v___jp_1176_:
{
if (v___y_1177_ == 0)
{
lean_object* v_ks_1178_; lean_object* v_vs_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v_ks_1178_ = lean_ctor_get(v_newNode_1175_, 0);
lean_inc_ref(v_ks_1178_);
v_vs_1179_ = lean_ctor_get(v_newNode_1175_, 1);
lean_inc_ref(v_vs_1179_);
lean_dec_ref(v_newNode_1175_);
v___x_1180_ = lean_unsigned_to_nat(0u);
v___x_1181_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___closed__0);
v___x_1182_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(v_x_1119_, v_ks_1178_, v_vs_1179_, v___x_1180_, v___x_1181_);
lean_dec_ref(v_vs_1179_);
lean_dec_ref(v_ks_1178_);
return v___x_1182_;
}
else
{
return v_newNode_1175_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(size_t v_depth_1190_, lean_object* v_keys_1191_, lean_object* v_vals_1192_, lean_object* v_i_1193_, lean_object* v_entries_1194_){
_start:
{
lean_object* v___x_1195_; uint8_t v___x_1196_; 
v___x_1195_ = lean_array_get_size(v_keys_1191_);
v___x_1196_ = lean_nat_dec_lt(v_i_1193_, v___x_1195_);
if (v___x_1196_ == 0)
{
lean_dec(v_i_1193_);
return v_entries_1194_;
}
else
{
lean_object* v_k_1197_; lean_object* v_v_1198_; uint64_t v___y_1200_; lean_object* v___x_1211_; 
v_k_1197_ = lean_array_fget_borrowed(v_keys_1191_, v_i_1193_);
v_v_1198_ = lean_array_fget_borrowed(v_vals_1192_, v_i_1193_);
v___x_1211_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_key(v_k_1197_);
if (lean_obj_tag(v___x_1211_) == 0)
{
uint64_t v___x_1212_; 
v___x_1212_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1200_ = v___x_1212_;
goto v___jp_1199_;
}
else
{
uint64_t v_hash_1213_; 
v_hash_1213_ = lean_ctor_get_uint64(v___x_1211_, sizeof(void*)*2);
lean_dec(v___x_1211_);
v___y_1200_ = v_hash_1213_;
goto v___jp_1199_;
}
v___jp_1199_:
{
size_t v_h_1201_; size_t v___x_1202_; lean_object* v___x_1203_; size_t v___x_1204_; size_t v___x_1205_; size_t v___x_1206_; size_t v_h_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; 
v_h_1201_ = lean_uint64_to_usize(v___y_1200_);
v___x_1202_ = ((size_t)5ULL);
v___x_1203_ = lean_unsigned_to_nat(1u);
v___x_1204_ = ((size_t)1ULL);
v___x_1205_ = lean_usize_sub(v_depth_1190_, v___x_1204_);
v___x_1206_ = lean_usize_mul(v___x_1202_, v___x_1205_);
v_h_1207_ = lean_usize_shift_right(v_h_1201_, v___x_1206_);
v___x_1208_ = lean_nat_add(v_i_1193_, v___x_1203_);
lean_dec(v_i_1193_);
lean_inc(v_v_1198_);
lean_inc(v_k_1197_);
v___x_1209_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_entries_1194_, v_h_1207_, v_depth_1190_, v_k_1197_, v_v_1198_);
v_i_1193_ = v___x_1208_;
v_entries_1194_ = v___x_1209_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_1214_, lean_object* v_keys_1215_, lean_object* v_vals_1216_, lean_object* v_i_1217_, lean_object* v_entries_1218_){
_start:
{
size_t v_depth_boxed_1219_; lean_object* v_res_1220_; 
v_depth_boxed_1219_ = lean_unbox_usize(v_depth_1214_);
lean_dec(v_depth_1214_);
v_res_1220_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(v_depth_boxed_1219_, v_keys_1215_, v_vals_1216_, v_i_1217_, v_entries_1218_);
lean_dec_ref(v_vals_1216_);
lean_dec_ref(v_keys_1215_);
return v_res_1220_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg___boxed(lean_object* v_x_1221_, lean_object* v_x_1222_, lean_object* v_x_1223_, lean_object* v_x_1224_, lean_object* v_x_1225_){
_start:
{
size_t v_x_26590__boxed_1226_; size_t v_x_26591__boxed_1227_; lean_object* v_res_1228_; 
v_x_26590__boxed_1226_ = lean_unbox_usize(v_x_1222_);
lean_dec(v_x_1222_);
v_x_26591__boxed_1227_ = lean_unbox_usize(v_x_1223_);
lean_dec(v_x_1223_);
v_res_1228_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_x_1221_, v_x_26590__boxed_1226_, v_x_26591__boxed_1227_, v_x_1224_, v_x_1225_);
return v_res_1228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0___redArg(lean_object* v_x_1229_, lean_object* v_x_1230_, lean_object* v_x_1231_){
_start:
{
uint64_t v___y_1233_; lean_object* v___x_1237_; 
v___x_1237_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_key(v_x_1230_);
if (lean_obj_tag(v___x_1237_) == 0)
{
uint64_t v___x_1238_; 
v___x_1238_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_1233_ = v___x_1238_;
goto v___jp_1232_;
}
else
{
uint64_t v_hash_1239_; 
v_hash_1239_ = lean_ctor_get_uint64(v___x_1237_, sizeof(void*)*2);
lean_dec(v___x_1237_);
v___y_1233_ = v_hash_1239_;
goto v___jp_1232_;
}
v___jp_1232_:
{
size_t v___x_1234_; size_t v___x_1235_; lean_object* v___x_1236_; 
v___x_1234_ = lean_uint64_to_usize(v___y_1233_);
v___x_1235_ = ((size_t)1ULL);
v___x_1236_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_x_1229_, v___x_1234_, v___x_1235_, v_x_1230_, v_x_1231_);
return v___x_1236_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___lam__4(lean_object* v_d_1240_, lean_object* v_a_1241_, lean_object* v_x_1242_){
_start:
{
lean_object* v___x_1243_; 
v___x_1243_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_ofOrigin(v_a_1241_);
if (lean_obj_tag(v___x_1243_) == 0)
{
return v_d_1240_;
}
else
{
lean_object* v_val_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_val_1244_ = lean_ctor_get(v___x_1243_, 0);
lean_inc(v_val_1244_);
lean_dec_ref_known(v___x_1243_, 1);
v___x_1245_ = lean_box(0);
v___x_1246_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0___redArg(v_d_1240_, v_val_1244_, v___x_1245_);
return v___x_1246_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0(lean_object* v_x_1247_, lean_object* v_keys_1248_, lean_object* v_v_1249_, lean_object* v_k_1250_, lean_object* v_x_1251_){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v_c_1254_; lean_object* v___x_1255_; 
v___x_1252_ = lean_unsigned_to_nat(1u);
v___x_1253_ = lean_nat_add(v_x_1247_, v___x_1252_);
v_c_1254_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_1248_, v_v_1249_, v___x_1253_);
lean_dec(v___x_1253_);
v___x_1255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1255_, 0, v_k_1250_);
lean_ctor_set(v___x_1255_, 1, v_c_1254_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0___boxed(lean_object* v_x_1256_, lean_object* v_keys_1257_, lean_object* v_v_1258_, lean_object* v_k_1259_, lean_object* v_x_1260_){
_start:
{
lean_object* v_res_1261_; 
v_res_1261_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0(v_x_1256_, v_keys_1257_, v_v_1258_, v_k_1259_, v_x_1260_);
lean_dec_ref(v_keys_1257_);
lean_dec(v_x_1256_);
return v_res_1261_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(lean_object* v_a_1262_, lean_object* v_b_1263_){
_start:
{
lean_object* v_fst_1264_; lean_object* v_fst_1265_; uint8_t v___x_1266_; 
v_fst_1264_ = lean_ctor_get(v_a_1262_, 0);
v_fst_1265_ = lean_ctor_get(v_b_1263_, 0);
v___x_1266_ = l_Lean_Meta_DiscrTree_Key_lt(v_fst_1264_, v_fst_1265_);
return v___x_1266_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1___boxed(lean_object* v_a_1267_, lean_object* v_b_1268_){
_start:
{
uint8_t v_res_1269_; lean_object* v_r_1270_; 
v_res_1269_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v_a_1267_, v_b_1268_);
lean_dec_ref(v_b_1268_);
lean_dec_ref(v_a_1267_);
v_r_1270_ = lean_box(v_res_1269_);
return v_r_1270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__17_spec__25(lean_object* v_vs_1271_, lean_object* v_v_1272_, lean_object* v_i_1273_){
_start:
{
lean_object* v___x_1274_; uint8_t v___x_1275_; 
v___x_1274_ = lean_array_get_size(v_vs_1271_);
v___x_1275_ = lean_nat_dec_lt(v_i_1273_, v___x_1274_);
if (v___x_1275_ == 0)
{
lean_object* v___x_1276_; 
lean_dec(v_i_1273_);
v___x_1276_ = lean_array_push(v_vs_1271_, v_v_1272_);
return v___x_1276_;
}
else
{
lean_object* v_proof_1277_; lean_object* v___x_1278_; lean_object* v_proof_1279_; uint8_t v___x_1280_; 
v_proof_1277_ = lean_ctor_get(v_v_1272_, 1);
v___x_1278_ = lean_array_fget_borrowed(v_vs_1271_, v_i_1273_);
v_proof_1279_ = lean_ctor_get(v___x_1278_, 1);
lean_inc_ref(v_proof_1279_);
lean_inc_ref(v_proof_1277_);
v___x_1280_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(v_proof_1277_, v_proof_1279_);
if (v___x_1280_ == 0)
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = lean_unsigned_to_nat(1u);
v___x_1282_ = lean_nat_add(v_i_1273_, v___x_1281_);
lean_dec(v_i_1273_);
v_i_1273_ = v___x_1282_;
goto _start;
}
else
{
lean_object* v___x_1284_; 
v___x_1284_ = lean_array_fset(v_vs_1271_, v_i_1273_, v_v_1272_);
lean_dec(v_i_1273_);
return v___x_1284_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__17(lean_object* v_vs_1285_, lean_object* v_v_1286_){
_start:
{
lean_object* v___x_1287_; lean_object* v___x_1288_; 
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal_loop___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__17_spec__25(v_vs_1285_, v_v_1286_, v___x_1287_);
return v___x_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg(lean_object* v_x_1293_, lean_object* v_keys_1294_, lean_object* v_v_1295_, lean_object* v_k_1296_, lean_object* v_as_1297_, lean_object* v_k_1298_, lean_object* v_x_1299_, lean_object* v_x_1300_){
_start:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v_mid_1303_; lean_object* v_midVal_1304_; uint8_t v___x_1305_; 
v___x_1301_ = lean_nat_add(v_x_1299_, v_x_1300_);
v___x_1302_ = lean_unsigned_to_nat(1u);
v_mid_1303_ = lean_nat_shiftr(v___x_1301_, v___x_1302_);
lean_dec(v___x_1301_);
v_midVal_1304_ = lean_array_fget(v_as_1297_, v_mid_1303_);
v___x_1305_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v_midVal_1304_, v_k_1298_);
if (v___x_1305_ == 0)
{
uint8_t v___x_1306_; 
lean_dec(v_x_1300_);
v___x_1306_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v_k_1298_, v_midVal_1304_);
if (v___x_1306_ == 0)
{
lean_object* v___x_1307_; uint8_t v___x_1308_; 
lean_dec(v_x_1299_);
v___x_1307_ = lean_array_get_size(v_as_1297_);
v___x_1308_ = lean_nat_dec_lt(v_mid_1303_, v___x_1307_);
if (v___x_1308_ == 0)
{
lean_dec(v_midVal_1304_);
lean_dec(v_mid_1303_);
lean_dec(v_k_1296_);
lean_dec_ref(v_v_1295_);
return v_as_1297_;
}
else
{
lean_object* v_snd_1309_; lean_object* v___x_1311_; uint8_t v_isShared_1312_; uint8_t v_isSharedCheck_1321_; 
v_snd_1309_ = lean_ctor_get(v_midVal_1304_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_midVal_1304_);
if (v_isSharedCheck_1321_ == 0)
{
lean_object* v_unused_1322_; 
v_unused_1322_ = lean_ctor_get(v_midVal_1304_, 0);
lean_dec(v_unused_1322_);
v___x_1311_ = v_midVal_1304_;
v_isShared_1312_ = v_isSharedCheck_1321_;
goto v_resetjp_1310_;
}
else
{
lean_inc(v_snd_1309_);
lean_dec(v_midVal_1304_);
v___x_1311_ = lean_box(0);
v_isShared_1312_ = v_isSharedCheck_1321_;
goto v_resetjp_1310_;
}
v_resetjp_1310_:
{
lean_object* v___x_1313_; lean_object* v_xs_x27_1314_; lean_object* v___x_1315_; lean_object* v_c_1316_; lean_object* v___x_1318_; 
v___x_1313_ = lean_box(0);
v_xs_x27_1314_ = lean_array_fset(v_as_1297_, v_mid_1303_, v___x_1313_);
v___x_1315_ = lean_nat_add(v_x_1293_, v___x_1302_);
v_c_1316_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5(v_keys_1294_, v_v_1295_, v___x_1315_, v_snd_1309_);
lean_dec(v___x_1315_);
if (v_isShared_1312_ == 0)
{
lean_ctor_set(v___x_1311_, 1, v_c_1316_);
lean_ctor_set(v___x_1311_, 0, v_k_1296_);
v___x_1318_ = v___x_1311_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_k_1296_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_c_1316_);
v___x_1318_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
lean_object* v___x_1319_; 
v___x_1319_ = lean_array_fset(v_xs_x27_1314_, v_mid_1303_, v___x_1318_);
lean_dec(v_mid_1303_);
return v___x_1319_;
}
}
}
}
else
{
lean_dec(v_midVal_1304_);
v_x_1300_ = v_mid_1303_;
goto _start;
}
}
else
{
uint8_t v___x_1324_; 
lean_dec(v_midVal_1304_);
v___x_1324_ = lean_nat_dec_eq(v_mid_1303_, v_x_1299_);
if (v___x_1324_ == 0)
{
lean_dec(v_x_1299_);
v_x_1299_ = v_mid_1303_;
goto _start;
}
else
{
lean_object* v___x_1326_; lean_object* v_c_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v_j_1330_; lean_object* v_as_1331_; lean_object* v___x_1332_; 
lean_dec(v_mid_1303_);
lean_dec(v_x_1300_);
v___x_1326_ = lean_nat_add(v_x_1293_, v___x_1302_);
v_c_1327_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_1294_, v_v_1295_, v___x_1326_);
lean_dec(v___x_1326_);
v___x_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1328_, 0, v_k_1296_);
lean_ctor_set(v___x_1328_, 1, v_c_1327_);
v___x_1329_ = lean_nat_add(v_x_1299_, v___x_1302_);
lean_dec(v_x_1299_);
v_j_1330_ = lean_array_get_size(v_as_1297_);
v_as_1331_ = lean_array_push(v_as_1297_, v___x_1328_);
v___x_1332_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_1329_, v_as_1331_, v_j_1330_);
lean_dec(v___x_1329_);
return v___x_1332_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18(lean_object* v_x_1333_, lean_object* v_keys_1334_, lean_object* v_v_1335_, lean_object* v_k_1336_, lean_object* v_as_1337_, lean_object* v_k_1338_){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; uint8_t v___x_1341_; 
v___x_1339_ = lean_array_get_size(v_as_1337_);
v___x_1340_ = lean_unsigned_to_nat(0u);
v___x_1341_ = lean_nat_dec_eq(v___x_1339_, v___x_1340_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1342_ = lean_array_fget_borrowed(v_as_1337_, v___x_1340_);
v___x_1343_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v_k_1338_, v___x_1342_);
if (v___x_1343_ == 0)
{
uint8_t v___x_1344_; 
v___x_1344_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v___x_1342_, v_k_1338_);
if (v___x_1344_ == 0)
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_nat_dec_lt(v___x_1340_, v___x_1339_);
if (v___x_1345_ == 0)
{
lean_dec(v_k_1336_);
lean_dec_ref(v_v_1335_);
return v_as_1337_;
}
else
{
lean_object* v___x_1346_; lean_object* v_xs_x27_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_inc(v___x_1342_);
v___x_1346_ = lean_box(0);
v_xs_x27_1347_ = lean_array_fset(v_as_1337_, v___x_1340_, v___x_1346_);
v___x_1348_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2(v_x_1333_, v_keys_1334_, v_v_1335_, v_k_1336_, v___x_1342_);
v___x_1349_ = lean_array_fset(v_xs_x27_1347_, v___x_1340_, v___x_1348_);
return v___x_1349_;
}
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; uint8_t v___x_1353_; 
v___x_1350_ = lean_unsigned_to_nat(1u);
v___x_1351_ = lean_nat_sub(v___x_1339_, v___x_1350_);
v___x_1352_ = lean_array_fget_borrowed(v_as_1337_, v___x_1351_);
v___x_1353_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v___x_1352_, v_k_1338_);
if (v___x_1353_ == 0)
{
uint8_t v___x_1354_; 
v___x_1354_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__1(v_k_1338_, v___x_1352_);
if (v___x_1354_ == 0)
{
uint8_t v___x_1355_; 
v___x_1355_ = lean_nat_dec_lt(v___x_1351_, v___x_1339_);
if (v___x_1355_ == 0)
{
lean_dec(v___x_1351_);
lean_dec(v_k_1336_);
lean_dec_ref(v_v_1335_);
return v_as_1337_;
}
else
{
lean_object* v___x_1356_; lean_object* v_xs_x27_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
lean_inc(v___x_1352_);
v___x_1356_ = lean_box(0);
v_xs_x27_1357_ = lean_array_fset(v_as_1337_, v___x_1351_, v___x_1356_);
v___x_1358_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2(v_x_1333_, v_keys_1334_, v_v_1335_, v_k_1336_, v___x_1352_);
v___x_1359_ = lean_array_fset(v_xs_x27_1357_, v___x_1351_, v___x_1358_);
lean_dec(v___x_1351_);
return v___x_1359_;
}
}
else
{
lean_object* v___x_1360_; 
v___x_1360_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg(v_x_1333_, v_keys_1334_, v_v_1335_, v_k_1336_, v_as_1337_, v_k_1338_, v___x_1340_, v___x_1351_);
return v___x_1360_;
}
}
else
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
lean_dec(v___x_1351_);
v___x_1361_ = lean_box(0);
v___x_1362_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0(v_x_1333_, v_keys_1334_, v_v_1335_, v_k_1336_, v___x_1361_);
v___x_1363_ = lean_array_push(v_as_1337_, v___x_1362_);
return v___x_1363_;
}
}
}
else
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v_as_1366_; lean_object* v___x_1367_; 
v___x_1364_ = lean_box(0);
v___x_1365_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0(v_x_1333_, v_keys_1334_, v_v_1335_, v_k_1336_, v___x_1364_);
v_as_1366_ = lean_array_push(v_as_1337_, v___x_1365_);
v___x_1367_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_1340_, v_as_1366_, v___x_1339_);
return v___x_1367_;
}
}
else
{
lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; 
v___x_1368_ = lean_box(0);
v___x_1369_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__0(v_x_1333_, v_keys_1334_, v_v_1335_, v_k_1336_, v___x_1368_);
v___x_1370_ = lean_array_push(v_as_1337_, v___x_1369_);
return v___x_1370_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5(lean_object* v_keys_1371_, lean_object* v_v_1372_, lean_object* v_x_1373_, lean_object* v_x_1374_){
_start:
{
lean_object* v_vs_1375_; lean_object* v_children_1376_; lean_object* v___x_1378_; uint8_t v_isShared_1379_; uint8_t v_isSharedCheck_1393_; 
v_vs_1375_ = lean_ctor_get(v_x_1374_, 0);
v_children_1376_ = lean_ctor_get(v_x_1374_, 1);
v_isSharedCheck_1393_ = !lean_is_exclusive(v_x_1374_);
if (v_isSharedCheck_1393_ == 0)
{
v___x_1378_ = v_x_1374_;
v_isShared_1379_ = v_isSharedCheck_1393_;
goto v_resetjp_1377_;
}
else
{
lean_inc(v_children_1376_);
lean_inc(v_vs_1375_);
lean_dec(v_x_1374_);
v___x_1378_ = lean_box(0);
v_isShared_1379_ = v_isSharedCheck_1393_;
goto v_resetjp_1377_;
}
v_resetjp_1377_:
{
lean_object* v___x_1380_; uint8_t v___x_1381_; 
v___x_1380_ = lean_array_get_size(v_keys_1371_);
v___x_1381_ = lean_nat_dec_lt(v_x_1373_, v___x_1380_);
if (v___x_1381_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
v___x_1382_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertVal___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__17(v_vs_1375_, v_v_1372_);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 0, v___x_1382_);
v___x_1384_ = v___x_1378_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
lean_ctor_set(v_reuseFailAlloc_1385_, 1, v_children_1376_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
else
{
lean_object* v_k_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v_c_1389_; lean_object* v___x_1391_; 
v_k_1386_ = lean_array_fget_borrowed(v_keys_1371_, v_x_1373_);
v___x_1387_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__1));
lean_inc_n(v_k_1386_, 2);
v___x_1388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1388_, 0, v_k_1386_);
lean_ctor_set(v___x_1388_, 1, v___x_1387_);
v_c_1389_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18(v_x_1373_, v_keys_1371_, v_v_1372_, v_k_1386_, v_children_1376_, v___x_1388_);
lean_dec_ref_known(v___x_1388_, 2);
if (v_isShared_1379_ == 0)
{
lean_ctor_set(v___x_1378_, 1, v_c_1389_);
v___x_1391_ = v___x_1378_;
goto v_reusejp_1390_;
}
else
{
lean_object* v_reuseFailAlloc_1392_; 
v_reuseFailAlloc_1392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1392_, 0, v_vs_1375_);
lean_ctor_set(v_reuseFailAlloc_1392_, 1, v_c_1389_);
v___x_1391_ = v_reuseFailAlloc_1392_;
goto v_reusejp_1390_;
}
v_reusejp_1390_:
{
return v___x_1391_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2(lean_object* v_x_1394_, lean_object* v_keys_1395_, lean_object* v_v_1396_, lean_object* v_k_1397_, lean_object* v_x_1398_){
_start:
{
lean_object* v_snd_1399_; lean_object* v___x_1401_; uint8_t v_isShared_1402_; uint8_t v_isSharedCheck_1409_; 
v_snd_1399_ = lean_ctor_get(v_x_1398_, 1);
v_isSharedCheck_1409_ = !lean_is_exclusive(v_x_1398_);
if (v_isSharedCheck_1409_ == 0)
{
lean_object* v_unused_1410_; 
v_unused_1410_ = lean_ctor_get(v_x_1398_, 0);
lean_dec(v_unused_1410_);
v___x_1401_ = v_x_1398_;
v_isShared_1402_ = v_isSharedCheck_1409_;
goto v_resetjp_1400_;
}
else
{
lean_inc(v_snd_1399_);
lean_dec(v_x_1398_);
v___x_1401_ = lean_box(0);
v_isShared_1402_ = v_isSharedCheck_1409_;
goto v_resetjp_1400_;
}
v_resetjp_1400_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v_c_1405_; lean_object* v___x_1407_; 
v___x_1403_ = lean_unsigned_to_nat(1u);
v___x_1404_ = lean_nat_add(v_x_1394_, v___x_1403_);
v_c_1405_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5(v_keys_1395_, v_v_1396_, v___x_1404_, v_snd_1399_);
lean_dec(v___x_1404_);
if (v_isShared_1402_ == 0)
{
lean_ctor_set(v___x_1401_, 1, v_c_1405_);
lean_ctor_set(v___x_1401_, 0, v_k_1397_);
v___x_1407_ = v___x_1401_;
goto v_reusejp_1406_;
}
else
{
lean_object* v_reuseFailAlloc_1408_; 
v_reuseFailAlloc_1408_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1408_, 0, v_k_1397_);
lean_ctor_set(v_reuseFailAlloc_1408_, 1, v_c_1405_);
v___x_1407_ = v_reuseFailAlloc_1408_;
goto v_reusejp_1406_;
}
v_reusejp_1406_:
{
return v___x_1407_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2___boxed(lean_object* v_x_1411_, lean_object* v_keys_1412_, lean_object* v_v_1413_, lean_object* v_k_1414_, lean_object* v_x_1415_){
_start:
{
lean_object* v_res_1416_; 
v_res_1416_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___lam__2(v_x_1411_, v_keys_1412_, v_v_1413_, v_k_1414_, v_x_1415_);
lean_dec_ref(v_keys_1412_);
lean_dec(v_x_1411_);
return v_res_1416_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___boxed(lean_object* v_keys_1417_, lean_object* v_v_1418_, lean_object* v_x_1419_, lean_object* v_x_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5(v_keys_1417_, v_v_1418_, v_x_1419_, v_x_1420_);
lean_dec(v_x_1419_);
lean_dec_ref(v_keys_1417_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg___boxed(lean_object* v_x_1422_, lean_object* v_keys_1423_, lean_object* v_v_1424_, lean_object* v_k_1425_, lean_object* v_as_1426_, lean_object* v_k_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_){
_start:
{
lean_object* v_res_1430_; 
v_res_1430_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg(v_x_1422_, v_keys_1423_, v_v_1424_, v_k_1425_, v_as_1426_, v_k_1427_, v_x_1428_, v_x_1429_);
lean_dec_ref(v_k_1427_);
lean_dec_ref(v_keys_1423_);
lean_dec(v_x_1422_);
return v_res_1430_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18___boxed(lean_object* v_x_1431_, lean_object* v_keys_1432_, lean_object* v_v_1433_, lean_object* v_k_1434_, lean_object* v_as_1435_, lean_object* v_k_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l_Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18(v_x_1431_, v_keys_1432_, v_v_1433_, v_k_1434_, v_as_1435_, v_k_1436_);
lean_dec_ref(v_k_1436_);
lean_dec_ref(v_keys_1432_);
lean_dec(v_x_1431_);
return v_res_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(lean_object* v_keys_1438_, lean_object* v_v_1439_, lean_object* v_x_1440_){
_start:
{
if (lean_obj_tag(v_x_1440_) == 0)
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; 
v___x_1441_ = lean_unsigned_to_nat(1u);
v___x_1442_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_createNodes(lean_box(0), v_keys_1438_, v_v_1439_, v___x_1441_);
v___x_1443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1443_, 0, v___x_1442_);
return v___x_1443_;
}
else
{
lean_object* v_val_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1453_; 
v_val_1444_ = lean_ctor_get(v_x_1440_, 0);
v_isSharedCheck_1453_ = !lean_is_exclusive(v_x_1440_);
if (v_isSharedCheck_1453_ == 0)
{
v___x_1446_ = v_x_1440_;
v_isShared_1447_ = v_isSharedCheck_1453_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_val_1444_);
lean_dec(v_x_1440_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1453_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1451_; 
v___x_1448_ = lean_unsigned_to_nat(1u);
v___x_1449_ = l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5(v_keys_1438_, v_v_1439_, v___x_1448_, v_val_1444_);
if (v_isShared_1447_ == 0)
{
lean_ctor_set(v___x_1446_, 0, v___x_1449_);
v___x_1451_ = v___x_1446_;
goto v_reusejp_1450_;
}
else
{
lean_object* v_reuseFailAlloc_1452_; 
v_reuseFailAlloc_1452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1452_, 0, v___x_1449_);
v___x_1451_ = v_reuseFailAlloc_1452_;
goto v_reusejp_1450_;
}
v_reusejp_1450_:
{
return v___x_1451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0___boxed(lean_object* v_keys_1454_, lean_object* v_v_1455_, lean_object* v_x_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(v_keys_1454_, v_v_1455_, v_x_1456_);
lean_dec_ref(v_keys_1454_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20_spec__30(lean_object* v_xs_1458_, lean_object* v_v_1459_, lean_object* v_i_1460_){
_start:
{
lean_object* v___x_1461_; uint8_t v___x_1462_; 
v___x_1461_ = lean_array_get_size(v_xs_1458_);
v___x_1462_ = lean_nat_dec_lt(v_i_1460_, v___x_1461_);
if (v___x_1462_ == 0)
{
lean_object* v___x_1463_; 
lean_dec(v_i_1460_);
v___x_1463_ = lean_box(0);
return v___x_1463_;
}
else
{
lean_object* v___x_1464_; uint8_t v___x_1465_; 
v___x_1464_ = lean_array_fget_borrowed(v_xs_1458_, v_i_1460_);
v___x_1465_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v___x_1464_, v_v_1459_);
if (v___x_1465_ == 0)
{
lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1466_ = lean_unsigned_to_nat(1u);
v___x_1467_ = lean_nat_add(v_i_1460_, v___x_1466_);
lean_dec(v_i_1460_);
v_i_1460_ = v___x_1467_;
goto _start;
}
else
{
lean_object* v___x_1469_; 
v___x_1469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1469_, 0, v_i_1460_);
return v___x_1469_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20_spec__30___boxed(lean_object* v_xs_1470_, lean_object* v_v_1471_, lean_object* v_i_1472_){
_start:
{
lean_object* v_res_1473_; 
v_res_1473_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20_spec__30(v_xs_1470_, v_v_1471_, v_i_1472_);
lean_dec(v_v_1471_);
lean_dec_ref(v_xs_1470_);
return v_res_1473_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20(lean_object* v_xs_1474_, lean_object* v_v_1475_){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = lean_unsigned_to_nat(0u);
v___x_1477_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20_spec__30(v_xs_1474_, v_v_1475_, v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20___boxed(lean_object* v_xs_1478_, lean_object* v_v_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20(v_xs_1478_, v_v_1479_);
lean_dec(v_v_1479_);
lean_dec_ref(v_xs_1478_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32_spec__37___redArg(lean_object* v_x_1481_, lean_object* v_x_1482_, lean_object* v_x_1483_, lean_object* v_x_1484_){
_start:
{
lean_object* v_ks_1485_; lean_object* v_vs_1486_; lean_object* v___x_1488_; uint8_t v_isShared_1489_; uint8_t v_isSharedCheck_1510_; 
v_ks_1485_ = lean_ctor_get(v_x_1481_, 0);
v_vs_1486_ = lean_ctor_get(v_x_1481_, 1);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_x_1481_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1488_ = v_x_1481_;
v_isShared_1489_ = v_isSharedCheck_1510_;
goto v_resetjp_1487_;
}
else
{
lean_inc(v_vs_1486_);
lean_inc(v_ks_1485_);
lean_dec(v_x_1481_);
v___x_1488_ = lean_box(0);
v_isShared_1489_ = v_isSharedCheck_1510_;
goto v_resetjp_1487_;
}
v_resetjp_1487_:
{
lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1490_ = lean_array_get_size(v_ks_1485_);
v___x_1491_ = lean_nat_dec_lt(v_x_1482_, v___x_1490_);
if (v___x_1491_ == 0)
{
lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1495_; 
lean_dec(v_x_1482_);
v___x_1492_ = lean_array_push(v_ks_1485_, v_x_1483_);
v___x_1493_ = lean_array_push(v_vs_1486_, v_x_1484_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1493_);
lean_ctor_set(v___x_1488_, 0, v___x_1492_);
v___x_1495_ = v___x_1488_;
goto v_reusejp_1494_;
}
else
{
lean_object* v_reuseFailAlloc_1496_; 
v_reuseFailAlloc_1496_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1496_, 0, v___x_1492_);
lean_ctor_set(v_reuseFailAlloc_1496_, 1, v___x_1493_);
v___x_1495_ = v_reuseFailAlloc_1496_;
goto v_reusejp_1494_;
}
v_reusejp_1494_:
{
return v___x_1495_;
}
}
else
{
lean_object* v_k_x27_1497_; uint8_t v___x_1498_; 
v_k_x27_1497_ = lean_array_fget_borrowed(v_ks_1485_, v_x_1482_);
v___x_1498_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1483_, v_k_x27_1497_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1500_; 
if (v_isShared_1489_ == 0)
{
v___x_1500_ = v___x_1488_;
goto v_reusejp_1499_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_ks_1485_);
lean_ctor_set(v_reuseFailAlloc_1504_, 1, v_vs_1486_);
v___x_1500_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1499_;
}
v_reusejp_1499_:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_unsigned_to_nat(1u);
v___x_1502_ = lean_nat_add(v_x_1482_, v___x_1501_);
lean_dec(v_x_1482_);
v_x_1481_ = v___x_1500_;
v_x_1482_ = v___x_1502_;
goto _start;
}
}
else
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1508_; 
v___x_1505_ = lean_array_fset(v_ks_1485_, v_x_1482_, v_x_1483_);
v___x_1506_ = lean_array_fset(v_vs_1486_, v_x_1482_, v_x_1484_);
lean_dec(v_x_1482_);
if (v_isShared_1489_ == 0)
{
lean_ctor_set(v___x_1488_, 1, v___x_1506_);
lean_ctor_set(v___x_1488_, 0, v___x_1505_);
v___x_1508_ = v___x_1488_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v___x_1506_);
v___x_1508_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
return v___x_1508_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32___redArg(lean_object* v_n_1511_, lean_object* v_k_1512_, lean_object* v_v_1513_){
_start:
{
lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = lean_unsigned_to_nat(0u);
v___x_1515_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32_spec__37___redArg(v_n_1511_, v___x_1514_, v_k_1512_, v_v_1513_);
return v___x_1515_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___closed__0(void){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_1516_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(lean_object* v_x_1517_, size_t v_x_1518_, size_t v_x_1519_, lean_object* v_x_1520_, lean_object* v_x_1521_){
_start:
{
if (lean_obj_tag(v_x_1517_) == 0)
{
lean_object* v_es_1522_; size_t v___x_1523_; size_t v___x_1524_; lean_object* v_j_1525_; lean_object* v___x_1526_; uint8_t v___x_1527_; 
v_es_1522_ = lean_ctor_get(v_x_1517_, 0);
v___x_1523_ = ((size_t)31ULL);
v___x_1524_ = lean_usize_land(v_x_1518_, v___x_1523_);
v_j_1525_ = lean_usize_to_nat(v___x_1524_);
v___x_1526_ = lean_array_get_size(v_es_1522_);
v___x_1527_ = lean_nat_dec_lt(v_j_1525_, v___x_1526_);
if (v___x_1527_ == 0)
{
lean_dec(v_j_1525_);
lean_dec(v_x_1521_);
lean_dec(v_x_1520_);
return v_x_1517_;
}
else
{
lean_object* v___x_1529_; uint8_t v_isShared_1530_; uint8_t v_isSharedCheck_1566_; 
lean_inc_ref(v_es_1522_);
v_isSharedCheck_1566_ = !lean_is_exclusive(v_x_1517_);
if (v_isSharedCheck_1566_ == 0)
{
lean_object* v_unused_1567_; 
v_unused_1567_ = lean_ctor_get(v_x_1517_, 0);
lean_dec(v_unused_1567_);
v___x_1529_ = v_x_1517_;
v_isShared_1530_ = v_isSharedCheck_1566_;
goto v_resetjp_1528_;
}
else
{
lean_dec(v_x_1517_);
v___x_1529_ = lean_box(0);
v_isShared_1530_ = v_isSharedCheck_1566_;
goto v_resetjp_1528_;
}
v_resetjp_1528_:
{
lean_object* v_v_1531_; lean_object* v___x_1532_; lean_object* v_xs_x27_1533_; lean_object* v___y_1535_; 
v_v_1531_ = lean_array_fget(v_es_1522_, v_j_1525_);
v___x_1532_ = lean_box(0);
v_xs_x27_1533_ = lean_array_fset(v_es_1522_, v_j_1525_, v___x_1532_);
switch(lean_obj_tag(v_v_1531_))
{
case 0:
{
lean_object* v_key_1540_; lean_object* v_val_1541_; lean_object* v___x_1543_; uint8_t v_isShared_1544_; uint8_t v_isSharedCheck_1551_; 
v_key_1540_ = lean_ctor_get(v_v_1531_, 0);
v_val_1541_ = lean_ctor_get(v_v_1531_, 1);
v_isSharedCheck_1551_ = !lean_is_exclusive(v_v_1531_);
if (v_isSharedCheck_1551_ == 0)
{
v___x_1543_ = v_v_1531_;
v_isShared_1544_ = v_isSharedCheck_1551_;
goto v_resetjp_1542_;
}
else
{
lean_inc(v_val_1541_);
lean_inc(v_key_1540_);
lean_dec(v_v_1531_);
v___x_1543_ = lean_box(0);
v_isShared_1544_ = v_isSharedCheck_1551_;
goto v_resetjp_1542_;
}
v_resetjp_1542_:
{
uint8_t v___x_1545_; 
v___x_1545_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1520_, v_key_1540_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; lean_object* v___x_1547_; 
lean_del_object(v___x_1543_);
v___x_1546_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1540_, v_val_1541_, v_x_1520_, v_x_1521_);
v___x_1547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1547_, 0, v___x_1546_);
v___y_1535_ = v___x_1547_;
goto v___jp_1534_;
}
else
{
lean_object* v___x_1549_; 
lean_dec(v_val_1541_);
lean_dec(v_key_1540_);
if (v_isShared_1544_ == 0)
{
lean_ctor_set(v___x_1543_, 1, v_x_1521_);
lean_ctor_set(v___x_1543_, 0, v_x_1520_);
v___x_1549_ = v___x_1543_;
goto v_reusejp_1548_;
}
else
{
lean_object* v_reuseFailAlloc_1550_; 
v_reuseFailAlloc_1550_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1550_, 0, v_x_1520_);
lean_ctor_set(v_reuseFailAlloc_1550_, 1, v_x_1521_);
v___x_1549_ = v_reuseFailAlloc_1550_;
goto v_reusejp_1548_;
}
v_reusejp_1548_:
{
v___y_1535_ = v___x_1549_;
goto v___jp_1534_;
}
}
}
}
case 1:
{
lean_object* v_node_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1564_; 
v_node_1552_ = lean_ctor_get(v_v_1531_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v_v_1531_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1554_ = v_v_1531_;
v_isShared_1555_ = v_isSharedCheck_1564_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_node_1552_);
lean_dec(v_v_1531_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1564_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
size_t v___x_1556_; size_t v___x_1557_; size_t v___x_1558_; size_t v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1562_; 
v___x_1556_ = ((size_t)5ULL);
v___x_1557_ = lean_usize_shift_right(v_x_1518_, v___x_1556_);
v___x_1558_ = ((size_t)1ULL);
v___x_1559_ = lean_usize_add(v_x_1519_, v___x_1558_);
v___x_1560_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(v_node_1552_, v___x_1557_, v___x_1559_, v_x_1520_, v_x_1521_);
if (v_isShared_1555_ == 0)
{
lean_ctor_set(v___x_1554_, 0, v___x_1560_);
v___x_1562_ = v___x_1554_;
goto v_reusejp_1561_;
}
else
{
lean_object* v_reuseFailAlloc_1563_; 
v_reuseFailAlloc_1563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1563_, 0, v___x_1560_);
v___x_1562_ = v_reuseFailAlloc_1563_;
goto v_reusejp_1561_;
}
v_reusejp_1561_:
{
v___y_1535_ = v___x_1562_;
goto v___jp_1534_;
}
}
}
default: 
{
lean_object* v___x_1565_; 
v___x_1565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1565_, 0, v_x_1520_);
lean_ctor_set(v___x_1565_, 1, v_x_1521_);
v___y_1535_ = v___x_1565_;
goto v___jp_1534_;
}
}
v___jp_1534_:
{
lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1536_ = lean_array_fset(v_xs_x27_1533_, v_j_1525_, v___y_1535_);
lean_dec(v_j_1525_);
if (v_isShared_1530_ == 0)
{
lean_ctor_set(v___x_1529_, 0, v___x_1536_);
v___x_1538_ = v___x_1529_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1539_; 
v_reuseFailAlloc_1539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1539_, 0, v___x_1536_);
v___x_1538_ = v_reuseFailAlloc_1539_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
return v___x_1538_;
}
}
}
}
}
else
{
lean_object* v_ks_1568_; lean_object* v_vs_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1589_; 
v_ks_1568_ = lean_ctor_get(v_x_1517_, 0);
v_vs_1569_ = lean_ctor_get(v_x_1517_, 1);
v_isSharedCheck_1589_ = !lean_is_exclusive(v_x_1517_);
if (v_isSharedCheck_1589_ == 0)
{
v___x_1571_ = v_x_1517_;
v_isShared_1572_ = v_isSharedCheck_1589_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_vs_1569_);
lean_inc(v_ks_1568_);
lean_dec(v_x_1517_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1589_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1574_; 
if (v_isShared_1572_ == 0)
{
v___x_1574_ = v___x_1571_;
goto v_reusejp_1573_;
}
else
{
lean_object* v_reuseFailAlloc_1588_; 
v_reuseFailAlloc_1588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1588_, 0, v_ks_1568_);
lean_ctor_set(v_reuseFailAlloc_1588_, 1, v_vs_1569_);
v___x_1574_ = v_reuseFailAlloc_1588_;
goto v_reusejp_1573_;
}
v_reusejp_1573_:
{
lean_object* v_newNode_1575_; uint8_t v___y_1577_; size_t v___x_1583_; uint8_t v___x_1584_; 
v_newNode_1575_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32___redArg(v___x_1574_, v_x_1520_, v_x_1521_);
v___x_1583_ = ((size_t)7ULL);
v___x_1584_ = lean_usize_dec_le(v___x_1583_, v_x_1519_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; lean_object* v___x_1586_; uint8_t v___x_1587_; 
v___x_1585_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1575_);
v___x_1586_ = lean_unsigned_to_nat(4u);
v___x_1587_ = lean_nat_dec_lt(v___x_1585_, v___x_1586_);
lean_dec(v___x_1585_);
v___y_1577_ = v___x_1587_;
goto v___jp_1576_;
}
else
{
v___y_1577_ = v___x_1584_;
goto v___jp_1576_;
}
v___jp_1576_:
{
if (v___y_1577_ == 0)
{
lean_object* v_ks_1578_; lean_object* v_vs_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; 
v_ks_1578_ = lean_ctor_get(v_newNode_1575_, 0);
lean_inc_ref(v_ks_1578_);
v_vs_1579_ = lean_ctor_get(v_newNode_1575_, 1);
lean_inc_ref(v_vs_1579_);
lean_dec_ref(v_newNode_1575_);
v___x_1580_ = lean_unsigned_to_nat(0u);
v___x_1581_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___closed__0);
v___x_1582_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(v_x_1519_, v_ks_1578_, v_vs_1579_, v___x_1580_, v___x_1581_);
lean_dec_ref(v_vs_1579_);
lean_dec_ref(v_ks_1578_);
return v___x_1582_;
}
else
{
return v_newNode_1575_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(size_t v_depth_1590_, lean_object* v_keys_1591_, lean_object* v_vals_1592_, lean_object* v_i_1593_, lean_object* v_entries_1594_){
_start:
{
lean_object* v___x_1595_; uint8_t v___x_1596_; 
v___x_1595_ = lean_array_get_size(v_keys_1591_);
v___x_1596_ = lean_nat_dec_lt(v_i_1593_, v___x_1595_);
if (v___x_1596_ == 0)
{
lean_dec(v_i_1593_);
return v_entries_1594_;
}
else
{
lean_object* v_k_1597_; lean_object* v_v_1598_; uint64_t v___x_1599_; size_t v_h_1600_; size_t v___x_1601_; lean_object* v___x_1602_; size_t v___x_1603_; size_t v___x_1604_; size_t v___x_1605_; size_t v_h_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_k_1597_ = lean_array_fget_borrowed(v_keys_1591_, v_i_1593_);
v_v_1598_ = lean_array_fget_borrowed(v_vals_1592_, v_i_1593_);
v___x_1599_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_1597_);
v_h_1600_ = lean_uint64_to_usize(v___x_1599_);
v___x_1601_ = ((size_t)5ULL);
v___x_1602_ = lean_unsigned_to_nat(1u);
v___x_1603_ = ((size_t)1ULL);
v___x_1604_ = lean_usize_sub(v_depth_1590_, v___x_1603_);
v___x_1605_ = lean_usize_mul(v___x_1601_, v___x_1604_);
v_h_1606_ = lean_usize_shift_right(v_h_1600_, v___x_1605_);
v___x_1607_ = lean_nat_add(v_i_1593_, v___x_1602_);
lean_dec(v_i_1593_);
lean_inc(v_v_1598_);
lean_inc(v_k_1597_);
v___x_1608_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(v_entries_1594_, v_h_1606_, v_depth_1590_, v_k_1597_, v_v_1598_);
v_i_1593_ = v___x_1607_;
v_entries_1594_ = v___x_1608_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg___boxed(lean_object* v_depth_1610_, lean_object* v_keys_1611_, lean_object* v_vals_1612_, lean_object* v_i_1613_, lean_object* v_entries_1614_){
_start:
{
size_t v_depth_boxed_1615_; lean_object* v_res_1616_; 
v_depth_boxed_1615_ = lean_unbox_usize(v_depth_1610_);
lean_dec(v_depth_1610_);
v_res_1616_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(v_depth_boxed_1615_, v_keys_1611_, v_vals_1612_, v_i_1613_, v_entries_1614_);
lean_dec_ref(v_vals_1612_);
lean_dec_ref(v_keys_1611_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg___boxed(lean_object* v_x_1617_, lean_object* v_x_1618_, lean_object* v_x_1619_, lean_object* v_x_1620_, lean_object* v_x_1621_){
_start:
{
size_t v_x_27151__boxed_1622_; size_t v_x_27152__boxed_1623_; lean_object* v_res_1624_; 
v_x_27151__boxed_1622_ = lean_unbox_usize(v_x_1618_);
lean_dec(v_x_1618_);
v_x_27152__boxed_1623_ = lean_unbox_usize(v_x_1619_);
lean_dec(v_x_1619_);
v_res_1624_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(v_x_1617_, v_x_27151__boxed_1622_, v_x_27152__boxed_1623_, v_x_1620_, v_x_1621_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6(lean_object* v_keys_1625_, lean_object* v_v_1626_, lean_object* v_x_1627_, size_t v_x_1628_, size_t v_x_1629_, lean_object* v_x_1630_){
_start:
{
if (lean_obj_tag(v_x_1627_) == 0)
{
lean_object* v_es_1631_; size_t v___x_1632_; size_t v___x_1633_; lean_object* v_j_1634_; lean_object* v___x_1635_; uint8_t v___x_1636_; 
v_es_1631_ = lean_ctor_get(v_x_1627_, 0);
v___x_1632_ = ((size_t)31ULL);
v___x_1633_ = lean_usize_land(v_x_1628_, v___x_1632_);
v_j_1634_ = lean_usize_to_nat(v___x_1633_);
v___x_1635_ = lean_array_get_size(v_es_1631_);
v___x_1636_ = lean_nat_dec_lt(v_j_1634_, v___x_1635_);
if (v___x_1636_ == 0)
{
lean_dec(v_j_1634_);
lean_dec(v_x_1630_);
lean_dec_ref(v_v_1626_);
return v_x_1627_;
}
else
{
lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1704_; 
lean_inc_ref(v_es_1631_);
v_isSharedCheck_1704_ = !lean_is_exclusive(v_x_1627_);
if (v_isSharedCheck_1704_ == 0)
{
lean_object* v_unused_1705_; 
v_unused_1705_ = lean_ctor_get(v_x_1627_, 0);
lean_dec(v_unused_1705_);
v___x_1638_ = v_x_1627_;
v_isShared_1639_ = v_isSharedCheck_1704_;
goto v_resetjp_1637_;
}
else
{
lean_dec(v_x_1627_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1704_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v_v_1640_; lean_object* v___x_1641_; lean_object* v_xs_x27_1642_; lean_object* v___y_1644_; 
v_v_1640_ = lean_array_fget(v_es_1631_, v_j_1634_);
v___x_1641_ = lean_box(0);
v_xs_x27_1642_ = lean_array_fset(v_es_1631_, v_j_1634_, v___x_1641_);
switch(lean_obj_tag(v_v_1640_))
{
case 0:
{
lean_object* v_key_1649_; lean_object* v_val_1650_; uint8_t v___x_1651_; 
v_key_1649_ = lean_ctor_get(v_v_1640_, 0);
v_val_1650_ = lean_ctor_get(v_v_1640_, 1);
v___x_1651_ = l_Lean_Meta_DiscrTree_instBEqKey_beq(v_x_1630_, v_key_1649_);
if (v___x_1651_ == 0)
{
lean_object* v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = lean_box(0);
v___x_1653_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(v_keys_1625_, v_v_1626_, v___x_1652_);
if (lean_obj_tag(v___x_1653_) == 0)
{
lean_dec(v_x_1630_);
v___y_1644_ = v_v_1640_;
goto v___jp_1643_;
}
else
{
lean_object* v_val_1654_; lean_object* v___x_1656_; uint8_t v_isShared_1657_; uint8_t v_isSharedCheck_1662_; 
lean_inc(v_val_1650_);
lean_inc(v_key_1649_);
lean_dec_ref_known(v_v_1640_, 2);
v_val_1654_ = lean_ctor_get(v___x_1653_, 0);
v_isSharedCheck_1662_ = !lean_is_exclusive(v___x_1653_);
if (v_isSharedCheck_1662_ == 0)
{
v___x_1656_ = v___x_1653_;
v_isShared_1657_ = v_isSharedCheck_1662_;
goto v_resetjp_1655_;
}
else
{
lean_inc(v_val_1654_);
lean_dec(v___x_1653_);
v___x_1656_ = lean_box(0);
v_isShared_1657_ = v_isSharedCheck_1662_;
goto v_resetjp_1655_;
}
v_resetjp_1655_:
{
lean_object* v___x_1658_; lean_object* v___x_1660_; 
v___x_1658_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1649_, v_val_1650_, v_x_1630_, v_val_1654_);
if (v_isShared_1657_ == 0)
{
lean_ctor_set(v___x_1656_, 0, v___x_1658_);
v___x_1660_ = v___x_1656_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1661_; 
v_reuseFailAlloc_1661_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1661_, 0, v___x_1658_);
v___x_1660_ = v_reuseFailAlloc_1661_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
v___y_1644_ = v___x_1660_;
goto v___jp_1643_;
}
}
}
}
else
{
lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1673_; 
lean_inc(v_val_1650_);
v_isSharedCheck_1673_ = !lean_is_exclusive(v_v_1640_);
if (v_isSharedCheck_1673_ == 0)
{
lean_object* v_unused_1674_; lean_object* v_unused_1675_; 
v_unused_1674_ = lean_ctor_get(v_v_1640_, 1);
lean_dec(v_unused_1674_);
v_unused_1675_ = lean_ctor_get(v_v_1640_, 0);
lean_dec(v_unused_1675_);
v___x_1664_ = v_v_1640_;
v_isShared_1665_ = v_isSharedCheck_1673_;
goto v_resetjp_1663_;
}
else
{
lean_dec(v_v_1640_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1673_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1666_, 0, v_val_1650_);
v___x_1667_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(v_keys_1625_, v_v_1626_, v___x_1666_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v___x_1668_; 
lean_del_object(v___x_1664_);
lean_dec(v_x_1630_);
v___x_1668_ = lean_box(2);
v___y_1644_ = v___x_1668_;
goto v___jp_1643_;
}
else
{
lean_object* v_val_1669_; lean_object* v___x_1671_; 
v_val_1669_ = lean_ctor_get(v___x_1667_, 0);
lean_inc(v_val_1669_);
lean_dec_ref_known(v___x_1667_, 1);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 1, v_val_1669_);
lean_ctor_set(v___x_1664_, 0, v_x_1630_);
v___x_1671_ = v___x_1664_;
goto v_reusejp_1670_;
}
else
{
lean_object* v_reuseFailAlloc_1672_; 
v_reuseFailAlloc_1672_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1672_, 0, v_x_1630_);
lean_ctor_set(v_reuseFailAlloc_1672_, 1, v_val_1669_);
v___x_1671_ = v_reuseFailAlloc_1672_;
goto v_reusejp_1670_;
}
v_reusejp_1670_:
{
v___y_1644_ = v___x_1671_;
goto v___jp_1643_;
}
}
}
}
}
case 1:
{
lean_object* v_node_1676_; lean_object* v___x_1678_; uint8_t v_isShared_1679_; uint8_t v_isSharedCheck_1699_; 
v_node_1676_ = lean_ctor_get(v_v_1640_, 0);
v_isSharedCheck_1699_ = !lean_is_exclusive(v_v_1640_);
if (v_isSharedCheck_1699_ == 0)
{
v___x_1678_ = v_v_1640_;
v_isShared_1679_ = v_isSharedCheck_1699_;
goto v_resetjp_1677_;
}
else
{
lean_inc(v_node_1676_);
lean_dec(v_v_1640_);
v___x_1678_ = lean_box(0);
v_isShared_1679_ = v_isSharedCheck_1699_;
goto v_resetjp_1677_;
}
v_resetjp_1677_:
{
size_t v___x_1680_; size_t v___x_1681_; size_t v___x_1682_; size_t v___x_1683_; lean_object* v_newNode_1684_; lean_object* v___x_1685_; 
v___x_1680_ = ((size_t)5ULL);
v___x_1681_ = lean_usize_shift_right(v_x_1628_, v___x_1680_);
v___x_1682_ = ((size_t)1ULL);
v___x_1683_ = lean_usize_add(v_x_1629_, v___x_1682_);
v_newNode_1684_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6(v_keys_1625_, v_v_1626_, v_node_1676_, v___x_1681_, v___x_1683_, v_x_1630_);
lean_inc_ref(v_newNode_1684_);
v___x_1685_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1684_);
if (lean_obj_tag(v___x_1685_) == 0)
{
lean_object* v___x_1687_; 
if (v_isShared_1679_ == 0)
{
lean_ctor_set(v___x_1678_, 0, v_newNode_1684_);
v___x_1687_ = v___x_1678_;
goto v_reusejp_1686_;
}
else
{
lean_object* v_reuseFailAlloc_1688_; 
v_reuseFailAlloc_1688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1688_, 0, v_newNode_1684_);
v___x_1687_ = v_reuseFailAlloc_1688_;
goto v_reusejp_1686_;
}
v_reusejp_1686_:
{
v___y_1644_ = v___x_1687_;
goto v___jp_1643_;
}
}
else
{
lean_object* v_val_1689_; lean_object* v_fst_1690_; lean_object* v_snd_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
lean_dec_ref(v_newNode_1684_);
lean_del_object(v___x_1678_);
v_val_1689_ = lean_ctor_get(v___x_1685_, 0);
lean_inc(v_val_1689_);
lean_dec_ref_known(v___x_1685_, 1);
v_fst_1690_ = lean_ctor_get(v_val_1689_, 0);
v_snd_1691_ = lean_ctor_get(v_val_1689_, 1);
v_isSharedCheck_1698_ = !lean_is_exclusive(v_val_1689_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v_val_1689_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_snd_1691_);
lean_inc(v_fst_1690_);
lean_dec(v_val_1689_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_fst_1690_);
lean_ctor_set(v_reuseFailAlloc_1697_, 1, v_snd_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
v___y_1644_ = v___x_1696_;
goto v___jp_1643_;
}
}
}
}
}
default: 
{
lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1700_ = lean_box(0);
v___x_1701_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(v_keys_1625_, v_v_1626_, v___x_1700_);
if (lean_obj_tag(v___x_1701_) == 0)
{
lean_dec(v_x_1630_);
v___y_1644_ = v_v_1640_;
goto v___jp_1643_;
}
else
{
lean_object* v_val_1702_; lean_object* v___x_1703_; 
v_val_1702_ = lean_ctor_get(v___x_1701_, 0);
lean_inc(v_val_1702_);
lean_dec_ref_known(v___x_1701_, 1);
v___x_1703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1703_, 0, v_x_1630_);
lean_ctor_set(v___x_1703_, 1, v_val_1702_);
v___y_1644_ = v___x_1703_;
goto v___jp_1643_;
}
}
}
v___jp_1643_:
{
lean_object* v___x_1645_; lean_object* v___x_1647_; 
v___x_1645_ = lean_array_fset(v_xs_x27_1642_, v_j_1634_, v___y_1644_);
lean_dec(v_j_1634_);
if (v_isShared_1639_ == 0)
{
lean_ctor_set(v___x_1638_, 0, v___x_1645_);
v___x_1647_ = v___x_1638_;
goto v_reusejp_1646_;
}
else
{
lean_object* v_reuseFailAlloc_1648_; 
v_reuseFailAlloc_1648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1648_, 0, v___x_1645_);
v___x_1647_ = v_reuseFailAlloc_1648_;
goto v_reusejp_1646_;
}
v_reusejp_1646_:
{
return v___x_1647_;
}
}
}
}
}
else
{
lean_object* v_ks_1706_; lean_object* v_vs_1707_; lean_object* v___x_1709_; uint8_t v_isShared_1710_; uint8_t v_isSharedCheck_1740_; 
v_ks_1706_ = lean_ctor_get(v_x_1627_, 0);
v_vs_1707_ = lean_ctor_get(v_x_1627_, 1);
v_isSharedCheck_1740_ = !lean_is_exclusive(v_x_1627_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1709_ = v_x_1627_;
v_isShared_1710_ = v_isSharedCheck_1740_;
goto v_resetjp_1708_;
}
else
{
lean_inc(v_vs_1707_);
lean_inc(v_ks_1706_);
lean_dec(v_x_1627_);
v___x_1709_ = lean_box(0);
v_isShared_1710_ = v_isSharedCheck_1740_;
goto v_resetjp_1708_;
}
v_resetjp_1708_:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__20(v_ks_1706_, v_x_1630_);
if (lean_obj_tag(v___x_1711_) == 0)
{
lean_object* v___x_1713_; 
if (v_isShared_1710_ == 0)
{
v___x_1713_ = v___x_1709_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1718_; 
v_reuseFailAlloc_1718_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1718_, 0, v_ks_1706_);
lean_ctor_set(v_reuseFailAlloc_1718_, 1, v_vs_1707_);
v___x_1713_ = v_reuseFailAlloc_1718_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; 
v___x_1714_ = lean_box(0);
v___x_1715_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(v_keys_1625_, v_v_1626_, v___x_1714_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_dec(v_x_1630_);
return v___x_1713_;
}
else
{
lean_object* v_val_1716_; lean_object* v___x_1717_; 
v_val_1716_ = lean_ctor_get(v___x_1715_, 0);
lean_inc(v_val_1716_);
lean_dec_ref_known(v___x_1715_, 1);
v___x_1717_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(v___x_1713_, v_x_1628_, v_x_1629_, v_x_1630_, v_val_1716_);
return v___x_1717_;
}
}
}
else
{
lean_object* v_val_1719_; lean_object* v___x_1721_; uint8_t v_isShared_1722_; uint8_t v_isSharedCheck_1739_; 
v_val_1719_ = lean_ctor_get(v___x_1711_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1711_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1721_ = v___x_1711_;
v_isShared_1722_ = v_isSharedCheck_1739_;
goto v_resetjp_1720_;
}
else
{
lean_inc(v_val_1719_);
lean_dec(v___x_1711_);
v___x_1721_ = lean_box(0);
v_isShared_1722_ = v_isSharedCheck_1739_;
goto v_resetjp_1720_;
}
v_resetjp_1720_:
{
lean_object* v_v_x27_1723_; lean_object* v_keys_1724_; lean_object* v_vals_1725_; lean_object* v___x_1727_; 
v_v_x27_1723_ = lean_array_fget(v_vs_1707_, v_val_1719_);
lean_inc(v_val_1719_);
v_keys_1724_ = l_Array_eraseIdx___redArg(v_ks_1706_, v_val_1719_);
v_vals_1725_ = l_Array_eraseIdx___redArg(v_vs_1707_, v_val_1719_);
if (v_isShared_1722_ == 0)
{
lean_ctor_set(v___x_1721_, 0, v_v_x27_1723_);
v___x_1727_ = v___x_1721_;
goto v_reusejp_1726_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_v_x27_1723_);
v___x_1727_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1726_;
}
v_reusejp_1726_:
{
lean_object* v___x_1728_; 
v___x_1728_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___lam__0(v_keys_1625_, v_v_1626_, v___x_1727_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v___x_1730_; 
lean_dec(v_x_1630_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 1, v_vals_1725_);
lean_ctor_set(v___x_1709_, 0, v_keys_1724_);
v___x_1730_ = v___x_1709_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_keys_1724_);
lean_ctor_set(v_reuseFailAlloc_1731_, 1, v_vals_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
else
{
lean_object* v_val_1732_; lean_object* v_keys_1733_; lean_object* v_vals_1734_; lean_object* v___x_1736_; 
v_val_1732_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_val_1732_);
lean_dec_ref_known(v___x_1728_, 1);
v_keys_1733_ = lean_array_push(v_keys_1724_, v_x_1630_);
v_vals_1734_ = lean_array_push(v_vals_1725_, v_val_1732_);
if (v_isShared_1710_ == 0)
{
lean_ctor_set(v___x_1709_, 1, v_vals_1734_);
lean_ctor_set(v___x_1709_, 0, v_keys_1733_);
v___x_1736_ = v___x_1709_;
goto v_reusejp_1735_;
}
else
{
lean_object* v_reuseFailAlloc_1737_; 
v_reuseFailAlloc_1737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1737_, 0, v_keys_1733_);
lean_ctor_set(v_reuseFailAlloc_1737_, 1, v_vals_1734_);
v___x_1736_ = v_reuseFailAlloc_1737_;
goto v_reusejp_1735_;
}
v_reusejp_1735_:
{
return v___x_1736_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6___boxed(lean_object* v_keys_1741_, lean_object* v_v_1742_, lean_object* v_x_1743_, lean_object* v_x_1744_, lean_object* v_x_1745_, lean_object* v_x_1746_){
_start:
{
size_t v_x_27307__boxed_1747_; size_t v_x_27308__boxed_1748_; lean_object* v_res_1749_; 
v_x_27307__boxed_1747_ = lean_unbox_usize(v_x_1744_);
lean_dec(v_x_1744_);
v_x_27308__boxed_1748_ = lean_unbox_usize(v_x_1745_);
lean_dec(v_x_1745_);
v_res_1749_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6(v_keys_1741_, v_v_1742_, v_x_1743_, v_x_27307__boxed_1747_, v_x_27308__boxed_1748_, v_x_1746_);
lean_dec_ref(v_keys_1741_);
return v_res_1749_;
}
}
static lean_object* _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7___closed__0(void){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lean_Meta_DiscrTree_instInhabited(lean_box(0));
return v___x_1750_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7(lean_object* v_msg_1751_){
_start:
{
lean_object* v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = lean_obj_once(&l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7___closed__0, &l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7___closed__0_once, _init_l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7___closed__0);
v___x_1753_ = lean_panic_fn_borrowed(v___x_1752_, v_msg_1751_);
return v___x_1753_;
}
}
static lean_object* _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__3(void){
_start:
{
lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1757_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__2));
v___x_1758_ = lean_unsigned_to_nat(23u);
v___x_1759_ = lean_unsigned_to_nat(166u);
v___x_1760_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__1));
v___x_1761_ = ((lean_object*)(l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__0));
v___x_1762_ = l_mkPanicMessageWithDecl(v___x_1761_, v___x_1760_, v___x_1759_, v___x_1758_, v___x_1757_);
return v___x_1762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2(lean_object* v_d_1763_, lean_object* v_keys_1764_, lean_object* v_v_1765_){
_start:
{
lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; 
v___x_1766_ = lean_array_get_size(v_keys_1764_);
v___x_1767_ = lean_unsigned_to_nat(0u);
v___x_1768_ = lean_nat_dec_eq(v___x_1766_, v___x_1767_);
if (v___x_1768_ == 0)
{
lean_object* v___x_1769_; lean_object* v_k_1770_; uint64_t v___x_1771_; size_t v_h_1772_; size_t v___x_1773_; lean_object* v___x_1774_; 
v___x_1769_ = lean_box(0);
v_k_1770_ = lean_array_get_borrowed(v___x_1769_, v_keys_1764_, v___x_1767_);
v___x_1771_ = l_Lean_Meta_DiscrTree_Key_hash(v_k_1770_);
v_h_1772_ = lean_uint64_to_usize(v___x_1771_);
v___x_1773_ = ((size_t)1ULL);
lean_inc(v_k_1770_);
v___x_1774_ = l_Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6(v_keys_1764_, v_v_1765_, v_d_1763_, v_h_1772_, v___x_1773_, v_k_1770_);
return v___x_1774_;
}
else
{
lean_object* v___x_1775_; lean_object* v___x_1776_; 
lean_dec_ref(v_v_1765_);
lean_dec_ref(v_d_1763_);
v___x_1775_ = lean_obj_once(&l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__3, &l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__3_once, _init_l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___closed__3);
v___x_1776_ = l_panic___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__7(v___x_1775_);
return v___x_1776_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2___boxed(lean_object* v_d_1777_, lean_object* v_keys_1778_, lean_object* v_v_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2(v_d_1777_, v_keys_1778_, v_v_1779_);
lean_dec_ref(v_keys_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1(lean_object* v_d_1781_, lean_object* v_p_1782_, lean_object* v_v_1783_){
_start:
{
lean_object* v_keys_1784_; lean_object* v___x_1785_; 
v_keys_1784_ = l_Lean_Meta_Sym_Pattern_mkDiscrTreeKeys(v_p_1782_);
v___x_1785_ = l_Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2(v_d_1781_, v_keys_1784_, v_v_1783_);
lean_dec_ref(v_keys_1784_);
return v___x_1785_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_1786_; double v___x_1787_; 
v___x_1786_ = lean_unsigned_to_nat(0u);
v___x_1787_ = lean_float_of_nat(v___x_1786_);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg(lean_object* v_cls_1791_, lean_object* v_msg_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
lean_object* v_ref_1798_; lean_object* v___x_1799_; lean_object* v_a_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1844_; 
v_ref_1798_ = lean_ctor_get(v___y_1795_, 5);
v___x_1799_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkTriplePatternFromExpr_spec__0_spec__0(v_msg_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_);
v_a_1800_ = lean_ctor_get(v___x_1799_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1799_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1802_ = v___x_1799_;
v_isShared_1803_ = v_isSharedCheck_1844_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_a_1800_);
lean_dec(v___x_1799_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1844_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
lean_object* v___x_1804_; lean_object* v_traceState_1805_; lean_object* v_env_1806_; lean_object* v_nextMacroScope_1807_; lean_object* v_ngen_1808_; lean_object* v_auxDeclNGen_1809_; lean_object* v_cache_1810_; lean_object* v_messages_1811_; lean_object* v_infoState_1812_; lean_object* v_snapshotTasks_1813_; lean_object* v___x_1815_; uint8_t v_isShared_1816_; uint8_t v_isSharedCheck_1843_; 
v___x_1804_ = lean_st_ref_take(v___y_1796_);
v_traceState_1805_ = lean_ctor_get(v___x_1804_, 4);
v_env_1806_ = lean_ctor_get(v___x_1804_, 0);
v_nextMacroScope_1807_ = lean_ctor_get(v___x_1804_, 1);
v_ngen_1808_ = lean_ctor_get(v___x_1804_, 2);
v_auxDeclNGen_1809_ = lean_ctor_get(v___x_1804_, 3);
v_cache_1810_ = lean_ctor_get(v___x_1804_, 5);
v_messages_1811_ = lean_ctor_get(v___x_1804_, 6);
v_infoState_1812_ = lean_ctor_get(v___x_1804_, 7);
v_snapshotTasks_1813_ = lean_ctor_get(v___x_1804_, 8);
v_isSharedCheck_1843_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1843_ == 0)
{
v___x_1815_ = v___x_1804_;
v_isShared_1816_ = v_isSharedCheck_1843_;
goto v_resetjp_1814_;
}
else
{
lean_inc(v_snapshotTasks_1813_);
lean_inc(v_infoState_1812_);
lean_inc(v_messages_1811_);
lean_inc(v_cache_1810_);
lean_inc(v_traceState_1805_);
lean_inc(v_auxDeclNGen_1809_);
lean_inc(v_ngen_1808_);
lean_inc(v_nextMacroScope_1807_);
lean_inc(v_env_1806_);
lean_dec(v___x_1804_);
v___x_1815_ = lean_box(0);
v_isShared_1816_ = v_isSharedCheck_1843_;
goto v_resetjp_1814_;
}
v_resetjp_1814_:
{
uint64_t v_tid_1817_; lean_object* v_traces_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1842_; 
v_tid_1817_ = lean_ctor_get_uint64(v_traceState_1805_, sizeof(void*)*1);
v_traces_1818_ = lean_ctor_get(v_traceState_1805_, 0);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_traceState_1805_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1820_ = v_traceState_1805_;
v_isShared_1821_ = v_isSharedCheck_1842_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_traces_1818_);
lean_dec(v_traceState_1805_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1842_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1822_; double v___x_1823_; uint8_t v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1832_; 
v___x_1822_ = lean_box(0);
v___x_1823_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__0);
v___x_1824_ = 0;
v___x_1825_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__1));
v___x_1826_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1826_, 0, v_cls_1791_);
lean_ctor_set(v___x_1826_, 1, v___x_1822_);
lean_ctor_set(v___x_1826_, 2, v___x_1825_);
lean_ctor_set_float(v___x_1826_, sizeof(void*)*3, v___x_1823_);
lean_ctor_set_float(v___x_1826_, sizeof(void*)*3 + 8, v___x_1823_);
lean_ctor_set_uint8(v___x_1826_, sizeof(void*)*3 + 16, v___x_1824_);
v___x_1827_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___closed__2));
v___x_1828_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1826_);
lean_ctor_set(v___x_1828_, 1, v_a_1800_);
lean_ctor_set(v___x_1828_, 2, v___x_1827_);
lean_inc(v_ref_1798_);
v___x_1829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1829_, 0, v_ref_1798_);
lean_ctor_set(v___x_1829_, 1, v___x_1828_);
v___x_1830_ = l_Lean_PersistentArray_push___redArg(v_traces_1818_, v___x_1829_);
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 0, v___x_1830_);
v___x_1832_ = v___x_1820_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1841_; 
v_reuseFailAlloc_1841_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1841_, 0, v___x_1830_);
lean_ctor_set_uint64(v_reuseFailAlloc_1841_, sizeof(void*)*1, v_tid_1817_);
v___x_1832_ = v_reuseFailAlloc_1841_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
lean_object* v___x_1834_; 
if (v_isShared_1816_ == 0)
{
lean_ctor_set(v___x_1815_, 4, v___x_1832_);
v___x_1834_ = v___x_1815_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v_env_1806_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v_nextMacroScope_1807_);
lean_ctor_set(v_reuseFailAlloc_1840_, 2, v_ngen_1808_);
lean_ctor_set(v_reuseFailAlloc_1840_, 3, v_auxDeclNGen_1809_);
lean_ctor_set(v_reuseFailAlloc_1840_, 4, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1840_, 5, v_cache_1810_);
lean_ctor_set(v_reuseFailAlloc_1840_, 6, v_messages_1811_);
lean_ctor_set(v_reuseFailAlloc_1840_, 7, v_infoState_1812_);
lean_ctor_set(v_reuseFailAlloc_1840_, 8, v_snapshotTasks_1813_);
v___x_1834_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1835_ = lean_st_ref_set(v___y_1796_, v___x_1834_);
v___x_1836_ = lean_box(0);
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 0, v___x_1836_);
v___x_1838_ = v___x_1802_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1836_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg___boxed(lean_object* v_cls_1845_, lean_object* v_msg_1846_, lean_object* v___y_1847_, lean_object* v___y_1848_, lean_object* v___y_1849_, lean_object* v___y_1850_, lean_object* v___y_1851_){
_start:
{
lean_object* v_res_1852_; 
v_res_1852_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg(v_cls_1845_, v_msg_1846_, v___y_1847_, v___y_1848_, v___y_1849_, v___y_1850_);
lean_dec(v___y_1850_);
lean_dec_ref(v___y_1849_);
lean_dec(v___y_1848_);
lean_dec_ref(v___y_1847_);
return v_res_1852_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6(void){
_start:
{
lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3));
v___x_1865_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__5));
v___x_1866_ = l_Lean_Name_append(v___x_1865_, v___x_1864_);
return v___x_1866_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__8(void){
_start:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__7));
v___x_1869_ = l_Lean_stringToMessageData(v___x_1868_);
return v___x_1869_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10(void){
_start:
{
lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1871_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__9));
v___x_1872_ = l_Lean_stringToMessageData(v___x_1871_);
return v___x_1872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8(lean_object* v_as_1873_, size_t v_sz_1874_, size_t v_i_1875_, lean_object* v_b_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_){
_start:
{
lean_object* v_a_1885_; uint8_t v___x_1889_; 
v___x_1889_ = lean_usize_dec_lt(v_i_1875_, v_sz_1874_);
if (v___x_1889_ == 0)
{
lean_object* v___x_1890_; 
v___x_1890_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1890_, 0, v_b_1876_);
return v___x_1890_;
}
else
{
lean_object* v_a_1891_; lean_object* v_origin_1892_; 
v_a_1891_ = lean_array_uget_borrowed(v_as_1873_, v_i_1875_);
v_origin_1892_ = lean_ctor_get(v_a_1891_, 4);
if (lean_obj_tag(v_origin_1892_) == 0)
{
lean_object* v_priority_1893_; lean_object* v_declName_1894_; lean_object* v___x_1895_; 
v_priority_1893_ = lean_ctor_get(v_a_1891_, 3);
v_declName_1894_ = lean_ctor_get(v_origin_1892_, 0);
lean_inc(v_priority_1893_);
lean_inc(v_declName_1894_);
v___x_1895_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f(v_declName_1894_, v_priority_1893_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_);
if (lean_obj_tag(v___x_1895_) == 0)
{
lean_object* v_a_1896_; 
v_a_1896_ = lean_ctor_get(v___x_1895_, 0);
lean_inc(v_a_1896_);
lean_dec_ref_known(v___x_1895_, 1);
if (lean_obj_tag(v_a_1896_) == 1)
{
lean_object* v_val_1897_; lean_object* v_pattern_1898_; lean_object* v___x_1899_; 
v_val_1897_ = lean_ctor_get(v_a_1896_, 0);
lean_inc(v_val_1897_);
lean_dec_ref_known(v_a_1896_, 1);
v_pattern_1898_ = lean_ctor_get(v_val_1897_, 0);
lean_inc_ref(v_pattern_1898_);
v___x_1899_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1(v_b_1876_, v_pattern_1898_, v_val_1897_);
v_a_1885_ = v___x_1899_;
goto v___jp_1884_;
}
else
{
lean_dec(v_a_1896_);
v_a_1885_ = v_b_1876_;
goto v___jp_1884_;
}
}
else
{
lean_object* v_a_1900_; lean_object* v___x_1902_; uint8_t v_isShared_1903_; uint8_t v_isSharedCheck_1933_; 
v_a_1900_ = lean_ctor_get(v___x_1895_, 0);
v_isSharedCheck_1933_ = !lean_is_exclusive(v___x_1895_);
if (v_isSharedCheck_1933_ == 0)
{
v___x_1902_ = v___x_1895_;
v_isShared_1903_ = v_isSharedCheck_1933_;
goto v_resetjp_1901_;
}
else
{
lean_inc(v_a_1900_);
lean_dec(v___x_1895_);
v___x_1902_ = lean_box(0);
v_isShared_1903_ = v_isSharedCheck_1933_;
goto v_resetjp_1901_;
}
v_resetjp_1901_:
{
uint8_t v___y_1905_; uint8_t v___x_1931_; 
v___x_1931_ = l_Lean_Exception_isInterrupt(v_a_1900_);
if (v___x_1931_ == 0)
{
uint8_t v___x_1932_; 
lean_inc(v_a_1900_);
v___x_1932_ = l_Lean_Exception_isRuntime(v_a_1900_);
v___y_1905_ = v___x_1932_;
goto v___jp_1904_;
}
else
{
v___y_1905_ = v___x_1931_;
goto v___jp_1904_;
}
v___jp_1904_:
{
if (v___y_1905_ == 0)
{
lean_object* v_options_1906_; uint8_t v_hasTrace_1907_; 
lean_del_object(v___x_1902_);
v_options_1906_ = lean_ctor_get(v___y_1881_, 2);
v_hasTrace_1907_ = lean_ctor_get_uint8(v_options_1906_, sizeof(void*)*1);
if (v_hasTrace_1907_ == 0)
{
lean_dec(v_a_1900_);
v_a_1885_ = v_b_1876_;
goto v___jp_1884_;
}
else
{
lean_object* v_inheritedTraceOptions_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; uint8_t v___x_1911_; 
v_inheritedTraceOptions_1908_ = lean_ctor_get(v___y_1881_, 13);
v___x_1909_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3));
v___x_1910_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6);
v___x_1911_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1908_, v_options_1906_, v___x_1910_);
if (v___x_1911_ == 0)
{
lean_dec(v_a_1900_);
v_a_1885_ = v_b_1876_;
goto v___jp_1884_;
}
else
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1912_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__8, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__8_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__8);
lean_inc(v_declName_1894_);
v___x_1913_ = l_Lean_MessageData_ofName(v_declName_1894_);
v___x_1914_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1912_);
lean_ctor_set(v___x_1914_, 1, v___x_1913_);
v___x_1915_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10);
v___x_1916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1916_, 0, v___x_1914_);
lean_ctor_set(v___x_1916_, 1, v___x_1915_);
v___x_1917_ = l_Lean_Exception_toMessageData(v_a_1900_);
v___x_1918_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1918_, 0, v___x_1916_);
lean_ctor_set(v___x_1918_, 1, v___x_1917_);
v___x_1919_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg(v___x_1909_, v___x_1918_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_dec_ref_known(v___x_1919_, 1);
v_a_1885_ = v_b_1876_;
goto v___jp_1884_;
}
else
{
lean_object* v_a_1920_; lean_object* v___x_1922_; uint8_t v_isShared_1923_; uint8_t v_isSharedCheck_1927_; 
lean_dec_ref(v_b_1876_);
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1922_ = v___x_1919_;
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
else
{
lean_inc(v_a_1920_);
lean_dec(v___x_1919_);
v___x_1922_ = lean_box(0);
v_isShared_1923_ = v_isSharedCheck_1927_;
goto v_resetjp_1921_;
}
v_resetjp_1921_:
{
lean_object* v___x_1925_; 
if (v_isShared_1923_ == 0)
{
v___x_1925_ = v___x_1922_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1926_; 
v_reuseFailAlloc_1926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1926_, 0, v_a_1920_);
v___x_1925_ = v_reuseFailAlloc_1926_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
return v___x_1925_;
}
}
}
}
}
}
else
{
lean_object* v___x_1929_; 
lean_dec_ref(v_b_1876_);
if (v_isShared_1903_ == 0)
{
v___x_1929_ = v___x_1902_;
goto v_reusejp_1928_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v_a_1900_);
v___x_1929_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1928_;
}
v_reusejp_1928_:
{
return v___x_1929_;
}
}
}
}
}
}
else
{
v_a_1885_ = v_b_1876_;
goto v___jp_1884_;
}
}
v___jp_1884_:
{
size_t v___x_1886_; size_t v___x_1887_; 
v___x_1886_ = ((size_t)1ULL);
v___x_1887_ = lean_usize_add(v_i_1875_, v___x_1886_);
v_i_1875_ = v___x_1887_;
v_b_1876_ = v_a_1885_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___boxed(lean_object* v_as_1934_, lean_object* v_sz_1935_, lean_object* v_i_1936_, lean_object* v_b_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_){
_start:
{
size_t v_sz_boxed_1945_; size_t v_i_boxed_1946_; lean_object* v_res_1947_; 
v_sz_boxed_1945_ = lean_unbox_usize(v_sz_1935_);
lean_dec(v_sz_1935_);
v_i_boxed_1946_ = lean_unbox_usize(v_i_1936_);
lean_dec(v_i_1936_);
v_res_1947_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8(v_as_1934_, v_sz_boxed_1945_, v_i_boxed_1946_, v_b_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v___y_1939_);
lean_dec_ref(v___y_1938_);
lean_dec_ref(v_as_1934_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__16(lean_object* v_a_1948_, lean_object* v_a_1949_){
_start:
{
if (lean_obj_tag(v_a_1948_) == 0)
{
lean_object* v___x_1950_; 
v___x_1950_ = l_List_reverse___redArg(v_a_1949_);
return v___x_1950_;
}
else
{
lean_object* v_head_1951_; lean_object* v_tail_1952_; lean_object* v___x_1954_; uint8_t v_isShared_1955_; uint8_t v_isSharedCheck_1961_; 
v_head_1951_ = lean_ctor_get(v_a_1948_, 0);
v_tail_1952_ = lean_ctor_get(v_a_1948_, 1);
v_isSharedCheck_1961_ = !lean_is_exclusive(v_a_1948_);
if (v_isSharedCheck_1961_ == 0)
{
v___x_1954_ = v_a_1948_;
v_isShared_1955_ = v_isSharedCheck_1961_;
goto v_resetjp_1953_;
}
else
{
lean_inc(v_tail_1952_);
lean_inc(v_head_1951_);
lean_dec(v_a_1948_);
v___x_1954_ = lean_box(0);
v_isShared_1955_ = v_isSharedCheck_1961_;
goto v_resetjp_1953_;
}
v_resetjp_1953_:
{
lean_object* v_fst_1956_; lean_object* v___x_1958_; 
v_fst_1956_ = lean_ctor_get(v_head_1951_, 0);
lean_inc(v_fst_1956_);
lean_dec(v_head_1951_);
if (v_isShared_1955_ == 0)
{
lean_ctor_set(v___x_1954_, 1, v_a_1949_);
lean_ctor_set(v___x_1954_, 0, v_fst_1956_);
v___x_1958_ = v___x_1954_;
goto v_reusejp_1957_;
}
else
{
lean_object* v_reuseFailAlloc_1960_; 
v_reuseFailAlloc_1960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1960_, 0, v_fst_1956_);
lean_ctor_set(v_reuseFailAlloc_1960_, 1, v_a_1949_);
v___x_1958_ = v_reuseFailAlloc_1960_;
goto v_reusejp_1957_;
}
v_reusejp_1957_:
{
v_a_1948_ = v_tail_1952_;
v_a_1949_ = v___x_1958_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg___lam__0(lean_object* v_f_1962_, lean_object* v_x1_1963_, lean_object* v_x2_1964_, lean_object* v_x3_1965_){
_start:
{
lean_object* v___x_1966_; 
v___x_1966_ = lean_apply_3(v_f_1962_, v_x1_1963_, v_x2_1964_, v_x3_1965_);
return v___x_1966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg(lean_object* v_f_1967_, lean_object* v_keys_1968_, lean_object* v_vals_1969_, lean_object* v_i_1970_, lean_object* v_acc_1971_){
_start:
{
lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1972_ = lean_array_get_size(v_keys_1968_);
v___x_1973_ = lean_nat_dec_lt(v_i_1970_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_dec(v_i_1970_);
lean_dec(v_f_1967_);
return v_acc_1971_;
}
else
{
lean_object* v_k_1974_; lean_object* v_v_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v_k_1974_ = lean_array_fget_borrowed(v_keys_1968_, v_i_1970_);
v_v_1975_ = lean_array_fget_borrowed(v_vals_1969_, v_i_1970_);
lean_inc(v_f_1967_);
lean_inc(v_v_1975_);
lean_inc(v_k_1974_);
v___x_1976_ = lean_apply_3(v_f_1967_, v_acc_1971_, v_k_1974_, v_v_1975_);
v___x_1977_ = lean_unsigned_to_nat(1u);
v___x_1978_ = lean_nat_add(v_i_1970_, v___x_1977_);
lean_dec(v_i_1970_);
v_i_1970_ = v___x_1978_;
v_acc_1971_ = v___x_1976_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg___boxed(lean_object* v_f_1980_, lean_object* v_keys_1981_, lean_object* v_vals_1982_, lean_object* v_i_1983_, lean_object* v_acc_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg(v_f_1980_, v_keys_1981_, v_vals_1982_, v_i_1983_, v_acc_1984_);
lean_dec_ref(v_vals_1982_);
lean_dec_ref(v_keys_1981_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(lean_object* v_f_1986_, lean_object* v_x_1987_, lean_object* v_x_1988_){
_start:
{
if (lean_obj_tag(v_x_1987_) == 0)
{
lean_object* v_es_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; uint8_t v___x_1992_; 
v_es_1989_ = lean_ctor_get(v_x_1987_, 0);
v___x_1990_ = lean_unsigned_to_nat(0u);
v___x_1991_ = lean_array_get_size(v_es_1989_);
v___x_1992_ = lean_nat_dec_lt(v___x_1990_, v___x_1991_);
if (v___x_1992_ == 0)
{
lean_dec(v_f_1986_);
return v_x_1988_;
}
else
{
uint8_t v___x_1993_; 
v___x_1993_ = lean_nat_dec_le(v___x_1991_, v___x_1991_);
if (v___x_1993_ == 0)
{
if (v___x_1992_ == 0)
{
lean_dec(v_f_1986_);
return v_x_1988_;
}
else
{
size_t v___x_1994_; size_t v___x_1995_; lean_object* v___x_1996_; 
v___x_1994_ = ((size_t)0ULL);
v___x_1995_ = lean_usize_of_nat(v___x_1991_);
v___x_1996_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg(v_f_1986_, v_es_1989_, v___x_1994_, v___x_1995_, v_x_1988_);
return v___x_1996_;
}
}
else
{
size_t v___x_1997_; size_t v___x_1998_; lean_object* v___x_1999_; 
v___x_1997_ = ((size_t)0ULL);
v___x_1998_ = lean_usize_of_nat(v___x_1991_);
v___x_1999_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg(v_f_1986_, v_es_1989_, v___x_1997_, v___x_1998_, v_x_1988_);
return v___x_1999_;
}
}
}
else
{
lean_object* v_ks_2000_; lean_object* v_vs_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; 
v_ks_2000_ = lean_ctor_get(v_x_1987_, 0);
v_vs_2001_ = lean_ctor_get(v_x_1987_, 1);
v___x_2002_ = lean_unsigned_to_nat(0u);
v___x_2003_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg(v_f_1986_, v_ks_2000_, v_vs_2001_, v___x_2002_, v_x_1988_);
return v___x_2003_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg(lean_object* v_f_2004_, lean_object* v_as_2005_, size_t v_i_2006_, size_t v_stop_2007_, lean_object* v_b_2008_){
_start:
{
lean_object* v___y_2010_; uint8_t v___x_2014_; 
v___x_2014_ = lean_usize_dec_eq(v_i_2006_, v_stop_2007_);
if (v___x_2014_ == 0)
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_array_uget_borrowed(v_as_2005_, v_i_2006_);
switch(lean_obj_tag(v___x_2015_))
{
case 0:
{
lean_object* v_key_2016_; lean_object* v_val_2017_; lean_object* v___x_2018_; 
v_key_2016_ = lean_ctor_get(v___x_2015_, 0);
v_val_2017_ = lean_ctor_get(v___x_2015_, 1);
lean_inc(v_f_2004_);
lean_inc(v_val_2017_);
lean_inc(v_key_2016_);
v___x_2018_ = lean_apply_3(v_f_2004_, v_b_2008_, v_key_2016_, v_val_2017_);
v___y_2010_ = v___x_2018_;
goto v___jp_2009_;
}
case 1:
{
lean_object* v_node_2019_; lean_object* v___x_2020_; 
v_node_2019_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_f_2004_);
v___x_2020_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2004_, v_node_2019_, v_b_2008_);
v___y_2010_ = v___x_2020_;
goto v___jp_2009_;
}
default: 
{
v___y_2010_ = v_b_2008_;
goto v___jp_2009_;
}
}
}
else
{
lean_dec(v_f_2004_);
return v_b_2008_;
}
v___jp_2009_:
{
size_t v___x_2011_; size_t v___x_2012_; 
v___x_2011_ = ((size_t)1ULL);
v___x_2012_ = lean_usize_add(v_i_2006_, v___x_2011_);
v_i_2006_ = v___x_2012_;
v_b_2008_ = v___y_2010_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg___boxed(lean_object* v_f_2021_, lean_object* v_as_2022_, lean_object* v_i_2023_, lean_object* v_stop_2024_, lean_object* v_b_2025_){
_start:
{
size_t v_i_boxed_2026_; size_t v_stop_boxed_2027_; lean_object* v_res_2028_; 
v_i_boxed_2026_ = lean_unbox_usize(v_i_2023_);
lean_dec(v_i_2023_);
v_stop_boxed_2027_ = lean_unbox_usize(v_stop_2024_);
lean_dec(v_stop_2024_);
v_res_2028_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg(v_f_2021_, v_as_2022_, v_i_boxed_2026_, v_stop_boxed_2027_, v_b_2025_);
lean_dec_ref(v_as_2022_);
return v_res_2028_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg___boxed(lean_object* v_f_2029_, lean_object* v_x_2030_, lean_object* v_x_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2029_, v_x_2030_, v_x_2031_);
lean_dec_ref(v_x_2030_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg(lean_object* v_map_2033_, lean_object* v_f_2034_, lean_object* v_init_2035_){
_start:
{
lean_object* v___f_2036_; lean_object* v___x_2037_; 
v___f_2036_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2036_, 0, v_f_2034_);
v___x_2037_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v___f_2036_, v_map_2033_, v_init_2035_);
return v___x_2037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg___boxed(lean_object* v_map_2038_, lean_object* v_f_2039_, lean_object* v_init_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg(v_map_2038_, v_f_2039_, v_init_2040_);
lean_dec_ref(v_map_2038_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___lam__0(lean_object* v_ps_2042_, lean_object* v_k_2043_, lean_object* v_v_2044_){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2045_, 0, v_k_2043_);
lean_ctor_set(v___x_2045_, 1, v_v_2044_);
v___x_2046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
lean_ctor_set(v___x_2046_, 1, v_ps_2042_);
return v___x_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg(lean_object* v_m_2048_){
_start:
{
lean_object* v___f_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; 
v___f_2049_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___closed__0));
v___x_2050_ = lean_box(0);
v___x_2051_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg(v_m_2048_, v___f_2049_, v___x_2050_);
return v___x_2051_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg___boxed(lean_object* v_m_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg(v_m_2052_);
lean_dec_ref(v_m_2052_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9(lean_object* v_s_2054_){
_start:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
v___x_2055_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg(v_s_2054_);
v___x_2056_ = lean_box(0);
v___x_2057_ = l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__16(v___x_2055_, v___x_2056_);
return v___x_2057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9___boxed(lean_object* v_s_2058_){
_start:
{
lean_object* v_res_2059_; 
v_res_2059_ = l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9(v_s_2058_);
lean_dec_ref(v_s_2058_);
return v_res_2059_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__1(void){
_start:
{
lean_object* v___x_2061_; lean_object* v___x_2062_; 
v___x_2061_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__0));
v___x_2062_ = l_Lean_stringToMessageData(v___x_2061_);
return v___x_2062_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__3(void){
_start:
{
lean_object* v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__2));
v___x_2065_ = l_Lean_stringToMessageData(v___x_2064_);
return v___x_2065_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__5(void){
_start:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; 
v___x_2067_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__4));
v___x_2068_ = l_Lean_stringToMessageData(v___x_2067_);
return v___x_2068_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__7(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
v___x_2070_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__6));
v___x_2071_ = l_Lean_stringToMessageData(v___x_2070_);
return v___x_2071_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__9(void){
_start:
{
lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__8));
v___x_2074_ = l_Lean_stringToMessageData(v___x_2073_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7(lean_object* v_as_2075_, size_t v_sz_2076_, size_t v_i_2077_, lean_object* v_b_2078_, lean_object* v___y_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_){
_start:
{
lean_object* v_a_2087_; uint8_t v___x_2091_; 
v___x_2091_ = lean_usize_dec_lt(v_i_2077_, v_sz_2076_);
if (v___x_2091_ == 0)
{
lean_object* v___x_2092_; 
v___x_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2092_, 0, v_b_2078_);
return v___x_2092_;
}
else
{
lean_object* v_a_2093_; lean_object* v_proof_2094_; lean_object* v_priority_2095_; lean_object* v___x_2096_; 
v_a_2093_ = lean_array_uget_borrowed(v_as_2075_, v_i_2077_);
v_proof_2094_ = lean_ctor_get(v_a_2093_, 2);
v_priority_2095_ = lean_ctor_get(v_a_2093_, 4);
lean_inc(v_priority_2095_);
lean_inc_ref(v_proof_2094_);
v___x_2096_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew(v_proof_2094_, v_priority_2095_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
if (lean_obj_tag(v_a_2097_) == 1)
{
lean_object* v_val_2098_; lean_object* v_pattern_2099_; lean_object* v___x_2100_; 
v_val_2098_ = lean_ctor_get(v_a_2097_, 0);
lean_inc(v_val_2098_);
lean_dec_ref_known(v_a_2097_, 1);
v_pattern_2099_ = lean_ctor_get(v_val_2098_, 0);
lean_inc_ref(v_pattern_2099_);
v___x_2100_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1(v_b_2078_, v_pattern_2099_, v_val_2098_);
v_a_2087_ = v___x_2100_;
goto v___jp_2086_;
}
else
{
lean_object* v___x_2101_; lean_object* v___y_2103_; 
lean_dec(v_a_2097_);
v___x_2101_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__1);
switch(lean_obj_tag(v_proof_2094_))
{
case 0:
{
lean_object* v_declName_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v_declName_2114_ = lean_ctor_get(v_proof_2094_, 0);
v___x_2115_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__3);
lean_inc(v_declName_2114_);
v___x_2116_ = l_Lean_MessageData_ofName(v_declName_2114_);
v___x_2117_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2117_, 0, v___x_2115_);
lean_ctor_set(v___x_2117_, 1, v___x_2116_);
v___y_2103_ = v___x_2117_;
goto v___jp_2102_;
}
case 1:
{
lean_object* v_fvarId_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; 
v_fvarId_2118_ = lean_ctor_get(v_proof_2094_, 0);
v___x_2119_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__5, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__5_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__5);
lean_inc(v_fvarId_2118_);
v___x_2120_ = l_Lean_mkFVar(v_fvarId_2118_);
v___x_2121_ = l_Lean_MessageData_ofExpr(v___x_2120_);
v___x_2122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2119_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___y_2103_ = v___x_2122_;
goto v___jp_2102_;
}
default: 
{
lean_object* v_ref_2123_; lean_object* v_proof_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; 
v_ref_2123_ = lean_ctor_get(v_proof_2094_, 1);
v_proof_2124_ = lean_ctor_get(v_proof_2094_, 2);
v___x_2125_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__7, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__7_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__7);
lean_inc(v_ref_2123_);
v___x_2126_ = l_Lean_MessageData_ofSyntax(v_ref_2123_);
v___x_2127_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2125_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__9, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__9_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___closed__9);
v___x_2129_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2127_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
lean_inc_ref(v_proof_2124_);
v___x_2130_ = l_Lean_MessageData_ofExpr(v_proof_2124_);
v___x_2131_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2129_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___y_2103_ = v___x_2131_;
goto v___jp_2102_;
}
}
v___jp_2102_:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; 
v___x_2104_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2104_, 0, v___x_2101_);
lean_ctor_set(v___x_2104_, 1, v___y_2103_);
v___x_2105_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__1___redArg(v___x_2104_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_);
if (lean_obj_tag(v___x_2105_) == 0)
{
lean_dec_ref_known(v___x_2105_, 1);
v_a_2087_ = v_b_2078_;
goto v___jp_2086_;
}
else
{
lean_object* v_a_2106_; lean_object* v___x_2108_; uint8_t v_isShared_2109_; uint8_t v_isSharedCheck_2113_; 
lean_dec_ref(v_b_2078_);
v_a_2106_ = lean_ctor_get(v___x_2105_, 0);
v_isSharedCheck_2113_ = !lean_is_exclusive(v___x_2105_);
if (v_isSharedCheck_2113_ == 0)
{
v___x_2108_ = v___x_2105_;
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
else
{
lean_inc(v_a_2106_);
lean_dec(v___x_2105_);
v___x_2108_ = lean_box(0);
v_isShared_2109_ = v_isSharedCheck_2113_;
goto v_resetjp_2107_;
}
v_resetjp_2107_:
{
lean_object* v___x_2111_; 
if (v_isShared_2109_ == 0)
{
v___x_2111_ = v___x_2108_;
goto v_reusejp_2110_;
}
else
{
lean_object* v_reuseFailAlloc_2112_; 
v_reuseFailAlloc_2112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2112_, 0, v_a_2106_);
v___x_2111_ = v_reuseFailAlloc_2112_;
goto v_reusejp_2110_;
}
v_reusejp_2110_:
{
return v___x_2111_;
}
}
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec_ref(v_b_2078_);
v_a_2132_ = lean_ctor_get(v___x_2096_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2096_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2096_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
v___x_2137_ = v_reuseFailAlloc_2138_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
return v___x_2137_;
}
}
}
}
v___jp_2086_:
{
size_t v___x_2088_; size_t v___x_2089_; 
v___x_2088_ = ((size_t)1ULL);
v___x_2089_ = lean_usize_add(v_i_2077_, v___x_2088_);
v_i_2077_ = v___x_2089_;
v_b_2078_ = v_a_2087_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7___boxed(lean_object* v_as_2140_, lean_object* v_sz_2141_, lean_object* v_i_2142_, lean_object* v_b_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
size_t v_sz_boxed_2151_; size_t v_i_boxed_2152_; lean_object* v_res_2153_; 
v_sz_boxed_2151_ = lean_unbox_usize(v_sz_2141_);
lean_dec(v_sz_2141_);
v_i_boxed_2152_ = lean_unbox_usize(v_i_2142_);
lean_dec(v_i_2142_);
v_res_2153_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7(v_as_2140_, v_sz_boxed_2151_, v_i_boxed_2152_, v_b_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec_ref(v___y_2144_);
lean_dec_ref(v_as_2140_);
return v_res_2153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg(lean_object* v_keys_2154_, lean_object* v_vals_2155_, lean_object* v_i_2156_, lean_object* v_k_2157_){
_start:
{
lean_object* v___x_2158_; uint8_t v___x_2159_; 
v___x_2158_ = lean_array_get_size(v_keys_2154_);
v___x_2159_ = lean_nat_dec_lt(v_i_2156_, v___x_2158_);
if (v___x_2159_ == 0)
{
lean_object* v___x_2160_; 
lean_dec(v_i_2156_);
v___x_2160_ = lean_box(0);
return v___x_2160_;
}
else
{
lean_object* v_k_x27_2161_; uint8_t v___x_2162_; 
v_k_x27_2161_ = lean_array_fget_borrowed(v_keys_2154_, v_i_2156_);
v___x_2162_ = lean_name_eq(v_k_2157_, v_k_x27_2161_);
if (v___x_2162_ == 0)
{
lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2163_ = lean_unsigned_to_nat(1u);
v___x_2164_ = lean_nat_add(v_i_2156_, v___x_2163_);
lean_dec(v_i_2156_);
v_i_2156_ = v___x_2164_;
goto _start;
}
else
{
lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2166_ = lean_array_fget_borrowed(v_vals_2155_, v_i_2156_);
lean_dec(v_i_2156_);
lean_inc(v___x_2166_);
v___x_2167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
return v___x_2167_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg___boxed(lean_object* v_keys_2168_, lean_object* v_vals_2169_, lean_object* v_i_2170_, lean_object* v_k_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg(v_keys_2168_, v_vals_2169_, v_i_2170_, v_k_2171_);
lean_dec(v_k_2171_);
lean_dec_ref(v_vals_2169_);
lean_dec_ref(v_keys_2168_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(lean_object* v_x_2173_, size_t v_x_2174_, lean_object* v_x_2175_){
_start:
{
if (lean_obj_tag(v_x_2173_) == 0)
{
lean_object* v_es_2176_; lean_object* v___x_2177_; size_t v___x_2178_; size_t v___x_2179_; lean_object* v_j_2180_; lean_object* v___x_2181_; 
v_es_2176_ = lean_ctor_get(v_x_2173_, 0);
v___x_2177_ = lean_box(2);
v___x_2178_ = ((size_t)31ULL);
v___x_2179_ = lean_usize_land(v_x_2174_, v___x_2178_);
v_j_2180_ = lean_usize_to_nat(v___x_2179_);
v___x_2181_ = lean_array_get_borrowed(v___x_2177_, v_es_2176_, v_j_2180_);
lean_dec(v_j_2180_);
switch(lean_obj_tag(v___x_2181_))
{
case 0:
{
lean_object* v_key_2182_; lean_object* v_val_2183_; uint8_t v___x_2184_; 
v_key_2182_ = lean_ctor_get(v___x_2181_, 0);
v_val_2183_ = lean_ctor_get(v___x_2181_, 1);
v___x_2184_ = lean_name_eq(v_x_2175_, v_key_2182_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; 
v___x_2185_ = lean_box(0);
return v___x_2185_;
}
else
{
lean_object* v___x_2186_; 
lean_inc(v_val_2183_);
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v_val_2183_);
return v___x_2186_;
}
}
case 1:
{
lean_object* v_node_2187_; size_t v___x_2188_; size_t v___x_2189_; 
v_node_2187_ = lean_ctor_get(v___x_2181_, 0);
v___x_2188_ = ((size_t)5ULL);
v___x_2189_ = lean_usize_shift_right(v_x_2174_, v___x_2188_);
v_x_2173_ = v_node_2187_;
v_x_2174_ = v___x_2189_;
goto _start;
}
default: 
{
lean_object* v___x_2191_; 
v___x_2191_ = lean_box(0);
return v___x_2191_;
}
}
}
else
{
lean_object* v_ks_2192_; lean_object* v_vs_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; 
v_ks_2192_ = lean_ctor_get(v_x_2173_, 0);
v_vs_2193_ = lean_ctor_get(v_x_2173_, 1);
v___x_2194_ = lean_unsigned_to_nat(0u);
v___x_2195_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg(v_ks_2192_, v_vs_2193_, v___x_2194_, v_x_2175_);
return v___x_2195_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg___boxed(lean_object* v_x_2196_, lean_object* v_x_2197_, lean_object* v_x_2198_){
_start:
{
size_t v_x_28162__boxed_2199_; lean_object* v_res_2200_; 
v_x_28162__boxed_2199_ = lean_unbox_usize(v_x_2197_);
lean_dec(v_x_2197_);
v_res_2200_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_x_2196_, v_x_28162__boxed_2199_, v_x_2198_);
lean_dec(v_x_2198_);
lean_dec_ref(v_x_2196_);
return v_res_2200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg(lean_object* v_x_2201_, lean_object* v_x_2202_){
_start:
{
uint64_t v___y_2204_; 
if (lean_obj_tag(v_x_2202_) == 0)
{
uint64_t v___x_2207_; 
v___x_2207_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2204_ = v___x_2207_;
goto v___jp_2203_;
}
else
{
uint64_t v_hash_2208_; 
v_hash_2208_ = lean_ctor_get_uint64(v_x_2202_, sizeof(void*)*2);
v___y_2204_ = v_hash_2208_;
goto v___jp_2203_;
}
v___jp_2203_:
{
size_t v___x_2205_; lean_object* v___x_2206_; 
v___x_2205_ = lean_uint64_to_usize(v___y_2204_);
v___x_2206_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_x_2201_, v___x_2205_, v_x_2202_);
return v___x_2206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg___boxed(lean_object* v_x_2209_, lean_object* v_x_2210_){
_start:
{
lean_object* v_res_2211_; 
v_res_2211_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg(v_x_2209_, v_x_2210_);
lean_dec(v_x_2210_);
lean_dec_ref(v_x_2209_);
return v_res_2211_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__1(void){
_start:
{
lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__0));
v___x_2214_ = l_Lean_stringToMessageData(v___x_2213_);
return v___x_2214_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__3(void){
_start:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; 
v___x_2216_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__2));
v___x_2217_ = l_Lean_stringToMessageData(v___x_2216_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3(lean_object* v_a_2218_, lean_object* v_as_2219_, size_t v_sz_2220_, size_t v_i_2221_, lean_object* v_b_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_){
_start:
{
lean_object* v_snd_2231_; uint8_t v___x_2235_; 
v___x_2235_ = lean_usize_dec_lt(v_i_2221_, v_sz_2220_);
if (v___x_2235_ == 0)
{
lean_object* v___x_2236_; 
lean_dec(v_a_2218_);
v___x_2236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2236_, 0, v_b_2222_);
return v___x_2236_;
}
else
{
lean_object* v_a_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v_a_2237_ = lean_array_uget_borrowed(v_as_2219_, v_i_2221_);
v___x_2238_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_2237_);
v___x_2239_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNewFromSimpDecl_x3f(v_a_2237_, v___x_2238_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2239_) == 0)
{
lean_object* v_a_2240_; 
v_a_2240_ = lean_ctor_get(v___x_2239_, 0);
lean_inc(v_a_2240_);
lean_dec_ref_known(v___x_2239_, 1);
if (lean_obj_tag(v_a_2240_) == 1)
{
lean_object* v_val_2241_; lean_object* v_pattern_2242_; lean_object* v___x_2243_; 
v_val_2241_ = lean_ctor_get(v_a_2240_, 0);
lean_inc(v_val_2241_);
lean_dec_ref_known(v_a_2240_, 1);
v_pattern_2242_ = lean_ctor_get(v_val_2241_, 0);
lean_inc_ref(v_pattern_2242_);
v___x_2243_ = l_Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1(v_b_2222_, v_pattern_2242_, v_val_2241_);
v_snd_2231_ = v___x_2243_;
goto v___jp_2230_;
}
else
{
lean_dec(v_a_2240_);
v_snd_2231_ = v_b_2222_;
goto v___jp_2230_;
}
}
else
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2281_; 
v_a_2244_ = lean_ctor_get(v___x_2239_, 0);
v_isSharedCheck_2281_ = !lean_is_exclusive(v___x_2239_);
if (v_isSharedCheck_2281_ == 0)
{
v___x_2246_ = v___x_2239_;
v_isShared_2247_ = v_isSharedCheck_2281_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2239_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2281_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
uint8_t v___y_2249_; uint8_t v___x_2279_; 
v___x_2279_ = l_Lean_Exception_isInterrupt(v_a_2244_);
if (v___x_2279_ == 0)
{
uint8_t v___x_2280_; 
lean_inc(v_a_2244_);
v___x_2280_ = l_Lean_Exception_isRuntime(v_a_2244_);
v___y_2249_ = v___x_2280_;
goto v___jp_2248_;
}
else
{
v___y_2249_ = v___x_2279_;
goto v___jp_2248_;
}
v___jp_2248_:
{
if (v___y_2249_ == 0)
{
lean_object* v_options_2250_; uint8_t v_hasTrace_2251_; 
lean_del_object(v___x_2246_);
v_options_2250_ = lean_ctor_get(v___y_2227_, 2);
v_hasTrace_2251_ = lean_ctor_get_uint8(v_options_2250_, sizeof(void*)*1);
if (v_hasTrace_2251_ == 0)
{
lean_dec(v_a_2244_);
v_snd_2231_ = v_b_2222_;
goto v___jp_2230_;
}
else
{
lean_object* v_inheritedTraceOptions_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; uint8_t v___x_2255_; 
v_inheritedTraceOptions_2252_ = lean_ctor_get(v___y_2227_, 13);
v___x_2253_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__3));
v___x_2254_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__6);
v___x_2255_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2252_, v_options_2250_, v___x_2254_);
if (v___x_2255_ == 0)
{
lean_dec(v_a_2244_);
v_snd_2231_ = v_b_2222_;
goto v___jp_2230_;
}
else
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; 
v___x_2256_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__1);
lean_inc(v_a_2218_);
v___x_2257_ = l_Lean_MessageData_ofName(v_a_2218_);
v___x_2258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2258_, 0, v___x_2256_);
lean_ctor_set(v___x_2258_, 1, v___x_2257_);
v___x_2259_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___closed__3);
v___x_2260_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2258_);
lean_ctor_set(v___x_2260_, 1, v___x_2259_);
lean_inc(v_a_2237_);
v___x_2261_ = l_Lean_MessageData_ofName(v_a_2237_);
v___x_2262_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2260_);
lean_ctor_set(v___x_2262_, 1, v___x_2261_);
v___x_2263_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8___closed__10);
v___x_2264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2262_);
lean_ctor_set(v___x_2264_, 1, v___x_2263_);
v___x_2265_ = l_Lean_Exception_toMessageData(v_a_2244_);
v___x_2266_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2264_);
lean_ctor_set(v___x_2266_, 1, v___x_2265_);
v___x_2267_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg(v___x_2253_, v___x_2266_, v___y_2225_, v___y_2226_, v___y_2227_, v___y_2228_);
if (lean_obj_tag(v___x_2267_) == 0)
{
lean_dec_ref_known(v___x_2267_, 1);
v_snd_2231_ = v_b_2222_;
goto v___jp_2230_;
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_dec_ref(v_b_2222_);
lean_dec(v_a_2218_);
v_a_2268_ = lean_ctor_get(v___x_2267_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2267_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2267_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2267_);
v___x_2270_ = lean_box(0);
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
v_resetjp_2269_:
{
lean_object* v___x_2273_; 
if (v_isShared_2271_ == 0)
{
v___x_2273_ = v___x_2270_;
goto v_reusejp_2272_;
}
else
{
lean_object* v_reuseFailAlloc_2274_; 
v_reuseFailAlloc_2274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2274_, 0, v_a_2268_);
v___x_2273_ = v_reuseFailAlloc_2274_;
goto v_reusejp_2272_;
}
v_reusejp_2272_:
{
return v___x_2273_;
}
}
}
}
}
}
else
{
lean_object* v___x_2277_; 
lean_dec_ref(v_b_2222_);
lean_dec(v_a_2218_);
if (v_isShared_2247_ == 0)
{
v___x_2277_ = v___x_2246_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v_a_2244_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
return v___x_2277_;
}
}
}
}
}
}
v___jp_2230_:
{
size_t v___x_2232_; size_t v___x_2233_; 
v___x_2232_ = ((size_t)1ULL);
v___x_2233_ = lean_usize_add(v_i_2221_, v___x_2232_);
v_i_2221_ = v___x_2233_;
v_b_2222_ = v_snd_2231_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3___boxed(lean_object* v_a_2282_, lean_object* v_as_2283_, lean_object* v_sz_2284_, lean_object* v_i_2285_, lean_object* v_b_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_){
_start:
{
size_t v_sz_boxed_2294_; size_t v_i_boxed_2295_; lean_object* v_res_2296_; 
v_sz_boxed_2294_ = lean_unbox_usize(v_sz_2284_);
lean_dec(v_sz_2284_);
v_i_boxed_2295_ = lean_unbox_usize(v_i_2285_);
lean_dec(v_i_2285_);
v_res_2296_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3(v_a_2282_, v_as_2283_, v_sz_boxed_2294_, v_i_boxed_2295_, v_b_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, v___y_2291_, v___y_2292_);
lean_dec(v___y_2292_);
lean_dec_ref(v___y_2291_);
lean_dec(v___y_2290_);
lean_dec_ref(v___y_2289_);
lean_dec(v___y_2288_);
lean_dec_ref(v___y_2287_);
lean_dec_ref(v_as_2283_);
return v_res_2296_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg(lean_object* v_simpThms_2297_, lean_object* v_as_x27_2298_, lean_object* v_b_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_){
_start:
{
if (lean_obj_tag(v_as_x27_2298_) == 0)
{
lean_object* v___x_2307_; 
v___x_2307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2307_, 0, v_b_2299_);
return v___x_2307_;
}
else
{
lean_object* v_head_2308_; lean_object* v_tail_2309_; lean_object* v_eqThms_2311_; lean_object* v___y_2312_; lean_object* v___y_2313_; lean_object* v___y_2314_; lean_object* v___y_2315_; lean_object* v___y_2316_; lean_object* v___y_2317_; lean_object* v_toUnfoldThms_2323_; lean_object* v___x_2324_; 
v_head_2308_ = lean_ctor_get(v_as_x27_2298_, 0);
v_tail_2309_ = lean_ctor_get(v_as_x27_2298_, 1);
v_toUnfoldThms_2323_ = lean_ctor_get(v_simpThms_2297_, 5);
v___x_2324_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg(v_toUnfoldThms_2323_, v_head_2308_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v___x_2325_; 
lean_inc(v_head_2308_);
v___x_2325_ = l_Lean_Meta_getEqnsFor_x3f(v_head_2308_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
if (lean_obj_tag(v___x_2325_) == 0)
{
lean_object* v_a_2326_; 
v_a_2326_ = lean_ctor_get(v___x_2325_, 0);
lean_inc(v_a_2326_);
lean_dec_ref_known(v___x_2325_, 1);
if (lean_obj_tag(v_a_2326_) == 1)
{
lean_object* v_val_2327_; 
v_val_2327_ = lean_ctor_get(v_a_2326_, 0);
lean_inc(v_val_2327_);
lean_dec_ref_known(v_a_2326_, 1);
v_eqThms_2311_ = v_val_2327_;
v___y_2312_ = v___y_2300_;
v___y_2313_ = v___y_2301_;
v___y_2314_ = v___y_2302_;
v___y_2315_ = v___y_2303_;
v___y_2316_ = v___y_2304_;
v___y_2317_ = v___y_2305_;
goto v___jp_2310_;
}
else
{
lean_dec(v_a_2326_);
v_as_x27_2298_ = v_tail_2309_;
goto _start;
}
}
else
{
lean_object* v_a_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2336_; 
lean_dec_ref(v_b_2299_);
v_a_2329_ = lean_ctor_get(v___x_2325_, 0);
v_isSharedCheck_2336_ = !lean_is_exclusive(v___x_2325_);
if (v_isSharedCheck_2336_ == 0)
{
v___x_2331_ = v___x_2325_;
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_a_2329_);
lean_dec(v___x_2325_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2336_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v___x_2334_; 
if (v_isShared_2332_ == 0)
{
v___x_2334_ = v___x_2331_;
goto v_reusejp_2333_;
}
else
{
lean_object* v_reuseFailAlloc_2335_; 
v_reuseFailAlloc_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2335_, 0, v_a_2329_);
v___x_2334_ = v_reuseFailAlloc_2335_;
goto v_reusejp_2333_;
}
v_reusejp_2333_:
{
return v___x_2334_;
}
}
}
}
else
{
lean_object* v_val_2337_; 
v_val_2337_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_val_2337_);
lean_dec_ref_known(v___x_2324_, 1);
v_eqThms_2311_ = v_val_2337_;
v___y_2312_ = v___y_2300_;
v___y_2313_ = v___y_2301_;
v___y_2314_ = v___y_2302_;
v___y_2315_ = v___y_2303_;
v___y_2316_ = v___y_2304_;
v___y_2317_ = v___y_2305_;
goto v___jp_2310_;
}
v___jp_2310_:
{
size_t v_sz_2318_; size_t v___x_2319_; lean_object* v___x_2320_; 
v_sz_2318_ = lean_array_size(v_eqThms_2311_);
v___x_2319_ = ((size_t)0ULL);
lean_inc(v_head_2308_);
v___x_2320_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__3(v_head_2308_, v_eqThms_2311_, v_sz_2318_, v___x_2319_, v_b_2299_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_);
lean_dec_ref(v_eqThms_2311_);
if (lean_obj_tag(v___x_2320_) == 0)
{
lean_object* v_a_2321_; 
v_a_2321_ = lean_ctor_get(v___x_2320_, 0);
lean_inc(v_a_2321_);
lean_dec_ref_known(v___x_2320_, 1);
v_as_x27_2298_ = v_tail_2309_;
v_b_2299_ = v_a_2321_;
goto _start;
}
else
{
return v___x_2320_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg___boxed(lean_object* v_simpThms_2338_, lean_object* v_as_x27_2339_, lean_object* v_b_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_){
_start:
{
lean_object* v_res_2348_; 
v_res_2348_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg(v_simpThms_2338_, v_as_x27_2339_, v_b_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_, v___y_2345_, v___y_2346_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec(v___y_2344_);
lean_dec_ref(v___y_2343_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v_as_x27_2339_);
lean_dec_ref(v_simpThms_2338_);
return v_res_2348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase(lean_object* v_database_2358_, lean_object* v_simpThms_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_specs_2367_; lean_object* v_erased_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2427_; 
v_specs_2367_ = lean_ctor_get(v_database_2358_, 0);
v_erased_2368_ = lean_ctor_get(v_database_2358_, 1);
v_isSharedCheck_2427_ = !lean_is_exclusive(v_database_2358_);
if (v_isSharedCheck_2427_ == 0)
{
v___x_2370_ = v_database_2358_;
v_isShared_2371_ = v_isSharedCheck_2427_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_erased_2368_);
lean_inc(v_specs_2367_);
lean_dec(v_database_2358_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2427_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___f_2372_; lean_object* v_specs_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; size_t v_sz_2376_; size_t v___x_2377_; lean_object* v___x_2378_; 
v___f_2372_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__1));
v_specs_2373_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0, &l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0_once, _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default___closed__0);
v___x_2374_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__2));
v___x_2375_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v___f_2372_, v_specs_2367_, v___x_2374_);
lean_dec_ref(v_specs_2367_);
v_sz_2376_ = lean_array_size(v___x_2375_);
v___x_2377_ = ((size_t)0ULL);
v___x_2378_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__7(v___x_2375_, v_sz_2376_, v___x_2377_, v_specs_2373_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_);
lean_dec(v___x_2375_);
if (lean_obj_tag(v___x_2378_) == 0)
{
lean_object* v_a_2379_; lean_object* v_post_2380_; lean_object* v_toUnfold_2381_; lean_object* v_erased_2382_; lean_object* v___f_2383_; lean_object* v___x_2384_; size_t v_sz_2385_; lean_object* v___x_2386_; 
v_a_2379_ = lean_ctor_get(v___x_2378_, 0);
lean_inc(v_a_2379_);
lean_dec_ref_known(v___x_2378_, 1);
v_post_2380_ = lean_ctor_get(v_simpThms_2359_, 1);
v_toUnfold_2381_ = lean_ctor_get(v_simpThms_2359_, 3);
v_erased_2382_ = lean_ctor_get(v_simpThms_2359_, 4);
v___f_2383_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__4));
v___x_2384_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v___f_2383_, v_post_2380_, v___x_2374_);
v_sz_2385_ = lean_array_size(v___x_2384_);
v___x_2386_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__8(v___x_2384_, v_sz_2385_, v___x_2377_, v_a_2379_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_);
lean_dec(v___x_2384_);
if (lean_obj_tag(v___x_2386_) == 0)
{
lean_object* v_a_2387_; lean_object* v___x_2388_; lean_object* v___x_2389_; 
v_a_2387_ = lean_ctor_get(v___x_2386_, 0);
lean_inc(v_a_2387_);
lean_dec_ref_known(v___x_2386_, 1);
v___x_2388_ = l_Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9(v_toUnfold_2381_);
v___x_2389_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg(v_simpThms_2359_, v___x_2388_, v_a_2387_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_);
lean_dec(v___x_2388_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2392_; uint8_t v_isShared_2393_; uint8_t v_isSharedCheck_2402_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2402_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2402_ == 0)
{
v___x_2392_ = v___x_2389_;
v_isShared_2393_ = v_isSharedCheck_2402_;
goto v_resetjp_2391_;
}
else
{
lean_inc(v_a_2390_);
lean_dec(v___x_2389_);
v___x_2392_ = lean_box(0);
v_isShared_2393_ = v_isSharedCheck_2402_;
goto v_resetjp_2391_;
}
v_resetjp_2391_:
{
lean_object* v___f_2394_; lean_object* v_erased_2395_; lean_object* v___x_2397_; 
v___f_2394_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___closed__5));
v_erased_2395_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v___f_2394_, v_erased_2382_, v_erased_2368_);
if (v_isShared_2371_ == 0)
{
lean_ctor_set(v___x_2370_, 1, v_erased_2395_);
lean_ctor_set(v___x_2370_, 0, v_a_2390_);
v___x_2397_ = v___x_2370_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2401_; 
v_reuseFailAlloc_2401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2401_, 0, v_a_2390_);
lean_ctor_set(v_reuseFailAlloc_2401_, 1, v_erased_2395_);
v___x_2397_ = v_reuseFailAlloc_2401_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
lean_object* v___x_2399_; 
if (v_isShared_2393_ == 0)
{
lean_ctor_set(v___x_2392_, 0, v___x_2397_);
v___x_2399_ = v___x_2392_;
goto v_reusejp_2398_;
}
else
{
lean_object* v_reuseFailAlloc_2400_; 
v_reuseFailAlloc_2400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2400_, 0, v___x_2397_);
v___x_2399_ = v_reuseFailAlloc_2400_;
goto v_reusejp_2398_;
}
v_reusejp_2398_:
{
return v___x_2399_;
}
}
}
}
else
{
lean_object* v_a_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2410_; 
lean_del_object(v___x_2370_);
lean_dec_ref(v_erased_2368_);
v_a_2403_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2410_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2410_ == 0)
{
v___x_2405_ = v___x_2389_;
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_a_2403_);
lean_dec(v___x_2389_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2410_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v___x_2408_; 
if (v_isShared_2406_ == 0)
{
v___x_2408_ = v___x_2405_;
goto v_reusejp_2407_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_a_2403_);
v___x_2408_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2407_;
}
v_reusejp_2407_:
{
return v___x_2408_;
}
}
}
}
else
{
lean_object* v_a_2411_; lean_object* v___x_2413_; uint8_t v_isShared_2414_; uint8_t v_isSharedCheck_2418_; 
lean_del_object(v___x_2370_);
lean_dec_ref(v_erased_2368_);
v_a_2411_ = lean_ctor_get(v___x_2386_, 0);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2418_ == 0)
{
v___x_2413_ = v___x_2386_;
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
else
{
lean_inc(v_a_2411_);
lean_dec(v___x_2386_);
v___x_2413_ = lean_box(0);
v_isShared_2414_ = v_isSharedCheck_2418_;
goto v_resetjp_2412_;
}
v_resetjp_2412_:
{
lean_object* v___x_2416_; 
if (v_isShared_2414_ == 0)
{
v___x_2416_ = v___x_2413_;
goto v_reusejp_2415_;
}
else
{
lean_object* v_reuseFailAlloc_2417_; 
v_reuseFailAlloc_2417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2417_, 0, v_a_2411_);
v___x_2416_ = v_reuseFailAlloc_2417_;
goto v_reusejp_2415_;
}
v_reusejp_2415_:
{
return v___x_2416_;
}
}
}
}
else
{
lean_object* v_a_2419_; lean_object* v___x_2421_; uint8_t v_isShared_2422_; uint8_t v_isSharedCheck_2426_; 
lean_del_object(v___x_2370_);
lean_dec_ref(v_erased_2368_);
v_a_2419_ = lean_ctor_get(v___x_2378_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v___x_2378_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2421_ = v___x_2378_;
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
else
{
lean_inc(v_a_2419_);
lean_dec(v___x_2378_);
v___x_2421_ = lean_box(0);
v_isShared_2422_ = v_isSharedCheck_2426_;
goto v_resetjp_2420_;
}
v_resetjp_2420_:
{
lean_object* v___x_2424_; 
if (v_isShared_2422_ == 0)
{
v___x_2424_ = v___x_2421_;
goto v_reusejp_2423_;
}
else
{
lean_object* v_reuseFailAlloc_2425_; 
v_reuseFailAlloc_2425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2425_, 0, v_a_2419_);
v___x_2424_ = v_reuseFailAlloc_2425_;
goto v_reusejp_2423_;
}
v_reusejp_2423_:
{
return v___x_2424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___boxed(lean_object* v_database_2428_, lean_object* v_simpThms_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_, lean_object* v_a_2432_, lean_object* v_a_2433_, lean_object* v_a_2434_, lean_object* v_a_2435_, lean_object* v_a_2436_){
_start:
{
lean_object* v_res_2437_; 
v_res_2437_ = l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase(v_database_2428_, v_simpThms_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec_ref(v_a_2430_);
lean_dec_ref(v_simpThms_2429_);
return v_res_2437_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0(lean_object* v_00_u03b2_2438_, lean_object* v_x_2439_, lean_object* v_x_2440_, lean_object* v_x_2441_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0___redArg(v_x_2439_, v_x_2440_, v_x_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2(lean_object* v_cls_2443_, lean_object* v_msg_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___redArg(v_cls_2443_, v_msg_2444_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2___boxed(lean_object* v_cls_2453_, lean_object* v_msg_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_, lean_object* v___y_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_){
_start:
{
lean_object* v_res_2462_; 
v_res_2462_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__2(v_cls_2453_, v_msg_2454_, v___y_2455_, v___y_2456_, v___y_2457_, v___y_2458_, v___y_2459_, v___y_2460_);
lean_dec(v___y_2460_);
lean_dec_ref(v___y_2459_);
lean_dec(v___y_2458_);
lean_dec_ref(v___y_2457_);
lean_dec(v___y_2456_);
lean_dec_ref(v___y_2455_);
return v_res_2462_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4(lean_object* v_00_u03b2_2463_, lean_object* v_x_2464_, lean_object* v_x_2465_){
_start:
{
lean_object* v___x_2466_; 
v___x_2466_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___redArg(v_x_2464_, v_x_2465_);
return v___x_2466_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4___boxed(lean_object* v_00_u03b2_2467_, lean_object* v_x_2468_, lean_object* v_x_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4(v_00_u03b2_2467_, v_x_2468_, v_x_2469_);
lean_dec(v_x_2469_);
lean_dec_ref(v_x_2468_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5(lean_object* v_00_u03c3_2471_, lean_object* v_00_u03b1_2472_, lean_object* v_f_2473_, lean_object* v_x_2474_, lean_object* v_x_2475_){
_start:
{
lean_object* v___x_2476_; 
v___x_2476_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___redArg(v_f_2473_, v_x_2474_, v_x_2475_);
return v___x_2476_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5___boxed(lean_object* v_00_u03c3_2477_, lean_object* v_00_u03b1_2478_, lean_object* v_f_2479_, lean_object* v_x_2480_, lean_object* v_x_2481_){
_start:
{
lean_object* v_res_2482_; 
v_res_2482_ = l_Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5(v_00_u03c3_2477_, v_00_u03b1_2478_, v_f_2479_, v_x_2480_, v_x_2481_);
lean_dec_ref(v_x_2481_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___redArg(lean_object* v_map_2483_, lean_object* v_f_2484_, lean_object* v_init_2485_){
_start:
{
lean_object* v___x_2486_; 
v___x_2486_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2484_, v_map_2483_, v_init_2485_);
return v___x_2486_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___redArg___boxed(lean_object* v_map_2487_, lean_object* v_f_2488_, lean_object* v_init_2489_){
_start:
{
lean_object* v_res_2490_; 
v_res_2490_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___redArg(v_map_2487_, v_f_2488_, v_init_2489_);
lean_dec_ref(v_map_2487_);
return v_res_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6(lean_object* v_00_u03c3_2491_, lean_object* v_00_u03b2_2492_, lean_object* v_map_2493_, lean_object* v_f_2494_, lean_object* v_init_2495_){
_start:
{
lean_object* v___x_2496_; 
v___x_2496_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2494_, v_map_2493_, v_init_2495_);
return v___x_2496_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6___boxed(lean_object* v_00_u03c3_2497_, lean_object* v_00_u03b2_2498_, lean_object* v_map_2499_, lean_object* v_f_2500_, lean_object* v_init_2501_){
_start:
{
lean_object* v_res_2502_; 
v_res_2502_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6(v_00_u03c3_2497_, v_00_u03b2_2498_, v_map_2499_, v_f_2500_, v_init_2501_);
lean_dec_ref(v_map_2499_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10(lean_object* v_simpThms_2503_, lean_object* v_as_2504_, lean_object* v_as_x27_2505_, lean_object* v_b_2506_, lean_object* v_a_2507_, lean_object* v___y_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___redArg(v_simpThms_2503_, v_as_x27_2505_, v_b_2506_, v___y_2508_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10___boxed(lean_object* v_simpThms_2516_, lean_object* v_as_2517_, lean_object* v_as_x27_2518_, lean_object* v_b_2519_, lean_object* v_a_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_, lean_object* v___y_2524_, lean_object* v___y_2525_, lean_object* v___y_2526_, lean_object* v___y_2527_){
_start:
{
lean_object* v_res_2528_; 
v_res_2528_ = l_List_forIn_x27_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__10(v_simpThms_2516_, v_as_2517_, v_as_x27_2518_, v_b_2519_, v_a_2520_, v___y_2521_, v___y_2522_, v___y_2523_, v___y_2524_, v___y_2525_, v___y_2526_);
lean_dec(v___y_2526_);
lean_dec_ref(v___y_2525_);
lean_dec(v___y_2524_);
lean_dec_ref(v___y_2523_);
lean_dec(v___y_2522_);
lean_dec_ref(v___y_2521_);
lean_dec(v_as_x27_2518_);
lean_dec(v_as_2517_);
lean_dec_ref(v_simpThms_2516_);
return v_res_2528_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___redArg(lean_object* v_map_2529_, lean_object* v_f_2530_, lean_object* v_init_2531_){
_start:
{
lean_object* v___x_2532_; 
v___x_2532_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2530_, v_map_2529_, v_init_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___redArg___boxed(lean_object* v_map_2533_, lean_object* v_f_2534_, lean_object* v_init_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___redArg(v_map_2533_, v_f_2534_, v_init_2535_);
lean_dec_ref(v_map_2533_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11(lean_object* v_00_u03c3_2537_, lean_object* v_00_u03b2_2538_, lean_object* v_map_2539_, lean_object* v_f_2540_, lean_object* v_init_2541_){
_start:
{
lean_object* v___x_2542_; 
v___x_2542_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2540_, v_map_2539_, v_init_2541_);
return v___x_2542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11___boxed(lean_object* v_00_u03c3_2543_, lean_object* v_00_u03b2_2544_, lean_object* v_map_2545_, lean_object* v_f_2546_, lean_object* v_init_2547_){
_start:
{
lean_object* v_res_2548_; 
v_res_2548_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__11(v_00_u03c3_2543_, v_00_u03b2_2544_, v_map_2545_, v_f_2546_, v_init_2547_);
lean_dec_ref(v_map_2545_);
return v_res_2548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0(lean_object* v_00_u03b2_2549_, lean_object* v_x_2550_, size_t v_x_2551_, size_t v_x_2552_, lean_object* v_x_2553_, lean_object* v_x_2554_){
_start:
{
lean_object* v___x_2555_; 
v___x_2555_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___redArg(v_x_2550_, v_x_2551_, v_x_2552_, v_x_2553_, v_x_2554_);
return v___x_2555_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2556_, lean_object* v_x_2557_, lean_object* v_x_2558_, lean_object* v_x_2559_, lean_object* v_x_2560_, lean_object* v_x_2561_){
_start:
{
size_t v_x_28671__boxed_2562_; size_t v_x_28672__boxed_2563_; lean_object* v_res_2564_; 
v_x_28671__boxed_2562_ = lean_unbox_usize(v_x_2558_);
lean_dec(v_x_2558_);
v_x_28672__boxed_2563_ = lean_unbox_usize(v_x_2559_);
lean_dec(v_x_2559_);
v_res_2564_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0(v_00_u03b2_2556_, v_x_2557_, v_x_28671__boxed_2562_, v_x_28672__boxed_2563_, v_x_2560_, v_x_2561_);
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6(lean_object* v_00_u03b2_2565_, lean_object* v_x_2566_, size_t v_x_2567_, lean_object* v_x_2568_){
_start:
{
lean_object* v___x_2569_; 
v___x_2569_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___redArg(v_x_2566_, v_x_2567_, v_x_2568_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6___boxed(lean_object* v_00_u03b2_2570_, lean_object* v_x_2571_, lean_object* v_x_2572_, lean_object* v_x_2573_){
_start:
{
size_t v_x_28688__boxed_2574_; lean_object* v_res_2575_; 
v_x_28688__boxed_2574_ = lean_unbox_usize(v_x_2572_);
lean_dec(v_x_2572_);
v_res_2575_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6(v_00_u03b2_2570_, v_x_2571_, v_x_28688__boxed_2574_, v_x_2573_);
lean_dec(v_x_2573_);
lean_dec_ref(v_x_2571_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8(lean_object* v_00_u03b1_2576_, lean_object* v_00_u03c3_2577_, lean_object* v_f_2578_, lean_object* v_as_2579_, size_t v_i_2580_, size_t v_stop_2581_, lean_object* v_b_2582_){
_start:
{
lean_object* v___x_2583_; 
v___x_2583_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___redArg(v_f_2578_, v_as_2579_, v_i_2580_, v_stop_2581_, v_b_2582_);
return v___x_2583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8___boxed(lean_object* v_00_u03b1_2584_, lean_object* v_00_u03c3_2585_, lean_object* v_f_2586_, lean_object* v_as_2587_, lean_object* v_i_2588_, lean_object* v_stop_2589_, lean_object* v_b_2590_){
_start:
{
size_t v_i_boxed_2591_; size_t v_stop_boxed_2592_; lean_object* v_res_2593_; 
v_i_boxed_2591_ = lean_unbox_usize(v_i_2588_);
lean_dec(v_i_2588_);
v_stop_boxed_2592_ = lean_unbox_usize(v_stop_2589_);
lean_dec(v_stop_2589_);
v_res_2593_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__8(v_00_u03b1_2584_, v_00_u03c3_2585_, v_f_2586_, v_as_2587_, v_i_boxed_2591_, v_stop_boxed_2592_, v_b_2590_);
lean_dec_ref(v_as_2587_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9(lean_object* v_00_u03b1_2594_, lean_object* v_00_u03c3_2595_, lean_object* v_f_2596_, lean_object* v_as_2597_, size_t v_i_2598_, size_t v_stop_2599_, lean_object* v_b_2600_){
_start:
{
lean_object* v___x_2601_; 
v___x_2601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___redArg(v_f_2596_, v_as_2597_, v_i_2598_, v_stop_2599_, v_b_2600_);
return v___x_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9___boxed(lean_object* v_00_u03b1_2602_, lean_object* v_00_u03c3_2603_, lean_object* v_f_2604_, lean_object* v_as_2605_, lean_object* v_i_2606_, lean_object* v_stop_2607_, lean_object* v_b_2608_){
_start:
{
size_t v_i_boxed_2609_; size_t v_stop_boxed_2610_; lean_object* v_res_2611_; 
v_i_boxed_2609_ = lean_unbox_usize(v_i_2606_);
lean_dec(v_i_2606_);
v_stop_boxed_2610_ = lean_unbox_usize(v_stop_2607_);
lean_dec(v_stop_2607_);
v_res_2611_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Meta_DiscrTree_Trie_foldValuesM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__5_spec__9(v_00_u03b1_2602_, v_00_u03c3_2603_, v_f_2604_, v_as_2605_, v_i_boxed_2609_, v_stop_boxed_2610_, v_b_2608_);
lean_dec_ref(v_as_2605_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11(lean_object* v_00_u03c3_2612_, lean_object* v_00_u03b1_2613_, lean_object* v_00_u03b2_2614_, lean_object* v_f_2615_, lean_object* v_x_2616_, lean_object* v_x_2617_){
_start:
{
lean_object* v___x_2618_; 
v___x_2618_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2615_, v_x_2616_, v_x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___boxed(lean_object* v_00_u03c3_2619_, lean_object* v_00_u03b1_2620_, lean_object* v_00_u03b2_2621_, lean_object* v_f_2622_, lean_object* v_x_2623_, lean_object* v_x_2624_){
_start:
{
lean_object* v_res_2625_; 
v_res_2625_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11(v_00_u03c3_2619_, v_00_u03b1_2620_, v_00_u03b2_2621_, v_f_2622_, v_x_2623_, v_x_2624_);
lean_dec_ref(v_x_2623_);
return v_res_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15(lean_object* v_00_u03b2_2626_, lean_object* v_m_2627_){
_start:
{
lean_object* v___x_2628_; 
v___x_2628_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___redArg(v_m_2627_);
return v___x_2628_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15___boxed(lean_object* v_00_u03b2_2629_, lean_object* v_m_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15(v_00_u03b2_2629_, v_m_2630_);
lean_dec_ref(v_m_2630_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_2632_, lean_object* v_n_2633_, lean_object* v_k_2634_, lean_object* v_v_2635_){
_start:
{
lean_object* v___x_2636_; 
v___x_2636_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1___redArg(v_n_2633_, v_k_2634_, v_v_2635_);
return v___x_2636_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_2637_, size_t v_depth_2638_, lean_object* v_keys_2639_, lean_object* v_vals_2640_, lean_object* v_heq_2641_, lean_object* v_i_2642_, lean_object* v_entries_2643_){
_start:
{
lean_object* v___x_2644_; 
v___x_2644_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg(v_depth_2638_, v_keys_2639_, v_vals_2640_, v_i_2642_, v_entries_2643_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_2645_, lean_object* v_depth_2646_, lean_object* v_keys_2647_, lean_object* v_vals_2648_, lean_object* v_heq_2649_, lean_object* v_i_2650_, lean_object* v_entries_2651_){
_start:
{
size_t v_depth_boxed_2652_; lean_object* v_res_2653_; 
v_depth_boxed_2652_ = lean_unbox_usize(v_depth_2646_);
lean_dec(v_depth_2646_);
v_res_2653_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2(v_00_u03b2_2645_, v_depth_boxed_2652_, v_keys_2647_, v_vals_2648_, v_heq_2649_, v_i_2650_, v_entries_2651_);
lean_dec_ref(v_vals_2648_);
lean_dec_ref(v_keys_2647_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12(lean_object* v_00_u03b2_2654_, lean_object* v_keys_2655_, lean_object* v_vals_2656_, lean_object* v_heq_2657_, lean_object* v_i_2658_, lean_object* v_k_2659_){
_start:
{
lean_object* v___x_2660_; 
v___x_2660_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___redArg(v_keys_2655_, v_vals_2656_, v_i_2658_, v_k_2659_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12___boxed(lean_object* v_00_u03b2_2661_, lean_object* v_keys_2662_, lean_object* v_vals_2663_, lean_object* v_heq_2664_, lean_object* v_i_2665_, lean_object* v_k_2666_){
_start:
{
lean_object* v_res_2667_; 
v_res_2667_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__4_spec__6_spec__12(v_00_u03b2_2661_, v_keys_2662_, v_vals_2663_, v_heq_2664_, v_i_2665_, v_k_2666_);
lean_dec(v_k_2666_);
lean_dec_ref(v_vals_2663_);
lean_dec_ref(v_keys_2662_);
return v_res_2667_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18(lean_object* v_00_u03b1_2668_, lean_object* v_00_u03b2_2669_, lean_object* v_00_u03c3_2670_, lean_object* v_f_2671_, lean_object* v_as_2672_, size_t v_i_2673_, size_t v_stop_2674_, lean_object* v_b_2675_){
_start:
{
lean_object* v___x_2676_; 
v___x_2676_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___redArg(v_f_2671_, v_as_2672_, v_i_2673_, v_stop_2674_, v_b_2675_);
return v___x_2676_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18___boxed(lean_object* v_00_u03b1_2677_, lean_object* v_00_u03b2_2678_, lean_object* v_00_u03c3_2679_, lean_object* v_f_2680_, lean_object* v_as_2681_, lean_object* v_i_2682_, lean_object* v_stop_2683_, lean_object* v_b_2684_){
_start:
{
size_t v_i_boxed_2685_; size_t v_stop_boxed_2686_; lean_object* v_res_2687_; 
v_i_boxed_2685_ = lean_unbox_usize(v_i_2682_);
lean_dec(v_i_2682_);
v_stop_boxed_2686_ = lean_unbox_usize(v_stop_2683_);
lean_dec(v_stop_2683_);
v_res_2687_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__18(v_00_u03b1_2677_, v_00_u03b2_2678_, v_00_u03c3_2679_, v_f_2680_, v_as_2681_, v_i_boxed_2685_, v_stop_boxed_2686_, v_b_2684_);
lean_dec_ref(v_as_2681_);
return v_res_2687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19(lean_object* v_00_u03c3_2688_, lean_object* v_00_u03b1_2689_, lean_object* v_00_u03b2_2690_, lean_object* v_f_2691_, lean_object* v_keys_2692_, lean_object* v_vals_2693_, lean_object* v_heq_2694_, lean_object* v_i_2695_, lean_object* v_acc_2696_){
_start:
{
lean_object* v___x_2697_; 
v___x_2697_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___redArg(v_f_2691_, v_keys_2692_, v_vals_2693_, v_i_2695_, v_acc_2696_);
return v___x_2697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19___boxed(lean_object* v_00_u03c3_2698_, lean_object* v_00_u03b1_2699_, lean_object* v_00_u03b2_2700_, lean_object* v_f_2701_, lean_object* v_keys_2702_, lean_object* v_vals_2703_, lean_object* v_heq_2704_, lean_object* v_i_2705_, lean_object* v_acc_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11_spec__19(v_00_u03c3_2698_, v_00_u03b1_2699_, v_00_u03b2_2700_, v_f_2701_, v_keys_2702_, v_vals_2703_, v_heq_2704_, v_i_2705_, v_acc_2706_);
lean_dec_ref(v_vals_2703_);
lean_dec_ref(v_keys_2702_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24(lean_object* v_00_u03c3_2708_, lean_object* v_00_u03b2_2709_, lean_object* v_map_2710_, lean_object* v_f_2711_, lean_object* v_init_2712_){
_start:
{
lean_object* v___x_2713_; 
v___x_2713_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___redArg(v_map_2710_, v_f_2711_, v_init_2712_);
return v___x_2713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24___boxed(lean_object* v_00_u03c3_2714_, lean_object* v_00_u03b2_2715_, lean_object* v_map_2716_, lean_object* v_f_2717_, lean_object* v_init_2718_){
_start:
{
lean_object* v_res_2719_; 
v_res_2719_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24(v_00_u03c3_2714_, v_00_u03b2_2715_, v_map_2716_, v_f_2717_, v_init_2718_);
lean_dec_ref(v_map_2716_);
return v_res_2719_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__13(lean_object* v_00_u03b2_2720_, lean_object* v_x_2721_, lean_object* v_x_2722_, lean_object* v_x_2723_, lean_object* v_x_2724_){
_start:
{
lean_object* v___x_2725_; 
v___x_2725_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__1_spec__13___redArg(v_x_2721_, v_x_2722_, v_x_2723_, v_x_2724_);
return v___x_2725_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21(lean_object* v_00_u03b2_2726_, lean_object* v_x_2727_, size_t v_x_2728_, size_t v_x_2729_, lean_object* v_x_2730_, lean_object* v_x_2731_){
_start:
{
lean_object* v___x_2732_; 
v___x_2732_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___redArg(v_x_2727_, v_x_2728_, v_x_2729_, v_x_2730_, v_x_2731_);
return v___x_2732_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21___boxed(lean_object* v_00_u03b2_2733_, lean_object* v_x_2734_, lean_object* v_x_2735_, lean_object* v_x_2736_, lean_object* v_x_2737_, lean_object* v_x_2738_){
_start:
{
size_t v_x_28735__boxed_2739_; size_t v_x_28736__boxed_2740_; lean_object* v_res_2741_; 
v_x_28735__boxed_2739_ = lean_unbox_usize(v_x_2735_);
lean_dec(v_x_2735_);
v_x_28736__boxed_2740_ = lean_unbox_usize(v_x_2736_);
lean_dec(v_x_2736_);
v_res_2741_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21(v_00_u03b2_2733_, v_x_2734_, v_x_28735__boxed_2739_, v_x_28736__boxed_2740_, v_x_2737_, v_x_2738_);
return v_res_2741_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___redArg(lean_object* v_map_2742_, lean_object* v_f_2743_, lean_object* v_init_2744_){
_start:
{
lean_object* v___x_2745_; 
v___x_2745_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2743_, v_map_2742_, v_init_2744_);
return v___x_2745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___redArg___boxed(lean_object* v_map_2746_, lean_object* v_f_2747_, lean_object* v_init_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___redArg(v_map_2746_, v_f_2747_, v_init_2748_);
lean_dec_ref(v_map_2746_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32(lean_object* v_00_u03c3_2750_, lean_object* v_00_u03b2_2751_, lean_object* v_map_2752_, lean_object* v_f_2753_, lean_object* v_init_2754_){
_start:
{
lean_object* v___x_2755_; 
v___x_2755_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__6_spec__11___redArg(v_f_2753_, v_map_2752_, v_init_2754_);
return v___x_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32___boxed(lean_object* v_00_u03c3_2756_, lean_object* v_00_u03b2_2757_, lean_object* v_map_2758_, lean_object* v_f_2759_, lean_object* v_init_2760_){
_start:
{
lean_object* v_res_2761_; 
v_res_2761_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__9_spec__15_spec__24_spec__32(v_00_u03c3_2756_, v_00_u03b2_2757_, v_map_2758_, v_f_2759_, v_init_2760_);
lean_dec_ref(v_map_2758_);
return v_res_2761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27(lean_object* v_x_2762_, lean_object* v_keys_2763_, lean_object* v_v_2764_, lean_object* v_k_2765_, lean_object* v_as_2766_, lean_object* v_k_2767_, lean_object* v_x_2768_, lean_object* v_x_2769_, lean_object* v_x_2770_, lean_object* v_x_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___redArg(v_x_2762_, v_keys_2763_, v_v_2764_, v_k_2765_, v_as_2766_, v_k_2767_, v_x_2768_, v_x_2769_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27___boxed(lean_object* v_x_2773_, lean_object* v_keys_2774_, lean_object* v_v_2775_, lean_object* v_k_2776_, lean_object* v_as_2777_, lean_object* v_k_2778_, lean_object* v_x_2779_, lean_object* v_x_2780_, lean_object* v_x_2781_, lean_object* v_x_2782_){
_start:
{
lean_object* v_res_2783_; 
v_res_2783_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00__private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5_spec__18_spec__27(v_x_2773_, v_keys_2774_, v_v_2775_, v_k_2776_, v_as_2777_, v_k_2778_, v_x_2779_, v_x_2780_, v_x_2781_, v_x_2782_);
lean_dec_ref(v_k_2778_);
lean_dec_ref(v_keys_2774_);
lean_dec(v_x_2773_);
return v_res_2783_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32(lean_object* v_00_u03b2_2784_, lean_object* v_n_2785_, lean_object* v_k_2786_, lean_object* v_v_2787_){
_start:
{
lean_object* v___x_2788_; 
v___x_2788_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32___redArg(v_n_2785_, v_k_2786_, v_v_2787_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33(lean_object* v_00_u03b2_2789_, size_t v_depth_2790_, lean_object* v_keys_2791_, lean_object* v_vals_2792_, lean_object* v_heq_2793_, lean_object* v_i_2794_, lean_object* v_entries_2795_){
_start:
{
lean_object* v___x_2796_; 
v___x_2796_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___redArg(v_depth_2790_, v_keys_2791_, v_vals_2792_, v_i_2794_, v_entries_2795_);
return v___x_2796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33___boxed(lean_object* v_00_u03b2_2797_, lean_object* v_depth_2798_, lean_object* v_keys_2799_, lean_object* v_vals_2800_, lean_object* v_heq_2801_, lean_object* v_i_2802_, lean_object* v_entries_2803_){
_start:
{
size_t v_depth_boxed_2804_; lean_object* v_res_2805_; 
v_depth_boxed_2804_ = lean_unbox_usize(v_depth_2798_);
lean_dec(v_depth_2798_);
v_res_2805_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__33(v_00_u03b2_2797_, v_depth_boxed_2804_, v_keys_2799_, v_vals_2800_, v_heq_2801_, v_i_2802_, v_entries_2803_);
lean_dec_ref(v_vals_2800_);
lean_dec_ref(v_keys_2799_);
return v_res_2805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32_spec__37(lean_object* v_00_u03b2_2806_, lean_object* v_x_2807_, lean_object* v_x_2808_, lean_object* v_x_2809_, lean_object* v_x_2810_){
_start:
{
lean_object* v___x_2811_; 
v___x_2811_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_alterAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__6_spec__21_spec__32_spec__37___redArg(v_x_2807_, v_x_2808_, v_x_2809_, v_x_2810_);
return v___x_2811_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1_spec__2___redArg(lean_object* v_xs_2812_, lean_object* v_j_2813_){
_start:
{
lean_object* v_zero_2814_; uint8_t v_isZero_2815_; 
v_zero_2814_ = lean_unsigned_to_nat(0u);
v_isZero_2815_ = lean_nat_dec_eq(v_j_2813_, v_zero_2814_);
if (v_isZero_2815_ == 1)
{
lean_dec(v_j_2813_);
return v_xs_2812_;
}
else
{
lean_object* v_one_2816_; lean_object* v_n_2817_; lean_object* v___x_2818_; lean_object* v_priority_2819_; lean_object* v___x_2820_; lean_object* v_priority_2821_; uint8_t v___x_2822_; 
v_one_2816_ = lean_unsigned_to_nat(1u);
v_n_2817_ = lean_nat_sub(v_j_2813_, v_one_2816_);
v___x_2818_ = lean_array_fget_borrowed(v_xs_2812_, v_n_2817_);
v_priority_2819_ = lean_ctor_get(v___x_2818_, 3);
v___x_2820_ = lean_array_fget_borrowed(v_xs_2812_, v_j_2813_);
v_priority_2821_ = lean_ctor_get(v___x_2820_, 3);
v___x_2822_ = lean_nat_dec_lt(v_priority_2819_, v_priority_2821_);
if (v___x_2822_ == 0)
{
lean_dec(v_n_2817_);
lean_dec(v_j_2813_);
return v_xs_2812_;
}
else
{
lean_object* v___x_2823_; 
v___x_2823_ = lean_array_fswap(v_xs_2812_, v_j_2813_, v_n_2817_);
lean_dec(v_j_2813_);
v_xs_2812_ = v___x_2823_;
v_j_2813_ = v_n_2817_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1(lean_object* v_xs_2825_, lean_object* v_i_2826_, lean_object* v_fuel_2827_){
_start:
{
lean_object* v_zero_2828_; uint8_t v_isZero_2829_; 
v_zero_2828_ = lean_unsigned_to_nat(0u);
v_isZero_2829_ = lean_nat_dec_eq(v_fuel_2827_, v_zero_2828_);
if (v_isZero_2829_ == 1)
{
lean_dec(v_fuel_2827_);
lean_dec(v_i_2826_);
return v_xs_2825_;
}
else
{
lean_object* v___x_2830_; uint8_t v___x_2831_; 
v___x_2830_ = lean_array_get_size(v_xs_2825_);
v___x_2831_ = lean_nat_dec_lt(v_i_2826_, v___x_2830_);
if (v___x_2831_ == 0)
{
lean_dec(v_fuel_2827_);
lean_dec(v_i_2826_);
return v_xs_2825_;
}
else
{
lean_object* v_one_2832_; lean_object* v_n_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; 
v_one_2832_ = lean_unsigned_to_nat(1u);
v_n_2833_ = lean_nat_sub(v_fuel_2827_, v_one_2832_);
lean_dec(v_fuel_2827_);
lean_inc(v_i_2826_);
v___x_2834_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1_spec__2___redArg(v_xs_2825_, v_i_2826_);
v___x_2835_ = lean_nat_add(v_i_2826_, v_one_2832_);
lean_dec(v_i_2826_);
v_xs_2825_ = v___x_2834_;
v_i_2826_ = v___x_2835_;
v_fuel_2827_ = v_n_2833_;
goto _start;
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_2837_, lean_object* v_i_2838_, lean_object* v_k_2839_){
_start:
{
lean_object* v___x_2840_; uint8_t v___x_2841_; 
v___x_2840_ = lean_array_get_size(v_keys_2837_);
v___x_2841_ = lean_nat_dec_lt(v_i_2838_, v___x_2840_);
if (v___x_2841_ == 0)
{
lean_dec_ref(v_k_2839_);
lean_dec(v_i_2838_);
return v___x_2841_;
}
else
{
lean_object* v_k_x27_2842_; uint8_t v___x_2843_; 
v_k_x27_2842_ = lean_array_fget_borrowed(v_keys_2837_, v_i_2838_);
lean_inc(v_k_x27_2842_);
lean_inc_ref(v_k_2839_);
v___x_2843_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(v_k_2839_, v_k_x27_2842_);
if (v___x_2843_ == 0)
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
v___x_2844_ = lean_unsigned_to_nat(1u);
v___x_2845_ = lean_nat_add(v_i_2838_, v___x_2844_);
lean_dec(v_i_2838_);
v_i_2838_ = v___x_2845_;
goto _start;
}
else
{
lean_dec_ref(v_k_2839_);
lean_dec(v_i_2838_);
return v___x_2843_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_2847_, lean_object* v_i_2848_, lean_object* v_k_2849_){
_start:
{
uint8_t v_res_2850_; lean_object* v_r_2851_; 
v_res_2850_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg(v_keys_2847_, v_i_2848_, v_k_2849_);
lean_dec_ref(v_keys_2847_);
v_r_2851_ = lean_box(v_res_2850_);
return v_r_2851_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(lean_object* v_x_2852_, size_t v_x_2853_, lean_object* v_x_2854_){
_start:
{
if (lean_obj_tag(v_x_2852_) == 0)
{
lean_object* v_es_2855_; lean_object* v___x_2856_; size_t v___x_2857_; size_t v___x_2858_; lean_object* v_j_2859_; lean_object* v___x_2860_; 
v_es_2855_ = lean_ctor_get(v_x_2852_, 0);
lean_inc_ref(v_es_2855_);
lean_dec_ref_known(v_x_2852_, 1);
v___x_2856_ = lean_box(2);
v___x_2857_ = ((size_t)31ULL);
v___x_2858_ = lean_usize_land(v_x_2853_, v___x_2857_);
v_j_2859_ = lean_usize_to_nat(v___x_2858_);
v___x_2860_ = lean_array_get(v___x_2856_, v_es_2855_, v_j_2859_);
lean_dec(v_j_2859_);
lean_dec_ref(v_es_2855_);
switch(lean_obj_tag(v___x_2860_))
{
case 0:
{
lean_object* v_key_2861_; uint8_t v___x_2862_; 
v_key_2861_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_key_2861_);
lean_dec_ref_known(v___x_2860_, 2);
v___x_2862_ = l_Lean_Elab_Tactic_Do_SpecAttr_instBEqSpecProof_beq(v_x_2854_, v_key_2861_);
return v___x_2862_;
}
case 1:
{
lean_object* v_node_2863_; size_t v___x_2864_; size_t v___x_2865_; 
v_node_2863_ = lean_ctor_get(v___x_2860_, 0);
lean_inc(v_node_2863_);
lean_dec_ref_known(v___x_2860_, 1);
v___x_2864_ = ((size_t)5ULL);
v___x_2865_ = lean_usize_shift_right(v_x_2853_, v___x_2864_);
v_x_2852_ = v_node_2863_;
v_x_2853_ = v___x_2865_;
goto _start;
}
default: 
{
uint8_t v___x_2867_; 
lean_dec_ref(v_x_2854_);
v___x_2867_ = 0;
return v___x_2867_;
}
}
}
else
{
lean_object* v_ks_2868_; lean_object* v___x_2869_; uint8_t v___x_2870_; 
v_ks_2868_ = lean_ctor_get(v_x_2852_, 0);
lean_inc_ref(v_ks_2868_);
lean_dec_ref_known(v_x_2852_, 2);
v___x_2869_ = lean_unsigned_to_nat(0u);
v___x_2870_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg(v_ks_2868_, v___x_2869_, v_x_2854_);
lean_dec_ref(v_ks_2868_);
return v___x_2870_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg___boxed(lean_object* v_x_2871_, lean_object* v_x_2872_, lean_object* v_x_2873_){
_start:
{
size_t v_x_4063__boxed_2874_; uint8_t v_res_2875_; lean_object* v_r_2876_; 
v_x_4063__boxed_2874_ = lean_unbox_usize(v_x_2872_);
lean_dec(v_x_2872_);
v_res_2875_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(v_x_2871_, v_x_4063__boxed_2874_, v_x_2873_);
v_r_2876_ = lean_box(v_res_2875_);
return v_r_2876_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg(lean_object* v_x_2877_, lean_object* v_x_2878_){
_start:
{
uint64_t v___y_2880_; lean_object* v___x_2883_; 
v___x_2883_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecProof_key(v_x_2878_);
if (lean_obj_tag(v___x_2883_) == 0)
{
uint64_t v___x_2884_; 
v___x_2884_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2880_ = v___x_2884_;
goto v___jp_2879_;
}
else
{
uint64_t v_hash_2885_; 
v_hash_2885_ = lean_ctor_get_uint64(v___x_2883_, sizeof(void*)*2);
lean_dec(v___x_2883_);
v___y_2880_ = v_hash_2885_;
goto v___jp_2879_;
}
v___jp_2879_:
{
size_t v___x_2881_; uint8_t v___x_2882_; 
v___x_2881_ = lean_uint64_to_usize(v___y_2880_);
v___x_2882_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(v_x_2877_, v___x_2881_, v_x_2878_);
return v___x_2882_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg___boxed(lean_object* v_x_2886_, lean_object* v_x_2887_){
_start:
{
uint8_t v_res_2888_; lean_object* v_r_2889_; 
v_res_2888_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg(v_x_2886_, v_x_2887_);
v_r_2889_ = lean_box(v_res_2888_);
return v_r_2889_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3(lean_object* v_database_2890_, lean_object* v_as_2891_, size_t v_i_2892_, size_t v_stop_2893_, lean_object* v_b_2894_){
_start:
{
lean_object* v___y_2896_; uint8_t v___x_2900_; 
v___x_2900_ = lean_usize_dec_eq(v_i_2892_, v_stop_2893_);
if (v___x_2900_ == 0)
{
lean_object* v_erased_2901_; lean_object* v___x_2902_; lean_object* v_proof_2903_; uint8_t v___x_2904_; 
v_erased_2901_ = lean_ctor_get(v_database_2890_, 1);
v___x_2902_ = lean_array_uget_borrowed(v_as_2891_, v_i_2892_);
v_proof_2903_ = lean_ctor_get(v___x_2902_, 1);
lean_inc_ref(v_proof_2903_);
lean_inc_ref(v_erased_2901_);
v___x_2904_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg(v_erased_2901_, v_proof_2903_);
if (v___x_2904_ == 0)
{
lean_object* v___x_2905_; 
lean_inc(v___x_2902_);
v___x_2905_ = lean_array_push(v_b_2894_, v___x_2902_);
v___y_2896_ = v___x_2905_;
goto v___jp_2895_;
}
else
{
v___y_2896_ = v_b_2894_;
goto v___jp_2895_;
}
}
else
{
lean_dec_ref(v_database_2890_);
return v_b_2894_;
}
v___jp_2895_:
{
size_t v___x_2897_; size_t v___x_2898_; 
v___x_2897_ = ((size_t)1ULL);
v___x_2898_ = lean_usize_add(v_i_2892_, v___x_2897_);
v_i_2892_ = v___x_2898_;
v_b_2894_ = v___y_2896_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3___boxed(lean_object* v_database_2906_, lean_object* v_as_2907_, lean_object* v_i_2908_, lean_object* v_stop_2909_, lean_object* v_b_2910_){
_start:
{
size_t v_i_boxed_2911_; size_t v_stop_boxed_2912_; lean_object* v_res_2913_; 
v_i_boxed_2911_ = lean_unbox_usize(v_i_2908_);
lean_dec(v_i_2908_);
v_stop_boxed_2912_ = lean_unbox_usize(v_stop_2909_);
lean_dec(v_stop_2909_);
v_res_2913_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3(v_database_2906_, v_as_2907_, v_i_boxed_2911_, v_stop_boxed_2912_, v_b_2910_);
lean_dec_ref(v_as_2907_);
return v_res_2913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2(lean_object* v_a_2917_, lean_object* v_as_2918_, size_t v_sz_2919_, size_t v_i_2920_, lean_object* v_b_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
uint8_t v___x_2929_; 
v___x_2929_ = lean_usize_dec_lt(v_i_2920_, v_sz_2919_);
if (v___x_2929_ == 0)
{
lean_object* v___x_2930_; 
lean_dec_ref(v_a_2917_);
v___x_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2930_, 0, v_b_2921_);
return v___x_2930_;
}
else
{
lean_object* v_a_2931_; lean_object* v_pattern_2932_; lean_object* v___x_2933_; 
lean_dec_ref(v_b_2921_);
v_a_2931_ = lean_array_uget_borrowed(v_as_2918_, v_i_2920_);
v_pattern_2932_ = lean_ctor_get(v_a_2931_, 0);
lean_inc_ref(v_a_2917_);
lean_inc_ref(v_pattern_2932_);
v___x_2933_ = l_Lean_Meta_Sym_Pattern_match_x3f(v_pattern_2932_, v_a_2917_, v___x_2929_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
if (lean_obj_tag(v___x_2933_) == 0)
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2956_; 
v_a_2934_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_2956_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2956_ == 0)
{
v___x_2936_ = v___x_2933_;
v_isShared_2937_ = v_isSharedCheck_2956_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___x_2933_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2956_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2938_; 
v___x_2938_ = lean_box(0);
if (lean_obj_tag(v_a_2934_) == 1)
{
lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2950_; 
lean_dec_ref(v_a_2917_);
v_isSharedCheck_2950_ = !lean_is_exclusive(v_a_2934_);
if (v_isSharedCheck_2950_ == 0)
{
lean_object* v_unused_2951_; 
v_unused_2951_ = lean_ctor_get(v_a_2934_, 0);
lean_dec(v_unused_2951_);
v___x_2940_ = v_a_2934_;
v_isShared_2941_ = v_isSharedCheck_2950_;
goto v_resetjp_2939_;
}
else
{
lean_dec(v_a_2934_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2950_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2942_; lean_object* v___x_2944_; 
lean_inc(v_a_2931_);
v___x_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2942_, 0, v_a_2931_);
if (v_isShared_2941_ == 0)
{
lean_ctor_set(v___x_2940_, 0, v___x_2942_);
v___x_2944_ = v___x_2940_;
goto v_reusejp_2943_;
}
else
{
lean_object* v_reuseFailAlloc_2949_; 
v_reuseFailAlloc_2949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2949_, 0, v___x_2942_);
v___x_2944_ = v_reuseFailAlloc_2949_;
goto v_reusejp_2943_;
}
v_reusejp_2943_:
{
lean_object* v___x_2945_; lean_object* v___x_2947_; 
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2944_);
lean_ctor_set(v___x_2945_, 1, v___x_2938_);
if (v_isShared_2937_ == 0)
{
lean_ctor_set(v___x_2936_, 0, v___x_2945_);
v___x_2947_ = v___x_2936_;
goto v_reusejp_2946_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v___x_2945_);
v___x_2947_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2946_;
}
v_reusejp_2946_:
{
return v___x_2947_;
}
}
}
}
else
{
lean_object* v___x_2952_; size_t v___x_2953_; size_t v___x_2954_; 
lean_del_object(v___x_2936_);
lean_dec(v_a_2934_);
v___x_2952_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___closed__0));
v___x_2953_ = ((size_t)1ULL);
v___x_2954_ = lean_usize_add(v_i_2920_, v___x_2953_);
v_i_2920_ = v___x_2954_;
v_b_2921_ = v___x_2952_;
goto _start;
}
}
}
else
{
lean_object* v_a_2957_; lean_object* v___x_2959_; uint8_t v_isShared_2960_; uint8_t v_isSharedCheck_2964_; 
lean_dec_ref(v_a_2917_);
v_a_2957_ = lean_ctor_get(v___x_2933_, 0);
v_isSharedCheck_2964_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2964_ == 0)
{
v___x_2959_ = v___x_2933_;
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
else
{
lean_inc(v_a_2957_);
lean_dec(v___x_2933_);
v___x_2959_ = lean_box(0);
v_isShared_2960_ = v_isSharedCheck_2964_;
goto v_resetjp_2958_;
}
v_resetjp_2958_:
{
lean_object* v___x_2962_; 
if (v_isShared_2960_ == 0)
{
v___x_2962_ = v___x_2959_;
goto v_reusejp_2961_;
}
else
{
lean_object* v_reuseFailAlloc_2963_; 
v_reuseFailAlloc_2963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2963_, 0, v_a_2957_);
v___x_2962_ = v_reuseFailAlloc_2963_;
goto v_reusejp_2961_;
}
v_reusejp_2961_:
{
return v___x_2962_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___boxed(lean_object* v_a_2965_, lean_object* v_as_2966_, lean_object* v_sz_2967_, lean_object* v_i_2968_, lean_object* v_b_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_){
_start:
{
size_t v_sz_boxed_2977_; size_t v_i_boxed_2978_; lean_object* v_res_2979_; 
v_sz_boxed_2977_ = lean_unbox_usize(v_sz_2967_);
lean_dec(v_sz_2967_);
v_i_boxed_2978_ = lean_unbox_usize(v_i_2968_);
lean_dec(v_i_2968_);
v_res_2979_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2(v_a_2965_, v_as_2966_, v_sz_boxed_2977_, v_i_boxed_2978_, v_b_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_, v___y_2975_);
lean_dec(v___y_2975_);
lean_dec_ref(v___y_2974_);
lean_dec(v___y_2973_);
lean_dec_ref(v___y_2972_);
lean_dec(v___y_2971_);
lean_dec_ref(v___y_2970_);
lean_dec_ref(v_as_2966_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs(lean_object* v_database_2980_, lean_object* v_e_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_){
_start:
{
lean_object* v___x_2989_; lean_object* v_a_2990_; lean_object* v___x_2992_; uint8_t v_isShared_2993_; uint8_t v_isSharedCheck_3062_; 
v___x_2989_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremNew_spec__0___redArg(v_e_2981_, v_a_2985_);
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_2992_ = v___x_2989_;
v_isShared_2993_ = v_isSharedCheck_3062_;
goto v_resetjp_2991_;
}
else
{
lean_inc(v_a_2990_);
lean_dec(v___x_2989_);
v___x_2992_ = lean_box(0);
v_isShared_2993_ = v_isSharedCheck_3062_;
goto v_resetjp_2991_;
}
v_resetjp_2991_:
{
lean_object* v___x_2994_; 
v___x_2994_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_2990_, v_a_2983_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_object* v_a_2995_; lean_object* v___x_2997_; uint8_t v_isShared_2998_; uint8_t v_isSharedCheck_3053_; 
v_a_2995_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_2997_ = v___x_2994_;
v_isShared_2998_ = v_isSharedCheck_3053_;
goto v_resetjp_2996_;
}
else
{
lean_inc(v_a_2995_);
lean_dec(v___x_2994_);
v___x_2997_ = lean_box(0);
v_isShared_2998_ = v_isSharedCheck_3053_;
goto v_resetjp_2996_;
}
v_resetjp_2996_:
{
lean_object* v_specs_2999_; lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___y_3003_; lean_object* v___x_3043_; lean_object* v___x_3044_; uint8_t v___x_3045_; 
v_specs_2999_ = lean_ctor_get(v_database_2980_, 0);
v___x_3000_ = l_Lean_Meta_Sym_getMatch___redArg(v_specs_2999_, v_a_2995_);
v___x_3001_ = lean_unsigned_to_nat(0u);
v___x_3043_ = lean_array_get_size(v___x_3000_);
v___x_3044_ = ((lean_object*)(l___private_Lean_Meta_DiscrTree_Basic_0__Lean_Meta_DiscrTree_insertAux___at___00Lean_Meta_DiscrTree_insertKeyValue___at___00Lean_Meta_Sym_insertPattern___at___00Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase_spec__1_spec__2_spec__5___closed__0));
v___x_3045_ = lean_nat_dec_lt(v___x_3001_, v___x_3043_);
if (v___x_3045_ == 0)
{
lean_dec_ref(v___x_3000_);
lean_dec_ref(v_database_2980_);
v___y_3003_ = v___x_3044_;
goto v___jp_3002_;
}
else
{
uint8_t v___x_3046_; 
v___x_3046_ = lean_nat_dec_le(v___x_3043_, v___x_3043_);
if (v___x_3046_ == 0)
{
if (v___x_3045_ == 0)
{
lean_dec_ref(v___x_3000_);
lean_dec_ref(v_database_2980_);
v___y_3003_ = v___x_3044_;
goto v___jp_3002_;
}
else
{
size_t v___x_3047_; size_t v___x_3048_; lean_object* v___x_3049_; 
v___x_3047_ = ((size_t)0ULL);
v___x_3048_ = lean_usize_of_nat(v___x_3043_);
v___x_3049_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3(v_database_2980_, v___x_3000_, v___x_3047_, v___x_3048_, v___x_3044_);
lean_dec_ref(v___x_3000_);
v___y_3003_ = v___x_3049_;
goto v___jp_3002_;
}
}
else
{
size_t v___x_3050_; size_t v___x_3051_; lean_object* v___x_3052_; 
v___x_3050_ = ((size_t)0ULL);
v___x_3051_ = lean_usize_of_nat(v___x_3043_);
v___x_3052_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__3(v_database_2980_, v___x_3000_, v___x_3050_, v___x_3051_, v___x_3044_);
lean_dec_ref(v___x_3000_);
v___y_3003_ = v___x_3052_;
goto v___jp_3002_;
}
}
v___jp_3002_:
{
lean_object* v___x_3004_; lean_object* v___x_3005_; uint8_t v___x_3006_; 
v___x_3004_ = lean_array_get_size(v___y_3003_);
v___x_3005_ = lean_unsigned_to_nat(1u);
v___x_3006_ = lean_nat_dec_eq(v___x_3004_, v___x_3005_);
if (v___x_3006_ == 0)
{
lean_object* v___x_3007_; lean_object* v___x_3008_; size_t v_sz_3009_; size_t v___x_3010_; lean_object* v___x_3011_; 
lean_del_object(v___x_2997_);
v___x_3007_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1(v___y_3003_, v___x_3001_, v___x_3004_);
v___x_3008_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2___closed__0));
v_sz_3009_ = lean_array_size(v___x_3007_);
v___x_3010_ = ((size_t)0ULL);
v___x_3011_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__2(v_a_2995_, v___x_3007_, v_sz_3009_, v___x_3010_, v___x_3008_, v_a_2982_, v_a_2983_, v_a_2984_, v_a_2985_, v_a_2986_, v_a_2987_);
if (lean_obj_tag(v___x_3011_) == 0)
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3027_; 
v_a_3012_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3027_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_3014_ = v___x_3011_;
v_isShared_3015_ = v_isSharedCheck_3027_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_3011_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3027_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v_fst_3016_; 
v_fst_3016_ = lean_ctor_get(v_a_3012_, 0);
lean_inc(v_fst_3016_);
lean_dec(v_a_3012_);
if (lean_obj_tag(v_fst_3016_) == 0)
{
lean_object* v___x_3018_; 
if (v_isShared_2993_ == 0)
{
lean_ctor_set(v___x_2992_, 0, v___x_3007_);
v___x_3018_ = v___x_2992_;
goto v_reusejp_3017_;
}
else
{
lean_object* v_reuseFailAlloc_3022_; 
v_reuseFailAlloc_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3022_, 0, v___x_3007_);
v___x_3018_ = v_reuseFailAlloc_3022_;
goto v_reusejp_3017_;
}
v_reusejp_3017_:
{
lean_object* v___x_3020_; 
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v___x_3018_);
v___x_3020_ = v___x_3014_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v___x_3018_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
else
{
lean_object* v_val_3023_; lean_object* v___x_3025_; 
lean_dec_ref(v___x_3007_);
lean_del_object(v___x_2992_);
v_val_3023_ = lean_ctor_get(v_fst_3016_, 0);
lean_inc(v_val_3023_);
lean_dec_ref_known(v_fst_3016_, 1);
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 0, v_val_3023_);
v___x_3025_ = v___x_3014_;
goto v_reusejp_3024_;
}
else
{
lean_object* v_reuseFailAlloc_3026_; 
v_reuseFailAlloc_3026_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3026_, 0, v_val_3023_);
v___x_3025_ = v_reuseFailAlloc_3026_;
goto v_reusejp_3024_;
}
v_reusejp_3024_:
{
return v___x_3025_;
}
}
}
}
else
{
lean_object* v_a_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3035_; 
lean_dec_ref(v___x_3007_);
lean_del_object(v___x_2992_);
v_a_3028_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3035_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3035_ == 0)
{
v___x_3030_ = v___x_3011_;
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_a_3028_);
lean_dec(v___x_3011_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3035_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3033_; 
if (v_isShared_3031_ == 0)
{
v___x_3033_ = v___x_3030_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3034_; 
v_reuseFailAlloc_3034_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3034_, 0, v_a_3028_);
v___x_3033_ = v_reuseFailAlloc_3034_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
return v___x_3033_;
}
}
}
}
else
{
lean_object* v___x_3036_; lean_object* v___x_3038_; 
lean_dec(v_a_2995_);
v___x_3036_ = lean_array_fget(v___y_3003_, v___x_3001_);
lean_dec_ref(v___y_3003_);
if (v_isShared_2993_ == 0)
{
lean_ctor_set_tag(v___x_2992_, 1);
lean_ctor_set(v___x_2992_, 0, v___x_3036_);
v___x_3038_ = v___x_2992_;
goto v_reusejp_3037_;
}
else
{
lean_object* v_reuseFailAlloc_3042_; 
v_reuseFailAlloc_3042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3042_, 0, v___x_3036_);
v___x_3038_ = v_reuseFailAlloc_3042_;
goto v_reusejp_3037_;
}
v_reusejp_3037_:
{
lean_object* v___x_3040_; 
if (v_isShared_2998_ == 0)
{
lean_ctor_set(v___x_2997_, 0, v___x_3038_);
v___x_3040_ = v___x_2997_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3038_);
v___x_3040_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
return v___x_3040_;
}
}
}
}
}
}
else
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3061_; 
lean_del_object(v___x_2992_);
lean_dec_ref(v_database_2980_);
v_a_3054_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3061_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3061_ == 0)
{
v___x_3056_ = v___x_2994_;
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_2994_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3061_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3059_; 
if (v_isShared_3057_ == 0)
{
v___x_3059_ = v___x_3056_;
goto v_reusejp_3058_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v_a_3054_);
v___x_3059_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3058_;
}
v_reusejp_3058_:
{
return v___x_3059_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs___boxed(lean_object* v_database_3063_, lean_object* v_e_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs(v_database_3063_, v_e_3064_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_);
lean_dec(v_a_3070_);
lean_dec_ref(v_a_3069_);
lean_dec(v_a_3068_);
lean_dec_ref(v_a_3067_);
lean_dec(v_a_3066_);
lean_dec_ref(v_a_3065_);
return v_res_3072_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0(lean_object* v_00_u03b2_3073_, lean_object* v_x_3074_, lean_object* v_x_3075_){
_start:
{
uint8_t v___x_3076_; 
v___x_3076_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___redArg(v_x_3074_, v_x_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0___boxed(lean_object* v_00_u03b2_3077_, lean_object* v_x_3078_, lean_object* v_x_3079_){
_start:
{
uint8_t v_res_3080_; lean_object* v_r_3081_; 
v_res_3080_ = l_Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0(v_00_u03b2_3077_, v_x_3078_, v_x_3079_);
v_r_3081_ = lean_box(v_res_3080_);
return v_r_3081_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0(lean_object* v_00_u03b2_3082_, lean_object* v_x_3083_, size_t v_x_3084_, lean_object* v_x_3085_){
_start:
{
uint8_t v___x_3086_; 
v___x_3086_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___redArg(v_x_3083_, v_x_3084_, v_x_3085_);
return v___x_3086_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3087_, lean_object* v_x_3088_, lean_object* v_x_3089_, lean_object* v_x_3090_){
_start:
{
size_t v_x_4406__boxed_3091_; uint8_t v_res_3092_; lean_object* v_r_3093_; 
v_x_4406__boxed_3091_ = lean_unbox_usize(v_x_3089_);
lean_dec(v_x_3089_);
v_res_3092_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0(v_00_u03b2_3087_, v_x_3088_, v_x_4406__boxed_3091_, v_x_3090_);
v_r_3093_ = lean_box(v_res_3092_);
return v_r_3093_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1_spec__2(lean_object* v_xs_3094_, lean_object* v_j_3095_, lean_object* v_h_3096_){
_start:
{
lean_object* v___x_3097_; 
v___x_3097_ = l___private_Init_Data_Array_InsertionSort_0__Array_insertionSort_swapLoop___at___00__private_Init_Data_Array_InsertionSort_0__Array_insertionSort_traverse___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__1_spec__2___redArg(v_xs_3094_, v_j_3095_);
return v___x_3097_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_3098_, lean_object* v_keys_3099_, lean_object* v_vals_3100_, lean_object* v_heq_3101_, lean_object* v_i_3102_, lean_object* v_k_3103_){
_start:
{
uint8_t v___x_3104_; 
v___x_3104_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___redArg(v_keys_3099_, v_i_3102_, v_k_3103_);
return v___x_3104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_3105_, lean_object* v_keys_3106_, lean_object* v_vals_3107_, lean_object* v_heq_3108_, lean_object* v_i_3109_, lean_object* v_k_3110_){
_start:
{
uint8_t v_res_3111_; lean_object* v_r_3112_; 
v_res_3111_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs_spec__0_spec__0_spec__1(v_00_u03b2_3105_, v_keys_3106_, v_vals_3107_, v_heq_3108_, v_i_3109_, v_k_3110_);
lean_dec_ref(v_vals_3107_);
lean_dec_ref(v_keys_3106_);
v_r_3112_ = lean_box(v_res_3111_);
return v_r_3112_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_DiscrTree_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_DiscrTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default = _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew_default);
l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew = _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremNew);
l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default = _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew_default);
l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew = _init_l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew();
lean_mark_persistent(l_Lean_Elab_Tactic_Do_SpecAttr_instInhabitedSpecTheoremsNew);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* initialize_Lean_Meta_DiscrTree_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_DiscrTree(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_DiscrTree_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_DiscrTree(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_SpecDB(builtin);
}
#ifdef __cplusplus
}
#endif
