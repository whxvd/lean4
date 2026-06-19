// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Util
// Imports: public import Lean.Meta.Tactic.Grind.Main public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.Reduce public import Lean.Meta.Sym.AlphaShareBuilder public import Lean.Meta.Sym.Intro public import Lean.Meta.Sym.Simp.Telescope public import Lean.Meta.Sym.Util
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Sym_Simp_simpTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_SimpM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_Sym_intros(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_replaceTargetDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_Sym_isDefEqS(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_processHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "[mvcgen' +debug] BackwardRule "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = " failed to apply to:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "\nbut succeeded after `unfoldReducible`-normalization to:"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 116, .m_capacity = 116, .m_length = 115, .m_data = "\nAn earlier step is missing a normalization. Re-run with `set_option pp.all true` to see the structural difference."};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "<rule constructed from expression>"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simpTelescope___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(100000) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Failed to intro on "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__2;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nContext: "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__4;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__1;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "repeatAndRfl: failed to apply "};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " to"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__15_value),LEAN_SCALAR_PTR_LITERAL(12, 252, 227, 83, 88, 185, 40, 148)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(18, 204, 165, 192, 253, 41, 237, 145)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__10_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(lean_object* v___y_1_, lean_object* v_mctx_2_, lean_object* v_cache_3_, lean_object* v_a_x3f_4_){
_start:
{
lean_object* v___x_6_; lean_object* v_zetaDeltaFVarIds_7_; lean_object* v_postponed_8_; lean_object* v_diag_9_; lean_object* v___x_11_; uint8_t v_isShared_12_; uint8_t v_isSharedCheck_19_; 
v___x_6_ = lean_st_ref_take(v___y_1_);
v_zetaDeltaFVarIds_7_ = lean_ctor_get(v___x_6_, 2);
v_postponed_8_ = lean_ctor_get(v___x_6_, 3);
v_diag_9_ = lean_ctor_get(v___x_6_, 4);
v_isSharedCheck_19_ = !lean_is_exclusive(v___x_6_);
if (v_isSharedCheck_19_ == 0)
{
lean_object* v_unused_20_; lean_object* v_unused_21_; 
v_unused_20_ = lean_ctor_get(v___x_6_, 1);
lean_dec(v_unused_20_);
v_unused_21_ = lean_ctor_get(v___x_6_, 0);
lean_dec(v_unused_21_);
v___x_11_ = v___x_6_;
v_isShared_12_ = v_isSharedCheck_19_;
goto v_resetjp_10_;
}
else
{
lean_inc(v_diag_9_);
lean_inc(v_postponed_8_);
lean_inc(v_zetaDeltaFVarIds_7_);
lean_dec(v___x_6_);
v___x_11_ = lean_box(0);
v_isShared_12_ = v_isSharedCheck_19_;
goto v_resetjp_10_;
}
v_resetjp_10_:
{
lean_object* v___x_14_; 
if (v_isShared_12_ == 0)
{
lean_ctor_set(v___x_11_, 1, v_cache_3_);
lean_ctor_set(v___x_11_, 0, v_mctx_2_);
v___x_14_ = v___x_11_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v_mctx_2_);
lean_ctor_set(v_reuseFailAlloc_18_, 1, v_cache_3_);
lean_ctor_set(v_reuseFailAlloc_18_, 2, v_zetaDeltaFVarIds_7_);
lean_ctor_set(v_reuseFailAlloc_18_, 3, v_postponed_8_);
lean_ctor_set(v_reuseFailAlloc_18_, 4, v_diag_9_);
v___x_14_ = v_reuseFailAlloc_18_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; 
v___x_15_ = lean_st_ref_set(v___y_1_, v___x_14_);
v___x_16_ = lean_box(0);
v___x_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0___boxed(lean_object* v___y_22_, lean_object* v_mctx_23_, lean_object* v_cache_24_, lean_object* v_a_x3f_25_, lean_object* v___y_26_){
_start:
{
lean_object* v_res_27_; 
v_res_27_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(v___y_22_, v_mctx_23_, v_cache_24_, v_a_x3f_25_);
lean_dec(v_a_x3f_25_);
lean_dec(v___y_22_);
return v_res_27_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(lean_object* v_x_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v_mctx_43_; lean_object* v_cache_44_; lean_object* v___x_45_; 
v___x_41_ = lean_st_ref_get(v___y_37_);
v___x_42_ = lean_st_ref_get(v___y_37_);
v_mctx_43_ = lean_ctor_get(v___x_41_, 0);
lean_inc_ref(v_mctx_43_);
lean_dec(v___x_41_);
v_cache_44_ = lean_ctor_get(v___x_42_, 1);
lean_inc_ref(v_cache_44_);
lean_dec(v___x_42_);
lean_inc(v___y_39_);
lean_inc_ref(v___y_38_);
lean_inc(v___y_37_);
lean_inc_ref(v___y_36_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
lean_inc(v___y_31_);
lean_inc(v___y_30_);
lean_inc_ref(v___y_29_);
v___x_45_ = lean_apply_12(v_x_28_, v___y_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, lean_box(0));
if (lean_obj_tag(v___x_45_) == 0)
{
lean_object* v_a_46_; lean_object* v___x_48_; uint8_t v_isShared_49_; uint8_t v_isSharedCheck_62_; 
v_a_46_ = lean_ctor_get(v___x_45_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_45_);
if (v_isSharedCheck_62_ == 0)
{
v___x_48_ = v___x_45_;
v_isShared_49_ = v_isSharedCheck_62_;
goto v_resetjp_47_;
}
else
{
lean_inc(v_a_46_);
lean_dec(v___x_45_);
v___x_48_ = lean_box(0);
v_isShared_49_ = v_isSharedCheck_62_;
goto v_resetjp_47_;
}
v_resetjp_47_:
{
lean_object* v___x_51_; 
lean_inc(v_a_46_);
if (v_isShared_49_ == 0)
{
lean_ctor_set_tag(v___x_48_, 1);
v___x_51_ = v___x_48_;
goto v_reusejp_50_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_46_);
v___x_51_ = v_reuseFailAlloc_61_;
goto v_reusejp_50_;
}
v_reusejp_50_:
{
lean_object* v___x_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_59_; 
v___x_52_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(v___y_37_, v_mctx_43_, v_cache_44_, v___x_51_);
lean_dec_ref(v___x_51_);
v_isSharedCheck_59_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_59_ == 0)
{
lean_object* v_unused_60_; 
v_unused_60_ = lean_ctor_get(v___x_52_, 0);
lean_dec(v_unused_60_);
v___x_54_ = v___x_52_;
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
else
{
lean_dec(v___x_52_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_59_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v___x_57_; 
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 0, v_a_46_);
v___x_57_ = v___x_54_;
goto v_reusejp_56_;
}
else
{
lean_object* v_reuseFailAlloc_58_; 
v_reuseFailAlloc_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_58_, 0, v_a_46_);
v___x_57_ = v_reuseFailAlloc_58_;
goto v_reusejp_56_;
}
v_reusejp_56_:
{
return v___x_57_;
}
}
}
}
}
else
{
lean_object* v_a_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
v_a_63_ = lean_ctor_get(v___x_45_, 0);
lean_inc(v_a_63_);
lean_dec_ref_known(v___x_45_, 1);
v___x_64_ = lean_box(0);
v___x_65_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___lam__0(v___y_37_, v_mctx_43_, v_cache_44_, v___x_64_);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_65_);
if (v_isSharedCheck_72_ == 0)
{
lean_object* v_unused_73_; 
v_unused_73_ = lean_ctor_get(v___x_65_, 0);
lean_dec(v_unused_73_);
v___x_67_ = v___x_65_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_dec(v___x_65_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set_tag(v___x_67_, 1);
lean_ctor_set(v___x_67_, 0, v_a_63_);
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_63_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg___boxed(lean_object* v_x_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_){
_start:
{
lean_object* v_res_87_; 
v_res_87_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(v_x_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_, v___y_84_, v___y_85_);
lean_dec(v___y_85_);
lean_dec_ref(v___y_84_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec(v___y_76_);
lean_dec_ref(v___y_75_);
return v_res_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0(lean_object* v_00_u03b1_88_, lean_object* v_x_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(v_x_89_, v___y_90_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___boxed(lean_object* v_00_u03b1_103_, lean_object* v_x_104_, lean_object* v___y_105_, lean_object* v___y_106_, lean_object* v___y_107_, lean_object* v___y_108_, lean_object* v___y_109_, lean_object* v___y_110_, lean_object* v___y_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v_res_117_; 
v_res_117_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0(v_00_u03b1_103_, v_x_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_, v___y_113_, v___y_114_, v___y_115_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec(v___y_113_);
lean_dec_ref(v___y_112_);
lean_dec(v___y_111_);
lean_dec_ref(v___y_110_);
lean_dec(v___y_109_);
lean_dec_ref(v___y_108_);
lean_dec(v___y_107_);
lean_dec(v___y_106_);
lean_dec_ref(v___y_105_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0(lean_object* v_a_118_, lean_object* v___x_119_, lean_object* v_rule_120_, uint8_t v___x_121_, uint8_t v_debug_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_118_, v___x_119_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
if (lean_obj_tag(v___x_135_) == 0)
{
lean_object* v_a_136_; lean_object* v___x_137_; lean_object* v___x_138_; 
v_a_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_a_136_);
lean_dec_ref_known(v___x_135_, 1);
v___x_137_ = l_Lean_Expr_mvarId_x21(v_a_136_);
lean_dec(v_a_136_);
v___x_138_ = l_Lean_Meta_Sym_BackwardRule_apply(v___x_137_, v_rule_120_, v___y_128_, v___y_129_, v___y_130_, v___y_131_, v___y_132_, v___y_133_);
if (lean_obj_tag(v___x_138_) == 0)
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_151_; 
v_a_139_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_151_ == 0)
{
v___x_141_ = v___x_138_;
v_isShared_142_ = v_isSharedCheck_151_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_138_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_151_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
if (lean_obj_tag(v_a_139_) == 0)
{
lean_object* v___x_143_; lean_object* v___x_145_; 
v___x_143_ = lean_box(v___x_121_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 0, v___x_143_);
v___x_145_ = v___x_141_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v___x_143_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
else
{
lean_object* v___x_147_; lean_object* v___x_149_; 
lean_dec_ref_known(v_a_139_, 1);
v___x_147_ = lean_box(v_debug_122_);
if (v_isShared_142_ == 0)
{
lean_ctor_set(v___x_141_, 0, v___x_147_);
v___x_149_ = v___x_141_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
}
}
else
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
v_a_152_ = lean_ctor_get(v___x_138_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_138_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_138_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_167_; 
lean_dec_ref(v_rule_120_);
v_a_160_ = lean_ctor_get(v___x_135_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v___x_135_);
if (v_isSharedCheck_167_ == 0)
{
v___x_162_ = v___x_135_;
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_135_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_167_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_165_; 
if (v_isShared_163_ == 0)
{
v___x_165_ = v___x_162_;
goto v_reusejp_164_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_a_160_);
v___x_165_ = v_reuseFailAlloc_166_;
goto v_reusejp_164_;
}
v_reusejp_164_:
{
return v___x_165_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0___boxed(lean_object** _args){
lean_object* v_a_168_ = _args[0];
lean_object* v___x_169_ = _args[1];
lean_object* v_rule_170_ = _args[2];
lean_object* v___x_171_ = _args[3];
lean_object* v_debug_172_ = _args[4];
lean_object* v___y_173_ = _args[5];
lean_object* v___y_174_ = _args[6];
lean_object* v___y_175_ = _args[7];
lean_object* v___y_176_ = _args[8];
lean_object* v___y_177_ = _args[9];
lean_object* v___y_178_ = _args[10];
lean_object* v___y_179_ = _args[11];
lean_object* v___y_180_ = _args[12];
lean_object* v___y_181_ = _args[13];
lean_object* v___y_182_ = _args[14];
lean_object* v___y_183_ = _args[15];
lean_object* v___y_184_ = _args[16];
_start:
{
uint8_t v___x_43892__boxed_185_; uint8_t v_debug_boxed_186_; lean_object* v_res_187_; 
v___x_43892__boxed_185_ = lean_unbox(v___x_171_);
v_debug_boxed_186_ = lean_unbox(v_debug_172_);
v_res_187_ = l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0(v_a_168_, v___x_169_, v_rule_170_, v___x_43892__boxed_185_, v_debug_boxed_186_, v___y_173_, v___y_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_);
lean_dec(v___y_183_);
lean_dec_ref(v___y_182_);
lean_dec(v___y_181_);
lean_dec_ref(v___y_180_);
lean_dec(v___y_179_);
lean_dec_ref(v___y_178_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
lean_dec(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1_spec__1(lean_object* v_msgData_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v___x_194_; lean_object* v_env_195_; lean_object* v___x_196_; lean_object* v_mctx_197_; lean_object* v_lctx_198_; lean_object* v_options_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_194_ = lean_st_ref_get(v___y_192_);
v_env_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc_ref(v_env_195_);
lean_dec(v___x_194_);
v___x_196_ = lean_st_ref_get(v___y_190_);
v_mctx_197_ = lean_ctor_get(v___x_196_, 0);
lean_inc_ref(v_mctx_197_);
lean_dec(v___x_196_);
v_lctx_198_ = lean_ctor_get(v___y_189_, 2);
v_options_199_ = lean_ctor_get(v___y_191_, 2);
lean_inc_ref(v_options_199_);
lean_inc_ref(v_lctx_198_);
v___x_200_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_200_, 0, v_env_195_);
lean_ctor_set(v___x_200_, 1, v_mctx_197_);
lean_ctor_set(v___x_200_, 2, v_lctx_198_);
lean_ctor_set(v___x_200_, 3, v_options_199_);
v___x_201_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v_msgData_188_);
v___x_202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1_spec__1___boxed(lean_object* v_msgData_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1_spec__1(v_msgData_203_, v___y_204_, v___y_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(lean_object* v_msg_210_, lean_object* v___y_211_, lean_object* v___y_212_, lean_object* v___y_213_, lean_object* v___y_214_){
_start:
{
lean_object* v_ref_216_; lean_object* v___x_217_; lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_226_; 
v_ref_216_ = lean_ctor_get(v___y_213_, 5);
v___x_217_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1_spec__1(v_msg_210_, v___y_211_, v___y_212_, v___y_213_, v___y_214_);
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_226_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_226_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_226_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
lean_object* v___x_222_; lean_object* v___x_224_; 
lean_inc(v_ref_216_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v_ref_216_);
lean_ctor_set(v___x_222_, 1, v_a_218_);
if (v_isShared_221_ == 0)
{
lean_ctor_set_tag(v___x_220_, 1);
lean_ctor_set(v___x_220_, 0, v___x_222_);
v___x_224_ = v___x_220_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_222_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg___boxed(lean_object* v_msg_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v_msg_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
return v_res_233_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1(void){
_start:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__0));
v___x_236_ = l_Lean_stringToMessageData(v___x_235_);
return v___x_236_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3(void){
_start:
{
lean_object* v___x_238_; lean_object* v___x_239_; 
v___x_238_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__2));
v___x_239_ = l_Lean_stringToMessageData(v___x_238_);
return v___x_239_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5(void){
_start:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__4));
v___x_242_ = l_Lean_stringToMessageData(v___x_241_);
return v___x_242_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7(void){
_start:
{
lean_object* v___x_244_; lean_object* v___x_245_; 
v___x_244_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__6));
v___x_245_ = l_Lean_stringToMessageData(v___x_244_);
return v___x_245_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9(void){
_start:
{
lean_object* v___x_247_; lean_object* v___x_248_; 
v___x_247_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__8));
v___x_248_ = l_Lean_stringToMessageData(v___x_247_);
return v___x_248_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11(void){
_start:
{
lean_object* v___x_250_; lean_object* v___x_251_; 
v___x_250_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__10));
v___x_251_ = l_Lean_stringToMessageData(v___x_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(lean_object* v_rule_252_, lean_object* v_goal_253_, lean_object* v_ruleDesc_x3f_254_, lean_object* v_a_255_, lean_object* v_a_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_, lean_object* v_a_261_, lean_object* v_a_262_, lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_){
_start:
{
lean_object* v___x_267_; 
lean_inc_ref(v_rule_252_);
lean_inc(v_goal_253_);
v___x_267_ = l_Lean_Meta_Sym_BackwardRule_apply(v_goal_253_, v_rule_252_, v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
if (lean_obj_tag(v___x_267_) == 0)
{
lean_object* v_a_268_; 
v_a_268_ = lean_ctor_get(v___x_267_, 0);
lean_inc(v_a_268_);
if (lean_obj_tag(v_a_268_) == 0)
{
uint8_t v_debug_269_; 
v_debug_269_ = lean_ctor_get_uint8(v_a_255_, sizeof(void*)*19 + 3);
if (v_debug_269_ == 0)
{
lean_dec(v_ruleDesc_x3f_254_);
lean_dec(v_goal_253_);
lean_dec_ref(v_rule_252_);
return v___x_267_;
}
else
{
lean_object* v___x_270_; 
lean_dec_ref_known(v___x_267_, 1);
v___x_270_ = l_Lean_MVarId_getType(v_goal_253_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_272_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
lean_inc_n(v_a_271_, 2);
lean_dec_ref_known(v___x_270_, 1);
v___x_272_ = l_Lean_Meta_Sym_unfoldReducible(v_a_271_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
if (lean_obj_tag(v___x_272_) == 0)
{
lean_object* v_a_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_335_; 
v_a_273_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_335_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_335_ == 0)
{
v___x_275_ = v___x_272_;
v_isShared_276_ = v_isSharedCheck_335_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_a_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_335_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
uint8_t v___x_277_; 
v___x_277_ = lean_expr_eqv(v_a_273_, v_a_271_);
if (v___x_277_ == 0)
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___f_281_; lean_object* v___x_282_; 
lean_del_object(v___x_275_);
v___x_278_ = lean_box(0);
v___x_279_ = lean_box(v___x_277_);
v___x_280_ = lean_box(v_debug_269_);
lean_inc_ref(v_rule_252_);
lean_inc(v_a_273_);
v___f_281_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___lam__0___boxed), 17, 5);
lean_closure_set(v___f_281_, 0, v_a_273_);
lean_closure_set(v___f_281_, 1, v___x_278_);
lean_closure_set(v___f_281_, 2, v_rule_252_);
lean_closure_set(v___f_281_, 3, v___x_279_);
lean_closure_set(v___f_281_, 4, v___x_280_);
v___x_282_ = l_Lean_Meta_withoutModifyingMCtx___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__0___redArg(v___f_281_, v_a_255_, v_a_256_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, v_a_261_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
if (lean_obj_tag(v___x_282_) == 0)
{
lean_object* v_a_283_; lean_object* v___x_285_; uint8_t v_isShared_286_; uint8_t v_isSharedCheck_323_; 
v_a_283_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_323_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_323_ == 0)
{
v___x_285_ = v___x_282_;
v_isShared_286_ = v_isSharedCheck_323_;
goto v_resetjp_284_;
}
else
{
lean_inc(v_a_283_);
lean_dec(v___x_282_);
v___x_285_ = lean_box(0);
v_isShared_286_ = v_isSharedCheck_323_;
goto v_resetjp_284_;
}
v_resetjp_284_:
{
lean_object* v___y_288_; uint8_t v___x_310_; 
v___x_310_ = lean_unbox(v_a_283_);
lean_dec(v_a_283_);
if (v___x_310_ == 0)
{
lean_object* v___x_312_; 
lean_dec(v_a_273_);
lean_dec(v_a_271_);
lean_dec(v_ruleDesc_x3f_254_);
lean_dec_ref(v_rule_252_);
if (v_isShared_286_ == 0)
{
lean_ctor_set(v___x_285_, 0, v_a_268_);
v___x_312_ = v___x_285_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_a_268_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
return v___x_312_;
}
}
else
{
lean_del_object(v___x_285_);
if (lean_obj_tag(v_ruleDesc_x3f_254_) == 0)
{
lean_object* v_expr_314_; lean_object* v___x_315_; 
v_expr_314_ = lean_ctor_get(v_rule_252_, 0);
lean_inc_ref(v_expr_314_);
lean_dec_ref(v_rule_252_);
v___x_315_ = l_Lean_Expr_getAppFn(v_expr_314_);
lean_dec_ref(v_expr_314_);
if (lean_obj_tag(v___x_315_) == 4)
{
lean_object* v_declName_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v_declName_316_ = lean_ctor_get(v___x_315_, 0);
lean_inc(v_declName_316_);
lean_dec_ref_known(v___x_315_, 2);
v___x_317_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9, &l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9_once, _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__9);
v___x_318_ = l_Lean_MessageData_ofConstName(v_declName_316_, v___x_277_);
v___x_319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_317_);
lean_ctor_set(v___x_319_, 1, v___x_318_);
v___x_320_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_317_);
v___y_288_ = v___x_320_;
goto v___jp_287_;
}
else
{
lean_object* v___x_321_; 
lean_dec_ref(v___x_315_);
v___x_321_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11, &l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11_once, _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__11);
v___y_288_ = v___x_321_;
goto v___jp_287_;
}
}
else
{
lean_object* v_val_322_; 
lean_dec_ref(v_rule_252_);
v_val_322_ = lean_ctor_get(v_ruleDesc_x3f_254_, 0);
lean_inc(v_val_322_);
lean_dec_ref_known(v_ruleDesc_x3f_254_, 1);
v___y_288_ = v_val_322_;
goto v___jp_287_;
}
}
v___jp_287_:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v_a_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_309_; 
v___x_289_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1, &l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__1);
v___x_290_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___y_288_);
v___x_291_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3, &l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__3);
v___x_292_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_292_, 0, v___x_290_);
lean_ctor_set(v___x_292_, 1, v___x_291_);
v___x_293_ = l_Lean_indentExpr(v_a_271_);
v___x_294_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_294_, 0, v___x_292_);
lean_ctor_set(v___x_294_, 1, v___x_293_);
v___x_295_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5, &l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__5);
v___x_296_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_296_, 0, v___x_294_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = l_Lean_indentExpr(v_a_273_);
v___x_298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_298_, 0, v___x_296_);
lean_ctor_set(v___x_298_, 1, v___x_297_);
v___x_299_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7, &l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7_once, _init_l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___closed__7);
v___x_300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_298_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
v___x_301_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v___x_300_, v_a_262_, v_a_263_, v_a_264_, v_a_265_);
v_a_302_ = lean_ctor_get(v___x_301_, 0);
v_isSharedCheck_309_ = !lean_is_exclusive(v___x_301_);
if (v_isSharedCheck_309_ == 0)
{
v___x_304_ = v___x_301_;
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_a_302_);
lean_dec(v___x_301_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_309_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_307_; 
if (v_isShared_305_ == 0)
{
v___x_307_ = v___x_304_;
goto v_reusejp_306_;
}
else
{
lean_object* v_reuseFailAlloc_308_; 
v_reuseFailAlloc_308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_308_, 0, v_a_302_);
v___x_307_ = v_reuseFailAlloc_308_;
goto v_reusejp_306_;
}
v_reusejp_306_:
{
return v___x_307_;
}
}
}
}
}
else
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
lean_dec(v_a_273_);
lean_dec(v_a_271_);
lean_dec(v_ruleDesc_x3f_254_);
lean_dec_ref(v_rule_252_);
v_a_324_ = lean_ctor_get(v___x_282_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_282_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_282_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_282_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
}
else
{
lean_object* v___x_333_; 
lean_dec(v_a_273_);
lean_dec(v_a_271_);
lean_dec(v_ruleDesc_x3f_254_);
lean_dec_ref(v_rule_252_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v_a_268_);
v___x_333_ = v___x_275_;
goto v_reusejp_332_;
}
else
{
lean_object* v_reuseFailAlloc_334_; 
v_reuseFailAlloc_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_334_, 0, v_a_268_);
v___x_333_ = v_reuseFailAlloc_334_;
goto v_reusejp_332_;
}
v_reusejp_332_:
{
return v___x_333_;
}
}
}
}
else
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_343_; 
lean_dec(v_a_271_);
lean_dec(v_ruleDesc_x3f_254_);
lean_dec_ref(v_rule_252_);
v_a_336_ = lean_ctor_get(v___x_272_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v___x_272_);
if (v_isSharedCheck_343_ == 0)
{
v___x_338_ = v___x_272_;
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_272_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_343_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_341_; 
if (v_isShared_339_ == 0)
{
v___x_341_ = v___x_338_;
goto v_reusejp_340_;
}
else
{
lean_object* v_reuseFailAlloc_342_; 
v_reuseFailAlloc_342_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_342_, 0, v_a_336_);
v___x_341_ = v_reuseFailAlloc_342_;
goto v_reusejp_340_;
}
v_reusejp_340_:
{
return v___x_341_;
}
}
}
}
else
{
lean_object* v_a_344_; lean_object* v___x_346_; uint8_t v_isShared_347_; uint8_t v_isSharedCheck_351_; 
lean_dec(v_ruleDesc_x3f_254_);
lean_dec_ref(v_rule_252_);
v_a_344_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_351_ == 0)
{
v___x_346_ = v___x_270_;
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
else
{
lean_inc(v_a_344_);
lean_dec(v___x_270_);
v___x_346_ = lean_box(0);
v_isShared_347_ = v_isSharedCheck_351_;
goto v_resetjp_345_;
}
v_resetjp_345_:
{
lean_object* v___x_349_; 
if (v_isShared_347_ == 0)
{
v___x_349_ = v___x_346_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v_a_344_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_a_268_, 1);
lean_dec(v_ruleDesc_x3f_254_);
lean_dec(v_goal_253_);
lean_dec_ref(v_rule_252_);
return v___x_267_;
}
}
else
{
lean_dec(v_ruleDesc_x3f_254_);
lean_dec(v_goal_253_);
lean_dec_ref(v_rule_252_);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked___boxed(lean_object* v_rule_352_, lean_object* v_goal_353_, lean_object* v_ruleDesc_x3f_354_, lean_object* v_a_355_, lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_, lean_object* v_a_362_, lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, lean_object* v_a_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(v_rule_352_, v_goal_353_, v_ruleDesc_x3f_354_, v_a_355_, v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_, v_a_361_, v_a_362_, v_a_363_, v_a_364_, v_a_365_);
lean_dec(v_a_365_);
lean_dec_ref(v_a_364_);
lean_dec(v_a_363_);
lean_dec_ref(v_a_362_);
lean_dec(v_a_361_);
lean_dec_ref(v_a_360_);
lean_dec(v_a_359_);
lean_dec_ref(v_a_358_);
lean_dec(v_a_357_);
lean_dec(v_a_356_);
lean_dec_ref(v_a_355_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1(lean_object* v_00_u03b1_368_, lean_object* v_msg_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_382_; 
v___x_382_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v_msg_369_, v___y_377_, v___y_378_, v___y_379_, v___y_380_);
return v___x_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___boxed(lean_object* v_00_u03b1_383_, lean_object* v_msg_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
lean_object* v_res_397_; 
v_res_397_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1(v_00_u03b1_383_, v_msg_384_, v___y_385_, v___y_386_, v___y_387_, v___y_388_, v___y_389_, v___y_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
lean_dec(v___y_391_);
lean_dec_ref(v___y_390_);
lean_dec(v___y_389_);
lean_dec_ref(v___y_388_);
lean_dec(v___y_387_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
return v_res_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(lean_object* v_goal_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
uint8_t v_internalize_410_; 
v_internalize_410_ = lean_ctor_get_uint8(v_a_399_, sizeof(void*)*19 + 4);
if (v_internalize_410_ == 0)
{
lean_object* v___x_411_; 
v___x_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_411_, 0, v_goal_398_);
return v___x_411_;
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_box(0);
v___x_413_ = l_Lean_Meta_Grind_processHypotheses(v_goal_398_, v___x_412_, v_a_400_, v_a_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_, v_a_408_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg___boxed(lean_object* v_goal_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, lean_object* v_a_425_){
_start:
{
lean_object* v_res_426_; 
v_res_426_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(v_goal_414_, v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_, v_a_420_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
lean_dec(v_a_424_);
lean_dec_ref(v_a_423_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
lean_dec(v_a_418_);
lean_dec_ref(v_a_417_);
lean_dec(v_a_416_);
lean_dec_ref(v_a_415_);
return v_res_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses(lean_object* v_goal_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v___x_440_; 
v___x_440_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(v_goal_427_, v_a_428_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___boxed(lean_object* v_goal_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses(v_goal_441_, v_a_442_, v_a_443_, v_a_444_, v_a_445_, v_a_446_, v_a_447_, v_a_448_, v_a_449_, v_a_450_, v_a_451_, v_a_452_);
lean_dec(v_a_452_);
lean_dec_ref(v_a_451_);
lean_dec(v_a_450_);
lean_dec_ref(v_a_449_);
lean_dec(v_a_448_);
lean_dec_ref(v_a_447_);
lean_dec(v_a_446_);
lean_dec_ref(v_a_445_);
lean_dec(v_a_444_);
lean_dec(v_a_443_);
lean_dec_ref(v_a_442_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg(lean_object* v_mvarId_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_, lean_object* v_a_463_, lean_object* v_a_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_){
_start:
{
lean_object* v_hypSimpMethods_469_; 
v_hypSimpMethods_469_ = lean_ctor_get(v_a_460_, 16);
if (lean_obj_tag(v_hypSimpMethods_469_) == 1)
{
lean_object* v_val_470_; lean_object* v___x_471_; 
v_val_470_ = lean_ctor_get(v_hypSimpMethods_469_, 0);
lean_inc(v_mvarId_459_);
v___x_471_ = l_Lean_MVarId_getType(v_mvarId_459_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; lean_object* v_simpState_474_; lean_object* v_post_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = lean_st_ref_get(v_a_461_);
v_simpState_474_ = lean_ctor_get(v___x_473_, 4);
lean_inc_ref(v_simpState_474_);
lean_dec(v___x_473_);
v_post_475_ = lean_ctor_get(v_val_470_, 1);
v___x_476_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__0));
lean_inc_ref(v_post_475_);
v___x_477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
lean_ctor_set(v___x_477_, 1, v_post_475_);
v___x_478_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_Simp_simp___boxed), 11, 1);
lean_closure_set(v___x_478_, 0, v_a_472_);
v___x_479_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___closed__1));
v___x_480_ = l_Lean_Meta_Sym_Simp_SimpM_run___redArg(v___x_478_, v___x_477_, v___x_479_, v_simpState_474_, v_a_462_, v_a_463_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_480_) == 0)
{
lean_object* v_a_481_; lean_object* v___x_483_; uint8_t v_isShared_484_; uint8_t v_isSharedCheck_539_; 
v_a_481_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_539_ == 0)
{
v___x_483_ = v___x_480_;
v_isShared_484_ = v_isSharedCheck_539_;
goto v_resetjp_482_;
}
else
{
lean_inc(v_a_481_);
lean_dec(v___x_480_);
v___x_483_ = lean_box(0);
v_isShared_484_ = v_isSharedCheck_539_;
goto v_resetjp_482_;
}
v_resetjp_482_:
{
lean_object* v_fst_485_; lean_object* v_snd_486_; lean_object* v___x_488_; uint8_t v_isShared_489_; uint8_t v_isSharedCheck_538_; 
v_fst_485_ = lean_ctor_get(v_a_481_, 0);
v_snd_486_ = lean_ctor_get(v_a_481_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_a_481_);
if (v_isSharedCheck_538_ == 0)
{
v___x_488_ = v_a_481_;
v_isShared_489_ = v_isSharedCheck_538_;
goto v_resetjp_487_;
}
else
{
lean_inc(v_snd_486_);
lean_inc(v_fst_485_);
lean_dec(v_a_481_);
v___x_488_ = lean_box(0);
v_isShared_489_ = v_isSharedCheck_538_;
goto v_resetjp_487_;
}
v_resetjp_487_:
{
lean_object* v___x_490_; lean_object* v_specBackwardRuleCache_491_; lean_object* v_splitBackwardRuleCache_492_; lean_object* v_invariants_493_; lean_object* v_vcs_494_; lean_object* v_fuel_495_; lean_object* v_inlineHandledInvariants_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_536_; 
v___x_490_ = lean_st_ref_take(v_a_461_);
v_specBackwardRuleCache_491_ = lean_ctor_get(v___x_490_, 0);
v_splitBackwardRuleCache_492_ = lean_ctor_get(v___x_490_, 1);
v_invariants_493_ = lean_ctor_get(v___x_490_, 2);
v_vcs_494_ = lean_ctor_get(v___x_490_, 3);
v_fuel_495_ = lean_ctor_get(v___x_490_, 5);
v_inlineHandledInvariants_496_ = lean_ctor_get(v___x_490_, 6);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_536_ == 0)
{
lean_object* v_unused_537_; 
v_unused_537_ = lean_ctor_get(v___x_490_, 4);
lean_dec(v_unused_537_);
v___x_498_ = v___x_490_;
v_isShared_499_ = v_isSharedCheck_536_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_inlineHandledInvariants_496_);
lean_inc(v_fuel_495_);
lean_inc(v_vcs_494_);
lean_inc(v_invariants_493_);
lean_inc(v_splitBackwardRuleCache_492_);
lean_inc(v_specBackwardRuleCache_491_);
lean_dec(v___x_490_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_536_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v___x_501_; 
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 4, v_snd_486_);
v___x_501_ = v___x_498_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v_specBackwardRuleCache_491_);
lean_ctor_set(v_reuseFailAlloc_535_, 1, v_splitBackwardRuleCache_492_);
lean_ctor_set(v_reuseFailAlloc_535_, 2, v_invariants_493_);
lean_ctor_set(v_reuseFailAlloc_535_, 3, v_vcs_494_);
lean_ctor_set(v_reuseFailAlloc_535_, 4, v_snd_486_);
lean_ctor_set(v_reuseFailAlloc_535_, 5, v_fuel_495_);
lean_ctor_set(v_reuseFailAlloc_535_, 6, v_inlineHandledInvariants_496_);
v___x_501_ = v_reuseFailAlloc_535_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
lean_object* v___x_502_; 
v___x_502_ = lean_st_ref_set(v_a_461_, v___x_501_);
if (lean_obj_tag(v_fst_485_) == 0)
{
uint8_t v___x_503_; lean_object* v___x_504_; lean_object* v___x_506_; 
lean_dec_ref_known(v_fst_485_, 0);
v___x_503_ = 0;
v___x_504_ = lean_box(v___x_503_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 1, v___x_504_);
lean_ctor_set(v___x_488_, 0, v_mvarId_459_);
v___x_506_ = v___x_488_;
goto v_reusejp_505_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v_mvarId_459_);
lean_ctor_set(v_reuseFailAlloc_510_, 1, v___x_504_);
v___x_506_ = v_reuseFailAlloc_510_;
goto v_reusejp_505_;
}
v_reusejp_505_:
{
lean_object* v___x_508_; 
if (v_isShared_484_ == 0)
{
lean_ctor_set(v___x_483_, 0, v___x_506_);
v___x_508_ = v___x_483_;
goto v_reusejp_507_;
}
else
{
lean_object* v_reuseFailAlloc_509_; 
v_reuseFailAlloc_509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_509_, 0, v___x_506_);
v___x_508_ = v_reuseFailAlloc_509_;
goto v_reusejp_507_;
}
v_reusejp_507_:
{
return v___x_508_;
}
}
}
else
{
lean_object* v_e_x27_511_; lean_object* v_proof_512_; lean_object* v___x_513_; 
lean_del_object(v___x_483_);
v_e_x27_511_ = lean_ctor_get(v_fst_485_, 0);
lean_inc_ref(v_e_x27_511_);
v_proof_512_ = lean_ctor_get(v_fst_485_, 1);
lean_inc_ref(v_proof_512_);
lean_dec_ref_known(v_fst_485_, 2);
v___x_513_ = l_Lean_MVarId_replaceTargetEq(v_mvarId_459_, v_e_x27_511_, v_proof_512_, v_a_464_, v_a_465_, v_a_466_, v_a_467_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_526_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_526_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_526_ == 0)
{
v___x_516_ = v___x_513_;
v_isShared_517_ = v_isSharedCheck_526_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_a_514_);
lean_dec(v___x_513_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_526_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_521_; 
v___x_518_ = 1;
v___x_519_ = lean_box(v___x_518_);
if (v_isShared_489_ == 0)
{
lean_ctor_set(v___x_488_, 1, v___x_519_);
lean_ctor_set(v___x_488_, 0, v_a_514_);
v___x_521_ = v___x_488_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v_a_514_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v___x_519_);
v___x_521_ = v_reuseFailAlloc_525_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
lean_object* v___x_523_; 
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 0, v___x_521_);
v___x_523_ = v___x_516_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
}
}
else
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_534_; 
lean_del_object(v___x_488_);
v_a_527_ = lean_ctor_get(v___x_513_, 0);
v_isSharedCheck_534_ = !lean_is_exclusive(v___x_513_);
if (v_isSharedCheck_534_ == 0)
{
v___x_529_ = v___x_513_;
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_513_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_534_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v___x_532_; 
if (v_isShared_530_ == 0)
{
v___x_532_ = v___x_529_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v_a_527_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
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
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_547_; 
lean_dec(v_mvarId_459_);
v_a_540_ = lean_ctor_get(v___x_480_, 0);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_480_);
if (v_isSharedCheck_547_ == 0)
{
v___x_542_ = v___x_480_;
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_480_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_547_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
lean_object* v___x_545_; 
if (v_isShared_543_ == 0)
{
v___x_545_ = v___x_542_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v_a_540_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
else
{
lean_object* v_a_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_555_; 
lean_dec(v_mvarId_459_);
v_a_548_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_555_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_555_ == 0)
{
v___x_550_ = v___x_471_;
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_a_548_);
lean_dec(v___x_471_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_555_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v___x_553_; 
if (v_isShared_551_ == 0)
{
v___x_553_ = v___x_550_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_554_; 
v_reuseFailAlloc_554_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_554_, 0, v_a_548_);
v___x_553_ = v_reuseFailAlloc_554_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
return v___x_553_;
}
}
}
}
else
{
uint8_t v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; 
v___x_556_ = 0;
v___x_557_ = lean_box(v___x_556_);
v___x_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_558_, 0, v_mvarId_459_);
lean_ctor_set(v___x_558_, 1, v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
return v___x_559_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg___boxed(lean_object* v_mvarId_560_, lean_object* v_a_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_, lean_object* v_a_569_){
_start:
{
lean_object* v_res_570_; 
v_res_570_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg(v_mvarId_560_, v_a_561_, v_a_562_, v_a_563_, v_a_564_, v_a_565_, v_a_566_, v_a_567_, v_a_568_);
lean_dec(v_a_568_);
lean_dec_ref(v_a_567_);
lean_dec(v_a_566_);
lean_dec_ref(v_a_565_);
lean_dec(v_a_564_);
lean_dec_ref(v_a_563_);
lean_dec(v_a_562_);
lean_dec_ref(v_a_561_);
return v_res_570_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope(lean_object* v_mvarId_571_, lean_object* v_a_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, lean_object* v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_){
_start:
{
lean_object* v___x_584_; 
v___x_584_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg(v_mvarId_571_, v_a_572_, v_a_573_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_, v_a_582_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___boxed(lean_object* v_mvarId_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope(v_mvarId_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_, v_a_595_, v_a_596_);
lean_dec(v_a_596_);
lean_dec_ref(v_a_595_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_589_);
lean_dec(v_a_588_);
lean_dec(v_a_587_);
lean_dec_ref(v_a_586_);
return v_res_598_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__2(void){
_start:
{
lean_object* v___x_602_; lean_object* v___x_603_; 
v___x_602_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__1));
v___x_603_ = l_Lean_stringToMessageData(v___x_602_);
return v___x_603_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__4(void){
_start:
{
lean_object* v___x_605_; lean_object* v___x_606_; 
v___x_605_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__3));
v___x_606_ = l_Lean_stringToMessageData(v___x_605_);
return v___x_606_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__6(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_608_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__5));
v___x_609_ = l_Lean_stringToMessageData(v___x_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(lean_object* v_mvarId_610_, lean_object* v_errorMsg_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_simpTargetTelescope___redArg(v_mvarId_610_, v_a_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v_fst_623_; lean_object* v_snd_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_662_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_621_, 1);
v_fst_623_ = lean_ctor_get(v_a_622_, 0);
v_snd_624_ = lean_ctor_get(v_a_622_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_a_622_);
if (v_isSharedCheck_662_ == 0)
{
v___x_626_ = v_a_622_;
v_isShared_627_ = v_isSharedCheck_662_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_snd_624_);
lean_inc(v_fst_623_);
lean_dec(v_a_622_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_662_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
lean_object* v___x_628_; lean_object* v___x_629_; 
v___x_628_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__0));
lean_inc(v_fst_623_);
v___x_629_ = l_Lean_Meta_Sym_intros(v_fst_623_, v___x_628_, v_a_614_, v_a_615_, v_a_616_, v_a_617_, v_a_618_, v_a_619_);
if (lean_obj_tag(v___x_629_) == 0)
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_653_; 
v_a_630_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_653_ == 0)
{
v___x_632_ = v___x_629_;
v_isShared_633_ = v_isSharedCheck_653_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_629_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_653_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
if (lean_obj_tag(v_a_630_) == 0)
{
uint8_t v___x_634_; 
v___x_634_ = lean_unbox(v_snd_624_);
lean_dec(v_snd_624_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
lean_del_object(v___x_632_);
v___x_635_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__2);
v___x_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_636_, 0, v_fst_623_);
if (v_isShared_627_ == 0)
{
lean_ctor_set_tag(v___x_626_, 7);
lean_ctor_set(v___x_626_, 1, v___x_636_);
lean_ctor_set(v___x_626_, 0, v___x_635_);
v___x_638_ = v___x_626_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_635_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v___x_636_);
v___x_638_ = v_reuseFailAlloc_645_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
v___x_639_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__4, &l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__4_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__4);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_638_);
lean_ctor_set(v___x_640_, 1, v___x_639_);
v___x_641_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
lean_ctor_set(v___x_641_, 1, v_errorMsg_611_);
v___x_642_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__6, &l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__6);
v___x_643_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_643_, 0, v___x_641_);
lean_ctor_set(v___x_643_, 1, v___x_642_);
v___x_644_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v___x_643_, v_a_616_, v_a_617_, v_a_618_, v_a_619_);
return v___x_644_;
}
}
else
{
lean_object* v___x_647_; 
lean_del_object(v___x_626_);
lean_dec_ref(v_errorMsg_611_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v_fst_623_);
v___x_647_ = v___x_632_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_648_; 
v_reuseFailAlloc_648_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_648_, 0, v_fst_623_);
v___x_647_ = v_reuseFailAlloc_648_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
return v___x_647_;
}
}
}
else
{
lean_object* v_mvarId_649_; lean_object* v___x_651_; 
lean_del_object(v___x_626_);
lean_dec(v_snd_624_);
lean_dec(v_fst_623_);
lean_dec_ref(v_errorMsg_611_);
v_mvarId_649_ = lean_ctor_get(v_a_630_, 1);
lean_inc(v_mvarId_649_);
lean_dec_ref_known(v_a_630_, 2);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v_mvarId_649_);
v___x_651_ = v___x_632_;
goto v_reusejp_650_;
}
else
{
lean_object* v_reuseFailAlloc_652_; 
v_reuseFailAlloc_652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_652_, 0, v_mvarId_649_);
v___x_651_ = v_reuseFailAlloc_652_;
goto v_reusejp_650_;
}
v_reusejp_650_:
{
return v___x_651_;
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_del_object(v___x_626_);
lean_dec(v_snd_624_);
lean_dec(v_fst_623_);
lean_dec_ref(v_errorMsg_611_);
v_a_654_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_629_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_629_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
else
{
lean_object* v_a_663_; lean_object* v___x_665_; uint8_t v_isShared_666_; uint8_t v_isSharedCheck_670_; 
lean_dec_ref(v_errorMsg_611_);
v_a_663_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_670_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_670_ == 0)
{
v___x_665_ = v___x_621_;
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
else
{
lean_inc(v_a_663_);
lean_dec(v___x_621_);
v___x_665_ = lean_box(0);
v_isShared_666_ = v_isSharedCheck_670_;
goto v_resetjp_664_;
}
v_resetjp_664_:
{
lean_object* v___x_668_; 
if (v_isShared_666_ == 0)
{
v___x_668_ = v___x_665_;
goto v_reusejp_667_;
}
else
{
lean_object* v_reuseFailAlloc_669_; 
v_reuseFailAlloc_669_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_669_, 0, v_a_663_);
v___x_668_ = v_reuseFailAlloc_669_;
goto v_reusejp_667_;
}
v_reusejp_667_:
{
return v___x_668_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___boxed(lean_object* v_mvarId_671_, lean_object* v_errorMsg_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_, lean_object* v_a_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_){
_start:
{
lean_object* v_res_682_; 
v_res_682_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(v_mvarId_671_, v_errorMsg_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_, v_a_677_, v_a_678_, v_a_679_, v_a_680_);
lean_dec(v_a_680_);
lean_dec_ref(v_a_679_);
lean_dec(v_a_678_);
lean_dec_ref(v_a_677_);
lean_dec(v_a_676_);
lean_dec_ref(v_a_675_);
lean_dec(v_a_674_);
lean_dec_ref(v_a_673_);
return v_res_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp(lean_object* v_mvarId_683_, lean_object* v_errorMsg_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_, lean_object* v_a_689_, lean_object* v_a_690_, lean_object* v_a_691_, lean_object* v_a_692_, lean_object* v_a_693_, lean_object* v_a_694_, lean_object* v_a_695_){
_start:
{
lean_object* v___x_697_; 
v___x_697_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg(v_mvarId_683_, v_errorMsg_684_, v_a_685_, v_a_686_, v_a_690_, v_a_691_, v_a_692_, v_a_693_, v_a_694_, v_a_695_);
return v___x_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___boxed(lean_object* v_mvarId_698_, lean_object* v_errorMsg_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_, lean_object* v_a_710_, lean_object* v_a_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp(v_mvarId_698_, v_errorMsg_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_, v_a_709_, v_a_710_);
lean_dec(v_a_710_);
lean_dec_ref(v_a_709_);
lean_dec(v_a_708_);
lean_dec_ref(v_a_707_);
lean_dec(v_a_706_);
lean_dec_ref(v_a_705_);
lean_dec(v_a_704_);
lean_dec_ref(v_a_703_);
lean_dec(v_a_702_);
lean_dec(v_a_701_);
lean_dec_ref(v_a_700_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(lean_object* v_e_713_, lean_object* v___y_714_){
_start:
{
uint8_t v___x_716_; 
v___x_716_ = l_Lean_Expr_hasMVar(v_e_713_);
if (v___x_716_ == 0)
{
lean_object* v___x_717_; 
v___x_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_717_, 0, v_e_713_);
return v___x_717_;
}
else
{
lean_object* v___x_718_; lean_object* v_mctx_719_; lean_object* v___x_720_; lean_object* v_fst_721_; lean_object* v_snd_722_; lean_object* v___x_723_; lean_object* v_cache_724_; lean_object* v_zetaDeltaFVarIds_725_; lean_object* v_postponed_726_; lean_object* v_diag_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_736_; 
v___x_718_ = lean_st_ref_get(v___y_714_);
v_mctx_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc_ref(v_mctx_719_);
lean_dec(v___x_718_);
v___x_720_ = l_Lean_instantiateMVarsCore(v_mctx_719_, v_e_713_);
v_fst_721_ = lean_ctor_get(v___x_720_, 0);
lean_inc(v_fst_721_);
v_snd_722_ = lean_ctor_get(v___x_720_, 1);
lean_inc(v_snd_722_);
lean_dec_ref(v___x_720_);
v___x_723_ = lean_st_ref_take(v___y_714_);
v_cache_724_ = lean_ctor_get(v___x_723_, 1);
v_zetaDeltaFVarIds_725_ = lean_ctor_get(v___x_723_, 2);
v_postponed_726_ = lean_ctor_get(v___x_723_, 3);
v_diag_727_ = lean_ctor_get(v___x_723_, 4);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_723_);
if (v_isSharedCheck_736_ == 0)
{
lean_object* v_unused_737_; 
v_unused_737_ = lean_ctor_get(v___x_723_, 0);
lean_dec(v_unused_737_);
v___x_729_ = v___x_723_;
v_isShared_730_ = v_isSharedCheck_736_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_diag_727_);
lean_inc(v_postponed_726_);
lean_inc(v_zetaDeltaFVarIds_725_);
lean_inc(v_cache_724_);
lean_dec(v___x_723_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_736_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 0, v_snd_722_);
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_snd_722_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_cache_724_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_zetaDeltaFVarIds_725_);
lean_ctor_set(v_reuseFailAlloc_735_, 3, v_postponed_726_);
lean_ctor_set(v_reuseFailAlloc_735_, 4, v_diag_727_);
v___x_732_ = v_reuseFailAlloc_735_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
lean_object* v___x_733_; lean_object* v___x_734_; 
v___x_733_ = lean_st_ref_set(v___y_714_, v___x_732_);
v___x_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_734_, 0, v_fst_721_);
return v___x_734_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg___boxed(lean_object* v_e_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(v_e_738_, v___y_739_);
lean_dec(v___y_739_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0(lean_object* v_e_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v___x_755_; 
v___x_755_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(v_e_742_, v___y_751_);
return v___x_755_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___boxed(lean_object* v_e_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0(v_e_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_759_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___lam__0(lean_object* v_x_770_, lean_object* v___y_771_, lean_object* v___y_772_, lean_object* v___y_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_){
_start:
{
lean_object* v___x_783_; 
lean_inc(v___y_777_);
lean_inc_ref(v___y_776_);
lean_inc(v___y_775_);
lean_inc_ref(v___y_774_);
lean_inc(v___y_773_);
lean_inc(v___y_772_);
lean_inc_ref(v___y_771_);
v___x_783_ = lean_apply_12(v_x_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, lean_box(0));
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___lam__0___boxed(lean_object* v_x_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
lean_object* v_res_797_; 
v_res_797_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___lam__0(v_x_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_791_);
lean_dec_ref(v___y_790_);
lean_dec(v___y_789_);
lean_dec_ref(v___y_788_);
lean_dec(v___y_787_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
return v_res_797_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg(lean_object* v_mvarId_798_, lean_object* v_x_799_, lean_object* v___y_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v___f_812_; lean_object* v___x_813_; 
lean_inc(v___y_806_);
lean_inc_ref(v___y_805_);
lean_inc(v___y_804_);
lean_inc_ref(v___y_803_);
lean_inc(v___y_802_);
lean_inc(v___y_801_);
lean_inc_ref(v___y_800_);
v___f_812_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_812_, 0, v_x_799_);
lean_closure_set(v___f_812_, 1, v___y_800_);
lean_closure_set(v___f_812_, 2, v___y_801_);
lean_closure_set(v___f_812_, 3, v___y_802_);
lean_closure_set(v___f_812_, 4, v___y_803_);
lean_closure_set(v___f_812_, 5, v___y_804_);
lean_closure_set(v___f_812_, 6, v___y_805_);
lean_closure_set(v___f_812_, 7, v___y_806_);
v___x_813_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_798_, v___f_812_, v___y_807_, v___y_808_, v___y_809_, v___y_810_);
if (lean_obj_tag(v___x_813_) == 0)
{
return v___x_813_;
}
else
{
lean_object* v_a_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_821_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
v_isSharedCheck_821_ = !lean_is_exclusive(v___x_813_);
if (v_isSharedCheck_821_ == 0)
{
v___x_816_ = v___x_813_;
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_a_814_);
lean_dec(v___x_813_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_821_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_819_; 
if (v_isShared_817_ == 0)
{
v___x_819_ = v___x_816_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_820_; 
v_reuseFailAlloc_820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_820_, 0, v_a_814_);
v___x_819_ = v_reuseFailAlloc_820_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
return v___x_819_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg___boxed(lean_object* v_mvarId_822_, lean_object* v_x_823_, lean_object* v___y_824_, lean_object* v___y_825_, lean_object* v___y_826_, lean_object* v___y_827_, lean_object* v___y_828_, lean_object* v___y_829_, lean_object* v___y_830_, lean_object* v___y_831_, lean_object* v___y_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_){
_start:
{
lean_object* v_res_836_; 
v_res_836_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg(v_mvarId_822_, v_x_823_, v___y_824_, v___y_825_, v___y_826_, v___y_827_, v___y_828_, v___y_829_, v___y_830_, v___y_831_, v___y_832_, v___y_833_, v___y_834_);
lean_dec(v___y_834_);
lean_dec_ref(v___y_833_);
lean_dec(v___y_832_);
lean_dec_ref(v___y_831_);
lean_dec(v___y_830_);
lean_dec_ref(v___y_829_);
lean_dec(v___y_828_);
lean_dec_ref(v___y_827_);
lean_dec(v___y_826_);
lean_dec(v___y_825_);
lean_dec_ref(v___y_824_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2(lean_object* v_00_u03b1_837_, lean_object* v_mvarId_838_, lean_object* v_x_839_, lean_object* v___y_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
lean_object* v___x_852_; 
v___x_852_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg(v_mvarId_838_, v_x_839_, v___y_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_, v___y_848_, v___y_849_, v___y_850_);
return v___x_852_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___boxed(lean_object* v_00_u03b1_853_, lean_object* v_mvarId_854_, lean_object* v_x_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2(v_00_u03b1_853_, v_mvarId_854_, v_x_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec_ref(v___y_865_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_869_, lean_object* v_x_870_, lean_object* v_x_871_, lean_object* v_x_872_){
_start:
{
lean_object* v_ks_873_; lean_object* v_vs_874_; lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_898_; 
v_ks_873_ = lean_ctor_get(v_x_869_, 0);
v_vs_874_ = lean_ctor_get(v_x_869_, 1);
v_isSharedCheck_898_ = !lean_is_exclusive(v_x_869_);
if (v_isSharedCheck_898_ == 0)
{
v___x_876_ = v_x_869_;
v_isShared_877_ = v_isSharedCheck_898_;
goto v_resetjp_875_;
}
else
{
lean_inc(v_vs_874_);
lean_inc(v_ks_873_);
lean_dec(v_x_869_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_898_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
lean_object* v___x_878_; uint8_t v___x_879_; 
v___x_878_ = lean_array_get_size(v_ks_873_);
v___x_879_ = lean_nat_dec_lt(v_x_870_, v___x_878_);
if (v___x_879_ == 0)
{
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_883_; 
lean_dec(v_x_870_);
v___x_880_ = lean_array_push(v_ks_873_, v_x_871_);
v___x_881_ = lean_array_push(v_vs_874_, v_x_872_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 1, v___x_881_);
lean_ctor_set(v___x_876_, 0, v___x_880_);
v___x_883_ = v___x_876_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_880_);
lean_ctor_set(v_reuseFailAlloc_884_, 1, v___x_881_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
else
{
lean_object* v_k_x27_885_; uint8_t v___x_886_; 
v_k_x27_885_ = lean_array_fget_borrowed(v_ks_873_, v_x_870_);
v___x_886_ = l_Lean_instBEqMVarId_beq(v_x_871_, v_k_x27_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_888_; 
if (v_isShared_877_ == 0)
{
v___x_888_ = v___x_876_;
goto v_reusejp_887_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_ks_873_);
lean_ctor_set(v_reuseFailAlloc_892_, 1, v_vs_874_);
v___x_888_ = v_reuseFailAlloc_892_;
goto v_reusejp_887_;
}
v_reusejp_887_:
{
lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_889_ = lean_unsigned_to_nat(1u);
v___x_890_ = lean_nat_add(v_x_870_, v___x_889_);
lean_dec(v_x_870_);
v_x_869_ = v___x_888_;
v_x_870_ = v___x_890_;
goto _start;
}
}
else
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_896_; 
v___x_893_ = lean_array_fset(v_ks_873_, v_x_870_, v_x_871_);
v___x_894_ = lean_array_fset(v_vs_874_, v_x_870_, v_x_872_);
lean_dec(v_x_870_);
if (v_isShared_877_ == 0)
{
lean_ctor_set(v___x_876_, 1, v___x_894_);
lean_ctor_set(v___x_876_, 0, v___x_893_);
v___x_896_ = v___x_876_;
goto v_reusejp_895_;
}
else
{
lean_object* v_reuseFailAlloc_897_; 
v_reuseFailAlloc_897_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_897_, 0, v___x_893_);
lean_ctor_set(v_reuseFailAlloc_897_, 1, v___x_894_);
v___x_896_ = v_reuseFailAlloc_897_;
goto v_reusejp_895_;
}
v_reusejp_895_:
{
return v___x_896_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_899_, lean_object* v_k_900_, lean_object* v_v_901_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_899_, v___x_902_, v_k_900_, v_v_901_);
return v___x_903_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
size_t v___x_904_; size_t v___x_905_; size_t v___x_906_; 
v___x_904_ = ((size_t)5ULL);
v___x_905_ = ((size_t)1ULL);
v___x_906_ = lean_usize_shift_left(v___x_905_, v___x_904_);
return v___x_906_;
}
}
static size_t _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__1(void){
_start:
{
size_t v___x_907_; size_t v___x_908_; size_t v___x_909_; 
v___x_907_ = ((size_t)1ULL);
v___x_908_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_909_ = lean_usize_sub(v___x_908_, v___x_907_);
return v___x_909_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_910_; 
v___x_910_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(lean_object* v_x_911_, size_t v_x_912_, size_t v_x_913_, lean_object* v_x_914_, lean_object* v_x_915_){
_start:
{
if (lean_obj_tag(v_x_911_) == 0)
{
lean_object* v_es_916_; size_t v___x_917_; size_t v___x_918_; size_t v___x_919_; size_t v___x_920_; lean_object* v_j_921_; lean_object* v___x_922_; uint8_t v___x_923_; 
v_es_916_ = lean_ctor_get(v_x_911_, 0);
v___x_917_ = ((size_t)5ULL);
v___x_918_ = ((size_t)1ULL);
v___x_919_ = lean_usize_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__1, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__1);
v___x_920_ = lean_usize_land(v_x_912_, v___x_919_);
v_j_921_ = lean_usize_to_nat(v___x_920_);
v___x_922_ = lean_array_get_size(v_es_916_);
v___x_923_ = lean_nat_dec_lt(v_j_921_, v___x_922_);
if (v___x_923_ == 0)
{
lean_dec(v_j_921_);
lean_dec(v_x_915_);
lean_dec(v_x_914_);
return v_x_911_;
}
else
{
lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_960_; 
lean_inc_ref(v_es_916_);
v_isSharedCheck_960_ = !lean_is_exclusive(v_x_911_);
if (v_isSharedCheck_960_ == 0)
{
lean_object* v_unused_961_; 
v_unused_961_ = lean_ctor_get(v_x_911_, 0);
lean_dec(v_unused_961_);
v___x_925_ = v_x_911_;
v_isShared_926_ = v_isSharedCheck_960_;
goto v_resetjp_924_;
}
else
{
lean_dec(v_x_911_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_960_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v_v_927_; lean_object* v___x_928_; lean_object* v_xs_x27_929_; lean_object* v___y_931_; 
v_v_927_ = lean_array_fget(v_es_916_, v_j_921_);
v___x_928_ = lean_box(0);
v_xs_x27_929_ = lean_array_fset(v_es_916_, v_j_921_, v___x_928_);
switch(lean_obj_tag(v_v_927_))
{
case 0:
{
lean_object* v_key_936_; lean_object* v_val_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_947_; 
v_key_936_ = lean_ctor_get(v_v_927_, 0);
v_val_937_ = lean_ctor_get(v_v_927_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v_v_927_);
if (v_isSharedCheck_947_ == 0)
{
v___x_939_ = v_v_927_;
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_val_937_);
lean_inc(v_key_936_);
lean_dec(v_v_927_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_947_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
uint8_t v___x_941_; 
v___x_941_ = l_Lean_instBEqMVarId_beq(v_x_914_, v_key_936_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_del_object(v___x_939_);
v___x_942_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_936_, v_val_937_, v_x_914_, v_x_915_);
v___x_943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_943_, 0, v___x_942_);
v___y_931_ = v___x_943_;
goto v___jp_930_;
}
else
{
lean_object* v___x_945_; 
lean_dec(v_val_937_);
lean_dec(v_key_936_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v_x_915_);
lean_ctor_set(v___x_939_, 0, v_x_914_);
v___x_945_ = v___x_939_;
goto v_reusejp_944_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_x_914_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_x_915_);
v___x_945_ = v_reuseFailAlloc_946_;
goto v_reusejp_944_;
}
v_reusejp_944_:
{
v___y_931_ = v___x_945_;
goto v___jp_930_;
}
}
}
}
case 1:
{
lean_object* v_node_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_958_; 
v_node_948_ = lean_ctor_get(v_v_927_, 0);
v_isSharedCheck_958_ = !lean_is_exclusive(v_v_927_);
if (v_isSharedCheck_958_ == 0)
{
v___x_950_ = v_v_927_;
v_isShared_951_ = v_isSharedCheck_958_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_node_948_);
lean_dec(v_v_927_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_958_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
size_t v___x_952_; size_t v___x_953_; lean_object* v___x_954_; lean_object* v___x_956_; 
v___x_952_ = lean_usize_shift_right(v_x_912_, v___x_917_);
v___x_953_ = lean_usize_add(v_x_913_, v___x_918_);
v___x_954_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(v_node_948_, v___x_952_, v___x_953_, v_x_914_, v_x_915_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 0, v___x_954_);
v___x_956_ = v___x_950_;
goto v_reusejp_955_;
}
else
{
lean_object* v_reuseFailAlloc_957_; 
v_reuseFailAlloc_957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_957_, 0, v___x_954_);
v___x_956_ = v_reuseFailAlloc_957_;
goto v_reusejp_955_;
}
v_reusejp_955_:
{
v___y_931_ = v___x_956_;
goto v___jp_930_;
}
}
}
default: 
{
lean_object* v___x_959_; 
v___x_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_959_, 0, v_x_914_);
lean_ctor_set(v___x_959_, 1, v_x_915_);
v___y_931_ = v___x_959_;
goto v___jp_930_;
}
}
v___jp_930_:
{
lean_object* v___x_932_; lean_object* v___x_934_; 
v___x_932_ = lean_array_fset(v_xs_x27_929_, v_j_921_, v___y_931_);
lean_dec(v_j_921_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v___x_932_);
v___x_934_ = v___x_925_;
goto v_reusejp_933_;
}
else
{
lean_object* v_reuseFailAlloc_935_; 
v_reuseFailAlloc_935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_935_, 0, v___x_932_);
v___x_934_ = v_reuseFailAlloc_935_;
goto v_reusejp_933_;
}
v_reusejp_933_:
{
return v___x_934_;
}
}
}
}
}
else
{
lean_object* v_ks_962_; lean_object* v_vs_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_983_; 
v_ks_962_ = lean_ctor_get(v_x_911_, 0);
v_vs_963_ = lean_ctor_get(v_x_911_, 1);
v_isSharedCheck_983_ = !lean_is_exclusive(v_x_911_);
if (v_isSharedCheck_983_ == 0)
{
v___x_965_ = v_x_911_;
v_isShared_966_ = v_isSharedCheck_983_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_vs_963_);
lean_inc(v_ks_962_);
lean_dec(v_x_911_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_983_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_968_; 
if (v_isShared_966_ == 0)
{
v___x_968_ = v___x_965_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_ks_962_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_vs_963_);
v___x_968_ = v_reuseFailAlloc_982_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v_newNode_969_; uint8_t v___y_971_; size_t v___x_977_; uint8_t v___x_978_; 
v_newNode_969_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4___redArg(v___x_968_, v_x_914_, v_x_915_);
v___x_977_ = ((size_t)7ULL);
v___x_978_ = lean_usize_dec_le(v___x_977_, v_x_913_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v___x_979_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_969_);
v___x_980_ = lean_unsigned_to_nat(4u);
v___x_981_ = lean_nat_dec_lt(v___x_979_, v___x_980_);
lean_dec(v___x_979_);
v___y_971_ = v___x_981_;
goto v___jp_970_;
}
else
{
v___y_971_ = v___x_978_;
goto v___jp_970_;
}
v___jp_970_:
{
if (v___y_971_ == 0)
{
lean_object* v_ks_972_; lean_object* v_vs_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v_ks_972_ = lean_ctor_get(v_newNode_969_, 0);
lean_inc_ref(v_ks_972_);
v_vs_973_ = lean_ctor_get(v_newNode_969_, 1);
lean_inc_ref(v_vs_973_);
lean_dec_ref(v_newNode_969_);
v___x_974_ = lean_unsigned_to_nat(0u);
v___x_975_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__2, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__2_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___closed__2);
v___x_976_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg(v_x_913_, v_ks_972_, v_vs_973_, v___x_974_, v___x_975_);
lean_dec_ref(v_vs_973_);
lean_dec_ref(v_ks_972_);
return v___x_976_;
}
else
{
return v_newNode_969_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_984_, lean_object* v_keys_985_, lean_object* v_vals_986_, lean_object* v_i_987_, lean_object* v_entries_988_){
_start:
{
lean_object* v___x_989_; uint8_t v___x_990_; 
v___x_989_ = lean_array_get_size(v_keys_985_);
v___x_990_ = lean_nat_dec_lt(v_i_987_, v___x_989_);
if (v___x_990_ == 0)
{
lean_dec(v_i_987_);
return v_entries_988_;
}
else
{
lean_object* v_k_991_; lean_object* v_v_992_; uint64_t v___x_993_; size_t v_h_994_; size_t v___x_995_; lean_object* v___x_996_; size_t v___x_997_; size_t v___x_998_; size_t v___x_999_; size_t v_h_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; 
v_k_991_ = lean_array_fget_borrowed(v_keys_985_, v_i_987_);
v_v_992_ = lean_array_fget_borrowed(v_vals_986_, v_i_987_);
v___x_993_ = l_Lean_instHashableMVarId_hash(v_k_991_);
v_h_994_ = lean_uint64_to_usize(v___x_993_);
v___x_995_ = ((size_t)5ULL);
v___x_996_ = lean_unsigned_to_nat(1u);
v___x_997_ = ((size_t)1ULL);
v___x_998_ = lean_usize_sub(v_depth_984_, v___x_997_);
v___x_999_ = lean_usize_mul(v___x_995_, v___x_998_);
v_h_1000_ = lean_usize_shift_right(v_h_994_, v___x_999_);
v___x_1001_ = lean_nat_add(v_i_987_, v___x_996_);
lean_dec(v_i_987_);
lean_inc(v_v_992_);
lean_inc(v_k_991_);
v___x_1002_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(v_entries_988_, v_h_1000_, v_depth_984_, v_k_991_, v_v_992_);
v_i_987_ = v___x_1001_;
v_entries_988_ = v___x_1002_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_1004_, lean_object* v_keys_1005_, lean_object* v_vals_1006_, lean_object* v_i_1007_, lean_object* v_entries_1008_){
_start:
{
size_t v_depth_boxed_1009_; lean_object* v_res_1010_; 
v_depth_boxed_1009_ = lean_unbox_usize(v_depth_1004_);
lean_dec(v_depth_1004_);
v_res_1010_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_1009_, v_keys_1005_, v_vals_1006_, v_i_1007_, v_entries_1008_);
lean_dec_ref(v_vals_1006_);
lean_dec_ref(v_keys_1005_);
return v_res_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_1011_, lean_object* v_x_1012_, lean_object* v_x_1013_, lean_object* v_x_1014_, lean_object* v_x_1015_){
_start:
{
size_t v_x_74839__boxed_1016_; size_t v_x_74840__boxed_1017_; lean_object* v_res_1018_; 
v_x_74839__boxed_1016_ = lean_unbox_usize(v_x_1012_);
lean_dec(v_x_1012_);
v_x_74840__boxed_1017_ = lean_unbox_usize(v_x_1013_);
lean_dec(v_x_1013_);
v_res_1018_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(v_x_1011_, v_x_74839__boxed_1016_, v_x_74840__boxed_1017_, v_x_1014_, v_x_1015_);
return v_res_1018_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1___redArg(lean_object* v_x_1019_, lean_object* v_x_1020_, lean_object* v_x_1021_){
_start:
{
uint64_t v___x_1022_; size_t v___x_1023_; size_t v___x_1024_; lean_object* v___x_1025_; 
v___x_1022_ = l_Lean_instHashableMVarId_hash(v_x_1020_);
v___x_1023_ = lean_uint64_to_usize(v___x_1022_);
v___x_1024_ = ((size_t)1ULL);
v___x_1025_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(v_x_1019_, v___x_1023_, v___x_1024_, v_x_1020_, v_x_1021_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(lean_object* v_mvarId_1026_, lean_object* v_val_1027_, lean_object* v___y_1028_){
_start:
{
lean_object* v___x_1030_; lean_object* v_mctx_1031_; lean_object* v_cache_1032_; lean_object* v_zetaDeltaFVarIds_1033_; lean_object* v_postponed_1034_; lean_object* v_diag_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1063_; 
v___x_1030_ = lean_st_ref_take(v___y_1028_);
v_mctx_1031_ = lean_ctor_get(v___x_1030_, 0);
v_cache_1032_ = lean_ctor_get(v___x_1030_, 1);
v_zetaDeltaFVarIds_1033_ = lean_ctor_get(v___x_1030_, 2);
v_postponed_1034_ = lean_ctor_get(v___x_1030_, 3);
v_diag_1035_ = lean_ctor_get(v___x_1030_, 4);
v_isSharedCheck_1063_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1037_ = v___x_1030_;
v_isShared_1038_ = v_isSharedCheck_1063_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_diag_1035_);
lean_inc(v_postponed_1034_);
lean_inc(v_zetaDeltaFVarIds_1033_);
lean_inc(v_cache_1032_);
lean_inc(v_mctx_1031_);
lean_dec(v___x_1030_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1063_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v_depth_1039_; lean_object* v_levelAssignDepth_1040_; lean_object* v_lmvarCounter_1041_; lean_object* v_mvarCounter_1042_; lean_object* v_lDecls_1043_; lean_object* v_decls_1044_; lean_object* v_userNames_1045_; lean_object* v_lAssignment_1046_; lean_object* v_eAssignment_1047_; lean_object* v_dAssignment_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1062_; 
v_depth_1039_ = lean_ctor_get(v_mctx_1031_, 0);
v_levelAssignDepth_1040_ = lean_ctor_get(v_mctx_1031_, 1);
v_lmvarCounter_1041_ = lean_ctor_get(v_mctx_1031_, 2);
v_mvarCounter_1042_ = lean_ctor_get(v_mctx_1031_, 3);
v_lDecls_1043_ = lean_ctor_get(v_mctx_1031_, 4);
v_decls_1044_ = lean_ctor_get(v_mctx_1031_, 5);
v_userNames_1045_ = lean_ctor_get(v_mctx_1031_, 6);
v_lAssignment_1046_ = lean_ctor_get(v_mctx_1031_, 7);
v_eAssignment_1047_ = lean_ctor_get(v_mctx_1031_, 8);
v_dAssignment_1048_ = lean_ctor_get(v_mctx_1031_, 9);
v_isSharedCheck_1062_ = !lean_is_exclusive(v_mctx_1031_);
if (v_isSharedCheck_1062_ == 0)
{
v___x_1050_ = v_mctx_1031_;
v_isShared_1051_ = v_isSharedCheck_1062_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_dAssignment_1048_);
lean_inc(v_eAssignment_1047_);
lean_inc(v_lAssignment_1046_);
lean_inc(v_userNames_1045_);
lean_inc(v_decls_1044_);
lean_inc(v_lDecls_1043_);
lean_inc(v_mvarCounter_1042_);
lean_inc(v_lmvarCounter_1041_);
lean_inc(v_levelAssignDepth_1040_);
lean_inc(v_depth_1039_);
lean_dec(v_mctx_1031_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1062_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1054_; 
v___x_1052_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1___redArg(v_eAssignment_1047_, v_mvarId_1026_, v_val_1027_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 8, v___x_1052_);
v___x_1054_ = v___x_1050_;
goto v_reusejp_1053_;
}
else
{
lean_object* v_reuseFailAlloc_1061_; 
v_reuseFailAlloc_1061_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1061_, 0, v_depth_1039_);
lean_ctor_set(v_reuseFailAlloc_1061_, 1, v_levelAssignDepth_1040_);
lean_ctor_set(v_reuseFailAlloc_1061_, 2, v_lmvarCounter_1041_);
lean_ctor_set(v_reuseFailAlloc_1061_, 3, v_mvarCounter_1042_);
lean_ctor_set(v_reuseFailAlloc_1061_, 4, v_lDecls_1043_);
lean_ctor_set(v_reuseFailAlloc_1061_, 5, v_decls_1044_);
lean_ctor_set(v_reuseFailAlloc_1061_, 6, v_userNames_1045_);
lean_ctor_set(v_reuseFailAlloc_1061_, 7, v_lAssignment_1046_);
lean_ctor_set(v_reuseFailAlloc_1061_, 8, v___x_1052_);
lean_ctor_set(v_reuseFailAlloc_1061_, 9, v_dAssignment_1048_);
v___x_1054_ = v_reuseFailAlloc_1061_;
goto v_reusejp_1053_;
}
v_reusejp_1053_:
{
lean_object* v___x_1056_; 
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 0, v___x_1054_);
v___x_1056_ = v___x_1037_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v___x_1054_);
lean_ctor_set(v_reuseFailAlloc_1060_, 1, v_cache_1032_);
lean_ctor_set(v_reuseFailAlloc_1060_, 2, v_zetaDeltaFVarIds_1033_);
lean_ctor_set(v_reuseFailAlloc_1060_, 3, v_postponed_1034_);
lean_ctor_set(v_reuseFailAlloc_1060_, 4, v_diag_1035_);
v___x_1056_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v___x_1057_ = lean_st_ref_set(v___y_1028_, v___x_1056_);
v___x_1058_ = lean_box(0);
v___x_1059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1059_, 0, v___x_1058_);
return v___x_1059_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg___boxed(lean_object* v_mvarId_1064_, lean_object* v_val_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_mvarId_1064_, v_val_1065_, v___y_1066_);
lean_dec(v___y_1066_);
return v_res_1068_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
v___x_1083_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__8));
v___x_1084_ = l_Lean_stringToMessageData(v___x_1083_);
return v___x_1084_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13(void){
_start:
{
lean_object* v___x_1090_; lean_object* v___x_1091_; 
v___x_1090_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__12));
v___x_1091_ = l_Lean_stringToMessageData(v___x_1090_);
return v___x_1091_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14(void){
_start:
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1092_ = lean_box(0);
v___x_1093_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3));
v___x_1094_ = l_Lean_mkConst(v___x_1093_, v___x_1092_);
return v___x_1094_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17(void){
_start:
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = lean_box(0);
v___x_1100_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__16));
v___x_1101_ = l_Lean_mkConst(v___x_1100_, v___x_1099_);
return v___x_1101_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20(void){
_start:
{
lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; 
v___x_1106_ = lean_box(0);
v___x_1107_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__19));
v___x_1108_ = l_Lean_mkConst(v___x_1107_, v___x_1106_);
return v___x_1108_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22(void){
_start:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; 
v___x_1112_ = lean_box(0);
v___x_1113_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__21));
v___x_1114_ = l_Lean_mkConst(v___x_1113_, v___x_1112_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0(lean_object* v_goal_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_){
_start:
{
lean_object* v___x_1128_; 
lean_inc(v_goal_1115_);
v___x_1128_ = l_Lean_MVarId_getType(v_goal_1115_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1128_) == 0)
{
lean_object* v_a_1129_; lean_object* v___x_1130_; 
v_a_1129_ = lean_ctor_get(v___x_1128_, 0);
lean_inc(v_a_1129_);
lean_dec_ref_known(v___x_1128_, 1);
v___x_1130_ = l_Lean_instantiateMVars___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__0___redArg(v_a_1129_, v___y_1124_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1435_; 
v_a_1131_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1435_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1133_ = v___x_1130_;
v_isShared_1134_ = v_isSharedCheck_1435_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1130_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1435_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1135_; uint8_t v___x_1136_; 
v___x_1135_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__1));
v___x_1136_ = l_Lean_Expr_isAppOf(v_a_1131_, v___x_1135_);
if (v___x_1136_ == 0)
{
lean_object* v___x_1137_; uint8_t v___x_1138_; 
v___x_1137_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__3));
v___x_1138_ = l_Lean_Expr_isAppOf(v_a_1131_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; uint8_t v___x_1141_; 
v___x_1139_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__5));
v___x_1140_ = lean_unsigned_to_nat(3u);
v___x_1141_ = l_Lean_Expr_isAppOfArity(v_a_1131_, v___x_1139_, v___x_1140_);
if (v___x_1141_ == 0)
{
lean_object* v___x_1142_; lean_object* v___x_1144_; 
lean_dec(v_a_1131_);
v___x_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1142_, 0, v_goal_1115_);
if (v_isShared_1134_ == 0)
{
lean_ctor_set(v___x_1133_, 0, v___x_1142_);
v___x_1144_ = v___x_1133_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v___x_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
else
{
lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
lean_del_object(v___x_1133_);
v___x_1146_ = l_Lean_Expr_appFn_x21(v_a_1131_);
v___x_1147_ = l_Lean_Expr_appArg_x21(v___x_1146_);
v___x_1148_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(v___x_1147_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v_a_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v_a_1149_ = lean_ctor_get(v___x_1148_, 0);
lean_inc(v_a_1149_);
lean_dec_ref_known(v___x_1148_, 1);
v___x_1150_ = l_Lean_Expr_appArg_x21(v_a_1131_);
lean_dec(v_a_1131_);
v___x_1151_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_reduceHead(v___x_1150_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1153_ = l_Lean_Expr_appFn_x21(v___x_1146_);
lean_dec_ref(v___x_1146_);
v___x_1154_ = l_Lean_Expr_appArg_x21(v___x_1153_);
lean_dec_ref(v___x_1153_);
lean_inc_ref(v___x_1154_);
v___x_1155_ = l_Lean_Meta_getLevel(v___x_1154_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = lean_box(0);
v___x_1158_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1158_, 0, v_a_1156_);
lean_ctor_set(v___x_1158_, 1, v___x_1157_);
v___x_1159_ = l_Lean_mkConst(v___x_1139_, v___x_1158_);
lean_inc(v_a_1152_);
lean_inc(v_a_1149_);
lean_inc_ref(v___x_1154_);
v___x_1160_ = l_Lean_mkApp3(v___x_1159_, v___x_1154_, v_a_1149_, v_a_1152_);
v___x_1161_ = l_Lean_MVarId_replaceTargetDefEq(v_goal_1115_, v___x_1160_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1161_) == 0)
{
lean_object* v_a_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1257_; 
v_a_1162_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1257_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1257_ == 0)
{
v___x_1164_ = v___x_1161_;
v_isShared_1165_ = v_isSharedCheck_1257_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_a_1162_);
lean_dec(v___x_1161_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1257_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
uint8_t v_a_1167_; lean_object* v___x_1204_; uint8_t v_foApprox_1205_; uint8_t v_ctxApprox_1206_; uint8_t v_quasiPatternApprox_1207_; uint8_t v_constApprox_1208_; uint8_t v_isDefEqStuckEx_1209_; uint8_t v_unificationHints_1210_; uint8_t v_proofIrrelevance_1211_; uint8_t v_offsetCnstrs_1212_; uint8_t v_transparency_1213_; uint8_t v_etaStruct_1214_; uint8_t v_univApprox_1215_; uint8_t v_iota_1216_; uint8_t v_beta_1217_; uint8_t v_proj_1218_; uint8_t v_zeta_1219_; uint8_t v_zetaDelta_1220_; uint8_t v_zetaUnused_1221_; uint8_t v_zetaHave_1222_; lean_object* v___x_1224_; uint8_t v_isShared_1225_; uint8_t v_isSharedCheck_1256_; 
v___x_1204_ = l_Lean_Meta_Context_config(v___y_1123_);
v_foApprox_1205_ = lean_ctor_get_uint8(v___x_1204_, 0);
v_ctxApprox_1206_ = lean_ctor_get_uint8(v___x_1204_, 1);
v_quasiPatternApprox_1207_ = lean_ctor_get_uint8(v___x_1204_, 2);
v_constApprox_1208_ = lean_ctor_get_uint8(v___x_1204_, 3);
v_isDefEqStuckEx_1209_ = lean_ctor_get_uint8(v___x_1204_, 4);
v_unificationHints_1210_ = lean_ctor_get_uint8(v___x_1204_, 5);
v_proofIrrelevance_1211_ = lean_ctor_get_uint8(v___x_1204_, 6);
v_offsetCnstrs_1212_ = lean_ctor_get_uint8(v___x_1204_, 8);
v_transparency_1213_ = lean_ctor_get_uint8(v___x_1204_, 9);
v_etaStruct_1214_ = lean_ctor_get_uint8(v___x_1204_, 10);
v_univApprox_1215_ = lean_ctor_get_uint8(v___x_1204_, 11);
v_iota_1216_ = lean_ctor_get_uint8(v___x_1204_, 12);
v_beta_1217_ = lean_ctor_get_uint8(v___x_1204_, 13);
v_proj_1218_ = lean_ctor_get_uint8(v___x_1204_, 14);
v_zeta_1219_ = lean_ctor_get_uint8(v___x_1204_, 15);
v_zetaDelta_1220_ = lean_ctor_get_uint8(v___x_1204_, 16);
v_zetaUnused_1221_ = lean_ctor_get_uint8(v___x_1204_, 17);
v_zetaHave_1222_ = lean_ctor_get_uint8(v___x_1204_, 18);
v_isSharedCheck_1256_ = !lean_is_exclusive(v___x_1204_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1224_ = v___x_1204_;
v_isShared_1225_ = v_isSharedCheck_1256_;
goto v_resetjp_1223_;
}
else
{
lean_dec(v___x_1204_);
v___x_1224_ = lean_box(0);
v_isShared_1225_ = v_isSharedCheck_1256_;
goto v_resetjp_1223_;
}
v___jp_1166_:
{
if (v_a_1167_ == 0)
{
lean_object* v___x_1168_; lean_object* v___x_1170_; 
lean_dec_ref(v___x_1154_);
lean_dec(v_a_1149_);
v___x_1168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1168_, 0, v_a_1162_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 0, v___x_1168_);
v___x_1170_ = v___x_1164_;
goto v_reusejp_1169_;
}
else
{
lean_object* v_reuseFailAlloc_1171_; 
v_reuseFailAlloc_1171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1171_, 0, v___x_1168_);
v___x_1170_ = v_reuseFailAlloc_1171_;
goto v_reusejp_1169_;
}
v_reusejp_1169_:
{
return v___x_1170_;
}
}
else
{
lean_object* v___x_1172_; 
lean_del_object(v___x_1164_);
lean_inc_ref(v___x_1154_);
v___x_1172_ = l_Lean_Meta_getLevel(v___x_1154_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1172_) == 0)
{
lean_object* v_a_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; 
v_a_1173_ = lean_ctor_get(v___x_1172_, 0);
lean_inc(v_a_1173_);
lean_dec_ref_known(v___x_1172_, 1);
v___x_1174_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__7));
v___x_1175_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1175_, 0, v_a_1173_);
lean_ctor_set(v___x_1175_, 1, v___x_1157_);
v___x_1176_ = l_Lean_mkConst(v___x_1174_, v___x_1175_);
v___x_1177_ = l_Lean_mkAppB(v___x_1176_, v___x_1154_, v_a_1149_);
v___x_1178_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_a_1162_, v___x_1177_, v___y_1124_);
if (lean_obj_tag(v___x_1178_) == 0)
{
lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1186_; 
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1186_ == 0)
{
lean_object* v_unused_1187_; 
v_unused_1187_ = lean_ctor_get(v___x_1178_, 0);
lean_dec(v_unused_1187_);
v___x_1180_ = v___x_1178_;
v_isShared_1181_ = v_isSharedCheck_1186_;
goto v_resetjp_1179_;
}
else
{
lean_dec(v___x_1178_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1186_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1184_; 
v___x_1182_ = lean_box(0);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 0, v___x_1182_);
v___x_1184_ = v___x_1180_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v___x_1182_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
v_a_1188_ = lean_ctor_get(v___x_1178_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1178_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1178_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1178_);
v___x_1190_ = lean_box(0);
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
v_resetjp_1189_:
{
lean_object* v___x_1193_; 
if (v_isShared_1191_ == 0)
{
v___x_1193_ = v___x_1190_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_a_1188_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
lean_dec(v_a_1162_);
lean_dec_ref(v___x_1154_);
lean_dec(v_a_1149_);
v_a_1196_ = lean_ctor_get(v___x_1172_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1172_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1172_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1172_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
}
v_resetjp_1223_:
{
uint8_t v_trackZetaDelta_1226_; lean_object* v_zetaDeltaSet_1227_; lean_object* v_lctx_1228_; lean_object* v_localInstances_1229_; lean_object* v_defEqCtx_x3f_1230_; lean_object* v_synthPendingDepth_1231_; lean_object* v_canUnfold_x3f_1232_; uint8_t v_univApprox_1233_; uint8_t v_inTypeClassResolution_1234_; uint8_t v_cacheInferType_1235_; lean_object* v___x_1237_; 
v_trackZetaDelta_1226_ = lean_ctor_get_uint8(v___y_1123_, sizeof(void*)*7);
v_zetaDeltaSet_1227_ = lean_ctor_get(v___y_1123_, 1);
v_lctx_1228_ = lean_ctor_get(v___y_1123_, 2);
v_localInstances_1229_ = lean_ctor_get(v___y_1123_, 3);
v_defEqCtx_x3f_1230_ = lean_ctor_get(v___y_1123_, 4);
v_synthPendingDepth_1231_ = lean_ctor_get(v___y_1123_, 5);
v_canUnfold_x3f_1232_ = lean_ctor_get(v___y_1123_, 6);
v_univApprox_1233_ = lean_ctor_get_uint8(v___y_1123_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1234_ = lean_ctor_get_uint8(v___y_1123_, sizeof(void*)*7 + 2);
v_cacheInferType_1235_ = lean_ctor_get_uint8(v___y_1123_, sizeof(void*)*7 + 3);
if (v_isShared_1225_ == 0)
{
v___x_1237_ = v___x_1224_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 0, v_foApprox_1205_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 1, v_ctxApprox_1206_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 2, v_quasiPatternApprox_1207_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 3, v_constApprox_1208_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 4, v_isDefEqStuckEx_1209_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 5, v_unificationHints_1210_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 6, v_proofIrrelevance_1211_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 8, v_offsetCnstrs_1212_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 9, v_transparency_1213_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 10, v_etaStruct_1214_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 11, v_univApprox_1215_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 12, v_iota_1216_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 13, v_beta_1217_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 14, v_proj_1218_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 15, v_zeta_1219_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 16, v_zetaDelta_1220_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 17, v_zetaUnused_1221_);
lean_ctor_set_uint8(v_reuseFailAlloc_1255_, 18, v_zetaHave_1222_);
v___x_1237_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
uint64_t v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
lean_ctor_set_uint8(v___x_1237_, 7, v___x_1141_);
v___x_1238_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1237_);
v___x_1239_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_introsSimp___redArg___closed__0));
v___x_1240_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1240_, 0, v___x_1237_);
lean_ctor_set_uint64(v___x_1240_, sizeof(void*)*1, v___x_1238_);
lean_inc(v_canUnfold_x3f_1232_);
lean_inc(v_synthPendingDepth_1231_);
lean_inc(v_defEqCtx_x3f_1230_);
lean_inc_ref(v_localInstances_1229_);
lean_inc_ref(v_lctx_1228_);
lean_inc(v_zetaDeltaSet_1227_);
v___x_1241_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1241_, 0, v___x_1240_);
lean_ctor_set(v___x_1241_, 1, v_zetaDeltaSet_1227_);
lean_ctor_set(v___x_1241_, 2, v_lctx_1228_);
lean_ctor_set(v___x_1241_, 3, v_localInstances_1229_);
lean_ctor_set(v___x_1241_, 4, v_defEqCtx_x3f_1230_);
lean_ctor_set(v___x_1241_, 5, v_synthPendingDepth_1231_);
lean_ctor_set(v___x_1241_, 6, v_canUnfold_x3f_1232_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*7, v_trackZetaDelta_1226_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*7 + 1, v_univApprox_1233_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1234_);
lean_ctor_set_uint8(v___x_1241_, sizeof(void*)*7 + 3, v_cacheInferType_1235_);
lean_inc(v_a_1149_);
v___x_1242_ = l_Lean_Meta_Sym_isDefEqS(v_a_1149_, v_a_1152_, v___x_1141_, v___x_1141_, v___x_1239_, v___x_1239_, v___y_1121_, v___y_1122_, v___x_1241_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec_ref_known(v___x_1241_, 7);
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1243_; uint8_t v___x_1244_; 
v_a_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_a_1243_);
lean_dec_ref_known(v___x_1242_, 1);
v___x_1244_ = lean_unbox(v_a_1243_);
lean_dec(v_a_1243_);
v_a_1167_ = v___x_1244_;
goto v___jp_1166_;
}
else
{
if (lean_obj_tag(v___x_1242_) == 0)
{
lean_object* v_a_1245_; uint8_t v___x_1246_; 
v_a_1245_ = lean_ctor_get(v___x_1242_, 0);
lean_inc(v_a_1245_);
lean_dec_ref_known(v___x_1242_, 1);
v___x_1246_ = lean_unbox(v_a_1245_);
lean_dec(v_a_1245_);
v_a_1167_ = v___x_1246_;
goto v___jp_1166_;
}
else
{
lean_object* v_a_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1254_; 
lean_del_object(v___x_1164_);
lean_dec(v_a_1162_);
lean_dec_ref(v___x_1154_);
lean_dec(v_a_1149_);
v_a_1247_ = lean_ctor_get(v___x_1242_, 0);
v_isSharedCheck_1254_ = !lean_is_exclusive(v___x_1242_);
if (v_isSharedCheck_1254_ == 0)
{
v___x_1249_ = v___x_1242_;
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_a_1247_);
lean_dec(v___x_1242_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1254_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1252_; 
if (v_isShared_1250_ == 0)
{
v___x_1252_ = v___x_1249_;
goto v_reusejp_1251_;
}
else
{
lean_object* v_reuseFailAlloc_1253_; 
v_reuseFailAlloc_1253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1253_, 0, v_a_1247_);
v___x_1252_ = v_reuseFailAlloc_1253_;
goto v_reusejp_1251_;
}
v_reusejp_1251_:
{
return v___x_1252_;
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
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec_ref(v___x_1154_);
lean_dec(v_a_1152_);
lean_dec(v_a_1149_);
v_a_1258_ = lean_ctor_get(v___x_1161_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1161_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1161_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1161_);
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
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec_ref(v___x_1154_);
lean_dec(v_a_1152_);
lean_dec(v_a_1149_);
lean_dec(v_goal_1115_);
v_a_1266_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1155_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1155_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
else
{
lean_object* v_a_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1281_; 
lean_dec(v_a_1149_);
lean_dec_ref(v___x_1146_);
lean_dec(v_goal_1115_);
v_a_1274_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1281_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1276_ = v___x_1151_;
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_a_1274_);
lean_dec(v___x_1151_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1281_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___x_1279_; 
if (v_isShared_1277_ == 0)
{
v___x_1279_ = v___x_1276_;
goto v_reusejp_1278_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_a_1274_);
v___x_1279_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1278_;
}
v_reusejp_1278_:
{
return v___x_1279_;
}
}
}
}
else
{
lean_object* v_a_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1289_; 
lean_dec_ref(v___x_1146_);
lean_dec(v_a_1131_);
lean_dec(v_goal_1115_);
v_a_1282_ = lean_ctor_get(v___x_1148_, 0);
v_isSharedCheck_1289_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1289_ == 0)
{
v___x_1284_ = v___x_1148_;
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_a_1282_);
lean_dec(v___x_1148_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1289_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1287_; 
if (v_isShared_1285_ == 0)
{
v___x_1287_ = v___x_1284_;
goto v_reusejp_1286_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v_a_1282_);
v___x_1287_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1286_;
}
v_reusejp_1286_:
{
return v___x_1287_;
}
}
}
}
}
else
{
lean_object* v_andIntroRule_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; 
lean_del_object(v___x_1133_);
v_andIntroRule_1290_ = lean_ctor_get(v___y_1116_, 15);
v___x_1291_ = lean_box(0);
lean_inc_ref(v_andIntroRule_1290_);
v___x_1292_ = l_Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked(v_andIntroRule_1290_, v_goal_1115_, v___x_1291_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v___y_1295_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
lean_dec_ref_known(v___x_1292_, 1);
if (lean_obj_tag(v_a_1293_) == 1)
{
lean_object* v_mvarIds_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1407_; 
v_mvarIds_1308_ = lean_ctor_get(v_a_1293_, 0);
v_isSharedCheck_1407_ = !lean_is_exclusive(v_a_1293_);
if (v_isSharedCheck_1407_ == 0)
{
v___x_1310_ = v_a_1293_;
v_isShared_1311_ = v_isSharedCheck_1407_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_mvarIds_1308_);
lean_dec(v_a_1293_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1407_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
if (lean_obj_tag(v_mvarIds_1308_) == 1)
{
lean_object* v_tail_1312_; 
v_tail_1312_ = lean_ctor_get(v_mvarIds_1308_, 1);
lean_inc(v_tail_1312_);
if (lean_obj_tag(v_tail_1312_) == 1)
{
lean_object* v_tail_1313_; 
v_tail_1313_ = lean_ctor_get(v_tail_1312_, 1);
if (lean_obj_tag(v_tail_1313_) == 0)
{
lean_object* v_head_1314_; lean_object* v_head_1315_; lean_object* v___x_1316_; 
lean_dec(v_a_1131_);
v_head_1314_ = lean_ctor_get(v_mvarIds_1308_, 0);
lean_inc(v_head_1314_);
lean_dec_ref_known(v_mvarIds_1308_, 2);
v_head_1315_ = lean_ctor_get(v_tail_1312_, 0);
lean_inc(v_head_1315_);
lean_dec_ref_known(v_tail_1312_, 2);
v___x_1316_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_head_1314_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v_a_1317_; lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1406_; 
v_a_1317_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1406_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1406_ == 0)
{
v___x_1319_ = v___x_1316_;
v_isShared_1320_ = v_isSharedCheck_1406_;
goto v_resetjp_1318_;
}
else
{
lean_inc(v_a_1317_);
lean_dec(v___x_1316_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1406_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; 
v___x_1321_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_head_1315_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, v___y_1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1321_) == 0)
{
lean_object* v_a_1322_; lean_object* v_g_1324_; 
v_a_1322_ = lean_ctor_get(v___x_1321_, 0);
lean_inc(v_a_1322_);
if (lean_obj_tag(v_a_1317_) == 0)
{
if (lean_obj_tag(v_a_1322_) == 0)
{
lean_del_object(v___x_1319_);
lean_del_object(v___x_1310_);
return v___x_1321_;
}
else
{
lean_object* v_val_1331_; 
lean_dec_ref_known(v___x_1321_, 1);
v_val_1331_ = lean_ctor_get(v_a_1322_, 0);
lean_inc(v_val_1331_);
lean_dec_ref_known(v_a_1322_, 1);
v_g_1324_ = v_val_1331_;
goto v___jp_1323_;
}
}
else
{
lean_dec_ref_known(v___x_1321_, 1);
if (lean_obj_tag(v_a_1322_) == 0)
{
lean_object* v_val_1332_; 
v_val_1332_ = lean_ctor_get(v_a_1317_, 0);
lean_inc(v_val_1332_);
lean_dec_ref_known(v_a_1317_, 1);
v_g_1324_ = v_val_1332_;
goto v___jp_1323_;
}
else
{
lean_object* v_val_1333_; lean_object* v_val_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1405_; 
lean_del_object(v___x_1319_);
lean_del_object(v___x_1310_);
v_val_1333_ = lean_ctor_get(v_a_1317_, 0);
lean_inc(v_val_1333_);
lean_dec_ref_known(v_a_1317_, 1);
v_val_1334_ = lean_ctor_get(v_a_1322_, 0);
v_isSharedCheck_1405_ = !lean_is_exclusive(v_a_1322_);
if (v_isSharedCheck_1405_ == 0)
{
v___x_1336_ = v_a_1322_;
v_isShared_1337_ = v_isSharedCheck_1405_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_val_1334_);
lean_dec(v_a_1322_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1405_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___x_1338_; 
lean_inc(v_val_1333_);
v___x_1338_ = l_Lean_MVarId_getType(v_val_1333_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1338_) == 0)
{
lean_object* v_a_1339_; lean_object* v___x_1340_; 
v_a_1339_ = lean_ctor_get(v___x_1338_, 0);
lean_inc(v_a_1339_);
lean_dec_ref_known(v___x_1338_, 1);
lean_inc(v_val_1334_);
v___x_1340_ = l_Lean_MVarId_getType(v_val_1334_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1340_) == 0)
{
lean_object* v_a_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; 
v_a_1341_ = lean_ctor_get(v___x_1340_, 0);
lean_inc_n(v_a_1341_, 2);
lean_dec_ref_known(v___x_1340_, 1);
v___x_1342_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__14);
lean_inc(v_a_1339_);
v___x_1343_ = l_Lean_mkAppB(v___x_1342_, v_a_1339_, v_a_1341_);
v___x_1344_ = lean_box(0);
v___x_1345_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_1343_, v___x_1344_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
if (lean_obj_tag(v___x_1345_) == 0)
{
lean_object* v_a_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
v_a_1346_ = lean_ctor_get(v___x_1345_, 0);
lean_inc_n(v_a_1346_, 2);
lean_dec_ref_known(v___x_1345_, 1);
v___x_1347_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__17);
lean_inc(v_a_1341_);
lean_inc(v_a_1339_);
v___x_1348_ = l_Lean_mkApp3(v___x_1347_, v_a_1339_, v_a_1341_, v_a_1346_);
v___x_1349_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_val_1333_, v___x_1348_, v___y_1124_);
if (lean_obj_tag(v___x_1349_) == 0)
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec_ref_known(v___x_1349_, 1);
v___x_1350_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__20);
lean_inc(v_a_1346_);
v___x_1351_ = l_Lean_mkApp3(v___x_1350_, v_a_1339_, v_a_1341_, v_a_1346_);
v___x_1352_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_val_1334_, v___x_1351_, v___y_1124_);
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v___x_1354_; uint8_t v_isShared_1355_; uint8_t v_isSharedCheck_1363_; 
v_isSharedCheck_1363_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1363_ == 0)
{
lean_object* v_unused_1364_; 
v_unused_1364_ = lean_ctor_get(v___x_1352_, 0);
lean_dec(v_unused_1364_);
v___x_1354_ = v___x_1352_;
v_isShared_1355_ = v_isSharedCheck_1363_;
goto v_resetjp_1353_;
}
else
{
lean_dec(v___x_1352_);
v___x_1354_ = lean_box(0);
v_isShared_1355_ = v_isSharedCheck_1363_;
goto v_resetjp_1353_;
}
v_resetjp_1353_:
{
lean_object* v___x_1356_; lean_object* v___x_1358_; 
v___x_1356_ = l_Lean_Expr_mvarId_x21(v_a_1346_);
lean_dec(v_a_1346_);
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 0, v___x_1356_);
v___x_1358_ = v___x_1336_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
lean_object* v___x_1360_; 
if (v_isShared_1355_ == 0)
{
lean_ctor_set(v___x_1354_, 0, v___x_1358_);
v___x_1360_ = v___x_1354_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v___x_1358_);
v___x_1360_ = v_reuseFailAlloc_1361_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
return v___x_1360_;
}
}
}
}
else
{
lean_object* v_a_1365_; lean_object* v___x_1367_; uint8_t v_isShared_1368_; uint8_t v_isSharedCheck_1372_; 
lean_dec(v_a_1346_);
lean_del_object(v___x_1336_);
v_a_1365_ = lean_ctor_get(v___x_1352_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___x_1352_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1367_ = v___x_1352_;
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
else
{
lean_inc(v_a_1365_);
lean_dec(v___x_1352_);
v___x_1367_ = lean_box(0);
v_isShared_1368_ = v_isSharedCheck_1372_;
goto v_resetjp_1366_;
}
v_resetjp_1366_:
{
lean_object* v___x_1370_; 
if (v_isShared_1368_ == 0)
{
v___x_1370_ = v___x_1367_;
goto v_reusejp_1369_;
}
else
{
lean_object* v_reuseFailAlloc_1371_; 
v_reuseFailAlloc_1371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1371_, 0, v_a_1365_);
v___x_1370_ = v_reuseFailAlloc_1371_;
goto v_reusejp_1369_;
}
v_reusejp_1369_:
{
return v___x_1370_;
}
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
lean_dec(v_a_1346_);
lean_dec(v_a_1341_);
lean_dec(v_a_1339_);
lean_del_object(v___x_1336_);
lean_dec(v_val_1334_);
v_a_1373_ = lean_ctor_get(v___x_1349_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___x_1349_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___x_1349_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___x_1349_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec(v_a_1341_);
lean_dec(v_a_1339_);
lean_del_object(v___x_1336_);
lean_dec(v_val_1334_);
lean_dec(v_val_1333_);
v_a_1381_ = lean_ctor_get(v___x_1345_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1345_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1345_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1345_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
else
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
lean_dec(v_a_1339_);
lean_del_object(v___x_1336_);
lean_dec(v_val_1334_);
lean_dec(v_val_1333_);
v_a_1389_ = lean_ctor_get(v___x_1340_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1340_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1340_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1340_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
lean_del_object(v___x_1336_);
lean_dec(v_val_1334_);
lean_dec(v_val_1333_);
v_a_1397_ = lean_ctor_get(v___x_1338_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1338_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1338_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1338_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
}
}
v___jp_1323_:
{
lean_object* v___x_1326_; 
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 0, v_g_1324_);
v___x_1326_ = v___x_1310_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1330_; 
v_reuseFailAlloc_1330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1330_, 0, v_g_1324_);
v___x_1326_ = v_reuseFailAlloc_1330_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1328_; 
if (v_isShared_1320_ == 0)
{
lean_ctor_set(v___x_1319_, 0, v___x_1326_);
v___x_1328_ = v___x_1319_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1329_; 
v_reuseFailAlloc_1329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1329_, 0, v___x_1326_);
v___x_1328_ = v_reuseFailAlloc_1329_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
return v___x_1328_;
}
}
}
}
else
{
lean_del_object(v___x_1319_);
lean_dec(v_a_1317_);
lean_del_object(v___x_1310_);
return v___x_1321_;
}
}
}
else
{
lean_dec(v_head_1315_);
lean_del_object(v___x_1310_);
return v___x_1316_;
}
}
else
{
lean_dec_ref_known(v_tail_1312_, 2);
lean_dec_ref_known(v_mvarIds_1308_, 2);
lean_del_object(v___x_1310_);
v___y_1295_ = v___y_1123_;
v___y_1296_ = v___y_1124_;
v___y_1297_ = v___y_1125_;
v___y_1298_ = v___y_1126_;
goto v___jp_1294_;
}
}
else
{
lean_dec_ref_known(v_mvarIds_1308_, 2);
lean_dec(v_tail_1312_);
lean_del_object(v___x_1310_);
v___y_1295_ = v___y_1123_;
v___y_1296_ = v___y_1124_;
v___y_1297_ = v___y_1125_;
v___y_1298_ = v___y_1126_;
goto v___jp_1294_;
}
}
else
{
lean_del_object(v___x_1310_);
lean_dec(v_mvarIds_1308_);
v___y_1295_ = v___y_1123_;
v___y_1296_ = v___y_1124_;
v___y_1297_ = v___y_1125_;
v___y_1298_ = v___y_1126_;
goto v___jp_1294_;
}
}
}
else
{
lean_dec(v_a_1293_);
v___y_1295_ = v___y_1123_;
v___y_1296_ = v___y_1124_;
v___y_1297_ = v___y_1125_;
v___y_1298_ = v___y_1126_;
goto v___jp_1294_;
}
v___jp_1294_:
{
lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; 
v___x_1299_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__9);
v___x_1300_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__11));
v___x_1301_ = l_Lean_MessageData_ofConstName(v___x_1300_, v___x_1136_);
v___x_1302_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1302_, 0, v___x_1299_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__13);
v___x_1304_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1302_);
lean_ctor_set(v___x_1304_, 1, v___x_1303_);
v___x_1305_ = l_Lean_indentExpr(v_a_1131_);
v___x_1306_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1304_);
lean_ctor_set(v___x_1306_, 1, v___x_1305_);
v___x_1307_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_Lean_Meta_Sym_BackwardRule_applyChecked_spec__1___redArg(v___x_1306_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
return v___x_1307_;
}
}
else
{
lean_object* v_a_1408_; lean_object* v___x_1410_; uint8_t v_isShared_1411_; uint8_t v_isSharedCheck_1415_; 
lean_dec(v_a_1131_);
v_a_1408_ = lean_ctor_get(v___x_1292_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1292_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1410_ = v___x_1292_;
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
else
{
lean_inc(v_a_1408_);
lean_dec(v___x_1292_);
v___x_1410_ = lean_box(0);
v_isShared_1411_ = v_isSharedCheck_1415_;
goto v_resetjp_1409_;
}
v_resetjp_1409_:
{
lean_object* v___x_1413_; 
if (v_isShared_1411_ == 0)
{
v___x_1413_ = v___x_1410_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v_a_1408_);
v___x_1413_ = v_reuseFailAlloc_1414_;
goto v_reusejp_1412_;
}
v_reusejp_1412_:
{
return v___x_1413_;
}
}
}
}
}
else
{
lean_object* v___x_1416_; lean_object* v___x_1417_; 
lean_del_object(v___x_1133_);
lean_dec(v_a_1131_);
v___x_1416_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22, &l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___closed__22);
v___x_1417_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_goal_1115_, v___x_1416_, v___y_1124_);
if (lean_obj_tag(v___x_1417_) == 0)
{
lean_object* v___x_1419_; uint8_t v_isShared_1420_; uint8_t v_isSharedCheck_1425_; 
v_isSharedCheck_1425_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1425_ == 0)
{
lean_object* v_unused_1426_; 
v_unused_1426_ = lean_ctor_get(v___x_1417_, 0);
lean_dec(v_unused_1426_);
v___x_1419_ = v___x_1417_;
v_isShared_1420_ = v_isSharedCheck_1425_;
goto v_resetjp_1418_;
}
else
{
lean_dec(v___x_1417_);
v___x_1419_ = lean_box(0);
v_isShared_1420_ = v_isSharedCheck_1425_;
goto v_resetjp_1418_;
}
v_resetjp_1418_:
{
lean_object* v___x_1421_; lean_object* v___x_1423_; 
v___x_1421_ = lean_box(0);
if (v_isShared_1420_ == 0)
{
lean_ctor_set(v___x_1419_, 0, v___x_1421_);
v___x_1423_ = v___x_1419_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1424_; 
v_reuseFailAlloc_1424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1424_, 0, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1424_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
return v___x_1423_;
}
}
}
else
{
lean_object* v_a_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1434_; 
v_a_1427_ = lean_ctor_get(v___x_1417_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1417_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1429_ = v___x_1417_;
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
else
{
lean_inc(v_a_1427_);
lean_dec(v___x_1417_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1434_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v_a_1427_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
}
}
else
{
lean_object* v_a_1436_; lean_object* v___x_1438_; uint8_t v_isShared_1439_; uint8_t v_isSharedCheck_1443_; 
lean_dec(v_goal_1115_);
v_a_1436_ = lean_ctor_get(v___x_1130_, 0);
v_isSharedCheck_1443_ = !lean_is_exclusive(v___x_1130_);
if (v_isSharedCheck_1443_ == 0)
{
v___x_1438_ = v___x_1130_;
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
else
{
lean_inc(v_a_1436_);
lean_dec(v___x_1130_);
v___x_1438_ = lean_box(0);
v_isShared_1439_ = v_isSharedCheck_1443_;
goto v_resetjp_1437_;
}
v_resetjp_1437_:
{
lean_object* v___x_1441_; 
if (v_isShared_1439_ == 0)
{
v___x_1441_ = v___x_1438_;
goto v_reusejp_1440_;
}
else
{
lean_object* v_reuseFailAlloc_1442_; 
v_reuseFailAlloc_1442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1442_, 0, v_a_1436_);
v___x_1441_ = v_reuseFailAlloc_1442_;
goto v_reusejp_1440_;
}
v_reusejp_1440_:
{
return v___x_1441_;
}
}
}
}
else
{
lean_object* v_a_1444_; lean_object* v___x_1446_; uint8_t v_isShared_1447_; uint8_t v_isSharedCheck_1451_; 
lean_dec(v_goal_1115_);
v_a_1444_ = lean_ctor_get(v___x_1128_, 0);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1128_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1446_ = v___x_1128_;
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
else
{
lean_inc(v_a_1444_);
lean_dec(v___x_1128_);
v___x_1446_ = lean_box(0);
v_isShared_1447_ = v_isSharedCheck_1451_;
goto v_resetjp_1445_;
}
v_resetjp_1445_:
{
lean_object* v___x_1449_; 
if (v_isShared_1447_ == 0)
{
v___x_1449_ = v___x_1446_;
goto v_reusejp_1448_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_a_1444_);
v___x_1449_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1448_;
}
v_reusejp_1448_:
{
return v___x_1449_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___boxed(lean_object* v_goal_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_){
_start:
{
lean_object* v_res_1465_; 
v_res_1465_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0(v_goal_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
lean_dec(v___y_1463_);
lean_dec_ref(v___y_1462_);
lean_dec(v___y_1461_);
lean_dec_ref(v___y_1460_);
lean_dec(v___y_1459_);
lean_dec_ref(v___y_1458_);
lean_dec(v___y_1457_);
lean_dec_ref(v___y_1456_);
lean_dec(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object* v_goal_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_, lean_object* v_a_1474_, lean_object* v_a_1475_, lean_object* v_a_1476_, lean_object* v_a_1477_){
_start:
{
lean_object* v___f_1479_; lean_object* v___x_1480_; 
lean_inc(v_goal_1466_);
v___f_1479_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___lam__0___boxed), 13, 1);
lean_closure_set(v___f_1479_, 0, v_goal_1466_);
v___x_1480_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__2___redArg(v_goal_1466_, v___f_1479_, v_a_1467_, v_a_1468_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_, v_a_1473_, v_a_1474_, v_a_1475_, v_a_1476_, v_a_1477_);
return v___x_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl___boxed(lean_object* v_goal_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_, lean_object* v_a_1487_, lean_object* v_a_1488_, lean_object* v_a_1489_, lean_object* v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_){
_start:
{
lean_object* v_res_1494_; 
v_res_1494_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_goal_1481_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_, v_a_1486_, v_a_1487_, v_a_1488_, v_a_1489_, v_a_1490_, v_a_1491_, v_a_1492_);
lean_dec(v_a_1492_);
lean_dec_ref(v_a_1491_);
lean_dec(v_a_1490_);
lean_dec_ref(v_a_1489_);
lean_dec(v_a_1488_);
lean_dec_ref(v_a_1487_);
lean_dec(v_a_1486_);
lean_dec_ref(v_a_1485_);
lean_dec(v_a_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v_a_1482_);
return v_res_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1(lean_object* v_mvarId_1495_, lean_object* v_val_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_){
_start:
{
lean_object* v___x_1509_; 
v___x_1509_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___redArg(v_mvarId_1495_, v_val_1496_, v___y_1505_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1___boxed(lean_object* v_mvarId_1510_, lean_object* v_val_1511_, lean_object* v___y_1512_, lean_object* v___y_1513_, lean_object* v___y_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_){
_start:
{
lean_object* v_res_1524_; 
v_res_1524_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1(v_mvarId_1510_, v_val_1511_, v___y_1512_, v___y_1513_, v___y_1514_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_);
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
return v_res_1524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1(lean_object* v_00_u03b2_1525_, lean_object* v_x_1526_, lean_object* v_x_1527_, lean_object* v_x_1528_){
_start:
{
lean_object* v___x_1529_; 
v___x_1529_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1___redArg(v_x_1526_, v_x_1527_, v_x_1528_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1530_, lean_object* v_x_1531_, size_t v_x_1532_, size_t v_x_1533_, lean_object* v_x_1534_, lean_object* v_x_1535_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___redArg(v_x_1531_, v_x_1532_, v_x_1533_, v_x_1534_, v_x_1535_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1537_, lean_object* v_x_1538_, lean_object* v_x_1539_, lean_object* v_x_1540_, lean_object* v_x_1541_, lean_object* v_x_1542_){
_start:
{
size_t v_x_75883__boxed_1543_; size_t v_x_75884__boxed_1544_; lean_object* v_res_1545_; 
v_x_75883__boxed_1543_ = lean_unbox_usize(v_x_1539_);
lean_dec(v_x_1539_);
v_x_75884__boxed_1544_ = lean_unbox_usize(v_x_1540_);
lean_dec(v_x_1540_);
v_res_1545_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3(v_00_u03b2_1537_, v_x_1538_, v_x_75883__boxed_1543_, v_x_75884__boxed_1544_, v_x_1541_, v_x_1542_);
return v_res_1545_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1546_, lean_object* v_n_1547_, lean_object* v_k_1548_, lean_object* v_v_1549_){
_start:
{
lean_object* v___x_1550_; 
v___x_1550_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4___redArg(v_n_1547_, v_k_1548_, v_v_1549_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1551_, size_t v_depth_1552_, lean_object* v_keys_1553_, lean_object* v_vals_1554_, lean_object* v_heq_1555_, lean_object* v_i_1556_, lean_object* v_entries_1557_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_1552_, v_keys_1553_, v_vals_1554_, v_i_1556_, v_entries_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1559_, lean_object* v_depth_1560_, lean_object* v_keys_1561_, lean_object* v_vals_1562_, lean_object* v_heq_1563_, lean_object* v_i_1564_, lean_object* v_entries_1565_){
_start:
{
size_t v_depth_boxed_1566_; lean_object* v_res_1567_; 
v_depth_boxed_1566_ = lean_unbox_usize(v_depth_1560_);
lean_dec(v_depth_1560_);
v_res_1567_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_1559_, v_depth_boxed_1566_, v_keys_1561_, v_vals_1562_, v_heq_1563_, v_i_1564_, v_entries_1565_);
lean_dec_ref(v_vals_1562_);
lean_dec_ref(v_keys_1561_);
return v_res_1567_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1568_, lean_object* v_x_1569_, lean_object* v_x_1570_, lean_object* v_x_1571_, lean_object* v_x_1572_){
_start:
{
lean_object* v___x_1573_; 
v___x_1573_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1569_, v_x_1570_, v_x_1571_, v_x_1572_);
return v___x_1573_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Reduce(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Telescope(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Telescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Reduce(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_AlphaShareBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Intro(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Telescope(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Util(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Reduce(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_AlphaShareBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Intro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Telescope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Util(builtin);
}
#ifdef __cplusplus
}
#endif
