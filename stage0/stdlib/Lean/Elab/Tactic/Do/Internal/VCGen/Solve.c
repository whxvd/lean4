// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Solve
// Imports: public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.RuleCache public import Lean.Elab.Tactic.Do.Internal.VCGen.Entails public import Lean.Meta.Sym.InstantiateS
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
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_share1___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Sym_Internal_Sym_assertShared(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
uint8_t l_Lean_Expr_isLambda(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_burnOne___redArg(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_neededStateIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isConst(lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_outOfFuel___redArg(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_Scope_collectLocalSpecs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Meta_reduceRecMatcher_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommonInc___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSplitInfoCached___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x3f(lean_object*);
lean_object* l_Lean_FVarId_getValue_x3f___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_betaRev(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_FVarId_getUserName___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_UntilPatternThunk_force(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_match_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letName_x21(lean_object*);
lean_object* l_Lean_Expr_letBody_x21(lean_object*);
lean_object* l_Lean_Meta_Sym_instantiateRevBetaS___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_letValue_x21(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isLet(lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_isJP(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_tripleOfWP(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solvePostCondEntails(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_constLevels_x21(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solveSPredEntails(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqS(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noEntailment_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noEntailment_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noProgramFoundInTarget_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noProgramFoundInTarget_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noStrategyForProgram_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noStrategyForProgram_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noSpecFoundForProgram_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noSpecFoundForProgram_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_goals_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_goals_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_stop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_stop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__1_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "foralls in `solve`"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let-intro: "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__3_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "vcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 84, 199, 228, 250, 36, 60, 178)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__3_value),LEAN_SCALAR_PTR_LITERAL(180, 190, 140, 210, 253, 78, 130, 238)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 104, 229, 54, 179, 197, 12, 87)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__5_value),LEAN_SCALAR_PTR_LITERAL(49, 235, 69, 93, 100, 93, 190, 221)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__7_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "let-zeta-dup: "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 104, .m_capacity = 104, .m_length = 103, .m_data = "mvcgen': shared-continuation handling for `__do_jp` is not yet implemented. Detection point reached at "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 205, .m_capacity = 205, .m_length = 204, .m_data = "; the upstream `Lean.Elab.Tactic.Do.onJoinPoint` (`src/Lean/Elab/Tactic/Do/VCGen.lean:215`) needs to be ported to the worklist style. Drop `(jp := true)` to fall back to the default zeta-unfold behaviour."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__1_value),LEAN_SCALAR_PTR_LITERAL(31, 48, 165, 224, 255, 99, 7, 166)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Applying "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "entails_cons_intro"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__3_value),LEAN_SCALAR_PTR_LITERAL(121, 192, 217, 126, 138, 217, 120, 234)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__5;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__6;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " to "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__7_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__8;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = " failed. It should not."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__1_value),LEAN_SCALAR_PTR_LITERAL(69, 60, 94, 227, 159, 215, 186, 21)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Solved by rfl "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__4;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Trying rfl "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "let-hoist: "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__0;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "split rule for"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__2;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Failed to apply split rule for "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__3_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___boxed(lean_object**);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fvar-zeta: "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceProg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceProg___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "spec rule for"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__0_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__1;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Failed to apply rule "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " for "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__4_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__5;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Needed state intro. Retrying."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__6_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__7;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Rule type: "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__8_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__9;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Spec for "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__10_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__11;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__12_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__13;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__14_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__15;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__16_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__17;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__18_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__19;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__20_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__21;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0___boxed, .m_arity = 14, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__22_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Applying a spec for "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__23 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__23_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__24;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ". Excess args: "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__25 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__25_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__26;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "`until` pattern matched program "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "; stopping"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__3;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value_aux_1),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__0_value),LEAN_SCALAR_PTR_LITERAL(86, 181, 97, 38, 147, 213, 38, 7)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "PredTrans"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(48, 249, 197, 27, 172, 11, 117, 203)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(196, 51, 114, 249, 35, 73, 112, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "WP"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "wp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__4_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(209, 91, 166, 6, 71, 210, 197, 93)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(111, 2, 24, 48, 222, 174, 4, 243)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 11, .m_data = "📜 Program: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 10, .m_data = "🎯 Target: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__14_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__15;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorIdx(lean_object* v_x_1_){
_start:
{
switch(lean_obj_tag(v_x_1_))
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
case 2:
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
case 3:
{
lean_object* v___x_5_; 
v___x_5_ = lean_unsigned_to_nat(3u);
return v___x_5_;
}
case 4:
{
lean_object* v___x_6_; 
v___x_6_ = lean_unsigned_to_nat(4u);
return v___x_6_;
}
default: 
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(5u);
return v___x_7_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorIdx___boxed(lean_object* v_x_8_){
_start:
{
lean_object* v_res_9_; 
v_res_9_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorIdx(v_x_8_);
lean_dec(v_x_8_);
return v_res_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(lean_object* v_t_10_, lean_object* v_k_11_){
_start:
{
switch(lean_obj_tag(v_t_10_))
{
case 3:
{
lean_object* v_e_12_; lean_object* v_monad_13_; lean_object* v_thms_14_; lean_object* v___x_15_; 
v_e_12_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_e_12_);
v_monad_13_ = lean_ctor_get(v_t_10_, 1);
lean_inc_ref(v_monad_13_);
v_thms_14_ = lean_ctor_get(v_t_10_, 2);
lean_inc_ref(v_thms_14_);
lean_dec_ref_known(v_t_10_, 3);
v___x_15_ = lean_apply_3(v_k_11_, v_e_12_, v_monad_13_, v_thms_14_);
return v___x_15_;
}
case 4:
{
lean_object* v_scope_16_; lean_object* v_subgoals_17_; lean_object* v___x_18_; 
v_scope_16_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_scope_16_);
v_subgoals_17_ = lean_ctor_get(v_t_10_, 1);
lean_inc(v_subgoals_17_);
lean_dec_ref_known(v_t_10_, 2);
v___x_18_ = lean_apply_2(v_k_11_, v_scope_16_, v_subgoals_17_);
return v___x_18_;
}
case 5:
{
return v_k_11_;
}
default: 
{
lean_object* v_target_19_; lean_object* v___x_20_; 
v_target_19_ = lean_ctor_get(v_t_10_, 0);
lean_inc_ref(v_target_19_);
lean_dec(v_t_10_);
v___x_20_ = lean_apply_1(v_k_11_, v_target_19_);
return v___x_20_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim(lean_object* v_motive_21_, lean_object* v_ctorIdx_22_, lean_object* v_t_23_, lean_object* v_h_24_, lean_object* v_k_25_){
_start:
{
lean_object* v___x_26_; 
v___x_26_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_23_, v_k_25_);
return v___x_26_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___boxed(lean_object* v_motive_27_, lean_object* v_ctorIdx_28_, lean_object* v_t_29_, lean_object* v_h_30_, lean_object* v_k_31_){
_start:
{
lean_object* v_res_32_; 
v_res_32_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim(v_motive_27_, v_ctorIdx_28_, v_t_29_, v_h_30_, v_k_31_);
lean_dec(v_ctorIdx_28_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noEntailment_elim___redArg(lean_object* v_t_33_, lean_object* v_noEntailment_34_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_33_, v_noEntailment_34_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noEntailment_elim(lean_object* v_motive_36_, lean_object* v_t_37_, lean_object* v_h_38_, lean_object* v_noEntailment_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_37_, v_noEntailment_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noProgramFoundInTarget_elim___redArg(lean_object* v_t_41_, lean_object* v_noProgramFoundInTarget_42_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_41_, v_noProgramFoundInTarget_42_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noProgramFoundInTarget_elim(lean_object* v_motive_44_, lean_object* v_t_45_, lean_object* v_h_46_, lean_object* v_noProgramFoundInTarget_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_45_, v_noProgramFoundInTarget_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noStrategyForProgram_elim___redArg(lean_object* v_t_49_, lean_object* v_noStrategyForProgram_50_){
_start:
{
lean_object* v___x_51_; 
v___x_51_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_49_, v_noStrategyForProgram_50_);
return v___x_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noStrategyForProgram_elim(lean_object* v_motive_52_, lean_object* v_t_53_, lean_object* v_h_54_, lean_object* v_noStrategyForProgram_55_){
_start:
{
lean_object* v___x_56_; 
v___x_56_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_53_, v_noStrategyForProgram_55_);
return v___x_56_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noSpecFoundForProgram_elim___redArg(lean_object* v_t_57_, lean_object* v_noSpecFoundForProgram_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_57_, v_noSpecFoundForProgram_58_);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_noSpecFoundForProgram_elim(lean_object* v_motive_60_, lean_object* v_t_61_, lean_object* v_h_62_, lean_object* v_noSpecFoundForProgram_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_61_, v_noSpecFoundForProgram_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_goals_elim___redArg(lean_object* v_t_65_, lean_object* v_goals_66_){
_start:
{
lean_object* v___x_67_; 
v___x_67_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_65_, v_goals_66_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_goals_elim(lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_goals_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_69_, v_goals_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_stop_elim___redArg(lean_object* v_t_73_, lean_object* v_stop_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_73_, v_stop_74_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_stop_elim(lean_object* v_motive_76_, lean_object* v_t_77_, lean_object* v_h_78_, lean_object* v_stop_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_SolveResult_ctorElim___redArg(v_t_77_, v_stop_79_);
return v___x_80_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable(lean_object* v_e_86_){
_start:
{
switch(lean_obj_tag(v_e_86_))
{
case 5:
{
lean_object* v___x_87_; uint8_t v___x_88_; 
v___x_87_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___closed__2));
v___x_88_ = l_Lean_Expr_isAppOf(v_e_86_, v___x_87_);
return v___x_88_;
}
case 6:
{
uint8_t v___x_89_; 
v___x_89_ = 0;
return v___x_89_;
}
case 7:
{
uint8_t v___x_90_; 
v___x_90_ = 0;
return v___x_90_;
}
case 8:
{
uint8_t v___x_91_; 
v___x_91_ = 0;
return v___x_91_;
}
case 10:
{
lean_object* v_expr_92_; 
v_expr_92_ = lean_ctor_get(v_e_86_, 1);
v_e_86_ = v_expr_92_;
goto _start;
}
case 11:
{
lean_object* v_struct_94_; 
v_struct_94_ = lean_ctor_get(v_e_86_, 2);
v_e_86_ = v_struct_94_;
goto _start;
}
default: 
{
uint8_t v___x_96_; 
v___x_96_ = 1;
return v___x_96_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable___boxed(lean_object* v_e_97_){
_start:
{
uint8_t v_res_98_; lean_object* v_r_99_; 
v_res_98_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable(v_e_97_);
lean_dec_ref(v_e_97_);
v_r_99_ = lean_box(v_res_98_);
return v_r_99_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__1(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__0));
v___x_102_ = l_Lean_stringToMessageData(v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg(lean_object* v_goal_103_, lean_object* v_target_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = l_Lean_Expr_isForall(v_target_104_);
if (v___x_114_ == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; 
lean_dec(v_goal_103_);
v___x_115_ = lean_box(0);
v___x_116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_116_, 0, v___x_115_);
return v___x_116_;
}
else
{
lean_object* v___x_117_; lean_object* v___x_118_; 
v___x_117_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___closed__1);
v___x_118_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(v_goal_103_, v___x_117_, v_a_105_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_, v_a_111_, v_a_112_);
if (lean_obj_tag(v___x_118_) == 0)
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_127_; 
v_a_119_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_127_ == 0)
{
v___x_121_ = v___x_118_;
v_isShared_122_ = v_isSharedCheck_127_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_127_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_123_; lean_object* v___x_125_; 
v___x_123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_123_, 0, v_a_119_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 0, v___x_123_);
v___x_125_ = v___x_121_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_123_);
v___x_125_ = v_reuseFailAlloc_126_;
goto v_reusejp_124_;
}
v_reusejp_124_:
{
return v___x_125_;
}
}
}
else
{
lean_object* v_a_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_135_; 
v_a_128_ = lean_ctor_get(v___x_118_, 0);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_118_);
if (v_isSharedCheck_135_ == 0)
{
v___x_130_ = v___x_118_;
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_a_128_);
lean_dec(v___x_118_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_135_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___x_133_; 
if (v_isShared_131_ == 0)
{
v___x_133_ = v___x_130_;
goto v_reusejp_132_;
}
else
{
lean_object* v_reuseFailAlloc_134_; 
v_reuseFailAlloc_134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_134_, 0, v_a_128_);
v___x_133_ = v_reuseFailAlloc_134_;
goto v_reusejp_132_;
}
v_reusejp_132_:
{
return v___x_133_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg___boxed(lean_object* v_goal_136_, lean_object* v_target_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
lean_object* v_res_147_; 
v_res_147_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg(v_goal_136_, v_target_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec_ref(v_a_140_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec_ref(v_target_137_);
return v_res_147_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro(lean_object* v_goal_148_, lean_object* v_target_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg(v_goal_148_, v_target_149_, v_a_150_, v_a_151_, v_a_155_, v_a_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___boxed(lean_object* v_goal_163_, lean_object* v_target_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_, lean_object* v_a_175_, lean_object* v_a_176_){
_start:
{
lean_object* v_res_177_; 
v_res_177_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro(v_goal_163_, v_target_164_, v_a_165_, v_a_166_, v_a_167_, v_a_168_, v_a_169_, v_a_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_, v_a_175_);
lean_dec(v_a_175_);
lean_dec_ref(v_a_174_);
lean_dec(v_a_173_);
lean_dec_ref(v_a_172_);
lean_dec(v_a_171_);
lean_dec_ref(v_a_170_);
lean_dec(v_a_169_);
lean_dec_ref(v_a_168_);
lean_dec(v_a_167_);
lean_dec(v_a_166_);
lean_dec_ref(v_a_165_);
lean_dec_ref(v_target_164_);
return v_res_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0(lean_object* v_msgData_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v___x_184_; lean_object* v_env_185_; lean_object* v___x_186_; lean_object* v_mctx_187_; lean_object* v_lctx_188_; lean_object* v_options_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_184_ = lean_st_ref_get(v___y_182_);
v_env_185_ = lean_ctor_get(v___x_184_, 0);
lean_inc_ref(v_env_185_);
lean_dec(v___x_184_);
v___x_186_ = lean_st_ref_get(v___y_180_);
v_mctx_187_ = lean_ctor_get(v___x_186_, 0);
lean_inc_ref(v_mctx_187_);
lean_dec(v___x_186_);
v_lctx_188_ = lean_ctor_get(v___y_179_, 2);
v_options_189_ = lean_ctor_get(v___y_181_, 2);
lean_inc_ref(v_options_189_);
lean_inc_ref(v_lctx_188_);
v___x_190_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_190_, 0, v_env_185_);
lean_ctor_set(v___x_190_, 1, v_mctx_187_);
lean_ctor_set(v___x_190_, 2, v_lctx_188_);
lean_ctor_set(v___x_190_, 3, v_options_189_);
v___x_191_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_191_, 0, v___x_190_);
lean_ctor_set(v___x_191_, 1, v_msgData_178_);
v___x_192_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0___boxed(lean_object* v_msgData_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0(v_msgData_193_, v___y_194_, v___y_195_, v___y_196_, v___y_197_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
lean_dec(v___y_195_);
lean_dec_ref(v___y_194_);
return v_res_199_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_200_; double v___x_201_; 
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_float_of_nat(v___x_200_);
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(lean_object* v_cls_205_, lean_object* v_msg_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v_ref_212_; lean_object* v___x_213_; lean_object* v_a_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_258_; 
v_ref_212_ = lean_ctor_get(v___y_209_, 5);
v___x_213_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0(v_msg_206_, v___y_207_, v___y_208_, v___y_209_, v___y_210_);
v_a_214_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_258_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_258_ == 0)
{
v___x_216_ = v___x_213_;
v_isShared_217_ = v_isSharedCheck_258_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_a_214_);
lean_dec(v___x_213_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_258_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v_traceState_219_; lean_object* v_env_220_; lean_object* v_nextMacroScope_221_; lean_object* v_ngen_222_; lean_object* v_auxDeclNGen_223_; lean_object* v_cache_224_; lean_object* v_messages_225_; lean_object* v_infoState_226_; lean_object* v_snapshotTasks_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_257_; 
v___x_218_ = lean_st_ref_take(v___y_210_);
v_traceState_219_ = lean_ctor_get(v___x_218_, 4);
v_env_220_ = lean_ctor_get(v___x_218_, 0);
v_nextMacroScope_221_ = lean_ctor_get(v___x_218_, 1);
v_ngen_222_ = lean_ctor_get(v___x_218_, 2);
v_auxDeclNGen_223_ = lean_ctor_get(v___x_218_, 3);
v_cache_224_ = lean_ctor_get(v___x_218_, 5);
v_messages_225_ = lean_ctor_get(v___x_218_, 6);
v_infoState_226_ = lean_ctor_get(v___x_218_, 7);
v_snapshotTasks_227_ = lean_ctor_get(v___x_218_, 8);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_218_);
if (v_isSharedCheck_257_ == 0)
{
v___x_229_ = v___x_218_;
v_isShared_230_ = v_isSharedCheck_257_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_snapshotTasks_227_);
lean_inc(v_infoState_226_);
lean_inc(v_messages_225_);
lean_inc(v_cache_224_);
lean_inc(v_traceState_219_);
lean_inc(v_auxDeclNGen_223_);
lean_inc(v_ngen_222_);
lean_inc(v_nextMacroScope_221_);
lean_inc(v_env_220_);
lean_dec(v___x_218_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_257_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
uint64_t v_tid_231_; lean_object* v_traces_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_256_; 
v_tid_231_ = lean_ctor_get_uint64(v_traceState_219_, sizeof(void*)*1);
v_traces_232_ = lean_ctor_get(v_traceState_219_, 0);
v_isSharedCheck_256_ = !lean_is_exclusive(v_traceState_219_);
if (v_isSharedCheck_256_ == 0)
{
v___x_234_ = v_traceState_219_;
v_isShared_235_ = v_isSharedCheck_256_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_traces_232_);
lean_dec(v_traceState_219_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_256_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v___x_236_; double v___x_237_; uint8_t v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_246_; 
v___x_236_ = lean_box(0);
v___x_237_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__0);
v___x_238_ = 0;
v___x_239_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__1));
v___x_240_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_240_, 0, v_cls_205_);
lean_ctor_set(v___x_240_, 1, v___x_236_);
lean_ctor_set(v___x_240_, 2, v___x_239_);
lean_ctor_set_float(v___x_240_, sizeof(void*)*3, v___x_237_);
lean_ctor_set_float(v___x_240_, sizeof(void*)*3 + 8, v___x_237_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*3 + 16, v___x_238_);
v___x_241_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___closed__2));
v___x_242_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_242_, 0, v___x_240_);
lean_ctor_set(v___x_242_, 1, v_a_214_);
lean_ctor_set(v___x_242_, 2, v___x_241_);
lean_inc(v_ref_212_);
v___x_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_243_, 0, v_ref_212_);
lean_ctor_set(v___x_243_, 1, v___x_242_);
v___x_244_ = l_Lean_PersistentArray_push___redArg(v_traces_232_, v___x_243_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_244_);
v___x_246_ = v___x_234_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_255_; 
v_reuseFailAlloc_255_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_255_, 0, v___x_244_);
lean_ctor_set_uint64(v_reuseFailAlloc_255_, sizeof(void*)*1, v_tid_231_);
v___x_246_ = v_reuseFailAlloc_255_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
lean_object* v___x_248_; 
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 4, v___x_246_);
v___x_248_ = v___x_229_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_env_220_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v_nextMacroScope_221_);
lean_ctor_set(v_reuseFailAlloc_254_, 2, v_ngen_222_);
lean_ctor_set(v_reuseFailAlloc_254_, 3, v_auxDeclNGen_223_);
lean_ctor_set(v_reuseFailAlloc_254_, 4, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_254_, 5, v_cache_224_);
lean_ctor_set(v_reuseFailAlloc_254_, 6, v_messages_225_);
lean_ctor_set(v_reuseFailAlloc_254_, 7, v_infoState_226_);
lean_ctor_set(v_reuseFailAlloc_254_, 8, v_snapshotTasks_227_);
v___x_248_ = v_reuseFailAlloc_254_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_252_; 
v___x_249_ = lean_st_ref_set(v___y_210_, v___x_248_);
v___x_250_ = lean_box(0);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v___x_250_);
v___x_252_ = v___x_216_;
goto v_reusejp_251_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v___x_250_);
v___x_252_ = v_reuseFailAlloc_253_;
goto v_reusejp_251_;
}
v_reusejp_251_:
{
return v___x_252_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg___boxed(lean_object* v_cls_259_, lean_object* v_msg_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v_res_266_; 
v_res_266_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v_cls_259_, v_msg_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
return v_res_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(lean_object* v_msg_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_ref_273_; lean_object* v___x_274_; lean_object* v_a_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_283_; 
v_ref_273_ = lean_ctor_get(v___y_270_, 5);
v___x_274_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0_spec__0(v_msg_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
v_a_275_ = lean_ctor_get(v___x_274_, 0);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_274_);
if (v_isSharedCheck_283_ == 0)
{
v___x_277_ = v___x_274_;
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_a_275_);
lean_dec(v___x_274_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_283_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_279_; lean_object* v___x_281_; 
lean_inc(v_ref_273_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v_ref_273_);
lean_ctor_set(v___x_279_, 1, v_a_275_);
if (v_isShared_278_ == 0)
{
lean_ctor_set_tag(v___x_277_, 1);
lean_ctor_set(v___x_277_, 0, v___x_279_);
v___x_281_ = v___x_277_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_279_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg___boxed(lean_object* v_msg_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(v_msg_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_290_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__0));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_306_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___x_307_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8));
v___x_308_ = l_Lean_Name_append(v___x_307_, v___x_306_);
return v___x_308_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__11(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__10));
v___x_311_ = l_Lean_stringToMessageData(v___x_310_);
return v___x_311_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__13(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__12));
v___x_314_ = l_Lean_stringToMessageData(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__15(void){
_start:
{
lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_316_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__14));
v___x_317_ = l_Lean_stringToMessageData(v___x_316_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro(lean_object* v_goal_318_, lean_object* v_target_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_, lean_object* v_a_330_){
_start:
{
lean_object* v___y_333_; lean_object* v___y_334_; lean_object* v___y_335_; lean_object* v___y_336_; lean_object* v___y_337_; lean_object* v___y_338_; lean_object* v___y_339_; lean_object* v___y_340_; lean_object* v___y_364_; lean_object* v___y_365_; lean_object* v___y_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_403_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_406_; lean_object* v___y_407_; lean_object* v___y_408_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; uint8_t v___x_454_; 
v___x_454_ = l_Lean_Expr_isLet(v_target_319_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_dec(v_goal_318_);
v___x_455_ = lean_box(0);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
else
{
uint8_t v_useJP_457_; 
v_useJP_457_ = lean_ctor_get_uint8(v_a_320_, sizeof(void*)*19 + 1);
if (v_useJP_457_ == 0)
{
v___y_403_ = v_a_320_;
v___y_404_ = v_a_321_;
v___y_405_ = v_a_322_;
v___y_406_ = v_a_323_;
v___y_407_ = v_a_324_;
v___y_408_ = v_a_325_;
v___y_409_ = v_a_326_;
v___y_410_ = v_a_327_;
v___y_411_ = v_a_328_;
v___y_412_ = v_a_329_;
v___y_413_ = v_a_330_;
goto v___jp_402_;
}
else
{
lean_object* v___x_458_; uint8_t v___x_459_; 
v___x_458_ = l_Lean_Expr_letName_x21(v_target_319_);
lean_inc(v___x_458_);
v___x_459_ = l_Lean_Elab_Tactic_Do_isJP(v___x_458_);
if (v___x_459_ == 0)
{
lean_dec(v___x_458_);
v___y_403_ = v_a_320_;
v___y_404_ = v_a_321_;
v___y_405_ = v_a_322_;
v___y_406_ = v_a_323_;
v___y_407_ = v_a_324_;
v___y_408_ = v_a_325_;
v___y_409_ = v_a_326_;
v___y_410_ = v_a_327_;
v___y_411_ = v_a_328_;
v___y_412_ = v_a_329_;
v___y_413_ = v_a_330_;
goto v___jp_402_;
}
else
{
lean_object* v___x_460_; uint8_t v___x_461_; 
v___x_460_ = l_Lean_Expr_letValue_x21(v_target_319_);
v___x_461_ = l_Lean_Expr_isLambda(v___x_460_);
lean_dec_ref(v___x_460_);
if (v___x_461_ == 0)
{
lean_dec(v___x_458_);
v___y_403_ = v_a_320_;
v___y_404_ = v_a_321_;
v___y_405_ = v_a_322_;
v___y_406_ = v_a_323_;
v___y_407_ = v_a_324_;
v___y_408_ = v_a_325_;
v___y_409_ = v_a_326_;
v___y_410_ = v_a_327_;
v___y_411_ = v_a_328_;
v___y_412_ = v_a_329_;
v___y_413_ = v_a_330_;
goto v___jp_402_;
}
else
{
lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_dec(v_goal_318_);
v___x_462_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__13, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__13_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__13);
v___x_463_ = l_Lean_MessageData_ofName(v___x_458_);
v___x_464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_464_, 0, v___x_462_);
lean_ctor_set(v___x_464_, 1, v___x_463_);
v___x_465_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__15, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__15_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__15);
v___x_466_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_466_, 0, v___x_464_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(v___x_466_, v_a_327_, v_a_328_, v_a_329_, v_a_330_);
v_a_468_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_467_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_467_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
}
v___jp_332_:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
v___x_341_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1);
v___x_342_ = l_Lean_Expr_letName_x21(v_target_319_);
v___x_343_ = l_Lean_MessageData_ofName(v___x_342_);
v___x_344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_341_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(v_goal_318_, v___x_344_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_, v___y_339_, v___y_340_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_354_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_354_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_354_ == 0)
{
v___x_348_ = v___x_345_;
v_isShared_349_ = v_isSharedCheck_354_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_345_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_354_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_350_; lean_object* v___x_352_; 
v___x_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_350_, 0, v_a_346_);
if (v_isShared_349_ == 0)
{
lean_ctor_set(v___x_348_, 0, v___x_350_);
v___x_352_ = v___x_348_;
goto v_reusejp_351_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_350_);
v___x_352_ = v_reuseFailAlloc_353_;
goto v_reusejp_351_;
}
v_reusejp_351_:
{
return v___x_352_;
}
}
}
else
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
v_a_355_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_345_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_345_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
}
v___jp_363_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; 
v___x_370_ = l_Lean_Expr_letBody_x21(v_target_319_);
v___x_371_ = lean_unsigned_to_nat(1u);
v___x_372_ = lean_mk_empty_array_with_capacity(v___x_371_);
v___x_373_ = lean_array_push(v___x_372_, v___y_364_);
v___x_374_ = l_Lean_Meta_Sym_instantiateRevBetaS___redArg(v___x_370_, v___x_373_, v___y_365_);
lean_dec_ref(v___x_373_);
if (lean_obj_tag(v___x_374_) == 0)
{
lean_object* v_a_375_; lean_object* v___x_376_; 
v_a_375_ = lean_ctor_get(v___x_374_, 0);
lean_inc(v_a_375_);
lean_dec_ref_known(v___x_374_, 1);
v___x_376_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_318_, v_a_375_, v___y_366_, v___y_367_, v___y_368_, v___y_369_);
if (lean_obj_tag(v___x_376_) == 0)
{
lean_object* v_a_377_; lean_object* v___x_379_; uint8_t v_isShared_380_; uint8_t v_isSharedCheck_385_; 
v_a_377_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_385_ == 0)
{
v___x_379_ = v___x_376_;
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
else
{
lean_inc(v_a_377_);
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
v_isShared_380_ = v_isSharedCheck_385_;
goto v_resetjp_378_;
}
v_resetjp_378_:
{
lean_object* v___x_381_; lean_object* v___x_383_; 
v___x_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_381_, 0, v_a_377_);
if (v_isShared_380_ == 0)
{
lean_ctor_set(v___x_379_, 0, v___x_381_);
v___x_383_ = v___x_379_;
goto v_reusejp_382_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v___x_381_);
v___x_383_ = v_reuseFailAlloc_384_;
goto v_reusejp_382_;
}
v_reusejp_382_:
{
return v___x_383_;
}
}
}
else
{
lean_object* v_a_386_; lean_object* v___x_388_; uint8_t v_isShared_389_; uint8_t v_isSharedCheck_393_; 
v_a_386_ = lean_ctor_get(v___x_376_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_376_);
if (v_isSharedCheck_393_ == 0)
{
v___x_388_ = v___x_376_;
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
else
{
lean_inc(v_a_386_);
lean_dec(v___x_376_);
v___x_388_ = lean_box(0);
v_isShared_389_ = v_isSharedCheck_393_;
goto v_resetjp_387_;
}
v_resetjp_387_:
{
lean_object* v___x_391_; 
if (v_isShared_389_ == 0)
{
v___x_391_ = v___x_388_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_386_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec(v_goal_318_);
v_a_394_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_374_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_374_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
v___jp_402_:
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = l_Lean_Expr_letValue_x21(v_target_319_);
v___x_415_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_isDuplicable(v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v_options_416_; uint8_t v_hasTrace_417_; 
lean_dec_ref(v___x_414_);
v_options_416_ = lean_ctor_get(v___y_412_, 2);
v_hasTrace_417_ = lean_ctor_get_uint8(v_options_416_, sizeof(void*)*1);
if (v_hasTrace_417_ == 0)
{
v___y_333_ = v___y_403_;
v___y_334_ = v___y_404_;
v___y_335_ = v___y_408_;
v___y_336_ = v___y_409_;
v___y_337_ = v___y_410_;
v___y_338_ = v___y_411_;
v___y_339_ = v___y_412_;
v___y_340_ = v___y_413_;
goto v___jp_332_;
}
else
{
lean_object* v_inheritedTraceOptions_418_; lean_object* v___x_419_; lean_object* v___x_420_; uint8_t v___x_421_; 
v_inheritedTraceOptions_418_ = lean_ctor_get(v___y_412_, 13);
v___x_419_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___x_420_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_421_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_418_, v_options_416_, v___x_420_);
if (v___x_421_ == 0)
{
v___y_333_ = v___y_403_;
v___y_334_ = v___y_404_;
v___y_335_ = v___y_408_;
v___y_336_ = v___y_409_;
v___y_337_ = v___y_410_;
v___y_338_ = v___y_411_;
v___y_339_ = v___y_412_;
v___y_340_ = v___y_413_;
goto v___jp_332_;
}
else
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_422_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__1);
v___x_423_ = l_Lean_Expr_letName_x21(v_target_319_);
v___x_424_ = l_Lean_MessageData_ofName(v___x_423_);
v___x_425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_425_, 0, v___x_422_);
lean_ctor_set(v___x_425_, 1, v___x_424_);
v___x_426_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___x_419_, v___x_425_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
if (lean_obj_tag(v___x_426_) == 0)
{
lean_dec_ref_known(v___x_426_, 1);
v___y_333_ = v___y_403_;
v___y_334_ = v___y_404_;
v___y_335_ = v___y_408_;
v___y_336_ = v___y_409_;
v___y_337_ = v___y_410_;
v___y_338_ = v___y_411_;
v___y_339_ = v___y_412_;
v___y_340_ = v___y_413_;
goto v___jp_332_;
}
else
{
lean_object* v_a_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_434_; 
lean_dec(v_goal_318_);
v_a_427_ = lean_ctor_get(v___x_426_, 0);
v_isSharedCheck_434_ = !lean_is_exclusive(v___x_426_);
if (v_isSharedCheck_434_ == 0)
{
v___x_429_ = v___x_426_;
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_a_427_);
lean_dec(v___x_426_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_434_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v___x_432_; 
if (v_isShared_430_ == 0)
{
v___x_432_ = v___x_429_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_a_427_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
}
}
}
else
{
lean_object* v_options_435_; uint8_t v_hasTrace_436_; 
v_options_435_ = lean_ctor_get(v___y_412_, 2);
v_hasTrace_436_ = lean_ctor_get_uint8(v_options_435_, sizeof(void*)*1);
if (v_hasTrace_436_ == 0)
{
v___y_364_ = v___x_414_;
v___y_365_ = v___y_409_;
v___y_366_ = v___y_410_;
v___y_367_ = v___y_411_;
v___y_368_ = v___y_412_;
v___y_369_ = v___y_413_;
goto v___jp_363_;
}
else
{
lean_object* v_inheritedTraceOptions_437_; lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
v_inheritedTraceOptions_437_ = lean_ctor_get(v___y_412_, 13);
v___x_438_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___x_439_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_440_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_437_, v_options_435_, v___x_439_);
if (v___x_440_ == 0)
{
v___y_364_ = v___x_414_;
v___y_365_ = v___y_409_;
v___y_366_ = v___y_410_;
v___y_367_ = v___y_411_;
v___y_368_ = v___y_412_;
v___y_369_ = v___y_413_;
goto v___jp_363_;
}
else
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; 
v___x_441_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__11, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__11_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__11);
v___x_442_ = l_Lean_Expr_letName_x21(v_target_319_);
v___x_443_ = l_Lean_MessageData_ofName(v___x_442_);
v___x_444_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_441_);
lean_ctor_set(v___x_444_, 1, v___x_443_);
v___x_445_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___x_438_, v___x_444_, v___y_410_, v___y_411_, v___y_412_, v___y_413_);
if (lean_obj_tag(v___x_445_) == 0)
{
lean_dec_ref_known(v___x_445_, 1);
v___y_364_ = v___x_414_;
v___y_365_ = v___y_409_;
v___y_366_ = v___y_410_;
v___y_367_ = v___y_411_;
v___y_368_ = v___y_412_;
v___y_369_ = v___y_413_;
goto v___jp_363_;
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec_ref(v___x_414_);
lean_dec(v_goal_318_);
v_a_446_ = lean_ctor_get(v___x_445_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_445_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_445_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_445_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___boxed(lean_object* v_goal_476_, lean_object* v_target_477_, lean_object* v_a_478_, lean_object* v_a_479_, lean_object* v_a_480_, lean_object* v_a_481_, lean_object* v_a_482_, lean_object* v_a_483_, lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro(v_goal_476_, v_target_477_, v_a_478_, v_a_479_, v_a_480_, v_a_481_, v_a_482_, v_a_483_, v_a_484_, v_a_485_, v_a_486_, v_a_487_, v_a_488_);
lean_dec(v_a_488_);
lean_dec_ref(v_a_487_);
lean_dec(v_a_486_);
lean_dec_ref(v_a_485_);
lean_dec(v_a_484_);
lean_dec_ref(v_a_483_);
lean_dec(v_a_482_);
lean_dec_ref(v_a_481_);
lean_dec(v_a_480_);
lean_dec(v_a_479_);
lean_dec_ref(v_a_478_);
lean_dec_ref(v_target_477_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0(lean_object* v_cls_491_, lean_object* v_msg_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v_cls_491_, v_msg_492_, v___y_500_, v___y_501_, v___y_502_, v___y_503_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___boxed(lean_object* v_cls_506_, lean_object* v_msg_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0(v_cls_506_, v_msg_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_, v___y_516_, v___y_517_, v___y_518_);
lean_dec(v___y_518_);
lean_dec_ref(v___y_517_);
lean_dec(v___y_516_);
lean_dec_ref(v___y_515_);
lean_dec(v___y_514_);
lean_dec_ref(v___y_513_);
lean_dec(v___y_512_);
lean_dec_ref(v___y_511_);
lean_dec(v___y_510_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1(lean_object* v_00_u03b1_521_, lean_object* v_msg_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_){
_start:
{
lean_object* v___x_535_; 
v___x_535_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(v_msg_522_, v___y_530_, v___y_531_, v___y_532_, v___y_533_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___boxed(lean_object* v_00_u03b1_536_, lean_object* v_msg_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1(v_00_u03b1_536_, v_msg_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
lean_dec(v___y_548_);
lean_dec_ref(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold(lean_object* v_goal_557_, lean_object* v_target_558_, lean_object* v_a_559_, lean_object* v_a_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_571_ = l_Lean_Expr_getAppFn(v_target_558_);
v___x_572_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___closed__2));
v___x_573_ = l_Lean_Expr_isConstOf(v___x_571_, v___x_572_);
lean_dec_ref(v___x_571_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_dec(v_goal_557_);
v___x_574_ = lean_box(0);
v___x_575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
return v___x_575_;
}
else
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_tripleOfWP(v_goal_557_, v_a_559_, v_a_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, v_a_569_);
if (lean_obj_tag(v___x_576_) == 0)
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_585_; 
v_a_577_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_585_ == 0)
{
v___x_579_ = v___x_576_;
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_576_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_585_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_583_; 
v___x_581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_581_, 0, v_a_577_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 0, v___x_581_);
v___x_583_ = v___x_579_;
goto v_reusejp_582_;
}
else
{
lean_object* v_reuseFailAlloc_584_; 
v_reuseFailAlloc_584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_584_, 0, v___x_581_);
v___x_583_ = v_reuseFailAlloc_584_;
goto v_reusejp_582_;
}
v_reusejp_582_:
{
return v___x_583_;
}
}
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
v_a_586_ = lean_ctor_get(v___x_576_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_576_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_576_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_576_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold___boxed(lean_object* v_goal_594_, lean_object* v_target_595_, lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_){
_start:
{
lean_object* v_res_608_; 
v_res_608_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold(v_goal_594_, v_target_595_, v_a_596_, v_a_597_, v_a_598_, v_a_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_);
lean_dec(v_a_606_);
lean_dec_ref(v_a_605_);
lean_dec(v_a_604_);
lean_dec_ref(v_a_603_);
lean_dec(v_a_602_);
lean_dec_ref(v_a_601_);
lean_dec(v_a_600_);
lean_dec_ref(v_a_599_);
lean_dec(v_a_598_);
lean_dec(v_a_597_);
lean_dec_ref(v_a_596_);
lean_dec_ref(v_target_595_);
return v_res_608_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__1(void){
_start:
{
lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_610_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__0));
v___x_611_ = l_Lean_stringToMessageData(v___x_610_);
return v___x_611_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__5(void){
_start:
{
uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_619_ = 0;
v___x_620_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__4));
v___x_621_ = l_Lean_MessageData_ofConstName(v___x_620_, v___x_619_);
return v___x_621_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__6(void){
_start:
{
lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; 
v___x_622_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__5, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__5);
v___x_623_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__1);
v___x_624_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_623_);
lean_ctor_set(v___x_624_, 1, v___x_622_);
return v___x_624_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__8(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__7));
v___x_627_ = l_Lean_stringToMessageData(v___x_626_);
return v___x_627_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__9(void){
_start:
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__8, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__8_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__8);
v___x_629_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__6, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__6);
v___x_630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_629_);
lean_ctor_set(v___x_630_, 1, v___x_628_);
return v___x_630_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__11(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__10));
v___x_633_ = l_Lean_stringToMessageData(v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro(lean_object* v_goal_634_, lean_object* v_T_635_, lean_object* v_a_636_, lean_object* v_a_637_, lean_object* v_a_638_, lean_object* v_a_639_, lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_, lean_object* v_a_645_, lean_object* v_a_646_){
_start:
{
uint8_t v___x_648_; 
v___x_648_ = l_Lean_Expr_isLambda(v_T_635_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; lean_object* v___x_650_; 
lean_dec(v_goal_634_);
v___x_649_ = lean_box(0);
v___x_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_650_, 0, v___x_649_);
return v___x_650_;
}
else
{
lean_object* v_entailsConsIntroRule_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_entailsConsIntroRule_651_ = lean_ctor_get(v_a_636_, 0);
v___x_652_ = lean_box(0);
lean_inc(v_goal_634_);
lean_inc_ref(v_entailsConsIntroRule_651_);
v___x_653_ = l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(v_entailsConsIntroRule_651_, v_goal_634_, v___x_652_, v_a_636_, v_a_637_, v_a_638_, v_a_639_, v_a_640_, v_a_641_, v_a_642_, v_a_643_, v_a_644_, v_a_645_, v_a_646_);
if (lean_obj_tag(v___x_653_) == 0)
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_692_; 
v_a_654_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_692_ == 0)
{
v___x_656_ = v___x_653_;
v_isShared_657_ = v_isSharedCheck_692_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_653_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_692_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___y_659_; lean_object* v___y_660_; lean_object* v___y_661_; lean_object* v___y_662_; 
if (lean_obj_tag(v_a_654_) == 1)
{
lean_object* v_mvarIds_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_691_; 
v_mvarIds_679_ = lean_ctor_get(v_a_654_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v_a_654_);
if (v_isSharedCheck_691_ == 0)
{
v___x_681_ = v_a_654_;
v_isShared_682_ = v_isSharedCheck_691_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_mvarIds_679_);
lean_dec(v_a_654_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_691_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
if (lean_obj_tag(v_mvarIds_679_) == 1)
{
lean_object* v_tail_683_; 
v_tail_683_ = lean_ctor_get(v_mvarIds_679_, 1);
if (lean_obj_tag(v_tail_683_) == 0)
{
lean_object* v_head_684_; lean_object* v___x_686_; 
lean_dec(v_goal_634_);
v_head_684_ = lean_ctor_get(v_mvarIds_679_, 0);
lean_inc(v_head_684_);
lean_dec_ref_known(v_mvarIds_679_, 2);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 0, v_head_684_);
v___x_686_ = v___x_681_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_690_; 
v_reuseFailAlloc_690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_690_, 0, v_head_684_);
v___x_686_ = v_reuseFailAlloc_690_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
lean_object* v___x_688_; 
if (v_isShared_657_ == 0)
{
lean_ctor_set(v___x_656_, 0, v___x_686_);
v___x_688_ = v___x_656_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_689_; 
v_reuseFailAlloc_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_689_, 0, v___x_686_);
v___x_688_ = v_reuseFailAlloc_689_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
return v___x_688_;
}
}
}
else
{
lean_dec_ref_known(v_mvarIds_679_, 2);
lean_del_object(v___x_681_);
lean_del_object(v___x_656_);
v___y_659_ = v_a_643_;
v___y_660_ = v_a_644_;
v___y_661_ = v_a_645_;
v___y_662_ = v_a_646_;
goto v___jp_658_;
}
}
else
{
lean_del_object(v___x_681_);
lean_dec(v_mvarIds_679_);
lean_del_object(v___x_656_);
v___y_659_ = v_a_643_;
v___y_660_ = v_a_644_;
v___y_661_ = v_a_645_;
v___y_662_ = v_a_646_;
goto v___jp_658_;
}
}
}
else
{
lean_del_object(v___x_656_);
lean_dec(v_a_654_);
v___y_659_ = v_a_643_;
v___y_660_ = v_a_644_;
v___y_661_ = v_a_645_;
v___y_662_ = v_a_646_;
goto v___jp_658_;
}
v___jp_658_:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lean_MVarId_getType(v_goal_634_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_665_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__9);
v___x_666_ = l_Lean_MessageData_ofExpr(v_a_664_);
v___x_667_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_667_, 0, v___x_665_);
lean_ctor_set(v___x_667_, 1, v___x_666_);
v___x_668_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__11, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__11_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___closed__11);
v___x_669_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_669_, 0, v___x_667_);
lean_ctor_set(v___x_669_, 1, v___x_668_);
v___x_670_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(v___x_669_, v___y_659_, v___y_660_, v___y_661_, v___y_662_);
return v___x_670_;
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_a_671_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_663_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_663_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_700_; 
lean_dec(v_goal_634_);
v_a_693_ = lean_ctor_get(v___x_653_, 0);
v_isSharedCheck_700_ = !lean_is_exclusive(v___x_653_);
if (v_isSharedCheck_700_ == 0)
{
v___x_695_ = v___x_653_;
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_a_693_);
lean_dec(v___x_653_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_700_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_698_; 
if (v_isShared_696_ == 0)
{
v___x_698_ = v___x_695_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_693_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro___boxed(lean_object* v_goal_701_, lean_object* v_T_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_){
_start:
{
lean_object* v_res_715_; 
v_res_715_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro(v_goal_701_, v_T_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_, v_a_711_, v_a_712_, v_a_713_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
lean_dec_ref(v_a_710_);
lean_dec(v_a_709_);
lean_dec_ref(v_a_708_);
lean_dec(v_a_707_);
lean_dec_ref(v_a_706_);
lean_dec(v_a_705_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec_ref(v_T_702_);
return v_res_715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(lean_object* v_f_716_, lean_object* v_a_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_){
_start:
{
lean_object* v___y_726_; lean_object* v___x_729_; uint8_t v_debug_730_; 
v___x_729_ = lean_st_ref_get(v___y_719_);
v_debug_730_ = lean_ctor_get_uint8(v___x_729_, sizeof(void*)*10);
lean_dec(v___x_729_);
if (v_debug_730_ == 0)
{
v___y_726_ = v___y_719_;
goto v___jp_725_;
}
else
{
lean_object* v___x_731_; 
lean_inc_ref(v_f_716_);
v___x_731_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_f_716_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
if (lean_obj_tag(v___x_731_) == 0)
{
lean_object* v___x_732_; 
lean_dec_ref_known(v___x_731_, 1);
lean_inc_ref(v_a_717_);
v___x_732_ = l_Lean_Meta_Sym_Internal_Sym_assertShared(v_a_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
if (lean_obj_tag(v___x_732_) == 0)
{
lean_dec_ref_known(v___x_732_, 1);
v___y_726_ = v___y_719_;
goto v___jp_725_;
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec_ref(v_a_717_);
lean_dec_ref(v_f_716_);
v_a_733_ = lean_ctor_get(v___x_732_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_732_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_732_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_732_);
v___x_735_ = lean_box(0);
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
v_resetjp_734_:
{
lean_object* v___x_738_; 
if (v_isShared_736_ == 0)
{
v___x_738_ = v___x_735_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_739_; 
v_reuseFailAlloc_739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_739_, 0, v_a_733_);
v___x_738_ = v_reuseFailAlloc_739_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
return v___x_738_;
}
}
}
}
else
{
lean_object* v_a_741_; lean_object* v___x_743_; uint8_t v_isShared_744_; uint8_t v_isSharedCheck_748_; 
lean_dec_ref(v_a_717_);
lean_dec_ref(v_f_716_);
v_a_741_ = lean_ctor_get(v___x_731_, 0);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_731_);
if (v_isSharedCheck_748_ == 0)
{
v___x_743_ = v___x_731_;
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
else
{
lean_inc(v_a_741_);
lean_dec(v___x_731_);
v___x_743_ = lean_box(0);
v_isShared_744_ = v_isSharedCheck_748_;
goto v_resetjp_742_;
}
v_resetjp_742_:
{
lean_object* v___x_746_; 
if (v_isShared_744_ == 0)
{
v___x_746_ = v___x_743_;
goto v_reusejp_745_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v_a_741_);
v___x_746_ = v_reuseFailAlloc_747_;
goto v_reusejp_745_;
}
v_reusejp_745_:
{
return v___x_746_;
}
}
}
}
v___jp_725_:
{
lean_object* v___x_727_; lean_object* v___x_728_; 
v___x_727_ = l_Lean_Expr_app___override(v_f_716_, v_a_717_);
v___x_728_ = l_Lean_Meta_Sym_Internal_Sym_share1___redArg(v___x_727_, v___y_726_);
return v___x_728_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg___boxed(lean_object* v_f_749_, lean_object* v_a_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_){
_start:
{
lean_object* v_res_758_; 
v_res_758_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_f_749_, v_a_750_, v___y_751_, v___y_752_, v___y_753_, v___y_754_, v___y_755_, v___y_756_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v___y_753_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
return v_res_758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__0(lean_object* v_f_759_, lean_object* v_a_u2081_760_, lean_object* v_a_u2082_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v___x_774_; 
v___x_774_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_f_759_, v_a_u2081_760_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
if (lean_obj_tag(v___x_774_) == 0)
{
lean_object* v_a_775_; lean_object* v___x_776_; 
v_a_775_ = lean_ctor_get(v___x_774_, 0);
lean_inc(v_a_775_);
lean_dec_ref_known(v___x_774_, 1);
v___x_776_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_a_775_, v_a_u2082_761_, v___y_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_, v___y_772_);
return v___x_776_;
}
else
{
lean_dec_ref(v_a_u2082_761_);
return v___x_774_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__0___boxed(lean_object* v_f_777_, lean_object* v_a_u2081_778_, lean_object* v_a_u2082_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v_res_792_; 
v_res_792_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__0(v_f_777_, v_a_u2081_778_, v_a_u2082_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_);
lean_dec(v___y_790_);
lean_dec_ref(v___y_789_);
lean_dec(v___y_788_);
lean_dec_ref(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec(v___y_781_);
lean_dec_ref(v___y_780_);
return v_res_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(lean_object* v_f_793_, lean_object* v_a_u2081_794_, lean_object* v_a_u2082_795_, lean_object* v_a_u2083_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_){
_start:
{
lean_object* v___x_809_; 
v___x_809_ = l_Lean_Meta_Sym_Internal_mkAppS_u2082___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__0(v_f_793_, v_a_u2081_794_, v_a_u2082_795_, v___y_797_, v___y_798_, v___y_799_, v___y_800_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
if (lean_obj_tag(v___x_809_) == 0)
{
lean_object* v_a_810_; lean_object* v___x_811_; 
v_a_810_ = lean_ctor_get(v___x_809_, 0);
lean_inc(v_a_810_);
lean_dec_ref_known(v___x_809_, 1);
v___x_811_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_a_810_, v_a_u2083_796_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, v___y_806_, v___y_807_);
return v___x_811_;
}
else
{
lean_dec_ref(v_a_u2083_796_);
return v___x_809_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0___boxed(lean_object* v_f_812_, lean_object* v_a_u2081_813_, lean_object* v_a_u2082_814_, lean_object* v_a_u2083_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_){
_start:
{
lean_object* v_res_828_; 
v_res_828_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(v_f_812_, v_a_u2081_813_, v_a_u2082_814_, v_a_u2083_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, v___y_824_, v___y_825_, v___y_826_);
lean_dec(v___y_826_);
lean_dec_ref(v___y_825_);
lean_dec(v___y_824_);
lean_dec_ref(v___y_823_);
lean_dec(v___y_822_);
lean_dec_ref(v___y_821_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec(v___y_817_);
lean_dec_ref(v___y_816_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT(lean_object* v_goal_829_, lean_object* v_ent_830_, lean_object* v_00_u03c3s_831_, lean_object* v_H_832_, lean_object* v_T_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v_a_837_, lean_object* v_a_838_, lean_object* v_a_839_, lean_object* v_a_840_, lean_object* v_a_841_, lean_object* v_a_842_, lean_object* v_a_843_, lean_object* v_a_844_){
_start:
{
lean_object* v___x_846_; 
lean_inc_ref(v_H_832_);
v___x_846_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(v_H_832_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_846_) == 0)
{
lean_object* v_a_847_; lean_object* v___x_848_; 
v_a_847_ = lean_ctor_get(v___x_846_, 0);
lean_inc(v_a_847_);
lean_dec_ref_known(v___x_846_, 1);
lean_inc_ref(v_T_833_);
v___x_848_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(v_T_833_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_893_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_893_ == 0)
{
v___x_851_ = v___x_848_;
v_isShared_852_ = v_isSharedCheck_893_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_848_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_893_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v___y_854_; lean_object* v___y_855_; lean_object* v___y_885_; 
if (lean_obj_tag(v_a_847_) == 0)
{
if (lean_obj_tag(v_a_849_) == 0)
{
lean_object* v___x_889_; lean_object* v___x_891_; 
lean_dec_ref(v_T_833_);
lean_dec_ref(v_H_832_);
lean_dec_ref(v_00_u03c3s_831_);
lean_dec_ref(v_ent_830_);
lean_dec(v_goal_829_);
v___x_889_ = lean_box(0);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_889_);
v___x_891_ = v___x_851_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v___x_889_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
else
{
lean_del_object(v___x_851_);
goto v___jp_887_;
}
}
else
{
lean_del_object(v___x_851_);
goto v___jp_887_;
}
v___jp_853_:
{
lean_object* v___x_856_; 
v___x_856_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(v_ent_830_, v_00_u03c3s_831_, v___y_854_, v___y_855_, v_a_834_, v_a_835_, v_a_836_, v_a_837_, v_a_838_, v_a_839_, v_a_840_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_856_) == 0)
{
lean_object* v_a_857_; lean_object* v___x_858_; 
v_a_857_ = lean_ctor_get(v___x_856_, 0);
lean_inc(v_a_857_);
lean_dec_ref_known(v___x_856_, 1);
v___x_858_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_829_, v_a_857_, v_a_841_, v_a_842_, v_a_843_, v_a_844_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_867_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_867_ == 0)
{
v___x_861_ = v___x_858_;
v_isShared_862_ = v_isSharedCheck_867_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_858_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_867_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_863_; lean_object* v___x_865_; 
v___x_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_863_, 0, v_a_859_);
if (v_isShared_862_ == 0)
{
lean_ctor_set(v___x_861_, 0, v___x_863_);
v___x_865_ = v___x_861_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v___x_863_);
v___x_865_ = v_reuseFailAlloc_866_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
return v___x_865_;
}
}
}
else
{
lean_object* v_a_868_; lean_object* v___x_870_; uint8_t v_isShared_871_; uint8_t v_isSharedCheck_875_; 
v_a_868_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_875_ == 0)
{
v___x_870_ = v___x_858_;
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
else
{
lean_inc(v_a_868_);
lean_dec(v___x_858_);
v___x_870_ = lean_box(0);
v_isShared_871_ = v_isSharedCheck_875_;
goto v_resetjp_869_;
}
v_resetjp_869_:
{
lean_object* v___x_873_; 
if (v_isShared_871_ == 0)
{
v___x_873_ = v___x_870_;
goto v_reusejp_872_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_a_868_);
v___x_873_ = v_reuseFailAlloc_874_;
goto v_reusejp_872_;
}
v_reusejp_872_:
{
return v___x_873_;
}
}
}
}
else
{
lean_object* v_a_876_; lean_object* v___x_878_; uint8_t v_isShared_879_; uint8_t v_isSharedCheck_883_; 
lean_dec(v_goal_829_);
v_a_876_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_883_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_883_ == 0)
{
v___x_878_ = v___x_856_;
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
else
{
lean_inc(v_a_876_);
lean_dec(v___x_856_);
v___x_878_ = lean_box(0);
v_isShared_879_ = v_isSharedCheck_883_;
goto v_resetjp_877_;
}
v_resetjp_877_:
{
lean_object* v___x_881_; 
if (v_isShared_879_ == 0)
{
v___x_881_ = v___x_878_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v_a_876_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
}
v___jp_884_:
{
if (lean_obj_tag(v_a_849_) == 0)
{
v___y_854_ = v___y_885_;
v___y_855_ = v_T_833_;
goto v___jp_853_;
}
else
{
lean_object* v_val_886_; 
lean_dec_ref(v_T_833_);
v_val_886_ = lean_ctor_get(v_a_849_, 0);
lean_inc(v_val_886_);
lean_dec_ref_known(v_a_849_, 1);
v___y_854_ = v___y_885_;
v___y_855_ = v_val_886_;
goto v___jp_853_;
}
}
v___jp_887_:
{
if (lean_obj_tag(v_a_847_) == 0)
{
v___y_885_ = v_H_832_;
goto v___jp_884_;
}
else
{
lean_object* v_val_888_; 
lean_dec_ref(v_H_832_);
v_val_888_ = lean_ctor_get(v_a_847_, 0);
lean_inc(v_val_888_);
lean_dec_ref_known(v_a_847_, 1);
v___y_885_ = v_val_888_;
goto v___jp_884_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
lean_dec(v_a_847_);
lean_dec_ref(v_T_833_);
lean_dec_ref(v_H_832_);
lean_dec_ref(v_00_u03c3s_831_);
lean_dec_ref(v_ent_830_);
lean_dec(v_goal_829_);
v_a_894_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_848_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_848_);
v___x_896_ = lean_box(0);
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
v_resetjp_895_:
{
lean_object* v___x_899_; 
if (v_isShared_897_ == 0)
{
v___x_899_ = v___x_896_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_a_894_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
}
}
else
{
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
lean_dec_ref(v_T_833_);
lean_dec_ref(v_H_832_);
lean_dec_ref(v_00_u03c3s_831_);
lean_dec_ref(v_ent_830_);
lean_dec(v_goal_829_);
v_a_902_ = lean_ctor_get(v___x_846_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_846_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_846_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_846_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT___boxed(lean_object** _args){
lean_object* v_goal_910_ = _args[0];
lean_object* v_ent_911_ = _args[1];
lean_object* v_00_u03c3s_912_ = _args[2];
lean_object* v_H_913_ = _args[3];
lean_object* v_T_914_ = _args[4];
lean_object* v_a_915_ = _args[5];
lean_object* v_a_916_ = _args[6];
lean_object* v_a_917_ = _args[7];
lean_object* v_a_918_ = _args[8];
lean_object* v_a_919_ = _args[9];
lean_object* v_a_920_ = _args[10];
lean_object* v_a_921_ = _args[11];
lean_object* v_a_922_ = _args[12];
lean_object* v_a_923_ = _args[13];
lean_object* v_a_924_ = _args[14];
lean_object* v_a_925_ = _args[15];
lean_object* v_a_926_ = _args[16];
_start:
{
lean_object* v_res_927_; 
v_res_927_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT(v_goal_910_, v_ent_911_, v_00_u03c3s_912_, v_H_913_, v_T_914_, v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_, v_a_925_);
lean_dec(v_a_925_);
lean_dec_ref(v_a_924_);
lean_dec(v_a_923_);
lean_dec_ref(v_a_922_);
lean_dec(v_a_921_);
lean_dec_ref(v_a_920_);
lean_dec(v_a_919_);
lean_dec_ref(v_a_918_);
lean_dec(v_a_917_);
lean_dec(v_a_916_);
lean_dec_ref(v_a_915_);
return v_res_927_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1(lean_object* v_f_928_, lean_object* v_a_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_){
_start:
{
lean_object* v___x_942_; 
v___x_942_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_f_928_, v_a_929_, v___y_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
return v___x_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___boxed(lean_object* v_f_943_, lean_object* v_a_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1(v_f_943_, v_a_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___y_951_);
lean_dec_ref(v___y_950_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
lean_dec(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_958_, lean_object* v_x_959_, lean_object* v_x_960_, lean_object* v_x_961_){
_start:
{
lean_object* v_ks_962_; lean_object* v_vs_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_987_; 
v_ks_962_ = lean_ctor_get(v_x_958_, 0);
v_vs_963_ = lean_ctor_get(v_x_958_, 1);
v_isSharedCheck_987_ = !lean_is_exclusive(v_x_958_);
if (v_isSharedCheck_987_ == 0)
{
v___x_965_ = v_x_958_;
v_isShared_966_ = v_isSharedCheck_987_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_vs_963_);
lean_inc(v_ks_962_);
lean_dec(v_x_958_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_987_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_967_ = lean_array_get_size(v_ks_962_);
v___x_968_ = lean_nat_dec_lt(v_x_959_, v___x_967_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_972_; 
lean_dec(v_x_959_);
v___x_969_ = lean_array_push(v_ks_962_, v_x_960_);
v___x_970_ = lean_array_push(v_vs_963_, v_x_961_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v___x_970_);
lean_ctor_set(v___x_965_, 0, v___x_969_);
v___x_972_ = v___x_965_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v___x_969_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v___x_970_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
else
{
lean_object* v_k_x27_974_; uint8_t v___x_975_; 
v_k_x27_974_ = lean_array_fget_borrowed(v_ks_962_, v_x_959_);
v___x_975_ = l_Lean_instBEqMVarId_beq(v_x_960_, v_k_x27_974_);
if (v___x_975_ == 0)
{
lean_object* v___x_977_; 
if (v_isShared_966_ == 0)
{
v___x_977_ = v___x_965_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_ks_962_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v_vs_963_);
v___x_977_ = v_reuseFailAlloc_981_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = lean_unsigned_to_nat(1u);
v___x_979_ = lean_nat_add(v_x_959_, v___x_978_);
lean_dec(v_x_959_);
v_x_958_ = v___x_977_;
v_x_959_ = v___x_979_;
goto _start;
}
}
else
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_985_; 
v___x_982_ = lean_array_fset(v_ks_962_, v_x_959_, v_x_960_);
v___x_983_ = lean_array_fset(v_vs_963_, v_x_959_, v_x_961_);
lean_dec(v_x_959_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v___x_983_);
lean_ctor_set(v___x_965_, 0, v___x_982_);
v___x_985_ = v___x_965_;
goto v_reusejp_984_;
}
else
{
lean_object* v_reuseFailAlloc_986_; 
v_reuseFailAlloc_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_986_, 0, v___x_982_);
lean_ctor_set(v_reuseFailAlloc_986_, 1, v___x_983_);
v___x_985_ = v_reuseFailAlloc_986_;
goto v_reusejp_984_;
}
v_reusejp_984_:
{
return v___x_985_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_n_988_, lean_object* v_k_989_, lean_object* v_v_990_){
_start:
{
lean_object* v___x_991_; lean_object* v___x_992_; 
v___x_991_ = lean_unsigned_to_nat(0u);
v___x_992_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_n_988_, v___x_991_, v_k_989_, v_v_990_);
return v___x_992_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_993_; size_t v___x_994_; size_t v___x_995_; 
v___x_993_ = ((size_t)5ULL);
v___x_994_ = ((size_t)1ULL);
v___x_995_ = lean_usize_shift_left(v___x_994_, v___x_993_);
return v___x_995_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_996_; size_t v___x_997_; size_t v___x_998_; 
v___x_996_ = ((size_t)1ULL);
v___x_997_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_998_ = lean_usize_sub(v___x_997_, v___x_996_);
return v___x_998_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_999_; 
v___x_999_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_999_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(lean_object* v_x_1000_, size_t v_x_1001_, size_t v_x_1002_, lean_object* v_x_1003_, lean_object* v_x_1004_){
_start:
{
if (lean_obj_tag(v_x_1000_) == 0)
{
lean_object* v_es_1005_; size_t v___x_1006_; size_t v___x_1007_; size_t v___x_1008_; size_t v___x_1009_; lean_object* v_j_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
v_es_1005_ = lean_ctor_get(v_x_1000_, 0);
v___x_1006_ = ((size_t)5ULL);
v___x_1007_ = ((size_t)1ULL);
v___x_1008_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_1009_ = lean_usize_land(v_x_1001_, v___x_1008_);
v_j_1010_ = lean_usize_to_nat(v___x_1009_);
v___x_1011_ = lean_array_get_size(v_es_1005_);
v___x_1012_ = lean_nat_dec_lt(v_j_1010_, v___x_1011_);
if (v___x_1012_ == 0)
{
lean_dec(v_j_1010_);
lean_dec(v_x_1004_);
lean_dec(v_x_1003_);
return v_x_1000_;
}
else
{
lean_object* v___x_1014_; uint8_t v_isShared_1015_; uint8_t v_isSharedCheck_1049_; 
lean_inc_ref(v_es_1005_);
v_isSharedCheck_1049_ = !lean_is_exclusive(v_x_1000_);
if (v_isSharedCheck_1049_ == 0)
{
lean_object* v_unused_1050_; 
v_unused_1050_ = lean_ctor_get(v_x_1000_, 0);
lean_dec(v_unused_1050_);
v___x_1014_ = v_x_1000_;
v_isShared_1015_ = v_isSharedCheck_1049_;
goto v_resetjp_1013_;
}
else
{
lean_dec(v_x_1000_);
v___x_1014_ = lean_box(0);
v_isShared_1015_ = v_isSharedCheck_1049_;
goto v_resetjp_1013_;
}
v_resetjp_1013_:
{
lean_object* v_v_1016_; lean_object* v___x_1017_; lean_object* v_xs_x27_1018_; lean_object* v___y_1020_; 
v_v_1016_ = lean_array_fget(v_es_1005_, v_j_1010_);
v___x_1017_ = lean_box(0);
v_xs_x27_1018_ = lean_array_fset(v_es_1005_, v_j_1010_, v___x_1017_);
switch(lean_obj_tag(v_v_1016_))
{
case 0:
{
lean_object* v_key_1025_; lean_object* v_val_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1036_; 
v_key_1025_ = lean_ctor_get(v_v_1016_, 0);
v_val_1026_ = lean_ctor_get(v_v_1016_, 1);
v_isSharedCheck_1036_ = !lean_is_exclusive(v_v_1016_);
if (v_isSharedCheck_1036_ == 0)
{
v___x_1028_ = v_v_1016_;
v_isShared_1029_ = v_isSharedCheck_1036_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_val_1026_);
lean_inc(v_key_1025_);
lean_dec(v_v_1016_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1036_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
uint8_t v___x_1030_; 
v___x_1030_ = l_Lean_instBEqMVarId_beq(v_x_1003_, v_key_1025_);
if (v___x_1030_ == 0)
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_del_object(v___x_1028_);
v___x_1031_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1025_, v_val_1026_, v_x_1003_, v_x_1004_);
v___x_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1031_);
v___y_1020_ = v___x_1032_;
goto v___jp_1019_;
}
else
{
lean_object* v___x_1034_; 
lean_dec(v_val_1026_);
lean_dec(v_key_1025_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 1, v_x_1004_);
lean_ctor_set(v___x_1028_, 0, v_x_1003_);
v___x_1034_ = v___x_1028_;
goto v_reusejp_1033_;
}
else
{
lean_object* v_reuseFailAlloc_1035_; 
v_reuseFailAlloc_1035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1035_, 0, v_x_1003_);
lean_ctor_set(v_reuseFailAlloc_1035_, 1, v_x_1004_);
v___x_1034_ = v_reuseFailAlloc_1035_;
goto v_reusejp_1033_;
}
v_reusejp_1033_:
{
v___y_1020_ = v___x_1034_;
goto v___jp_1019_;
}
}
}
}
case 1:
{
lean_object* v_node_1037_; lean_object* v___x_1039_; uint8_t v_isShared_1040_; uint8_t v_isSharedCheck_1047_; 
v_node_1037_ = lean_ctor_get(v_v_1016_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v_v_1016_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1039_ = v_v_1016_;
v_isShared_1040_ = v_isSharedCheck_1047_;
goto v_resetjp_1038_;
}
else
{
lean_inc(v_node_1037_);
lean_dec(v_v_1016_);
v___x_1039_ = lean_box(0);
v_isShared_1040_ = v_isSharedCheck_1047_;
goto v_resetjp_1038_;
}
v_resetjp_1038_:
{
size_t v___x_1041_; size_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1045_; 
v___x_1041_ = lean_usize_shift_right(v_x_1001_, v___x_1006_);
v___x_1042_ = lean_usize_add(v_x_1002_, v___x_1007_);
v___x_1043_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(v_node_1037_, v___x_1041_, v___x_1042_, v_x_1003_, v_x_1004_);
if (v_isShared_1040_ == 0)
{
lean_ctor_set(v___x_1039_, 0, v___x_1043_);
v___x_1045_ = v___x_1039_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v___x_1043_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
v___y_1020_ = v___x_1045_;
goto v___jp_1019_;
}
}
}
default: 
{
lean_object* v___x_1048_; 
v___x_1048_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1048_, 0, v_x_1003_);
lean_ctor_set(v___x_1048_, 1, v_x_1004_);
v___y_1020_ = v___x_1048_;
goto v___jp_1019_;
}
}
v___jp_1019_:
{
lean_object* v___x_1021_; lean_object* v___x_1023_; 
v___x_1021_ = lean_array_fset(v_xs_x27_1018_, v_j_1010_, v___y_1020_);
lean_dec(v_j_1010_);
if (v_isShared_1015_ == 0)
{
lean_ctor_set(v___x_1014_, 0, v___x_1021_);
v___x_1023_ = v___x_1014_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
}
else
{
lean_object* v_ks_1051_; lean_object* v_vs_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1072_; 
v_ks_1051_ = lean_ctor_get(v_x_1000_, 0);
v_vs_1052_ = lean_ctor_get(v_x_1000_, 1);
v_isSharedCheck_1072_ = !lean_is_exclusive(v_x_1000_);
if (v_isSharedCheck_1072_ == 0)
{
v___x_1054_ = v_x_1000_;
v_isShared_1055_ = v_isSharedCheck_1072_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_vs_1052_);
lean_inc(v_ks_1051_);
lean_dec(v_x_1000_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1072_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v___x_1057_; 
if (v_isShared_1055_ == 0)
{
v___x_1057_ = v___x_1054_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v_ks_1051_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v_vs_1052_);
v___x_1057_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
lean_object* v_newNode_1058_; uint8_t v___y_1060_; size_t v___x_1066_; uint8_t v___x_1067_; 
v_newNode_1058_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2___redArg(v___x_1057_, v_x_1003_, v_x_1004_);
v___x_1066_ = ((size_t)7ULL);
v___x_1067_ = lean_usize_dec_le(v___x_1066_, v_x_1002_);
if (v___x_1067_ == 0)
{
lean_object* v___x_1068_; lean_object* v___x_1069_; uint8_t v___x_1070_; 
v___x_1068_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1058_);
v___x_1069_ = lean_unsigned_to_nat(4u);
v___x_1070_ = lean_nat_dec_lt(v___x_1068_, v___x_1069_);
lean_dec(v___x_1068_);
v___y_1060_ = v___x_1070_;
goto v___jp_1059_;
}
else
{
v___y_1060_ = v___x_1067_;
goto v___jp_1059_;
}
v___jp_1059_:
{
if (v___y_1060_ == 0)
{
lean_object* v_ks_1061_; lean_object* v_vs_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_ks_1061_ = lean_ctor_get(v_newNode_1058_, 0);
lean_inc_ref(v_ks_1061_);
v_vs_1062_ = lean_ctor_get(v_newNode_1058_, 1);
lean_inc_ref(v_vs_1062_);
lean_dec_ref(v_newNode_1058_);
v___x_1063_ = lean_unsigned_to_nat(0u);
v___x_1064_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___closed__2);
v___x_1065_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg(v_x_1002_, v_ks_1061_, v_vs_1062_, v___x_1063_, v___x_1064_);
lean_dec_ref(v_vs_1062_);
lean_dec_ref(v_ks_1061_);
return v___x_1065_;
}
else
{
return v_newNode_1058_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg(size_t v_depth_1073_, lean_object* v_keys_1074_, lean_object* v_vals_1075_, lean_object* v_i_1076_, lean_object* v_entries_1077_){
_start:
{
lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1078_ = lean_array_get_size(v_keys_1074_);
v___x_1079_ = lean_nat_dec_lt(v_i_1076_, v___x_1078_);
if (v___x_1079_ == 0)
{
lean_dec(v_i_1076_);
return v_entries_1077_;
}
else
{
lean_object* v_k_1080_; lean_object* v_v_1081_; uint64_t v___x_1082_; size_t v_h_1083_; size_t v___x_1084_; lean_object* v___x_1085_; size_t v___x_1086_; size_t v___x_1087_; size_t v___x_1088_; size_t v_h_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; 
v_k_1080_ = lean_array_fget_borrowed(v_keys_1074_, v_i_1076_);
v_v_1081_ = lean_array_fget_borrowed(v_vals_1075_, v_i_1076_);
v___x_1082_ = l_Lean_instHashableMVarId_hash(v_k_1080_);
v_h_1083_ = lean_uint64_to_usize(v___x_1082_);
v___x_1084_ = ((size_t)5ULL);
v___x_1085_ = lean_unsigned_to_nat(1u);
v___x_1086_ = ((size_t)1ULL);
v___x_1087_ = lean_usize_sub(v_depth_1073_, v___x_1086_);
v___x_1088_ = lean_usize_mul(v___x_1084_, v___x_1087_);
v_h_1089_ = lean_usize_shift_right(v_h_1083_, v___x_1088_);
v___x_1090_ = lean_nat_add(v_i_1076_, v___x_1085_);
lean_dec(v_i_1076_);
lean_inc(v_v_1081_);
lean_inc(v_k_1080_);
v___x_1091_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(v_entries_1077_, v_h_1089_, v_depth_1073_, v_k_1080_, v_v_1081_);
v_i_1076_ = v___x_1090_;
v_entries_1077_ = v___x_1091_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_depth_1093_, lean_object* v_keys_1094_, lean_object* v_vals_1095_, lean_object* v_i_1096_, lean_object* v_entries_1097_){
_start:
{
size_t v_depth_boxed_1098_; lean_object* v_res_1099_; 
v_depth_boxed_1098_ = lean_unbox_usize(v_depth_1093_);
lean_dec(v_depth_1093_);
v_res_1099_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_boxed_1098_, v_keys_1094_, v_vals_1095_, v_i_1096_, v_entries_1097_);
lean_dec_ref(v_vals_1095_);
lean_dec_ref(v_keys_1094_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_1100_, lean_object* v_x_1101_, lean_object* v_x_1102_, lean_object* v_x_1103_, lean_object* v_x_1104_){
_start:
{
size_t v_x_28835__boxed_1105_; size_t v_x_28836__boxed_1106_; lean_object* v_res_1107_; 
v_x_28835__boxed_1105_ = lean_unbox_usize(v_x_1101_);
lean_dec(v_x_1101_);
v_x_28836__boxed_1106_ = lean_unbox_usize(v_x_1102_);
lean_dec(v_x_1102_);
v_res_1107_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(v_x_1100_, v_x_28835__boxed_1105_, v_x_28836__boxed_1106_, v_x_1103_, v_x_1104_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0___redArg(lean_object* v_x_1108_, lean_object* v_x_1109_, lean_object* v_x_1110_){
_start:
{
uint64_t v___x_1111_; size_t v___x_1112_; size_t v___x_1113_; lean_object* v___x_1114_; 
v___x_1111_ = l_Lean_instHashableMVarId_hash(v_x_1109_);
v___x_1112_ = lean_uint64_to_usize(v___x_1111_);
v___x_1113_ = ((size_t)1ULL);
v___x_1114_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(v_x_1108_, v___x_1112_, v___x_1113_, v_x_1109_, v_x_1110_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg(lean_object* v_mvarId_1115_, lean_object* v_val_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v___x_1119_; lean_object* v_mctx_1120_; lean_object* v_cache_1121_; lean_object* v_zetaDeltaFVarIds_1122_; lean_object* v_postponed_1123_; lean_object* v_diag_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1152_; 
v___x_1119_ = lean_st_ref_take(v___y_1117_);
v_mctx_1120_ = lean_ctor_get(v___x_1119_, 0);
v_cache_1121_ = lean_ctor_get(v___x_1119_, 1);
v_zetaDeltaFVarIds_1122_ = lean_ctor_get(v___x_1119_, 2);
v_postponed_1123_ = lean_ctor_get(v___x_1119_, 3);
v_diag_1124_ = lean_ctor_get(v___x_1119_, 4);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1126_ = v___x_1119_;
v_isShared_1127_ = v_isSharedCheck_1152_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_diag_1124_);
lean_inc(v_postponed_1123_);
lean_inc(v_zetaDeltaFVarIds_1122_);
lean_inc(v_cache_1121_);
lean_inc(v_mctx_1120_);
lean_dec(v___x_1119_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1152_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v_depth_1128_; lean_object* v_levelAssignDepth_1129_; lean_object* v_lmvarCounter_1130_; lean_object* v_mvarCounter_1131_; lean_object* v_lDecls_1132_; lean_object* v_decls_1133_; lean_object* v_userNames_1134_; lean_object* v_lAssignment_1135_; lean_object* v_eAssignment_1136_; lean_object* v_dAssignment_1137_; lean_object* v___x_1139_; uint8_t v_isShared_1140_; uint8_t v_isSharedCheck_1151_; 
v_depth_1128_ = lean_ctor_get(v_mctx_1120_, 0);
v_levelAssignDepth_1129_ = lean_ctor_get(v_mctx_1120_, 1);
v_lmvarCounter_1130_ = lean_ctor_get(v_mctx_1120_, 2);
v_mvarCounter_1131_ = lean_ctor_get(v_mctx_1120_, 3);
v_lDecls_1132_ = lean_ctor_get(v_mctx_1120_, 4);
v_decls_1133_ = lean_ctor_get(v_mctx_1120_, 5);
v_userNames_1134_ = lean_ctor_get(v_mctx_1120_, 6);
v_lAssignment_1135_ = lean_ctor_get(v_mctx_1120_, 7);
v_eAssignment_1136_ = lean_ctor_get(v_mctx_1120_, 8);
v_dAssignment_1137_ = lean_ctor_get(v_mctx_1120_, 9);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_mctx_1120_);
if (v_isSharedCheck_1151_ == 0)
{
v___x_1139_ = v_mctx_1120_;
v_isShared_1140_ = v_isSharedCheck_1151_;
goto v_resetjp_1138_;
}
else
{
lean_inc(v_dAssignment_1137_);
lean_inc(v_eAssignment_1136_);
lean_inc(v_lAssignment_1135_);
lean_inc(v_userNames_1134_);
lean_inc(v_decls_1133_);
lean_inc(v_lDecls_1132_);
lean_inc(v_mvarCounter_1131_);
lean_inc(v_lmvarCounter_1130_);
lean_inc(v_levelAssignDepth_1129_);
lean_inc(v_depth_1128_);
lean_dec(v_mctx_1120_);
v___x_1139_ = lean_box(0);
v_isShared_1140_ = v_isSharedCheck_1151_;
goto v_resetjp_1138_;
}
v_resetjp_1138_:
{
lean_object* v___x_1141_; lean_object* v___x_1143_; 
v___x_1141_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0___redArg(v_eAssignment_1136_, v_mvarId_1115_, v_val_1116_);
if (v_isShared_1140_ == 0)
{
lean_ctor_set(v___x_1139_, 8, v___x_1141_);
v___x_1143_ = v___x_1139_;
goto v_reusejp_1142_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v_depth_1128_);
lean_ctor_set(v_reuseFailAlloc_1150_, 1, v_levelAssignDepth_1129_);
lean_ctor_set(v_reuseFailAlloc_1150_, 2, v_lmvarCounter_1130_);
lean_ctor_set(v_reuseFailAlloc_1150_, 3, v_mvarCounter_1131_);
lean_ctor_set(v_reuseFailAlloc_1150_, 4, v_lDecls_1132_);
lean_ctor_set(v_reuseFailAlloc_1150_, 5, v_decls_1133_);
lean_ctor_set(v_reuseFailAlloc_1150_, 6, v_userNames_1134_);
lean_ctor_set(v_reuseFailAlloc_1150_, 7, v_lAssignment_1135_);
lean_ctor_set(v_reuseFailAlloc_1150_, 8, v___x_1141_);
lean_ctor_set(v_reuseFailAlloc_1150_, 9, v_dAssignment_1137_);
v___x_1143_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1142_;
}
v_reusejp_1142_:
{
lean_object* v___x_1145_; 
if (v_isShared_1127_ == 0)
{
lean_ctor_set(v___x_1126_, 0, v___x_1143_);
v___x_1145_ = v___x_1126_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1143_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_cache_1121_);
lean_ctor_set(v_reuseFailAlloc_1149_, 2, v_zetaDeltaFVarIds_1122_);
lean_ctor_set(v_reuseFailAlloc_1149_, 3, v_postponed_1123_);
lean_ctor_set(v_reuseFailAlloc_1149_, 4, v_diag_1124_);
v___x_1145_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1146_ = lean_st_ref_set(v___y_1117_, v___x_1145_);
v___x_1147_ = lean_box(0);
v___x_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1147_);
return v___x_1148_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg___boxed(lean_object* v_mvarId_1153_, lean_object* v_val_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_){
_start:
{
lean_object* v_res_1157_; 
v_res_1157_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg(v_mvarId_1153_, v_val_1154_, v___y_1155_);
lean_dec(v___y_1155_);
return v_res_1157_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__4(void){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__3));
v___x_1168_ = l_Lean_stringToMessageData(v___x_1167_);
return v___x_1168_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__7(void){
_start:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; 
v___x_1172_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__6));
v___x_1173_ = l_Lean_stringToMessageData(v___x_1172_);
return v___x_1173_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails(lean_object* v_goal_1174_, lean_object* v_ent_1175_, lean_object* v_00_u03c3s_1176_, lean_object* v_H_1177_, lean_object* v_T_1178_, lean_object* v_a_1179_, lean_object* v_a_1180_, lean_object* v_a_1181_, lean_object* v_a_1182_, lean_object* v_a_1183_, lean_object* v_a_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_, lean_object* v_a_1187_, lean_object* v_a_1188_, lean_object* v_a_1189_){
_start:
{
lean_object* v_options_1191_; lean_object* v_inheritedTraceOptions_1192_; uint8_t v_hasTrace_1193_; lean_object* v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; lean_object* v___y_1199_; lean_object* v___y_1200_; lean_object* v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v_cls_1221_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; lean_object* v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; lean_object* v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; uint8_t v_a_1235_; lean_object* v___y_1284_; lean_object* v___y_1285_; lean_object* v___y_1286_; lean_object* v___y_1287_; lean_object* v___y_1288_; lean_object* v___y_1289_; lean_object* v___y_1290_; lean_object* v___y_1291_; lean_object* v___y_1292_; lean_object* v___y_1293_; lean_object* v___y_1294_; 
v_options_1191_ = lean_ctor_get(v_a_1188_, 2);
v_inheritedTraceOptions_1192_ = lean_ctor_get(v_a_1188_, 13);
v_hasTrace_1193_ = lean_ctor_get_uint8(v_options_1191_, sizeof(void*)*1);
v_cls_1221_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
if (v_hasTrace_1193_ == 0)
{
v___y_1284_ = v_a_1179_;
v___y_1285_ = v_a_1180_;
v___y_1286_ = v_a_1181_;
v___y_1287_ = v_a_1182_;
v___y_1288_ = v_a_1183_;
v___y_1289_ = v_a_1184_;
v___y_1290_ = v_a_1185_;
v___y_1291_ = v_a_1186_;
v___y_1292_ = v_a_1187_;
v___y_1293_ = v_a_1188_;
v___y_1294_ = v_a_1189_;
goto v___jp_1283_;
}
else
{
lean_object* v___x_1350_; uint8_t v___x_1351_; 
v___x_1350_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_1351_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1192_, v_options_1191_, v___x_1350_);
if (v___x_1351_ == 0)
{
v___y_1284_ = v_a_1179_;
v___y_1285_ = v_a_1180_;
v___y_1286_ = v_a_1181_;
v___y_1287_ = v_a_1182_;
v___y_1288_ = v_a_1183_;
v___y_1289_ = v_a_1184_;
v___y_1290_ = v_a_1185_;
v___y_1291_ = v_a_1186_;
v___y_1292_ = v_a_1187_;
v___y_1293_ = v_a_1188_;
v___y_1294_ = v_a_1189_;
goto v___jp_1283_;
}
else
{
lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1352_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__7, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__7_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__7);
lean_inc(v_goal_1174_);
v___x_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_goal_1174_);
v___x_1354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1352_);
lean_ctor_set(v___x_1354_, 1, v___x_1353_);
v___x_1355_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v_cls_1221_, v___x_1354_, v_a_1186_, v_a_1187_, v_a_1188_, v_a_1189_);
if (lean_obj_tag(v___x_1355_) == 0)
{
lean_dec_ref_known(v___x_1355_, 1);
v___y_1284_ = v_a_1179_;
v___y_1285_ = v_a_1180_;
v___y_1286_ = v_a_1181_;
v___y_1287_ = v_a_1182_;
v___y_1288_ = v_a_1183_;
v___y_1289_ = v_a_1184_;
v___y_1290_ = v_a_1185_;
v___y_1291_ = v_a_1186_;
v___y_1292_ = v_a_1187_;
v___y_1293_ = v_a_1188_;
v___y_1294_ = v_a_1189_;
goto v___jp_1283_;
}
else
{
lean_object* v_a_1356_; lean_object* v___x_1358_; uint8_t v_isShared_1359_; uint8_t v_isSharedCheck_1363_; 
lean_dec_ref(v_T_1178_);
lean_dec_ref(v_H_1177_);
lean_dec_ref(v_00_u03c3s_1176_);
lean_dec(v_goal_1174_);
v_a_1356_ = lean_ctor_get(v___x_1355_, 0);
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1358_ = v___x_1355_;
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
else
{
lean_inc(v_a_1356_);
lean_dec(v___x_1355_);
v___x_1358_ = lean_box(0);
v_isShared_1359_ = v_isSharedCheck_1363_;
goto v_resetjp_1357_;
}
v_resetjp_1357_:
{
lean_object* v___x_1361_; 
if (v_isShared_1359_ == 0)
{
v___x_1361_ = v___x_1358_;
goto v_reusejp_1360_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v_a_1356_);
v___x_1361_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1360_;
}
v_reusejp_1360_:
{
return v___x_1361_;
}
}
}
}
}
v___jp_1194_:
{
lean_object* v___x_1207_; lean_object* v___x_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1219_; 
v___x_1207_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__2));
v___x_1208_ = l_Lean_Expr_constLevels_x21(v_ent_1175_);
v___x_1209_ = l_Lean_mkConst(v___x_1207_, v___x_1208_);
v___x_1210_ = l_Lean_mkAppB(v___x_1209_, v_00_u03c3s_1176_, v_H_1177_);
v___x_1211_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg(v_goal_1174_, v___x_1210_, v___y_1204_);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1211_);
if (v_isSharedCheck_1219_ == 0)
{
lean_object* v_unused_1220_; 
v_unused_1220_ = lean_ctor_get(v___x_1211_, 0);
lean_dec(v_unused_1220_);
v___x_1213_ = v___x_1211_;
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
else
{
lean_dec(v___x_1211_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1219_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1215_; lean_object* v___x_1217_; 
lean_inc(v___y_1195_);
v___x_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1215_, 0, v___y_1195_);
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 0, v___x_1215_);
v___x_1217_ = v___x_1213_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
v___jp_1222_:
{
if (v_a_1235_ == 0)
{
lean_object* v___x_1236_; 
lean_dec_ref(v_H_1177_);
lean_dec_ref(v_00_u03c3s_1176_);
v___x_1236_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solveSPredEntails(v_goal_1174_, v___y_1224_, v___y_1229_, v___y_1226_, v___y_1234_, v___y_1223_, v___y_1232_, v___y_1227_, v___y_1225_, v___y_1230_, v___y_1233_, v___y_1228_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1257_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1239_ = v___x_1236_;
v_isShared_1240_ = v_isSharedCheck_1257_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_a_1237_);
lean_dec(v___x_1236_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1257_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
if (lean_obj_tag(v_a_1237_) == 1)
{
lean_object* v_val_1241_; lean_object* v___x_1243_; uint8_t v_isShared_1244_; uint8_t v_isSharedCheck_1252_; 
v_val_1241_ = lean_ctor_get(v_a_1237_, 0);
v_isSharedCheck_1252_ = !lean_is_exclusive(v_a_1237_);
if (v_isSharedCheck_1252_ == 0)
{
v___x_1243_ = v_a_1237_;
v_isShared_1244_ = v_isSharedCheck_1252_;
goto v_resetjp_1242_;
}
else
{
lean_inc(v_val_1241_);
lean_dec(v_a_1237_);
v___x_1243_ = lean_box(0);
v_isShared_1244_ = v_isSharedCheck_1252_;
goto v_resetjp_1242_;
}
v_resetjp_1242_:
{
lean_object* v___x_1245_; lean_object* v___x_1247_; 
lean_inc(v___y_1231_);
v___x_1245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1245_, 0, v_val_1241_);
lean_ctor_set(v___x_1245_, 1, v___y_1231_);
if (v_isShared_1244_ == 0)
{
lean_ctor_set(v___x_1243_, 0, v___x_1245_);
v___x_1247_ = v___x_1243_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1251_; 
v_reuseFailAlloc_1251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1251_, 0, v___x_1245_);
v___x_1247_ = v_reuseFailAlloc_1251_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
lean_object* v___x_1249_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v___x_1247_);
v___x_1249_ = v___x_1239_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
else
{
lean_object* v___x_1253_; lean_object* v___x_1255_; 
lean_dec(v_a_1237_);
v___x_1253_ = lean_box(0);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v___x_1253_);
v___x_1255_ = v___x_1239_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1256_; 
v_reuseFailAlloc_1256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1256_, 0, v___x_1253_);
v___x_1255_ = v_reuseFailAlloc_1256_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
return v___x_1255_;
}
}
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
v_a_1258_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1236_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1236_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
}
else
{
lean_object* v_options_1266_; uint8_t v_hasTrace_1267_; 
v_options_1266_ = lean_ctor_get(v___y_1233_, 2);
v_hasTrace_1267_ = lean_ctor_get_uint8(v_options_1266_, sizeof(void*)*1);
if (v_hasTrace_1267_ == 0)
{
v___y_1195_ = v___y_1231_;
v___y_1196_ = v___y_1224_;
v___y_1197_ = v___y_1229_;
v___y_1198_ = v___y_1226_;
v___y_1199_ = v___y_1234_;
v___y_1200_ = v___y_1223_;
v___y_1201_ = v___y_1232_;
v___y_1202_ = v___y_1227_;
v___y_1203_ = v___y_1225_;
v___y_1204_ = v___y_1230_;
v___y_1205_ = v___y_1233_;
v___y_1206_ = v___y_1228_;
goto v___jp_1194_;
}
else
{
lean_object* v_inheritedTraceOptions_1268_; lean_object* v___x_1269_; uint8_t v___x_1270_; 
v_inheritedTraceOptions_1268_ = lean_ctor_get(v___y_1233_, 13);
v___x_1269_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_1270_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1268_, v_options_1266_, v___x_1269_);
if (v___x_1270_ == 0)
{
v___y_1195_ = v___y_1231_;
v___y_1196_ = v___y_1224_;
v___y_1197_ = v___y_1229_;
v___y_1198_ = v___y_1226_;
v___y_1199_ = v___y_1234_;
v___y_1200_ = v___y_1223_;
v___y_1201_ = v___y_1232_;
v___y_1202_ = v___y_1227_;
v___y_1203_ = v___y_1225_;
v___y_1204_ = v___y_1230_;
v___y_1205_ = v___y_1233_;
v___y_1206_ = v___y_1228_;
goto v___jp_1194_;
}
else
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; 
v___x_1271_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__4, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__4);
lean_inc(v_goal_1174_);
v___x_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1272_, 0, v_goal_1174_);
v___x_1273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1273_, 0, v___x_1271_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
v___x_1274_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v_cls_1221_, v___x_1273_, v___y_1225_, v___y_1230_, v___y_1233_, v___y_1228_);
if (lean_obj_tag(v___x_1274_) == 0)
{
lean_dec_ref_known(v___x_1274_, 1);
v___y_1195_ = v___y_1231_;
v___y_1196_ = v___y_1224_;
v___y_1197_ = v___y_1229_;
v___y_1198_ = v___y_1226_;
v___y_1199_ = v___y_1234_;
v___y_1200_ = v___y_1223_;
v___y_1201_ = v___y_1232_;
v___y_1202_ = v___y_1227_;
v___y_1203_ = v___y_1225_;
v___y_1204_ = v___y_1230_;
v___y_1205_ = v___y_1233_;
v___y_1206_ = v___y_1228_;
goto v___jp_1194_;
}
else
{
lean_object* v_a_1275_; lean_object* v___x_1277_; uint8_t v_isShared_1278_; uint8_t v_isSharedCheck_1282_; 
lean_dec_ref(v_H_1177_);
lean_dec_ref(v_00_u03c3s_1176_);
lean_dec(v_goal_1174_);
v_a_1275_ = lean_ctor_get(v___x_1274_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1274_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1277_ = v___x_1274_;
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
else
{
lean_inc(v_a_1275_);
lean_dec(v___x_1274_);
v___x_1277_ = lean_box(0);
v_isShared_1278_ = v_isSharedCheck_1282_;
goto v_resetjp_1276_;
}
v_resetjp_1276_:
{
lean_object* v___x_1280_; 
if (v_isShared_1278_ == 0)
{
v___x_1280_ = v___x_1277_;
goto v_reusejp_1279_;
}
else
{
lean_object* v_reuseFailAlloc_1281_; 
v_reuseFailAlloc_1281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1281_, 0, v_a_1275_);
v___x_1280_ = v_reuseFailAlloc_1281_;
goto v_reusejp_1279_;
}
v_reusejp_1279_:
{
return v___x_1280_;
}
}
}
}
}
}
}
v___jp_1283_:
{
lean_object* v___x_1295_; uint8_t v_foApprox_1296_; uint8_t v_ctxApprox_1297_; uint8_t v_quasiPatternApprox_1298_; uint8_t v_constApprox_1299_; uint8_t v_isDefEqStuckEx_1300_; uint8_t v_unificationHints_1301_; uint8_t v_proofIrrelevance_1302_; uint8_t v_offsetCnstrs_1303_; uint8_t v_transparency_1304_; uint8_t v_etaStruct_1305_; uint8_t v_univApprox_1306_; uint8_t v_iota_1307_; uint8_t v_beta_1308_; uint8_t v_proj_1309_; uint8_t v_zeta_1310_; uint8_t v_zetaDelta_1311_; uint8_t v_zetaUnused_1312_; uint8_t v_zetaHave_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1349_; 
v___x_1295_ = l_Lean_Meta_Context_config(v___y_1291_);
v_foApprox_1296_ = lean_ctor_get_uint8(v___x_1295_, 0);
v_ctxApprox_1297_ = lean_ctor_get_uint8(v___x_1295_, 1);
v_quasiPatternApprox_1298_ = lean_ctor_get_uint8(v___x_1295_, 2);
v_constApprox_1299_ = lean_ctor_get_uint8(v___x_1295_, 3);
v_isDefEqStuckEx_1300_ = lean_ctor_get_uint8(v___x_1295_, 4);
v_unificationHints_1301_ = lean_ctor_get_uint8(v___x_1295_, 5);
v_proofIrrelevance_1302_ = lean_ctor_get_uint8(v___x_1295_, 6);
v_offsetCnstrs_1303_ = lean_ctor_get_uint8(v___x_1295_, 8);
v_transparency_1304_ = lean_ctor_get_uint8(v___x_1295_, 9);
v_etaStruct_1305_ = lean_ctor_get_uint8(v___x_1295_, 10);
v_univApprox_1306_ = lean_ctor_get_uint8(v___x_1295_, 11);
v_iota_1307_ = lean_ctor_get_uint8(v___x_1295_, 12);
v_beta_1308_ = lean_ctor_get_uint8(v___x_1295_, 13);
v_proj_1309_ = lean_ctor_get_uint8(v___x_1295_, 14);
v_zeta_1310_ = lean_ctor_get_uint8(v___x_1295_, 15);
v_zetaDelta_1311_ = lean_ctor_get_uint8(v___x_1295_, 16);
v_zetaUnused_1312_ = lean_ctor_get_uint8(v___x_1295_, 17);
v_zetaHave_1313_ = lean_ctor_get_uint8(v___x_1295_, 18);
v_isSharedCheck_1349_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1349_ == 0)
{
v___x_1315_ = v___x_1295_;
v_isShared_1316_ = v_isSharedCheck_1349_;
goto v_resetjp_1314_;
}
else
{
lean_dec(v___x_1295_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1349_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
uint8_t v_trackZetaDelta_1317_; lean_object* v_zetaDeltaSet_1318_; lean_object* v_lctx_1319_; lean_object* v_localInstances_1320_; lean_object* v_defEqCtx_x3f_1321_; lean_object* v_synthPendingDepth_1322_; lean_object* v_canUnfold_x3f_1323_; uint8_t v_univApprox_1324_; uint8_t v_inTypeClassResolution_1325_; uint8_t v_cacheInferType_1326_; uint8_t v___x_1327_; lean_object* v___x_1329_; 
v_trackZetaDelta_1317_ = lean_ctor_get_uint8(v___y_1291_, sizeof(void*)*7);
v_zetaDeltaSet_1318_ = lean_ctor_get(v___y_1291_, 1);
v_lctx_1319_ = lean_ctor_get(v___y_1291_, 2);
v_localInstances_1320_ = lean_ctor_get(v___y_1291_, 3);
v_defEqCtx_x3f_1321_ = lean_ctor_get(v___y_1291_, 4);
v_synthPendingDepth_1322_ = lean_ctor_get(v___y_1291_, 5);
v_canUnfold_x3f_1323_ = lean_ctor_get(v___y_1291_, 6);
v_univApprox_1324_ = lean_ctor_get_uint8(v___y_1291_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1325_ = lean_ctor_get_uint8(v___y_1291_, sizeof(void*)*7 + 2);
v_cacheInferType_1326_ = lean_ctor_get_uint8(v___y_1291_, sizeof(void*)*7 + 3);
v___x_1327_ = 1;
if (v_isShared_1316_ == 0)
{
v___x_1329_ = v___x_1315_;
goto v_reusejp_1328_;
}
else
{
lean_object* v_reuseFailAlloc_1348_; 
v_reuseFailAlloc_1348_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 0, v_foApprox_1296_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 1, v_ctxApprox_1297_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 2, v_quasiPatternApprox_1298_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 3, v_constApprox_1299_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 4, v_isDefEqStuckEx_1300_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 5, v_unificationHints_1301_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 6, v_proofIrrelevance_1302_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 8, v_offsetCnstrs_1303_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 9, v_transparency_1304_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 10, v_etaStruct_1305_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 11, v_univApprox_1306_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 12, v_iota_1307_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 13, v_beta_1308_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 14, v_proj_1309_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 15, v_zeta_1310_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 16, v_zetaDelta_1311_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 17, v_zetaUnused_1312_);
lean_ctor_set_uint8(v_reuseFailAlloc_1348_, 18, v_zetaHave_1313_);
v___x_1329_ = v_reuseFailAlloc_1348_;
goto v_reusejp_1328_;
}
v_reusejp_1328_:
{
uint64_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_ctor_set_uint8(v___x_1329_, 7, v___x_1327_);
v___x_1330_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1329_);
v___x_1331_ = lean_box(0);
v___x_1332_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___closed__5));
v___x_1333_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1333_, 0, v___x_1329_);
lean_ctor_set_uint64(v___x_1333_, sizeof(void*)*1, v___x_1330_);
lean_inc(v_canUnfold_x3f_1323_);
lean_inc(v_synthPendingDepth_1322_);
lean_inc(v_defEqCtx_x3f_1321_);
lean_inc_ref(v_localInstances_1320_);
lean_inc_ref(v_lctx_1319_);
lean_inc(v_zetaDeltaSet_1318_);
v___x_1334_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1334_, 0, v___x_1333_);
lean_ctor_set(v___x_1334_, 1, v_zetaDeltaSet_1318_);
lean_ctor_set(v___x_1334_, 2, v_lctx_1319_);
lean_ctor_set(v___x_1334_, 3, v_localInstances_1320_);
lean_ctor_set(v___x_1334_, 4, v_defEqCtx_x3f_1321_);
lean_ctor_set(v___x_1334_, 5, v_synthPendingDepth_1322_);
lean_ctor_set(v___x_1334_, 6, v_canUnfold_x3f_1323_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*7, v_trackZetaDelta_1317_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*7 + 1, v_univApprox_1324_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1325_);
lean_ctor_set_uint8(v___x_1334_, sizeof(void*)*7 + 3, v_cacheInferType_1326_);
lean_inc_ref(v_H_1177_);
v___x_1335_ = l_Lean_Meta_Sym_isDefEqS(v_H_1177_, v_T_1178_, v___x_1327_, v___x_1327_, v___x_1332_, v___x_1332_, v___y_1289_, v___y_1290_, v___x_1334_, v___y_1292_, v___y_1293_, v___y_1294_);
lean_dec_ref_known(v___x_1334_, 7);
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1336_; uint8_t v___x_1337_; 
v_a_1336_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1336_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1337_ = lean_unbox(v_a_1336_);
lean_dec(v_a_1336_);
v___y_1223_ = v___y_1288_;
v___y_1224_ = v___y_1284_;
v___y_1225_ = v___y_1291_;
v___y_1226_ = v___y_1286_;
v___y_1227_ = v___y_1290_;
v___y_1228_ = v___y_1294_;
v___y_1229_ = v___y_1285_;
v___y_1230_ = v___y_1292_;
v___y_1231_ = v___x_1331_;
v___y_1232_ = v___y_1289_;
v___y_1233_ = v___y_1293_;
v___y_1234_ = v___y_1287_;
v_a_1235_ = v___x_1337_;
goto v___jp_1222_;
}
else
{
if (lean_obj_tag(v___x_1335_) == 0)
{
lean_object* v_a_1338_; uint8_t v___x_1339_; 
v_a_1338_ = lean_ctor_get(v___x_1335_, 0);
lean_inc(v_a_1338_);
lean_dec_ref_known(v___x_1335_, 1);
v___x_1339_ = lean_unbox(v_a_1338_);
lean_dec(v_a_1338_);
v___y_1223_ = v___y_1288_;
v___y_1224_ = v___y_1284_;
v___y_1225_ = v___y_1291_;
v___y_1226_ = v___y_1286_;
v___y_1227_ = v___y_1290_;
v___y_1228_ = v___y_1294_;
v___y_1229_ = v___y_1285_;
v___y_1230_ = v___y_1292_;
v___y_1231_ = v___x_1331_;
v___y_1232_ = v___y_1289_;
v___y_1233_ = v___y_1293_;
v___y_1234_ = v___y_1287_;
v_a_1235_ = v___x_1339_;
goto v___jp_1222_;
}
else
{
lean_object* v_a_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1347_; 
lean_dec_ref(v_H_1177_);
lean_dec_ref(v_00_u03c3s_1176_);
lean_dec(v_goal_1174_);
v_a_1340_ = lean_ctor_get(v___x_1335_, 0);
v_isSharedCheck_1347_ = !lean_is_exclusive(v___x_1335_);
if (v_isSharedCheck_1347_ == 0)
{
v___x_1342_ = v___x_1335_;
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_a_1340_);
lean_dec(v___x_1335_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1347_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v___x_1345_; 
if (v_isShared_1343_ == 0)
{
v___x_1345_ = v___x_1342_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1346_; 
v_reuseFailAlloc_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1346_, 0, v_a_1340_);
v___x_1345_ = v_reuseFailAlloc_1346_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
return v___x_1345_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails___boxed(lean_object** _args){
lean_object* v_goal_1364_ = _args[0];
lean_object* v_ent_1365_ = _args[1];
lean_object* v_00_u03c3s_1366_ = _args[2];
lean_object* v_H_1367_ = _args[3];
lean_object* v_T_1368_ = _args[4];
lean_object* v_a_1369_ = _args[5];
lean_object* v_a_1370_ = _args[6];
lean_object* v_a_1371_ = _args[7];
lean_object* v_a_1372_ = _args[8];
lean_object* v_a_1373_ = _args[9];
lean_object* v_a_1374_ = _args[10];
lean_object* v_a_1375_ = _args[11];
lean_object* v_a_1376_ = _args[12];
lean_object* v_a_1377_ = _args[13];
lean_object* v_a_1378_ = _args[14];
lean_object* v_a_1379_ = _args[15];
lean_object* v_a_1380_ = _args[16];
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails(v_goal_1364_, v_ent_1365_, v_00_u03c3s_1366_, v_H_1367_, v_T_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_, v_a_1373_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
lean_dec(v_a_1375_);
lean_dec_ref(v_a_1374_);
lean_dec(v_a_1373_);
lean_dec_ref(v_a_1372_);
lean_dec(v_a_1371_);
lean_dec(v_a_1370_);
lean_dec_ref(v_a_1369_);
lean_dec_ref(v_ent_1365_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0(lean_object* v_mvarId_1382_, lean_object* v_val_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_){
_start:
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___redArg(v_mvarId_1382_, v_val_1383_, v___y_1392_);
return v___x_1396_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0___boxed(lean_object* v_mvarId_1397_, lean_object* v_val_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_){
_start:
{
lean_object* v_res_1411_; 
v_res_1411_ = l_Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0(v_mvarId_1397_, v_val_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_);
lean_dec(v___y_1409_);
lean_dec_ref(v___y_1408_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0(lean_object* v_00_u03b2_1412_, lean_object* v_x_1413_, lean_object* v_x_1414_, lean_object* v_x_1415_){
_start:
{
lean_object* v___x_1416_; 
v___x_1416_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0___redArg(v_x_1413_, v_x_1414_, v_x_1415_);
return v___x_1416_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1417_, lean_object* v_x_1418_, size_t v_x_1419_, size_t v_x_1420_, lean_object* v_x_1421_, lean_object* v_x_1422_){
_start:
{
lean_object* v___x_1423_; 
v___x_1423_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___redArg(v_x_1418_, v_x_1419_, v_x_1420_, v_x_1421_, v_x_1422_);
return v___x_1423_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1424_, lean_object* v_x_1425_, lean_object* v_x_1426_, lean_object* v_x_1427_, lean_object* v_x_1428_, lean_object* v_x_1429_){
_start:
{
size_t v_x_29457__boxed_1430_; size_t v_x_29458__boxed_1431_; lean_object* v_res_1432_; 
v_x_29457__boxed_1430_ = lean_unbox_usize(v_x_1426_);
lean_dec(v_x_1426_);
v_x_29458__boxed_1431_ = lean_unbox_usize(v_x_1427_);
lean_dec(v_x_1427_);
v_res_1432_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1(v_00_u03b2_1424_, v_x_1425_, v_x_29457__boxed_1430_, v_x_29458__boxed_1431_, v_x_1428_, v_x_1429_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1433_, lean_object* v_n_1434_, lean_object* v_k_1435_, lean_object* v_v_1436_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2___redArg(v_n_1434_, v_k_1435_, v_v_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_1438_, size_t v_depth_1439_, lean_object* v_keys_1440_, lean_object* v_vals_1441_, lean_object* v_heq_1442_, lean_object* v_i_1443_, lean_object* v_entries_1444_){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___redArg(v_depth_1439_, v_keys_1440_, v_vals_1441_, v_i_1443_, v_entries_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1446_, lean_object* v_depth_1447_, lean_object* v_keys_1448_, lean_object* v_vals_1449_, lean_object* v_heq_1450_, lean_object* v_i_1451_, lean_object* v_entries_1452_){
_start:
{
size_t v_depth_boxed_1453_; lean_object* v_res_1454_; 
v_depth_boxed_1453_ = lean_unbox_usize(v_depth_1447_);
lean_dec(v_depth_1447_);
v_res_1454_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__3(v_00_u03b2_1446_, v_depth_boxed_1453_, v_keys_1448_, v_vals_1449_, v_heq_1450_, v_i_1451_, v_entries_1452_);
lean_dec_ref(v_vals_1449_);
lean_dec_ref(v_keys_1448_);
return v_res_1454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_1455_, lean_object* v_x_1456_, lean_object* v_x_1457_, lean_object* v_x_1458_, lean_object* v_x_1459_){
_start:
{
lean_object* v___x_1460_; 
v___x_1460_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails_spec__0_spec__0_spec__1_spec__2_spec__3___redArg(v_x_1456_, v_x_1457_, v_x_1458_, v_x_1459_);
return v___x_1460_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg(lean_object* v_args_1461_, lean_object* v_endIdx_1462_, lean_object* v_b_1463_, lean_object* v_i_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_){
_start:
{
uint8_t v___x_1472_; 
v___x_1472_ = lean_nat_dec_le(v_endIdx_1462_, v_i_1464_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1473_ = l_Lean_instInhabitedExpr;
v___x_1474_ = lean_array_get_borrowed(v___x_1473_, v_args_1461_, v_i_1464_);
lean_inc(v___x_1474_);
v___x_1475_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_b_1463_, v___x_1474_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
if (lean_obj_tag(v___x_1475_) == 0)
{
lean_object* v_a_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; 
v_a_1476_ = lean_ctor_get(v___x_1475_, 0);
lean_inc(v_a_1476_);
lean_dec_ref_known(v___x_1475_, 1);
v___x_1477_ = lean_unsigned_to_nat(1u);
v___x_1478_ = lean_nat_add(v_i_1464_, v___x_1477_);
lean_dec(v_i_1464_);
v_b_1463_ = v_a_1476_;
v_i_1464_ = v___x_1478_;
goto _start;
}
else
{
lean_dec(v_i_1464_);
return v___x_1475_;
}
}
else
{
lean_object* v___x_1480_; 
lean_dec(v_i_1464_);
v___x_1480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1480_, 0, v_b_1463_);
return v___x_1480_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg___boxed(lean_object* v_args_1481_, lean_object* v_endIdx_1482_, lean_object* v_b_1483_, lean_object* v_i_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg(v_args_1481_, v_endIdx_1482_, v_b_1483_, v_i_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec(v_endIdx_1482_);
lean_dec_ref(v_args_1481_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1(lean_object* v_f_1493_, lean_object* v_args_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_){
_start:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = lean_array_get_size(v_args_1494_);
v___x_1509_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg(v_args_1494_, v___x_1508_, v_f_1493_, v___x_1507_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1___boxed(lean_object* v_f_1510_, lean_object* v_args_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1(v_f_1510_, v_args_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v___y_1518_);
lean_dec_ref(v___y_1517_);
lean_dec(v___y_1516_);
lean_dec_ref(v___y_1515_);
lean_dec(v___y_1514_);
lean_dec(v___y_1513_);
lean_dec_ref(v___y_1512_);
lean_dec_ref(v_args_1511_);
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0_spec__0(lean_object* v_f_1525_, lean_object* v_a_u2081_1526_, lean_object* v_a_u2082_1527_, lean_object* v_a_u2083_1528_, lean_object* v_a_u2084_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_){
_start:
{
lean_object* v___x_1542_; 
v___x_1542_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(v_f_1525_, v_a_u2081_1526_, v_a_u2082_1527_, v_a_u2083_1528_, v___y_1530_, v___y_1531_, v___y_1532_, v___y_1533_, v___y_1534_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
if (lean_obj_tag(v___x_1542_) == 0)
{
lean_object* v_a_1543_; lean_object* v___x_1544_; 
v_a_1543_ = lean_ctor_get(v___x_1542_, 0);
lean_inc(v_a_1543_);
lean_dec_ref_known(v___x_1542_, 1);
v___x_1544_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_a_1543_, v_a_u2084_1529_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_, v___y_1540_);
return v___x_1544_;
}
else
{
lean_dec_ref(v_a_u2084_1529_);
return v___x_1542_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0_spec__0___boxed(lean_object** _args){
lean_object* v_f_1545_ = _args[0];
lean_object* v_a_u2081_1546_ = _args[1];
lean_object* v_a_u2082_1547_ = _args[2];
lean_object* v_a_u2083_1548_ = _args[3];
lean_object* v_a_u2084_1549_ = _args[4];
lean_object* v___y_1550_ = _args[5];
lean_object* v___y_1551_ = _args[6];
lean_object* v___y_1552_ = _args[7];
lean_object* v___y_1553_ = _args[8];
lean_object* v___y_1554_ = _args[9];
lean_object* v___y_1555_ = _args[10];
lean_object* v___y_1556_ = _args[11];
lean_object* v___y_1557_ = _args[12];
lean_object* v___y_1558_ = _args[13];
lean_object* v___y_1559_ = _args[14];
lean_object* v___y_1560_ = _args[15];
lean_object* v___y_1561_ = _args[16];
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0_spec__0(v_f_1545_, v_a_u2081_1546_, v_a_u2082_1547_, v_a_u2083_1548_, v_a_u2084_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec_ref(v___y_1557_);
lean_dec(v___y_1556_);
lean_dec_ref(v___y_1555_);
lean_dec(v___y_1554_);
lean_dec_ref(v___y_1553_);
lean_dec(v___y_1552_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0(lean_object* v_f_1563_, lean_object* v_a_u2081_1564_, lean_object* v_a_u2082_1565_, lean_object* v_a_u2083_1566_, lean_object* v_a_u2084_1567_, lean_object* v_a_u2085_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_){
_start:
{
lean_object* v___x_1581_; 
v___x_1581_ = l_Lean_Meta_Sym_Internal_mkAppS_u2084___at___00Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0_spec__0(v_f_1563_, v_a_u2081_1564_, v_a_u2082_1565_, v_a_u2083_1566_, v_a_u2084_1567_, v___y_1569_, v___y_1570_, v___y_1571_, v___y_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; lean_object* v___x_1583_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
lean_inc(v_a_1582_);
lean_dec_ref_known(v___x_1581_, 1);
v___x_1583_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_a_1582_, v_a_u2085_1568_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_);
return v___x_1583_;
}
else
{
lean_dec_ref(v_a_u2085_1568_);
return v___x_1581_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0___boxed(lean_object** _args){
lean_object* v_f_1584_ = _args[0];
lean_object* v_a_u2081_1585_ = _args[1];
lean_object* v_a_u2082_1586_ = _args[2];
lean_object* v_a_u2083_1587_ = _args[3];
lean_object* v_a_u2084_1588_ = _args[4];
lean_object* v_a_u2085_1589_ = _args[5];
lean_object* v___y_1590_ = _args[6];
lean_object* v___y_1591_ = _args[7];
lean_object* v___y_1592_ = _args[8];
lean_object* v___y_1593_ = _args[9];
lean_object* v___y_1594_ = _args[10];
lean_object* v___y_1595_ = _args[11];
lean_object* v___y_1596_ = _args[12];
lean_object* v___y_1597_ = _args[13];
lean_object* v___y_1598_ = _args[14];
lean_object* v___y_1599_ = _args[15];
lean_object* v___y_1600_ = _args[16];
lean_object* v___y_1601_ = _args[17];
_start:
{
lean_object* v_res_1602_; 
v_res_1602_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0(v_f_1584_, v_a_u2081_1585_, v_a_u2082_1586_, v_a_u2083_1587_, v_a_u2084_1588_, v_a_u2085_1589_, v___y_1590_, v___y_1591_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_);
lean_dec(v___y_1600_);
lean_dec_ref(v___y_1599_);
lean_dec(v___y_1598_);
lean_dec_ref(v___y_1597_);
lean_dec(v___y_1596_);
lean_dec_ref(v___y_1595_);
lean_dec(v___y_1594_);
lean_dec_ref(v___y_1593_);
lean_dec(v___y_1592_);
lean_dec(v___y_1591_);
lean_dec_ref(v___y_1590_);
return v_res_1602_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq(lean_object* v_goal_1603_, lean_object* v_head_1604_, lean_object* v_H_1605_, lean_object* v_00_u03c3s_1606_, lean_object* v_ent_1607_, lean_object* v_args_1608_, lean_object* v_wpConst_1609_, lean_object* v_m_1610_, lean_object* v_ps_1611_, lean_object* v_instWP_1612_, lean_object* v_00_u03b1_1613_, lean_object* v_e_x27_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v_a_1617_, lean_object* v_a_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0(v_wpConst_1609_, v_m_1610_, v_ps_1611_, v_instWP_1612_, v_00_u03b1_1613_, v_e_x27_1614_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1629_ = lean_unsigned_to_nat(2u);
v___x_1630_ = lean_array_set(v_args_1608_, v___x_1629_, v_a_1628_);
v___x_1631_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1(v_head_1604_, v___x_1630_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
lean_dec_ref(v___x_1630_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1631_, 1);
v___x_1633_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(v_ent_1607_, v_00_u03c3s_1606_, v_H_1605_, v_a_1632_, v_a_1615_, v_a_1616_, v_a_1617_, v_a_1618_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
if (lean_obj_tag(v___x_1633_) == 0)
{
lean_object* v_a_1634_; lean_object* v___x_1635_; 
v_a_1634_ = lean_ctor_get(v___x_1633_, 0);
lean_inc(v_a_1634_);
lean_dec_ref_known(v___x_1633_, 1);
v___x_1635_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_1603_, v_a_1634_, v_a_1622_, v_a_1623_, v_a_1624_, v_a_1625_);
return v___x_1635_;
}
else
{
lean_object* v_a_1636_; lean_object* v___x_1638_; uint8_t v_isShared_1639_; uint8_t v_isSharedCheck_1643_; 
lean_dec(v_goal_1603_);
v_a_1636_ = lean_ctor_get(v___x_1633_, 0);
v_isSharedCheck_1643_ = !lean_is_exclusive(v___x_1633_);
if (v_isSharedCheck_1643_ == 0)
{
v___x_1638_ = v___x_1633_;
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
else
{
lean_inc(v_a_1636_);
lean_dec(v___x_1633_);
v___x_1638_ = lean_box(0);
v_isShared_1639_ = v_isSharedCheck_1643_;
goto v_resetjp_1637_;
}
v_resetjp_1637_:
{
lean_object* v___x_1641_; 
if (v_isShared_1639_ == 0)
{
v___x_1641_ = v___x_1638_;
goto v_reusejp_1640_;
}
else
{
lean_object* v_reuseFailAlloc_1642_; 
v_reuseFailAlloc_1642_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1642_, 0, v_a_1636_);
v___x_1641_ = v_reuseFailAlloc_1642_;
goto v_reusejp_1640_;
}
v_reusejp_1640_:
{
return v___x_1641_;
}
}
}
}
else
{
lean_object* v_a_1644_; lean_object* v___x_1646_; uint8_t v_isShared_1647_; uint8_t v_isSharedCheck_1651_; 
lean_dec_ref(v_ent_1607_);
lean_dec_ref(v_00_u03c3s_1606_);
lean_dec_ref(v_H_1605_);
lean_dec(v_goal_1603_);
v_a_1644_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1651_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1651_ == 0)
{
v___x_1646_ = v___x_1631_;
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
else
{
lean_inc(v_a_1644_);
lean_dec(v___x_1631_);
v___x_1646_ = lean_box(0);
v_isShared_1647_ = v_isSharedCheck_1651_;
goto v_resetjp_1645_;
}
v_resetjp_1645_:
{
lean_object* v___x_1649_; 
if (v_isShared_1647_ == 0)
{
v___x_1649_ = v___x_1646_;
goto v_reusejp_1648_;
}
else
{
lean_object* v_reuseFailAlloc_1650_; 
v_reuseFailAlloc_1650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1650_, 0, v_a_1644_);
v___x_1649_ = v_reuseFailAlloc_1650_;
goto v_reusejp_1648_;
}
v_reusejp_1648_:
{
return v___x_1649_;
}
}
}
}
else
{
lean_object* v_a_1652_; lean_object* v___x_1654_; uint8_t v_isShared_1655_; uint8_t v_isSharedCheck_1659_; 
lean_dec_ref(v_args_1608_);
lean_dec_ref(v_ent_1607_);
lean_dec_ref(v_00_u03c3s_1606_);
lean_dec_ref(v_H_1605_);
lean_dec_ref(v_head_1604_);
lean_dec(v_goal_1603_);
v_a_1652_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1659_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1659_ == 0)
{
v___x_1654_ = v___x_1627_;
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
else
{
lean_inc(v_a_1652_);
lean_dec(v___x_1627_);
v___x_1654_ = lean_box(0);
v_isShared_1655_ = v_isSharedCheck_1659_;
goto v_resetjp_1653_;
}
v_resetjp_1653_:
{
lean_object* v___x_1657_; 
if (v_isShared_1655_ == 0)
{
v___x_1657_ = v___x_1654_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_a_1652_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
return v___x_1657_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq___boxed(lean_object** _args){
lean_object* v_goal_1660_ = _args[0];
lean_object* v_head_1661_ = _args[1];
lean_object* v_H_1662_ = _args[2];
lean_object* v_00_u03c3s_1663_ = _args[3];
lean_object* v_ent_1664_ = _args[4];
lean_object* v_args_1665_ = _args[5];
lean_object* v_wpConst_1666_ = _args[6];
lean_object* v_m_1667_ = _args[7];
lean_object* v_ps_1668_ = _args[8];
lean_object* v_instWP_1669_ = _args[9];
lean_object* v_00_u03b1_1670_ = _args[10];
lean_object* v_e_x27_1671_ = _args[11];
lean_object* v_a_1672_ = _args[12];
lean_object* v_a_1673_ = _args[13];
lean_object* v_a_1674_ = _args[14];
lean_object* v_a_1675_ = _args[15];
lean_object* v_a_1676_ = _args[16];
lean_object* v_a_1677_ = _args[17];
lean_object* v_a_1678_ = _args[18];
lean_object* v_a_1679_ = _args[19];
lean_object* v_a_1680_ = _args[20];
lean_object* v_a_1681_ = _args[21];
lean_object* v_a_1682_ = _args[22];
lean_object* v_a_1683_ = _args[23];
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq(v_goal_1660_, v_head_1661_, v_H_1662_, v_00_u03c3s_1663_, v_ent_1664_, v_args_1665_, v_wpConst_1666_, v_m_1667_, v_ps_1668_, v_instWP_1669_, v_00_u03b1_1670_, v_e_x27_1671_, v_a_1672_, v_a_1673_, v_a_1674_, v_a_1675_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_, v_a_1681_, v_a_1682_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
lean_dec(v_a_1680_);
lean_dec_ref(v_a_1679_);
lean_dec(v_a_1678_);
lean_dec_ref(v_a_1677_);
lean_dec(v_a_1676_);
lean_dec_ref(v_a_1675_);
lean_dec(v_a_1674_);
lean_dec(v_a_1673_);
lean_dec_ref(v_a_1672_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2(lean_object* v_args_1685_, lean_object* v_endIdx_1686_, lean_object* v_b_1687_, lean_object* v_i_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_){
_start:
{
lean_object* v___x_1701_; 
v___x_1701_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___redArg(v_args_1685_, v_endIdx_1686_, v_b_1687_, v_i_1688_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_);
return v___x_1701_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2___boxed(lean_object* v_args_1702_, lean_object* v_endIdx_1703_, lean_object* v_b_1704_, lean_object* v_i_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_, lean_object* v___y_1711_, lean_object* v___y_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1_spec__2(v_args_1702_, v_endIdx_1703_, v_b_1704_, v_i_1705_, v___y_1706_, v___y_1707_, v___y_1708_, v___y_1709_, v___y_1710_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v___y_1715_);
lean_dec(v___y_1714_);
lean_dec_ref(v___y_1713_);
lean_dec(v___y_1712_);
lean_dec_ref(v___y_1711_);
lean_dec(v___y_1710_);
lean_dec_ref(v___y_1709_);
lean_dec(v___y_1708_);
lean_dec(v___y_1707_);
lean_dec_ref(v___y_1706_);
lean_dec(v_endIdx_1703_);
lean_dec_ref(v_args_1702_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg(lean_object* v_revArgs_1719_, lean_object* v_start_1720_, lean_object* v_b_1721_, lean_object* v_i_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
uint8_t v___x_1730_; 
v___x_1730_ = lean_nat_dec_le(v_i_1722_, v_start_1720_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; lean_object* v_i_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1731_ = lean_unsigned_to_nat(1u);
v_i_1732_ = lean_nat_sub(v_i_1722_, v___x_1731_);
lean_dec(v_i_1722_);
v___x_1733_ = l_Lean_instInhabitedExpr;
v___x_1734_ = lean_array_get_borrowed(v___x_1733_, v_revArgs_1719_, v_i_1732_);
lean_inc(v___x_1734_);
v___x_1735_ = l_Lean_Meta_Sym_Internal_mkAppS___at___00Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0_spec__1___redArg(v_b_1721_, v___x_1734_, v___y_1723_, v___y_1724_, v___y_1725_, v___y_1726_, v___y_1727_, v___y_1728_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v_b_1721_ = v_a_1736_;
v_i_1722_ = v_i_1732_;
goto _start;
}
else
{
lean_dec(v_i_1732_);
return v___x_1735_;
}
}
else
{
lean_object* v___x_1738_; 
lean_dec(v_i_1722_);
v___x_1738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1738_, 0, v_b_1721_);
return v___x_1738_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg___boxed(lean_object* v_revArgs_1739_, lean_object* v_start_1740_, lean_object* v_b_1741_, lean_object* v_i_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_, lean_object* v___y_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_){
_start:
{
lean_object* v_res_1750_; 
v_res_1750_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg(v_revArgs_1739_, v_start_1740_, v_b_1741_, v_i_1742_, v___y_1743_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec(v___y_1746_);
lean_dec_ref(v___y_1745_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v_start_1740_);
lean_dec_ref(v_revArgs_1739_);
return v_res_1750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0(lean_object* v_f_1751_, lean_object* v_revArgs_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; 
v___x_1765_ = lean_unsigned_to_nat(0u);
v___x_1766_ = lean_array_get_size(v_revArgs_1752_);
v___x_1767_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg(v_revArgs_1752_, v___x_1765_, v_f_1751_, v___x_1766_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_, v___y_1763_);
return v___x_1767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0___boxed(lean_object* v_f_1768_, lean_object* v_revArgs_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_){
_start:
{
lean_object* v_res_1782_; 
v_res_1782_ = l_Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0(v_f_1768_, v_revArgs_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_, v___y_1780_);
lean_dec(v___y_1780_);
lean_dec_ref(v___y_1779_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec_ref(v_revArgs_1769_);
return v_res_1782_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__1(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__0));
v___x_1785_ = l_Lean_stringToMessageData(v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist(lean_object* v_goal_1786_, lean_object* v_head_1787_, lean_object* v_H_1788_, lean_object* v_00_u03c3s_1789_, lean_object* v_ent_1790_, lean_object* v_args_1791_, lean_object* v_wpConst_1792_, lean_object* v_m_1793_, lean_object* v_ps_1794_, lean_object* v_instWP_1795_, lean_object* v_00_u03b1_1796_, lean_object* v_e_1797_, lean_object* v_f_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_, lean_object* v_a_1803_, lean_object* v_a_1804_, lean_object* v_a_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_){
_start:
{
if (lean_obj_tag(v_f_1798_) == 8)
{
lean_object* v_declName_1811_; lean_object* v_type_1812_; lean_object* v_value_1813_; lean_object* v_body_1814_; uint8_t v_nondep_1815_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v_options_1892_; uint8_t v_hasTrace_1893_; 
v_declName_1811_ = lean_ctor_get(v_f_1798_, 0);
lean_inc(v_declName_1811_);
v_type_1812_ = lean_ctor_get(v_f_1798_, 1);
lean_inc_ref(v_type_1812_);
v_value_1813_ = lean_ctor_get(v_f_1798_, 2);
lean_inc_ref(v_value_1813_);
v_body_1814_ = lean_ctor_get(v_f_1798_, 3);
lean_inc_ref(v_body_1814_);
v_nondep_1815_ = lean_ctor_get_uint8(v_f_1798_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_f_1798_, 4);
v_options_1892_ = lean_ctor_get(v_a_1808_, 2);
v_hasTrace_1893_ = lean_ctor_get_uint8(v_options_1892_, sizeof(void*)*1);
if (v_hasTrace_1893_ == 0)
{
v___y_1817_ = v_a_1799_;
v___y_1818_ = v_a_1800_;
v___y_1819_ = v_a_1801_;
v___y_1820_ = v_a_1802_;
v___y_1821_ = v_a_1803_;
v___y_1822_ = v_a_1804_;
v___y_1823_ = v_a_1805_;
v___y_1824_ = v_a_1806_;
v___y_1825_ = v_a_1807_;
v___y_1826_ = v_a_1808_;
v___y_1827_ = v_a_1809_;
goto v___jp_1816_;
}
else
{
lean_object* v_inheritedTraceOptions_1894_; lean_object* v_cls_1895_; lean_object* v___x_1896_; uint8_t v___x_1897_; 
v_inheritedTraceOptions_1894_ = lean_ctor_get(v_a_1808_, 13);
v_cls_1895_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___x_1896_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_1897_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1894_, v_options_1892_, v___x_1896_);
if (v___x_1897_ == 0)
{
v___y_1817_ = v_a_1799_;
v___y_1818_ = v_a_1800_;
v___y_1819_ = v_a_1801_;
v___y_1820_ = v_a_1802_;
v___y_1821_ = v_a_1803_;
v___y_1822_ = v_a_1804_;
v___y_1823_ = v_a_1805_;
v___y_1824_ = v_a_1806_;
v___y_1825_ = v_a_1807_;
v___y_1826_ = v_a_1808_;
v___y_1827_ = v_a_1809_;
goto v___jp_1816_;
}
else
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1898_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___closed__1);
lean_inc(v_declName_1811_);
v___x_1899_ = l_Lean_MessageData_ofName(v_declName_1811_);
v___x_1900_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1900_, 0, v___x_1898_);
lean_ctor_set(v___x_1900_, 1, v___x_1899_);
v___x_1901_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v_cls_1895_, v___x_1900_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_dec_ref_known(v___x_1901_, 1);
v___y_1817_ = v_a_1799_;
v___y_1818_ = v_a_1800_;
v___y_1819_ = v_a_1801_;
v___y_1820_ = v_a_1802_;
v___y_1821_ = v_a_1803_;
v___y_1822_ = v_a_1804_;
v___y_1823_ = v_a_1805_;
v___y_1824_ = v_a_1806_;
v___y_1825_ = v_a_1807_;
v___y_1826_ = v_a_1808_;
v___y_1827_ = v_a_1809_;
goto v___jp_1816_;
}
else
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1909_; 
lean_dec_ref(v_body_1814_);
lean_dec_ref(v_value_1813_);
lean_dec_ref(v_type_1812_);
lean_dec(v_declName_1811_);
lean_dec_ref(v_e_1797_);
lean_dec_ref(v_00_u03b1_1796_);
lean_dec_ref(v_instWP_1795_);
lean_dec_ref(v_ps_1794_);
lean_dec_ref(v_m_1793_);
lean_dec_ref(v_wpConst_1792_);
lean_dec_ref(v_args_1791_);
lean_dec_ref(v_ent_1790_);
lean_dec_ref(v_00_u03c3s_1789_);
lean_dec_ref(v_H_1788_);
lean_dec_ref(v_head_1787_);
lean_dec(v_goal_1786_);
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1909_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1909_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1909_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1907_; 
if (v_isShared_1905_ == 0)
{
v___x_1907_ = v___x_1904_;
goto v_reusejp_1906_;
}
else
{
lean_object* v_reuseFailAlloc_1908_; 
v_reuseFailAlloc_1908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1908_, 0, v_a_1902_);
v___x_1907_ = v_reuseFailAlloc_1908_;
goto v_reusejp_1906_;
}
v_reusejp_1906_:
{
return v___x_1907_;
}
}
}
}
}
v___jp_1816_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1828_ = l_Lean_Expr_getAppNumArgs(v_e_1797_);
v___x_1829_ = lean_mk_empty_array_with_capacity(v___x_1828_);
lean_dec(v___x_1828_);
v___x_1830_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_1797_, v___x_1829_);
v___x_1831_ = l_Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0(v_body_1814_, v___x_1830_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec_ref(v___x_1830_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1833_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
lean_inc(v_a_1832_);
lean_dec_ref_known(v___x_1831_, 1);
v___x_1833_ = l_Lean_Meta_Sym_Internal_mkAppS_u2085___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__0(v_wpConst_1792_, v_m_1793_, v_ps_1794_, v_instWP_1795_, v_00_u03b1_1796_, v_a_1832_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_a_1834_; lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v_a_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_a_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = lean_unsigned_to_nat(2u);
v___x_1836_ = lean_array_set(v_args_1791_, v___x_1835_, v_a_1834_);
v___x_1837_ = l_Lean_Meta_Sym_Internal_mkAppNS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq_spec__1(v_head_1787_, v___x_1836_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
lean_dec_ref(v___x_1836_);
if (lean_obj_tag(v___x_1837_) == 0)
{
lean_object* v_a_1838_; lean_object* v___x_1839_; 
v_a_1838_ = lean_ctor_get(v___x_1837_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v___x_1837_, 1);
v___x_1839_ = l_Lean_Meta_Sym_Internal_mkAppS_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT_spec__0(v_ent_1790_, v_00_u03c3s_1789_, v_H_1788_, v_a_1838_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1839_) == 0)
{
lean_object* v_a_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v_a_1840_ = lean_ctor_get(v___x_1839_, 0);
lean_inc(v_a_1840_);
lean_dec_ref_known(v___x_1839_, 1);
v___x_1841_ = l_Lean_Expr_letE___override(v_declName_1811_, v_type_1812_, v_value_1813_, v_a_1840_, v_nondep_1815_);
v___x_1842_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_1786_, v___x_1841_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v_a_1843_; lean_object* v___x_1845_; uint8_t v_isShared_1846_; uint8_t v_isSharedCheck_1851_; 
v_a_1843_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1845_ = v___x_1842_;
v_isShared_1846_ = v_isSharedCheck_1851_;
goto v_resetjp_1844_;
}
else
{
lean_inc(v_a_1843_);
lean_dec(v___x_1842_);
v___x_1845_ = lean_box(0);
v_isShared_1846_ = v_isSharedCheck_1851_;
goto v_resetjp_1844_;
}
v_resetjp_1844_:
{
lean_object* v___x_1847_; lean_object* v___x_1849_; 
v___x_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1847_, 0, v_a_1843_);
if (v_isShared_1846_ == 0)
{
lean_ctor_set(v___x_1845_, 0, v___x_1847_);
v___x_1849_ = v___x_1845_;
goto v_reusejp_1848_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1847_);
v___x_1849_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1848_;
}
v_reusejp_1848_:
{
return v___x_1849_;
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
v_a_1852_ = lean_ctor_get(v___x_1842_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1842_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v___x_1842_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1842_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1852_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
lean_dec_ref(v_value_1813_);
lean_dec_ref(v_type_1812_);
lean_dec(v_declName_1811_);
lean_dec(v_goal_1786_);
v_a_1860_ = lean_ctor_get(v___x_1839_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1839_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1839_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1839_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec_ref(v_value_1813_);
lean_dec_ref(v_type_1812_);
lean_dec(v_declName_1811_);
lean_dec_ref(v_ent_1790_);
lean_dec_ref(v_00_u03c3s_1789_);
lean_dec_ref(v_H_1788_);
lean_dec(v_goal_1786_);
v_a_1868_ = lean_ctor_get(v___x_1837_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1837_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1837_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1837_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
lean_dec_ref(v_value_1813_);
lean_dec_ref(v_type_1812_);
lean_dec(v_declName_1811_);
lean_dec_ref(v_args_1791_);
lean_dec_ref(v_ent_1790_);
lean_dec_ref(v_00_u03c3s_1789_);
lean_dec_ref(v_H_1788_);
lean_dec_ref(v_head_1787_);
lean_dec(v_goal_1786_);
v_a_1876_ = lean_ctor_get(v___x_1833_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1833_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1833_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1833_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec_ref(v_value_1813_);
lean_dec_ref(v_type_1812_);
lean_dec(v_declName_1811_);
lean_dec_ref(v_00_u03b1_1796_);
lean_dec_ref(v_instWP_1795_);
lean_dec_ref(v_ps_1794_);
lean_dec_ref(v_m_1793_);
lean_dec_ref(v_wpConst_1792_);
lean_dec_ref(v_args_1791_);
lean_dec_ref(v_ent_1790_);
lean_dec_ref(v_00_u03c3s_1789_);
lean_dec_ref(v_H_1788_);
lean_dec_ref(v_head_1787_);
lean_dec(v_goal_1786_);
v_a_1884_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1831_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1831_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
}
else
{
lean_object* v___x_1910_; lean_object* v___x_1911_; 
lean_dec_ref(v_f_1798_);
lean_dec_ref(v_e_1797_);
lean_dec_ref(v_00_u03b1_1796_);
lean_dec_ref(v_instWP_1795_);
lean_dec_ref(v_ps_1794_);
lean_dec_ref(v_m_1793_);
lean_dec_ref(v_wpConst_1792_);
lean_dec_ref(v_args_1791_);
lean_dec_ref(v_ent_1790_);
lean_dec_ref(v_00_u03c3s_1789_);
lean_dec_ref(v_H_1788_);
lean_dec_ref(v_head_1787_);
lean_dec(v_goal_1786_);
v___x_1910_ = lean_box(0);
v___x_1911_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1911_, 0, v___x_1910_);
return v___x_1911_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist___boxed(lean_object** _args){
lean_object* v_goal_1912_ = _args[0];
lean_object* v_head_1913_ = _args[1];
lean_object* v_H_1914_ = _args[2];
lean_object* v_00_u03c3s_1915_ = _args[3];
lean_object* v_ent_1916_ = _args[4];
lean_object* v_args_1917_ = _args[5];
lean_object* v_wpConst_1918_ = _args[6];
lean_object* v_m_1919_ = _args[7];
lean_object* v_ps_1920_ = _args[8];
lean_object* v_instWP_1921_ = _args[9];
lean_object* v_00_u03b1_1922_ = _args[10];
lean_object* v_e_1923_ = _args[11];
lean_object* v_f_1924_ = _args[12];
lean_object* v_a_1925_ = _args[13];
lean_object* v_a_1926_ = _args[14];
lean_object* v_a_1927_ = _args[15];
lean_object* v_a_1928_ = _args[16];
lean_object* v_a_1929_ = _args[17];
lean_object* v_a_1930_ = _args[18];
lean_object* v_a_1931_ = _args[19];
lean_object* v_a_1932_ = _args[20];
lean_object* v_a_1933_ = _args[21];
lean_object* v_a_1934_ = _args[22];
lean_object* v_a_1935_ = _args[23];
lean_object* v_a_1936_ = _args[24];
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist(v_goal_1912_, v_head_1913_, v_H_1914_, v_00_u03c3s_1915_, v_ent_1916_, v_args_1917_, v_wpConst_1918_, v_m_1919_, v_ps_1920_, v_instWP_1921_, v_00_u03b1_1922_, v_e_1923_, v_f_1924_, v_a_1925_, v_a_1926_, v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_, v_a_1931_, v_a_1932_, v_a_1933_, v_a_1934_, v_a_1935_);
lean_dec(v_a_1935_);
lean_dec_ref(v_a_1934_);
lean_dec(v_a_1933_);
lean_dec_ref(v_a_1932_);
lean_dec(v_a_1931_);
lean_dec_ref(v_a_1930_);
lean_dec(v_a_1929_);
lean_dec_ref(v_a_1928_);
lean_dec(v_a_1927_);
lean_dec(v_a_1926_);
lean_dec_ref(v_a_1925_);
return v_res_1937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0(lean_object* v_revArgs_1938_, lean_object* v_start_1939_, lean_object* v_b_1940_, lean_object* v_i_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_){
_start:
{
lean_object* v___x_1954_; 
v___x_1954_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___redArg(v_revArgs_1938_, v_start_1939_, v_b_1940_, v_i_1941_, v___y_1947_, v___y_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0___boxed(lean_object* v_revArgs_1955_, lean_object* v_start_1956_, lean_object* v_b_1957_, lean_object* v_i_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v_res_1971_; 
v_res_1971_ = l___private_Lean_Meta_Sym_AlphaShareBuilder_0__Lean_Meta_Sym_Internal_mkAppRevRangeS_go___at___00Lean_Meta_Sym_Internal_mkAppRevS___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist_spec__0_spec__0(v_revArgs_1955_, v_start_1956_, v_b_1957_, v_i_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec(v___y_1963_);
lean_dec_ref(v___y_1962_);
lean_dec(v___y_1961_);
lean_dec(v___y_1960_);
lean_dec_ref(v___y_1959_);
lean_dec(v_start_1956_);
lean_dec_ref(v_revArgs_1955_);
return v_res_1971_;
}
}
static uint64_t _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__0(void){
_start:
{
uint8_t v___x_1972_; uint64_t v___x_1973_; 
v___x_1972_ = 2;
v___x_1973_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_1972_);
return v___x_1973_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__2(void){
_start:
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__1));
v___x_1976_ = l_Lean_stringToMessageData(v___x_1975_);
return v___x_1976_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__4(void){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1978_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__3));
v___x_1979_ = l_Lean_stringToMessageData(v___x_1978_);
return v___x_1979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit(lean_object* v_goal_1980_, lean_object* v_head_1981_, lean_object* v_H_1982_, lean_object* v_00_u03c3s_1983_, lean_object* v_ent_1984_, lean_object* v_args_1985_, lean_object* v_wpConst_1986_, lean_object* v_m_1987_, lean_object* v_ps_1988_, lean_object* v_instWP_1989_, lean_object* v_00_u03b1_1990_, lean_object* v_e_1991_, lean_object* v_excessArgs_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_, lean_object* v_a_1996_, lean_object* v_a_1997_, lean_object* v_a_1998_, lean_object* v_a_1999_, lean_object* v_a_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_){
_start:
{
lean_object* v___x_2005_; 
lean_inc_ref(v_e_1991_);
v___x_2005_ = l_Lean_Elab_Tactic_Do_getSplitInfo_x3f(v_e_1991_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
if (lean_obj_tag(v___x_2005_) == 0)
{
lean_object* v_a_2006_; lean_object* v___x_2008_; uint8_t v_isShared_2009_; uint8_t v_isSharedCheck_2155_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2008_ = v___x_2005_;
v_isShared_2009_ = v_isSharedCheck_2155_;
goto v_resetjp_2007_;
}
else
{
lean_inc(v_a_2006_);
lean_dec(v___x_2005_);
v___x_2008_ = lean_box(0);
v_isShared_2009_ = v_isSharedCheck_2155_;
goto v_resetjp_2007_;
}
v_resetjp_2007_:
{
if (lean_obj_tag(v_a_2006_) == 1)
{
lean_object* v_val_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2150_; 
lean_del_object(v___x_2008_);
v_val_2010_ = lean_ctor_get(v_a_2006_, 0);
v_isSharedCheck_2150_ = !lean_is_exclusive(v_a_2006_);
if (v_isSharedCheck_2150_ == 0)
{
v___x_2012_ = v_a_2006_;
v_isShared_2013_ = v_isSharedCheck_2150_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_val_2010_);
lean_dec(v_a_2006_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2150_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v___x_2014_; uint8_t v_foApprox_2015_; uint8_t v_ctxApprox_2016_; uint8_t v_quasiPatternApprox_2017_; uint8_t v_constApprox_2018_; uint8_t v_isDefEqStuckEx_2019_; uint8_t v_unificationHints_2020_; uint8_t v_proofIrrelevance_2021_; uint8_t v_assignSyntheticOpaque_2022_; uint8_t v_offsetCnstrs_2023_; uint8_t v_etaStruct_2024_; uint8_t v_univApprox_2025_; uint8_t v_iota_2026_; uint8_t v_beta_2027_; uint8_t v_proj_2028_; uint8_t v_zeta_2029_; uint8_t v_zetaDelta_2030_; uint8_t v_zetaUnused_2031_; uint8_t v_zetaHave_2032_; lean_object* v___x_2034_; uint8_t v_isShared_2035_; uint8_t v_isSharedCheck_2149_; 
v___x_2014_ = l_Lean_Meta_Context_config(v_a_2000_);
v_foApprox_2015_ = lean_ctor_get_uint8(v___x_2014_, 0);
v_ctxApprox_2016_ = lean_ctor_get_uint8(v___x_2014_, 1);
v_quasiPatternApprox_2017_ = lean_ctor_get_uint8(v___x_2014_, 2);
v_constApprox_2018_ = lean_ctor_get_uint8(v___x_2014_, 3);
v_isDefEqStuckEx_2019_ = lean_ctor_get_uint8(v___x_2014_, 4);
v_unificationHints_2020_ = lean_ctor_get_uint8(v___x_2014_, 5);
v_proofIrrelevance_2021_ = lean_ctor_get_uint8(v___x_2014_, 6);
v_assignSyntheticOpaque_2022_ = lean_ctor_get_uint8(v___x_2014_, 7);
v_offsetCnstrs_2023_ = lean_ctor_get_uint8(v___x_2014_, 8);
v_etaStruct_2024_ = lean_ctor_get_uint8(v___x_2014_, 10);
v_univApprox_2025_ = lean_ctor_get_uint8(v___x_2014_, 11);
v_iota_2026_ = lean_ctor_get_uint8(v___x_2014_, 12);
v_beta_2027_ = lean_ctor_get_uint8(v___x_2014_, 13);
v_proj_2028_ = lean_ctor_get_uint8(v___x_2014_, 14);
v_zeta_2029_ = lean_ctor_get_uint8(v___x_2014_, 15);
v_zetaDelta_2030_ = lean_ctor_get_uint8(v___x_2014_, 16);
v_zetaUnused_2031_ = lean_ctor_get_uint8(v___x_2014_, 17);
v_zetaHave_2032_ = lean_ctor_get_uint8(v___x_2014_, 18);
v_isSharedCheck_2149_ = !lean_is_exclusive(v___x_2014_);
if (v_isSharedCheck_2149_ == 0)
{
v___x_2034_ = v___x_2014_;
v_isShared_2035_ = v_isSharedCheck_2149_;
goto v_resetjp_2033_;
}
else
{
lean_dec(v___x_2014_);
v___x_2034_ = lean_box(0);
v_isShared_2035_ = v_isSharedCheck_2149_;
goto v_resetjp_2033_;
}
v_resetjp_2033_:
{
uint8_t v_trackZetaDelta_2036_; lean_object* v_zetaDeltaSet_2037_; lean_object* v_lctx_2038_; lean_object* v_localInstances_2039_; lean_object* v_defEqCtx_x3f_2040_; lean_object* v_synthPendingDepth_2041_; lean_object* v_canUnfold_x3f_2042_; uint8_t v_univApprox_2043_; uint8_t v_inTypeClassResolution_2044_; uint8_t v_cacheInferType_2045_; uint8_t v___x_2046_; lean_object* v_config_2048_; 
v_trackZetaDelta_2036_ = lean_ctor_get_uint8(v_a_2000_, sizeof(void*)*7);
v_zetaDeltaSet_2037_ = lean_ctor_get(v_a_2000_, 1);
v_lctx_2038_ = lean_ctor_get(v_a_2000_, 2);
v_localInstances_2039_ = lean_ctor_get(v_a_2000_, 3);
v_defEqCtx_x3f_2040_ = lean_ctor_get(v_a_2000_, 4);
v_synthPendingDepth_2041_ = lean_ctor_get(v_a_2000_, 5);
v_canUnfold_x3f_2042_ = lean_ctor_get(v_a_2000_, 6);
v_univApprox_2043_ = lean_ctor_get_uint8(v_a_2000_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_2044_ = lean_ctor_get_uint8(v_a_2000_, sizeof(void*)*7 + 2);
v_cacheInferType_2045_ = lean_ctor_get_uint8(v_a_2000_, sizeof(void*)*7 + 3);
v___x_2046_ = 2;
if (v_isShared_2035_ == 0)
{
v_config_2048_ = v___x_2034_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2148_; 
v_reuseFailAlloc_2148_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 0, v_foApprox_2015_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 1, v_ctxApprox_2016_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 2, v_quasiPatternApprox_2017_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 3, v_constApprox_2018_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 4, v_isDefEqStuckEx_2019_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 5, v_unificationHints_2020_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 6, v_proofIrrelevance_2021_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 7, v_assignSyntheticOpaque_2022_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 8, v_offsetCnstrs_2023_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 10, v_etaStruct_2024_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 11, v_univApprox_2025_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 12, v_iota_2026_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 13, v_beta_2027_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 14, v_proj_2028_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 15, v_zeta_2029_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 16, v_zetaDelta_2030_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 17, v_zetaUnused_2031_);
lean_ctor_set_uint8(v_reuseFailAlloc_2148_, 18, v_zetaHave_2032_);
v_config_2048_ = v_reuseFailAlloc_2148_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
uint64_t v___x_2049_; uint64_t v___x_2050_; uint64_t v___x_2051_; uint64_t v___x_2052_; uint64_t v___x_2053_; uint64_t v_key_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; 
lean_ctor_set_uint8(v_config_2048_, 9, v___x_2046_);
v___x_2049_ = l_Lean_Meta_Context_configKey(v_a_2000_);
v___x_2050_ = 3ULL;
v___x_2051_ = lean_uint64_shift_right(v___x_2049_, v___x_2050_);
v___x_2052_ = lean_uint64_shift_left(v___x_2051_, v___x_2050_);
v___x_2053_ = lean_uint64_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__0);
v_key_2054_ = lean_uint64_lor(v___x_2052_, v___x_2053_);
v___x_2055_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_2055_, 0, v_config_2048_);
lean_ctor_set_uint64(v___x_2055_, sizeof(void*)*1, v_key_2054_);
lean_inc(v_canUnfold_x3f_2042_);
lean_inc(v_synthPendingDepth_2041_);
lean_inc(v_defEqCtx_x3f_2040_);
lean_inc_ref(v_localInstances_2039_);
lean_inc_ref(v_lctx_2038_);
lean_inc(v_zetaDeltaSet_2037_);
v___x_2056_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
lean_ctor_set(v___x_2056_, 1, v_zetaDeltaSet_2037_);
lean_ctor_set(v___x_2056_, 2, v_lctx_2038_);
lean_ctor_set(v___x_2056_, 3, v_localInstances_2039_);
lean_ctor_set(v___x_2056_, 4, v_defEqCtx_x3f_2040_);
lean_ctor_set(v___x_2056_, 5, v_synthPendingDepth_2041_);
lean_ctor_set(v___x_2056_, 6, v_canUnfold_x3f_2042_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*7, v_trackZetaDelta_2036_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*7 + 1, v_univApprox_2043_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*7 + 2, v_inTypeClassResolution_2044_);
lean_ctor_set_uint8(v___x_2056_, sizeof(void*)*7 + 3, v_cacheInferType_2045_);
v___x_2057_ = l_Lean_Meta_reduceRecMatcher_x3f(v_e_1991_, v___x_2056_, v_a_2001_, v_a_2002_, v_a_2003_);
lean_dec_ref_known(v___x_2056_, 7);
if (lean_obj_tag(v___x_2057_) == 0)
{
lean_object* v_a_2058_; 
v_a_2058_ = lean_ctor_get(v___x_2057_, 0);
lean_inc(v_a_2058_);
lean_dec_ref_known(v___x_2057_, 1);
if (lean_obj_tag(v_a_2058_) == 1)
{
lean_object* v_val_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2095_; 
lean_del_object(v___x_2012_);
lean_dec(v_val_2010_);
lean_dec_ref(v_excessArgs_1992_);
lean_dec_ref(v_e_1991_);
v_val_2059_ = lean_ctor_get(v_a_2058_, 0);
v_isSharedCheck_2095_ = !lean_is_exclusive(v_a_2058_);
if (v_isSharedCheck_2095_ == 0)
{
v___x_2061_ = v_a_2058_;
v_isShared_2062_ = v_isSharedCheck_2095_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_val_2059_);
lean_dec(v_a_2058_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2095_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; 
v___x_2063_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v_val_2059_, v_a_1999_);
if (lean_obj_tag(v___x_2063_) == 0)
{
lean_object* v_a_2064_; lean_object* v___x_2065_; 
v_a_2064_ = lean_ctor_get(v___x_2063_, 0);
lean_inc(v_a_2064_);
lean_dec_ref_known(v___x_2063_, 1);
v___x_2065_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq(v_goal_1980_, v_head_1981_, v_H_1982_, v_00_u03c3s_1983_, v_ent_1984_, v_args_1985_, v_wpConst_1986_, v_m_1987_, v_ps_1988_, v_instWP_1989_, v_00_u03b1_1990_, v_a_2064_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
if (lean_obj_tag(v___x_2065_) == 0)
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2078_; 
v_a_2066_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2068_ = v___x_2065_;
v_isShared_2069_ = v_isSharedCheck_2078_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2065_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2078_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2073_; 
v___x_2070_ = lean_box(0);
v___x_2071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2071_, 0, v_a_2066_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 0, v___x_2071_);
v___x_2073_ = v___x_2061_;
goto v_reusejp_2072_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2071_);
v___x_2073_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2072_;
}
v_reusejp_2072_:
{
lean_object* v___x_2075_; 
if (v_isShared_2069_ == 0)
{
lean_ctor_set(v___x_2068_, 0, v___x_2073_);
v___x_2075_ = v___x_2068_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
return v___x_2075_;
}
}
}
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
lean_del_object(v___x_2061_);
v_a_2079_ = lean_ctor_get(v___x_2065_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2065_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2065_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2065_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_del_object(v___x_2061_);
lean_dec_ref(v_00_u03b1_1990_);
lean_dec_ref(v_instWP_1989_);
lean_dec_ref(v_ps_1988_);
lean_dec_ref(v_m_1987_);
lean_dec_ref(v_wpConst_1986_);
lean_dec_ref(v_args_1985_);
lean_dec_ref(v_ent_1984_);
lean_dec_ref(v_00_u03c3s_1983_);
lean_dec_ref(v_H_1982_);
lean_dec_ref(v_head_1981_);
lean_dec(v_goal_1980_);
v_a_2087_ = lean_ctor_get(v___x_2063_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2063_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2063_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2063_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
}
else
{
lean_object* v___x_2096_; 
lean_dec(v_a_2058_);
lean_dec_ref(v_00_u03b1_1990_);
lean_dec_ref(v_wpConst_1986_);
lean_dec_ref(v_args_1985_);
lean_dec_ref(v_ent_1984_);
lean_dec_ref(v_H_1982_);
lean_dec_ref(v_head_1981_);
v___x_2096_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSplitInfoCached___redArg(v_val_2010_, v_m_1987_, v_00_u03c3s_1983_, v_ps_1988_, v_instWP_1989_, v_excessArgs_1992_, v_a_1994_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
if (lean_obj_tag(v___x_2096_) == 0)
{
lean_object* v_a_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2102_; 
v_a_2097_ = lean_ctor_get(v___x_2096_, 0);
lean_inc(v_a_2097_);
lean_dec_ref_known(v___x_2096_, 1);
v___x_2098_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__2);
v___x_2099_ = l_Lean_indentExpr(v_e_1991_);
lean_inc_ref(v___x_2099_);
v___x_2100_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2098_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set(v___x_2012_, 0, v___x_2100_);
v___x_2102_ = v___x_2012_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2131_; 
v_reuseFailAlloc_2131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2131_, 0, v___x_2100_);
v___x_2102_ = v_reuseFailAlloc_2131_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; 
v___x_2103_ = l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(v_a_2097_, v_goal_1980_, v___x_2102_, v_a_1993_, v_a_1994_, v_a_1995_, v_a_1996_, v_a_1997_, v_a_1998_, v_a_1999_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2122_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2122_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2122_ == 0)
{
v___x_2106_ = v___x_2103_;
v_isShared_2107_ = v_isSharedCheck_2122_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___x_2103_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2122_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
if (lean_obj_tag(v_a_2104_) == 1)
{
lean_object* v_mvarIds_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2118_; 
lean_dec_ref(v___x_2099_);
v_mvarIds_2108_ = lean_ctor_get(v_a_2104_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v_a_2104_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2110_ = v_a_2104_;
v_isShared_2111_ = v_isSharedCheck_2118_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_mvarIds_2108_);
lean_dec(v_a_2104_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2118_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_mvarIds_2108_);
v___x_2113_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
lean_object* v___x_2115_; 
if (v_isShared_2107_ == 0)
{
lean_ctor_set(v___x_2106_, 0, v___x_2113_);
v___x_2115_ = v___x_2106_;
goto v_reusejp_2114_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2113_);
v___x_2115_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2114_;
}
v_reusejp_2114_:
{
return v___x_2115_;
}
}
}
}
else
{
lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; 
lean_del_object(v___x_2106_);
lean_dec(v_a_2104_);
v___x_2119_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__4, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__4_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___closed__4);
v___x_2120_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2120_, 0, v___x_2119_);
lean_ctor_set(v___x_2120_, 1, v___x_2099_);
v___x_2121_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(v___x_2120_, v_a_2000_, v_a_2001_, v_a_2002_, v_a_2003_);
return v___x_2121_;
}
}
}
else
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2130_; 
lean_dec_ref(v___x_2099_);
v_a_2123_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2125_ = v___x_2103_;
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2103_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2130_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v___x_2128_; 
if (v_isShared_2126_ == 0)
{
v___x_2128_ = v___x_2125_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_a_2123_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
return v___x_2128_;
}
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_del_object(v___x_2012_);
lean_dec_ref(v_e_1991_);
lean_dec(v_goal_1980_);
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
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_del_object(v___x_2012_);
lean_dec(v_val_2010_);
lean_dec_ref(v_excessArgs_1992_);
lean_dec_ref(v_e_1991_);
lean_dec_ref(v_00_u03b1_1990_);
lean_dec_ref(v_instWP_1989_);
lean_dec_ref(v_ps_1988_);
lean_dec_ref(v_m_1987_);
lean_dec_ref(v_wpConst_1986_);
lean_dec_ref(v_args_1985_);
lean_dec_ref(v_ent_1984_);
lean_dec_ref(v_00_u03c3s_1983_);
lean_dec_ref(v_H_1982_);
lean_dec_ref(v_head_1981_);
lean_dec(v_goal_1980_);
v_a_2140_ = lean_ctor_get(v___x_2057_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2057_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2057_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2057_);
v___x_2142_ = lean_box(0);
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
v_resetjp_2141_:
{
lean_object* v___x_2145_; 
if (v_isShared_2143_ == 0)
{
v___x_2145_ = v___x_2142_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2146_; 
v_reuseFailAlloc_2146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2146_, 0, v_a_2140_);
v___x_2145_ = v_reuseFailAlloc_2146_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
return v___x_2145_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2151_; lean_object* v___x_2153_; 
lean_dec(v_a_2006_);
lean_dec_ref(v_excessArgs_1992_);
lean_dec_ref(v_e_1991_);
lean_dec_ref(v_00_u03b1_1990_);
lean_dec_ref(v_instWP_1989_);
lean_dec_ref(v_ps_1988_);
lean_dec_ref(v_m_1987_);
lean_dec_ref(v_wpConst_1986_);
lean_dec_ref(v_args_1985_);
lean_dec_ref(v_ent_1984_);
lean_dec_ref(v_00_u03c3s_1983_);
lean_dec_ref(v_H_1982_);
lean_dec_ref(v_head_1981_);
lean_dec(v_goal_1980_);
v___x_2151_ = lean_box(0);
if (v_isShared_2009_ == 0)
{
lean_ctor_set(v___x_2008_, 0, v___x_2151_);
v___x_2153_ = v___x_2008_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v___x_2151_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_excessArgs_1992_);
lean_dec_ref(v_e_1991_);
lean_dec_ref(v_00_u03b1_1990_);
lean_dec_ref(v_instWP_1989_);
lean_dec_ref(v_ps_1988_);
lean_dec_ref(v_m_1987_);
lean_dec_ref(v_wpConst_1986_);
lean_dec_ref(v_args_1985_);
lean_dec_ref(v_ent_1984_);
lean_dec_ref(v_00_u03c3s_1983_);
lean_dec_ref(v_H_1982_);
lean_dec_ref(v_head_1981_);
lean_dec(v_goal_1980_);
v_a_2156_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2005_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2005_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit___boxed(lean_object** _args){
lean_object* v_goal_2164_ = _args[0];
lean_object* v_head_2165_ = _args[1];
lean_object* v_H_2166_ = _args[2];
lean_object* v_00_u03c3s_2167_ = _args[3];
lean_object* v_ent_2168_ = _args[4];
lean_object* v_args_2169_ = _args[5];
lean_object* v_wpConst_2170_ = _args[6];
lean_object* v_m_2171_ = _args[7];
lean_object* v_ps_2172_ = _args[8];
lean_object* v_instWP_2173_ = _args[9];
lean_object* v_00_u03b1_2174_ = _args[10];
lean_object* v_e_2175_ = _args[11];
lean_object* v_excessArgs_2176_ = _args[12];
lean_object* v_a_2177_ = _args[13];
lean_object* v_a_2178_ = _args[14];
lean_object* v_a_2179_ = _args[15];
lean_object* v_a_2180_ = _args[16];
lean_object* v_a_2181_ = _args[17];
lean_object* v_a_2182_ = _args[18];
lean_object* v_a_2183_ = _args[19];
lean_object* v_a_2184_ = _args[20];
lean_object* v_a_2185_ = _args[21];
lean_object* v_a_2186_ = _args[22];
lean_object* v_a_2187_ = _args[23];
lean_object* v_a_2188_ = _args[24];
_start:
{
lean_object* v_res_2189_; 
v_res_2189_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit(v_goal_2164_, v_head_2165_, v_H_2166_, v_00_u03c3s_2167_, v_ent_2168_, v_args_2169_, v_wpConst_2170_, v_m_2171_, v_ps_2172_, v_instWP_2173_, v_00_u03b1_2174_, v_e_2175_, v_excessArgs_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_, v_a_2187_);
lean_dec(v_a_2187_);
lean_dec_ref(v_a_2186_);
lean_dec(v_a_2185_);
lean_dec_ref(v_a_2184_);
lean_dec(v_a_2183_);
lean_dec_ref(v_a_2182_);
lean_dec(v_a_2181_);
lean_dec_ref(v_a_2180_);
lean_dec(v_a_2179_);
lean_dec(v_a_2178_);
lean_dec_ref(v_a_2177_);
return v_res_2189_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__1(void){
_start:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2191_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__0));
v___x_2192_ = l_Lean_stringToMessageData(v___x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta(lean_object* v_goal_2193_, lean_object* v_head_2194_, lean_object* v_H_2195_, lean_object* v_00_u03c3s_2196_, lean_object* v_ent_2197_, lean_object* v_args_2198_, lean_object* v_wpConst_2199_, lean_object* v_m_2200_, lean_object* v_ps_2201_, lean_object* v_instWP_2202_, lean_object* v_00_u03b1_2203_, lean_object* v_e_2204_, lean_object* v_f_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_, lean_object* v_a_2210_, lean_object* v_a_2211_, lean_object* v_a_2212_, lean_object* v_a_2213_, lean_object* v_a_2214_, lean_object* v_a_2215_, lean_object* v_a_2216_){
_start:
{
lean_object* v___x_2218_; 
v___x_2218_ = l_Lean_Expr_fvarId_x3f(v_f_2205_);
if (lean_obj_tag(v___x_2218_) == 1)
{
lean_object* v_val_2219_; uint8_t v___x_2220_; lean_object* v___x_2221_; 
v_val_2219_ = lean_ctor_get(v___x_2218_, 0);
lean_inc_n(v_val_2219_, 2);
lean_dec_ref_known(v___x_2218_, 1);
v___x_2220_ = 0;
v___x_2221_ = l_Lean_FVarId_getValue_x3f___redArg(v_val_2219_, v___x_2220_, v_a_2213_, v_a_2215_, v_a_2216_);
if (lean_obj_tag(v___x_2221_) == 0)
{
lean_object* v_a_2222_; lean_object* v___x_2224_; uint8_t v_isShared_2225_; uint8_t v_isSharedCheck_2309_; 
v_a_2222_ = lean_ctor_get(v___x_2221_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2224_ = v___x_2221_;
v_isShared_2225_ = v_isSharedCheck_2309_;
goto v_resetjp_2223_;
}
else
{
lean_inc(v_a_2222_);
lean_dec(v___x_2221_);
v___x_2224_ = lean_box(0);
v_isShared_2225_ = v_isSharedCheck_2309_;
goto v_resetjp_2223_;
}
v_resetjp_2223_:
{
if (lean_obj_tag(v_a_2222_) == 1)
{
lean_object* v_val_2226_; lean_object* v___x_2228_; uint8_t v_isShared_2229_; uint8_t v_isSharedCheck_2304_; 
lean_del_object(v___x_2224_);
v_val_2226_ = lean_ctor_get(v_a_2222_, 0);
v_isSharedCheck_2304_ = !lean_is_exclusive(v_a_2222_);
if (v_isSharedCheck_2304_ == 0)
{
v___x_2228_ = v_a_2222_;
v_isShared_2229_ = v_isSharedCheck_2304_;
goto v_resetjp_2227_;
}
else
{
lean_inc(v_val_2226_);
lean_dec(v_a_2222_);
v___x_2228_ = lean_box(0);
v_isShared_2229_ = v_isSharedCheck_2304_;
goto v_resetjp_2227_;
}
v_resetjp_2227_:
{
lean_object* v___y_2231_; lean_object* v___y_2232_; lean_object* v___y_2233_; lean_object* v___y_2234_; lean_object* v___y_2235_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v_options_2276_; uint8_t v_hasTrace_2277_; 
v_options_2276_ = lean_ctor_get(v_a_2215_, 2);
v_hasTrace_2277_ = lean_ctor_get_uint8(v_options_2276_, sizeof(void*)*1);
if (v_hasTrace_2277_ == 0)
{
lean_dec(v_val_2219_);
v___y_2231_ = v_a_2206_;
v___y_2232_ = v_a_2207_;
v___y_2233_ = v_a_2208_;
v___y_2234_ = v_a_2209_;
v___y_2235_ = v_a_2210_;
v___y_2236_ = v_a_2211_;
v___y_2237_ = v_a_2212_;
v___y_2238_ = v_a_2213_;
v___y_2239_ = v_a_2214_;
v___y_2240_ = v_a_2215_;
v___y_2241_ = v_a_2216_;
goto v___jp_2230_;
}
else
{
lean_object* v_inheritedTraceOptions_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; uint8_t v___x_2281_; 
v_inheritedTraceOptions_2278_ = lean_ctor_get(v_a_2215_, 13);
v___x_2279_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___x_2280_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_2281_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2278_, v_options_2276_, v___x_2280_);
if (v___x_2281_ == 0)
{
lean_dec(v_val_2219_);
v___y_2231_ = v_a_2206_;
v___y_2232_ = v_a_2207_;
v___y_2233_ = v_a_2208_;
v___y_2234_ = v_a_2209_;
v___y_2235_ = v_a_2210_;
v___y_2236_ = v_a_2211_;
v___y_2237_ = v_a_2212_;
v___y_2238_ = v_a_2213_;
v___y_2239_ = v_a_2214_;
v___y_2240_ = v_a_2215_;
v___y_2241_ = v_a_2216_;
goto v___jp_2230_;
}
else
{
lean_object* v___x_2282_; 
v___x_2282_ = l_Lean_FVarId_getUserName___redArg(v_val_2219_, v_a_2213_, v_a_2215_, v_a_2216_);
if (lean_obj_tag(v___x_2282_) == 0)
{
lean_object* v_a_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; 
v_a_2283_ = lean_ctor_get(v___x_2282_, 0);
lean_inc(v_a_2283_);
lean_dec_ref_known(v___x_2282_, 1);
v___x_2284_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___closed__1);
v___x_2285_ = l_Lean_MessageData_ofName(v_a_2283_);
v___x_2286_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2286_, 0, v___x_2284_);
lean_ctor_set(v___x_2286_, 1, v___x_2285_);
v___x_2287_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___x_2279_, v___x_2286_, v_a_2213_, v_a_2214_, v_a_2215_, v_a_2216_);
if (lean_obj_tag(v___x_2287_) == 0)
{
lean_dec_ref_known(v___x_2287_, 1);
v___y_2231_ = v_a_2206_;
v___y_2232_ = v_a_2207_;
v___y_2233_ = v_a_2208_;
v___y_2234_ = v_a_2209_;
v___y_2235_ = v_a_2210_;
v___y_2236_ = v_a_2211_;
v___y_2237_ = v_a_2212_;
v___y_2238_ = v_a_2213_;
v___y_2239_ = v_a_2214_;
v___y_2240_ = v_a_2215_;
v___y_2241_ = v_a_2216_;
goto v___jp_2230_;
}
else
{
lean_object* v_a_2288_; lean_object* v___x_2290_; uint8_t v_isShared_2291_; uint8_t v_isSharedCheck_2295_; 
lean_del_object(v___x_2228_);
lean_dec(v_val_2226_);
lean_dec_ref(v_e_2204_);
lean_dec_ref(v_00_u03b1_2203_);
lean_dec_ref(v_instWP_2202_);
lean_dec_ref(v_ps_2201_);
lean_dec_ref(v_m_2200_);
lean_dec_ref(v_wpConst_2199_);
lean_dec_ref(v_args_2198_);
lean_dec_ref(v_ent_2197_);
lean_dec_ref(v_00_u03c3s_2196_);
lean_dec_ref(v_H_2195_);
lean_dec_ref(v_head_2194_);
lean_dec(v_goal_2193_);
v_a_2288_ = lean_ctor_get(v___x_2287_, 0);
v_isSharedCheck_2295_ = !lean_is_exclusive(v___x_2287_);
if (v_isSharedCheck_2295_ == 0)
{
v___x_2290_ = v___x_2287_;
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
else
{
lean_inc(v_a_2288_);
lean_dec(v___x_2287_);
v___x_2290_ = lean_box(0);
v_isShared_2291_ = v_isSharedCheck_2295_;
goto v_resetjp_2289_;
}
v_resetjp_2289_:
{
lean_object* v___x_2293_; 
if (v_isShared_2291_ == 0)
{
v___x_2293_ = v___x_2290_;
goto v_reusejp_2292_;
}
else
{
lean_object* v_reuseFailAlloc_2294_; 
v_reuseFailAlloc_2294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2294_, 0, v_a_2288_);
v___x_2293_ = v_reuseFailAlloc_2294_;
goto v_reusejp_2292_;
}
v_reusejp_2292_:
{
return v___x_2293_;
}
}
}
}
else
{
lean_object* v_a_2296_; lean_object* v___x_2298_; uint8_t v_isShared_2299_; uint8_t v_isSharedCheck_2303_; 
lean_del_object(v___x_2228_);
lean_dec(v_val_2226_);
lean_dec_ref(v_e_2204_);
lean_dec_ref(v_00_u03b1_2203_);
lean_dec_ref(v_instWP_2202_);
lean_dec_ref(v_ps_2201_);
lean_dec_ref(v_m_2200_);
lean_dec_ref(v_wpConst_2199_);
lean_dec_ref(v_args_2198_);
lean_dec_ref(v_ent_2197_);
lean_dec_ref(v_00_u03c3s_2196_);
lean_dec_ref(v_H_2195_);
lean_dec_ref(v_head_2194_);
lean_dec(v_goal_2193_);
v_a_2296_ = lean_ctor_get(v___x_2282_, 0);
v_isSharedCheck_2303_ = !lean_is_exclusive(v___x_2282_);
if (v_isSharedCheck_2303_ == 0)
{
v___x_2298_ = v___x_2282_;
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
else
{
lean_inc(v_a_2296_);
lean_dec(v___x_2282_);
v___x_2298_ = lean_box(0);
v_isShared_2299_ = v_isSharedCheck_2303_;
goto v_resetjp_2297_;
}
v_resetjp_2297_:
{
lean_object* v___x_2301_; 
if (v_isShared_2299_ == 0)
{
v___x_2301_ = v___x_2298_;
goto v_reusejp_2300_;
}
else
{
lean_object* v_reuseFailAlloc_2302_; 
v_reuseFailAlloc_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2302_, 0, v_a_2296_);
v___x_2301_ = v_reuseFailAlloc_2302_;
goto v_reusejp_2300_;
}
v_reusejp_2300_:
{
return v___x_2301_;
}
}
}
}
}
v___jp_2230_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2242_ = l_Lean_Expr_getAppNumArgs(v_e_2204_);
v___x_2243_ = lean_mk_empty_array_with_capacity(v___x_2242_);
lean_dec(v___x_2242_);
v___x_2244_ = l___private_Lean_Expr_0__Lean_Expr_getAppRevArgsAux(v_e_2204_, v___x_2243_);
v___x_2245_ = l_Lean_Expr_betaRev(v_val_2226_, v___x_2244_, v___x_2220_, v___x_2220_);
lean_dec_ref(v___x_2244_);
v___x_2246_ = l_Lean_Meta_Sym_shareCommonInc___redArg(v___x_2245_, v___y_2237_);
if (lean_obj_tag(v___x_2246_) == 0)
{
lean_object* v_a_2247_; lean_object* v___x_2248_; 
v_a_2247_ = lean_ctor_get(v___x_2246_, 0);
lean_inc(v_a_2247_);
lean_dec_ref_known(v___x_2246_, 1);
v___x_2248_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq(v_goal_2193_, v_head_2194_, v_H_2195_, v_00_u03c3s_2196_, v_ent_2197_, v_args_2198_, v_wpConst_2199_, v_m_2200_, v_ps_2201_, v_instWP_2202_, v_00_u03b1_2203_, v_a_2247_, v___y_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_, v___y_2241_);
if (lean_obj_tag(v___x_2248_) == 0)
{
lean_object* v_a_2249_; lean_object* v___x_2251_; uint8_t v_isShared_2252_; uint8_t v_isSharedCheck_2259_; 
v_a_2249_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2259_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2259_ == 0)
{
v___x_2251_ = v___x_2248_;
v_isShared_2252_ = v_isSharedCheck_2259_;
goto v_resetjp_2250_;
}
else
{
lean_inc(v_a_2249_);
lean_dec(v___x_2248_);
v___x_2251_ = lean_box(0);
v_isShared_2252_ = v_isSharedCheck_2259_;
goto v_resetjp_2250_;
}
v_resetjp_2250_:
{
lean_object* v___x_2254_; 
if (v_isShared_2229_ == 0)
{
lean_ctor_set(v___x_2228_, 0, v_a_2249_);
v___x_2254_ = v___x_2228_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2258_; 
v_reuseFailAlloc_2258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2258_, 0, v_a_2249_);
v___x_2254_ = v_reuseFailAlloc_2258_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
lean_object* v___x_2256_; 
if (v_isShared_2252_ == 0)
{
lean_ctor_set(v___x_2251_, 0, v___x_2254_);
v___x_2256_ = v___x_2251_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2267_; 
lean_del_object(v___x_2228_);
v_a_2260_ = lean_ctor_get(v___x_2248_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v___x_2248_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2262_ = v___x_2248_;
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_a_2260_);
lean_dec(v___x_2248_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2267_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
lean_object* v___x_2265_; 
if (v_isShared_2263_ == 0)
{
v___x_2265_ = v___x_2262_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2266_; 
v_reuseFailAlloc_2266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2266_, 0, v_a_2260_);
v___x_2265_ = v_reuseFailAlloc_2266_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
return v___x_2265_;
}
}
}
}
else
{
lean_object* v_a_2268_; lean_object* v___x_2270_; uint8_t v_isShared_2271_; uint8_t v_isSharedCheck_2275_; 
lean_del_object(v___x_2228_);
lean_dec_ref(v_00_u03b1_2203_);
lean_dec_ref(v_instWP_2202_);
lean_dec_ref(v_ps_2201_);
lean_dec_ref(v_m_2200_);
lean_dec_ref(v_wpConst_2199_);
lean_dec_ref(v_args_2198_);
lean_dec_ref(v_ent_2197_);
lean_dec_ref(v_00_u03c3s_2196_);
lean_dec_ref(v_H_2195_);
lean_dec_ref(v_head_2194_);
lean_dec(v_goal_2193_);
v_a_2268_ = lean_ctor_get(v___x_2246_, 0);
v_isSharedCheck_2275_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2275_ == 0)
{
v___x_2270_ = v___x_2246_;
v_isShared_2271_ = v_isSharedCheck_2275_;
goto v_resetjp_2269_;
}
else
{
lean_inc(v_a_2268_);
lean_dec(v___x_2246_);
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
lean_object* v___x_2305_; lean_object* v___x_2307_; 
lean_dec(v_a_2222_);
lean_dec(v_val_2219_);
lean_dec_ref(v_e_2204_);
lean_dec_ref(v_00_u03b1_2203_);
lean_dec_ref(v_instWP_2202_);
lean_dec_ref(v_ps_2201_);
lean_dec_ref(v_m_2200_);
lean_dec_ref(v_wpConst_2199_);
lean_dec_ref(v_args_2198_);
lean_dec_ref(v_ent_2197_);
lean_dec_ref(v_00_u03c3s_2196_);
lean_dec_ref(v_H_2195_);
lean_dec_ref(v_head_2194_);
lean_dec(v_goal_2193_);
v___x_2305_ = lean_box(0);
if (v_isShared_2225_ == 0)
{
lean_ctor_set(v___x_2224_, 0, v___x_2305_);
v___x_2307_ = v___x_2224_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
else
{
lean_object* v_a_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2317_; 
lean_dec(v_val_2219_);
lean_dec_ref(v_e_2204_);
lean_dec_ref(v_00_u03b1_2203_);
lean_dec_ref(v_instWP_2202_);
lean_dec_ref(v_ps_2201_);
lean_dec_ref(v_m_2200_);
lean_dec_ref(v_wpConst_2199_);
lean_dec_ref(v_args_2198_);
lean_dec_ref(v_ent_2197_);
lean_dec_ref(v_00_u03c3s_2196_);
lean_dec_ref(v_H_2195_);
lean_dec_ref(v_head_2194_);
lean_dec(v_goal_2193_);
v_a_2310_ = lean_ctor_get(v___x_2221_, 0);
v_isSharedCheck_2317_ = !lean_is_exclusive(v___x_2221_);
if (v_isSharedCheck_2317_ == 0)
{
v___x_2312_ = v___x_2221_;
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_a_2310_);
lean_dec(v___x_2221_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2317_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2313_ == 0)
{
v___x_2315_ = v___x_2312_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2316_; 
v_reuseFailAlloc_2316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2316_, 0, v_a_2310_);
v___x_2315_ = v_reuseFailAlloc_2316_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
return v___x_2315_;
}
}
}
}
else
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
lean_dec(v___x_2218_);
lean_dec_ref(v_e_2204_);
lean_dec_ref(v_00_u03b1_2203_);
lean_dec_ref(v_instWP_2202_);
lean_dec_ref(v_ps_2201_);
lean_dec_ref(v_m_2200_);
lean_dec_ref(v_wpConst_2199_);
lean_dec_ref(v_args_2198_);
lean_dec_ref(v_ent_2197_);
lean_dec_ref(v_00_u03c3s_2196_);
lean_dec_ref(v_H_2195_);
lean_dec_ref(v_head_2194_);
lean_dec(v_goal_2193_);
v___x_2318_ = lean_box(0);
v___x_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2319_, 0, v___x_2318_);
return v___x_2319_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta___boxed(lean_object** _args){
lean_object* v_goal_2320_ = _args[0];
lean_object* v_head_2321_ = _args[1];
lean_object* v_H_2322_ = _args[2];
lean_object* v_00_u03c3s_2323_ = _args[3];
lean_object* v_ent_2324_ = _args[4];
lean_object* v_args_2325_ = _args[5];
lean_object* v_wpConst_2326_ = _args[6];
lean_object* v_m_2327_ = _args[7];
lean_object* v_ps_2328_ = _args[8];
lean_object* v_instWP_2329_ = _args[9];
lean_object* v_00_u03b1_2330_ = _args[10];
lean_object* v_e_2331_ = _args[11];
lean_object* v_f_2332_ = _args[12];
lean_object* v_a_2333_ = _args[13];
lean_object* v_a_2334_ = _args[14];
lean_object* v_a_2335_ = _args[15];
lean_object* v_a_2336_ = _args[16];
lean_object* v_a_2337_ = _args[17];
lean_object* v_a_2338_ = _args[18];
lean_object* v_a_2339_ = _args[19];
lean_object* v_a_2340_ = _args[20];
lean_object* v_a_2341_ = _args[21];
lean_object* v_a_2342_ = _args[22];
lean_object* v_a_2343_ = _args[23];
lean_object* v_a_2344_ = _args[24];
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta(v_goal_2320_, v_head_2321_, v_H_2322_, v_00_u03c3s_2323_, v_ent_2324_, v_args_2325_, v_wpConst_2326_, v_m_2327_, v_ps_2328_, v_instWP_2329_, v_00_u03b1_2330_, v_e_2331_, v_f_2332_, v_a_2333_, v_a_2334_, v_a_2335_, v_a_2336_, v_a_2337_, v_a_2338_, v_a_2339_, v_a_2340_, v_a_2341_, v_a_2342_, v_a_2343_);
lean_dec(v_a_2343_);
lean_dec_ref(v_a_2342_);
lean_dec(v_a_2341_);
lean_dec_ref(v_a_2340_);
lean_dec(v_a_2339_);
lean_dec_ref(v_a_2338_);
lean_dec(v_a_2337_);
lean_dec_ref(v_a_2336_);
lean_dec(v_a_2335_);
lean_dec(v_a_2334_);
lean_dec_ref(v_a_2333_);
lean_dec_ref(v_f_2332_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceProg(lean_object* v_goal_2346_, lean_object* v_head_2347_, lean_object* v_H_2348_, lean_object* v_00_u03c3s_2349_, lean_object* v_ent_2350_, lean_object* v_args_2351_, lean_object* v_wpConst_2352_, lean_object* v_m_2353_, lean_object* v_ps_2354_, lean_object* v_instWP_2355_, lean_object* v_00_u03b1_2356_, lean_object* v_e_2357_, lean_object* v_f_2358_, lean_object* v_a_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_a_2367_, lean_object* v_a_2368_, lean_object* v_a_2369_){
_start:
{
if (lean_obj_tag(v_f_2358_) == 11)
{
lean_object* v___x_2371_; 
v___x_2371_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead_x3f(v_e_2357_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2371_) == 0)
{
lean_object* v_a_2372_; lean_object* v___x_2374_; uint8_t v_isShared_2375_; uint8_t v_isSharedCheck_2405_; 
v_a_2372_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2374_ = v___x_2371_;
v_isShared_2375_ = v_isSharedCheck_2405_;
goto v_resetjp_2373_;
}
else
{
lean_inc(v_a_2372_);
lean_dec(v___x_2371_);
v___x_2374_ = lean_box(0);
v_isShared_2375_ = v_isSharedCheck_2405_;
goto v_resetjp_2373_;
}
v_resetjp_2373_:
{
if (lean_obj_tag(v_a_2372_) == 1)
{
lean_object* v_val_2376_; lean_object* v___x_2378_; uint8_t v_isShared_2379_; uint8_t v_isSharedCheck_2400_; 
lean_del_object(v___x_2374_);
v_val_2376_ = lean_ctor_get(v_a_2372_, 0);
v_isSharedCheck_2400_ = !lean_is_exclusive(v_a_2372_);
if (v_isSharedCheck_2400_ == 0)
{
v___x_2378_ = v_a_2372_;
v_isShared_2379_ = v_isSharedCheck_2400_;
goto v_resetjp_2377_;
}
else
{
lean_inc(v_val_2376_);
lean_dec(v_a_2372_);
v___x_2378_ = lean_box(0);
v_isShared_2379_ = v_isSharedCheck_2400_;
goto v_resetjp_2377_;
}
v_resetjp_2377_:
{
lean_object* v___x_2380_; 
v___x_2380_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_replaceProgDefEq(v_goal_2346_, v_head_2347_, v_H_2348_, v_00_u03c3s_2349_, v_ent_2350_, v_args_2351_, v_wpConst_2352_, v_m_2353_, v_ps_2354_, v_instWP_2355_, v_00_u03b1_2356_, v_val_2376_, v_a_2359_, v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_, v_a_2367_, v_a_2368_, v_a_2369_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v_a_2381_; lean_object* v___x_2383_; uint8_t v_isShared_2384_; uint8_t v_isSharedCheck_2391_; 
v_a_2381_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2391_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2391_ == 0)
{
v___x_2383_ = v___x_2380_;
v_isShared_2384_ = v_isSharedCheck_2391_;
goto v_resetjp_2382_;
}
else
{
lean_inc(v_a_2381_);
lean_dec(v___x_2380_);
v___x_2383_ = lean_box(0);
v_isShared_2384_ = v_isSharedCheck_2391_;
goto v_resetjp_2382_;
}
v_resetjp_2382_:
{
lean_object* v___x_2386_; 
if (v_isShared_2379_ == 0)
{
lean_ctor_set(v___x_2378_, 0, v_a_2381_);
v___x_2386_ = v___x_2378_;
goto v_reusejp_2385_;
}
else
{
lean_object* v_reuseFailAlloc_2390_; 
v_reuseFailAlloc_2390_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2390_, 0, v_a_2381_);
v___x_2386_ = v_reuseFailAlloc_2390_;
goto v_reusejp_2385_;
}
v_reusejp_2385_:
{
lean_object* v___x_2388_; 
if (v_isShared_2384_ == 0)
{
lean_ctor_set(v___x_2383_, 0, v___x_2386_);
v___x_2388_ = v___x_2383_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v___x_2386_);
v___x_2388_ = v_reuseFailAlloc_2389_;
goto v_reusejp_2387_;
}
v_reusejp_2387_:
{
return v___x_2388_;
}
}
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
lean_del_object(v___x_2378_);
v_a_2392_ = lean_ctor_get(v___x_2380_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2380_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2380_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2380_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2403_; 
lean_dec(v_a_2372_);
lean_dec_ref(v_00_u03b1_2356_);
lean_dec_ref(v_instWP_2355_);
lean_dec_ref(v_ps_2354_);
lean_dec_ref(v_m_2353_);
lean_dec_ref(v_wpConst_2352_);
lean_dec_ref(v_args_2351_);
lean_dec_ref(v_ent_2350_);
lean_dec_ref(v_00_u03c3s_2349_);
lean_dec_ref(v_H_2348_);
lean_dec_ref(v_head_2347_);
lean_dec(v_goal_2346_);
v___x_2401_ = lean_box(0);
if (v_isShared_2375_ == 0)
{
lean_ctor_set(v___x_2374_, 0, v___x_2401_);
v___x_2403_ = v___x_2374_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
}
else
{
lean_object* v_a_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2413_; 
lean_dec_ref(v_00_u03b1_2356_);
lean_dec_ref(v_instWP_2355_);
lean_dec_ref(v_ps_2354_);
lean_dec_ref(v_m_2353_);
lean_dec_ref(v_wpConst_2352_);
lean_dec_ref(v_args_2351_);
lean_dec_ref(v_ent_2350_);
lean_dec_ref(v_00_u03c3s_2349_);
lean_dec_ref(v_H_2348_);
lean_dec_ref(v_head_2347_);
lean_dec(v_goal_2346_);
v_a_2406_ = lean_ctor_get(v___x_2371_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2371_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2408_ = v___x_2371_;
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_a_2406_);
lean_dec(v___x_2371_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2413_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
lean_object* v___x_2411_; 
if (v_isShared_2409_ == 0)
{
v___x_2411_ = v___x_2408_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_a_2406_);
v___x_2411_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
return v___x_2411_;
}
}
}
}
else
{
lean_object* v___x_2414_; lean_object* v___x_2415_; 
lean_dec_ref(v_e_2357_);
lean_dec_ref(v_00_u03b1_2356_);
lean_dec_ref(v_instWP_2355_);
lean_dec_ref(v_ps_2354_);
lean_dec_ref(v_m_2353_);
lean_dec_ref(v_wpConst_2352_);
lean_dec_ref(v_args_2351_);
lean_dec_ref(v_ent_2350_);
lean_dec_ref(v_00_u03c3s_2349_);
lean_dec_ref(v_H_2348_);
lean_dec_ref(v_head_2347_);
lean_dec(v_goal_2346_);
v___x_2414_ = lean_box(0);
v___x_2415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2415_, 0, v___x_2414_);
return v___x_2415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceProg___boxed(lean_object** _args){
lean_object* v_goal_2416_ = _args[0];
lean_object* v_head_2417_ = _args[1];
lean_object* v_H_2418_ = _args[2];
lean_object* v_00_u03c3s_2419_ = _args[3];
lean_object* v_ent_2420_ = _args[4];
lean_object* v_args_2421_ = _args[5];
lean_object* v_wpConst_2422_ = _args[6];
lean_object* v_m_2423_ = _args[7];
lean_object* v_ps_2424_ = _args[8];
lean_object* v_instWP_2425_ = _args[9];
lean_object* v_00_u03b1_2426_ = _args[10];
lean_object* v_e_2427_ = _args[11];
lean_object* v_f_2428_ = _args[12];
lean_object* v_a_2429_ = _args[13];
lean_object* v_a_2430_ = _args[14];
lean_object* v_a_2431_ = _args[15];
lean_object* v_a_2432_ = _args[16];
lean_object* v_a_2433_ = _args[17];
lean_object* v_a_2434_ = _args[18];
lean_object* v_a_2435_ = _args[19];
lean_object* v_a_2436_ = _args[20];
lean_object* v_a_2437_ = _args[21];
lean_object* v_a_2438_ = _args[22];
lean_object* v_a_2439_ = _args[23];
lean_object* v_a_2440_ = _args[24];
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceProg(v_goal_2416_, v_head_2417_, v_H_2418_, v_00_u03c3s_2419_, v_ent_2420_, v_args_2421_, v_wpConst_2422_, v_m_2423_, v_ps_2424_, v_instWP_2425_, v_00_u03b1_2426_, v_e_2427_, v_f_2428_, v_a_2429_, v_a_2430_, v_a_2431_, v_a_2432_, v_a_2433_, v_a_2434_, v_a_2435_, v_a_2436_, v_a_2437_, v_a_2438_, v_a_2439_);
lean_dec(v_a_2439_);
lean_dec_ref(v_a_2438_);
lean_dec(v_a_2437_);
lean_dec_ref(v_a_2436_);
lean_dec(v_a_2435_);
lean_dec_ref(v_a_2434_);
lean_dec(v_a_2433_);
lean_dec_ref(v_a_2432_);
lean_dec(v_a_2431_);
lean_dec(v_a_2430_);
lean_dec_ref(v_a_2429_);
lean_dec_ref(v_f_2428_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0(lean_object* v_cls_2442_, lean_object* v_____do__lift_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_){
_start:
{
lean_object* v_options_2456_; uint8_t v_hasTrace_2457_; 
v_options_2456_ = lean_ctor_get(v___y_2453_, 2);
v_hasTrace_2457_ = lean_ctor_get_uint8(v_options_2456_, sizeof(void*)*1);
if (v_hasTrace_2457_ == 0)
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
lean_dec(v_cls_2442_);
v___x_2458_ = lean_box(v_hasTrace_2457_);
v___x_2459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2459_, 0, v___x_2458_);
return v___x_2459_;
}
else
{
lean_object* v___x_2460_; lean_object* v___x_2461_; uint8_t v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2460_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8));
v___x_2461_ = l_Lean_Name_append(v___x_2460_, v_cls_2442_);
v___x_2462_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2443_, v_options_2456_, v___x_2461_);
lean_dec(v___x_2461_);
v___x_2463_ = lean_box(v___x_2462_);
v___x_2464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2463_);
return v___x_2464_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0___boxed(lean_object* v_cls_2465_, lean_object* v_____do__lift_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_, lean_object* v___y_2472_, lean_object* v___y_2473_, lean_object* v___y_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0(v_cls_2465_, v_____do__lift_2466_, v___y_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_, v___y_2472_, v___y_2473_, v___y_2474_, v___y_2475_, v___y_2476_, v___y_2477_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
lean_dec(v___y_2475_);
lean_dec_ref(v___y_2474_);
lean_dec(v___y_2473_);
lean_dec_ref(v___y_2472_);
lean_dec(v___y_2471_);
lean_dec_ref(v___y_2470_);
lean_dec(v___y_2469_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec_ref(v_____do__lift_2466_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec_spec__0(lean_object* v_a_2480_, lean_object* v_a_2481_){
_start:
{
if (lean_obj_tag(v_a_2480_) == 0)
{
lean_object* v___x_2482_; 
v___x_2482_ = l_List_reverse___redArg(v_a_2481_);
return v___x_2482_;
}
else
{
lean_object* v_head_2483_; lean_object* v_tail_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2493_; 
v_head_2483_ = lean_ctor_get(v_a_2480_, 0);
v_tail_2484_ = lean_ctor_get(v_a_2480_, 1);
v_isSharedCheck_2493_ = !lean_is_exclusive(v_a_2480_);
if (v_isSharedCheck_2493_ == 0)
{
v___x_2486_ = v_a_2480_;
v_isShared_2487_ = v_isSharedCheck_2493_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_tail_2484_);
lean_inc(v_head_2483_);
lean_dec(v_a_2480_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2493_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2488_; lean_object* v___x_2490_; 
v___x_2488_ = l_Lean_MessageData_ofExpr(v_head_2483_);
if (v_isShared_2487_ == 0)
{
lean_ctor_set(v___x_2486_, 1, v_a_2481_);
lean_ctor_set(v___x_2486_, 0, v___x_2488_);
v___x_2490_ = v___x_2486_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2492_; 
v_reuseFailAlloc_2492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2492_, 0, v___x_2488_);
lean_ctor_set(v_reuseFailAlloc_2492_, 1, v_a_2481_);
v___x_2490_ = v_reuseFailAlloc_2492_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
v_a_2480_ = v_tail_2484_;
v_a_2481_ = v___x_2490_;
goto _start;
}
}
}
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__1(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; 
v___x_2495_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__0));
v___x_2496_ = l_Lean_stringToMessageData(v___x_2495_);
return v___x_2496_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__3(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2498_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__2));
v___x_2499_ = l_Lean_stringToMessageData(v___x_2498_);
return v___x_2499_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__5(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; 
v___x_2501_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__4));
v___x_2502_ = l_Lean_stringToMessageData(v___x_2501_);
return v___x_2502_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__7(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; 
v___x_2504_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__6));
v___x_2505_ = l_Lean_stringToMessageData(v___x_2504_);
return v___x_2505_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__9(void){
_start:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2507_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__8));
v___x_2508_ = l_Lean_stringToMessageData(v___x_2507_);
return v___x_2508_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__11(void){
_start:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__10));
v___x_2511_ = l_Lean_stringToMessageData(v___x_2510_);
return v___x_2511_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__13(void){
_start:
{
lean_object* v___x_2513_; lean_object* v___x_2514_; 
v___x_2513_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__12));
v___x_2514_ = l_Lean_stringToMessageData(v___x_2513_);
return v___x_2514_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__15(void){
_start:
{
lean_object* v___x_2516_; lean_object* v___x_2517_; 
v___x_2516_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__14));
v___x_2517_ = l_Lean_stringToMessageData(v___x_2516_);
return v___x_2517_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__17(void){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; 
v___x_2519_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__16));
v___x_2520_ = l_Lean_stringToMessageData(v___x_2519_);
return v___x_2520_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__19(void){
_start:
{
lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___x_2522_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__18));
v___x_2523_ = l_Lean_stringToMessageData(v___x_2522_);
return v___x_2523_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__21(void){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; 
v___x_2525_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__20));
v___x_2526_ = l_Lean_stringToMessageData(v___x_2525_);
return v___x_2526_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__24(void){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; 
v___x_2530_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__23));
v___x_2531_ = l_Lean_stringToMessageData(v___x_2530_);
return v___x_2531_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__26(void){
_start:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2533_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__25));
v___x_2534_ = l_Lean_stringToMessageData(v___x_2533_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec(lean_object* v_scope_2535_, lean_object* v_goal_2536_, lean_object* v_e_2537_, lean_object* v_excessArgs_2538_, lean_object* v_m_2539_, lean_object* v_00_u03c3s_2540_, lean_object* v_ps_2541_, lean_object* v_instWP_2542_, lean_object* v_a_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v_a_2549_, lean_object* v_a_2550_, lean_object* v_a_2551_, lean_object* v_a_2552_, lean_object* v_a_2553_){
_start:
{
lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v___y_2566_; lean_object* v___y_2567_; lean_object* v___y_2568_; lean_object* v___y_2569_; lean_object* v___y_2570_; lean_object* v___y_2611_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2621_; lean_object* v___y_2622_; lean_object* v___y_2623_; lean_object* v___y_2624_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2715_; lean_object* v___y_2716_; lean_object* v___y_2717_; lean_object* v___y_2718_; lean_object* v___y_2719_; lean_object* v___y_2720_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; uint8_t v___y_2812_; lean_object* v_f_2838_; uint8_t v___x_2839_; 
v_f_2838_ = l_Lean_Expr_getAppFn(v_e_2537_);
v___x_2839_ = l_Lean_Expr_isConst(v_f_2838_);
if (v___x_2839_ == 0)
{
uint8_t v___x_2840_; 
v___x_2840_ = l_Lean_Expr_isFVar(v_f_2838_);
lean_dec_ref(v_f_2838_);
v___y_2812_ = v___x_2840_;
goto v___jp_2811_;
}
else
{
lean_dec_ref(v_f_2838_);
v___y_2812_ = v___x_2839_;
goto v___jp_2811_;
}
v___jp_2555_:
{
lean_object* v___x_2556_; lean_object* v___x_2557_; 
v___x_2556_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2556_, 0, v_e_2537_);
v___x_2557_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2557_, 0, v___x_2556_);
return v___x_2557_;
}
v___jp_2558_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2571_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__1);
v___x_2572_ = l_Lean_indentExpr(v_e_2537_);
lean_inc_ref(v___x_2572_);
v___x_2573_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2573_, 0, v___x_2571_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
lean_inc_ref(v___y_2559_);
v___x_2575_ = l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(v___y_2559_, v_goal_2536_, v___x_2574_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
if (lean_obj_tag(v___x_2575_) == 0)
{
lean_object* v_a_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2601_; 
v_a_2576_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2601_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2601_ == 0)
{
v___x_2578_ = v___x_2575_;
v_isShared_2579_ = v_isSharedCheck_2601_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_a_2576_);
lean_dec(v___x_2575_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2601_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
if (lean_obj_tag(v_a_2576_) == 1)
{
lean_object* v_mvarIds_2580_; lean_object* v___x_2581_; lean_object* v___x_2583_; 
lean_dec_ref(v___x_2572_);
lean_dec_ref(v___y_2559_);
v_mvarIds_2580_ = lean_ctor_get(v_a_2576_, 0);
lean_inc(v_mvarIds_2580_);
lean_dec_ref_known(v_a_2576_, 1);
v___x_2581_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2581_, 0, v_scope_2535_);
lean_ctor_set(v___x_2581_, 1, v_mvarIds_2580_);
if (v_isShared_2579_ == 0)
{
lean_ctor_set(v___x_2578_, 0, v___x_2581_);
v___x_2583_ = v___x_2578_;
goto v_reusejp_2582_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v___x_2581_);
v___x_2583_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2582_;
}
v_reusejp_2582_:
{
return v___x_2583_;
}
}
else
{
lean_object* v_expr_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v_a_2593_; lean_object* v___x_2595_; uint8_t v_isShared_2596_; uint8_t v_isSharedCheck_2600_; 
lean_del_object(v___x_2578_);
lean_dec(v_a_2576_);
lean_dec_ref(v_scope_2535_);
v_expr_2585_ = lean_ctor_get(v___y_2559_, 0);
lean_inc_ref(v_expr_2585_);
lean_dec_ref(v___y_2559_);
v___x_2586_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__3);
v___x_2587_ = l_Lean_MessageData_ofExpr(v_expr_2585_);
v___x_2588_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2588_, 0, v___x_2586_);
lean_ctor_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__5, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__5_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__5);
v___x_2590_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2588_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2591_, 0, v___x_2590_);
lean_ctor_set(v___x_2591_, 1, v___x_2572_);
v___x_2592_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__1___redArg(v___x_2591_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_);
v_a_2593_ = lean_ctor_get(v___x_2592_, 0);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2592_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2595_ = v___x_2592_;
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
else
{
lean_inc(v_a_2593_);
lean_dec(v___x_2592_);
v___x_2595_ = lean_box(0);
v_isShared_2596_ = v_isSharedCheck_2600_;
goto v_resetjp_2594_;
}
v_resetjp_2594_:
{
lean_object* v___x_2598_; 
if (v_isShared_2596_ == 0)
{
v___x_2598_ = v___x_2595_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v_a_2593_);
v___x_2598_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
return v___x_2598_;
}
}
}
}
}
else
{
lean_object* v_a_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2609_; 
lean_dec_ref(v___x_2572_);
lean_dec_ref(v___y_2559_);
lean_dec_ref(v_scope_2535_);
v_a_2602_ = lean_ctor_get(v___x_2575_, 0);
v_isSharedCheck_2609_ = !lean_is_exclusive(v___x_2575_);
if (v_isSharedCheck_2609_ == 0)
{
v___x_2604_ = v___x_2575_;
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_a_2602_);
lean_dec(v___x_2575_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2609_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v___x_2607_; 
if (v_isShared_2605_ == 0)
{
v___x_2607_ = v___x_2604_;
goto v_reusejp_2606_;
}
else
{
lean_object* v_reuseFailAlloc_2608_; 
v_reuseFailAlloc_2608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2608_, 0, v_a_2602_);
v___x_2607_ = v_reuseFailAlloc_2608_;
goto v_reusejp_2606_;
}
v_reusejp_2606_:
{
return v___x_2607_;
}
}
}
}
v___jp_2610_:
{
lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; 
v___x_2612_ = lean_box(0);
v___x_2613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___y_2611_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2614_, 0, v_scope_2535_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2614_);
return v___x_2615_;
}
v___jp_2616_:
{
lean_object* v___x_2631_; 
lean_inc(v_goal_2536_);
lean_inc_ref(v___y_2618_);
v___x_2631_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_neededStateIntro(v___y_2618_, v_goal_2536_, v_excessArgs_2538_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
if (lean_obj_tag(v___x_2631_) == 0)
{
lean_object* v_a_2632_; 
v_a_2632_ = lean_ctor_get(v___x_2631_, 0);
lean_inc(v_a_2632_);
lean_dec_ref_known(v___x_2631_, 1);
if (lean_obj_tag(v_a_2632_) == 1)
{
lean_object* v_options_2633_; uint8_t v_hasTrace_2634_; 
lean_dec_ref(v___y_2618_);
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
v_options_2633_ = lean_ctor_get(v___y_2629_, 2);
v_hasTrace_2634_ = lean_ctor_get_uint8(v_options_2633_, sizeof(void*)*1);
if (v_hasTrace_2634_ == 0)
{
lean_object* v_val_2635_; 
lean_dec(v___y_2617_);
v_val_2635_ = lean_ctor_get(v_a_2632_, 0);
lean_inc(v_val_2635_);
lean_dec_ref_known(v_a_2632_, 1);
v___y_2611_ = v_val_2635_;
goto v___jp_2610_;
}
else
{
lean_object* v_val_2636_; lean_object* v_inheritedTraceOptions_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; uint8_t v___x_2640_; 
v_val_2636_ = lean_ctor_get(v_a_2632_, 0);
lean_inc(v_val_2636_);
lean_dec_ref_known(v_a_2632_, 1);
v_inheritedTraceOptions_2637_ = lean_ctor_get(v___y_2629_, 13);
v___x_2638_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8));
lean_inc(v___y_2617_);
v___x_2639_ = l_Lean_Name_append(v___x_2638_, v___y_2617_);
v___x_2640_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2637_, v_options_2633_, v___x_2639_);
lean_dec(v___x_2639_);
if (v___x_2640_ == 0)
{
lean_dec(v___y_2617_);
v___y_2611_ = v_val_2636_;
goto v___jp_2610_;
}
else
{
lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2641_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__7, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__7_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__7);
v___x_2642_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___y_2617_, v___x_2641_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
if (lean_obj_tag(v___x_2642_) == 0)
{
lean_dec_ref_known(v___x_2642_, 1);
v___y_2611_ = v_val_2636_;
goto v___jp_2610_;
}
else
{
lean_object* v_a_2643_; lean_object* v___x_2645_; uint8_t v_isShared_2646_; uint8_t v_isSharedCheck_2650_; 
lean_dec(v_val_2636_);
lean_dec_ref(v_scope_2535_);
v_a_2643_ = lean_ctor_get(v___x_2642_, 0);
v_isSharedCheck_2650_ = !lean_is_exclusive(v___x_2642_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2645_ = v___x_2642_;
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
else
{
lean_inc(v_a_2643_);
lean_dec(v___x_2642_);
v___x_2645_ = lean_box(0);
v_isShared_2646_ = v_isSharedCheck_2650_;
goto v_resetjp_2644_;
}
v_resetjp_2644_:
{
lean_object* v___x_2648_; 
if (v_isShared_2646_ == 0)
{
v___x_2648_ = v___x_2645_;
goto v_reusejp_2647_;
}
else
{
lean_object* v_reuseFailAlloc_2649_; 
v_reuseFailAlloc_2649_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2649_, 0, v_a_2643_);
v___x_2648_ = v_reuseFailAlloc_2649_;
goto v_reusejp_2647_;
}
v_reusejp_2647_:
{
return v___x_2648_;
}
}
}
}
}
}
else
{
lean_object* v___x_2651_; 
lean_dec(v_a_2632_);
v___x_2651_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkBackwardRuleFromSpecCached(v___y_2618_, v_m_2539_, v_00_u03c3s_2540_, v_ps_2541_, v_instWP_2542_, v_excessArgs_2538_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v_inheritedTraceOptions_2653_; lean_object* v___x_2654_; 
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
lean_inc(v_a_2652_);
lean_dec_ref_known(v___x_2651_, 1);
v_inheritedTraceOptions_2653_ = lean_ctor_get(v___y_2629_, 13);
lean_inc_ref(v___y_2619_);
lean_inc(v___y_2630_);
lean_inc_ref(v___y_2629_);
lean_inc(v___y_2628_);
lean_inc_ref(v___y_2627_);
lean_inc(v___y_2626_);
lean_inc_ref(v___y_2625_);
lean_inc(v___y_2624_);
lean_inc_ref(v___y_2623_);
lean_inc(v___y_2622_);
lean_inc(v___y_2621_);
lean_inc_ref(v___y_2620_);
lean_inc_ref(v_inheritedTraceOptions_2653_);
v___x_2654_ = lean_apply_13(v___y_2619_, v_inheritedTraceOptions_2653_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, lean_box(0));
if (lean_obj_tag(v___x_2654_) == 0)
{
lean_object* v_a_2655_; uint8_t v___x_2656_; 
v_a_2655_ = lean_ctor_get(v___x_2654_, 0);
lean_inc(v_a_2655_);
lean_dec_ref_known(v___x_2654_, 1);
v___x_2656_ = lean_unbox(v_a_2655_);
lean_dec(v_a_2655_);
if (v___x_2656_ == 0)
{
lean_dec(v___y_2617_);
v___y_2559_ = v_a_2652_;
v___y_2560_ = v___y_2620_;
v___y_2561_ = v___y_2621_;
v___y_2562_ = v___y_2622_;
v___y_2563_ = v___y_2623_;
v___y_2564_ = v___y_2624_;
v___y_2565_ = v___y_2625_;
v___y_2566_ = v___y_2626_;
v___y_2567_ = v___y_2627_;
v___y_2568_ = v___y_2628_;
v___y_2569_ = v___y_2629_;
v___y_2570_ = v___y_2630_;
goto v___jp_2558_;
}
else
{
lean_object* v_expr_2657_; lean_object* v___x_2658_; 
v_expr_2657_ = lean_ctor_get(v_a_2652_, 0);
lean_inc(v___y_2630_);
lean_inc_ref(v___y_2629_);
lean_inc(v___y_2628_);
lean_inc_ref(v___y_2627_);
lean_inc_ref(v_expr_2657_);
v___x_2658_ = lean_infer_type(v_expr_2657_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
if (lean_obj_tag(v___x_2658_) == 0)
{
lean_object* v_a_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; 
v_a_2659_ = lean_ctor_get(v___x_2658_, 0);
lean_inc(v_a_2659_);
lean_dec_ref_known(v___x_2658_, 1);
v___x_2660_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__9);
v___x_2661_ = l_Lean_MessageData_ofExpr(v_a_2659_);
v___x_2662_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2660_);
lean_ctor_set(v___x_2662_, 1, v___x_2661_);
v___x_2663_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___y_2617_, v___x_2662_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_dec_ref_known(v___x_2663_, 1);
v___y_2559_ = v_a_2652_;
v___y_2560_ = v___y_2620_;
v___y_2561_ = v___y_2621_;
v___y_2562_ = v___y_2622_;
v___y_2563_ = v___y_2623_;
v___y_2564_ = v___y_2624_;
v___y_2565_ = v___y_2625_;
v___y_2566_ = v___y_2626_;
v___y_2567_ = v___y_2627_;
v___y_2568_ = v___y_2628_;
v___y_2569_ = v___y_2629_;
v___y_2570_ = v___y_2630_;
goto v___jp_2558_;
}
else
{
lean_object* v_a_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2671_; 
lean_dec(v_a_2652_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2671_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2671_ == 0)
{
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_a_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2671_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v___x_2669_; 
if (v_isShared_2667_ == 0)
{
v___x_2669_ = v___x_2666_;
goto v_reusejp_2668_;
}
else
{
lean_object* v_reuseFailAlloc_2670_; 
v_reuseFailAlloc_2670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2670_, 0, v_a_2664_);
v___x_2669_ = v_reuseFailAlloc_2670_;
goto v_reusejp_2668_;
}
v_reusejp_2668_:
{
return v___x_2669_;
}
}
}
}
else
{
lean_object* v_a_2672_; lean_object* v___x_2674_; uint8_t v_isShared_2675_; uint8_t v_isSharedCheck_2679_; 
lean_dec(v_a_2652_);
lean_dec(v___y_2617_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2672_ = lean_ctor_get(v___x_2658_, 0);
v_isSharedCheck_2679_ = !lean_is_exclusive(v___x_2658_);
if (v_isSharedCheck_2679_ == 0)
{
v___x_2674_ = v___x_2658_;
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
else
{
lean_inc(v_a_2672_);
lean_dec(v___x_2658_);
v___x_2674_ = lean_box(0);
v_isShared_2675_ = v_isSharedCheck_2679_;
goto v_resetjp_2673_;
}
v_resetjp_2673_:
{
lean_object* v___x_2677_; 
if (v_isShared_2675_ == 0)
{
v___x_2677_ = v___x_2674_;
goto v_reusejp_2676_;
}
else
{
lean_object* v_reuseFailAlloc_2678_; 
v_reuseFailAlloc_2678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2678_, 0, v_a_2672_);
v___x_2677_ = v_reuseFailAlloc_2678_;
goto v_reusejp_2676_;
}
v_reusejp_2676_:
{
return v___x_2677_;
}
}
}
}
}
else
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2687_; 
lean_dec(v_a_2652_);
lean_dec(v___y_2617_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2680_ = lean_ctor_get(v___x_2654_, 0);
v_isSharedCheck_2687_ = !lean_is_exclusive(v___x_2654_);
if (v_isSharedCheck_2687_ == 0)
{
v___x_2682_ = v___x_2654_;
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2654_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2687_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2685_; 
if (v_isShared_2683_ == 0)
{
v___x_2685_ = v___x_2682_;
goto v_reusejp_2684_;
}
else
{
lean_object* v_reuseFailAlloc_2686_; 
v_reuseFailAlloc_2686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2686_, 0, v_a_2680_);
v___x_2685_ = v_reuseFailAlloc_2686_;
goto v_reusejp_2684_;
}
v_reusejp_2684_:
{
return v___x_2685_;
}
}
}
}
else
{
lean_object* v_a_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2695_; 
lean_dec(v___y_2617_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2688_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2695_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2695_ == 0)
{
v___x_2690_ = v___x_2651_;
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_a_2688_);
lean_dec(v___x_2651_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2695_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2693_; 
if (v_isShared_2691_ == 0)
{
v___x_2693_ = v___x_2690_;
goto v_reusejp_2692_;
}
else
{
lean_object* v_reuseFailAlloc_2694_; 
v_reuseFailAlloc_2694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2694_, 0, v_a_2688_);
v___x_2693_ = v_reuseFailAlloc_2694_;
goto v_reusejp_2692_;
}
v_reusejp_2692_:
{
return v___x_2693_;
}
}
}
}
}
else
{
lean_object* v_a_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2703_; 
lean_dec_ref(v___y_2618_);
lean_dec(v___y_2617_);
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2696_ = lean_ctor_get(v___x_2631_, 0);
v_isSharedCheck_2703_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2703_ == 0)
{
v___x_2698_ = v___x_2631_;
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_a_2696_);
lean_dec(v___x_2631_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2703_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2701_; 
if (v_isShared_2699_ == 0)
{
v___x_2701_ = v___x_2698_;
goto v_reusejp_2700_;
}
else
{
lean_object* v_reuseFailAlloc_2702_; 
v_reuseFailAlloc_2702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2702_, 0, v_a_2696_);
v___x_2701_ = v_reuseFailAlloc_2702_;
goto v_reusejp_2700_;
}
v_reusejp_2700_:
{
return v___x_2701_;
}
}
}
}
v___jp_2704_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; 
v___x_2721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2721_, 0, v___y_2712_);
lean_ctor_set(v___x_2721_, 1, v___y_2720_);
lean_inc(v___y_2713_);
v___x_2722_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___y_2713_, v___x_2721_, v___y_2717_, v___y_2711_, v___y_2718_, v___y_2706_);
if (lean_obj_tag(v___x_2722_) == 0)
{
lean_dec_ref_known(v___x_2722_, 1);
v___y_2617_ = v___y_2713_;
v___y_2618_ = v___y_2705_;
v___y_2619_ = v___y_2714_;
v___y_2620_ = v___y_2707_;
v___y_2621_ = v___y_2715_;
v___y_2622_ = v___y_2708_;
v___y_2623_ = v___y_2716_;
v___y_2624_ = v___y_2719_;
v___y_2625_ = v___y_2709_;
v___y_2626_ = v___y_2710_;
v___y_2627_ = v___y_2717_;
v___y_2628_ = v___y_2711_;
v___y_2629_ = v___y_2718_;
v___y_2630_ = v___y_2706_;
goto v___jp_2616_;
}
else
{
lean_object* v_a_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2730_; 
lean_dec(v___y_2713_);
lean_dec_ref(v___y_2705_);
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2723_ = lean_ctor_get(v___x_2722_, 0);
v_isSharedCheck_2730_ = !lean_is_exclusive(v___x_2722_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2725_ = v___x_2722_;
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_a_2723_);
lean_dec(v___x_2722_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2730_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2728_; 
if (v_isShared_2726_ == 0)
{
v___x_2728_ = v___x_2725_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_a_2723_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
v___jp_2731_:
{
lean_object* v_specs_2745_; lean_object* v___x_2746_; 
v_specs_2745_ = lean_ctor_get(v_scope_2535_, 0);
lean_inc_ref(v_e_2537_);
lean_inc_ref(v_specs_2745_);
v___x_2746_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheoremsNew_findSpecs(v_specs_2745_, v_e_2537_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_);
if (lean_obj_tag(v___x_2746_) == 0)
{
lean_object* v_a_2747_; lean_object* v___x_2749_; uint8_t v_isShared_2750_; uint8_t v_isSharedCheck_2802_; 
v_a_2747_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2802_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2802_ == 0)
{
v___x_2749_ = v___x_2746_;
v_isShared_2750_ = v_isSharedCheck_2802_;
goto v_resetjp_2748_;
}
else
{
lean_inc(v_a_2747_);
lean_dec(v___x_2746_);
v___x_2749_ = lean_box(0);
v_isShared_2750_ = v_isSharedCheck_2802_;
goto v_resetjp_2748_;
}
v_resetjp_2748_:
{
if (lean_obj_tag(v_a_2747_) == 0)
{
lean_object* v___x_2752_; uint8_t v_isShared_2753_; uint8_t v_isSharedCheck_2761_; 
lean_dec(v___y_2732_);
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec(v_goal_2536_);
v_isSharedCheck_2761_ = !lean_is_exclusive(v_scope_2535_);
if (v_isSharedCheck_2761_ == 0)
{
lean_object* v_unused_2762_; lean_object* v_unused_2763_; lean_object* v_unused_2764_; 
v_unused_2762_ = lean_ctor_get(v_scope_2535_, 2);
lean_dec(v_unused_2762_);
v_unused_2763_ = lean_ctor_get(v_scope_2535_, 1);
lean_dec(v_unused_2763_);
v_unused_2764_ = lean_ctor_get(v_scope_2535_, 0);
lean_dec(v_unused_2764_);
v___x_2752_ = v_scope_2535_;
v_isShared_2753_ = v_isSharedCheck_2761_;
goto v_resetjp_2751_;
}
else
{
lean_dec(v_scope_2535_);
v___x_2752_ = lean_box(0);
v_isShared_2753_ = v_isSharedCheck_2761_;
goto v_resetjp_2751_;
}
v_resetjp_2751_:
{
lean_object* v_a_2754_; lean_object* v___x_2756_; 
v_a_2754_ = lean_ctor_get(v_a_2747_, 0);
lean_inc(v_a_2754_);
lean_dec_ref_known(v_a_2747_, 1);
if (v_isShared_2753_ == 0)
{
lean_ctor_set_tag(v___x_2752_, 3);
lean_ctor_set(v___x_2752_, 2, v_a_2754_);
lean_ctor_set(v___x_2752_, 1, v_m_2539_);
lean_ctor_set(v___x_2752_, 0, v_e_2537_);
v___x_2756_ = v___x_2752_;
goto v_reusejp_2755_;
}
else
{
lean_object* v_reuseFailAlloc_2760_; 
v_reuseFailAlloc_2760_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2760_, 0, v_e_2537_);
lean_ctor_set(v_reuseFailAlloc_2760_, 1, v_m_2539_);
lean_ctor_set(v_reuseFailAlloc_2760_, 2, v_a_2754_);
v___x_2756_ = v_reuseFailAlloc_2760_;
goto v_reusejp_2755_;
}
v_reusejp_2755_:
{
lean_object* v___x_2758_; 
if (v_isShared_2750_ == 0)
{
lean_ctor_set(v___x_2749_, 0, v___x_2756_);
v___x_2758_ = v___x_2749_;
goto v_reusejp_2757_;
}
else
{
lean_object* v_reuseFailAlloc_2759_; 
v_reuseFailAlloc_2759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2759_, 0, v___x_2756_);
v___x_2758_ = v_reuseFailAlloc_2759_;
goto v_reusejp_2757_;
}
v_reusejp_2757_:
{
return v___x_2758_;
}
}
}
}
else
{
lean_object* v_a_2765_; lean_object* v_inheritedTraceOptions_2766_; lean_object* v___x_2767_; 
lean_del_object(v___x_2749_);
v_a_2765_ = lean_ctor_get(v_a_2747_, 0);
lean_inc(v_a_2765_);
lean_dec_ref_known(v_a_2747_, 1);
v_inheritedTraceOptions_2766_ = lean_ctor_get(v___y_2743_, 13);
lean_inc_ref(v___y_2733_);
lean_inc(v___y_2744_);
lean_inc_ref(v___y_2743_);
lean_inc(v___y_2742_);
lean_inc_ref(v___y_2741_);
lean_inc(v___y_2740_);
lean_inc_ref(v___y_2739_);
lean_inc(v___y_2738_);
lean_inc_ref(v___y_2737_);
lean_inc(v___y_2736_);
lean_inc(v___y_2735_);
lean_inc_ref(v___y_2734_);
lean_inc_ref(v_inheritedTraceOptions_2766_);
v___x_2767_ = lean_apply_13(v___y_2733_, v_inheritedTraceOptions_2766_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_, v___y_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_, v___y_2744_, lean_box(0));
if (lean_obj_tag(v___x_2767_) == 0)
{
lean_object* v_a_2768_; uint8_t v___x_2769_; 
v_a_2768_ = lean_ctor_get(v___x_2767_, 0);
lean_inc(v_a_2768_);
lean_dec_ref_known(v___x_2767_, 1);
v___x_2769_ = lean_unbox(v_a_2768_);
lean_dec(v_a_2768_);
if (v___x_2769_ == 0)
{
v___y_2617_ = v___y_2732_;
v___y_2618_ = v_a_2765_;
v___y_2619_ = v___y_2733_;
v___y_2620_ = v___y_2734_;
v___y_2621_ = v___y_2735_;
v___y_2622_ = v___y_2736_;
v___y_2623_ = v___y_2737_;
v___y_2624_ = v___y_2738_;
v___y_2625_ = v___y_2739_;
v___y_2626_ = v___y_2740_;
v___y_2627_ = v___y_2741_;
v___y_2628_ = v___y_2742_;
v___y_2629_ = v___y_2743_;
v___y_2630_ = v___y_2744_;
goto v___jp_2616_;
}
else
{
lean_object* v_proof_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; 
v_proof_2770_ = lean_ctor_get(v_a_2765_, 1);
v___x_2771_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__11, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__11_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__11);
lean_inc_ref(v_e_2537_);
v___x_2772_ = l_Lean_MessageData_ofExpr(v_e_2537_);
v___x_2773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2773_, 0, v___x_2771_);
lean_ctor_set(v___x_2773_, 1, v___x_2772_);
v___x_2774_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__13, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__13_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__13);
v___x_2775_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2775_, 0, v___x_2773_);
lean_ctor_set(v___x_2775_, 1, v___x_2774_);
switch(lean_obj_tag(v_proof_2770_))
{
case 0:
{
lean_object* v_declName_2776_; lean_object* v___x_2777_; lean_object* v___x_2778_; lean_object* v___x_2779_; 
v_declName_2776_ = lean_ctor_get(v_proof_2770_, 0);
v___x_2777_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__15, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__15_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__15);
lean_inc(v_declName_2776_);
v___x_2778_ = l_Lean_MessageData_ofName(v_declName_2776_);
v___x_2779_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2779_, 0, v___x_2777_);
lean_ctor_set(v___x_2779_, 1, v___x_2778_);
v___y_2705_ = v_a_2765_;
v___y_2706_ = v___y_2744_;
v___y_2707_ = v___y_2734_;
v___y_2708_ = v___y_2736_;
v___y_2709_ = v___y_2739_;
v___y_2710_ = v___y_2740_;
v___y_2711_ = v___y_2742_;
v___y_2712_ = v___x_2775_;
v___y_2713_ = v___y_2732_;
v___y_2714_ = v___y_2733_;
v___y_2715_ = v___y_2735_;
v___y_2716_ = v___y_2737_;
v___y_2717_ = v___y_2741_;
v___y_2718_ = v___y_2743_;
v___y_2719_ = v___y_2738_;
v___y_2720_ = v___x_2779_;
goto v___jp_2704_;
}
case 1:
{
lean_object* v_fvarId_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v_fvarId_2780_ = lean_ctor_get(v_proof_2770_, 0);
v___x_2781_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__17, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__17_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__17);
lean_inc(v_fvarId_2780_);
v___x_2782_ = l_Lean_mkFVar(v_fvarId_2780_);
v___x_2783_ = l_Lean_MessageData_ofExpr(v___x_2782_);
v___x_2784_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2781_);
lean_ctor_set(v___x_2784_, 1, v___x_2783_);
v___y_2705_ = v_a_2765_;
v___y_2706_ = v___y_2744_;
v___y_2707_ = v___y_2734_;
v___y_2708_ = v___y_2736_;
v___y_2709_ = v___y_2739_;
v___y_2710_ = v___y_2740_;
v___y_2711_ = v___y_2742_;
v___y_2712_ = v___x_2775_;
v___y_2713_ = v___y_2732_;
v___y_2714_ = v___y_2733_;
v___y_2715_ = v___y_2735_;
v___y_2716_ = v___y_2737_;
v___y_2717_ = v___y_2741_;
v___y_2718_ = v___y_2743_;
v___y_2719_ = v___y_2738_;
v___y_2720_ = v___x_2784_;
goto v___jp_2704_;
}
default: 
{
lean_object* v_ref_2785_; lean_object* v_proof_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; 
v_ref_2785_ = lean_ctor_get(v_proof_2770_, 1);
v_proof_2786_ = lean_ctor_get(v_proof_2770_, 2);
v___x_2787_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__19, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__19_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__19);
lean_inc(v_ref_2785_);
v___x_2788_ = l_Lean_MessageData_ofSyntax(v_ref_2785_);
v___x_2789_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2789_, 0, v___x_2787_);
lean_ctor_set(v___x_2789_, 1, v___x_2788_);
v___x_2790_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__21, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__21_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__21);
v___x_2791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2789_);
lean_ctor_set(v___x_2791_, 1, v___x_2790_);
lean_inc_ref(v_proof_2786_);
v___x_2792_ = l_Lean_MessageData_ofExpr(v_proof_2786_);
v___x_2793_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2791_);
lean_ctor_set(v___x_2793_, 1, v___x_2792_);
v___y_2705_ = v_a_2765_;
v___y_2706_ = v___y_2744_;
v___y_2707_ = v___y_2734_;
v___y_2708_ = v___y_2736_;
v___y_2709_ = v___y_2739_;
v___y_2710_ = v___y_2740_;
v___y_2711_ = v___y_2742_;
v___y_2712_ = v___x_2775_;
v___y_2713_ = v___y_2732_;
v___y_2714_ = v___y_2733_;
v___y_2715_ = v___y_2735_;
v___y_2716_ = v___y_2737_;
v___y_2717_ = v___y_2741_;
v___y_2718_ = v___y_2743_;
v___y_2719_ = v___y_2738_;
v___y_2720_ = v___x_2793_;
goto v___jp_2704_;
}
}
}
}
else
{
lean_object* v_a_2794_; lean_object* v___x_2796_; uint8_t v_isShared_2797_; uint8_t v_isSharedCheck_2801_; 
lean_dec(v_a_2765_);
lean_dec(v___y_2732_);
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2794_ = lean_ctor_get(v___x_2767_, 0);
v_isSharedCheck_2801_ = !lean_is_exclusive(v___x_2767_);
if (v_isSharedCheck_2801_ == 0)
{
v___x_2796_ = v___x_2767_;
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
else
{
lean_inc(v_a_2794_);
lean_dec(v___x_2767_);
v___x_2796_ = lean_box(0);
v_isShared_2797_ = v_isSharedCheck_2801_;
goto v_resetjp_2795_;
}
v_resetjp_2795_:
{
lean_object* v___x_2799_; 
if (v_isShared_2797_ == 0)
{
v___x_2799_ = v___x_2796_;
goto v_reusejp_2798_;
}
else
{
lean_object* v_reuseFailAlloc_2800_; 
v_reuseFailAlloc_2800_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2800_, 0, v_a_2794_);
v___x_2799_ = v_reuseFailAlloc_2800_;
goto v_reusejp_2798_;
}
v_reusejp_2798_:
{
return v___x_2799_;
}
}
}
}
}
}
else
{
lean_object* v_a_2803_; lean_object* v___x_2805_; uint8_t v_isShared_2806_; uint8_t v_isSharedCheck_2810_; 
lean_dec(v___y_2732_);
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2803_ = lean_ctor_get(v___x_2746_, 0);
v_isSharedCheck_2810_ = !lean_is_exclusive(v___x_2746_);
if (v_isSharedCheck_2810_ == 0)
{
v___x_2805_ = v___x_2746_;
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
else
{
lean_inc(v_a_2803_);
lean_dec(v___x_2746_);
v___x_2805_ = lean_box(0);
v_isShared_2806_ = v_isSharedCheck_2810_;
goto v_resetjp_2804_;
}
v_resetjp_2804_:
{
lean_object* v___x_2808_; 
if (v_isShared_2806_ == 0)
{
v___x_2808_ = v___x_2805_;
goto v_reusejp_2807_;
}
else
{
lean_object* v_reuseFailAlloc_2809_; 
v_reuseFailAlloc_2809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2809_, 0, v_a_2803_);
v___x_2808_ = v_reuseFailAlloc_2809_;
goto v_reusejp_2807_;
}
v_reusejp_2807_:
{
return v___x_2808_;
}
}
}
}
v___jp_2811_:
{
if (v___y_2812_ == 0)
{
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
goto v___jp_2555_;
}
else
{
lean_object* v_inheritedTraceOptions_2813_; lean_object* v_cls_2814_; lean_object* v___f_2815_; lean_object* v___x_2816_; lean_object* v_a_2817_; uint8_t v___x_2818_; 
v_inheritedTraceOptions_2813_ = lean_ctor_get(v_a_2552_, 13);
v_cls_2814_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___f_2815_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__22));
v___x_2816_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___lam__0(v_cls_2814_, v_inheritedTraceOptions_2813_, v_a_2543_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_, v_a_2548_, v_a_2549_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_);
v_a_2817_ = lean_ctor_get(v___x_2816_, 0);
lean_inc(v_a_2817_);
lean_dec_ref(v___x_2816_);
v___x_2818_ = lean_unbox(v_a_2817_);
lean_dec(v_a_2817_);
if (v___x_2818_ == 0)
{
v___y_2732_ = v_cls_2814_;
v___y_2733_ = v___f_2815_;
v___y_2734_ = v_a_2543_;
v___y_2735_ = v_a_2544_;
v___y_2736_ = v_a_2545_;
v___y_2737_ = v_a_2546_;
v___y_2738_ = v_a_2547_;
v___y_2739_ = v_a_2548_;
v___y_2740_ = v_a_2549_;
v___y_2741_ = v_a_2550_;
v___y_2742_ = v_a_2551_;
v___y_2743_ = v_a_2552_;
v___y_2744_ = v_a_2553_;
goto v___jp_2731_;
}
else
{
lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2819_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__24, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__24_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__24);
lean_inc_ref(v_e_2537_);
v___x_2820_ = l_Lean_MessageData_ofExpr(v_e_2537_);
v___x_2821_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2821_, 0, v___x_2819_);
lean_ctor_set(v___x_2821_, 1, v___x_2820_);
v___x_2822_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__26, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__26_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___closed__26);
v___x_2823_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2821_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
lean_inc_ref(v_excessArgs_2538_);
v___x_2824_ = lean_array_to_list(v_excessArgs_2538_);
v___x_2825_ = lean_box(0);
v___x_2826_ = l_List_mapTR_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec_spec__0(v___x_2824_, v___x_2825_);
v___x_2827_ = l_Lean_MessageData_ofList(v___x_2826_);
v___x_2828_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2823_);
lean_ctor_set(v___x_2828_, 1, v___x_2827_);
v___x_2829_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v_cls_2814_, v___x_2828_, v_a_2550_, v_a_2551_, v_a_2552_, v_a_2553_);
if (lean_obj_tag(v___x_2829_) == 0)
{
lean_dec_ref_known(v___x_2829_, 1);
v___y_2732_ = v_cls_2814_;
v___y_2733_ = v___f_2815_;
v___y_2734_ = v_a_2543_;
v___y_2735_ = v_a_2544_;
v___y_2736_ = v_a_2545_;
v___y_2737_ = v_a_2546_;
v___y_2738_ = v_a_2547_;
v___y_2739_ = v_a_2548_;
v___y_2740_ = v_a_2549_;
v___y_2741_ = v_a_2550_;
v___y_2742_ = v_a_2551_;
v___y_2743_ = v_a_2552_;
v___y_2744_ = v_a_2553_;
goto v___jp_2731_;
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
lean_dec_ref(v_instWP_2542_);
lean_dec_ref(v_ps_2541_);
lean_dec_ref(v_00_u03c3s_2540_);
lean_dec_ref(v_m_2539_);
lean_dec_ref(v_excessArgs_2538_);
lean_dec_ref(v_e_2537_);
lean_dec(v_goal_2536_);
lean_dec_ref(v_scope_2535_);
v_a_2830_ = lean_ctor_get(v___x_2829_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2829_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2832_ = v___x_2829_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2829_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2830_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec___boxed(lean_object** _args){
lean_object* v_scope_2841_ = _args[0];
lean_object* v_goal_2842_ = _args[1];
lean_object* v_e_2843_ = _args[2];
lean_object* v_excessArgs_2844_ = _args[3];
lean_object* v_m_2845_ = _args[4];
lean_object* v_00_u03c3s_2846_ = _args[5];
lean_object* v_ps_2847_ = _args[6];
lean_object* v_instWP_2848_ = _args[7];
lean_object* v_a_2849_ = _args[8];
lean_object* v_a_2850_ = _args[9];
lean_object* v_a_2851_ = _args[10];
lean_object* v_a_2852_ = _args[11];
lean_object* v_a_2853_ = _args[12];
lean_object* v_a_2854_ = _args[13];
lean_object* v_a_2855_ = _args[14];
lean_object* v_a_2856_ = _args[15];
lean_object* v_a_2857_ = _args[16];
lean_object* v_a_2858_ = _args[17];
lean_object* v_a_2859_ = _args[18];
lean_object* v_a_2860_ = _args[19];
_start:
{
lean_object* v_res_2861_; 
v_res_2861_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec(v_scope_2841_, v_goal_2842_, v_e_2843_, v_excessArgs_2844_, v_m_2845_, v_00_u03c3s_2846_, v_ps_2847_, v_instWP_2848_, v_a_2849_, v_a_2850_, v_a_2851_, v_a_2852_, v_a_2853_, v_a_2854_, v_a_2855_, v_a_2856_, v_a_2857_, v_a_2858_, v_a_2859_);
lean_dec(v_a_2859_);
lean_dec_ref(v_a_2858_);
lean_dec(v_a_2857_);
lean_dec_ref(v_a_2856_);
lean_dec(v_a_2855_);
lean_dec_ref(v_a_2854_);
lean_dec(v_a_2853_);
lean_dec_ref(v_a_2852_);
lean_dec(v_a_2851_);
lean_dec(v_a_2850_);
lean_dec_ref(v_a_2849_);
return v_res_2861_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___lam__0(lean_object* v_x_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v___x_2875_; 
lean_inc(v___y_2869_);
lean_inc_ref(v___y_2868_);
lean_inc(v___y_2867_);
lean_inc_ref(v___y_2866_);
lean_inc(v___y_2865_);
lean_inc(v___y_2864_);
lean_inc_ref(v___y_2863_);
v___x_2875_ = lean_apply_12(v_x_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_, v___y_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_, v___y_2873_, lean_box(0));
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___lam__0___boxed(lean_object* v_x_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_, lean_object* v___y_2883_, lean_object* v___y_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_){
_start:
{
lean_object* v_res_2889_; 
v_res_2889_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___lam__0(v_x_2876_, v___y_2877_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_, v___y_2882_, v___y_2883_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
lean_dec(v___y_2883_);
lean_dec_ref(v___y_2882_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec(v___y_2878_);
lean_dec_ref(v___y_2877_);
return v_res_2889_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg(lean_object* v_mvarId_2890_, lean_object* v_x_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_, lean_object* v___y_2897_, lean_object* v___y_2898_, lean_object* v___y_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_){
_start:
{
lean_object* v___f_2904_; lean_object* v___x_2905_; 
lean_inc(v___y_2898_);
lean_inc_ref(v___y_2897_);
lean_inc(v___y_2896_);
lean_inc_ref(v___y_2895_);
lean_inc(v___y_2894_);
lean_inc(v___y_2893_);
lean_inc_ref(v___y_2892_);
v___f_2904_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_2904_, 0, v_x_2891_);
lean_closure_set(v___f_2904_, 1, v___y_2892_);
lean_closure_set(v___f_2904_, 2, v___y_2893_);
lean_closure_set(v___f_2904_, 3, v___y_2894_);
lean_closure_set(v___f_2904_, 4, v___y_2895_);
lean_closure_set(v___f_2904_, 5, v___y_2896_);
lean_closure_set(v___f_2904_, 6, v___y_2897_);
lean_closure_set(v___f_2904_, 7, v___y_2898_);
v___x_2905_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_2890_, v___f_2904_, v___y_2899_, v___y_2900_, v___y_2901_, v___y_2902_);
if (lean_obj_tag(v___x_2905_) == 0)
{
return v___x_2905_;
}
else
{
lean_object* v_a_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2913_; 
v_a_2906_ = lean_ctor_get(v___x_2905_, 0);
v_isSharedCheck_2913_ = !lean_is_exclusive(v___x_2905_);
if (v_isSharedCheck_2913_ == 0)
{
v___x_2908_ = v___x_2905_;
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_a_2906_);
lean_dec(v___x_2905_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2913_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2911_; 
if (v_isShared_2909_ == 0)
{
v___x_2911_ = v___x_2908_;
goto v_reusejp_2910_;
}
else
{
lean_object* v_reuseFailAlloc_2912_; 
v_reuseFailAlloc_2912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2912_, 0, v_a_2906_);
v___x_2911_ = v_reuseFailAlloc_2912_;
goto v_reusejp_2910_;
}
v_reusejp_2910_:
{
return v___x_2911_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg___boxed(lean_object* v_mvarId_2914_, lean_object* v_x_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v_res_2928_; 
v_res_2928_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg(v_mvarId_2914_, v_x_2915_, v___y_2916_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_);
lean_dec(v___y_2926_);
lean_dec_ref(v___y_2925_);
lean_dec(v___y_2924_);
lean_dec_ref(v___y_2923_);
lean_dec(v___y_2922_);
lean_dec_ref(v___y_2921_);
lean_dec(v___y_2920_);
lean_dec_ref(v___y_2919_);
lean_dec(v___y_2918_);
lean_dec(v___y_2917_);
lean_dec_ref(v___y_2916_);
return v_res_2928_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1(lean_object* v_00_u03b1_2929_, lean_object* v_mvarId_2930_, lean_object* v_x_2931_, lean_object* v___y_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_){
_start:
{
lean_object* v___x_2944_; 
v___x_2944_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg(v_mvarId_2930_, v_x_2931_, v___y_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_, v___y_2941_, v___y_2942_);
return v___x_2944_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___boxed(lean_object* v_00_u03b1_2945_, lean_object* v_mvarId_2946_, lean_object* v_x_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_){
_start:
{
lean_object* v_res_2960_; 
v_res_2960_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1(v_00_u03b1_2945_, v_mvarId_2946_, v_x_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_, v___y_2953_, v___y_2954_, v___y_2955_, v___y_2956_, v___y_2957_, v___y_2958_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
lean_dec(v___y_2956_);
lean_dec_ref(v___y_2955_);
lean_dec(v___y_2954_);
lean_dec_ref(v___y_2953_);
lean_dec(v___y_2952_);
lean_dec_ref(v___y_2951_);
lean_dec(v___y_2950_);
lean_dec(v___y_2949_);
lean_dec_ref(v___y_2948_);
return v_res_2960_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0(lean_object* v___x_2961_, lean_object* v_____do__lift_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_){
_start:
{
lean_object* v_options_2975_; uint8_t v_hasTrace_2976_; 
v_options_2975_ = lean_ctor_get(v___y_2972_, 2);
v_hasTrace_2976_ = lean_ctor_get_uint8(v_options_2975_, sizeof(void*)*1);
if (v_hasTrace_2976_ == 0)
{
lean_object* v___x_2977_; lean_object* v___x_2978_; 
lean_dec(v___x_2961_);
v___x_2977_ = lean_box(v_hasTrace_2976_);
v___x_2978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2978_, 0, v___x_2977_);
return v___x_2978_;
}
else
{
lean_object* v___x_2979_; lean_object* v___x_2980_; uint8_t v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2979_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__8));
v___x_2980_ = l_Lean_Name_append(v___x_2979_, v___x_2961_);
v___x_2981_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_____do__lift_2962_, v_options_2975_, v___x_2980_);
lean_dec(v___x_2980_);
v___x_2982_ = lean_box(v___x_2981_);
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
return v___x_2983_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0___boxed(lean_object* v___x_2984_, lean_object* v_____do__lift_2985_, lean_object* v___y_2986_, lean_object* v___y_2987_, lean_object* v___y_2988_, lean_object* v___y_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_){
_start:
{
lean_object* v_res_2998_; 
v_res_2998_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0(v___x_2984_, v_____do__lift_2985_, v___y_2986_, v___y_2987_, v___y_2988_, v___y_2989_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_);
lean_dec(v___y_2996_);
lean_dec_ref(v___y_2995_);
lean_dec(v___y_2994_);
lean_dec_ref(v___y_2993_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
lean_dec(v___y_2990_);
lean_dec_ref(v___y_2989_);
lean_dec(v___y_2988_);
lean_dec(v___y_2987_);
lean_dec_ref(v___y_2986_);
lean_dec_ref(v_____do__lift_2985_);
return v_res_2998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__0(lean_object* v_x_2999_, lean_object* v_x_3000_, lean_object* v_x_3001_){
_start:
{
if (lean_obj_tag(v_x_2999_) == 5)
{
lean_object* v_fn_3002_; lean_object* v_arg_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; 
v_fn_3002_ = lean_ctor_get(v_x_2999_, 0);
lean_inc_ref(v_fn_3002_);
v_arg_3003_ = lean_ctor_get(v_x_2999_, 1);
lean_inc_ref(v_arg_3003_);
lean_dec_ref_known(v_x_2999_, 2);
v___x_3004_ = lean_array_set(v_x_3000_, v_x_3001_, v_arg_3003_);
v___x_3005_ = lean_unsigned_to_nat(1u);
v___x_3006_ = lean_nat_sub(v_x_3001_, v___x_3005_);
lean_dec(v_x_3001_);
v_x_2999_ = v_fn_3002_;
v_x_3000_ = v___x_3004_;
v_x_3001_ = v___x_3006_;
goto _start;
}
else
{
lean_object* v___x_3008_; 
lean_dec(v_x_3001_);
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v_x_2999_);
lean_ctor_set(v___x_3008_, 1, v_x_3000_);
return v___x_3008_;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; 
v___x_3010_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__0));
v___x_3011_ = l_Lean_stringToMessageData(v___x_3010_);
return v___x_3011_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__3(void){
_start:
{
lean_object* v___x_3013_; lean_object* v___x_3014_; 
v___x_3013_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__2));
v___x_3014_ = l_Lean_stringToMessageData(v___x_3013_);
return v___x_3014_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__5(void){
_start:
{
lean_object* v___x_3020_; lean_object* v_dummy_3021_; 
v___x_3020_ = lean_box(0);
v_dummy_3021_ = l_Lean_Expr_sort___override(v___x_3020_);
return v_dummy_3021_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__13(void){
_start:
{
lean_object* v___x_3037_; lean_object* v___x_3038_; 
v___x_3037_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__12));
v___x_3038_ = l_Lean_stringToMessageData(v___x_3037_);
return v___x_3038_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__15(void){
_start:
{
lean_object* v___x_3040_; lean_object* v___x_3041_; 
v___x_3040_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__14));
v___x_3041_ = l_Lean_stringToMessageData(v___x_3040_);
return v___x_3041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1(lean_object* v_goal_3042_, lean_object* v_scope_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_, lean_object* v___y_3054_){
_start:
{
lean_object* v___y_3057_; lean_object* v_g_3058_; lean_object* v___y_3059_; lean_object* v___y_3081_; lean_object* v___y_3082_; lean_object* v___y_3083_; lean_object* v___y_3084_; lean_object* v___y_3085_; lean_object* v___y_3086_; lean_object* v___y_3087_; lean_object* v___y_3088_; lean_object* v___y_3089_; lean_object* v___y_3090_; lean_object* v___y_3091_; lean_object* v___y_3092_; lean_object* v___y_3093_; lean_object* v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3110_; lean_object* v_g_3114_; lean_object* v_gs_3120_; lean_object* v___x_3126_; 
v___x_3126_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_outOfFuel___redArg(v___y_3045_);
if (lean_obj_tag(v___x_3126_) == 0)
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3504_; 
v_a_3127_ = lean_ctor_get(v___x_3126_, 0);
v_isSharedCheck_3504_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3504_ == 0)
{
v___x_3129_ = v___x_3126_;
v_isShared_3130_ = v_isSharedCheck_3504_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_3126_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3504_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
uint8_t v___x_3131_; 
v___x_3131_ = lean_unbox(v_a_3127_);
lean_dec(v_a_3127_);
if (v___x_3131_ == 0)
{
lean_object* v___x_3132_; 
lean_del_object(v___x_3129_);
lean_inc(v_goal_3042_);
v___x_3132_ = l_Lean_MVarId_getType(v_goal_3042_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
if (lean_obj_tag(v___x_3132_) == 0)
{
lean_object* v_a_3133_; lean_object* v___x_3135_; uint8_t v_isShared_3136_; uint8_t v_isSharedCheck_3491_; 
v_a_3133_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3135_ = v___x_3132_;
v_isShared_3136_ = v_isSharedCheck_3491_;
goto v_resetjp_3134_;
}
else
{
lean_inc(v_a_3133_);
lean_dec(v___x_3132_);
v___x_3135_ = lean_box(0);
v_isShared_3136_ = v_isSharedCheck_3491_;
goto v_resetjp_3134_;
}
v_resetjp_3134_:
{
lean_object* v_inheritedTraceOptions_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3490_; 
v_inheritedTraceOptions_3142_ = lean_ctor_get(v___y_3053_, 13);
v___x_3143_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__6));
v___x_3144_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0(v___x_3143_, v_inheritedTraceOptions_3142_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3490_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3490_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3490_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3490_;
goto v_resetjp_3146_;
}
v___jp_3137_:
{
lean_object* v___x_3138_; lean_object* v___x_3140_; 
v___x_3138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3138_, 0, v_a_3133_);
if (v_isShared_3136_ == 0)
{
lean_ctor_set(v___x_3135_, 0, v___x_3138_);
v___x_3140_ = v___x_3135_;
goto v_reusejp_3139_;
}
else
{
lean_object* v_reuseFailAlloc_3141_; 
v_reuseFailAlloc_3141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3141_, 0, v___x_3138_);
v___x_3140_ = v_reuseFailAlloc_3141_;
goto v_reusejp_3139_;
}
v_reusejp_3139_:
{
return v___x_3140_;
}
}
v_resetjp_3146_:
{
uint8_t v___x_3149_; lean_object* v___y_3151_; lean_object* v___y_3152_; lean_object* v___y_3153_; lean_object* v___y_3154_; lean_object* v___y_3155_; lean_object* v___y_3156_; uint8_t v___y_3157_; lean_object* v___y_3158_; lean_object* v___y_3159_; lean_object* v___y_3160_; lean_object* v___y_3161_; lean_object* v___y_3162_; lean_object* v___y_3163_; lean_object* v___y_3164_; lean_object* v___y_3165_; lean_object* v___y_3166_; lean_object* v___y_3167_; lean_object* v___y_3168_; lean_object* v___y_3169_; lean_object* v___y_3170_; lean_object* v___y_3171_; lean_object* v___y_3172_; lean_object* v___y_3173_; lean_object* v___y_3174_; lean_object* v___y_3175_; lean_object* v___y_3310_; lean_object* v___y_3311_; lean_object* v___y_3312_; lean_object* v___y_3313_; lean_object* v___y_3314_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; lean_object* v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; uint8_t v___x_3477_; 
v___x_3149_ = 1;
v___x_3477_ = lean_unbox(v_a_3145_);
lean_dec(v_a_3145_);
if (v___x_3477_ == 0)
{
v___y_3310_ = v___y_3044_;
v___y_3311_ = v___y_3045_;
v___y_3312_ = v___y_3046_;
v___y_3313_ = v___y_3047_;
v___y_3314_ = v___y_3048_;
v___y_3315_ = v___y_3049_;
v___y_3316_ = v___y_3050_;
v___y_3317_ = v___y_3051_;
v___y_3318_ = v___y_3052_;
v___y_3319_ = v___y_3053_;
v___y_3320_ = v___y_3054_;
goto v___jp_3309_;
}
else
{
lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_3481_; 
v___x_3478_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__15, &l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__15_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__15);
lean_inc(v_a_3133_);
v___x_3479_ = l_Lean_MessageData_ofExpr(v_a_3133_);
v___x_3480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3480_, 0, v___x_3478_);
lean_ctor_set(v___x_3480_, 1, v___x_3479_);
v___x_3481_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___x_3143_, v___x_3480_, v___y_3051_, v___y_3052_, v___y_3053_, v___y_3054_);
if (lean_obj_tag(v___x_3481_) == 0)
{
lean_dec_ref_known(v___x_3481_, 1);
v___y_3310_ = v___y_3044_;
v___y_3311_ = v___y_3045_;
v___y_3312_ = v___y_3046_;
v___y_3313_ = v___y_3047_;
v___y_3314_ = v___y_3048_;
v___y_3315_ = v___y_3049_;
v___y_3316_ = v___y_3050_;
v___y_3317_ = v___y_3051_;
v___y_3318_ = v___y_3052_;
v___y_3319_ = v___y_3053_;
v___y_3320_ = v___y_3054_;
goto v___jp_3309_;
}
else
{
lean_object* v_a_3482_; lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3482_ = lean_ctor_get(v___x_3481_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3481_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3484_ = v___x_3481_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_inc(v_a_3482_);
lean_dec(v___x_3481_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_a_3482_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
}
v___jp_3150_:
{
lean_object* v___x_3176_; 
lean_inc_ref(v___y_3152_);
lean_inc_ref(v___y_3158_);
lean_inc_ref(v___y_3151_);
lean_inc_ref(v___y_3154_);
lean_inc_ref(v___y_3153_);
lean_inc_ref(v___y_3156_);
lean_inc_ref(v___y_3164_);
lean_inc_ref(v___y_3161_);
lean_inc_ref(v___y_3160_);
lean_inc_ref(v___y_3162_);
lean_inc_ref(v___y_3159_);
lean_inc_ref(v___y_3163_);
lean_inc(v_goal_3042_);
v___x_3176_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetHoist(v_goal_3042_, v___y_3163_, v___y_3159_, v___y_3162_, v___y_3160_, v___y_3161_, v___y_3164_, v___y_3156_, v___y_3153_, v___y_3154_, v___y_3151_, v___y_3158_, v___y_3152_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3176_) == 0)
{
lean_object* v_a_3177_; 
v_a_3177_ = lean_ctor_get(v___x_3176_, 0);
lean_inc(v_a_3177_);
lean_dec_ref_known(v___x_3176_, 1);
if (lean_obj_tag(v_a_3177_) == 1)
{
lean_object* v_val_3178_; lean_object* v___x_3179_; 
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_goal_3042_);
v_val_3178_ = lean_ctor_get(v_a_3177_, 0);
lean_inc(v_val_3178_);
lean_dec_ref_known(v_a_3177_, 1);
v___x_3179_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_burnOne___redArg(v___y_3166_);
if (lean_obj_tag(v___x_3179_) == 0)
{
lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3189_; 
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3189_ == 0)
{
lean_object* v_unused_3190_; 
v_unused_3190_ = lean_ctor_get(v___x_3179_, 0);
lean_dec(v_unused_3190_);
v___x_3181_ = v___x_3179_;
v_isShared_3182_ = v_isSharedCheck_3189_;
goto v_resetjp_3180_;
}
else
{
lean_dec(v___x_3179_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3189_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___x_3187_; 
v___x_3183_ = lean_box(0);
v___x_3184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3184_, 0, v_val_3178_);
lean_ctor_set(v___x_3184_, 1, v___x_3183_);
v___x_3185_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3185_, 0, v_scope_3043_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 0, v___x_3185_);
v___x_3187_ = v___x_3181_;
goto v_reusejp_3186_;
}
else
{
lean_object* v_reuseFailAlloc_3188_; 
v_reuseFailAlloc_3188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3188_, 0, v___x_3185_);
v___x_3187_ = v_reuseFailAlloc_3188_;
goto v_reusejp_3186_;
}
v_reusejp_3186_:
{
return v___x_3187_;
}
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec(v_val_3178_);
lean_dec_ref(v_scope_3043_);
v_a_3191_ = lean_ctor_get(v___x_3179_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3179_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3179_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3179_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
else
{
lean_object* v___x_3199_; 
lean_dec(v_a_3177_);
lean_inc(v_goal_3042_);
v___x_3199_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_Scope_collectLocalSpecs(v_scope_3043_, v_goal_3042_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3199_) == 0)
{
lean_object* v_a_3200_; lean_object* v___x_3201_; 
v_a_3200_ = lean_ctor_get(v___x_3199_, 0);
lean_inc(v_a_3200_);
lean_dec_ref_known(v___x_3199_, 1);
lean_inc_ref(v___y_3155_);
lean_inc_ref(v___y_3158_);
lean_inc_ref(v___y_3151_);
lean_inc_ref(v___y_3154_);
lean_inc_ref(v___y_3153_);
lean_inc_ref(v___y_3156_);
lean_inc_ref(v___y_3164_);
lean_inc_ref(v___y_3161_);
lean_inc_ref(v___y_3160_);
lean_inc_ref(v___y_3162_);
lean_inc_ref(v___y_3159_);
lean_inc_ref(v___y_3163_);
lean_inc(v_goal_3042_);
v___x_3201_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySplit(v_goal_3042_, v___y_3163_, v___y_3159_, v___y_3162_, v___y_3160_, v___y_3161_, v___y_3164_, v___y_3156_, v___y_3153_, v___y_3154_, v___y_3151_, v___y_3158_, v___y_3155_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3201_) == 0)
{
lean_object* v_a_3202_; 
v_a_3202_ = lean_ctor_get(v___x_3201_, 0);
lean_inc(v_a_3202_);
lean_dec_ref_known(v___x_3201_, 1);
if (lean_obj_tag(v_a_3202_) == 1)
{
lean_object* v_val_3203_; lean_object* v___x_3204_; 
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_goal_3042_);
v_val_3203_ = lean_ctor_get(v_a_3202_, 0);
lean_inc(v_val_3203_);
lean_dec_ref_known(v_a_3202_, 1);
v___x_3204_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_burnOne___redArg(v___y_3166_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3212_; 
v_isSharedCheck_3212_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3212_ == 0)
{
lean_object* v_unused_3213_; 
v_unused_3213_ = lean_ctor_get(v___x_3204_, 0);
lean_dec(v_unused_3213_);
v___x_3206_ = v___x_3204_;
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
else
{
lean_dec(v___x_3204_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3212_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3208_; lean_object* v___x_3210_; 
v___x_3208_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3208_, 0, v_a_3200_);
lean_ctor_set(v___x_3208_, 1, v_val_3203_);
if (v_isShared_3207_ == 0)
{
lean_ctor_set(v___x_3206_, 0, v___x_3208_);
v___x_3210_ = v___x_3206_;
goto v_reusejp_3209_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v___x_3208_);
v___x_3210_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3209_;
}
v_reusejp_3209_:
{
return v___x_3210_;
}
}
}
else
{
lean_object* v_a_3214_; lean_object* v___x_3216_; uint8_t v_isShared_3217_; uint8_t v_isSharedCheck_3221_; 
lean_dec(v_val_3203_);
lean_dec(v_a_3200_);
v_a_3214_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3221_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3221_ == 0)
{
v___x_3216_ = v___x_3204_;
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
else
{
lean_inc(v_a_3214_);
lean_dec(v___x_3204_);
v___x_3216_ = lean_box(0);
v_isShared_3217_ = v_isSharedCheck_3221_;
goto v_resetjp_3215_;
}
v_resetjp_3215_:
{
lean_object* v___x_3219_; 
if (v_isShared_3217_ == 0)
{
v___x_3219_ = v___x_3216_;
goto v_reusejp_3218_;
}
else
{
lean_object* v_reuseFailAlloc_3220_; 
v_reuseFailAlloc_3220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3220_, 0, v_a_3214_);
v___x_3219_ = v_reuseFailAlloc_3220_;
goto v_reusejp_3218_;
}
v_reusejp_3218_:
{
return v___x_3219_;
}
}
}
}
else
{
lean_object* v___x_3222_; 
lean_dec(v_a_3202_);
lean_inc_ref(v___y_3158_);
lean_inc_ref(v___y_3151_);
lean_inc_ref(v___y_3154_);
lean_inc_ref(v___y_3153_);
lean_inc_ref(v___y_3156_);
lean_inc_ref(v___y_3164_);
lean_inc_ref(v___y_3161_);
lean_inc_ref(v___y_3160_);
lean_inc_ref(v___y_3162_);
lean_inc_ref(v___y_3159_);
lean_inc_ref(v___y_3163_);
lean_inc(v_goal_3042_);
v___x_3222_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryFvarZeta(v_goal_3042_, v___y_3163_, v___y_3159_, v___y_3162_, v___y_3160_, v___y_3161_, v___y_3164_, v___y_3156_, v___y_3153_, v___y_3154_, v___y_3151_, v___y_3158_, v___y_3152_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3222_) == 0)
{
lean_object* v_a_3223_; 
v_a_3223_ = lean_ctor_get(v___x_3222_, 0);
lean_inc(v_a_3223_);
lean_dec_ref_known(v___x_3222_, 1);
if (lean_obj_tag(v_a_3223_) == 1)
{
lean_object* v_val_3224_; 
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_goal_3042_);
v_val_3224_ = lean_ctor_get(v_a_3223_, 0);
lean_inc(v_val_3224_);
lean_dec_ref_known(v_a_3223_, 1);
v___y_3057_ = v_a_3200_;
v_g_3058_ = v_val_3224_;
v___y_3059_ = v___y_3166_;
goto v___jp_3056_;
}
else
{
lean_object* v___x_3225_; 
lean_dec(v_a_3223_);
lean_inc_ref(v___y_3158_);
lean_inc_ref(v___y_3154_);
lean_inc_ref(v___y_3153_);
lean_inc_ref(v___y_3156_);
lean_inc_ref(v___y_3162_);
lean_inc(v_goal_3042_);
v___x_3225_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceProg(v_goal_3042_, v___y_3163_, v___y_3159_, v___y_3162_, v___y_3160_, v___y_3161_, v___y_3164_, v___y_3156_, v___y_3153_, v___y_3154_, v___y_3151_, v___y_3158_, v___y_3152_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
lean_dec_ref(v___y_3152_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v_a_3226_; 
v_a_3226_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3226_);
lean_dec_ref_known(v___x_3225_, 1);
if (lean_obj_tag(v_a_3226_) == 1)
{
lean_object* v_val_3227_; 
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v_goal_3042_);
v_val_3227_ = lean_ctor_get(v_a_3226_, 0);
lean_inc(v_val_3227_);
lean_dec_ref_known(v_a_3226_, 1);
v___y_3057_ = v_a_3200_;
v_g_3058_ = v_val_3227_;
v___y_3059_ = v___y_3166_;
goto v___jp_3056_;
}
else
{
lean_object* v_untilPat_x3f_3228_; 
lean_dec(v_a_3226_);
v_untilPat_x3f_3228_ = lean_ctor_get(v___y_3165_, 18);
if (lean_obj_tag(v_untilPat_x3f_3228_) == 1)
{
lean_object* v_val_3229_; lean_object* v___x_3230_; 
v_val_3229_ = lean_ctor_get(v_untilPat_x3f_3228_, 0);
lean_inc_ref(v___y_3156_);
v___x_3230_ = l_Lean_Elab_Tactic_Do_Internal_UntilPatternThunk_force(v_val_3229_, v___y_3156_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3230_) == 0)
{
lean_object* v_a_3231_; lean_object* v___x_3232_; 
v_a_3231_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3231_);
lean_dec_ref_known(v___x_3230_, 1);
lean_inc_ref(v___y_3158_);
v___x_3232_ = l_Lean_Meta_Sym_Pattern_match_x3f(v_a_3231_, v___y_3158_, v___x_3149_, v___y_3170_, v___y_3171_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3232_) == 0)
{
lean_object* v_a_3233_; 
v_a_3233_ = lean_ctor_get(v___x_3232_, 0);
lean_inc(v_a_3233_);
lean_dec_ref_known(v___x_3232_, 1);
if (lean_obj_tag(v_a_3233_) == 0)
{
v___y_3081_ = v___y_3174_;
v___y_3082_ = v___y_3173_;
v___y_3083_ = v___y_3165_;
v___y_3084_ = v___y_3170_;
v___y_3085_ = v___y_3153_;
v___y_3086_ = v_a_3200_;
v___y_3087_ = v___y_3155_;
v___y_3088_ = v___y_3154_;
v___y_3089_ = v___y_3175_;
v___y_3090_ = v___y_3156_;
v___y_3091_ = v___y_3158_;
v___y_3092_ = v___y_3162_;
v___y_3093_ = v___y_3167_;
v___y_3094_ = v___y_3168_;
v___y_3095_ = v___y_3169_;
v___y_3096_ = v___y_3172_;
v___y_3097_ = v___y_3166_;
v___y_3098_ = v___y_3171_;
goto v___jp_3080_;
}
else
{
lean_dec_ref_known(v_a_3233_, 1);
if (v___y_3157_ == 0)
{
v___y_3081_ = v___y_3174_;
v___y_3082_ = v___y_3173_;
v___y_3083_ = v___y_3165_;
v___y_3084_ = v___y_3170_;
v___y_3085_ = v___y_3153_;
v___y_3086_ = v_a_3200_;
v___y_3087_ = v___y_3155_;
v___y_3088_ = v___y_3154_;
v___y_3089_ = v___y_3175_;
v___y_3090_ = v___y_3156_;
v___y_3091_ = v___y_3158_;
v___y_3092_ = v___y_3162_;
v___y_3093_ = v___y_3167_;
v___y_3094_ = v___y_3168_;
v___y_3095_ = v___y_3169_;
v___y_3096_ = v___y_3172_;
v___y_3097_ = v___y_3166_;
v___y_3098_ = v___y_3171_;
goto v___jp_3080_;
}
else
{
lean_object* v_options_3234_; uint8_t v_hasTrace_3235_; 
lean_dec(v_a_3200_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v_goal_3042_);
v_options_3234_ = lean_ctor_get(v___y_3174_, 2);
v_hasTrace_3235_ = lean_ctor_get_uint8(v_options_3234_, sizeof(void*)*1);
if (v_hasTrace_3235_ == 0)
{
lean_dec_ref(v___y_3158_);
goto v___jp_3123_;
}
else
{
lean_object* v_inheritedTraceOptions_3236_; lean_object* v___x_3237_; uint8_t v___x_3238_; 
v_inheritedTraceOptions_3236_ = lean_ctor_get(v___y_3174_, 13);
v___x_3237_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro___closed__9);
v___x_3238_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3236_, v_options_3234_, v___x_3237_);
if (v___x_3238_ == 0)
{
lean_dec_ref(v___y_3158_);
goto v___jp_3123_;
}
else
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3239_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__1);
v___x_3240_ = l_Lean_MessageData_ofExpr(v___y_3158_);
v___x_3241_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3241_, 0, v___x_3239_);
lean_ctor_set(v___x_3241_, 1, v___x_3240_);
v___x_3242_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__3);
v___x_3243_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3241_);
lean_ctor_set(v___x_3243_, 1, v___x_3242_);
v___x_3244_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___x_3143_, v___x_3243_, v___y_3172_, v___y_3173_, v___y_3174_, v___y_3175_);
if (lean_obj_tag(v___x_3244_) == 0)
{
lean_dec_ref_known(v___x_3244_, 1);
goto v___jp_3123_;
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
v_a_3245_ = lean_ctor_get(v___x_3244_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3244_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3244_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3244_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
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
lean_object* v_a_3253_; lean_object* v___x_3255_; uint8_t v_isShared_3256_; uint8_t v_isSharedCheck_3260_; 
lean_dec(v_a_3200_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v_goal_3042_);
v_a_3253_ = lean_ctor_get(v___x_3232_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3232_);
if (v_isSharedCheck_3260_ == 0)
{
v___x_3255_ = v___x_3232_;
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
else
{
lean_inc(v_a_3253_);
lean_dec(v___x_3232_);
v___x_3255_ = lean_box(0);
v_isShared_3256_ = v_isSharedCheck_3260_;
goto v_resetjp_3254_;
}
v_resetjp_3254_:
{
lean_object* v___x_3258_; 
if (v_isShared_3256_ == 0)
{
v___x_3258_ = v___x_3255_;
goto v_reusejp_3257_;
}
else
{
lean_object* v_reuseFailAlloc_3259_; 
v_reuseFailAlloc_3259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3259_, 0, v_a_3253_);
v___x_3258_ = v_reuseFailAlloc_3259_;
goto v_reusejp_3257_;
}
v_reusejp_3257_:
{
return v___x_3258_;
}
}
}
}
else
{
lean_object* v_a_3261_; lean_object* v___x_3263_; uint8_t v_isShared_3264_; uint8_t v_isSharedCheck_3268_; 
lean_dec(v_a_3200_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v_goal_3042_);
v_a_3261_ = lean_ctor_get(v___x_3230_, 0);
v_isSharedCheck_3268_ = !lean_is_exclusive(v___x_3230_);
if (v_isSharedCheck_3268_ == 0)
{
v___x_3263_ = v___x_3230_;
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
else
{
lean_inc(v_a_3261_);
lean_dec(v___x_3230_);
v___x_3263_ = lean_box(0);
v_isShared_3264_ = v_isSharedCheck_3268_;
goto v_resetjp_3262_;
}
v_resetjp_3262_:
{
lean_object* v___x_3266_; 
if (v_isShared_3264_ == 0)
{
v___x_3266_ = v___x_3263_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3267_; 
v_reuseFailAlloc_3267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3267_, 0, v_a_3261_);
v___x_3266_ = v_reuseFailAlloc_3267_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
return v___x_3266_;
}
}
}
}
else
{
v___y_3081_ = v___y_3174_;
v___y_3082_ = v___y_3173_;
v___y_3083_ = v___y_3165_;
v___y_3084_ = v___y_3170_;
v___y_3085_ = v___y_3153_;
v___y_3086_ = v_a_3200_;
v___y_3087_ = v___y_3155_;
v___y_3088_ = v___y_3154_;
v___y_3089_ = v___y_3175_;
v___y_3090_ = v___y_3156_;
v___y_3091_ = v___y_3158_;
v___y_3092_ = v___y_3162_;
v___y_3093_ = v___y_3167_;
v___y_3094_ = v___y_3168_;
v___y_3095_ = v___y_3169_;
v___y_3096_ = v___y_3172_;
v___y_3097_ = v___y_3166_;
v___y_3098_ = v___y_3171_;
goto v___jp_3080_;
}
}
}
else
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3276_; 
lean_dec(v_a_3200_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec(v_goal_3042_);
v_a_3269_ = lean_ctor_get(v___x_3225_, 0);
v_isSharedCheck_3276_ = !lean_is_exclusive(v___x_3225_);
if (v_isSharedCheck_3276_ == 0)
{
v___x_3271_ = v___x_3225_;
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3225_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3276_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
lean_object* v___x_3274_; 
if (v_isShared_3272_ == 0)
{
v___x_3274_ = v___x_3271_;
goto v_reusejp_3273_;
}
else
{
lean_object* v_reuseFailAlloc_3275_; 
v_reuseFailAlloc_3275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3275_, 0, v_a_3269_);
v___x_3274_ = v_reuseFailAlloc_3275_;
goto v_reusejp_3273_;
}
v_reusejp_3273_:
{
return v___x_3274_;
}
}
}
}
}
else
{
lean_object* v_a_3277_; lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3284_; 
lean_dec(v_a_3200_);
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_goal_3042_);
v_a_3277_ = lean_ctor_get(v___x_3222_, 0);
v_isSharedCheck_3284_ = !lean_is_exclusive(v___x_3222_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3279_ = v___x_3222_;
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
else
{
lean_inc(v_a_3277_);
lean_dec(v___x_3222_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3284_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_a_3277_);
v___x_3282_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
return v___x_3282_;
}
}
}
}
}
else
{
lean_object* v_a_3285_; lean_object* v___x_3287_; uint8_t v_isShared_3288_; uint8_t v_isSharedCheck_3292_; 
lean_dec(v_a_3200_);
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_goal_3042_);
v_a_3285_ = lean_ctor_get(v___x_3201_, 0);
v_isSharedCheck_3292_ = !lean_is_exclusive(v___x_3201_);
if (v_isSharedCheck_3292_ == 0)
{
v___x_3287_ = v___x_3201_;
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
else
{
lean_inc(v_a_3285_);
lean_dec(v___x_3201_);
v___x_3287_ = lean_box(0);
v_isShared_3288_ = v_isSharedCheck_3292_;
goto v_resetjp_3286_;
}
v_resetjp_3286_:
{
lean_object* v___x_3290_; 
if (v_isShared_3288_ == 0)
{
v___x_3290_ = v___x_3287_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3291_; 
v_reuseFailAlloc_3291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3291_, 0, v_a_3285_);
v___x_3290_ = v_reuseFailAlloc_3291_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
return v___x_3290_;
}
}
}
}
else
{
lean_object* v_a_3293_; lean_object* v___x_3295_; uint8_t v_isShared_3296_; uint8_t v_isSharedCheck_3300_; 
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec(v_goal_3042_);
v_a_3293_ = lean_ctor_get(v___x_3199_, 0);
v_isSharedCheck_3300_ = !lean_is_exclusive(v___x_3199_);
if (v_isSharedCheck_3300_ == 0)
{
v___x_3295_ = v___x_3199_;
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
else
{
lean_inc(v_a_3293_);
lean_dec(v___x_3199_);
v___x_3295_ = lean_box(0);
v_isShared_3296_ = v_isSharedCheck_3300_;
goto v_resetjp_3294_;
}
v_resetjp_3294_:
{
lean_object* v___x_3298_; 
if (v_isShared_3296_ == 0)
{
v___x_3298_ = v___x_3295_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v_a_3293_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
}
}
}
else
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3308_; 
lean_dec_ref(v___y_3164_);
lean_dec_ref(v___y_3163_);
lean_dec_ref(v___y_3162_);
lean_dec_ref(v___y_3161_);
lean_dec_ref(v___y_3160_);
lean_dec_ref(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec_ref(v___y_3156_);
lean_dec_ref(v___y_3155_);
lean_dec_ref(v___y_3154_);
lean_dec_ref(v___y_3153_);
lean_dec_ref(v___y_3152_);
lean_dec_ref(v___y_3151_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3301_ = lean_ctor_get(v___x_3176_, 0);
v_isSharedCheck_3308_ = !lean_is_exclusive(v___x_3176_);
if (v_isSharedCheck_3308_ == 0)
{
v___x_3303_ = v___x_3176_;
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3176_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3308_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
lean_object* v___x_3306_; 
if (v_isShared_3304_ == 0)
{
v___x_3306_ = v___x_3303_;
goto v_reusejp_3305_;
}
else
{
lean_object* v_reuseFailAlloc_3307_; 
v_reuseFailAlloc_3307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3307_, 0, v_a_3301_);
v___x_3306_ = v_reuseFailAlloc_3307_;
goto v_reusejp_3305_;
}
v_reusejp_3305_:
{
return v___x_3306_;
}
}
}
}
v___jp_3309_:
{
lean_object* v___x_3321_; 
lean_inc(v_goal_3042_);
v___x_3321_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryForallIntro___redArg(v_goal_3042_, v_a_3133_, v___y_3310_, v___y_3311_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3321_) == 0)
{
lean_object* v_a_3322_; 
v_a_3322_ = lean_ctor_get(v___x_3321_, 0);
lean_inc(v_a_3322_);
lean_dec_ref_known(v___x_3321_, 1);
if (lean_obj_tag(v_a_3322_) == 1)
{
lean_object* v_val_3323_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec(v_goal_3042_);
v_val_3323_ = lean_ctor_get(v_a_3322_, 0);
lean_inc(v_val_3323_);
lean_dec_ref_known(v_a_3322_, 1);
v_g_3114_ = v_val_3323_;
goto v___jp_3113_;
}
else
{
lean_object* v___x_3324_; 
lean_dec(v_a_3322_);
lean_inc(v_goal_3042_);
v___x_3324_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro(v_goal_3042_, v_a_3133_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3324_) == 0)
{
lean_object* v_a_3325_; 
v_a_3325_ = lean_ctor_get(v___x_3324_, 0);
lean_inc(v_a_3325_);
lean_dec_ref_known(v___x_3324_, 1);
if (lean_obj_tag(v_a_3325_) == 1)
{
lean_object* v_val_3326_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec(v_goal_3042_);
v_val_3326_ = lean_ctor_get(v_a_3325_, 0);
lean_inc(v_val_3326_);
lean_dec_ref_known(v_a_3325_, 1);
v_g_3114_ = v_val_3326_;
goto v___jp_3113_;
}
else
{
lean_object* v___x_3327_; 
lean_dec(v_a_3325_);
lean_inc(v_goal_3042_);
v___x_3327_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTripleUnfold(v_goal_3042_, v_a_3133_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3327_) == 0)
{
lean_object* v_a_3328_; 
v_a_3328_ = lean_ctor_get(v___x_3327_, 0);
lean_inc(v_a_3328_);
lean_dec_ref_known(v___x_3327_, 1);
if (lean_obj_tag(v_a_3328_) == 1)
{
lean_object* v_val_3329_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec(v_goal_3042_);
v_val_3329_ = lean_ctor_get(v_a_3328_, 0);
lean_inc(v_val_3329_);
lean_dec_ref_known(v_a_3328_, 1);
v_g_3114_ = v_val_3329_;
goto v___jp_3113_;
}
else
{
lean_object* v___x_3330_; 
lean_dec(v_a_3328_);
lean_inc(v_goal_3042_);
v___x_3330_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solvePostCondEntails(v_goal_3042_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; 
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_a_3331_);
lean_dec_ref_known(v___x_3330_, 1);
if (lean_obj_tag(v_a_3331_) == 1)
{
lean_object* v_val_3332_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec(v_goal_3042_);
v_val_3332_ = lean_ctor_get(v_a_3331_, 0);
lean_inc(v_val_3332_);
lean_dec_ref_known(v_a_3331_, 1);
v_gs_3120_ = v_val_3332_;
goto v___jp_3119_;
}
else
{
lean_object* v___x_3333_; uint8_t v___x_3334_; 
lean_dec(v_a_3331_);
lean_inc(v_a_3133_);
v___x_3333_ = l_Lean_Expr_cleanupAnnotations(v_a_3133_);
v___x_3334_ = l_Lean_Expr_isApp(v___x_3333_);
if (v___x_3334_ == 0)
{
lean_dec_ref(v___x_3333_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
goto v___jp_3137_;
}
else
{
lean_object* v_arg_3335_; lean_object* v___x_3336_; uint8_t v___x_3337_; 
v_arg_3335_ = lean_ctor_get(v___x_3333_, 1);
lean_inc_ref(v_arg_3335_);
v___x_3336_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3333_);
v___x_3337_ = l_Lean_Expr_isApp(v___x_3336_);
if (v___x_3337_ == 0)
{
lean_dec_ref(v___x_3336_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
goto v___jp_3137_;
}
else
{
lean_object* v_arg_3338_; lean_object* v___x_3339_; uint8_t v___x_3340_; 
v_arg_3338_ = lean_ctor_get(v___x_3336_, 1);
lean_inc_ref(v_arg_3338_);
v___x_3339_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3336_);
v___x_3340_ = l_Lean_Expr_isApp(v___x_3339_);
if (v___x_3340_ == 0)
{
lean_dec_ref(v___x_3339_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
goto v___jp_3137_;
}
else
{
lean_object* v_arg_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; uint8_t v___x_3344_; 
v_arg_3341_ = lean_ctor_get(v___x_3339_, 1);
lean_inc_ref(v_arg_3341_);
v___x_3342_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3339_);
v___x_3343_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__4));
v___x_3344_ = l_Lean_Expr_isConstOf(v___x_3342_, v___x_3343_);
if (v___x_3344_ == 0)
{
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
goto v___jp_3137_;
}
else
{
lean_object* v___x_3345_; 
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_inc(v_goal_3042_);
v___x_3345_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryTargetLambdaIntro(v_goal_3042_, v_arg_3335_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref_known(v___x_3345_, 1);
if (lean_obj_tag(v_a_3346_) == 1)
{
lean_object* v_val_3347_; 
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec(v_goal_3042_);
v_val_3347_ = lean_ctor_get(v_a_3346_, 0);
lean_inc(v_val_3347_);
lean_dec_ref_known(v_a_3346_, 1);
v_g_3114_ = v_val_3347_;
goto v___jp_3113_;
}
else
{
lean_object* v___x_3348_; 
lean_dec(v_a_3346_);
lean_inc_ref(v_arg_3335_);
lean_inc_ref(v_arg_3338_);
lean_inc_ref(v_arg_3341_);
lean_inc_ref(v___x_3342_);
lean_inc(v_goal_3042_);
v___x_3348_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryHeadReduceHT(v_goal_3042_, v___x_3342_, v_arg_3341_, v_arg_3338_, v_arg_3335_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3348_) == 0)
{
lean_object* v_a_3349_; 
v_a_3349_ = lean_ctor_get(v___x_3348_, 0);
lean_inc(v_a_3349_);
lean_dec_ref_known(v___x_3348_, 1);
if (lean_obj_tag(v_a_3349_) == 1)
{
lean_object* v_val_3350_; 
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec(v_goal_3042_);
v_val_3350_ = lean_ctor_get(v_a_3349_, 0);
lean_inc(v_val_3350_);
lean_dec_ref_known(v_a_3349_, 1);
v_g_3114_ = v_val_3350_;
goto v___jp_3113_;
}
else
{
lean_object* v_dummy_3351_; lean_object* v_nargs_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v_fst_3357_; lean_object* v_snd_3358_; lean_object* v___x_3360_; uint8_t v_isShared_3361_; uint8_t v_isSharedCheck_3428_; 
lean_dec(v_a_3349_);
v_dummy_3351_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__5, &l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__5);
v_nargs_3352_ = l_Lean_Expr_getAppNumArgs(v_arg_3335_);
lean_inc(v_nargs_3352_);
v___x_3353_ = lean_mk_array(v_nargs_3352_, v_dummy_3351_);
v___x_3354_ = lean_unsigned_to_nat(1u);
v___x_3355_ = lean_nat_sub(v_nargs_3352_, v___x_3354_);
lean_dec(v_nargs_3352_);
lean_inc_ref(v_arg_3335_);
v___x_3356_ = l_Lean_Expr_withAppAux___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__0(v_arg_3335_, v___x_3353_, v___x_3355_);
v_fst_3357_ = lean_ctor_get(v___x_3356_, 0);
v_snd_3358_ = lean_ctor_get(v___x_3356_, 1);
v_isSharedCheck_3428_ = !lean_is_exclusive(v___x_3356_);
if (v_isSharedCheck_3428_ == 0)
{
v___x_3360_ = v___x_3356_;
v_isShared_3361_ = v_isSharedCheck_3428_;
goto v_resetjp_3359_;
}
else
{
lean_inc(v_snd_3358_);
lean_inc(v_fst_3357_);
lean_dec(v___x_3356_);
v___x_3360_ = lean_box(0);
v_isShared_3361_ = v_isSharedCheck_3428_;
goto v_resetjp_3359_;
}
v_resetjp_3359_:
{
lean_object* v___x_3362_; uint8_t v___x_3363_; 
v___x_3362_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__8));
v___x_3363_ = l_Lean_Expr_isConstOf(v_fst_3357_, v___x_3362_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_inc_ref(v_arg_3335_);
v___x_3364_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_trySolveSPredEntails(v_goal_3042_, v___x_3342_, v_arg_3341_, v_arg_3338_, v_arg_3335_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
lean_dec_ref(v___x_3342_);
if (lean_obj_tag(v___x_3364_) == 0)
{
lean_object* v_a_3365_; lean_object* v___x_3367_; uint8_t v_isShared_3368_; uint8_t v_isSharedCheck_3376_; 
v_a_3365_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3367_ = v___x_3364_;
v_isShared_3368_ = v_isSharedCheck_3376_;
goto v_resetjp_3366_;
}
else
{
lean_inc(v_a_3365_);
lean_dec(v___x_3364_);
v___x_3367_ = lean_box(0);
v_isShared_3368_ = v_isSharedCheck_3376_;
goto v_resetjp_3366_;
}
v_resetjp_3366_:
{
if (lean_obj_tag(v_a_3365_) == 1)
{
lean_object* v_val_3369_; 
lean_del_object(v___x_3367_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
v_val_3369_ = lean_ctor_get(v_a_3365_, 0);
lean_inc(v_val_3369_);
lean_dec_ref_known(v_a_3365_, 1);
v_gs_3120_ = v_val_3369_;
goto v___jp_3119_;
}
else
{
lean_object* v___x_3371_; 
lean_dec(v_a_3365_);
lean_dec_ref(v_scope_3043_);
if (v_isShared_3148_ == 0)
{
lean_ctor_set_tag(v___x_3147_, 1);
lean_ctor_set(v___x_3147_, 0, v_arg_3335_);
v___x_3371_ = v___x_3147_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_arg_3335_);
v___x_3371_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
lean_object* v___x_3373_; 
if (v_isShared_3368_ == 0)
{
lean_ctor_set(v___x_3367_, 0, v___x_3371_);
v___x_3373_ = v___x_3367_;
goto v_reusejp_3372_;
}
else
{
lean_object* v_reuseFailAlloc_3374_; 
v_reuseFailAlloc_3374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3374_, 0, v___x_3371_);
v___x_3373_ = v_reuseFailAlloc_3374_;
goto v_reusejp_3372_;
}
v_reusejp_3372_:
{
return v___x_3373_;
}
}
}
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3384_; 
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
v_a_3377_ = lean_ctor_get(v___x_3364_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3364_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3379_ = v___x_3364_;
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3364_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
return v___x_3382_;
}
}
}
}
else
{
lean_object* v___x_3385_; lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; uint8_t v___x_3389_; 
lean_del_object(v___x_3147_);
v___x_3385_ = l_Lean_instInhabitedExpr;
v___x_3386_ = lean_unsigned_to_nat(2u);
v___x_3387_ = lean_array_get_borrowed(v___x_3385_, v_snd_3358_, v___x_3386_);
lean_inc(v___x_3387_);
v___x_3388_ = l_Lean_Expr_cleanupAnnotations(v___x_3387_);
v___x_3389_ = l_Lean_Expr_isApp(v___x_3388_);
if (v___x_3389_ == 0)
{
lean_dec_ref(v___x_3388_);
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___y_3110_ = v_arg_3335_;
goto v___jp_3109_;
}
else
{
lean_object* v_arg_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v_arg_3390_ = lean_ctor_get(v___x_3388_, 1);
lean_inc_ref(v_arg_3390_);
v___x_3391_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3388_);
v___x_3392_ = l_Lean_Expr_isApp(v___x_3391_);
if (v___x_3392_ == 0)
{
lean_dec_ref(v___x_3391_);
lean_dec_ref(v_arg_3390_);
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___y_3110_ = v_arg_3335_;
goto v___jp_3109_;
}
else
{
lean_object* v_arg_3393_; lean_object* v___x_3394_; uint8_t v___x_3395_; 
v_arg_3393_ = lean_ctor_get(v___x_3391_, 1);
lean_inc_ref(v_arg_3393_);
v___x_3394_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3391_);
v___x_3395_ = l_Lean_Expr_isApp(v___x_3394_);
if (v___x_3395_ == 0)
{
lean_dec_ref(v___x_3394_);
lean_dec_ref(v_arg_3393_);
lean_dec_ref(v_arg_3390_);
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___y_3110_ = v_arg_3335_;
goto v___jp_3109_;
}
else
{
lean_object* v_arg_3396_; lean_object* v___x_3397_; uint8_t v___x_3398_; 
v_arg_3396_ = lean_ctor_get(v___x_3394_, 1);
lean_inc_ref(v_arg_3396_);
v___x_3397_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3394_);
v___x_3398_ = l_Lean_Expr_isApp(v___x_3397_);
if (v___x_3398_ == 0)
{
lean_dec_ref(v___x_3397_);
lean_dec_ref(v_arg_3396_);
lean_dec_ref(v_arg_3393_);
lean_dec_ref(v_arg_3390_);
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___y_3110_ = v_arg_3335_;
goto v___jp_3109_;
}
else
{
lean_object* v_arg_3399_; lean_object* v___x_3400_; uint8_t v___x_3401_; 
v_arg_3399_ = lean_ctor_get(v___x_3397_, 1);
lean_inc_ref(v_arg_3399_);
v___x_3400_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3397_);
v___x_3401_ = l_Lean_Expr_isApp(v___x_3400_);
if (v___x_3401_ == 0)
{
lean_dec_ref(v___x_3400_);
lean_dec_ref(v_arg_3399_);
lean_dec_ref(v_arg_3396_);
lean_dec_ref(v_arg_3393_);
lean_dec_ref(v_arg_3390_);
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___y_3110_ = v_arg_3335_;
goto v___jp_3109_;
}
else
{
lean_object* v_arg_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v___x_3405_; 
v_arg_3402_ = lean_ctor_get(v___x_3400_, 1);
lean_inc_ref(v_arg_3402_);
v___x_3403_ = l_Lean_Expr_appFnCleanup___redArg(v___x_3400_);
v___x_3404_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__11));
v___x_3405_ = l_Lean_Expr_isConstOf(v___x_3403_, v___x_3404_);
if (v___x_3405_ == 0)
{
lean_dec_ref(v___x_3403_);
lean_dec_ref(v_arg_3402_);
lean_dec_ref(v_arg_3399_);
lean_dec_ref(v_arg_3396_);
lean_dec_ref(v_arg_3393_);
lean_dec_ref(v_arg_3390_);
lean_del_object(v___x_3360_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___y_3110_ = v_arg_3335_;
goto v___jp_3109_;
}
else
{
lean_object* v_inheritedTraceOptions_3406_; lean_object* v___x_3407_; lean_object* v_a_3408_; lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; uint8_t v___x_3413_; 
lean_dec_ref(v_arg_3335_);
v_inheritedTraceOptions_3406_ = lean_ctor_get(v___y_3319_, 13);
v___x_3407_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__0(v___x_3143_, v_inheritedTraceOptions_3406_, v___y_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
v_a_3408_ = lean_ctor_get(v___x_3407_, 0);
lean_inc(v_a_3408_);
lean_dec_ref(v___x_3407_);
v___x_3409_ = lean_unsigned_to_nat(4u);
v___x_3410_ = lean_array_get_size(v_snd_3358_);
v___x_3411_ = l_Array_extract___redArg(v_snd_3358_, v___x_3409_, v___x_3410_);
v___x_3412_ = l_Lean_Expr_getAppFn(v_arg_3390_);
v___x_3413_ = lean_unbox(v_a_3408_);
lean_dec(v_a_3408_);
if (v___x_3413_ == 0)
{
lean_del_object(v___x_3360_);
v___y_3151_ = v_arg_3393_;
v___y_3152_ = v___x_3412_;
v___y_3153_ = v_arg_3399_;
v___y_3154_ = v_arg_3396_;
v___y_3155_ = v___x_3411_;
v___y_3156_ = v_arg_3402_;
v___y_3157_ = v___x_3405_;
v___y_3158_ = v_arg_3390_;
v___y_3159_ = v_arg_3338_;
v___y_3160_ = v___x_3342_;
v___y_3161_ = v_snd_3358_;
v___y_3162_ = v_arg_3341_;
v___y_3163_ = v_fst_3357_;
v___y_3164_ = v___x_3403_;
v___y_3165_ = v___y_3310_;
v___y_3166_ = v___y_3311_;
v___y_3167_ = v___y_3312_;
v___y_3168_ = v___y_3313_;
v___y_3169_ = v___y_3314_;
v___y_3170_ = v___y_3315_;
v___y_3171_ = v___y_3316_;
v___y_3172_ = v___y_3317_;
v___y_3173_ = v___y_3318_;
v___y_3174_ = v___y_3319_;
v___y_3175_ = v___y_3320_;
goto v___jp_3150_;
}
else
{
lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3417_; 
v___x_3414_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__13, &l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__13_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___closed__13);
lean_inc_ref(v_arg_3390_);
v___x_3415_ = l_Lean_MessageData_ofExpr(v_arg_3390_);
if (v_isShared_3361_ == 0)
{
lean_ctor_set_tag(v___x_3360_, 7);
lean_ctor_set(v___x_3360_, 1, v___x_3415_);
lean_ctor_set(v___x_3360_, 0, v___x_3414_);
v___x_3417_ = v___x_3360_;
goto v_reusejp_3416_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v___x_3414_);
lean_ctor_set(v_reuseFailAlloc_3427_, 1, v___x_3415_);
v___x_3417_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3416_;
}
v_reusejp_3416_:
{
lean_object* v___x_3418_; 
v___x_3418_ = l_Lean_addTrace___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_tryLetIntro_spec__0___redArg(v___x_3143_, v___x_3417_, v___y_3317_, v___y_3318_, v___y_3319_, v___y_3320_);
if (lean_obj_tag(v___x_3418_) == 0)
{
lean_dec_ref_known(v___x_3418_, 1);
v___y_3151_ = v_arg_3393_;
v___y_3152_ = v___x_3412_;
v___y_3153_ = v_arg_3399_;
v___y_3154_ = v_arg_3396_;
v___y_3155_ = v___x_3411_;
v___y_3156_ = v_arg_3402_;
v___y_3157_ = v___x_3405_;
v___y_3158_ = v_arg_3390_;
v___y_3159_ = v_arg_3338_;
v___y_3160_ = v___x_3342_;
v___y_3161_ = v_snd_3358_;
v___y_3162_ = v_arg_3341_;
v___y_3163_ = v_fst_3357_;
v___y_3164_ = v___x_3403_;
v___y_3165_ = v___y_3310_;
v___y_3166_ = v___y_3311_;
v___y_3167_ = v___y_3312_;
v___y_3168_ = v___y_3313_;
v___y_3169_ = v___y_3314_;
v___y_3170_ = v___y_3315_;
v___y_3171_ = v___y_3316_;
v___y_3172_ = v___y_3317_;
v___y_3173_ = v___y_3318_;
v___y_3174_ = v___y_3319_;
v___y_3175_ = v___y_3320_;
goto v___jp_3150_;
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_dec_ref(v___x_3412_);
lean_dec_ref(v___x_3411_);
lean_dec_ref(v___x_3403_);
lean_dec_ref(v_arg_3402_);
lean_dec_ref(v_arg_3399_);
lean_dec_ref(v_arg_3396_);
lean_dec_ref(v_arg_3393_);
lean_dec_ref(v_arg_3390_);
lean_dec(v_snd_3358_);
lean_dec(v_fst_3357_);
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3419_ = lean_ctor_get(v___x_3418_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___x_3418_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___x_3418_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___x_3418_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
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
else
{
lean_object* v_a_3429_; lean_object* v___x_3431_; uint8_t v_isShared_3432_; uint8_t v_isSharedCheck_3436_; 
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3429_ = lean_ctor_get(v___x_3348_, 0);
v_isSharedCheck_3436_ = !lean_is_exclusive(v___x_3348_);
if (v_isSharedCheck_3436_ == 0)
{
v___x_3431_ = v___x_3348_;
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
else
{
lean_inc(v_a_3429_);
lean_dec(v___x_3348_);
v___x_3431_ = lean_box(0);
v_isShared_3432_ = v_isSharedCheck_3436_;
goto v_resetjp_3430_;
}
v_resetjp_3430_:
{
lean_object* v___x_3434_; 
if (v_isShared_3432_ == 0)
{
v___x_3434_ = v___x_3431_;
goto v_reusejp_3433_;
}
else
{
lean_object* v_reuseFailAlloc_3435_; 
v_reuseFailAlloc_3435_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3435_, 0, v_a_3429_);
v___x_3434_ = v_reuseFailAlloc_3435_;
goto v_reusejp_3433_;
}
v_reusejp_3433_:
{
return v___x_3434_;
}
}
}
}
}
else
{
lean_object* v_a_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3444_; 
lean_dec_ref(v___x_3342_);
lean_dec_ref(v_arg_3341_);
lean_dec_ref(v_arg_3338_);
lean_dec_ref(v_arg_3335_);
lean_del_object(v___x_3147_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3437_ = lean_ctor_get(v___x_3345_, 0);
v_isSharedCheck_3444_ = !lean_is_exclusive(v___x_3345_);
if (v_isSharedCheck_3444_ == 0)
{
v___x_3439_ = v___x_3345_;
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_a_3437_);
lean_dec(v___x_3345_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3444_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3442_; 
if (v_isShared_3440_ == 0)
{
v___x_3442_ = v___x_3439_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v_a_3437_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
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
lean_object* v_a_3445_; lean_object* v___x_3447_; uint8_t v_isShared_3448_; uint8_t v_isSharedCheck_3452_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3445_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3452_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3452_ == 0)
{
v___x_3447_ = v___x_3330_;
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
else
{
lean_inc(v_a_3445_);
lean_dec(v___x_3330_);
v___x_3447_ = lean_box(0);
v_isShared_3448_ = v_isSharedCheck_3452_;
goto v_resetjp_3446_;
}
v_resetjp_3446_:
{
lean_object* v___x_3450_; 
if (v_isShared_3448_ == 0)
{
v___x_3450_ = v___x_3447_;
goto v_reusejp_3449_;
}
else
{
lean_object* v_reuseFailAlloc_3451_; 
v_reuseFailAlloc_3451_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3451_, 0, v_a_3445_);
v___x_3450_ = v_reuseFailAlloc_3451_;
goto v_reusejp_3449_;
}
v_reusejp_3449_:
{
return v___x_3450_;
}
}
}
}
}
else
{
lean_object* v_a_3453_; lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3453_ = lean_ctor_get(v___x_3327_, 0);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3327_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3455_ = v___x_3327_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_inc(v_a_3453_);
lean_dec(v___x_3327_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_a_3453_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
}
}
else
{
lean_object* v_a_3461_; lean_object* v___x_3463_; uint8_t v_isShared_3464_; uint8_t v_isSharedCheck_3468_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3461_ = lean_ctor_get(v___x_3324_, 0);
v_isSharedCheck_3468_ = !lean_is_exclusive(v___x_3324_);
if (v_isSharedCheck_3468_ == 0)
{
v___x_3463_ = v___x_3324_;
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
else
{
lean_inc(v_a_3461_);
lean_dec(v___x_3324_);
v___x_3463_ = lean_box(0);
v_isShared_3464_ = v_isSharedCheck_3468_;
goto v_resetjp_3462_;
}
v_resetjp_3462_:
{
lean_object* v___x_3466_; 
if (v_isShared_3464_ == 0)
{
v___x_3466_ = v___x_3463_;
goto v_reusejp_3465_;
}
else
{
lean_object* v_reuseFailAlloc_3467_; 
v_reuseFailAlloc_3467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3467_, 0, v_a_3461_);
v___x_3466_ = v_reuseFailAlloc_3467_;
goto v_reusejp_3465_;
}
v_reusejp_3465_:
{
return v___x_3466_;
}
}
}
}
}
else
{
lean_object* v_a_3469_; lean_object* v___x_3471_; uint8_t v_isShared_3472_; uint8_t v_isSharedCheck_3476_; 
lean_del_object(v___x_3147_);
lean_del_object(v___x_3135_);
lean_dec(v_a_3133_);
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3469_ = lean_ctor_get(v___x_3321_, 0);
v_isSharedCheck_3476_ = !lean_is_exclusive(v___x_3321_);
if (v_isSharedCheck_3476_ == 0)
{
v___x_3471_ = v___x_3321_;
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
else
{
lean_inc(v_a_3469_);
lean_dec(v___x_3321_);
v___x_3471_ = lean_box(0);
v_isShared_3472_ = v_isSharedCheck_3476_;
goto v_resetjp_3470_;
}
v_resetjp_3470_:
{
lean_object* v___x_3474_; 
if (v_isShared_3472_ == 0)
{
v___x_3474_ = v___x_3471_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3475_; 
v_reuseFailAlloc_3475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3475_, 0, v_a_3469_);
v___x_3474_ = v_reuseFailAlloc_3475_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
return v___x_3474_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3492_; lean_object* v___x_3494_; uint8_t v_isShared_3495_; uint8_t v_isSharedCheck_3499_; 
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3492_ = lean_ctor_get(v___x_3132_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3132_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3494_ = v___x_3132_;
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
else
{
lean_inc(v_a_3492_);
lean_dec(v___x_3132_);
v___x_3494_ = lean_box(0);
v_isShared_3495_ = v_isSharedCheck_3499_;
goto v_resetjp_3493_;
}
v_resetjp_3493_:
{
lean_object* v___x_3497_; 
if (v_isShared_3495_ == 0)
{
v___x_3497_ = v___x_3494_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_a_3492_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
return v___x_3497_;
}
}
}
}
else
{
lean_object* v___x_3500_; lean_object* v___x_3502_; 
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v___x_3500_ = lean_box(5);
if (v_isShared_3130_ == 0)
{
lean_ctor_set(v___x_3129_, 0, v___x_3500_);
v___x_3502_ = v___x_3129_;
goto v_reusejp_3501_;
}
else
{
lean_object* v_reuseFailAlloc_3503_; 
v_reuseFailAlloc_3503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3503_, 0, v___x_3500_);
v___x_3502_ = v_reuseFailAlloc_3503_;
goto v_reusejp_3501_;
}
v_reusejp_3501_:
{
return v___x_3502_;
}
}
}
}
else
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3512_; 
lean_dec_ref(v_scope_3043_);
lean_dec(v_goal_3042_);
v_a_3505_ = lean_ctor_get(v___x_3126_, 0);
v_isSharedCheck_3512_ = !lean_is_exclusive(v___x_3126_);
if (v_isSharedCheck_3512_ == 0)
{
v___x_3507_ = v___x_3126_;
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3126_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3512_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3510_; 
if (v_isShared_3508_ == 0)
{
v___x_3510_ = v___x_3507_;
goto v_reusejp_3509_;
}
else
{
lean_object* v_reuseFailAlloc_3511_; 
v_reuseFailAlloc_3511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3511_, 0, v_a_3505_);
v___x_3510_ = v_reuseFailAlloc_3511_;
goto v_reusejp_3509_;
}
v_reusejp_3509_:
{
return v___x_3510_;
}
}
}
v___jp_3056_:
{
lean_object* v___x_3060_; 
v___x_3060_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_burnOne___redArg(v___y_3059_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v___x_3062_; uint8_t v_isShared_3063_; uint8_t v_isSharedCheck_3070_; 
v_isSharedCheck_3070_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3070_ == 0)
{
lean_object* v_unused_3071_; 
v_unused_3071_ = lean_ctor_get(v___x_3060_, 0);
lean_dec(v_unused_3071_);
v___x_3062_ = v___x_3060_;
v_isShared_3063_ = v_isSharedCheck_3070_;
goto v_resetjp_3061_;
}
else
{
lean_dec(v___x_3060_);
v___x_3062_ = lean_box(0);
v_isShared_3063_ = v_isSharedCheck_3070_;
goto v_resetjp_3061_;
}
v_resetjp_3061_:
{
lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3068_; 
v___x_3064_ = lean_box(0);
v___x_3065_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3065_, 0, v_g_3058_);
lean_ctor_set(v___x_3065_, 1, v___x_3064_);
v___x_3066_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3066_, 0, v___y_3057_);
lean_ctor_set(v___x_3066_, 1, v___x_3065_);
if (v_isShared_3063_ == 0)
{
lean_ctor_set(v___x_3062_, 0, v___x_3066_);
v___x_3068_ = v___x_3062_;
goto v_reusejp_3067_;
}
else
{
lean_object* v_reuseFailAlloc_3069_; 
v_reuseFailAlloc_3069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3069_, 0, v___x_3066_);
v___x_3068_ = v_reuseFailAlloc_3069_;
goto v_reusejp_3067_;
}
v_reusejp_3067_:
{
return v___x_3068_;
}
}
}
else
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3079_; 
lean_dec(v_g_3058_);
lean_dec_ref(v___y_3057_);
v_a_3072_ = lean_ctor_get(v___x_3060_, 0);
v_isSharedCheck_3079_ = !lean_is_exclusive(v___x_3060_);
if (v_isSharedCheck_3079_ == 0)
{
v___x_3074_ = v___x_3060_;
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3060_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3079_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v___x_3077_; 
if (v_isShared_3075_ == 0)
{
v___x_3077_ = v___x_3074_;
goto v_reusejp_3076_;
}
else
{
lean_object* v_reuseFailAlloc_3078_; 
v_reuseFailAlloc_3078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3078_, 0, v_a_3072_);
v___x_3077_ = v_reuseFailAlloc_3078_;
goto v_reusejp_3076_;
}
v_reusejp_3076_:
{
return v___x_3077_;
}
}
}
}
v___jp_3080_:
{
lean_object* v___x_3099_; 
v___x_3099_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_burnOne___redArg(v___y_3097_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v___x_3100_; 
lean_dec_ref_known(v___x_3099_, 1);
v___x_3100_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Solve_0__Lean_Elab_Tactic_Do_Internal_VCGen_applySpec(v___y_3086_, v_goal_3042_, v___y_3091_, v___y_3087_, v___y_3090_, v___y_3092_, v___y_3085_, v___y_3088_, v___y_3083_, v___y_3097_, v___y_3093_, v___y_3094_, v___y_3095_, v___y_3084_, v___y_3098_, v___y_3096_, v___y_3082_, v___y_3081_, v___y_3089_);
return v___x_3100_;
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
lean_dec_ref(v___y_3092_);
lean_dec_ref(v___y_3091_);
lean_dec_ref(v___y_3090_);
lean_dec_ref(v___y_3088_);
lean_dec_ref(v___y_3087_);
lean_dec_ref(v___y_3086_);
lean_dec_ref(v___y_3085_);
lean_dec(v_goal_3042_);
v_a_3101_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3099_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3099_);
v___x_3103_ = lean_box(0);
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
v_resetjp_3102_:
{
lean_object* v___x_3106_; 
if (v_isShared_3104_ == 0)
{
v___x_3106_ = v___x_3103_;
goto v_reusejp_3105_;
}
else
{
lean_object* v_reuseFailAlloc_3107_; 
v_reuseFailAlloc_3107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3107_, 0, v_a_3101_);
v___x_3106_ = v_reuseFailAlloc_3107_;
goto v_reusejp_3105_;
}
v_reusejp_3105_:
{
return v___x_3106_;
}
}
}
}
v___jp_3109_:
{
lean_object* v___x_3111_; lean_object* v___x_3112_; 
v___x_3111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3111_, 0, v___y_3110_);
v___x_3112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3112_, 0, v___x_3111_);
return v___x_3112_;
}
v___jp_3113_:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3116_, 0, v_g_3114_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3117_, 0, v_scope_3043_);
lean_ctor_set(v___x_3117_, 1, v___x_3116_);
v___x_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
return v___x_3118_;
}
v___jp_3119_:
{
lean_object* v___x_3121_; lean_object* v___x_3122_; 
v___x_3121_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3121_, 0, v_scope_3043_);
lean_ctor_set(v___x_3121_, 1, v_gs_3120_);
v___x_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3121_);
return v___x_3122_;
}
v___jp_3123_:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; 
v___x_3124_ = lean_box(5);
v___x_3125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3125_, 0, v___x_3124_);
return v___x_3125_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___boxed(lean_object* v_goal_3513_, lean_object* v_scope_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_){
_start:
{
lean_object* v_res_3527_; 
v_res_3527_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1(v_goal_3513_, v_scope_3514_, v___y_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_, v___y_3520_, v___y_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_);
lean_dec(v___y_3525_);
lean_dec_ref(v___y_3524_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec(v___y_3521_);
lean_dec_ref(v___y_3520_);
lean_dec(v___y_3519_);
lean_dec_ref(v___y_3518_);
lean_dec(v___y_3517_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
return v_res_3527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(lean_object* v_scope_3528_, lean_object* v_goal_3529_, lean_object* v_a_3530_, lean_object* v_a_3531_, lean_object* v_a_3532_, lean_object* v_a_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v_a_3536_, lean_object* v_a_3537_, lean_object* v_a_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_){
_start:
{
lean_object* v___f_3542_; lean_object* v___x_3543_; 
lean_inc(v_goal_3529_);
v___f_3542_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___lam__1___boxed), 14, 2);
lean_closure_set(v___f_3542_, 0, v_goal_3529_);
lean_closure_set(v___f_3542_, 1, v_scope_3528_);
v___x_3543_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_solve_spec__1___redArg(v_goal_3529_, v___f_3542_, v_a_3530_, v_a_3531_, v_a_3532_, v_a_3533_, v_a_3534_, v_a_3535_, v_a_3536_, v_a_3537_, v_a_3538_, v_a_3539_, v_a_3540_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve___boxed(lean_object* v_scope_3544_, lean_object* v_goal_3545_, lean_object* v_a_3546_, lean_object* v_a_3547_, lean_object* v_a_3548_, lean_object* v_a_3549_, lean_object* v_a_3550_, lean_object* v_a_3551_, lean_object* v_a_3552_, lean_object* v_a_3553_, lean_object* v_a_3554_, lean_object* v_a_3555_, lean_object* v_a_3556_, lean_object* v_a_3557_){
_start:
{
lean_object* v_res_3558_; 
v_res_3558_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(v_scope_3544_, v_goal_3545_, v_a_3546_, v_a_3547_, v_a_3548_, v_a_3549_, v_a_3550_, v_a_3551_, v_a_3552_, v_a_3553_, v_a_3554_, v_a_3555_, v_a_3556_);
lean_dec(v_a_3556_);
lean_dec_ref(v_a_3555_);
lean_dec(v_a_3554_);
lean_dec_ref(v_a_3553_);
lean_dec(v_a_3552_);
lean_dec_ref(v_a_3551_);
lean_dec(v_a_3550_);
lean_dec_ref(v_a_3549_);
lean_dec(v_a_3548_);
lean_dec(v_a_3547_);
lean_dec_ref(v_a_3546_);
return v_res_3558_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Entails(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Entails(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_InstantiateS(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_RuleCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Entails(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_InstantiateS(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
}
#ifdef __cplusplus
}
#endif
