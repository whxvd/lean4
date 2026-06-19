// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Frontend
// Imports: public import Lean.Elab.Tactic.Do.VCGen.SuggestInvariant public import Lean.Elab.Tactic.Do.VCGen public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.Driver public import Lean.Meta.Sym.Simp.Attr public import Lean.Meta.Sym.Simp.ControlFlow public import Lean.Meta.Sym.Simp.EvalGround public import Lean.Meta.Sym.Simp.Forall public import Lean.Meta.Sym.Simp.Rewrite public import Lean.Meta.Sym.Simp.Simproc public import Lean.Elab.Tactic.Grind.Main public import Lean.Elab.Tactic.Grind.Basic import Lean.Meta.Sym.ProofInstInfo
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
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpArrowTelescope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_simpControl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Result_withContextDependent(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_dischargeNone___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_rewrite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_Theorems_insert(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Meta_Sym_Simp_evalGround___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_LocalContext_findFromUserName_x3f(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_realizeGlobalConstNoOverload(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Elab_getBetterRef(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_pp_macroStack;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_mkStr6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshTypeMVar(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTerm(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Expr_collectMVars(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Expr_mvar___override(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* l_Lean_Meta_Sym_mkProofInstInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkProofInstArgInfo_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutErrToSorryImp___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_MessageLog_add(lean_object*, lean_object*);
lean_object* l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(lean_object*);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
uint8_t l_Lean_MessageData_hasTag(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getTailPos_x3f(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
uint8_t l_Lean_instBEqMessageSeverity_beq(uint8_t, uint8_t);
extern lean_object* l_Lean_warningAsError;
uint8_t l_Lean_MessageData_hasSyntheticSorry(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_DiscrTree_empty(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getNumArgs(lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getSepArgs(lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_isErased(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
lean_object* l_String_Slice_toNat_x3f(lean_object*);
lean_object* l_Lean_Elab_Tactic_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mkDefaultParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_evalGrindTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_GrindTacticM_runAtGoal___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray3___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_mkArray2___redArg(lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_Tactic_appendConfig(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_erase(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecTheorems___redArg(lean_object*);
lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_SymM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getKind(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_resolveId_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_isLocalIdent_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getId(lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_mkSimpContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getPropHyps(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_tacticElabAttribute;
lean_object* l_Lean_Elab_Tactic_withMainContext___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_elabConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Do_mvcgen_warning;
lean_object* l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Grind_mkGoalCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_suggestInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_elabInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mvcgen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 186, 72, 71, 180, 239, 13, 70)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(1, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6(lean_object*);
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0;
static const lean_string_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "while expanding"};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1_value;
static const lean_ctor_object l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__1_value)}};
static const lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2 = (const lean_object*)&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2_value;
static lean_once_cell_t l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "with resulting expansion"};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__0_value)}};
static const lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpErase"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(216, 24, 229, 171, 59, 186, 144, 157)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(38, 215, 101, 250, 181, 108, 118, 102)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "simpStar"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(125, 38, 251, 225, 228, 173, 11, 37)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Could not resolve spec theorem `"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "SPred"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "entails_cons_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__4_value),LEAN_SCALAR_PTR_LITERAL(121, 192, 217, 126, 138, 217, 120, 234)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "entails_nil_pure_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__6_value),LEAN_SCALAR_PTR_LITERAL(77, 71, 95, 197, 218, 24, 130, 149)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "entails_nil_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__8_value),LEAN_SCALAR_PTR_LITERAL(209, 42, 38, 114, 220, 245, 181, 209)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "apply_pure_cons_entails_l"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__10_value),LEAN_SCALAR_PTR_LITERAL(88, 114, 58, 244, 248, 249, 100, 189)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "apply_pure_cons_entails_r"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__12_value),LEAN_SCALAR_PTR_LITERAL(36, 125, 0, 206, 159, 122, 18, 62)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "down_pure_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__14_value),LEAN_SCALAR_PTR_LITERAL(242, 230, 134, 253, 236, 36, 160, 34)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "pure_elim'"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__16_value),LEAN_SCALAR_PTR_LITERAL(146, 100, 201, 175, 219, 207, 33, 227)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "pure_intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 48, 62, 20, 172, 253, 5, 185)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__18_value),LEAN_SCALAR_PTR_LITERAL(212, 52, 84, 252, 44, 75, 13, 225)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "PostCond"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "entails"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "rfl"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(32, 111, 255, 27, 103, 9, 244, 9)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22_value),LEAN_SCALAR_PTR_LITERAL(106, 198, 3, 218, 176, 38, 40, 252)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__20_value),LEAN_SCALAR_PTR_LITERAL(124, 92, 27, 8, 188, 224, 25, 47)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(32, 111, 255, 27, 103, 9, 244, 9)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__24_value),LEAN_SCALAR_PTR_LITERAL(152, 24, 212, 180, 51, 184, 242, 134)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ExceptConds"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__22_value),LEAN_SCALAR_PTR_LITERAL(114, 214, 92, 55, 221, 19, 3, 63)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "pure"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__21_value),LEAN_SCALAR_PTR_LITERAL(72, 205, 41, 157, 129, 142, 231, 99)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value_aux_3),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__28_value),LEAN_SCALAR_PTR_LITERAL(177, 127, 46, 135, 84, 167, 103, 90)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "entails_false"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__30_value),LEAN_SCALAR_PTR_LITERAL(130, 197, 58, 234, 180, 192, 166, 113)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "entails_true"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__26_value),LEAN_SCALAR_PTR_LITERAL(244, 224, 84, 66, 133, 22, 35, 247)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__32_value),LEAN_SCALAR_PTR_LITERAL(246, 50, 98, 188, 214, 243, 38, 248)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Triple"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "of_entails_wp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__35_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 110, 135, 113, 195, 226, 80, 101)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__34_value),LEAN_SCALAR_PTR_LITERAL(31, 48, 165, 224, 255, 99, 7, 166)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__35_value),LEAN_SCALAR_PTR_LITERAL(191, 31, 210, 183, 145, 91, 10, 79)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__37 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__37_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__38 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__38_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__39_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__37_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__39_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__38_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__39 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__39_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__40_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__40;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__42_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__43_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__45 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__45_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__45_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__47 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__47_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__47_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__48 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__48_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__49 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__49_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__49_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 236, 192, 59, 252, 178, 140)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "posConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__51 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__51_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__51_value),LEAN_SCALAR_PTR_LITERAL(232, 137, 50, 117, 152, 182, 155, 132)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__53 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__53_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "unfoldPartialApp"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__54 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__54_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__55_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__55;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__54_value),LEAN_SCALAR_PTR_LITERAL(49, 203, 120, 209, 69, 128, 204, 215)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__56 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__56_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "negConfigItem"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__57 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__57_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__57_value),LEAN_SCALAR_PTR_LITERAL(196, 29, 29, 161, 247, 206, 181, 221)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__59 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__59_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zeta"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__60 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__60_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__61;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__60_value),LEAN_SCALAR_PTR_LITERAL(56, 247, 87, 81, 188, 35, 250, 148)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__62 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__62_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__64 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__64_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__65 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__65_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__66 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__66_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_SpecAttr_getSpecSimpTheorems___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__67 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__67_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__68;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__69_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__69;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__70;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__71;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__72_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__72;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__73_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__73;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "unsolvedGoals"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "synthPlaceholder"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "inductionWithNoAlts"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "_namedError"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5_value;
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6_value;
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "mvcgen': the `leave` config option is currently ignored."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_simp___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_Simp_dischargeNone___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed, .m_arity = 12, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value;
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed, .m_arity = 12, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__0_value)} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 153, .m_capacity = 153, .m_length = 148, .m_data = "named Sym.simp variants are not yet supported in `mvcgen'`; use `mvcgen' simplifying_assumptions [thm₁, thm₂, ...]` with the default variant instead"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0 = (const lean_object*)&l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Could not parse invariant label; expected `inv<n>`."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__0_value)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Duplicate invariant alternative for `inv"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Expected `invariantDotAlt` or `invariantCaseAlt`."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value_aux_2),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "Alternation between labelled and bulleted invariants is not supported."};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value;
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value_aux_0),((lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "invariantAlts"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 41, 254, 250, 50, 69, 99, 10)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invariantsKW"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__4_value),LEAN_SCALAR_PTR_LITERAL(113, 87, 251, 76, 123, 116, 93, 232)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "token"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "invariants\? "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__6_value),LEAN_SCALAR_PTR_LITERAL(89, 149, 26, 37, 31, 104, 89, 130)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value_aux_0),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__7_value),LEAN_SCALAR_PTR_LITERAL(241, 40, 134, 186, 103, 193, 43, 220)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Invariant alternative `inv"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "` does not match any invariant goal."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1;
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 1, 0, 1, 0)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 145, .m_capacity = 145, .m_length = 144, .m_data = "The `mvcgen'` tactic is an experimental drop-in replacement for `mvcgen` that will eventually replace it. Avoid using it in production projects."};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__1_value)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "mvcgen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(230, 164, 188, 44, 114, 250, 122, 123)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__4_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__5_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__6_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(133, 58, 227, 168, 195, 28, 19, 75)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__7_value),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(89, 242, 56, 182, 153, 42, 114, 203)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__8_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(132, 236, 244, 1, 128, 181, 211, 156)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "VCGen"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__10_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__11_value),LEAN_SCALAR_PTR_LITERAL(175, 167, 22, 210, 240, 170, 245, 185)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Frontend"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__12_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(18, 209, 67, 183, 120, 233, 44, 242)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__14_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(147, 197, 196, 233, 158, 77, 49, 202)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__15_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 108, 164, 213, 221, 37, 180, 229)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__16_value),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(12, 84, 138, 219, 247, 214, 26, 16)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__17_value),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(73, 168, 135, 192, 193, 202, 29, 136)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__18_value),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(109, 141, 169, 199, 171, 247, 59, 245)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__19_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(64, 59, 250, 17, 189, 47, 163, 133)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value;
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "evalSymMVCGen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__20_value),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__21_value),LEAN_SCALAR_PTR_LITERAL(19, 92, 242, 121, 57, 23, 92, 131)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 41, .m_data = "`mvcgen'` step inside `sym => …` blocks. "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind_<;>_"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "<;>"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "simplifying_assumptions"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "until"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "internalize"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4_value),LEAN_SCALAR_PTR_LITERAL(46, 126, 89, 140, 218, 11, 77, 16)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___boxed(lean_object**);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(172, 206, 51, 98, 251, 95, 173, 15)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "elabMVCGen'"};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_0),((lean_object*)&l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(161, 230, 229, 85, 182, 144, 182, 176)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__2_value),LEAN_SCALAR_PTR_LITERAL(101, 141, 64, 183, 187, 157, 254, 157)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_4 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(232, 135, 166, 206, 84, 210, 155, 104)}};
static const lean_ctor_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value_aux_4),((lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(207, 201, 16, 251, 167, 255, 54, 189)}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 389, .m_capacity = 389, .m_length = 386, .m_data = "Tactic-level `mvcgen'`. Reuses the grind-mode implementation by re-quoting the\ninput as `Grind.mvcgen' …` and running it inside a `GrindTacticM` context built\nwithout `withProtectedMCtx`, so leftover `Grind.Goal`s flow back as the new tactic\ngoals. The optional `with $g:grind` clause runs as `<;> $g` and lets the user-supplied\ngrind step share an internalised E-graph with `mvcgen'`. "};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(lean_object* v_x_7_, lean_object* v_goals_8_, lean_object* v_a_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_, lean_object* v_a_14_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_16_ = lean_st_mk_ref(v_goals_8_);
v___x_17_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___closed__2));
lean_inc(v_a_14_);
lean_inc_ref(v_a_13_);
lean_inc(v_a_12_);
lean_inc_ref(v_a_11_);
lean_inc(v_a_10_);
lean_inc_ref(v_a_9_);
lean_inc(v___x_16_);
v___x_18_ = lean_apply_9(v_x_7_, v___x_17_, v___x_16_, v_a_9_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, v_a_14_, lean_box(0));
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_21_; uint8_t v_isShared_22_; uint8_t v_isSharedCheck_27_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
v_isSharedCheck_27_ = !lean_is_exclusive(v___x_18_);
if (v_isSharedCheck_27_ == 0)
{
v___x_21_ = v___x_18_;
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
else
{
lean_inc(v_a_19_);
lean_dec(v___x_18_);
v___x_21_ = lean_box(0);
v_isShared_22_ = v_isSharedCheck_27_;
goto v_resetjp_20_;
}
v_resetjp_20_:
{
lean_object* v___x_23_; lean_object* v___x_25_; 
v___x_23_ = lean_st_ref_get(v___x_16_);
lean_dec(v___x_16_);
lean_dec(v___x_23_);
if (v_isShared_22_ == 0)
{
v___x_25_ = v___x_21_;
goto v_reusejp_24_;
}
else
{
lean_object* v_reuseFailAlloc_26_; 
v_reuseFailAlloc_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_26_, 0, v_a_19_);
v___x_25_ = v_reuseFailAlloc_26_;
goto v_reusejp_24_;
}
v_reusejp_24_:
{
return v___x_25_;
}
}
}
else
{
lean_dec(v___x_16_);
return v___x_18_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg___boxed(lean_object* v_x_28_, lean_object* v_goals_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v_x_28_, v_goals_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_, v_a_34_, v_a_35_);
lean_dec(v_a_35_);
lean_dec_ref(v_a_34_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
lean_dec(v_a_31_);
lean_dec_ref(v_a_30_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(lean_object* v_00_u03b1_38_, lean_object* v_x_39_, lean_object* v_goals_40_, lean_object* v_a_41_, lean_object* v_a_42_, lean_object* v_a_43_, lean_object* v_a_44_, lean_object* v_a_45_, lean_object* v_a_46_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v_x_39_, v_goals_40_, v_a_41_, v_a_42_, v_a_43_, v_a_44_, v_a_45_, v_a_46_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___boxed(lean_object* v_00_u03b1_49_, lean_object* v_x_50_, lean_object* v_goals_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM(v_00_u03b1_49_, v_x_50_, v_goals_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_, v_a_57_);
lean_dec(v_a_57_);
lean_dec_ref(v_a_56_);
lean_dec(v_a_55_);
lean_dec_ref(v_a_54_);
lean_dec(v_a_53_);
lean_dec_ref(v_a_52_);
return v_res_59_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_60_ = lean_box(0);
v___x_61_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_62_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_62_, 0, v___x_61_);
lean_ctor_set(v___x_62_, 1, v___x_60_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg(){
_start:
{
lean_object* v___x_64_; lean_object* v___x_65_; 
v___x_64_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0);
v___x_65_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_65_, 0, v___x_64_);
return v___x_65_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___boxed(lean_object* v___y_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0(lean_object* v_00_u03b1_68_, lean_object* v___y_69_, lean_object* v___y_70_, lean_object* v___y_71_, lean_object* v___y_72_, lean_object* v___y_73_, lean_object* v___y_74_){
_start:
{
lean_object* v___x_76_; 
v___x_76_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___boxed(lean_object* v_00_u03b1_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_, lean_object* v___y_81_, lean_object* v___y_82_, lean_object* v___y_83_, lean_object* v___y_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0(v_00_u03b1_77_, v___y_78_, v___y_79_, v___y_80_, v___y_81_, v___y_82_, v___y_83_);
lean_dec(v___y_83_);
lean_dec_ref(v___y_82_);
lean_dec(v___y_81_);
lean_dec_ref(v___y_80_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
return v_res_85_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0(void){
_start:
{
lean_object* v___x_86_; 
v___x_86_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_86_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1(void){
_start:
{
lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_87_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__0);
v___x_88_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_88_, 0, v___x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5(lean_object* v_00_u03b2_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5___closed__1);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0(void){
_start:
{
lean_object* v___x_91_; 
v___x_91_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_91_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1(void){
_start:
{
lean_object* v___x_92_; lean_object* v___x_93_; 
v___x_92_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__0);
v___x_93_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6(lean_object* v_00_u03b2_94_){
_start:
{
lean_object* v___x_95_; 
v___x_95_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6___closed__1);
return v___x_95_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; 
v___x_96_ = lean_box(1);
v___x_97_ = l_Lean_MessageData_ofFormat(v___x_96_);
return v___x_97_;
}
}
static lean_object* _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; 
v___x_101_ = ((lean_object*)(l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__2));
v___x_102_ = l_Lean_MessageData_ofFormat(v___x_101_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6(lean_object* v_x_103_, lean_object* v_x_104_){
_start:
{
if (lean_obj_tag(v_x_104_) == 0)
{
return v_x_103_;
}
else
{
lean_object* v_head_105_; lean_object* v_tail_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_128_; 
v_head_105_ = lean_ctor_get(v_x_104_, 0);
v_tail_106_ = lean_ctor_get(v_x_104_, 1);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_104_);
if (v_isSharedCheck_128_ == 0)
{
v___x_108_ = v_x_104_;
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_tail_106_);
lean_inc(v_head_105_);
lean_dec(v_x_104_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v_before_110_; lean_object* v___x_112_; uint8_t v_isShared_113_; uint8_t v_isSharedCheck_126_; 
v_before_110_ = lean_ctor_get(v_head_105_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v_head_105_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v_head_105_, 1);
lean_dec(v_unused_127_);
v___x_112_ = v_head_105_;
v_isShared_113_ = v_isSharedCheck_126_;
goto v_resetjp_111_;
}
else
{
lean_inc(v_before_110_);
lean_dec(v_head_105_);
v___x_112_ = lean_box(0);
v_isShared_113_ = v_isSharedCheck_126_;
goto v_resetjp_111_;
}
v_resetjp_111_:
{
lean_object* v___x_114_; lean_object* v___x_116_; 
v___x_114_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0);
if (v_isShared_113_ == 0)
{
lean_ctor_set_tag(v___x_112_, 7);
lean_ctor_set(v___x_112_, 1, v___x_114_);
lean_ctor_set(v___x_112_, 0, v_x_103_);
v___x_116_ = v___x_112_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_x_103_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___x_114_);
v___x_116_ = v_reuseFailAlloc_125_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_117_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__3);
if (v_isShared_109_ == 0)
{
lean_ctor_set_tag(v___x_108_, 7);
lean_ctor_set(v___x_108_, 1, v___x_117_);
lean_ctor_set(v___x_108_, 0, v___x_116_);
v___x_119_ = v___x_108_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_116_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___x_117_);
v___x_119_ = v_reuseFailAlloc_124_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_120_ = l_Lean_MessageData_ofSyntax(v_before_110_);
v___x_121_ = l_Lean_indentD(v___x_120_);
v___x_122_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
v_x_103_ = v___x_122_;
v_x_104_ = v_tail_106_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(lean_object* v_opts_129_, lean_object* v_opt_130_){
_start:
{
lean_object* v_name_131_; lean_object* v_defValue_132_; lean_object* v_map_133_; lean_object* v___x_134_; 
v_name_131_ = lean_ctor_get(v_opt_130_, 0);
v_defValue_132_ = lean_ctor_get(v_opt_130_, 1);
v_map_133_ = lean_ctor_get(v_opts_129_, 0);
v___x_134_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_133_, v_name_131_);
if (lean_obj_tag(v___x_134_) == 0)
{
uint8_t v___x_135_; 
v___x_135_ = lean_unbox(v_defValue_132_);
return v___x_135_;
}
else
{
lean_object* v_val_136_; 
v_val_136_ = lean_ctor_get(v___x_134_, 0);
lean_inc(v_val_136_);
lean_dec_ref_known(v___x_134_, 1);
if (lean_obj_tag(v_val_136_) == 1)
{
uint8_t v_v_137_; 
v_v_137_ = lean_ctor_get_uint8(v_val_136_, 0);
lean_dec_ref_known(v_val_136_, 0);
return v_v_137_;
}
else
{
uint8_t v___x_138_; 
lean_dec(v_val_136_);
v___x_138_ = lean_unbox(v_defValue_132_);
return v___x_138_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5___boxed(lean_object* v_opts_139_, lean_object* v_opt_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_opts_139_, v_opt_140_);
lean_dec_ref(v_opt_140_);
lean_dec_ref(v_opts_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
static lean_object* _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_146_; lean_object* v___x_147_; 
v___x_146_ = ((lean_object*)(l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__1));
v___x_147_ = l_Lean_MessageData_ofFormat(v___x_146_);
return v___x_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(lean_object* v_msgData_148_, lean_object* v_macroStack_149_, lean_object* v___y_150_){
_start:
{
lean_object* v_options_152_; lean_object* v___x_153_; uint8_t v___x_154_; 
v_options_152_ = lean_ctor_get(v___y_150_, 2);
v___x_153_ = l_Lean_Elab_pp_macroStack;
v___x_154_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_152_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
lean_dec(v_macroStack_149_);
v___x_155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_155_, 0, v_msgData_148_);
return v___x_155_;
}
else
{
if (lean_obj_tag(v_macroStack_149_) == 0)
{
lean_object* v___x_156_; 
v___x_156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_156_, 0, v_msgData_148_);
return v___x_156_;
}
else
{
lean_object* v_head_157_; lean_object* v_after_158_; lean_object* v___x_160_; uint8_t v_isShared_161_; uint8_t v_isSharedCheck_173_; 
v_head_157_ = lean_ctor_get(v_macroStack_149_, 0);
lean_inc(v_head_157_);
v_after_158_ = lean_ctor_get(v_head_157_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_head_157_);
if (v_isSharedCheck_173_ == 0)
{
lean_object* v_unused_174_; 
v_unused_174_ = lean_ctor_get(v_head_157_, 0);
lean_dec(v_unused_174_);
v___x_160_ = v_head_157_;
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
else
{
lean_inc(v_after_158_);
lean_dec(v_head_157_);
v___x_160_ = lean_box(0);
v_isShared_161_ = v_isSharedCheck_173_;
goto v_resetjp_159_;
}
v_resetjp_159_:
{
lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_162_ = lean_obj_once(&l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0, &l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0_once, _init_l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6___closed__0);
if (v_isShared_161_ == 0)
{
lean_ctor_set_tag(v___x_160_, 7);
lean_ctor_set(v___x_160_, 1, v___x_162_);
lean_ctor_set(v___x_160_, 0, v_msgData_148_);
v___x_164_ = v___x_160_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_msgData_148_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v___x_162_);
v___x_164_ = v_reuseFailAlloc_172_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v_msgData_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_165_ = lean_obj_once(&l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2, &l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2_once, _init_l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___closed__2);
v___x_166_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_166_, 0, v___x_164_);
lean_ctor_set(v___x_166_, 1, v___x_165_);
v___x_167_ = l_Lean_MessageData_ofSyntax(v_after_158_);
v___x_168_ = l_Lean_indentD(v___x_167_);
v_msgData_169_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_msgData_169_, 0, v___x_166_);
lean_ctor_set(v_msgData_169_, 1, v___x_168_);
v___x_170_ = l_List_foldl___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__6(v_msgData_169_, v_macroStack_149_);
v___x_171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
return v___x_171_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg___boxed(lean_object* v_msgData_175_, lean_object* v_macroStack_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(v_msgData_175_, v_macroStack_176_, v___y_177_);
lean_dec_ref(v___y_177_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(lean_object* v_msgData_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v___x_186_; lean_object* v_env_187_; lean_object* v___x_188_; lean_object* v_mctx_189_; lean_object* v_lctx_190_; lean_object* v_options_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_186_ = lean_st_ref_get(v___y_184_);
v_env_187_ = lean_ctor_get(v___x_186_, 0);
lean_inc_ref(v_env_187_);
lean_dec(v___x_186_);
v___x_188_ = lean_st_ref_get(v___y_182_);
v_mctx_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc_ref(v_mctx_189_);
lean_dec(v___x_188_);
v_lctx_190_ = lean_ctor_get(v___y_181_, 2);
v_options_191_ = lean_ctor_get(v___y_183_, 2);
lean_inc_ref(v_options_191_);
lean_inc_ref(v_lctx_190_);
v___x_192_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_192_, 0, v_env_187_);
lean_ctor_set(v___x_192_, 1, v_mctx_189_);
lean_ctor_set(v___x_192_, 2, v_lctx_190_);
lean_ctor_set(v___x_192_, 3, v_options_191_);
v___x_193_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
lean_ctor_set(v___x_193_, 1, v_msgData_180_);
v___x_194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_194_, 0, v___x_193_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1___boxed(lean_object* v_msgData_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_){
_start:
{
lean_object* v_res_201_; 
v_res_201_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v_msgData_195_, v___y_196_, v___y_197_, v___y_198_, v___y_199_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v___y_196_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(lean_object* v_msg_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_ref_210_; lean_object* v___x_211_; lean_object* v_a_212_; lean_object* v_macroStack_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v_ref_210_ = lean_ctor_get(v___y_207_, 5);
v___x_211_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v_msg_202_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref(v___x_211_);
v_macroStack_213_ = lean_ctor_get(v___y_203_, 1);
v___x_214_ = l_Lean_Elab_getBetterRef(v_ref_210_, v_macroStack_213_);
lean_inc(v_macroStack_213_);
v___x_215_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(v_a_212_, v_macroStack_213_, v___y_207_);
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v___x_214_);
lean_ctor_set(v___x_220_, 1, v_a_216_);
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 1);
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg___boxed(lean_object* v_msg_225_, lean_object* v___y_226_, lean_object* v___y_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v_msg_225_, v___y_226_, v___y_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec(v___y_227_);
lean_dec_ref(v___y_226_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(lean_object* v_ref_234_, lean_object* v_msg_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_){
_start:
{
lean_object* v_fileName_243_; lean_object* v_fileMap_244_; lean_object* v_options_245_; lean_object* v_currRecDepth_246_; lean_object* v_maxRecDepth_247_; lean_object* v_ref_248_; lean_object* v_currNamespace_249_; lean_object* v_openDecls_250_; lean_object* v_initHeartbeats_251_; lean_object* v_maxHeartbeats_252_; lean_object* v_quotContext_253_; lean_object* v_currMacroScope_254_; uint8_t v_diag_255_; lean_object* v_cancelTk_x3f_256_; uint8_t v_suppressElabErrors_257_; lean_object* v_inheritedTraceOptions_258_; lean_object* v_ref_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_fileName_243_ = lean_ctor_get(v___y_240_, 0);
v_fileMap_244_ = lean_ctor_get(v___y_240_, 1);
v_options_245_ = lean_ctor_get(v___y_240_, 2);
v_currRecDepth_246_ = lean_ctor_get(v___y_240_, 3);
v_maxRecDepth_247_ = lean_ctor_get(v___y_240_, 4);
v_ref_248_ = lean_ctor_get(v___y_240_, 5);
v_currNamespace_249_ = lean_ctor_get(v___y_240_, 6);
v_openDecls_250_ = lean_ctor_get(v___y_240_, 7);
v_initHeartbeats_251_ = lean_ctor_get(v___y_240_, 8);
v_maxHeartbeats_252_ = lean_ctor_get(v___y_240_, 9);
v_quotContext_253_ = lean_ctor_get(v___y_240_, 10);
v_currMacroScope_254_ = lean_ctor_get(v___y_240_, 11);
v_diag_255_ = lean_ctor_get_uint8(v___y_240_, sizeof(void*)*14);
v_cancelTk_x3f_256_ = lean_ctor_get(v___y_240_, 12);
v_suppressElabErrors_257_ = lean_ctor_get_uint8(v___y_240_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_258_ = lean_ctor_get(v___y_240_, 13);
v_ref_259_ = l_Lean_replaceRef(v_ref_234_, v_ref_248_);
lean_inc_ref(v_inheritedTraceOptions_258_);
lean_inc(v_cancelTk_x3f_256_);
lean_inc(v_currMacroScope_254_);
lean_inc(v_quotContext_253_);
lean_inc(v_maxHeartbeats_252_);
lean_inc(v_initHeartbeats_251_);
lean_inc(v_openDecls_250_);
lean_inc(v_currNamespace_249_);
lean_inc(v_maxRecDepth_247_);
lean_inc(v_currRecDepth_246_);
lean_inc_ref(v_options_245_);
lean_inc_ref(v_fileMap_244_);
lean_inc_ref(v_fileName_243_);
v___x_260_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_260_, 0, v_fileName_243_);
lean_ctor_set(v___x_260_, 1, v_fileMap_244_);
lean_ctor_set(v___x_260_, 2, v_options_245_);
lean_ctor_set(v___x_260_, 3, v_currRecDepth_246_);
lean_ctor_set(v___x_260_, 4, v_maxRecDepth_247_);
lean_ctor_set(v___x_260_, 5, v_ref_259_);
lean_ctor_set(v___x_260_, 6, v_currNamespace_249_);
lean_ctor_set(v___x_260_, 7, v_openDecls_250_);
lean_ctor_set(v___x_260_, 8, v_initHeartbeats_251_);
lean_ctor_set(v___x_260_, 9, v_maxHeartbeats_252_);
lean_ctor_set(v___x_260_, 10, v_quotContext_253_);
lean_ctor_set(v___x_260_, 11, v_currMacroScope_254_);
lean_ctor_set(v___x_260_, 12, v_cancelTk_x3f_256_);
lean_ctor_set(v___x_260_, 13, v_inheritedTraceOptions_258_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*14, v_diag_255_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*14 + 1, v_suppressElabErrors_257_);
v___x_261_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v_msg_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, v___x_260_, v___y_241_);
lean_dec_ref_known(v___x_260_, 14);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg___boxed(lean_object* v_ref_262_, lean_object* v_msg_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_262_, v_msg_263_, v___y_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_, v___y_269_);
lean_dec(v___y_269_);
lean_dec_ref(v___y_268_);
lean_dec(v___y_267_);
lean_dec_ref(v___y_266_);
lean_dec(v___y_265_);
lean_dec_ref(v___y_264_);
lean_dec(v_ref_262_);
return v_res_271_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0(void){
_start:
{
lean_object* v___x_272_; 
v___x_272_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_272_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__0);
v___x_274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_275_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1);
v___x_276_ = lean_unsigned_to_nat(0u);
v___x_277_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___x_276_);
lean_ctor_set(v___x_277_, 2, v___x_276_);
lean_ctor_set(v___x_277_, 3, v___x_276_);
lean_ctor_set(v___x_277_, 4, v___x_275_);
lean_ctor_set(v___x_277_, 5, v___x_275_);
lean_ctor_set(v___x_277_, 6, v___x_275_);
lean_ctor_set(v___x_277_, 7, v___x_275_);
lean_ctor_set(v___x_277_, 8, v___x_275_);
lean_ctor_set(v___x_277_, 9, v___x_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_278_ = lean_unsigned_to_nat(32u);
v___x_279_ = lean_mk_empty_array_with_capacity(v___x_278_);
v___x_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
return v___x_280_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4(void){
_start:
{
size_t v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_281_ = ((size_t)5ULL);
v___x_282_ = lean_unsigned_to_nat(0u);
v___x_283_ = lean_unsigned_to_nat(32u);
v___x_284_ = lean_mk_empty_array_with_capacity(v___x_283_);
v___x_285_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__3);
v___x_286_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_286_, 0, v___x_285_);
lean_ctor_set(v___x_286_, 1, v___x_284_);
lean_ctor_set(v___x_286_, 2, v___x_282_);
lean_ctor_set(v___x_286_, 3, v___x_282_);
lean_ctor_set_usize(v___x_286_, 4, v___x_281_);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_287_ = lean_box(1);
v___x_288_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__4);
v___x_289_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__1);
v___x_290_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
lean_ctor_set(v___x_290_, 1, v___x_288_);
lean_ctor_set(v___x_290_, 2, v___x_287_);
return v___x_290_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7(void){
_start:
{
lean_object* v___x_292_; lean_object* v___x_293_; 
v___x_292_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__6));
v___x_293_ = l_Lean_stringToMessageData(v___x_292_);
return v___x_293_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9(void){
_start:
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__8));
v___x_296_ = l_Lean_stringToMessageData(v___x_295_);
return v___x_296_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__10));
v___x_299_ = l_Lean_stringToMessageData(v___x_298_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__12));
v___x_302_ = l_Lean_stringToMessageData(v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__16));
v___x_308_ = l_Lean_stringToMessageData(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; 
v___x_310_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__18));
v___x_311_ = l_Lean_stringToMessageData(v___x_310_);
return v___x_311_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(lean_object* v_msg_312_, lean_object* v_declHint_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_316_; lean_object* v_env_317_; uint8_t v___x_318_; 
v___x_316_ = lean_st_ref_get(v___y_314_);
v_env_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc_ref(v_env_317_);
lean_dec(v___x_316_);
v___x_318_ = l_Lean_Name_isAnonymous(v_declHint_313_);
if (v___x_318_ == 0)
{
uint8_t v_isExporting_319_; 
v_isExporting_319_ = lean_ctor_get_uint8(v_env_317_, sizeof(void*)*8);
if (v_isExporting_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_320_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_320_, 0, v_msg_312_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
lean_inc_ref(v_env_317_);
v___x_321_ = l_Lean_Environment_setExporting(v_env_317_, v___x_318_);
lean_inc(v_declHint_313_);
lean_inc_ref(v___x_321_);
v___x_322_ = l_Lean_Environment_contains(v___x_321_, v_declHint_313_, v_isExporting_319_);
if (v___x_322_ == 0)
{
lean_object* v___x_323_; 
lean_dec_ref(v___x_321_);
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_323_, 0, v_msg_312_);
return v___x_323_;
}
else
{
lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v_c_329_; lean_object* v___x_330_; 
v___x_324_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__2);
v___x_325_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__5);
v___x_326_ = l_Lean_Options_empty;
v___x_327_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_327_, 0, v___x_321_);
lean_ctor_set(v___x_327_, 1, v___x_324_);
lean_ctor_set(v___x_327_, 2, v___x_325_);
lean_ctor_set(v___x_327_, 3, v___x_326_);
lean_inc(v_declHint_313_);
v___x_328_ = l_Lean_MessageData_ofConstName(v_declHint_313_, v___x_318_);
v_c_329_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_329_, 0, v___x_327_);
lean_ctor_set(v_c_329_, 1, v___x_328_);
v___x_330_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_317_, v_declHint_313_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; 
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_331_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7);
v___x_332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_332_, 0, v___x_331_);
lean_ctor_set(v___x_332_, 1, v_c_329_);
v___x_333_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__9);
v___x_334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
v___x_335_ = l_Lean_MessageData_note(v___x_334_);
v___x_336_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_336_, 0, v_msg_312_);
lean_ctor_set(v___x_336_, 1, v___x_335_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_336_);
return v___x_337_;
}
else
{
lean_object* v_val_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_373_; 
v_val_338_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_373_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_373_ == 0)
{
v___x_340_ = v___x_330_;
v_isShared_341_ = v_isSharedCheck_373_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_val_338_);
lean_dec(v___x_330_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_373_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v_mod_345_; uint8_t v___x_346_; 
v___x_342_ = lean_box(0);
v___x_343_ = l_Lean_Environment_header(v_env_317_);
lean_dec_ref(v_env_317_);
v___x_344_ = l_Lean_EnvironmentHeader_moduleNames(v___x_343_);
v_mod_345_ = lean_array_get(v___x_342_, v___x_344_, v_val_338_);
lean_dec(v_val_338_);
lean_dec_ref(v___x_344_);
v___x_346_ = l_Lean_isPrivateName(v_declHint_313_);
lean_dec(v_declHint_313_);
if (v___x_346_ == 0)
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_358_; 
v___x_347_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__11);
v___x_348_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v_c_329_);
v___x_349_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__13);
v___x_350_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_350_, 0, v___x_348_);
lean_ctor_set(v___x_350_, 1, v___x_349_);
v___x_351_ = l_Lean_MessageData_ofName(v_mod_345_);
v___x_352_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_352_, 0, v___x_350_);
lean_ctor_set(v___x_352_, 1, v___x_351_);
v___x_353_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__15);
v___x_354_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_352_);
lean_ctor_set(v___x_354_, 1, v___x_353_);
v___x_355_ = l_Lean_MessageData_note(v___x_354_);
v___x_356_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_356_, 0, v_msg_312_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 0);
lean_ctor_set(v___x_340_, 0, v___x_356_);
v___x_358_ = v___x_340_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_359_; 
v_reuseFailAlloc_359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_359_, 0, v___x_356_);
v___x_358_ = v_reuseFailAlloc_359_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
return v___x_358_;
}
}
else
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_360_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__7);
v___x_361_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_361_, 0, v___x_360_);
lean_ctor_set(v___x_361_, 1, v_c_329_);
v___x_362_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__17);
v___x_363_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_361_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = l_Lean_MessageData_ofName(v_mod_345_);
v___x_365_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_365_, 0, v___x_363_);
lean_ctor_set(v___x_365_, 1, v___x_364_);
v___x_366_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__19);
v___x_367_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_367_, 0, v___x_365_);
lean_ctor_set(v___x_367_, 1, v___x_366_);
v___x_368_ = l_Lean_MessageData_note(v___x_367_);
v___x_369_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_369_, 0, v_msg_312_);
lean_ctor_set(v___x_369_, 1, v___x_368_);
if (v_isShared_341_ == 0)
{
lean_ctor_set_tag(v___x_340_, 0);
lean_ctor_set(v___x_340_, 0, v___x_369_);
v___x_371_ = v___x_340_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_374_; 
lean_dec_ref(v_env_317_);
lean_dec(v_declHint_313_);
v___x_374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_374_, 0, v_msg_312_);
return v___x_374_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___boxed(lean_object* v_msg_375_, lean_object* v_declHint_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_375_, v_declHint_376_, v___y_377_);
lean_dec(v___y_377_);
return v_res_379_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(lean_object* v_msg_380_, lean_object* v_declHint_381_, lean_object* v___y_382_, lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v___x_389_; lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_399_; 
v___x_389_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_380_, v_declHint_381_, v___y_387_);
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_399_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_399_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_399_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_397_; 
v___x_394_ = l_Lean_unknownIdentifierMessageTag;
v___x_395_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v_a_390_);
if (v_isShared_393_ == 0)
{
lean_ctor_set(v___x_392_, 0, v___x_395_);
v___x_397_ = v___x_392_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_398_; 
v_reuseFailAlloc_398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_398_, 0, v___x_395_);
v___x_397_ = v_reuseFailAlloc_398_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
return v___x_397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12___boxed(lean_object* v_msg_400_, lean_object* v_declHint_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(v_msg_400_, v_declHint_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_, v___y_407_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v___y_405_);
lean_dec_ref(v___y_404_);
lean_dec(v___y_403_);
lean_dec_ref(v___y_402_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(lean_object* v_ref_410_, lean_object* v_msg_411_, lean_object* v_declHint_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
lean_object* v___x_420_; lean_object* v_a_421_; lean_object* v___x_422_; 
v___x_420_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12(v_msg_411_, v_declHint_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
v_a_421_ = lean_ctor_get(v___x_420_, 0);
lean_inc(v_a_421_);
lean_dec_ref(v___x_420_);
v___x_422_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_410_, v_a_421_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
return v___x_422_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg___boxed(lean_object* v_ref_423_, lean_object* v_msg_424_, lean_object* v_declHint_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_){
_start:
{
lean_object* v_res_433_; 
v_res_433_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(v_ref_423_, v_msg_424_, v_declHint_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_);
lean_dec(v___y_431_);
lean_dec_ref(v___y_430_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
lean_dec(v___y_427_);
lean_dec_ref(v___y_426_);
lean_dec(v_ref_423_);
return v_res_433_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_435_; lean_object* v___x_436_; 
v___x_435_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__0));
v___x_436_ = l_Lean_stringToMessageData(v___x_435_);
return v___x_436_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_438_; lean_object* v___x_439_; 
v___x_438_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__2));
v___x_439_ = l_Lean_stringToMessageData(v___x_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(lean_object* v_ref_440_, lean_object* v_constName_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v___x_449_; uint8_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_449_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__1);
v___x_450_ = 0;
lean_inc(v_constName_441_);
v___x_451_ = l_Lean_MessageData_ofConstName(v_constName_441_, v___x_450_);
v___x_452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_452_, 0, v___x_449_);
lean_ctor_set(v___x_452_, 1, v___x_451_);
v___x_453_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3);
v___x_454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_454_, 0, v___x_452_);
lean_ctor_set(v___x_454_, 1, v___x_453_);
v___x_455_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(v_ref_440_, v___x_454_, v_constName_441_, v___y_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___boxed(lean_object* v_ref_456_, lean_object* v_constName_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_){
_start:
{
lean_object* v_res_465_; 
v_res_465_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(v_ref_456_, v_constName_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_);
lean_dec(v___y_463_);
lean_dec_ref(v___y_462_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v_ref_456_);
return v_res_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(lean_object* v_constName_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_){
_start:
{
lean_object* v_ref_474_; lean_object* v___x_475_; 
v_ref_474_ = lean_ctor_get(v___y_471_, 5);
v___x_475_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(v_ref_474_, v_constName_466_, v___y_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg___boxed(lean_object* v_constName_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(v_constName_476_, v___y_477_, v___y_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
return v_res_484_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(lean_object* v_fst_485_, lean_object* v_fst_486_, lean_object* v_specThm_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_){
_start:
{
lean_object* v_proof_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v_proof_495_ = lean_ctor_get(v_specThm_487_, 2);
lean_inc_ref(v_proof_495_);
lean_dec_ref(v_specThm_487_);
v___x_496_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_erase(v_fst_485_, v_proof_495_);
v___x_497_ = lean_box(0);
v___x_498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_498_, 0, v___x_496_);
lean_ctor_set(v___x_498_, 1, v_fst_486_);
v___x_499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_499_, 0, v___x_497_);
lean_ctor_set(v___x_499_, 1, v___x_498_);
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0___boxed(lean_object* v_fst_501_, lean_object* v_fst_502_, lean_object* v_specThm_503_, lean_object* v___y_504_, lean_object* v___y_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_501_, v_fst_502_, v_specThm_503_, v___y_504_, v___y_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v___y_507_);
lean_dec_ref(v___y_506_);
lean_dec(v___y_505_);
lean_dec_ref(v___y_504_);
return v_res_511_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__9));
v___x_535_ = l_Lean_stringToMessageData(v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(lean_object* v_as_537_, size_t v_sz_538_, size_t v_i_539_, lean_object* v_b_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_a_549_; uint8_t v___x_553_; 
v___x_553_ = lean_usize_dec_lt(v_i_539_, v_sz_538_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; 
v___x_554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_554_, 0, v_b_540_);
return v___x_554_;
}
else
{
lean_object* v_snd_555_; lean_object* v_fst_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_790_; 
v_snd_555_ = lean_ctor_get(v_b_540_, 1);
v_fst_556_ = lean_ctor_get(v_b_540_, 0);
v_isSharedCheck_790_ = !lean_is_exclusive(v_b_540_);
if (v_isSharedCheck_790_ == 0)
{
v___x_558_ = v_b_540_;
v_isShared_559_ = v_isSharedCheck_790_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_snd_555_);
lean_inc(v_fst_556_);
lean_dec(v_b_540_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_790_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
lean_object* v_fst_560_; lean_object* v_snd_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_789_; 
v_fst_560_ = lean_ctor_get(v_snd_555_, 0);
v_snd_561_ = lean_ctor_get(v_snd_555_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_snd_555_);
if (v_isSharedCheck_789_ == 0)
{
v___x_563_ = v_snd_555_;
v_isShared_564_ = v_isSharedCheck_789_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_snd_561_);
lean_inc(v_fst_560_);
lean_dec(v_snd_555_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_789_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v_fst_566_; lean_object* v_snd_567_; lean_object* v_fst_575_; lean_object* v_snd_576_; lean_object* v_fst_580_; lean_object* v_snd_581_; lean_object* v___x_584_; lean_object* v_a_585_; lean_object* v___y_587_; uint8_t v___y_588_; lean_object* v___y_592_; uint8_t v___y_593_; lean_object* v___y_601_; uint8_t v___y_602_; lean_object* v_a_606_; lean_object* v___y_610_; lean_object* v___x_616_; lean_object* v___x_617_; uint8_t v___x_618_; 
v___x_584_ = lean_unsigned_to_nat(1u);
v_a_585_ = lean_array_uget_borrowed(v_as_537_, v_i_539_);
lean_inc(v_a_585_);
v___x_616_ = l_Lean_Syntax_getKind(v_a_585_);
v___x_617_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__4));
v___x_618_ = lean_name_eq(v___x_616_, v___x_617_);
if (v___x_618_ == 0)
{
lean_object* v___x_619_; uint8_t v___x_620_; 
lean_del_object(v___x_563_);
lean_del_object(v___x_558_);
v___x_619_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__6));
v___x_620_ = lean_name_eq(v___x_616_, v___x_619_);
if (v___x_620_ == 0)
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__8));
v___x_622_ = lean_name_eq(v___x_616_, v___x_621_);
lean_dec(v___x_616_);
if (v___x_622_ == 0)
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg();
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec_ref_known(v___x_623_, 1);
v___x_624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_624_, 0, v_fst_560_);
lean_ctor_set(v___x_624_, 1, v_snd_561_);
v___x_625_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_625_, 0, v_fst_556_);
lean_ctor_set(v___x_625_, 1, v___x_624_);
v_a_549_ = v___x_625_;
goto v___jp_548_;
}
else
{
lean_object* v_a_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_633_; 
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v_a_626_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_633_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_633_ == 0)
{
v___x_628_ = v___x_623_;
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_a_626_);
lean_dec(v___x_623_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_633_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v___x_631_; 
if (v_isShared_629_ == 0)
{
v___x_631_ = v___x_628_;
goto v_reusejp_630_;
}
else
{
lean_object* v_reuseFailAlloc_632_; 
v_reuseFailAlloc_632_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_632_, 0, v_a_626_);
v___x_631_ = v_reuseFailAlloc_632_;
goto v_reusejp_630_;
}
v_reusejp_630_:
{
return v___x_631_;
}
}
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
lean_dec(v_snd_561_);
lean_inc(v_a_585_);
v___x_634_ = lean_array_push(v_fst_560_, v_a_585_);
v___x_635_ = lean_box(v___x_553_);
v___x_636_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_636_, 0, v___x_634_);
lean_ctor_set(v___x_636_, 1, v___x_635_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v_fst_556_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v_a_549_ = v___x_637_;
goto v___jp_548_;
}
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
lean_dec(v___x_616_);
v___x_638_ = lean_unsigned_to_nat(0u);
v___x_639_ = l_Lean_Syntax_getArg(v_a_585_, v___x_638_);
v___x_640_ = l_Lean_Syntax_isNone(v___x_639_);
lean_dec(v___x_639_);
if (v___x_640_ == 0)
{
goto v___jp_596_;
}
else
{
lean_object* v___x_641_; uint8_t v___x_642_; 
v___x_641_ = l_Lean_Syntax_getArg(v_a_585_, v___x_584_);
v___x_642_ = l_Lean_Syntax_isNone(v___x_641_);
lean_dec(v___x_641_);
if (v___x_642_ == 0)
{
goto v___jp_596_;
}
else
{
lean_object* v___x_643_; 
v___x_643_ = l_Lean_Meta_saveState___redArg(v___y_544_, v___y_546_);
if (lean_obj_tag(v___x_643_) == 0)
{
lean_object* v_a_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_689_; lean_object* v___x_716_; lean_object* v___x_717_; 
v_a_644_ = lean_ctor_get(v___x_643_, 0);
lean_inc(v_a_644_);
lean_dec_ref_known(v___x_643_, 1);
v___x_645_ = lean_unsigned_to_nat(2u);
v___x_646_ = l_Lean_Syntax_getArg(v_a_585_, v___x_645_);
v___x_716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__11));
lean_inc(v___x_646_);
v___x_717_ = l_Lean_Elab_Term_resolveId_x3f(v___x_646_, v___x_716_, v___x_553_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_717_) == 0)
{
lean_dec(v_a_644_);
v___y_689_ = v___x_717_;
goto v___jp_688_;
}
else
{
lean_object* v_a_718_; uint8_t v___y_720_; uint8_t v___x_731_; 
v_a_718_ = lean_ctor_get(v___x_717_, 0);
lean_inc(v_a_718_);
v___x_731_ = l_Lean_Exception_isInterrupt(v_a_718_);
if (v___x_731_ == 0)
{
uint8_t v___x_732_; 
v___x_732_ = l_Lean_Exception_isRuntime(v_a_718_);
v___y_720_ = v___x_732_;
goto v___jp_719_;
}
else
{
lean_dec(v_a_718_);
v___y_720_ = v___x_731_;
goto v___jp_719_;
}
v___jp_719_:
{
if (v___y_720_ == 0)
{
lean_object* v___x_721_; 
lean_dec_ref_known(v___x_717_, 1);
v___x_721_ = l_Lean_Meta_SavedState_restore___redArg(v_a_644_, v___y_544_, v___y_546_);
lean_dec(v_a_644_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v___x_722_; 
lean_dec_ref_known(v___x_721_, 1);
lean_inc(v___x_646_);
v___x_722_ = l_Lean_Elab_Term_elabCDotFunctionAlias_x3f(v___x_646_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
v___y_689_ = v___x_722_;
goto v___jp_688_;
}
else
{
lean_object* v_a_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_730_; 
lean_dec(v___x_646_);
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v_a_723_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_730_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_730_ == 0)
{
v___x_725_ = v___x_721_;
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_a_723_);
lean_dec(v___x_721_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_730_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v___x_728_; 
if (v_isShared_726_ == 0)
{
v___x_728_ = v___x_725_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v_a_723_);
v___x_728_ = v_reuseFailAlloc_729_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
return v___x_728_;
}
}
}
}
else
{
lean_dec(v_a_644_);
v___y_689_ = v___x_717_;
goto v___jp_688_;
}
}
}
v___jp_647_:
{
lean_object* v_fileName_654_; lean_object* v_fileMap_655_; lean_object* v_options_656_; lean_object* v_currRecDepth_657_; lean_object* v_maxRecDepth_658_; lean_object* v_ref_659_; lean_object* v_currNamespace_660_; lean_object* v_openDecls_661_; lean_object* v_initHeartbeats_662_; lean_object* v_maxHeartbeats_663_; lean_object* v_quotContext_664_; lean_object* v_currMacroScope_665_; uint8_t v_diag_666_; lean_object* v_cancelTk_x3f_667_; uint8_t v_suppressElabErrors_668_; lean_object* v_inheritedTraceOptions_669_; lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v_ref_675_; lean_object* v___x_676_; lean_object* v___x_677_; 
v_fileName_654_ = lean_ctor_get(v___y_652_, 0);
v_fileMap_655_ = lean_ctor_get(v___y_652_, 1);
v_options_656_ = lean_ctor_get(v___y_652_, 2);
v_currRecDepth_657_ = lean_ctor_get(v___y_652_, 3);
v_maxRecDepth_658_ = lean_ctor_get(v___y_652_, 4);
v_ref_659_ = lean_ctor_get(v___y_652_, 5);
v_currNamespace_660_ = lean_ctor_get(v___y_652_, 6);
v_openDecls_661_ = lean_ctor_get(v___y_652_, 7);
v_initHeartbeats_662_ = lean_ctor_get(v___y_652_, 8);
v_maxHeartbeats_663_ = lean_ctor_get(v___y_652_, 9);
v_quotContext_664_ = lean_ctor_get(v___y_652_, 10);
v_currMacroScope_665_ = lean_ctor_get(v___y_652_, 11);
v_diag_666_ = lean_ctor_get_uint8(v___y_652_, sizeof(void*)*14);
v_cancelTk_x3f_667_ = lean_ctor_get(v___y_652_, 12);
v_suppressElabErrors_668_ = lean_ctor_get_uint8(v___y_652_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_669_ = lean_ctor_get(v___y_652_, 13);
v___x_670_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__10);
lean_inc(v___x_646_);
v___x_671_ = l_Lean_MessageData_ofSyntax(v___x_646_);
v___x_672_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_672_, 0, v___x_670_);
lean_ctor_set(v___x_672_, 1, v___x_671_);
v___x_673_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg___closed__3);
v___x_674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v_ref_675_ = l_Lean_replaceRef(v___x_646_, v_ref_659_);
lean_dec(v___x_646_);
lean_inc_ref(v_inheritedTraceOptions_669_);
lean_inc(v_cancelTk_x3f_667_);
lean_inc(v_currMacroScope_665_);
lean_inc(v_quotContext_664_);
lean_inc(v_maxHeartbeats_663_);
lean_inc(v_initHeartbeats_662_);
lean_inc(v_openDecls_661_);
lean_inc(v_currNamespace_660_);
lean_inc(v_maxRecDepth_658_);
lean_inc(v_currRecDepth_657_);
lean_inc_ref(v_options_656_);
lean_inc_ref(v_fileMap_655_);
lean_inc_ref(v_fileName_654_);
v___x_676_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_676_, 0, v_fileName_654_);
lean_ctor_set(v___x_676_, 1, v_fileMap_655_);
lean_ctor_set(v___x_676_, 2, v_options_656_);
lean_ctor_set(v___x_676_, 3, v_currRecDepth_657_);
lean_ctor_set(v___x_676_, 4, v_maxRecDepth_658_);
lean_ctor_set(v___x_676_, 5, v_ref_675_);
lean_ctor_set(v___x_676_, 6, v_currNamespace_660_);
lean_ctor_set(v___x_676_, 7, v_openDecls_661_);
lean_ctor_set(v___x_676_, 8, v_initHeartbeats_662_);
lean_ctor_set(v___x_676_, 9, v_maxHeartbeats_663_);
lean_ctor_set(v___x_676_, 10, v_quotContext_664_);
lean_ctor_set(v___x_676_, 11, v_currMacroScope_665_);
lean_ctor_set(v___x_676_, 12, v_cancelTk_x3f_667_);
lean_ctor_set(v___x_676_, 13, v_inheritedTraceOptions_669_);
lean_ctor_set_uint8(v___x_676_, sizeof(void*)*14, v_diag_666_);
lean_ctor_set_uint8(v___x_676_, sizeof(void*)*14 + 1, v_suppressElabErrors_668_);
v___x_677_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v___x_674_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___x_676_, v___y_653_);
lean_dec_ref_known(v___x_676_, 14);
if (lean_obj_tag(v___x_677_) == 0)
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec_ref_known(v___x_677_, 1);
v___x_678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_678_, 0, v_fst_560_);
lean_ctor_set(v___x_678_, 1, v_snd_561_);
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v_fst_556_);
lean_ctor_set(v___x_679_, 1, v___x_678_);
v_a_549_ = v___x_679_;
goto v___jp_548_;
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v_a_680_ = lean_ctor_get(v___x_677_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_677_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_677_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_677_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
v___jp_688_:
{
if (lean_obj_tag(v___y_689_) == 0)
{
lean_object* v_a_690_; 
v_a_690_ = lean_ctor_get(v___y_689_, 0);
lean_inc(v_a_690_);
lean_dec_ref_known(v___y_689_, 1);
if (lean_obj_tag(v_a_690_) == 1)
{
lean_object* v_val_691_; 
v_val_691_ = lean_ctor_get(v_a_690_, 0);
lean_inc(v_val_691_);
lean_dec_ref_known(v_a_690_, 1);
switch(lean_obj_tag(v_val_691_))
{
case 4:
{
lean_object* v_declName_692_; lean_object* v___x_693_; lean_object* v___x_694_; 
lean_dec(v___x_646_);
v_declName_692_ = lean_ctor_get(v_val_691_, 0);
lean_inc(v_declName_692_);
lean_dec_ref_known(v_val_691_, 2);
v___x_693_ = lean_unsigned_to_nat(1000u);
v___x_694_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(v_declName_692_, v___x_693_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_696_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
v___x_696_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_fst_556_, v_a_695_);
v_fst_580_ = v___x_696_;
v_snd_581_ = v_fst_560_;
goto v___jp_579_;
}
else
{
lean_object* v_a_697_; uint8_t v___x_698_; 
v_a_697_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_697_);
lean_dec_ref_known(v___x_694_, 1);
v___x_698_ = l_Lean_Exception_isInterrupt(v_a_697_);
if (v___x_698_ == 0)
{
uint8_t v___x_699_; 
lean_inc(v_a_697_);
v___x_699_ = l_Lean_Exception_isRuntime(v_a_697_);
v___y_587_ = v_a_697_;
v___y_588_ = v___x_699_;
goto v___jp_586_;
}
else
{
v___y_587_ = v_a_697_;
v___y_588_ = v___x_698_;
goto v___jp_586_;
}
}
}
case 1:
{
lean_object* v_fvarId_700_; lean_object* v___x_701_; lean_object* v___x_702_; 
lean_dec(v___x_646_);
v_fvarId_700_ = lean_ctor_get(v_val_691_, 0);
lean_inc(v_fvarId_700_);
lean_dec_ref_known(v_val_691_, 1);
v___x_701_ = lean_unsigned_to_nat(1000u);
v___x_702_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v_fvarId_700_, v___x_701_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_702_) == 0)
{
lean_object* v_a_703_; lean_object* v___x_704_; 
v_a_703_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_703_);
lean_dec_ref_known(v___x_702_, 1);
v___x_704_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_fst_556_, v_a_703_);
v_fst_575_ = v___x_704_;
v_snd_576_ = v_fst_560_;
goto v___jp_574_;
}
else
{
lean_object* v_a_705_; uint8_t v___x_706_; 
v_a_705_ = lean_ctor_get(v___x_702_, 0);
lean_inc(v_a_705_);
lean_dec_ref_known(v___x_702_, 1);
v___x_706_ = l_Lean_Exception_isInterrupt(v_a_705_);
if (v___x_706_ == 0)
{
uint8_t v___x_707_; 
lean_inc(v_a_705_);
v___x_707_ = l_Lean_Exception_isRuntime(v_a_705_);
v___y_592_ = v_a_705_;
v___y_593_ = v___x_707_;
goto v___jp_591_;
}
else
{
v___y_592_ = v_a_705_;
v___y_593_ = v___x_706_;
goto v___jp_591_;
}
}
}
default: 
{
lean_dec(v_val_691_);
v___y_648_ = v___y_541_;
v___y_649_ = v___y_542_;
v___y_650_ = v___y_543_;
v___y_651_ = v___y_544_;
v___y_652_ = v___y_545_;
v___y_653_ = v___y_546_;
goto v___jp_647_;
}
}
}
else
{
lean_dec(v_a_690_);
v___y_648_ = v___y_541_;
v___y_649_ = v___y_542_;
v___y_650_ = v___y_543_;
v___y_651_ = v___y_544_;
v___y_652_ = v___y_545_;
v___y_653_ = v___y_546_;
goto v___jp_647_;
}
}
else
{
lean_object* v_a_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_715_; 
lean_dec(v___x_646_);
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v_a_708_ = lean_ctor_get(v___y_689_, 0);
v_isSharedCheck_715_ = !lean_is_exclusive(v___y_689_);
if (v_isSharedCheck_715_ == 0)
{
v___x_710_ = v___y_689_;
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_a_708_);
lean_dec(v___y_689_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_715_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
lean_object* v___x_713_; 
if (v_isShared_711_ == 0)
{
v___x_713_ = v___x_710_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_714_; 
v_reuseFailAlloc_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_714_, 0, v_a_708_);
v___x_713_ = v_reuseFailAlloc_714_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
return v___x_713_;
}
}
}
}
}
else
{
lean_object* v_a_733_; lean_object* v___x_735_; uint8_t v_isShared_736_; uint8_t v_isSharedCheck_740_; 
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v_a_733_ = lean_ctor_get(v___x_643_, 0);
v_isSharedCheck_740_ = !lean_is_exclusive(v___x_643_);
if (v_isSharedCheck_740_ == 0)
{
v___x_735_ = v___x_643_;
v_isShared_736_ = v_isSharedCheck_740_;
goto v_resetjp_734_;
}
else
{
lean_inc(v_a_733_);
lean_dec(v___x_643_);
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
}
}
}
else
{
lean_object* v___x_741_; lean_object* v___x_742_; 
lean_dec(v___x_616_);
v___x_741_ = l_Lean_Syntax_getArg(v_a_585_, v___x_584_);
lean_inc(v___x_741_);
v___x_742_ = l_Lean_Elab_Term_isLocalIdent_x3f(v___x_741_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_742_) == 0)
{
lean_object* v_a_743_; 
v_a_743_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_743_);
lean_dec_ref_known(v___x_742_, 1);
if (lean_obj_tag(v_a_743_) == 1)
{
lean_object* v_val_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
lean_dec(v___x_741_);
v_val_744_ = lean_ctor_get(v_a_743_, 0);
lean_inc(v_val_744_);
lean_dec_ref_known(v_a_743_, 1);
v___x_745_ = l_Lean_Expr_fvarId_x21(v_val_744_);
lean_dec(v_val_744_);
v___x_746_ = lean_unsigned_to_nat(1000u);
v___x_747_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v___x_745_, v___x_746_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_749_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
lean_inc(v_fst_560_);
lean_inc(v_fst_556_);
v___x_749_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_556_, v_fst_560_, v_a_748_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
v___y_610_ = v___x_749_;
goto v___jp_609_;
}
else
{
lean_object* v_a_750_; 
v_a_750_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_750_);
lean_dec_ref_known(v___x_747_, 1);
v_a_606_ = v_a_750_;
goto v___jp_605_;
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; 
lean_dec(v_a_743_);
v___x_751_ = lean_box(0);
lean_inc(v___x_741_);
v___x_752_ = l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo(v___x_741_, v___x_751_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_752_) == 0)
{
lean_object* v_a_753_; lean_object* v___x_754_; lean_object* v___x_755_; 
lean_dec(v___x_741_);
v_a_753_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_a_753_);
lean_dec_ref_known(v___x_752_, 1);
v___x_754_ = lean_unsigned_to_nat(1000u);
v___x_755_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromConst(v_a_753_, v___x_754_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v___x_757_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_755_, 1);
lean_inc(v_fst_560_);
lean_inc(v_fst_556_);
v___x_757_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_556_, v_fst_560_, v_a_756_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
v___y_610_ = v___x_757_;
goto v___jp_609_;
}
else
{
lean_object* v_a_758_; 
v_a_758_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_758_);
lean_dec_ref_known(v___x_755_, 1);
v_a_606_ = v_a_758_;
goto v___jp_605_;
}
}
else
{
lean_object* v_a_759_; uint8_t v___y_761_; uint8_t v___x_786_; 
v_a_759_ = lean_ctor_get(v___x_752_, 0);
lean_inc(v_a_759_);
lean_dec_ref_known(v___x_752_, 1);
v___x_786_ = l_Lean_Exception_isInterrupt(v_a_759_);
if (v___x_786_ == 0)
{
uint8_t v___x_787_; 
lean_inc(v_a_759_);
v___x_787_ = l_Lean_Exception_isRuntime(v_a_759_);
v___y_761_ = v___x_787_;
goto v___jp_760_;
}
else
{
v___y_761_ = v___x_786_;
goto v___jp_760_;
}
v___jp_760_:
{
if (v___y_761_ == 0)
{
lean_object* v_fileName_762_; lean_object* v_fileMap_763_; lean_object* v_options_764_; lean_object* v_currRecDepth_765_; lean_object* v_maxRecDepth_766_; lean_object* v_ref_767_; lean_object* v_currNamespace_768_; lean_object* v_openDecls_769_; lean_object* v_initHeartbeats_770_; lean_object* v_maxHeartbeats_771_; lean_object* v_quotContext_772_; lean_object* v_currMacroScope_773_; uint8_t v_diag_774_; lean_object* v_cancelTk_x3f_775_; uint8_t v_suppressElabErrors_776_; lean_object* v_inheritedTraceOptions_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v_ref_780_; lean_object* v___x_781_; lean_object* v___x_782_; 
lean_dec(v_a_759_);
v_fileName_762_ = lean_ctor_get(v___y_545_, 0);
v_fileMap_763_ = lean_ctor_get(v___y_545_, 1);
v_options_764_ = lean_ctor_get(v___y_545_, 2);
v_currRecDepth_765_ = lean_ctor_get(v___y_545_, 3);
v_maxRecDepth_766_ = lean_ctor_get(v___y_545_, 4);
v_ref_767_ = lean_ctor_get(v___y_545_, 5);
v_currNamespace_768_ = lean_ctor_get(v___y_545_, 6);
v_openDecls_769_ = lean_ctor_get(v___y_545_, 7);
v_initHeartbeats_770_ = lean_ctor_get(v___y_545_, 8);
v_maxHeartbeats_771_ = lean_ctor_get(v___y_545_, 9);
v_quotContext_772_ = lean_ctor_get(v___y_545_, 10);
v_currMacroScope_773_ = lean_ctor_get(v___y_545_, 11);
v_diag_774_ = lean_ctor_get_uint8(v___y_545_, sizeof(void*)*14);
v_cancelTk_x3f_775_ = lean_ctor_get(v___y_545_, 12);
v_suppressElabErrors_776_ = lean_ctor_get_uint8(v___y_545_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_777_ = lean_ctor_get(v___y_545_, 13);
v___x_778_ = l_Lean_Syntax_getId(v___x_741_);
v___x_779_ = lean_erase_macro_scopes(v___x_778_);
v_ref_780_ = l_Lean_replaceRef(v___x_741_, v_ref_767_);
lean_dec(v___x_741_);
lean_inc_ref(v_inheritedTraceOptions_777_);
lean_inc(v_cancelTk_x3f_775_);
lean_inc(v_currMacroScope_773_);
lean_inc(v_quotContext_772_);
lean_inc(v_maxHeartbeats_771_);
lean_inc(v_initHeartbeats_770_);
lean_inc(v_openDecls_769_);
lean_inc(v_currNamespace_768_);
lean_inc(v_maxRecDepth_766_);
lean_inc(v_currRecDepth_765_);
lean_inc_ref(v_options_764_);
lean_inc_ref(v_fileMap_763_);
lean_inc_ref(v_fileName_762_);
v___x_781_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_781_, 0, v_fileName_762_);
lean_ctor_set(v___x_781_, 1, v_fileMap_763_);
lean_ctor_set(v___x_781_, 2, v_options_764_);
lean_ctor_set(v___x_781_, 3, v_currRecDepth_765_);
lean_ctor_set(v___x_781_, 4, v_maxRecDepth_766_);
lean_ctor_set(v___x_781_, 5, v_ref_780_);
lean_ctor_set(v___x_781_, 6, v_currNamespace_768_);
lean_ctor_set(v___x_781_, 7, v_openDecls_769_);
lean_ctor_set(v___x_781_, 8, v_initHeartbeats_770_);
lean_ctor_set(v___x_781_, 9, v_maxHeartbeats_771_);
lean_ctor_set(v___x_781_, 10, v_quotContext_772_);
lean_ctor_set(v___x_781_, 11, v_currMacroScope_773_);
lean_ctor_set(v___x_781_, 12, v_cancelTk_x3f_775_);
lean_ctor_set(v___x_781_, 13, v_inheritedTraceOptions_777_);
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*14, v_diag_774_);
lean_ctor_set_uint8(v___x_781_, sizeof(void*)*14 + 1, v_suppressElabErrors_776_);
v___x_782_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(v___x_779_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___x_781_, v___y_546_);
lean_dec_ref_known(v___x_781_, 14);
if (lean_obj_tag(v___x_782_) == 0)
{
lean_object* v_a_783_; lean_object* v___x_784_; 
v_a_783_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_783_);
lean_dec_ref_known(v___x_782_, 1);
lean_inc(v_fst_560_);
lean_inc(v_fst_556_);
v___x_784_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___lam__0(v_fst_556_, v_fst_560_, v_a_783_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
v___y_610_ = v___x_784_;
goto v___jp_609_;
}
else
{
lean_object* v_a_785_; 
v_a_785_ = lean_ctor_get(v___x_782_, 0);
lean_inc(v_a_785_);
lean_dec_ref_known(v___x_782_, 1);
v_a_606_ = v_a_785_;
goto v___jp_605_;
}
}
else
{
lean_dec(v___x_741_);
v_a_606_ = v_a_759_;
goto v___jp_605_;
}
}
}
}
}
else
{
lean_object* v_a_788_; 
lean_dec(v___x_741_);
v_a_788_ = lean_ctor_get(v___x_742_, 0);
lean_inc(v_a_788_);
lean_dec_ref_known(v___x_742_, 1);
v_a_606_ = v_a_788_;
goto v___jp_605_;
}
}
v___jp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v_snd_567_);
v___x_569_ = v___x_563_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_snd_567_);
lean_ctor_set(v_reuseFailAlloc_573_, 1, v_snd_561_);
v___x_569_ = v_reuseFailAlloc_573_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_571_; 
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 1, v___x_569_);
lean_ctor_set(v___x_558_, 0, v_fst_566_);
v___x_571_ = v___x_558_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_fst_566_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v___x_569_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
v_a_549_ = v___x_571_;
goto v___jp_548_;
}
}
}
v___jp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; 
v___x_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_577_, 0, v_snd_576_);
lean_ctor_set(v___x_577_, 1, v_snd_561_);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v_fst_575_);
lean_ctor_set(v___x_578_, 1, v___x_577_);
v_a_549_ = v___x_578_;
goto v___jp_548_;
}
v___jp_579_:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_582_, 0, v_snd_581_);
lean_ctor_set(v___x_582_, 1, v_snd_561_);
v___x_583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_583_, 0, v_fst_580_);
lean_ctor_set(v___x_583_, 1, v___x_582_);
v_a_549_ = v___x_583_;
goto v___jp_548_;
}
v___jp_586_:
{
if (v___y_588_ == 0)
{
lean_object* v___x_589_; 
lean_dec_ref(v___y_587_);
lean_inc(v_a_585_);
v___x_589_ = lean_array_push(v_fst_560_, v_a_585_);
v_fst_580_ = v_fst_556_;
v_snd_581_ = v___x_589_;
goto v___jp_579_;
}
else
{
lean_object* v___x_590_; 
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v___x_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_590_, 0, v___y_587_);
return v___x_590_;
}
}
v___jp_591_:
{
if (v___y_593_ == 0)
{
lean_object* v___x_594_; 
lean_dec_ref(v___y_592_);
lean_inc(v_a_585_);
v___x_594_ = lean_array_push(v_fst_560_, v_a_585_);
v_fst_575_ = v_fst_556_;
v_snd_576_ = v___x_594_;
goto v___jp_574_;
}
else
{
lean_object* v___x_595_; 
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v___x_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_595_, 0, v___y_592_);
return v___x_595_;
}
}
v___jp_596_:
{
lean_object* v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; 
lean_inc(v_a_585_);
v___x_597_ = lean_array_push(v_fst_560_, v_a_585_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
lean_ctor_set(v___x_598_, 1, v_snd_561_);
v___x_599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_599_, 0, v_fst_556_);
lean_ctor_set(v___x_599_, 1, v___x_598_);
v_a_549_ = v___x_599_;
goto v___jp_548_;
}
v___jp_600_:
{
if (v___y_602_ == 0)
{
lean_object* v___x_603_; 
lean_dec_ref(v___y_601_);
lean_inc(v_a_585_);
v___x_603_ = lean_array_push(v_fst_560_, v_a_585_);
v_fst_566_ = v_fst_556_;
v_snd_567_ = v___x_603_;
goto v___jp_565_;
}
else
{
lean_object* v___x_604_; 
lean_del_object(v___x_563_);
lean_dec(v_snd_561_);
lean_dec(v_fst_560_);
lean_del_object(v___x_558_);
lean_dec(v_fst_556_);
v___x_604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_604_, 0, v___y_601_);
return v___x_604_;
}
}
v___jp_605_:
{
uint8_t v___x_607_; 
v___x_607_ = l_Lean_Exception_isInterrupt(v_a_606_);
if (v___x_607_ == 0)
{
uint8_t v___x_608_; 
lean_inc_ref(v_a_606_);
v___x_608_ = l_Lean_Exception_isRuntime(v_a_606_);
v___y_601_ = v_a_606_;
v___y_602_ = v___x_608_;
goto v___jp_600_;
}
else
{
v___y_601_ = v_a_606_;
v___y_602_ = v___x_607_;
goto v___jp_600_;
}
}
v___jp_609_:
{
if (lean_obj_tag(v___y_610_) == 0)
{
lean_object* v_a_611_; lean_object* v_snd_612_; lean_object* v_fst_613_; lean_object* v_snd_614_; 
lean_dec(v_fst_560_);
lean_dec(v_fst_556_);
v_a_611_ = lean_ctor_get(v___y_610_, 0);
lean_inc(v_a_611_);
lean_dec_ref_known(v___y_610_, 1);
v_snd_612_ = lean_ctor_get(v_a_611_, 1);
lean_inc(v_snd_612_);
lean_dec(v_a_611_);
v_fst_613_ = lean_ctor_get(v_snd_612_, 0);
lean_inc(v_fst_613_);
v_snd_614_ = lean_ctor_get(v_snd_612_, 1);
lean_inc(v_snd_614_);
lean_dec(v_snd_612_);
v_fst_566_ = v_fst_613_;
v_snd_567_ = v_snd_614_;
goto v___jp_565_;
}
else
{
lean_object* v_a_615_; 
v_a_615_ = lean_ctor_get(v___y_610_, 0);
lean_inc(v_a_615_);
lean_dec_ref_known(v___y_610_, 1);
v_a_606_ = v_a_615_;
goto v___jp_605_;
}
}
}
}
}
v___jp_548_:
{
size_t v___x_550_; size_t v___x_551_; 
v___x_550_ = ((size_t)1ULL);
v___x_551_ = lean_usize_add(v_i_539_, v___x_550_);
v_i_539_ = v___x_551_;
v_b_540_ = v_a_549_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___boxed(lean_object* v_as_791_, lean_object* v_sz_792_, lean_object* v_i_793_, lean_object* v_b_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
size_t v_sz_boxed_802_; size_t v_i_boxed_803_; lean_object* v_res_804_; 
v_sz_boxed_802_ = lean_unbox_usize(v_sz_792_);
lean_dec(v_sz_792_);
v_i_boxed_803_ = lean_unbox_usize(v_i_793_);
lean_dec(v_i_793_);
v_res_804_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(v_as_791_, v_sz_boxed_802_, v_i_boxed_803_, v_b_794_, v___y_795_, v___y_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec_ref(v_as_791_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(lean_object* v_as_805_, size_t v_sz_806_, size_t v_i_807_, lean_object* v_b_808_, lean_object* v___y_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_){
_start:
{
lean_object* v_a_815_; uint8_t v___x_819_; 
v___x_819_ = lean_usize_dec_lt(v_i_807_, v_sz_806_);
if (v___x_819_ == 0)
{
lean_object* v___x_820_; 
v___x_820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_820_, 0, v_b_808_);
return v___x_820_;
}
else
{
lean_object* v_a_821_; lean_object* v___x_822_; uint8_t v___x_823_; 
v_a_821_ = lean_array_uget_borrowed(v_as_805_, v_i_807_);
lean_inc(v_a_821_);
v___x_822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_822_, 0, v_a_821_);
lean_inc_ref(v_b_808_);
v___x_823_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_isErased(v_b_808_, v___x_822_);
if (v___x_823_ == 0)
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_unsigned_to_nat(1000u);
lean_inc(v_a_821_);
v___x_825_ = l_Lean_Elab_Tactic_Do_SpecAttr_mkSpecTheoremFromLocal(v_a_821_, v___x_824_, v___y_809_, v___y_810_, v___y_811_, v___y_812_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v_a_826_; lean_object* v___x_827_; 
v_a_826_ = lean_ctor_get(v___x_825_, 0);
lean_inc(v_a_826_);
lean_dec_ref_known(v___x_825_, 1);
v___x_827_ = l_Lean_Elab_Tactic_Do_SpecAttr_SpecTheorems_insert(v_b_808_, v_a_826_);
v_a_815_ = v___x_827_;
goto v___jp_814_;
}
else
{
lean_object* v_a_828_; lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_839_; 
v_a_828_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_839_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_839_ == 0)
{
v___x_830_ = v___x_825_;
v_isShared_831_ = v_isSharedCheck_839_;
goto v_resetjp_829_;
}
else
{
lean_inc(v_a_828_);
lean_dec(v___x_825_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_839_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
uint8_t v___y_833_; uint8_t v___x_837_; 
v___x_837_ = l_Lean_Exception_isInterrupt(v_a_828_);
if (v___x_837_ == 0)
{
uint8_t v___x_838_; 
lean_inc(v_a_828_);
v___x_838_ = l_Lean_Exception_isRuntime(v_a_828_);
v___y_833_ = v___x_838_;
goto v___jp_832_;
}
else
{
v___y_833_ = v___x_837_;
goto v___jp_832_;
}
v___jp_832_:
{
if (v___y_833_ == 0)
{
lean_del_object(v___x_830_);
lean_dec(v_a_828_);
v_a_815_ = v_b_808_;
goto v___jp_814_;
}
else
{
lean_object* v___x_835_; 
lean_dec_ref(v_b_808_);
if (v_isShared_831_ == 0)
{
v___x_835_ = v___x_830_;
goto v_reusejp_834_;
}
else
{
lean_object* v_reuseFailAlloc_836_; 
v_reuseFailAlloc_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_836_, 0, v_a_828_);
v___x_835_ = v_reuseFailAlloc_836_;
goto v_reusejp_834_;
}
v_reusejp_834_:
{
return v___x_835_;
}
}
}
}
}
}
else
{
v_a_815_ = v_b_808_;
goto v___jp_814_;
}
}
v___jp_814_:
{
size_t v___x_816_; size_t v___x_817_; 
v___x_816_ = ((size_t)1ULL);
v___x_817_ = lean_usize_add(v_i_807_, v___x_816_);
v_i_807_ = v___x_817_;
v_b_808_ = v_a_815_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg___boxed(lean_object* v_as_840_, lean_object* v_sz_841_, lean_object* v_i_842_, lean_object* v_b_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
size_t v_sz_boxed_849_; size_t v_i_boxed_850_; lean_object* v_res_851_; 
v_sz_boxed_849_ = lean_unbox_usize(v_sz_841_);
lean_dec(v_sz_841_);
v_i_boxed_850_ = lean_unbox_usize(v_i_842_);
lean_dec(v_i_842_);
v_res_851_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(v_as_840_, v_sz_boxed_849_, v_i_boxed_850_, v_b_843_, v___y_844_, v___y_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec_ref(v___y_844_);
lean_dec_ref(v_as_840_);
return v_res_851_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__40(void){
_start:
{
lean_object* v___x_959_; lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_959_ = lean_box(0);
v___x_960_ = lean_unsigned_to_nat(16u);
v___x_961_ = lean_mk_array(v___x_960_, v___x_959_);
return v___x_961_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41(void){
_start:
{
lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; 
v___x_962_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__40, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__40_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__40);
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v___x_962_);
return v___x_964_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__55(void){
_start:
{
lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_998_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__54));
v___x_999_ = l_String_toRawSubstring_x27(v___x_998_);
return v___x_999_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__61(void){
_start:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1010_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__60));
v___x_1011_ = l_String_toRawSubstring_x27(v___x_1010_);
return v___x_1011_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63(void){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = l_Array_mkArray0(lean_box(0));
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__68(void){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_Meta_DiscrTree_empty(lean_box(0));
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__69(void){
_start:
{
lean_object* v___x_1020_; 
v___x_1020_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__5(lean_box(0));
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__70(void){
_start:
{
lean_object* v___x_1021_; 
v___x_1021_ = l_Lean_PersistentHashMap_empty___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__6(lean_box(0));
return v___x_1021_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__71(void){
_start:
{
lean_object* v___x_1022_; 
v___x_1022_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_1022_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__72(void){
_start:
{
lean_object* v___x_1023_; lean_object* v___x_1024_; 
v___x_1023_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__71, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__71_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__71);
v___x_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1024_, 0, v___x_1023_);
return v___x_1024_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__73(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1025_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__72, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__72_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__72);
v___x_1026_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__70, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__70_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__70);
v___x_1027_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__69, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__69_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__69);
v___x_1028_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__68, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__68_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__68);
v___x_1029_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1029_, 0, v___x_1028_);
lean_ctor_set(v___x_1029_, 1, v___x_1028_);
lean_ctor_set(v___x_1029_, 2, v___x_1027_);
lean_ctor_set(v___x_1029_, 3, v___x_1026_);
lean_ctor_set(v___x_1029_, 4, v___x_1027_);
lean_ctor_set(v___x_1029_, 5, v___x_1025_);
return v___x_1029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(lean_object* v_lemmas_1030_, lean_object* v_goal_1031_, uint8_t v_ignoreStarArg_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l_Lean_Elab_Tactic_Do_SpecAttr_getSpecTheorems___redArg(v_a_1038_);
if (lean_obj_tag(v___x_1040_) == 0)
{
lean_object* v_a_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; lean_object* v___y_1045_; lean_object* v_specThms_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; size_t v_sz_1257_; size_t v___x_1258_; lean_object* v___x_1259_; 
v_a_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc(v_a_1041_);
lean_dec_ref_known(v___x_1040_, 1);
v___x_1042_ = lean_unsigned_to_nat(0u);
v___x_1043_ = 0;
v___x_1252_ = lean_unsigned_to_nat(1u);
v___x_1253_ = l_Lean_Syntax_getArg(v_lemmas_1030_, v___x_1252_);
v___x_1254_ = l_Lean_Syntax_getSepArgs(v___x_1253_);
lean_dec(v___x_1253_);
v___x_1255_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__42));
v___x_1256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1256_, 0, v_a_1041_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
v_sz_1257_ = lean_array_size(v___x_1254_);
v___x_1258_ = ((size_t)0ULL);
v___x_1259_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3(v___x_1254_, v_sz_1257_, v___x_1258_, v___x_1256_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
lean_dec_ref(v___x_1254_);
if (lean_obj_tag(v___x_1259_) == 0)
{
lean_object* v_a_1260_; lean_object* v_snd_1261_; lean_object* v_fst_1262_; lean_object* v___x_1264_; uint8_t v_isShared_1265_; uint8_t v_isSharedCheck_1366_; 
v_a_1260_ = lean_ctor_get(v___x_1259_, 0);
lean_inc(v_a_1260_);
lean_dec_ref_known(v___x_1259_, 1);
v_snd_1261_ = lean_ctor_get(v_a_1260_, 1);
v_fst_1262_ = lean_ctor_get(v_a_1260_, 0);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_a_1260_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1264_ = v_a_1260_;
v_isShared_1265_ = v_isSharedCheck_1366_;
goto v_resetjp_1263_;
}
else
{
lean_inc(v_snd_1261_);
lean_inc(v_fst_1262_);
lean_dec(v_a_1260_);
v___x_1264_ = lean_box(0);
v_isShared_1265_ = v_isSharedCheck_1366_;
goto v_resetjp_1263_;
}
v_resetjp_1263_:
{
lean_object* v_fst_1266_; lean_object* v_snd_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1365_; 
v_fst_1266_ = lean_ctor_get(v_snd_1261_, 0);
v_snd_1267_ = lean_ctor_get(v_snd_1261_, 1);
v_isSharedCheck_1365_ = !lean_is_exclusive(v_snd_1261_);
if (v_isSharedCheck_1365_ == 0)
{
v___x_1269_ = v_snd_1261_;
v_isShared_1270_ = v_isSharedCheck_1365_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_snd_1267_);
lean_inc(v_fst_1266_);
lean_dec(v_snd_1261_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1365_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v_ref_1271_; lean_object* v_quotContext_1272_; lean_object* v_currMacroScope_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v_ref_1271_ = lean_ctor_get(v_a_1037_, 5);
v_quotContext_1272_ = lean_ctor_get(v_a_1037_, 10);
v_currMacroScope_1273_ = lean_ctor_get(v_a_1037_, 11);
v___x_1274_ = l_Lean_SourceInfo_fromRef(v_ref_1271_, v___x_1043_);
v___x_1275_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__43));
v___x_1276_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__44));
lean_inc(v___x_1274_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set_tag(v___x_1269_, 2);
lean_ctor_set(v___x_1269_, 1, v___x_1275_);
lean_ctor_set(v___x_1269_, 0, v___x_1274_);
v___x_1278_ = v___x_1269_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1364_; 
v_reuseFailAlloc_1364_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1364_, 0, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1364_, 1, v___x_1275_);
v___x_1278_ = v_reuseFailAlloc_1364_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1285_; 
v___x_1279_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__46));
v___x_1280_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__48));
v___x_1281_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__50));
v___x_1282_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__52));
v___x_1283_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__53));
lean_inc(v___x_1274_);
if (v_isShared_1265_ == 0)
{
lean_ctor_set_tag(v___x_1264_, 2);
lean_ctor_set(v___x_1264_, 1, v___x_1283_);
lean_ctor_set(v___x_1264_, 0, v___x_1274_);
v___x_1285_ = v___x_1264_;
goto v_reusejp_1284_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1363_, 1, v___x_1283_);
v___x_1285_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1284_;
}
v_reusejp_1284_:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; uint8_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1286_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__55, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__55_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__55);
v___x_1287_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__56));
lean_inc_n(v_currMacroScope_1273_, 2);
lean_inc_n(v_quotContext_1272_, 2);
v___x_1288_ = l_Lean_addMacroScope(v_quotContext_1272_, v___x_1287_, v_currMacroScope_1273_);
v___x_1289_ = lean_box(0);
lean_inc_n(v___x_1274_, 14);
v___x_1290_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1274_);
lean_ctor_set(v___x_1290_, 1, v___x_1286_);
lean_ctor_set(v___x_1290_, 2, v___x_1288_);
lean_ctor_set(v___x_1290_, 3, v___x_1289_);
v___x_1291_ = l_Lean_Syntax_node2(v___x_1274_, v___x_1282_, v___x_1285_, v___x_1290_);
v___x_1292_ = l_Lean_Syntax_node1(v___x_1274_, v___x_1281_, v___x_1291_);
v___x_1293_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__58));
v___x_1294_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__59));
v___x_1295_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1274_);
lean_ctor_set(v___x_1295_, 1, v___x_1294_);
v___x_1296_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__61, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__61_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__61);
v___x_1297_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__62));
v___x_1298_ = l_Lean_addMacroScope(v_quotContext_1272_, v___x_1297_, v_currMacroScope_1273_);
v___x_1299_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1299_, 0, v___x_1274_);
lean_ctor_set(v___x_1299_, 1, v___x_1296_);
lean_ctor_set(v___x_1299_, 2, v___x_1298_);
lean_ctor_set(v___x_1299_, 3, v___x_1289_);
v___x_1300_ = l_Lean_Syntax_node2(v___x_1274_, v___x_1293_, v___x_1295_, v___x_1299_);
v___x_1301_ = l_Lean_Syntax_node1(v___x_1274_, v___x_1281_, v___x_1300_);
v___x_1302_ = l_Lean_Syntax_node2(v___x_1274_, v___x_1280_, v___x_1292_, v___x_1301_);
v___x_1303_ = l_Lean_Syntax_node1(v___x_1274_, v___x_1279_, v___x_1302_);
v___x_1304_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63);
v___x_1305_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1305_, 0, v___x_1274_);
lean_ctor_set(v___x_1305_, 1, v___x_1280_);
lean_ctor_set(v___x_1305_, 2, v___x_1304_);
v___x_1306_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__64));
v___x_1307_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1307_, 0, v___x_1274_);
lean_ctor_set(v___x_1307_, 1, v___x_1306_);
v___x_1308_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__65));
v___x_1309_ = l_Lean_Syntax_SepArray_ofElems(v___x_1308_, v_fst_1266_);
lean_dec(v_fst_1266_);
v___x_1310_ = l_Array_append___redArg(v___x_1304_, v___x_1309_);
lean_dec_ref(v___x_1309_);
v___x_1311_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1274_);
lean_ctor_set(v___x_1311_, 1, v___x_1280_);
lean_ctor_set(v___x_1311_, 2, v___x_1310_);
v___x_1312_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__66));
v___x_1313_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1274_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
v___x_1314_ = l_Lean_Syntax_node3(v___x_1274_, v___x_1280_, v___x_1307_, v___x_1311_, v___x_1313_);
lean_inc_ref_n(v___x_1305_, 2);
v___x_1315_ = l_Lean_Syntax_node6(v___x_1274_, v___x_1276_, v___x_1278_, v___x_1303_, v___x_1305_, v___x_1305_, v___x_1314_, v___x_1305_);
v___x_1316_ = 0;
v___x_1317_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__67));
v___x_1318_ = lean_box(v___x_1043_);
v___x_1319_ = lean_box(v___x_1316_);
v___x_1320_ = lean_box(v_ignoreStarArg_1032_);
v___x_1321_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_mkSimpContext___boxed), 14, 5);
lean_closure_set(v___x_1321_, 0, v___x_1315_);
lean_closure_set(v___x_1321_, 1, v___x_1318_);
lean_closure_set(v___x_1321_, 2, v___x_1319_);
lean_closure_set(v___x_1321_, 3, v___x_1320_);
lean_closure_set(v___x_1321_, 4, v___x_1317_);
v___x_1322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1322_, 0, v_goal_1031_);
lean_ctor_set(v___x_1322_, 1, v___x_1289_);
v___x_1323_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_1321_, v___x_1322_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
if (lean_obj_tag(v___x_1323_) == 0)
{
lean_object* v_a_1324_; lean_object* v___y_1326_; lean_object* v_ctx_1349_; lean_object* v_simpTheorems_1350_; lean_object* v___x_1351_; uint8_t v___x_1352_; 
v_a_1324_ = lean_ctor_get(v___x_1323_, 0);
lean_inc(v_a_1324_);
lean_dec_ref_known(v___x_1323_, 1);
v_ctx_1349_ = lean_ctor_get(v_a_1324_, 0);
lean_inc_ref(v_ctx_1349_);
lean_dec(v_a_1324_);
v_simpTheorems_1350_ = lean_ctor_get(v_ctx_1349_, 6);
lean_inc_ref(v_simpTheorems_1350_);
lean_dec_ref(v_ctx_1349_);
v___x_1351_ = lean_array_get_size(v_simpTheorems_1350_);
v___x_1352_ = lean_nat_dec_lt(v___x_1042_, v___x_1351_);
if (v___x_1352_ == 0)
{
lean_object* v___x_1353_; 
lean_dec_ref(v_simpTheorems_1350_);
v___x_1353_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__73, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__73_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__73);
v___y_1326_ = v___x_1353_;
goto v___jp_1325_;
}
else
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_array_fget(v_simpTheorems_1350_, v___x_1042_);
lean_dec_ref(v_simpTheorems_1350_);
v___y_1326_ = v___x_1354_;
goto v___jp_1325_;
}
v___jp_1325_:
{
uint8_t v___x_1327_; 
v___x_1327_ = lean_unbox(v_snd_1267_);
lean_dec(v_snd_1267_);
if (v___x_1327_ == 0)
{
v___y_1045_ = v___y_1326_;
v_specThms_1046_ = v_fst_1262_;
v___y_1047_ = v_a_1035_;
v___y_1048_ = v_a_1036_;
v___y_1049_ = v_a_1037_;
v___y_1050_ = v_a_1038_;
goto v___jp_1044_;
}
else
{
if (v_ignoreStarArg_1032_ == 0)
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_Meta_getPropHyps(v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; size_t v_sz_1330_; lean_object* v___x_1331_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
lean_dec_ref_known(v___x_1328_, 1);
v_sz_1330_ = lean_array_size(v_a_1329_);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(v_a_1329_, v_sz_1330_, v___x_1258_, v_fst_1262_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_);
lean_dec(v_a_1329_);
if (lean_obj_tag(v___x_1331_) == 0)
{
lean_object* v_a_1332_; 
v_a_1332_ = lean_ctor_get(v___x_1331_, 0);
lean_inc(v_a_1332_);
lean_dec_ref_known(v___x_1331_, 1);
v___y_1045_ = v___y_1326_;
v_specThms_1046_ = v_a_1332_;
v___y_1047_ = v_a_1035_;
v___y_1048_ = v_a_1036_;
v___y_1049_ = v_a_1037_;
v___y_1050_ = v_a_1038_;
goto v___jp_1044_;
}
else
{
lean_object* v_a_1333_; lean_object* v___x_1335_; uint8_t v_isShared_1336_; uint8_t v_isSharedCheck_1340_; 
lean_dec_ref(v___y_1326_);
v_a_1333_ = lean_ctor_get(v___x_1331_, 0);
v_isSharedCheck_1340_ = !lean_is_exclusive(v___x_1331_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1335_ = v___x_1331_;
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
else
{
lean_inc(v_a_1333_);
lean_dec(v___x_1331_);
v___x_1335_ = lean_box(0);
v_isShared_1336_ = v_isSharedCheck_1340_;
goto v_resetjp_1334_;
}
v_resetjp_1334_:
{
lean_object* v___x_1338_; 
if (v_isShared_1336_ == 0)
{
v___x_1338_ = v___x_1335_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_a_1333_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
}
}
else
{
lean_object* v_a_1341_; lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1348_; 
lean_dec_ref(v___y_1326_);
lean_dec(v_fst_1262_);
v_a_1341_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1348_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1348_ == 0)
{
v___x_1343_ = v___x_1328_;
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
else
{
lean_inc(v_a_1341_);
lean_dec(v___x_1328_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1348_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v___x_1346_; 
if (v_isShared_1344_ == 0)
{
v___x_1346_ = v___x_1343_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_a_1341_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
return v___x_1346_;
}
}
}
}
else
{
v___y_1045_ = v___y_1326_;
v_specThms_1046_ = v_fst_1262_;
v___y_1047_ = v_a_1035_;
v___y_1048_ = v_a_1036_;
v___y_1049_ = v_a_1037_;
v___y_1050_ = v_a_1038_;
goto v___jp_1044_;
}
}
}
}
else
{
lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1362_; 
lean_dec(v_snd_1267_);
lean_dec(v_fst_1262_);
v_a_1355_ = lean_ctor_get(v___x_1323_, 0);
v_isSharedCheck_1362_ = !lean_is_exclusive(v___x_1323_);
if (v_isSharedCheck_1362_ == 0)
{
v___x_1357_ = v___x_1323_;
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1323_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1362_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1360_; 
if (v_isShared_1358_ == 0)
{
v___x_1360_ = v___x_1357_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1361_; 
v_reuseFailAlloc_1361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1361_, 0, v_a_1355_);
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
}
}
}
}
else
{
lean_object* v_a_1367_; lean_object* v___x_1369_; uint8_t v_isShared_1370_; uint8_t v_isSharedCheck_1374_; 
lean_dec(v_goal_1031_);
v_a_1367_ = lean_ctor_get(v___x_1259_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v___x_1259_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1369_ = v___x_1259_;
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
else
{
lean_inc(v_a_1367_);
lean_dec(v___x_1259_);
v___x_1369_ = lean_box(0);
v_isShared_1370_ = v_isSharedCheck_1374_;
goto v_resetjp_1368_;
}
v_resetjp_1368_:
{
lean_object* v___x_1372_; 
if (v_isShared_1370_ == 0)
{
v___x_1372_ = v___x_1369_;
goto v_reusejp_1371_;
}
else
{
lean_object* v_reuseFailAlloc_1373_; 
v_reuseFailAlloc_1373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1373_, 0, v_a_1367_);
v___x_1372_ = v_reuseFailAlloc_1373_;
goto v_reusejp_1371_;
}
v_reusejp_1371_:
{
return v___x_1372_;
}
}
}
v___jp_1044_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
v___x_1051_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__5));
v___x_1052_ = lean_box(0);
v___x_1053_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1051_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1053_) == 0)
{
lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; 
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc(v_a_1054_);
lean_dec_ref_known(v___x_1053_, 1);
v___x_1055_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__7));
v___x_1056_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1055_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
lean_dec_ref_known(v___x_1056_, 1);
v___x_1058_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__9));
v___x_1059_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1058_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v_a_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; 
v_a_1060_ = lean_ctor_get(v___x_1059_, 0);
lean_inc(v_a_1060_);
lean_dec_ref_known(v___x_1059_, 1);
v___x_1061_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__11));
v___x_1062_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1061_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
lean_inc(v_a_1063_);
lean_dec_ref_known(v___x_1062_, 1);
v___x_1064_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__13));
v___x_1065_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1064_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1065_) == 0)
{
lean_object* v_a_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v_a_1066_ = lean_ctor_get(v___x_1065_, 0);
lean_inc(v_a_1066_);
lean_dec_ref_known(v___x_1065_, 1);
v___x_1067_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__15));
v___x_1068_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1067_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1068_) == 0)
{
lean_object* v_a_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; 
v_a_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc(v_a_1069_);
lean_dec_ref_known(v___x_1068_, 1);
v___x_1070_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__17));
v___x_1071_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1070_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1073_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__19));
v___x_1074_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1073_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1074_) == 0)
{
lean_object* v_a_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v_a_1075_ = lean_ctor_get(v___x_1074_, 0);
lean_inc(v_a_1075_);
lean_dec_ref_known(v___x_1074_, 1);
v___x_1076_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__23));
v___x_1077_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1076_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1077_) == 0)
{
lean_object* v_a_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v_a_1078_ = lean_ctor_get(v___x_1077_, 0);
lean_inc(v_a_1078_);
lean_dec_ref_known(v___x_1077_, 1);
v___x_1079_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__25));
v___x_1080_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1079_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1080_, 1);
v___x_1082_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__27));
v___x_1083_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1082_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1083_) == 0)
{
lean_object* v_a_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; 
v_a_1084_ = lean_ctor_get(v___x_1083_, 0);
lean_inc(v_a_1084_);
lean_dec_ref_known(v___x_1083_, 1);
v___x_1085_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__29));
v___x_1086_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1085_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1086_) == 0)
{
lean_object* v_a_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
v_a_1087_ = lean_ctor_get(v___x_1086_, 0);
lean_inc(v_a_1087_);
lean_dec_ref_known(v___x_1086_, 1);
v___x_1088_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__31));
v___x_1089_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1088_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_object* v_a_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; 
v_a_1090_ = lean_ctor_get(v___x_1089_, 0);
lean_inc(v_a_1090_);
lean_dec_ref_known(v___x_1089_, 1);
v___x_1091_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__33));
v___x_1092_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1091_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1092_) == 0)
{
lean_object* v_a_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; 
v_a_1093_ = lean_ctor_get(v___x_1092_, 0);
lean_inc(v_a_1093_);
lean_dec_ref_known(v___x_1092_, 1);
v___x_1094_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__36));
v___x_1095_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1094_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v_a_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; 
v_a_1096_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_a_1096_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1097_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__39));
v___x_1098_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v___x_1097_, v___x_1052_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
v___x_1100_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_SpecAttr_migrateSpecTheoremsDatabase___boxed), 9, 2);
lean_closure_set(v___x_1100_, 0, v_specThms_1046_);
lean_closure_set(v___x_1100_, 1, v___y_1045_);
v___x_1101_ = l_Lean_Meta_Sym_SymM_run___redArg(v___x_1100_, v___y_1047_, v___y_1048_, v___y_1049_, v___y_1050_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1115_; 
v_a_1102_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1104_ = v___x_1101_;
v_isShared_1105_ = v_isSharedCheck_1115_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1115_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
uint8_t v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1113_; 
v___x_1106_ = 1;
v___x_1107_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41);
v___x_1108_ = lean_alloc_ctor(0, 19, 5);
lean_ctor_set(v___x_1108_, 0, v_a_1054_);
lean_ctor_set(v___x_1108_, 1, v_a_1057_);
lean_ctor_set(v___x_1108_, 2, v_a_1060_);
lean_ctor_set(v___x_1108_, 3, v_a_1063_);
lean_ctor_set(v___x_1108_, 4, v_a_1066_);
lean_ctor_set(v___x_1108_, 5, v_a_1069_);
lean_ctor_set(v___x_1108_, 6, v_a_1072_);
lean_ctor_set(v___x_1108_, 7, v_a_1075_);
lean_ctor_set(v___x_1108_, 8, v_a_1078_);
lean_ctor_set(v___x_1108_, 9, v_a_1081_);
lean_ctor_set(v___x_1108_, 10, v_a_1084_);
lean_ctor_set(v___x_1108_, 11, v_a_1087_);
lean_ctor_set(v___x_1108_, 12, v_a_1090_);
lean_ctor_set(v___x_1108_, 13, v_a_1093_);
lean_ctor_set(v___x_1108_, 14, v_a_1096_);
lean_ctor_set(v___x_1108_, 15, v_a_1099_);
lean_ctor_set(v___x_1108_, 16, v___x_1052_);
lean_ctor_set(v___x_1108_, 17, v___x_1107_);
lean_ctor_set(v___x_1108_, 18, v___x_1052_);
lean_ctor_set_uint8(v___x_1108_, sizeof(void*)*19, v___x_1106_);
lean_ctor_set_uint8(v___x_1108_, sizeof(void*)*19 + 1, v___x_1043_);
lean_ctor_set_uint8(v___x_1108_, sizeof(void*)*19 + 2, v___x_1106_);
lean_ctor_set_uint8(v___x_1108_, sizeof(void*)*19 + 3, v___x_1043_);
lean_ctor_set_uint8(v___x_1108_, sizeof(void*)*19 + 4, v___x_1106_);
v___x_1109_ = lean_box(1);
v___x_1110_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1110_, 0, v_a_1102_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
lean_ctor_set(v___x_1110_, 2, v___x_1042_);
v___x_1111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1108_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
if (v_isShared_1105_ == 0)
{
lean_ctor_set(v___x_1104_, 0, v___x_1111_);
v___x_1113_ = v___x_1104_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1111_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
lean_dec(v_a_1099_);
lean_dec(v_a_1096_);
lean_dec(v_a_1093_);
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
v_a_1116_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1101_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1101_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec(v_a_1096_);
lean_dec(v_a_1093_);
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1124_ = lean_ctor_get(v___x_1098_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1098_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1098_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1098_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v___x_1129_; 
if (v_isShared_1127_ == 0)
{
v___x_1129_ = v___x_1126_;
goto v_reusejp_1128_;
}
else
{
lean_object* v_reuseFailAlloc_1130_; 
v_reuseFailAlloc_1130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1130_, 0, v_a_1124_);
v___x_1129_ = v_reuseFailAlloc_1130_;
goto v_reusejp_1128_;
}
v_reusejp_1128_:
{
return v___x_1129_;
}
}
}
}
else
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1139_; 
lean_dec(v_a_1093_);
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1132_ = lean_ctor_get(v___x_1095_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1134_ = v___x_1095_;
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1095_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1139_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1137_; 
if (v_isShared_1135_ == 0)
{
v___x_1137_ = v___x_1134_;
goto v_reusejp_1136_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1132_);
v___x_1137_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1136_;
}
v_reusejp_1136_:
{
return v___x_1137_;
}
}
}
}
else
{
lean_object* v_a_1140_; lean_object* v___x_1142_; uint8_t v_isShared_1143_; uint8_t v_isSharedCheck_1147_; 
lean_dec(v_a_1090_);
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1140_ = lean_ctor_get(v___x_1092_, 0);
v_isSharedCheck_1147_ = !lean_is_exclusive(v___x_1092_);
if (v_isSharedCheck_1147_ == 0)
{
v___x_1142_ = v___x_1092_;
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
else
{
lean_inc(v_a_1140_);
lean_dec(v___x_1092_);
v___x_1142_ = lean_box(0);
v_isShared_1143_ = v_isSharedCheck_1147_;
goto v_resetjp_1141_;
}
v_resetjp_1141_:
{
lean_object* v___x_1145_; 
if (v_isShared_1143_ == 0)
{
v___x_1145_ = v___x_1142_;
goto v_reusejp_1144_;
}
else
{
lean_object* v_reuseFailAlloc_1146_; 
v_reuseFailAlloc_1146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1146_, 0, v_a_1140_);
v___x_1145_ = v_reuseFailAlloc_1146_;
goto v_reusejp_1144_;
}
v_reusejp_1144_:
{
return v___x_1145_;
}
}
}
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
lean_dec(v_a_1087_);
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1148_ = lean_ctor_get(v___x_1089_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1089_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1089_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1089_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
else
{
lean_object* v_a_1156_; lean_object* v___x_1158_; uint8_t v_isShared_1159_; uint8_t v_isSharedCheck_1163_; 
lean_dec(v_a_1084_);
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1156_ = lean_ctor_get(v___x_1086_, 0);
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1086_);
if (v_isSharedCheck_1163_ == 0)
{
v___x_1158_ = v___x_1086_;
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
else
{
lean_inc(v_a_1156_);
lean_dec(v___x_1086_);
v___x_1158_ = lean_box(0);
v_isShared_1159_ = v_isSharedCheck_1163_;
goto v_resetjp_1157_;
}
v_resetjp_1157_:
{
lean_object* v___x_1161_; 
if (v_isShared_1159_ == 0)
{
v___x_1161_ = v___x_1158_;
goto v_reusejp_1160_;
}
else
{
lean_object* v_reuseFailAlloc_1162_; 
v_reuseFailAlloc_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1162_, 0, v_a_1156_);
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
lean_object* v_a_1164_; lean_object* v___x_1166_; uint8_t v_isShared_1167_; uint8_t v_isSharedCheck_1171_; 
lean_dec(v_a_1081_);
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1164_ = lean_ctor_get(v___x_1083_, 0);
v_isSharedCheck_1171_ = !lean_is_exclusive(v___x_1083_);
if (v_isSharedCheck_1171_ == 0)
{
v___x_1166_ = v___x_1083_;
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
else
{
lean_inc(v_a_1164_);
lean_dec(v___x_1083_);
v___x_1166_ = lean_box(0);
v_isShared_1167_ = v_isSharedCheck_1171_;
goto v_resetjp_1165_;
}
v_resetjp_1165_:
{
lean_object* v___x_1169_; 
if (v_isShared_1167_ == 0)
{
v___x_1169_ = v___x_1166_;
goto v_reusejp_1168_;
}
else
{
lean_object* v_reuseFailAlloc_1170_; 
v_reuseFailAlloc_1170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1170_, 0, v_a_1164_);
v___x_1169_ = v_reuseFailAlloc_1170_;
goto v_reusejp_1168_;
}
v_reusejp_1168_:
{
return v___x_1169_;
}
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec(v_a_1078_);
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1172_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1080_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1080_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1187_; 
lean_dec(v_a_1075_);
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1180_ = lean_ctor_get(v___x_1077_, 0);
v_isSharedCheck_1187_ = !lean_is_exclusive(v___x_1077_);
if (v_isSharedCheck_1187_ == 0)
{
v___x_1182_ = v___x_1077_;
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1077_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1187_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1185_; 
if (v_isShared_1183_ == 0)
{
v___x_1185_ = v___x_1182_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1186_; 
v_reuseFailAlloc_1186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1186_, 0, v_a_1180_);
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
else
{
lean_object* v_a_1188_; lean_object* v___x_1190_; uint8_t v_isShared_1191_; uint8_t v_isSharedCheck_1195_; 
lean_dec(v_a_1072_);
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1188_ = lean_ctor_get(v___x_1074_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1074_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1190_ = v___x_1074_;
v_isShared_1191_ = v_isSharedCheck_1195_;
goto v_resetjp_1189_;
}
else
{
lean_inc(v_a_1188_);
lean_dec(v___x_1074_);
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
lean_dec(v_a_1069_);
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1196_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1071_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1071_);
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
else
{
lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1211_; 
lean_dec(v_a_1066_);
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1204_ = lean_ctor_get(v___x_1068_, 0);
v_isSharedCheck_1211_ = !lean_is_exclusive(v___x_1068_);
if (v_isSharedCheck_1211_ == 0)
{
v___x_1206_ = v___x_1068_;
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1068_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1211_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1209_; 
if (v_isShared_1207_ == 0)
{
v___x_1209_ = v___x_1206_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v_a_1204_);
v___x_1209_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
return v___x_1209_;
}
}
}
}
else
{
lean_object* v_a_1212_; lean_object* v___x_1214_; uint8_t v_isShared_1215_; uint8_t v_isSharedCheck_1219_; 
lean_dec(v_a_1063_);
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1212_ = lean_ctor_get(v___x_1065_, 0);
v_isSharedCheck_1219_ = !lean_is_exclusive(v___x_1065_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1214_ = v___x_1065_;
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
else
{
lean_inc(v_a_1212_);
lean_dec(v___x_1065_);
v___x_1214_ = lean_box(0);
v_isShared_1215_ = v_isSharedCheck_1219_;
goto v_resetjp_1213_;
}
v_resetjp_1213_:
{
lean_object* v___x_1217_; 
if (v_isShared_1215_ == 0)
{
v___x_1217_ = v___x_1214_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_a_1212_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
return v___x_1217_;
}
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1060_);
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1220_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1062_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1062_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec(v_a_1057_);
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1228_ = lean_ctor_get(v___x_1059_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1059_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1059_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1059_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
else
{
lean_object* v_a_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1243_; 
lean_dec(v_a_1054_);
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1236_ = lean_ctor_get(v___x_1056_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1056_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1238_ = v___x_1056_;
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_a_1236_);
lean_dec(v___x_1056_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1243_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v___x_1241_; 
if (v_isShared_1239_ == 0)
{
v___x_1241_ = v___x_1238_;
goto v_reusejp_1240_;
}
else
{
lean_object* v_reuseFailAlloc_1242_; 
v_reuseFailAlloc_1242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1242_, 0, v_a_1236_);
v___x_1241_ = v_reuseFailAlloc_1242_;
goto v_reusejp_1240_;
}
v_reusejp_1240_:
{
return v___x_1241_;
}
}
}
}
else
{
lean_object* v_a_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1251_; 
lean_dec_ref(v_specThms_1046_);
lean_dec_ref(v___y_1045_);
v_a_1244_ = lean_ctor_get(v___x_1053_, 0);
v_isSharedCheck_1251_ = !lean_is_exclusive(v___x_1053_);
if (v_isSharedCheck_1251_ == 0)
{
v___x_1246_ = v___x_1053_;
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_a_1244_);
lean_dec(v___x_1053_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1251_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___x_1249_; 
if (v_isShared_1247_ == 0)
{
v___x_1249_ = v___x_1246_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_a_1244_);
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
}
else
{
lean_object* v_a_1375_; lean_object* v___x_1377_; uint8_t v_isShared_1378_; uint8_t v_isSharedCheck_1382_; 
lean_dec(v_goal_1031_);
v_a_1375_ = lean_ctor_get(v___x_1040_, 0);
v_isSharedCheck_1382_ = !lean_is_exclusive(v___x_1040_);
if (v_isSharedCheck_1382_ == 0)
{
v___x_1377_ = v___x_1040_;
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
else
{
lean_inc(v_a_1375_);
lean_dec(v___x_1040_);
v___x_1377_ = lean_box(0);
v_isShared_1378_ = v_isSharedCheck_1382_;
goto v_resetjp_1376_;
}
v_resetjp_1376_:
{
lean_object* v___x_1380_; 
if (v_isShared_1378_ == 0)
{
v___x_1380_ = v___x_1377_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v_a_1375_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___boxed(lean_object* v_lemmas_1383_, lean_object* v_goal_1384_, lean_object* v_ignoreStarArg_1385_, lean_object* v_a_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_, lean_object* v_a_1389_, lean_object* v_a_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_){
_start:
{
uint8_t v_ignoreStarArg_boxed_1393_; lean_object* v_res_1394_; 
v_ignoreStarArg_boxed_1393_ = lean_unbox(v_ignoreStarArg_1385_);
v_res_1394_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(v_lemmas_1383_, v_goal_1384_, v_ignoreStarArg_boxed_1393_, v_a_1386_, v_a_1387_, v_a_1388_, v_a_1389_, v_a_1390_, v_a_1391_);
lean_dec(v_a_1391_);
lean_dec_ref(v_a_1390_);
lean_dec(v_a_1389_);
lean_dec_ref(v_a_1388_);
lean_dec(v_a_1387_);
lean_dec_ref(v_a_1386_);
lean_dec(v_lemmas_1383_);
return v_res_1394_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1(lean_object* v_00_u03b1_1395_, lean_object* v_msg_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___redArg(v_msg_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1___boxed(lean_object* v_00_u03b1_1405_, lean_object* v_msg_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_){
_start:
{
lean_object* v_res_1414_; 
v_res_1414_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1(v_00_u03b1_1405_, v_msg_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
lean_dec(v___y_1412_);
lean_dec_ref(v___y_1411_);
lean_dec(v___y_1410_);
lean_dec_ref(v___y_1409_);
lean_dec(v___y_1408_);
lean_dec_ref(v___y_1407_);
return v_res_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2(lean_object* v_00_u03b1_1415_, lean_object* v_constName_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v___x_1424_; 
v___x_1424_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___redArg(v_constName_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_, v___y_1421_, v___y_1422_);
return v___x_1424_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2___boxed(lean_object* v_00_u03b1_1425_, lean_object* v_constName_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_){
_start:
{
lean_object* v_res_1434_; 
v_res_1434_ = l_Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2(v_00_u03b1_1425_, v_constName_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
lean_dec(v___y_1432_);
lean_dec_ref(v___y_1431_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
return v_res_1434_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4(lean_object* v_as_1435_, size_t v_sz_1436_, size_t v_i_1437_, lean_object* v_b_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_){
_start:
{
lean_object* v___x_1446_; 
v___x_1446_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___redArg(v_as_1435_, v_sz_1436_, v_i_1437_, v_b_1438_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4___boxed(lean_object* v_as_1447_, lean_object* v_sz_1448_, lean_object* v_i_1449_, lean_object* v_b_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
size_t v_sz_boxed_1458_; size_t v_i_boxed_1459_; lean_object* v_res_1460_; 
v_sz_boxed_1458_ = lean_unbox_usize(v_sz_1448_);
lean_dec(v_sz_1448_);
v_i_boxed_1459_ = lean_unbox_usize(v_i_1449_);
lean_dec(v_i_1449_);
v_res_1460_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__4(v_as_1447_, v_sz_boxed_1458_, v_i_boxed_1459_, v_b_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
lean_dec(v___y_1456_);
lean_dec_ref(v___y_1455_);
lean_dec(v___y_1454_);
lean_dec_ref(v___y_1453_);
lean_dec(v___y_1452_);
lean_dec_ref(v___y_1451_);
lean_dec_ref(v_as_1447_);
return v_res_1460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2(lean_object* v_msgData_1461_, lean_object* v_macroStack_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v___x_1470_; 
v___x_1470_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___redArg(v_msgData_1461_, v_macroStack_1462_, v___y_1467_);
return v___x_1470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2___boxed(lean_object* v_msgData_1471_, lean_object* v_macroStack_1472_, lean_object* v___y_1473_, lean_object* v___y_1474_, lean_object* v___y_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_){
_start:
{
lean_object* v_res_1480_; 
v_res_1480_ = l_Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2(v_msgData_1471_, v_macroStack_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_, v___y_1478_);
lean_dec(v___y_1478_);
lean_dec_ref(v___y_1477_);
lean_dec(v___y_1476_);
lean_dec_ref(v___y_1475_);
lean_dec(v___y_1474_);
lean_dec_ref(v___y_1473_);
return v_res_1480_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4(lean_object* v_00_u03b1_1481_, lean_object* v_ref_1482_, lean_object* v_constName_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
lean_object* v___x_1491_; 
v___x_1491_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___redArg(v_ref_1482_, v_constName_1483_, v___y_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_, v___y_1489_);
return v___x_1491_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4___boxed(lean_object* v_00_u03b1_1492_, lean_object* v_ref_1493_, lean_object* v_constName_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
lean_object* v_res_1502_; 
v_res_1502_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4(v_00_u03b1_1492_, v_ref_1493_, v_constName_1494_, v___y_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
lean_dec(v___y_1496_);
lean_dec_ref(v___y_1495_);
lean_dec(v_ref_1493_);
return v_res_1502_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9(lean_object* v_00_u03b1_1503_, lean_object* v_ref_1504_, lean_object* v_msg_1505_, lean_object* v_declHint_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_, lean_object* v___y_1512_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___redArg(v_ref_1504_, v_msg_1505_, v_declHint_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, v___y_1512_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9___boxed(lean_object* v_00_u03b1_1515_, lean_object* v_ref_1516_, lean_object* v_msg_1517_, lean_object* v_declHint_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_){
_start:
{
lean_object* v_res_1526_; 
v_res_1526_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9(v_00_u03b1_1515_, v_ref_1516_, v_msg_1517_, v_declHint_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
lean_dec(v___y_1524_);
lean_dec_ref(v___y_1523_);
lean_dec(v___y_1522_);
lean_dec_ref(v___y_1521_);
lean_dec(v___y_1520_);
lean_dec_ref(v___y_1519_);
lean_dec(v_ref_1516_);
return v_res_1526_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13(lean_object* v_msg_1527_, lean_object* v_declHint_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_, lean_object* v___y_1534_){
_start:
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg(v_msg_1527_, v_declHint_1528_, v___y_1534_);
return v___x_1536_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___boxed(lean_object* v_msg_1537_, lean_object* v_declHint_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
lean_object* v_res_1546_; 
v_res_1546_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13(v_msg_1537_, v_declHint_1538_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_);
lean_dec(v___y_1544_);
lean_dec_ref(v___y_1543_);
lean_dec(v___y_1542_);
lean_dec_ref(v___y_1541_);
lean_dec(v___y_1540_);
lean_dec_ref(v___y_1539_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13(lean_object* v_00_u03b1_1547_, lean_object* v_ref_1548_, lean_object* v_msg_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_){
_start:
{
lean_object* v___x_1557_; 
v___x_1557_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v_ref_1548_, v_msg_1549_, v___y_1550_, v___y_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
return v___x_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___boxed(lean_object* v_00_u03b1_1558_, lean_object* v_ref_1559_, lean_object* v_msg_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_){
_start:
{
lean_object* v_res_1568_; 
v_res_1568_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13(v_00_u03b1_1558_, v_ref_1559_, v_msg_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v_ref_1559_);
return v_res_1568_;
}
}
LEAN_EXPORT uint8_t l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(uint8_t v___y_1576_, uint8_t v_suppressElabErrors_1577_, lean_object* v_x_1578_){
_start:
{
if (lean_obj_tag(v_x_1578_) == 1)
{
lean_object* v_pre_1579_; 
v_pre_1579_ = lean_ctor_get(v_x_1578_, 0);
switch(lean_obj_tag(v_pre_1579_))
{
case 1:
{
lean_object* v_pre_1580_; 
v_pre_1580_ = lean_ctor_get(v_pre_1579_, 0);
switch(lean_obj_tag(v_pre_1580_))
{
case 0:
{
lean_object* v_str_1581_; lean_object* v_str_1582_; lean_object* v___x_1583_; uint8_t v___x_1584_; 
v_str_1581_ = lean_ctor_get(v_x_1578_, 1);
v_str_1582_ = lean_ctor_get(v_pre_1579_, 1);
v___x_1583_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__0));
v___x_1584_ = lean_string_dec_eq(v_str_1582_, v___x_1583_);
if (v___x_1584_ == 0)
{
lean_object* v___x_1585_; uint8_t v___x_1586_; 
v___x_1585_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2));
v___x_1586_ = lean_string_dec_eq(v_str_1582_, v___x_1585_);
if (v___x_1586_ == 0)
{
return v___y_1576_;
}
else
{
lean_object* v___x_1587_; uint8_t v___x_1588_; 
v___x_1587_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__1));
v___x_1588_ = lean_string_dec_eq(v_str_1581_, v___x_1587_);
if (v___x_1588_ == 0)
{
return v___y_1576_;
}
else
{
return v_suppressElabErrors_1577_;
}
}
}
else
{
lean_object* v___x_1589_; uint8_t v___x_1590_; 
v___x_1589_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__2));
v___x_1590_ = lean_string_dec_eq(v_str_1581_, v___x_1589_);
if (v___x_1590_ == 0)
{
return v___y_1576_;
}
else
{
return v_suppressElabErrors_1577_;
}
}
}
case 1:
{
lean_object* v_pre_1591_; 
v_pre_1591_ = lean_ctor_get(v_pre_1580_, 0);
if (lean_obj_tag(v_pre_1591_) == 0)
{
lean_object* v_str_1592_; lean_object* v_str_1593_; lean_object* v_str_1594_; lean_object* v___x_1595_; uint8_t v___x_1596_; 
v_str_1592_ = lean_ctor_get(v_x_1578_, 1);
v_str_1593_ = lean_ctor_get(v_pre_1579_, 1);
v_str_1594_ = lean_ctor_get(v_pre_1580_, 1);
v___x_1595_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__3));
v___x_1596_ = lean_string_dec_eq(v_str_1594_, v___x_1595_);
if (v___x_1596_ == 0)
{
return v___y_1576_;
}
else
{
lean_object* v___x_1597_; uint8_t v___x_1598_; 
v___x_1597_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__4));
v___x_1598_ = lean_string_dec_eq(v_str_1593_, v___x_1597_);
if (v___x_1598_ == 0)
{
return v___y_1576_;
}
else
{
lean_object* v___x_1599_; uint8_t v___x_1600_; 
v___x_1599_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__5));
v___x_1600_ = lean_string_dec_eq(v_str_1592_, v___x_1599_);
if (v___x_1600_ == 0)
{
return v___y_1576_;
}
else
{
return v_suppressElabErrors_1577_;
}
}
}
}
else
{
return v___y_1576_;
}
}
default: 
{
return v___y_1576_;
}
}
}
case 0:
{
lean_object* v_str_1601_; lean_object* v___x_1602_; uint8_t v___x_1603_; 
v_str_1601_ = lean_ctor_get(v_x_1578_, 1);
v___x_1602_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___closed__6));
v___x_1603_ = lean_string_dec_eq(v_str_1601_, v___x_1602_);
if (v___x_1603_ == 0)
{
return v___y_1576_;
}
else
{
return v_suppressElabErrors_1577_;
}
}
default: 
{
return v___y_1576_;
}
}
}
else
{
return v___y_1576_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed(lean_object* v___y_1604_, lean_object* v_suppressElabErrors_1605_, lean_object* v_x_1606_){
_start:
{
uint8_t v___y_2865__boxed_1607_; uint8_t v_suppressElabErrors_boxed_1608_; uint8_t v_res_1609_; lean_object* v_r_1610_; 
v___y_2865__boxed_1607_ = lean_unbox(v___y_1604_);
v_suppressElabErrors_boxed_1608_ = lean_unbox(v_suppressElabErrors_1605_);
v_res_1609_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0(v___y_2865__boxed_1607_, v_suppressElabErrors_boxed_1608_, v_x_1606_);
lean_dec(v_x_1606_);
v_r_1610_ = lean_box(v_res_1609_);
return v_r_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(lean_object* v_ref_1612_, lean_object* v_msgData_1613_, uint8_t v_severity_1614_, uint8_t v_isSilent_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1626_; uint8_t v___y_1627_; uint8_t v___y_1628_; lean_object* v___y_1629_; lean_object* v___y_1630_; lean_object* v___y_1658_; lean_object* v___y_1659_; uint8_t v___y_1660_; lean_object* v___y_1661_; lean_object* v___y_1662_; uint8_t v___y_1663_; uint8_t v___y_1664_; lean_object* v___y_1665_; lean_object* v___y_1683_; lean_object* v___y_1684_; uint8_t v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; uint8_t v___y_1688_; uint8_t v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1694_; lean_object* v___y_1695_; uint8_t v___y_1696_; lean_object* v___y_1697_; uint8_t v___y_1698_; lean_object* v___y_1699_; uint8_t v___y_1700_; uint8_t v___x_1705_; lean_object* v___y_1707_; uint8_t v___y_1708_; lean_object* v___y_1709_; lean_object* v___y_1710_; lean_object* v___y_1711_; uint8_t v___y_1712_; uint8_t v___y_1713_; uint8_t v___y_1715_; uint8_t v___x_1730_; 
v___x_1705_ = 2;
v___x_1730_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1614_, v___x_1705_);
if (v___x_1730_ == 0)
{
v___y_1715_ = v___x_1730_;
goto v___jp_1714_;
}
else
{
uint8_t v___x_1731_; 
lean_inc_ref(v_msgData_1613_);
v___x_1731_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_1613_);
v___y_1715_ = v___x_1731_;
goto v___jp_1714_;
}
v___jp_1621_:
{
lean_object* v___x_1631_; lean_object* v_currNamespace_1632_; lean_object* v_openDecls_1633_; lean_object* v_env_1634_; lean_object* v_nextMacroScope_1635_; lean_object* v_ngen_1636_; lean_object* v_auxDeclNGen_1637_; lean_object* v_traceState_1638_; lean_object* v_cache_1639_; lean_object* v_messages_1640_; lean_object* v_infoState_1641_; lean_object* v_snapshotTasks_1642_; lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1656_; 
v___x_1631_ = lean_st_ref_take(v___y_1630_);
v_currNamespace_1632_ = lean_ctor_get(v___y_1629_, 6);
v_openDecls_1633_ = lean_ctor_get(v___y_1629_, 7);
v_env_1634_ = lean_ctor_get(v___x_1631_, 0);
v_nextMacroScope_1635_ = lean_ctor_get(v___x_1631_, 1);
v_ngen_1636_ = lean_ctor_get(v___x_1631_, 2);
v_auxDeclNGen_1637_ = lean_ctor_get(v___x_1631_, 3);
v_traceState_1638_ = lean_ctor_get(v___x_1631_, 4);
v_cache_1639_ = lean_ctor_get(v___x_1631_, 5);
v_messages_1640_ = lean_ctor_get(v___x_1631_, 6);
v_infoState_1641_ = lean_ctor_get(v___x_1631_, 7);
v_snapshotTasks_1642_ = lean_ctor_get(v___x_1631_, 8);
v_isSharedCheck_1656_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1656_ == 0)
{
v___x_1644_ = v___x_1631_;
v_isShared_1645_ = v_isSharedCheck_1656_;
goto v_resetjp_1643_;
}
else
{
lean_inc(v_snapshotTasks_1642_);
lean_inc(v_infoState_1641_);
lean_inc(v_messages_1640_);
lean_inc(v_cache_1639_);
lean_inc(v_traceState_1638_);
lean_inc(v_auxDeclNGen_1637_);
lean_inc(v_ngen_1636_);
lean_inc(v_nextMacroScope_1635_);
lean_inc(v_env_1634_);
lean_dec(v___x_1631_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1656_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1651_; 
lean_inc(v_openDecls_1633_);
lean_inc(v_currNamespace_1632_);
v___x_1646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1646_, 0, v_currNamespace_1632_);
lean_ctor_set(v___x_1646_, 1, v_openDecls_1633_);
v___x_1647_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
lean_ctor_set(v___x_1647_, 1, v___y_1626_);
lean_inc_ref(v___y_1622_);
lean_inc_ref(v___y_1624_);
v___x_1648_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_1648_, 0, v___y_1624_);
lean_ctor_set(v___x_1648_, 1, v___y_1625_);
lean_ctor_set(v___x_1648_, 2, v___y_1623_);
lean_ctor_set(v___x_1648_, 3, v___y_1622_);
lean_ctor_set(v___x_1648_, 4, v___x_1647_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*5, v___y_1627_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*5 + 1, v___y_1628_);
lean_ctor_set_uint8(v___x_1648_, sizeof(void*)*5 + 2, v_isSilent_1615_);
v___x_1649_ = l_Lean_MessageLog_add(v___x_1648_, v_messages_1640_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set(v___x_1644_, 6, v___x_1649_);
v___x_1651_ = v___x_1644_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_env_1634_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_nextMacroScope_1635_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v_ngen_1636_);
lean_ctor_set(v_reuseFailAlloc_1655_, 3, v_auxDeclNGen_1637_);
lean_ctor_set(v_reuseFailAlloc_1655_, 4, v_traceState_1638_);
lean_ctor_set(v_reuseFailAlloc_1655_, 5, v_cache_1639_);
lean_ctor_set(v_reuseFailAlloc_1655_, 6, v___x_1649_);
lean_ctor_set(v_reuseFailAlloc_1655_, 7, v_infoState_1641_);
lean_ctor_set(v_reuseFailAlloc_1655_, 8, v_snapshotTasks_1642_);
v___x_1651_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; 
v___x_1652_ = lean_st_ref_set(v___y_1630_, v___x_1651_);
v___x_1653_ = lean_box(0);
v___x_1654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1654_, 0, v___x_1653_);
return v___x_1654_;
}
}
}
v___jp_1657_:
{
lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v_a_1668_; lean_object* v___x_1670_; uint8_t v_isShared_1671_; uint8_t v_isSharedCheck_1681_; 
v___x_1666_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_1613_);
v___x_1667_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v___x_1666_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_);
v_a_1668_ = lean_ctor_get(v___x_1667_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1681_ == 0)
{
v___x_1670_ = v___x_1667_;
v_isShared_1671_ = v_isSharedCheck_1681_;
goto v_resetjp_1669_;
}
else
{
lean_inc(v_a_1668_);
lean_dec(v___x_1667_);
v___x_1670_ = lean_box(0);
v_isShared_1671_ = v_isSharedCheck_1681_;
goto v_resetjp_1669_;
}
v_resetjp_1669_:
{
lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
lean_inc_ref_n(v___y_1659_, 2);
v___x_1672_ = l_Lean_FileMap_toPosition(v___y_1659_, v___y_1662_);
lean_dec(v___y_1662_);
v___x_1673_ = l_Lean_FileMap_toPosition(v___y_1659_, v___y_1665_);
lean_dec(v___y_1665_);
v___x_1674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1674_, 0, v___x_1673_);
v___x_1675_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_1660_ == 0)
{
lean_del_object(v___x_1670_);
lean_dec_ref(v___y_1658_);
v___y_1622_ = v___x_1675_;
v___y_1623_ = v___x_1674_;
v___y_1624_ = v___y_1661_;
v___y_1625_ = v___x_1672_;
v___y_1626_ = v_a_1668_;
v___y_1627_ = v___y_1663_;
v___y_1628_ = v___y_1664_;
v___y_1629_ = v___y_1618_;
v___y_1630_ = v___y_1619_;
goto v___jp_1621_;
}
else
{
uint8_t v___x_1676_; 
lean_inc(v_a_1668_);
v___x_1676_ = l_Lean_MessageData_hasTag(v___y_1658_, v_a_1668_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; lean_object* v___x_1679_; 
lean_dec_ref_known(v___x_1674_, 1);
lean_dec_ref(v___x_1672_);
lean_dec(v_a_1668_);
v___x_1677_ = lean_box(0);
if (v_isShared_1671_ == 0)
{
lean_ctor_set(v___x_1670_, 0, v___x_1677_);
v___x_1679_ = v___x_1670_;
goto v_reusejp_1678_;
}
else
{
lean_object* v_reuseFailAlloc_1680_; 
v_reuseFailAlloc_1680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1680_, 0, v___x_1677_);
v___x_1679_ = v_reuseFailAlloc_1680_;
goto v_reusejp_1678_;
}
v_reusejp_1678_:
{
return v___x_1679_;
}
}
else
{
lean_del_object(v___x_1670_);
v___y_1622_ = v___x_1675_;
v___y_1623_ = v___x_1674_;
v___y_1624_ = v___y_1661_;
v___y_1625_ = v___x_1672_;
v___y_1626_ = v_a_1668_;
v___y_1627_ = v___y_1663_;
v___y_1628_ = v___y_1664_;
v___y_1629_ = v___y_1618_;
v___y_1630_ = v___y_1619_;
goto v___jp_1621_;
}
}
}
}
v___jp_1682_:
{
lean_object* v___x_1691_; 
v___x_1691_ = l_Lean_Syntax_getTailPos_x3f(v___y_1687_, v___y_1688_);
lean_dec(v___y_1687_);
if (lean_obj_tag(v___x_1691_) == 0)
{
lean_inc(v___y_1690_);
v___y_1658_ = v___y_1683_;
v___y_1659_ = v___y_1684_;
v___y_1660_ = v___y_1685_;
v___y_1661_ = v___y_1686_;
v___y_1662_ = v___y_1690_;
v___y_1663_ = v___y_1688_;
v___y_1664_ = v___y_1689_;
v___y_1665_ = v___y_1690_;
goto v___jp_1657_;
}
else
{
lean_object* v_val_1692_; 
v_val_1692_ = lean_ctor_get(v___x_1691_, 0);
lean_inc(v_val_1692_);
lean_dec_ref_known(v___x_1691_, 1);
v___y_1658_ = v___y_1683_;
v___y_1659_ = v___y_1684_;
v___y_1660_ = v___y_1685_;
v___y_1661_ = v___y_1686_;
v___y_1662_ = v___y_1690_;
v___y_1663_ = v___y_1688_;
v___y_1664_ = v___y_1689_;
v___y_1665_ = v_val_1692_;
goto v___jp_1657_;
}
}
v___jp_1693_:
{
lean_object* v_ref_1701_; lean_object* v___x_1702_; 
v_ref_1701_ = l_Lean_replaceRef(v_ref_1612_, v___y_1699_);
v___x_1702_ = l_Lean_Syntax_getPos_x3f(v_ref_1701_, v___y_1698_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v___x_1703_; 
v___x_1703_ = lean_unsigned_to_nat(0u);
v___y_1683_ = v___y_1694_;
v___y_1684_ = v___y_1695_;
v___y_1685_ = v___y_1696_;
v___y_1686_ = v___y_1697_;
v___y_1687_ = v_ref_1701_;
v___y_1688_ = v___y_1698_;
v___y_1689_ = v___y_1700_;
v___y_1690_ = v___x_1703_;
goto v___jp_1682_;
}
else
{
lean_object* v_val_1704_; 
v_val_1704_ = lean_ctor_get(v___x_1702_, 0);
lean_inc(v_val_1704_);
lean_dec_ref_known(v___x_1702_, 1);
v___y_1683_ = v___y_1694_;
v___y_1684_ = v___y_1695_;
v___y_1685_ = v___y_1696_;
v___y_1686_ = v___y_1697_;
v___y_1687_ = v_ref_1701_;
v___y_1688_ = v___y_1698_;
v___y_1689_ = v___y_1700_;
v___y_1690_ = v_val_1704_;
goto v___jp_1682_;
}
}
v___jp_1706_:
{
if (v___y_1713_ == 0)
{
v___y_1694_ = v___y_1710_;
v___y_1695_ = v___y_1707_;
v___y_1696_ = v___y_1708_;
v___y_1697_ = v___y_1709_;
v___y_1698_ = v___y_1712_;
v___y_1699_ = v___y_1711_;
v___y_1700_ = v_severity_1614_;
goto v___jp_1693_;
}
else
{
v___y_1694_ = v___y_1710_;
v___y_1695_ = v___y_1707_;
v___y_1696_ = v___y_1708_;
v___y_1697_ = v___y_1709_;
v___y_1698_ = v___y_1712_;
v___y_1699_ = v___y_1711_;
v___y_1700_ = v___x_1705_;
goto v___jp_1693_;
}
}
v___jp_1714_:
{
if (v___y_1715_ == 0)
{
lean_object* v_fileName_1716_; lean_object* v_fileMap_1717_; lean_object* v_options_1718_; lean_object* v_ref_1719_; uint8_t v_suppressElabErrors_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___f_1723_; uint8_t v___x_1724_; uint8_t v___x_1725_; 
v_fileName_1716_ = lean_ctor_get(v___y_1618_, 0);
v_fileMap_1717_ = lean_ctor_get(v___y_1618_, 1);
v_options_1718_ = lean_ctor_get(v___y_1618_, 2);
v_ref_1719_ = lean_ctor_get(v___y_1618_, 5);
v_suppressElabErrors_1720_ = lean_ctor_get_uint8(v___y_1618_, sizeof(void*)*14 + 1);
v___x_1721_ = lean_box(v___y_1715_);
v___x_1722_ = lean_box(v_suppressElabErrors_1720_);
v___f_1723_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_1723_, 0, v___x_1721_);
lean_closure_set(v___f_1723_, 1, v___x_1722_);
v___x_1724_ = 1;
v___x_1725_ = l_Lean_instBEqMessageSeverity_beq(v_severity_1614_, v___x_1724_);
if (v___x_1725_ == 0)
{
v___y_1707_ = v_fileMap_1717_;
v___y_1708_ = v_suppressElabErrors_1720_;
v___y_1709_ = v_fileName_1716_;
v___y_1710_ = v___f_1723_;
v___y_1711_ = v_ref_1719_;
v___y_1712_ = v___y_1715_;
v___y_1713_ = v___x_1725_;
goto v___jp_1706_;
}
else
{
lean_object* v___x_1726_; uint8_t v___x_1727_; 
v___x_1726_ = l_Lean_warningAsError;
v___x_1727_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_1718_, v___x_1726_);
v___y_1707_ = v_fileMap_1717_;
v___y_1708_ = v_suppressElabErrors_1720_;
v___y_1709_ = v_fileName_1716_;
v___y_1710_ = v___f_1723_;
v___y_1711_ = v_ref_1719_;
v___y_1712_ = v___y_1715_;
v___y_1713_ = v___x_1727_;
goto v___jp_1706_;
}
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; 
lean_dec_ref(v_msgData_1613_);
v___x_1728_ = lean_box(0);
v___x_1729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1729_, 0, v___x_1728_);
return v___x_1729_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___boxed(lean_object* v_ref_1732_, lean_object* v_msgData_1733_, lean_object* v_severity_1734_, lean_object* v_isSilent_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
uint8_t v_severity_boxed_1741_; uint8_t v_isSilent_boxed_1742_; lean_object* v_res_1743_; 
v_severity_boxed_1741_ = lean_unbox(v_severity_1734_);
v_isSilent_boxed_1742_ = lean_unbox(v_isSilent_1735_);
v_res_1743_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(v_ref_1732_, v_msgData_1733_, v_severity_boxed_1741_, v_isSilent_boxed_1742_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v_ref_1732_);
return v_res_1743_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(lean_object* v_msgData_1744_, uint8_t v_severity_1745_, uint8_t v_isSilent_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_ref_1752_; lean_object* v___x_1753_; 
v_ref_1752_ = lean_ctor_get(v___y_1749_, 5);
v___x_1753_ = l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1(v_ref_1752_, v_msgData_1744_, v_severity_1745_, v_isSilent_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0___boxed(lean_object* v_msgData_1754_, lean_object* v_severity_1755_, lean_object* v_isSilent_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_){
_start:
{
uint8_t v_severity_boxed_1762_; uint8_t v_isSilent_boxed_1763_; lean_object* v_res_1764_; 
v_severity_boxed_1762_ = lean_unbox(v_severity_1755_);
v_isSilent_boxed_1763_ = lean_unbox(v_isSilent_1756_);
v_res_1764_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(v_msgData_1754_, v_severity_boxed_1762_, v_isSilent_boxed_1763_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec_ref(v___y_1757_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(lean_object* v_msgData_1765_, lean_object* v___y_1766_, lean_object* v___y_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_){
_start:
{
uint8_t v___x_1771_; uint8_t v___x_1772_; lean_object* v___x_1773_; 
v___x_1771_ = 1;
v___x_1772_ = 0;
v___x_1773_ = l_Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0(v_msgData_1765_, v___x_1771_, v___x_1772_, v___y_1766_, v___y_1767_, v___y_1768_, v___y_1769_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0___boxed(lean_object* v_msgData_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(v_msgData_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
return v_res_1780_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__1));
v___x_1785_ = l_Lean_MessageData_ofFormat(v___x_1784_);
return v___x_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(lean_object* v_config_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_){
_start:
{
uint8_t v_leave_1792_; 
v_leave_1792_ = lean_ctor_get_uint8(v_config_1786_, sizeof(void*)*1 + 1);
if (v_leave_1792_ == 0)
{
lean_object* v___x_1793_; lean_object* v___x_1794_; 
v___x_1793_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___closed__2);
v___x_1794_ = l_Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0(v___x_1793_, v_a_1787_, v_a_1788_, v_a_1789_, v_a_1790_);
return v___x_1794_;
}
else
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1795_ = lean_box(0);
v___x_1796_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1796_, 0, v___x_1795_);
return v___x_1796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig___boxed(lean_object* v_config_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_, lean_object* v_a_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(v_config_1797_, v_a_1798_, v_a_1799_, v_a_1800_, v_a_1801_);
lean_dec(v_a_1801_);
lean_dec_ref(v_a_1800_);
lean_dec(v_a_1799_);
lean_dec_ref(v_a_1798_);
lean_dec_ref(v_config_1797_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(lean_object* v_x_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_, lean_object* v___y_1809_, lean_object* v___y_1810_, lean_object* v___y_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1817_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___closed__0));
v___x_1818_ = l_Lean_Meta_Sym_Simp_simpArrowTelescope(v___x_1817_, v___y_1806_, v___y_1807_, v___y_1808_, v___y_1809_, v___y_1810_, v___y_1811_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
return v___x_1818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0___boxed(lean_object* v_x_1819_, lean_object* v___y_1820_, lean_object* v___y_1821_, lean_object* v___y_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_){
_start:
{
lean_object* v_res_1831_; 
v_res_1831_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__0(v_x_1819_, v___y_1820_, v___y_1821_, v___y_1822_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
lean_dec(v___y_1827_);
lean_dec_ref(v___y_1826_);
lean_dec(v___y_1825_);
lean_dec_ref(v___y_1824_);
lean_dec(v___y_1823_);
lean_dec_ref(v___y_1822_);
lean_dec(v___y_1821_);
return v_res_1831_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(lean_object* v___f_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_, lean_object* v___y_1835_, lean_object* v___y_1836_, lean_object* v___y_1837_, lean_object* v___y_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_){
_start:
{
lean_object* v___x_1844_; 
lean_inc_ref(v___y_1833_);
v___x_1844_ = l_Lean_Meta_Sym_Simp_simpControl(v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
if (lean_obj_tag(v___x_1844_) == 0)
{
lean_object* v_a_1845_; lean_object* v___x_1846_; 
v_a_1845_ = lean_ctor_get(v___x_1844_, 0);
lean_inc(v_a_1845_);
v___x_1846_ = lean_box(0);
if (lean_obj_tag(v_a_1845_) == 0)
{
uint8_t v_done_1847_; 
v_done_1847_ = lean_ctor_get_uint8(v_a_1845_, 0);
if (v_done_1847_ == 0)
{
uint8_t v_contextDependent_1848_; lean_object* v___x_1849_; 
lean_dec_ref_known(v___x_1844_, 1);
v_contextDependent_1848_ = lean_ctor_get_uint8(v_a_1845_, 1);
lean_dec_ref_known(v_a_1845_, 0);
v___x_1849_ = lean_apply_12(v___f_1832_, v___x_1846_, v___y_1833_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, lean_box(0));
if (lean_obj_tag(v___x_1849_) == 0)
{
lean_object* v_a_1850_; uint8_t v___y_1852_; 
v_a_1850_ = lean_ctor_get(v___x_1849_, 0);
lean_inc(v_a_1850_);
if (v_contextDependent_1848_ == 0)
{
lean_dec(v_a_1850_);
return v___x_1849_;
}
else
{
if (lean_obj_tag(v_a_1850_) == 0)
{
uint8_t v_contextDependent_1862_; 
v_contextDependent_1862_ = lean_ctor_get_uint8(v_a_1850_, 1);
v___y_1852_ = v_contextDependent_1862_;
goto v___jp_1851_;
}
else
{
uint8_t v_contextDependent_1863_; 
v_contextDependent_1863_ = lean_ctor_get_uint8(v_a_1850_, sizeof(void*)*2 + 1);
v___y_1852_ = v_contextDependent_1863_;
goto v___jp_1851_;
}
}
v___jp_1851_:
{
if (v___y_1852_ == 0)
{
lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1860_; 
v_isSharedCheck_1860_ = !lean_is_exclusive(v___x_1849_);
if (v_isSharedCheck_1860_ == 0)
{
lean_object* v_unused_1861_; 
v_unused_1861_ = lean_ctor_get(v___x_1849_, 0);
lean_dec(v_unused_1861_);
v___x_1854_ = v___x_1849_;
v_isShared_1855_ = v_isSharedCheck_1860_;
goto v_resetjp_1853_;
}
else
{
lean_dec(v___x_1849_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1860_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1856_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_1850_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v___x_1856_);
v___x_1858_ = v___x_1854_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1856_);
v___x_1858_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
return v___x_1858_;
}
}
}
else
{
lean_dec(v_a_1850_);
return v___x_1849_;
}
}
}
else
{
return v___x_1849_;
}
}
else
{
lean_dec_ref_known(v_a_1845_, 0);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v___f_1832_);
return v___x_1844_;
}
}
else
{
uint8_t v_done_1864_; 
v_done_1864_ = lean_ctor_get_uint8(v_a_1845_, sizeof(void*)*2);
if (v_done_1864_ == 0)
{
lean_object* v_e_x27_1865_; lean_object* v_proof_1866_; uint8_t v_contextDependent_1867_; lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1917_; 
lean_dec_ref_known(v___x_1844_, 1);
v_e_x27_1865_ = lean_ctor_get(v_a_1845_, 0);
v_proof_1866_ = lean_ctor_get(v_a_1845_, 1);
v_contextDependent_1867_ = lean_ctor_get_uint8(v_a_1845_, sizeof(void*)*2 + 1);
v_isSharedCheck_1917_ = !lean_is_exclusive(v_a_1845_);
if (v_isSharedCheck_1917_ == 0)
{
v___x_1869_ = v_a_1845_;
v_isShared_1870_ = v_isSharedCheck_1917_;
goto v_resetjp_1868_;
}
else
{
lean_inc(v_proof_1866_);
lean_inc(v_e_x27_1865_);
lean_dec(v_a_1845_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1917_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1871_; 
lean_inc(v___y_1842_);
lean_inc_ref(v___y_1841_);
lean_inc(v___y_1840_);
lean_inc_ref(v___y_1839_);
lean_inc(v___y_1838_);
lean_inc_ref(v_e_x27_1865_);
v___x_1871_ = lean_apply_12(v___f_1832_, v___x_1846_, v_e_x27_1865_, v___y_1834_, v___y_1835_, v___y_1836_, v___y_1837_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, lean_box(0));
if (lean_obj_tag(v___x_1871_) == 0)
{
lean_object* v_a_1872_; lean_object* v___x_1874_; uint8_t v_isShared_1875_; uint8_t v_isSharedCheck_1916_; 
v_a_1872_ = lean_ctor_get(v___x_1871_, 0);
v_isSharedCheck_1916_ = !lean_is_exclusive(v___x_1871_);
if (v_isSharedCheck_1916_ == 0)
{
v___x_1874_ = v___x_1871_;
v_isShared_1875_ = v_isSharedCheck_1916_;
goto v_resetjp_1873_;
}
else
{
lean_inc(v_a_1872_);
lean_dec(v___x_1871_);
v___x_1874_ = lean_box(0);
v_isShared_1875_ = v_isSharedCheck_1916_;
goto v_resetjp_1873_;
}
v_resetjp_1873_:
{
if (lean_obj_tag(v_a_1872_) == 0)
{
uint8_t v_done_1876_; uint8_t v_contextDependent_1877_; uint8_t v___y_1879_; 
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1833_);
v_done_1876_ = lean_ctor_get_uint8(v_a_1872_, 0);
v_contextDependent_1877_ = lean_ctor_get_uint8(v_a_1872_, 1);
lean_dec_ref_known(v_a_1872_, 0);
if (v_contextDependent_1867_ == 0)
{
v___y_1879_ = v_contextDependent_1877_;
goto v___jp_1878_;
}
else
{
v___y_1879_ = v_contextDependent_1867_;
goto v___jp_1878_;
}
v___jp_1878_:
{
lean_object* v___x_1881_; 
if (v_isShared_1870_ == 0)
{
v___x_1881_ = v___x_1869_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v_e_x27_1865_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v_proof_1866_);
v___x_1881_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
lean_object* v___x_1883_; 
lean_ctor_set_uint8(v___x_1881_, sizeof(void*)*2, v_done_1876_);
lean_ctor_set_uint8(v___x_1881_, sizeof(void*)*2 + 1, v___y_1879_);
if (v_isShared_1875_ == 0)
{
lean_ctor_set(v___x_1874_, 0, v___x_1881_);
v___x_1883_ = v___x_1874_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1881_);
v___x_1883_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
return v___x_1883_;
}
}
}
}
else
{
lean_object* v_e_x27_1886_; lean_object* v_proof_1887_; uint8_t v_done_1888_; uint8_t v_contextDependent_1889_; lean_object* v___x_1891_; uint8_t v_isShared_1892_; uint8_t v_isSharedCheck_1915_; 
lean_del_object(v___x_1874_);
lean_del_object(v___x_1869_);
v_e_x27_1886_ = lean_ctor_get(v_a_1872_, 0);
v_proof_1887_ = lean_ctor_get(v_a_1872_, 1);
v_done_1888_ = lean_ctor_get_uint8(v_a_1872_, sizeof(void*)*2);
v_contextDependent_1889_ = lean_ctor_get_uint8(v_a_1872_, sizeof(void*)*2 + 1);
v_isSharedCheck_1915_ = !lean_is_exclusive(v_a_1872_);
if (v_isSharedCheck_1915_ == 0)
{
v___x_1891_ = v_a_1872_;
v_isShared_1892_ = v_isSharedCheck_1915_;
goto v_resetjp_1890_;
}
else
{
lean_inc(v_proof_1887_);
lean_inc(v_e_x27_1886_);
lean_dec(v_a_1872_);
v___x_1891_ = lean_box(0);
v_isShared_1892_ = v_isSharedCheck_1915_;
goto v_resetjp_1890_;
}
v_resetjp_1890_:
{
lean_object* v___x_1893_; 
lean_inc_ref(v_e_x27_1886_);
v___x_1893_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1833_, v_e_x27_1865_, v_proof_1866_, v_e_x27_1886_, v_proof_1887_, v___y_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
if (lean_obj_tag(v___x_1893_) == 0)
{
lean_object* v_a_1894_; lean_object* v___x_1896_; uint8_t v_isShared_1897_; uint8_t v_isSharedCheck_1906_; 
v_a_1894_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1896_ = v___x_1893_;
v_isShared_1897_ = v_isSharedCheck_1906_;
goto v_resetjp_1895_;
}
else
{
lean_inc(v_a_1894_);
lean_dec(v___x_1893_);
v___x_1896_ = lean_box(0);
v_isShared_1897_ = v_isSharedCheck_1906_;
goto v_resetjp_1895_;
}
v_resetjp_1895_:
{
uint8_t v___y_1899_; 
if (v_contextDependent_1867_ == 0)
{
v___y_1899_ = v_contextDependent_1889_;
goto v___jp_1898_;
}
else
{
v___y_1899_ = v_contextDependent_1867_;
goto v___jp_1898_;
}
v___jp_1898_:
{
lean_object* v___x_1901_; 
if (v_isShared_1892_ == 0)
{
lean_ctor_set(v___x_1891_, 1, v_a_1894_);
v___x_1901_ = v___x_1891_;
goto v_reusejp_1900_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_e_x27_1886_);
lean_ctor_set(v_reuseFailAlloc_1905_, 1, v_a_1894_);
lean_ctor_set_uint8(v_reuseFailAlloc_1905_, sizeof(void*)*2, v_done_1888_);
v___x_1901_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1900_;
}
v_reusejp_1900_:
{
lean_object* v___x_1903_; 
lean_ctor_set_uint8(v___x_1901_, sizeof(void*)*2 + 1, v___y_1899_);
if (v_isShared_1897_ == 0)
{
lean_ctor_set(v___x_1896_, 0, v___x_1901_);
v___x_1903_ = v___x_1896_;
goto v_reusejp_1902_;
}
else
{
lean_object* v_reuseFailAlloc_1904_; 
v_reuseFailAlloc_1904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1904_, 0, v___x_1901_);
v___x_1903_ = v_reuseFailAlloc_1904_;
goto v_reusejp_1902_;
}
v_reusejp_1902_:
{
return v___x_1903_;
}
}
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
lean_del_object(v___x_1891_);
lean_dec_ref(v_e_x27_1886_);
v_a_1907_ = lean_ctor_get(v___x_1893_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v___x_1893_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v___x_1893_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_1869_);
lean_dec_ref(v_proof_1866_);
lean_dec_ref(v_e_x27_1865_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1833_);
return v___x_1871_;
}
}
}
else
{
lean_dec_ref_known(v_a_1845_, 2);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v___f_1832_);
return v___x_1844_;
}
}
}
else
{
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
lean_dec(v___y_1840_);
lean_dec_ref(v___y_1839_);
lean_dec(v___y_1838_);
lean_dec_ref(v___y_1837_);
lean_dec(v___y_1836_);
lean_dec_ref(v___y_1835_);
lean_dec(v___y_1834_);
lean_dec_ref(v___y_1833_);
lean_dec_ref(v___f_1832_);
return v___x_1844_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1___boxed(lean_object* v___f_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__1(v___f_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(lean_object* v_a_1932_, lean_object* v_x_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___closed__0));
v___x_1946_ = l_Lean_Meta_Sym_Simp_Theorems_rewrite(v_a_1932_, v___x_1945_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed(lean_object* v_a_1947_, lean_object* v_x_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2(v_a_1947_, v_x_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v_a_1947_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(lean_object* v___f_1961_, lean_object* v___x_1962_, lean_object* v___f_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_, lean_object* v___y_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_){
_start:
{
lean_object* v___y_1976_; uint8_t v___y_1977_; lean_object* v___y_1978_; uint8_t v___y_1979_; uint8_t v___y_1983_; lean_object* v___y_1984_; lean_object* v___y_1985_; uint8_t v___y_1986_; lean_object* v___y_1990_; lean_object* v_e_x27_1991_; lean_object* v_proof_1992_; uint8_t v_done_1993_; uint8_t v_contextDependent_1994_; lean_object* v___y_2017_; lean_object* v___y_2018_; uint8_t v___y_2019_; lean_object* v___y_2023_; lean_object* v_a_2024_; lean_object* v___y_2037_; lean_object* v___x_2039_; 
lean_inc_ref(v___y_1964_);
v___x_2039_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_1962_, v___y_1964_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v_a_2040_; lean_object* v___x_2041_; 
v_a_2040_ = lean_ctor_get(v___x_2039_, 0);
lean_inc(v_a_2040_);
v___x_2041_ = lean_box(0);
if (lean_obj_tag(v_a_2040_) == 0)
{
uint8_t v_done_2042_; 
v_done_2042_ = lean_ctor_get_uint8(v_a_2040_, 0);
if (v_done_2042_ == 0)
{
uint8_t v_contextDependent_2043_; lean_object* v___x_2044_; 
lean_dec_ref_known(v___x_2039_, 1);
v_contextDependent_2043_ = lean_ctor_get_uint8(v_a_2040_, 1);
lean_dec_ref_known(v_a_2040_, 0);
lean_inc(v___y_1973_);
lean_inc_ref(v___y_1972_);
lean_inc(v___y_1971_);
lean_inc_ref(v___y_1970_);
lean_inc(v___y_1969_);
lean_inc_ref(v___y_1968_);
lean_inc(v___y_1967_);
lean_inc_ref(v___y_1966_);
lean_inc(v___y_1965_);
lean_inc_ref(v___y_1964_);
v___x_2044_ = lean_apply_12(v___f_1963_, v___x_2041_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, lean_box(0));
if (lean_obj_tag(v___x_2044_) == 0)
{
lean_object* v_a_2045_; uint8_t v___y_2047_; 
v_a_2045_ = lean_ctor_get(v___x_2044_, 0);
lean_inc(v_a_2045_);
if (v_contextDependent_2043_ == 0)
{
v___y_2023_ = v___x_2044_;
v_a_2024_ = v_a_2045_;
goto v___jp_2022_;
}
else
{
if (lean_obj_tag(v_a_2045_) == 0)
{
uint8_t v_contextDependent_2057_; 
v_contextDependent_2057_ = lean_ctor_get_uint8(v_a_2045_, 1);
v___y_2047_ = v_contextDependent_2057_;
goto v___jp_2046_;
}
else
{
uint8_t v_contextDependent_2058_; 
v_contextDependent_2058_ = lean_ctor_get_uint8(v_a_2045_, sizeof(void*)*2 + 1);
v___y_2047_ = v_contextDependent_2058_;
goto v___jp_2046_;
}
}
v___jp_2046_:
{
if (v___y_2047_ == 0)
{
lean_object* v___x_2049_; uint8_t v_isShared_2050_; uint8_t v_isSharedCheck_2055_; 
v_isSharedCheck_2055_ = !lean_is_exclusive(v___x_2044_);
if (v_isSharedCheck_2055_ == 0)
{
lean_object* v_unused_2056_; 
v_unused_2056_ = lean_ctor_get(v___x_2044_, 0);
lean_dec(v_unused_2056_);
v___x_2049_ = v___x_2044_;
v_isShared_2050_ = v_isSharedCheck_2055_;
goto v_resetjp_2048_;
}
else
{
lean_dec(v___x_2044_);
v___x_2049_ = lean_box(0);
v_isShared_2050_ = v_isSharedCheck_2055_;
goto v_resetjp_2048_;
}
v_resetjp_2048_:
{
lean_object* v___x_2051_; lean_object* v___x_2053_; 
v___x_2051_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2045_);
lean_inc_ref(v___x_2051_);
if (v_isShared_2050_ == 0)
{
lean_ctor_set(v___x_2049_, 0, v___x_2051_);
v___x_2053_ = v___x_2049_;
goto v_reusejp_2052_;
}
else
{
lean_object* v_reuseFailAlloc_2054_; 
v_reuseFailAlloc_2054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2054_, 0, v___x_2051_);
v___x_2053_ = v_reuseFailAlloc_2054_;
goto v_reusejp_2052_;
}
v_reusejp_2052_:
{
v___y_2023_ = v___x_2053_;
v_a_2024_ = v___x_2051_;
goto v___jp_2022_;
}
}
}
else
{
v___y_2023_ = v___x_2044_;
v_a_2024_ = v_a_2045_;
goto v___jp_2022_;
}
}
}
else
{
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v___f_1961_);
return v___x_2044_;
}
}
else
{
lean_dec_ref_known(v_a_2040_, 0);
lean_dec_ref(v___f_1963_);
v___y_2037_ = v___x_2039_;
goto v___jp_2036_;
}
}
else
{
uint8_t v_done_2059_; 
v_done_2059_ = lean_ctor_get_uint8(v_a_2040_, sizeof(void*)*2);
if (v_done_2059_ == 0)
{
lean_object* v_e_x27_2060_; lean_object* v_proof_2061_; uint8_t v_contextDependent_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2112_; 
lean_dec_ref_known(v___x_2039_, 1);
v_e_x27_2060_ = lean_ctor_get(v_a_2040_, 0);
v_proof_2061_ = lean_ctor_get(v_a_2040_, 1);
v_contextDependent_2062_ = lean_ctor_get_uint8(v_a_2040_, sizeof(void*)*2 + 1);
v_isSharedCheck_2112_ = !lean_is_exclusive(v_a_2040_);
if (v_isSharedCheck_2112_ == 0)
{
v___x_2064_ = v_a_2040_;
v_isShared_2065_ = v_isSharedCheck_2112_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_proof_2061_);
lean_inc(v_e_x27_2060_);
lean_dec(v_a_2040_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2112_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; 
lean_inc(v___y_1973_);
lean_inc_ref(v___y_1972_);
lean_inc(v___y_1971_);
lean_inc_ref(v___y_1970_);
lean_inc(v___y_1969_);
lean_inc_ref(v___y_1968_);
lean_inc(v___y_1967_);
lean_inc_ref(v___y_1966_);
lean_inc(v___y_1965_);
lean_inc_ref(v_e_x27_2060_);
v___x_2066_ = lean_apply_12(v___f_1963_, v___x_2041_, v_e_x27_2060_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, lean_box(0));
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2111_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2069_ = v___x_2066_;
v_isShared_2070_ = v_isSharedCheck_2111_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2111_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
if (lean_obj_tag(v_a_2067_) == 0)
{
uint8_t v_done_2071_; uint8_t v_contextDependent_2072_; uint8_t v___y_2074_; 
v_done_2071_ = lean_ctor_get_uint8(v_a_2067_, 0);
v_contextDependent_2072_ = lean_ctor_get_uint8(v_a_2067_, 1);
lean_dec_ref_known(v_a_2067_, 0);
if (v_contextDependent_2062_ == 0)
{
v___y_2074_ = v_contextDependent_2072_;
goto v___jp_2073_;
}
else
{
v___y_2074_ = v_contextDependent_2062_;
goto v___jp_2073_;
}
v___jp_2073_:
{
lean_object* v___x_2076_; 
lean_inc_ref(v_proof_2061_);
lean_inc_ref(v_e_x27_2060_);
if (v_isShared_2065_ == 0)
{
v___x_2076_ = v___x_2064_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2080_; 
v_reuseFailAlloc_2080_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2080_, 0, v_e_x27_2060_);
lean_ctor_set(v_reuseFailAlloc_2080_, 1, v_proof_2061_);
v___x_2076_ = v_reuseFailAlloc_2080_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
lean_object* v___x_2078_; 
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*2, v_done_2071_);
lean_ctor_set_uint8(v___x_2076_, sizeof(void*)*2 + 1, v___y_2074_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 0, v___x_2076_);
v___x_2078_ = v___x_2069_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
v___y_1990_ = v___x_2078_;
v_e_x27_1991_ = v_e_x27_2060_;
v_proof_1992_ = v_proof_2061_;
v_done_1993_ = v_done_2071_;
v_contextDependent_1994_ = v___y_2074_;
goto v___jp_1989_;
}
}
}
}
else
{
lean_object* v_e_x27_2081_; lean_object* v_proof_2082_; uint8_t v_done_2083_; uint8_t v_contextDependent_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2110_; 
lean_del_object(v___x_2069_);
lean_del_object(v___x_2064_);
v_e_x27_2081_ = lean_ctor_get(v_a_2067_, 0);
v_proof_2082_ = lean_ctor_get(v_a_2067_, 1);
v_done_2083_ = lean_ctor_get_uint8(v_a_2067_, sizeof(void*)*2);
v_contextDependent_2084_ = lean_ctor_get_uint8(v_a_2067_, sizeof(void*)*2 + 1);
v_isSharedCheck_2110_ = !lean_is_exclusive(v_a_2067_);
if (v_isSharedCheck_2110_ == 0)
{
v___x_2086_ = v_a_2067_;
v_isShared_2087_ = v_isSharedCheck_2110_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_proof_2082_);
lean_inc(v_e_x27_2081_);
lean_dec(v_a_2067_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2110_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v___x_2088_; 
lean_inc_ref(v_e_x27_2081_);
lean_inc_ref(v___y_1964_);
v___x_2088_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1964_, v_e_x27_2060_, v_proof_2061_, v_e_x27_2081_, v_proof_2082_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
if (lean_obj_tag(v___x_2088_) == 0)
{
lean_object* v_a_2089_; lean_object* v___x_2091_; uint8_t v_isShared_2092_; uint8_t v_isSharedCheck_2101_; 
v_a_2089_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2091_ = v___x_2088_;
v_isShared_2092_ = v_isSharedCheck_2101_;
goto v_resetjp_2090_;
}
else
{
lean_inc(v_a_2089_);
lean_dec(v___x_2088_);
v___x_2091_ = lean_box(0);
v_isShared_2092_ = v_isSharedCheck_2101_;
goto v_resetjp_2090_;
}
v_resetjp_2090_:
{
uint8_t v___y_2094_; 
if (v_contextDependent_2062_ == 0)
{
v___y_2094_ = v_contextDependent_2084_;
goto v___jp_2093_;
}
else
{
v___y_2094_ = v_contextDependent_2062_;
goto v___jp_2093_;
}
v___jp_2093_:
{
lean_object* v___x_2096_; 
lean_inc(v_a_2089_);
lean_inc_ref(v_e_x27_2081_);
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 1, v_a_2089_);
v___x_2096_ = v___x_2086_;
goto v_reusejp_2095_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_e_x27_2081_);
lean_ctor_set(v_reuseFailAlloc_2100_, 1, v_a_2089_);
lean_ctor_set_uint8(v_reuseFailAlloc_2100_, sizeof(void*)*2, v_done_2083_);
v___x_2096_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2095_;
}
v_reusejp_2095_:
{
lean_object* v___x_2098_; 
lean_ctor_set_uint8(v___x_2096_, sizeof(void*)*2 + 1, v___y_2094_);
if (v_isShared_2092_ == 0)
{
lean_ctor_set(v___x_2091_, 0, v___x_2096_);
v___x_2098_ = v___x_2091_;
goto v_reusejp_2097_;
}
else
{
lean_object* v_reuseFailAlloc_2099_; 
v_reuseFailAlloc_2099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2099_, 0, v___x_2096_);
v___x_2098_ = v_reuseFailAlloc_2099_;
goto v_reusejp_2097_;
}
v_reusejp_2097_:
{
v___y_1990_ = v___x_2098_;
v_e_x27_1991_ = v_e_x27_2081_;
v_proof_1992_ = v_a_2089_;
v_done_1993_ = v_done_2083_;
v_contextDependent_1994_ = v___y_2094_;
goto v___jp_1989_;
}
}
}
}
}
else
{
lean_object* v_a_2102_; lean_object* v___x_2104_; uint8_t v_isShared_2105_; uint8_t v_isSharedCheck_2109_; 
lean_del_object(v___x_2086_);
lean_dec_ref(v_e_x27_2081_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v___f_1961_);
v_a_2102_ = lean_ctor_get(v___x_2088_, 0);
v_isSharedCheck_2109_ = !lean_is_exclusive(v___x_2088_);
if (v_isSharedCheck_2109_ == 0)
{
v___x_2104_ = v___x_2088_;
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
else
{
lean_inc(v_a_2102_);
lean_dec(v___x_2088_);
v___x_2104_ = lean_box(0);
v_isShared_2105_ = v_isSharedCheck_2109_;
goto v_resetjp_2103_;
}
v_resetjp_2103_:
{
lean_object* v___x_2107_; 
if (v_isShared_2105_ == 0)
{
v___x_2107_ = v___x_2104_;
goto v_reusejp_2106_;
}
else
{
lean_object* v_reuseFailAlloc_2108_; 
v_reuseFailAlloc_2108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2108_, 0, v_a_2102_);
v___x_2107_ = v_reuseFailAlloc_2108_;
goto v_reusejp_2106_;
}
v_reusejp_2106_:
{
return v___x_2107_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2064_);
lean_dec_ref(v_proof_2061_);
lean_dec_ref(v_e_x27_2060_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v___f_1961_);
return v___x_2066_;
}
}
}
else
{
lean_dec_ref_known(v_a_2040_, 2);
lean_dec_ref(v___f_1963_);
v___y_2037_ = v___x_2039_;
goto v___jp_2036_;
}
}
}
else
{
lean_dec_ref(v___f_1963_);
v___y_2037_ = v___x_2039_;
goto v___jp_2036_;
}
v___jp_1975_:
{
lean_object* v___x_1980_; lean_object* v___x_1981_; 
v___x_1980_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1980_, 0, v___y_1976_);
lean_ctor_set(v___x_1980_, 1, v___y_1978_);
lean_ctor_set_uint8(v___x_1980_, sizeof(void*)*2, v___y_1977_);
lean_ctor_set_uint8(v___x_1980_, sizeof(void*)*2 + 1, v___y_1979_);
v___x_1981_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1981_, 0, v___x_1980_);
return v___x_1981_;
}
v___jp_1982_:
{
lean_object* v___x_1987_; lean_object* v___x_1988_; 
v___x_1987_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v___x_1987_, 0, v___y_1985_);
lean_ctor_set(v___x_1987_, 1, v___y_1984_);
lean_ctor_set_uint8(v___x_1987_, sizeof(void*)*2, v___y_1983_);
lean_ctor_set_uint8(v___x_1987_, sizeof(void*)*2 + 1, v___y_1986_);
v___x_1988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1988_, 0, v___x_1987_);
return v___x_1988_;
}
v___jp_1989_:
{
if (v_done_1993_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; 
lean_dec_ref(v___y_1990_);
v___x_1995_ = lean_box(0);
lean_inc(v___y_1973_);
lean_inc_ref(v___y_1972_);
lean_inc(v___y_1971_);
lean_inc_ref(v___y_1970_);
lean_inc(v___y_1969_);
lean_inc_ref(v_e_x27_1991_);
v___x_1996_ = lean_apply_12(v___f_1961_, v___x_1995_, v_e_x27_1991_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, lean_box(0));
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
lean_dec_ref_known(v___x_1996_, 1);
if (lean_obj_tag(v_a_1997_) == 0)
{
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1964_);
if (v_contextDependent_1994_ == 0)
{
uint8_t v_done_1998_; uint8_t v_contextDependent_1999_; 
v_done_1998_ = lean_ctor_get_uint8(v_a_1997_, 0);
v_contextDependent_1999_ = lean_ctor_get_uint8(v_a_1997_, 1);
lean_dec_ref_known(v_a_1997_, 0);
v___y_1976_ = v_e_x27_1991_;
v___y_1977_ = v_done_1998_;
v___y_1978_ = v_proof_1992_;
v___y_1979_ = v_contextDependent_1999_;
goto v___jp_1975_;
}
else
{
uint8_t v_done_2000_; 
v_done_2000_ = lean_ctor_get_uint8(v_a_1997_, 0);
lean_dec_ref_known(v_a_1997_, 0);
v___y_1976_ = v_e_x27_1991_;
v___y_1977_ = v_done_2000_;
v___y_1978_ = v_proof_1992_;
v___y_1979_ = v_contextDependent_1994_;
goto v___jp_1975_;
}
}
else
{
lean_object* v_e_x27_2001_; lean_object* v_proof_2002_; uint8_t v_done_2003_; uint8_t v_contextDependent_2004_; lean_object* v___x_2005_; 
v_e_x27_2001_ = lean_ctor_get(v_a_1997_, 0);
lean_inc_ref_n(v_e_x27_2001_, 2);
v_proof_2002_ = lean_ctor_get(v_a_1997_, 1);
lean_inc_ref(v_proof_2002_);
v_done_2003_ = lean_ctor_get_uint8(v_a_1997_, sizeof(void*)*2);
v_contextDependent_2004_ = lean_ctor_get_uint8(v_a_1997_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_1997_, 2);
v___x_2005_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_1964_, v_e_x27_1991_, v_proof_1992_, v_e_x27_2001_, v_proof_2002_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
if (lean_obj_tag(v___x_2005_) == 0)
{
if (v_contextDependent_1994_ == 0)
{
lean_object* v_a_2006_; 
v_a_2006_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_a_2006_);
lean_dec_ref_known(v___x_2005_, 1);
v___y_1983_ = v_done_2003_;
v___y_1984_ = v_a_2006_;
v___y_1985_ = v_e_x27_2001_;
v___y_1986_ = v_contextDependent_2004_;
goto v___jp_1982_;
}
else
{
lean_object* v_a_2007_; 
v_a_2007_ = lean_ctor_get(v___x_2005_, 0);
lean_inc(v_a_2007_);
lean_dec_ref_known(v___x_2005_, 1);
v___y_1983_ = v_done_2003_;
v___y_1984_ = v_a_2007_;
v___y_1985_ = v_e_x27_2001_;
v___y_1986_ = v_contextDependent_1994_;
goto v___jp_1982_;
}
}
else
{
lean_object* v_a_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2015_; 
lean_dec_ref(v_e_x27_2001_);
v_a_2008_ = lean_ctor_get(v___x_2005_, 0);
v_isSharedCheck_2015_ = !lean_is_exclusive(v___x_2005_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2010_ = v___x_2005_;
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_a_2008_);
lean_dec(v___x_2005_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2015_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v___x_2013_; 
if (v_isShared_2011_ == 0)
{
v___x_2013_ = v___x_2010_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_2008_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
else
{
lean_dec_ref(v_proof_1992_);
lean_dec_ref(v_e_x27_1991_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1964_);
return v___x_1996_;
}
}
else
{
lean_dec_ref(v_proof_1992_);
lean_dec_ref(v_e_x27_1991_);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v___f_1961_);
return v___y_1990_;
}
}
v___jp_2016_:
{
if (v___y_2019_ == 0)
{
lean_object* v___x_2020_; lean_object* v___x_2021_; 
lean_dec_ref(v___y_2017_);
v___x_2020_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v___y_2018_);
v___x_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
return v___x_2021_;
}
else
{
lean_dec_ref(v___y_2018_);
return v___y_2017_;
}
}
v___jp_2022_:
{
if (lean_obj_tag(v_a_2024_) == 0)
{
uint8_t v_done_2025_; 
v_done_2025_ = lean_ctor_get_uint8(v_a_2024_, 0);
if (v_done_2025_ == 0)
{
uint8_t v_contextDependent_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; 
lean_dec_ref(v___y_2023_);
v_contextDependent_2026_ = lean_ctor_get_uint8(v_a_2024_, 1);
lean_dec_ref_known(v_a_2024_, 0);
v___x_2027_ = lean_box(0);
v___x_2028_ = lean_apply_12(v___f_1961_, v___x_2027_, v___y_1964_, v___y_1965_, v___y_1966_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_, v___y_1971_, v___y_1972_, v___y_1973_, lean_box(0));
if (lean_obj_tag(v___x_2028_) == 0)
{
if (v_contextDependent_2026_ == 0)
{
return v___x_2028_;
}
else
{
lean_object* v_a_2029_; 
v_a_2029_ = lean_ctor_get(v___x_2028_, 0);
lean_inc(v_a_2029_);
if (lean_obj_tag(v_a_2029_) == 0)
{
uint8_t v_contextDependent_2030_; 
v_contextDependent_2030_ = lean_ctor_get_uint8(v_a_2029_, 1);
v___y_2017_ = v___x_2028_;
v___y_2018_ = v_a_2029_;
v___y_2019_ = v_contextDependent_2030_;
goto v___jp_2016_;
}
else
{
uint8_t v_contextDependent_2031_; 
v_contextDependent_2031_ = lean_ctor_get_uint8(v_a_2029_, sizeof(void*)*2 + 1);
v___y_2017_ = v___x_2028_;
v___y_2018_ = v_a_2029_;
v___y_2019_ = v_contextDependent_2031_;
goto v___jp_2016_;
}
}
}
else
{
return v___x_2028_;
}
}
else
{
lean_dec_ref_known(v_a_2024_, 0);
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v___f_1961_);
return v___y_2023_;
}
}
else
{
lean_object* v_e_x27_2032_; lean_object* v_proof_2033_; uint8_t v_done_2034_; uint8_t v_contextDependent_2035_; 
v_e_x27_2032_ = lean_ctor_get(v_a_2024_, 0);
lean_inc_ref(v_e_x27_2032_);
v_proof_2033_ = lean_ctor_get(v_a_2024_, 1);
lean_inc_ref(v_proof_2033_);
v_done_2034_ = lean_ctor_get_uint8(v_a_2024_, sizeof(void*)*2);
v_contextDependent_2035_ = lean_ctor_get_uint8(v_a_2024_, sizeof(void*)*2 + 1);
lean_dec_ref_known(v_a_2024_, 2);
v___y_1990_ = v___y_2023_;
v_e_x27_1991_ = v_e_x27_2032_;
v_proof_1992_ = v_proof_2033_;
v_done_1993_ = v_done_2034_;
v_contextDependent_1994_ = v_contextDependent_2035_;
goto v___jp_1989_;
}
}
v___jp_2036_:
{
if (lean_obj_tag(v___y_2037_) == 0)
{
lean_object* v_a_2038_; 
v_a_2038_ = lean_ctor_get(v___y_2037_, 0);
lean_inc(v_a_2038_);
v___y_2023_ = v___y_2037_;
v_a_2024_ = v_a_2038_;
goto v___jp_2022_;
}
else
{
lean_dec(v___y_1973_);
lean_dec_ref(v___y_1972_);
lean_dec(v___y_1971_);
lean_dec_ref(v___y_1970_);
lean_dec(v___y_1969_);
lean_dec_ref(v___y_1968_);
lean_dec(v___y_1967_);
lean_dec_ref(v___y_1966_);
lean_dec(v___y_1965_);
lean_dec_ref(v___y_1964_);
lean_dec_ref(v___f_1961_);
return v___y_2037_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed(lean_object* v___f_2113_, lean_object* v___x_2114_, lean_object* v___f_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_, lean_object* v___y_2119_, lean_object* v___y_2120_, lean_object* v___y_2121_, lean_object* v___y_2122_, lean_object* v___y_2123_, lean_object* v___y_2124_, lean_object* v___y_2125_, lean_object* v___y_2126_){
_start:
{
lean_object* v_res_2127_; 
v_res_2127_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4(v___f_2113_, v___x_2114_, v___f_2115_, v___y_2116_, v___y_2117_, v___y_2118_, v___y_2119_, v___y_2120_, v___y_2121_, v___y_2122_, v___y_2123_, v___y_2124_, v___y_2125_);
lean_dec(v___x_2114_);
return v_res_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(lean_object* v___x_2128_, lean_object* v___f_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_, lean_object* v___y_2135_, lean_object* v___y_2136_, lean_object* v___y_2137_, lean_object* v___y_2138_, lean_object* v___y_2139_){
_start:
{
lean_object* v___x_2141_; 
lean_inc_ref(v___y_2130_);
v___x_2141_ = l_Lean_Meta_Sym_Simp_evalGround___redArg(v___x_2128_, v___y_2130_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_);
if (lean_obj_tag(v___x_2141_) == 0)
{
lean_object* v_a_2142_; lean_object* v___x_2143_; 
v_a_2142_ = lean_ctor_get(v___x_2141_, 0);
lean_inc(v_a_2142_);
v___x_2143_ = lean_box(0);
if (lean_obj_tag(v_a_2142_) == 0)
{
uint8_t v_done_2144_; 
v_done_2144_ = lean_ctor_get_uint8(v_a_2142_, 0);
if (v_done_2144_ == 0)
{
uint8_t v_contextDependent_2145_; lean_object* v___x_2146_; 
lean_dec_ref_known(v___x_2141_, 1);
v_contextDependent_2145_ = lean_ctor_get_uint8(v_a_2142_, 1);
lean_dec_ref_known(v_a_2142_, 0);
v___x_2146_ = lean_apply_12(v___f_2129_, v___x_2143_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, lean_box(0));
if (lean_obj_tag(v___x_2146_) == 0)
{
lean_object* v_a_2147_; uint8_t v___y_2149_; 
v_a_2147_ = lean_ctor_get(v___x_2146_, 0);
lean_inc(v_a_2147_);
if (v_contextDependent_2145_ == 0)
{
lean_dec(v_a_2147_);
return v___x_2146_;
}
else
{
if (lean_obj_tag(v_a_2147_) == 0)
{
uint8_t v_contextDependent_2159_; 
v_contextDependent_2159_ = lean_ctor_get_uint8(v_a_2147_, 1);
v___y_2149_ = v_contextDependent_2159_;
goto v___jp_2148_;
}
else
{
uint8_t v_contextDependent_2160_; 
v_contextDependent_2160_ = lean_ctor_get_uint8(v_a_2147_, sizeof(void*)*2 + 1);
v___y_2149_ = v_contextDependent_2160_;
goto v___jp_2148_;
}
}
v___jp_2148_:
{
if (v___y_2149_ == 0)
{
lean_object* v___x_2151_; uint8_t v_isShared_2152_; uint8_t v_isSharedCheck_2157_; 
v_isSharedCheck_2157_ = !lean_is_exclusive(v___x_2146_);
if (v_isSharedCheck_2157_ == 0)
{
lean_object* v_unused_2158_; 
v_unused_2158_ = lean_ctor_get(v___x_2146_, 0);
lean_dec(v_unused_2158_);
v___x_2151_ = v___x_2146_;
v_isShared_2152_ = v_isSharedCheck_2157_;
goto v_resetjp_2150_;
}
else
{
lean_dec(v___x_2146_);
v___x_2151_ = lean_box(0);
v_isShared_2152_ = v_isSharedCheck_2157_;
goto v_resetjp_2150_;
}
v_resetjp_2150_:
{
lean_object* v___x_2153_; lean_object* v___x_2155_; 
v___x_2153_ = l_Lean_Meta_Sym_Simp_Result_withContextDependent(v_a_2147_);
if (v_isShared_2152_ == 0)
{
lean_ctor_set(v___x_2151_, 0, v___x_2153_);
v___x_2155_ = v___x_2151_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2156_; 
v_reuseFailAlloc_2156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2156_, 0, v___x_2153_);
v___x_2155_ = v_reuseFailAlloc_2156_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
return v___x_2155_;
}
}
}
else
{
lean_dec(v_a_2147_);
return v___x_2146_;
}
}
}
else
{
return v___x_2146_;
}
}
else
{
lean_dec_ref_known(v_a_2142_, 0);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec_ref(v___f_2129_);
return v___x_2141_;
}
}
else
{
uint8_t v_done_2161_; 
v_done_2161_ = lean_ctor_get_uint8(v_a_2142_, sizeof(void*)*2);
if (v_done_2161_ == 0)
{
lean_object* v_e_x27_2162_; lean_object* v_proof_2163_; uint8_t v_contextDependent_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2214_; 
lean_dec_ref_known(v___x_2141_, 1);
v_e_x27_2162_ = lean_ctor_get(v_a_2142_, 0);
v_proof_2163_ = lean_ctor_get(v_a_2142_, 1);
v_contextDependent_2164_ = lean_ctor_get_uint8(v_a_2142_, sizeof(void*)*2 + 1);
v_isSharedCheck_2214_ = !lean_is_exclusive(v_a_2142_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2166_ = v_a_2142_;
v_isShared_2167_ = v_isSharedCheck_2214_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_proof_2163_);
lean_inc(v_e_x27_2162_);
lean_dec(v_a_2142_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2214_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2168_; 
lean_inc(v___y_2139_);
lean_inc_ref(v___y_2138_);
lean_inc(v___y_2137_);
lean_inc_ref(v___y_2136_);
lean_inc(v___y_2135_);
lean_inc_ref(v_e_x27_2162_);
v___x_2168_ = lean_apply_12(v___f_2129_, v___x_2143_, v_e_x27_2162_, v___y_2131_, v___y_2132_, v___y_2133_, v___y_2134_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_, lean_box(0));
if (lean_obj_tag(v___x_2168_) == 0)
{
lean_object* v_a_2169_; lean_object* v___x_2171_; uint8_t v_isShared_2172_; uint8_t v_isSharedCheck_2213_; 
v_a_2169_ = lean_ctor_get(v___x_2168_, 0);
v_isSharedCheck_2213_ = !lean_is_exclusive(v___x_2168_);
if (v_isSharedCheck_2213_ == 0)
{
v___x_2171_ = v___x_2168_;
v_isShared_2172_ = v_isSharedCheck_2213_;
goto v_resetjp_2170_;
}
else
{
lean_inc(v_a_2169_);
lean_dec(v___x_2168_);
v___x_2171_ = lean_box(0);
v_isShared_2172_ = v_isSharedCheck_2213_;
goto v_resetjp_2170_;
}
v_resetjp_2170_:
{
if (lean_obj_tag(v_a_2169_) == 0)
{
uint8_t v_done_2173_; uint8_t v_contextDependent_2174_; uint8_t v___y_2176_; 
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2130_);
v_done_2173_ = lean_ctor_get_uint8(v_a_2169_, 0);
v_contextDependent_2174_ = lean_ctor_get_uint8(v_a_2169_, 1);
lean_dec_ref_known(v_a_2169_, 0);
if (v_contextDependent_2164_ == 0)
{
v___y_2176_ = v_contextDependent_2174_;
goto v___jp_2175_;
}
else
{
v___y_2176_ = v_contextDependent_2164_;
goto v___jp_2175_;
}
v___jp_2175_:
{
lean_object* v___x_2178_; 
if (v_isShared_2167_ == 0)
{
v___x_2178_ = v___x_2166_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v_e_x27_2162_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v_proof_2163_);
v___x_2178_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2177_;
}
v_reusejp_2177_:
{
lean_object* v___x_2180_; 
lean_ctor_set_uint8(v___x_2178_, sizeof(void*)*2, v_done_2173_);
lean_ctor_set_uint8(v___x_2178_, sizeof(void*)*2 + 1, v___y_2176_);
if (v_isShared_2172_ == 0)
{
lean_ctor_set(v___x_2171_, 0, v___x_2178_);
v___x_2180_ = v___x_2171_;
goto v_reusejp_2179_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v___x_2178_);
v___x_2180_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2179_;
}
v_reusejp_2179_:
{
return v___x_2180_;
}
}
}
}
else
{
lean_object* v_e_x27_2183_; lean_object* v_proof_2184_; uint8_t v_done_2185_; uint8_t v_contextDependent_2186_; lean_object* v___x_2188_; uint8_t v_isShared_2189_; uint8_t v_isSharedCheck_2212_; 
lean_del_object(v___x_2171_);
lean_del_object(v___x_2166_);
v_e_x27_2183_ = lean_ctor_get(v_a_2169_, 0);
v_proof_2184_ = lean_ctor_get(v_a_2169_, 1);
v_done_2185_ = lean_ctor_get_uint8(v_a_2169_, sizeof(void*)*2);
v_contextDependent_2186_ = lean_ctor_get_uint8(v_a_2169_, sizeof(void*)*2 + 1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_a_2169_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2188_ = v_a_2169_;
v_isShared_2189_ = v_isSharedCheck_2212_;
goto v_resetjp_2187_;
}
else
{
lean_inc(v_proof_2184_);
lean_inc(v_e_x27_2183_);
lean_dec(v_a_2169_);
v___x_2188_ = lean_box(0);
v_isShared_2189_ = v_isSharedCheck_2212_;
goto v_resetjp_2187_;
}
v_resetjp_2187_:
{
lean_object* v___x_2190_; 
lean_inc_ref(v_e_x27_2183_);
v___x_2190_ = l_Lean_Meta_Sym_Simp_mkEqTrans___redArg(v___y_2130_, v_e_x27_2162_, v_proof_2163_, v_e_x27_2183_, v_proof_2184_, v___y_2135_, v___y_2136_, v___y_2137_, v___y_2138_, v___y_2139_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
if (lean_obj_tag(v___x_2190_) == 0)
{
lean_object* v_a_2191_; lean_object* v___x_2193_; uint8_t v_isShared_2194_; uint8_t v_isSharedCheck_2203_; 
v_a_2191_ = lean_ctor_get(v___x_2190_, 0);
v_isSharedCheck_2203_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2203_ == 0)
{
v___x_2193_ = v___x_2190_;
v_isShared_2194_ = v_isSharedCheck_2203_;
goto v_resetjp_2192_;
}
else
{
lean_inc(v_a_2191_);
lean_dec(v___x_2190_);
v___x_2193_ = lean_box(0);
v_isShared_2194_ = v_isSharedCheck_2203_;
goto v_resetjp_2192_;
}
v_resetjp_2192_:
{
uint8_t v___y_2196_; 
if (v_contextDependent_2164_ == 0)
{
v___y_2196_ = v_contextDependent_2186_;
goto v___jp_2195_;
}
else
{
v___y_2196_ = v_contextDependent_2164_;
goto v___jp_2195_;
}
v___jp_2195_:
{
lean_object* v___x_2198_; 
if (v_isShared_2189_ == 0)
{
lean_ctor_set(v___x_2188_, 1, v_a_2191_);
v___x_2198_ = v___x_2188_;
goto v_reusejp_2197_;
}
else
{
lean_object* v_reuseFailAlloc_2202_; 
v_reuseFailAlloc_2202_ = lean_alloc_ctor(1, 2, 2);
lean_ctor_set(v_reuseFailAlloc_2202_, 0, v_e_x27_2183_);
lean_ctor_set(v_reuseFailAlloc_2202_, 1, v_a_2191_);
lean_ctor_set_uint8(v_reuseFailAlloc_2202_, sizeof(void*)*2, v_done_2185_);
v___x_2198_ = v_reuseFailAlloc_2202_;
goto v_reusejp_2197_;
}
v_reusejp_2197_:
{
lean_object* v___x_2200_; 
lean_ctor_set_uint8(v___x_2198_, sizeof(void*)*2 + 1, v___y_2196_);
if (v_isShared_2194_ == 0)
{
lean_ctor_set(v___x_2193_, 0, v___x_2198_);
v___x_2200_ = v___x_2193_;
goto v_reusejp_2199_;
}
else
{
lean_object* v_reuseFailAlloc_2201_; 
v_reuseFailAlloc_2201_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2201_, 0, v___x_2198_);
v___x_2200_ = v_reuseFailAlloc_2201_;
goto v_reusejp_2199_;
}
v_reusejp_2199_:
{
return v___x_2200_;
}
}
}
}
}
else
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2211_; 
lean_del_object(v___x_2188_);
lean_dec_ref(v_e_x27_2183_);
v_a_2204_ = lean_ctor_get(v___x_2190_, 0);
v_isSharedCheck_2211_ = !lean_is_exclusive(v___x_2190_);
if (v_isSharedCheck_2211_ == 0)
{
v___x_2206_ = v___x_2190_;
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2190_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2211_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2209_; 
if (v_isShared_2207_ == 0)
{
v___x_2209_ = v___x_2206_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2210_; 
v_reuseFailAlloc_2210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2210_, 0, v_a_2204_);
v___x_2209_ = v_reuseFailAlloc_2210_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
return v___x_2209_;
}
}
}
}
}
}
}
else
{
lean_del_object(v___x_2166_);
lean_dec_ref(v_proof_2163_);
lean_dec_ref(v_e_x27_2162_);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2130_);
return v___x_2168_;
}
}
}
else
{
lean_dec_ref_known(v_a_2142_, 2);
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec_ref(v___f_2129_);
return v___x_2141_;
}
}
}
else
{
lean_dec(v___y_2139_);
lean_dec_ref(v___y_2138_);
lean_dec(v___y_2137_);
lean_dec_ref(v___y_2136_);
lean_dec(v___y_2135_);
lean_dec_ref(v___y_2134_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
lean_dec_ref(v___f_2129_);
return v___x_2141_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed(lean_object* v___x_2215_, lean_object* v___f_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v_res_2228_; 
v_res_2228_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3(v___x_2215_, v___f_2216_, v___y_2217_, v___y_2218_, v___y_2219_, v___y_2220_, v___y_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_, v___y_2226_);
lean_dec(v___x_2215_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(lean_object* v_msg_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_){
_start:
{
lean_object* v_ref_2235_; lean_object* v___x_2236_; lean_object* v_a_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2245_; 
v_ref_2235_ = lean_ctor_get(v___y_2232_, 5);
v___x_2236_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v_msg_2229_, v___y_2230_, v___y_2231_, v___y_2232_, v___y_2233_);
v_a_2237_ = lean_ctor_get(v___x_2236_, 0);
v_isSharedCheck_2245_ = !lean_is_exclusive(v___x_2236_);
if (v_isSharedCheck_2245_ == 0)
{
v___x_2239_ = v___x_2236_;
v_isShared_2240_ = v_isSharedCheck_2245_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_a_2237_);
lean_dec(v___x_2236_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2245_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
lean_object* v___x_2241_; lean_object* v___x_2243_; 
lean_inc(v_ref_2235_);
v___x_2241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2241_, 0, v_ref_2235_);
lean_ctor_set(v___x_2241_, 1, v_a_2237_);
if (v_isShared_2240_ == 0)
{
lean_ctor_set_tag(v___x_2239_, 1);
lean_ctor_set(v___x_2239_, 0, v___x_2241_);
v___x_2243_ = v___x_2239_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v___x_2241_);
v___x_2243_ = v_reuseFailAlloc_2244_;
goto v_reusejp_2242_;
}
v_reusejp_2242_:
{
return v___x_2243_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg___boxed(lean_object* v_msg_2246_, lean_object* v___y_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_res_2252_; 
v_res_2252_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v_msg_2246_, v___y_2247_, v___y_2248_, v___y_2249_, v___y_2250_);
lean_dec(v___y_2250_);
lean_dec_ref(v___y_2249_);
lean_dec(v___y_2248_);
lean_dec_ref(v___y_2247_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(lean_object* v_as_2253_, size_t v_sz_2254_, size_t v_i_2255_, lean_object* v_b_2256_){
_start:
{
uint8_t v___x_2258_; 
v___x_2258_ = lean_usize_dec_lt(v_i_2255_, v_sz_2254_);
if (v___x_2258_ == 0)
{
lean_object* v___x_2259_; 
v___x_2259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2259_, 0, v_b_2256_);
return v___x_2259_;
}
else
{
lean_object* v_a_2260_; lean_object* v___x_2261_; size_t v___x_2262_; size_t v___x_2263_; 
v_a_2260_ = lean_array_uget_borrowed(v_as_2253_, v_i_2255_);
lean_inc(v_a_2260_);
v___x_2261_ = l_Lean_Meta_Sym_Simp_Theorems_insert(v_b_2256_, v_a_2260_);
v___x_2262_ = ((size_t)1ULL);
v___x_2263_ = lean_usize_add(v_i_2255_, v___x_2262_);
v_i_2255_ = v___x_2263_;
v_b_2256_ = v___x_2261_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg___boxed(lean_object* v_as_2265_, lean_object* v_sz_2266_, lean_object* v_i_2267_, lean_object* v_b_2268_, lean_object* v___y_2269_){
_start:
{
size_t v_sz_boxed_2270_; size_t v_i_boxed_2271_; lean_object* v_res_2272_; 
v_sz_boxed_2270_ = lean_unbox_usize(v_sz_2266_);
lean_dec(v_sz_2266_);
v_i_boxed_2271_ = lean_unbox_usize(v_i_2267_);
lean_dec(v_i_2267_);
v_res_2272_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_as_2265_, v_sz_boxed_2270_, v_i_boxed_2271_, v_b_2268_);
lean_dec_ref(v_as_2265_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(lean_object* v___x_2273_, lean_object* v_as_2274_, size_t v_sz_2275_, size_t v_i_2276_, lean_object* v_b_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v_a_2284_; uint8_t v___x_2288_; 
v___x_2288_ = lean_usize_dec_lt(v_i_2276_, v_sz_2275_);
if (v___x_2288_ == 0)
{
lean_object* v___x_2289_; 
v___x_2289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2289_, 0, v_b_2277_);
return v___x_2289_;
}
else
{
lean_object* v_a_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; 
v_a_2290_ = lean_array_uget_borrowed(v_as_2274_, v_i_2276_);
v___x_2291_ = l_Lean_TSyntax_getId(v_a_2290_);
v___x_2292_ = l_Lean_LocalContext_findFromUserName_x3f(v___x_2273_, v___x_2291_);
lean_dec(v___x_2291_);
if (lean_obj_tag(v___x_2292_) == 1)
{
lean_object* v_val_2293_; lean_object* v___x_2294_; lean_object* v___x_2295_; 
v_val_2293_ = lean_ctor_get(v___x_2292_, 0);
lean_inc(v_val_2293_);
lean_dec_ref_known(v___x_2292_, 1);
v___x_2294_ = l_Lean_LocalDecl_toExpr(v_val_2293_);
v___x_2295_ = l_Lean_Meta_Sym_Simp_mkTheoremFromExpr(v___x_2294_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v___x_2297_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2295_, 1);
v___x_2297_ = lean_array_push(v_b_2277_, v_a_2296_);
v_a_2284_ = v___x_2297_;
goto v___jp_2283_;
}
else
{
lean_object* v_a_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2305_; 
lean_dec_ref(v_b_2277_);
v_a_2298_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2305_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2305_ == 0)
{
v___x_2300_ = v___x_2295_;
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_a_2298_);
lean_dec(v___x_2295_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2305_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
lean_object* v___x_2303_; 
if (v_isShared_2301_ == 0)
{
v___x_2303_ = v___x_2300_;
goto v_reusejp_2302_;
}
else
{
lean_object* v_reuseFailAlloc_2304_; 
v_reuseFailAlloc_2304_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2304_, 0, v_a_2298_);
v___x_2303_ = v_reuseFailAlloc_2304_;
goto v_reusejp_2302_;
}
v_reusejp_2302_:
{
return v___x_2303_;
}
}
}
}
else
{
lean_object* v___x_2306_; 
lean_dec(v___x_2292_);
lean_inc(v_a_2290_);
v___x_2306_ = l_Lean_realizeGlobalConstNoOverload(v_a_2290_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v_a_2307_; lean_object* v___x_2308_; 
v_a_2307_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_a_2307_);
lean_dec_ref_known(v___x_2306_, 1);
v___x_2308_ = l_Lean_Meta_Sym_Simp_mkTheoremFromDecl(v_a_2307_, v___y_2278_, v___y_2279_, v___y_2280_, v___y_2281_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_object* v_a_2309_; lean_object* v___x_2310_; 
v_a_2309_ = lean_ctor_get(v___x_2308_, 0);
lean_inc(v_a_2309_);
lean_dec_ref_known(v___x_2308_, 1);
v___x_2310_ = lean_array_push(v_b_2277_, v_a_2309_);
v_a_2284_ = v___x_2310_;
goto v___jp_2283_;
}
else
{
lean_object* v_a_2311_; lean_object* v___x_2313_; uint8_t v_isShared_2314_; uint8_t v_isSharedCheck_2318_; 
lean_dec_ref(v_b_2277_);
v_a_2311_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2318_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2318_ == 0)
{
v___x_2313_ = v___x_2308_;
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
else
{
lean_inc(v_a_2311_);
lean_dec(v___x_2308_);
v___x_2313_ = lean_box(0);
v_isShared_2314_ = v_isSharedCheck_2318_;
goto v_resetjp_2312_;
}
v_resetjp_2312_:
{
lean_object* v___x_2316_; 
if (v_isShared_2314_ == 0)
{
v___x_2316_ = v___x_2313_;
goto v_reusejp_2315_;
}
else
{
lean_object* v_reuseFailAlloc_2317_; 
v_reuseFailAlloc_2317_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2317_, 0, v_a_2311_);
v___x_2316_ = v_reuseFailAlloc_2317_;
goto v_reusejp_2315_;
}
v_reusejp_2315_:
{
return v___x_2316_;
}
}
}
}
else
{
lean_object* v_a_2319_; lean_object* v___x_2321_; uint8_t v_isShared_2322_; uint8_t v_isSharedCheck_2326_; 
lean_dec_ref(v_b_2277_);
v_a_2319_ = lean_ctor_get(v___x_2306_, 0);
v_isSharedCheck_2326_ = !lean_is_exclusive(v___x_2306_);
if (v_isSharedCheck_2326_ == 0)
{
v___x_2321_ = v___x_2306_;
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
else
{
lean_inc(v_a_2319_);
lean_dec(v___x_2306_);
v___x_2321_ = lean_box(0);
v_isShared_2322_ = v_isSharedCheck_2326_;
goto v_resetjp_2320_;
}
v_resetjp_2320_:
{
lean_object* v___x_2324_; 
if (v_isShared_2322_ == 0)
{
v___x_2324_ = v___x_2321_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v_a_2319_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
v___jp_2283_:
{
size_t v___x_2285_; size_t v___x_2286_; 
v___x_2285_ = ((size_t)1ULL);
v___x_2286_ = lean_usize_add(v_i_2276_, v___x_2285_);
v_i_2276_ = v___x_2286_;
v_b_2277_ = v_a_2284_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1___boxed(lean_object* v___x_2327_, lean_object* v_as_2328_, lean_object* v_sz_2329_, lean_object* v_i_2330_, lean_object* v_b_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_){
_start:
{
size_t v_sz_boxed_2337_; size_t v_i_boxed_2338_; lean_object* v_res_2339_; 
v_sz_boxed_2337_ = lean_unbox_usize(v_sz_2329_);
lean_dec(v_sz_2329_);
v_i_boxed_2338_ = lean_unbox_usize(v_i_2330_);
lean_dec(v_i_2330_);
v_res_2339_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(v___x_2327_, v_as_2328_, v_sz_boxed_2337_, v_i_boxed_2338_, v_b_2331_, v___y_2332_, v___y_2333_, v___y_2334_, v___y_2335_);
lean_dec(v___y_2335_);
lean_dec_ref(v___y_2334_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec_ref(v_as_2328_);
lean_dec_ref(v___x_2327_);
return v_res_2339_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2(void){
_start:
{
lean_object* v___x_2343_; 
v___x_2343_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2343_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3(void){
_start:
{
lean_object* v___x_2344_; lean_object* v___x_2345_; 
v___x_2344_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__2);
v___x_2345_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2345_, 0, v___x_2344_);
return v___x_2345_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6(void){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__5));
v___x_2350_ = l_Lean_stringToMessageData(v___x_2349_);
return v___x_2350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(lean_object* v_variantId_x3f_2351_, lean_object* v_extraIds_x3f_2352_, lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v___f_2358_; lean_object* v_post_2360_; lean_object* v_extraThms_2364_; lean_object* v___y_2365_; lean_object* v___y_2366_; lean_object* v___y_2367_; lean_object* v___y_2368_; lean_object* v___y_2401_; lean_object* v___y_2402_; lean_object* v___y_2403_; lean_object* v___y_2404_; lean_object* v___y_2421_; 
v___f_2358_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__1));
if (lean_obj_tag(v_variantId_x3f_2351_) == 0)
{
lean_object* v___x_2433_; 
v___x_2433_ = lean_box(0);
v___y_2421_ = v___x_2433_;
goto v___jp_2420_;
}
else
{
lean_object* v_val_2434_; lean_object* v___x_2435_; 
v_val_2434_ = lean_ctor_get(v_variantId_x3f_2351_, 0);
v___x_2435_ = l_Lean_TSyntax_getId(v_val_2434_);
v___y_2421_ = v___x_2435_;
goto v___jp_2420_;
}
v___jp_2359_:
{
lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2361_, 0, v___f_2358_);
lean_ctor_set(v___x_2361_, 1, v_post_2360_);
v___x_2362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2362_, 0, v___x_2361_);
return v___x_2362_;
}
v___jp_2363_:
{
lean_object* v___x_2369_; 
v___x_2369_ = l_Lean_Meta_Sym_Simp_getSymSimpTheorems___redArg(v___y_2368_);
if (lean_obj_tag(v___x_2369_) == 0)
{
lean_object* v_a_2370_; lean_object* v___f_2371_; lean_object* v___x_2372_; lean_object* v___x_2373_; lean_object* v___x_2374_; uint8_t v___x_2375_; 
v_a_2370_ = lean_ctor_get(v___x_2369_, 0);
lean_inc(v_a_2370_);
lean_dec_ref_known(v___x_2369_, 1);
v___f_2371_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed), 13, 1);
lean_closure_set(v___f_2371_, 0, v_a_2370_);
v___x_2372_ = lean_unsigned_to_nat(255u);
v___x_2373_ = lean_array_get_size(v_extraThms_2364_);
v___x_2374_ = lean_unsigned_to_nat(0u);
v___x_2375_ = lean_nat_dec_eq(v___x_2373_, v___x_2374_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; size_t v_sz_2377_; size_t v___x_2378_; lean_object* v___x_2379_; 
v___x_2376_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__3);
v_sz_2377_ = lean_array_size(v_extraThms_2364_);
v___x_2378_ = ((size_t)0ULL);
v___x_2379_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_extraThms_2364_, v_sz_2377_, v___x_2378_, v___x_2376_);
lean_dec_ref(v_extraThms_2364_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_object* v_a_2380_; lean_object* v___f_2381_; lean_object* v___f_2382_; 
v_a_2380_ = lean_ctor_get(v___x_2379_, 0);
lean_inc(v_a_2380_);
lean_dec_ref_known(v___x_2379_, 1);
v___f_2381_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__2___boxed), 13, 1);
lean_closure_set(v___f_2381_, 0, v_a_2380_);
v___f_2382_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__4___boxed), 14, 3);
lean_closure_set(v___f_2382_, 0, v___f_2381_);
lean_closure_set(v___f_2382_, 1, v___x_2372_);
lean_closure_set(v___f_2382_, 2, v___f_2371_);
v_post_2360_ = v___f_2382_;
goto v___jp_2359_;
}
else
{
lean_object* v_a_2383_; lean_object* v___x_2385_; uint8_t v_isShared_2386_; uint8_t v_isSharedCheck_2390_; 
lean_dec_ref(v___f_2371_);
v_a_2383_ = lean_ctor_get(v___x_2379_, 0);
v_isSharedCheck_2390_ = !lean_is_exclusive(v___x_2379_);
if (v_isSharedCheck_2390_ == 0)
{
v___x_2385_ = v___x_2379_;
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
else
{
lean_inc(v_a_2383_);
lean_dec(v___x_2379_);
v___x_2385_ = lean_box(0);
v_isShared_2386_ = v_isSharedCheck_2390_;
goto v_resetjp_2384_;
}
v_resetjp_2384_:
{
lean_object* v___x_2388_; 
if (v_isShared_2386_ == 0)
{
v___x_2388_ = v___x_2385_;
goto v_reusejp_2387_;
}
else
{
lean_object* v_reuseFailAlloc_2389_; 
v_reuseFailAlloc_2389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2389_, 0, v_a_2383_);
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
lean_object* v___f_2391_; 
lean_dec_ref(v_extraThms_2364_);
v___f_2391_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___lam__3___boxed), 13, 2);
lean_closure_set(v___f_2391_, 0, v___x_2372_);
lean_closure_set(v___f_2391_, 1, v___f_2371_);
v_post_2360_ = v___f_2391_;
goto v___jp_2359_;
}
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
lean_dec_ref(v_extraThms_2364_);
v_a_2392_ = lean_ctor_get(v___x_2369_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___x_2369_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___x_2369_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___x_2369_);
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
v___jp_2400_:
{
lean_object* v_extraThms_2405_; 
v_extraThms_2405_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__4));
if (lean_obj_tag(v_extraIds_x3f_2352_) == 1)
{
lean_object* v_val_2406_; lean_object* v_lctx_2407_; size_t v_sz_2408_; size_t v___x_2409_; lean_object* v___x_2410_; 
v_val_2406_ = lean_ctor_get(v_extraIds_x3f_2352_, 0);
v_lctx_2407_ = lean_ctor_get(v___y_2401_, 2);
v_sz_2408_ = lean_array_size(v_val_2406_);
v___x_2409_ = ((size_t)0ULL);
v___x_2410_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__1(v_lctx_2407_, v_val_2406_, v_sz_2408_, v___x_2409_, v_extraThms_2405_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
if (lean_obj_tag(v___x_2410_) == 0)
{
lean_object* v_a_2411_; 
v_a_2411_ = lean_ctor_get(v___x_2410_, 0);
lean_inc(v_a_2411_);
lean_dec_ref_known(v___x_2410_, 1);
v_extraThms_2364_ = v_a_2411_;
v___y_2365_ = v___y_2401_;
v___y_2366_ = v___y_2402_;
v___y_2367_ = v___y_2403_;
v___y_2368_ = v___y_2404_;
goto v___jp_2363_;
}
else
{
lean_object* v_a_2412_; lean_object* v___x_2414_; uint8_t v_isShared_2415_; uint8_t v_isSharedCheck_2419_; 
v_a_2412_ = lean_ctor_get(v___x_2410_, 0);
v_isSharedCheck_2419_ = !lean_is_exclusive(v___x_2410_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2414_ = v___x_2410_;
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
else
{
lean_inc(v_a_2412_);
lean_dec(v___x_2410_);
v___x_2414_ = lean_box(0);
v_isShared_2415_ = v_isSharedCheck_2419_;
goto v_resetjp_2413_;
}
v_resetjp_2413_:
{
lean_object* v___x_2417_; 
if (v_isShared_2415_ == 0)
{
v___x_2417_ = v___x_2414_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v_a_2412_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
}
}
else
{
v_extraThms_2364_ = v_extraThms_2405_;
v___y_2365_ = v___y_2401_;
v___y_2366_ = v___y_2402_;
v___y_2367_ = v___y_2403_;
v___y_2368_ = v___y_2404_;
goto v___jp_2363_;
}
}
v___jp_2420_:
{
uint8_t v___x_2422_; 
v___x_2422_ = l_Lean_Name_isAnonymous(v___y_2421_);
lean_dec(v___y_2421_);
if (v___x_2422_ == 0)
{
lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v_a_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2432_; 
v___x_2423_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___closed__6);
v___x_2424_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v___x_2423_, v_a_2353_, v_a_2354_, v_a_2355_, v_a_2356_);
v_a_2425_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2432_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2432_ == 0)
{
v___x_2427_ = v___x_2424_;
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_a_2425_);
lean_dec(v___x_2424_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2432_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___x_2430_; 
if (v_isShared_2428_ == 0)
{
v___x_2430_ = v___x_2427_;
goto v_reusejp_2429_;
}
else
{
lean_object* v_reuseFailAlloc_2431_; 
v_reuseFailAlloc_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2431_, 0, v_a_2425_);
v___x_2430_ = v_reuseFailAlloc_2431_;
goto v_reusejp_2429_;
}
v_reusejp_2429_:
{
return v___x_2430_;
}
}
}
else
{
v___y_2401_ = v_a_2353_;
v___y_2402_ = v_a_2354_;
v___y_2403_ = v_a_2355_;
v___y_2404_ = v_a_2356_;
goto v___jp_2400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts___boxed(lean_object* v_variantId_x3f_2436_, lean_object* v_extraIds_x3f_2437_, lean_object* v_a_2438_, lean_object* v_a_2439_, lean_object* v_a_2440_, lean_object* v_a_2441_, lean_object* v_a_2442_){
_start:
{
lean_object* v_res_2443_; 
v_res_2443_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(v_variantId_x3f_2436_, v_extraIds_x3f_2437_, v_a_2438_, v_a_2439_, v_a_2440_, v_a_2441_);
lean_dec(v_a_2441_);
lean_dec_ref(v_a_2440_);
lean_dec(v_a_2439_);
lean_dec_ref(v_a_2438_);
lean_dec(v_extraIds_x3f_2437_);
lean_dec(v_variantId_x3f_2436_);
return v_res_2443_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(lean_object* v_as_2444_, size_t v_sz_2445_, size_t v_i_2446_, lean_object* v_b_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
lean_object* v___x_2453_; 
v___x_2453_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___redArg(v_as_2444_, v_sz_2445_, v_i_2446_, v_b_2447_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0___boxed(lean_object* v_as_2454_, lean_object* v_sz_2455_, lean_object* v_i_2456_, lean_object* v_b_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_){
_start:
{
size_t v_sz_boxed_2463_; size_t v_i_boxed_2464_; lean_object* v_res_2465_; 
v_sz_boxed_2463_ = lean_unbox_usize(v_sz_2455_);
lean_dec(v_sz_2455_);
v_i_boxed_2464_ = lean_unbox_usize(v_i_2456_);
lean_dec(v_i_2456_);
v_res_2465_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__0(v_as_2454_, v_sz_boxed_2463_, v_i_boxed_2464_, v_b_2457_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_);
lean_dec(v___y_2461_);
lean_dec_ref(v___y_2460_);
lean_dec(v___y_2459_);
lean_dec_ref(v___y_2458_);
lean_dec_ref(v_as_2454_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(lean_object* v_00_u03b1_2466_, lean_object* v_msg_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_, lean_object* v___y_2471_){
_start:
{
lean_object* v___x_2473_; 
v___x_2473_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___redArg(v_msg_2467_, v___y_2468_, v___y_2469_, v___y_2470_, v___y_2471_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2___boxed(lean_object* v_00_u03b1_2474_, lean_object* v_msg_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_){
_start:
{
lean_object* v_res_2481_; 
v_res_2481_ = l_Lean_throwError___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts_spec__2(v_00_u03b1_2474_, v_msg_2475_, v___y_2476_, v___y_2477_, v___y_2478_, v___y_2479_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v___y_2477_);
lean_dec_ref(v___y_2476_);
return v_res_2481_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(size_t v_sz_2482_, size_t v_i_2483_, lean_object* v_bs_2484_){
_start:
{
uint8_t v___x_2485_; 
v___x_2485_ = lean_usize_dec_lt(v_i_2483_, v_sz_2482_);
if (v___x_2485_ == 0)
{
return v_bs_2484_;
}
else
{
lean_object* v_v_2486_; lean_object* v___x_2487_; lean_object* v_bs_x27_2488_; size_t v___x_2489_; size_t v___x_2490_; lean_object* v___x_2491_; 
v_v_2486_ = lean_array_uget(v_bs_2484_, v_i_2483_);
v___x_2487_ = lean_unsigned_to_nat(0u);
v_bs_x27_2488_ = lean_array_uset(v_bs_2484_, v_i_2483_, v___x_2487_);
v___x_2489_ = ((size_t)1ULL);
v___x_2490_ = lean_usize_add(v_i_2483_, v___x_2489_);
v___x_2491_ = lean_array_uset(v_bs_x27_2488_, v_i_2483_, v_v_2486_);
v_i_2483_ = v___x_2490_;
v_bs_2484_ = v___x_2491_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0___boxed(lean_object* v_sz_2493_, lean_object* v_i_2494_, lean_object* v_bs_2495_){
_start:
{
size_t v_sz_boxed_2496_; size_t v_i_boxed_2497_; lean_object* v_res_2498_; 
v_sz_boxed_2496_ = lean_unbox_usize(v_sz_2493_);
lean_dec(v_sz_2493_);
v_i_boxed_2497_ = lean_unbox_usize(v_i_2494_);
lean_dec(v_i_2494_);
v_res_2498_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(v_sz_boxed_2496_, v_i_boxed_2497_, v_bs_2495_);
return v_res_2498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(lean_object* v_simpClause_2499_, lean_object* v_a_2500_, lean_object* v_a_2501_, lean_object* v_a_2502_, lean_object* v_a_2503_){
_start:
{
lean_object* v___y_2506_; lean_object* v___y_2507_; lean_object* v___x_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; 
v___x_2526_ = l_Lean_Syntax_getNumArgs(v_simpClause_2499_);
v___x_2527_ = lean_unsigned_to_nat(0u);
v___x_2528_ = lean_nat_dec_eq(v___x_2526_, v___x_2527_);
lean_dec(v___x_2526_);
if (v___x_2528_ == 0)
{
lean_object* v___x_2529_; lean_object* v___y_2531_; lean_object* v___y_2532_; lean_object* v___y_2540_; lean_object* v___x_2546_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2529_ = lean_unsigned_to_nat(1u);
v___x_2546_ = l_Lean_Syntax_getArg(v_simpClause_2499_, v___x_2529_);
v___x_2550_ = l_Lean_Syntax_getNumArgs(v___x_2546_);
v___x_2551_ = lean_nat_dec_eq(v___x_2550_, v___x_2527_);
lean_dec(v___x_2550_);
if (v___x_2551_ == 0)
{
goto v___jp_2547_;
}
else
{
if (v___x_2528_ == 0)
{
lean_object* v___x_2552_; 
lean_dec(v___x_2546_);
v___x_2552_ = lean_box(0);
v___y_2540_ = v___x_2552_;
goto v___jp_2539_;
}
else
{
goto v___jp_2547_;
}
}
v___jp_2530_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; size_t v_sz_2535_; size_t v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v___x_2533_ = l_Lean_Syntax_getArg(v___y_2532_, v___x_2529_);
lean_dec(v___y_2532_);
v___x_2534_ = l_Lean_Syntax_getSepArgs(v___x_2533_);
lean_dec(v___x_2533_);
v_sz_2535_ = lean_array_size(v___x_2534_);
v___x_2536_ = ((size_t)0ULL);
v___x_2537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions_spec__0(v_sz_2535_, v___x_2536_, v___x_2534_);
v___x_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2538_, 0, v___x_2537_);
v___y_2506_ = v___y_2531_;
v___y_2507_ = v___x_2538_;
goto v___jp_2505_;
}
v___jp_2539_:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; uint8_t v___x_2544_; 
v___x_2541_ = lean_unsigned_to_nat(2u);
v___x_2542_ = l_Lean_Syntax_getArg(v_simpClause_2499_, v___x_2541_);
v___x_2543_ = l_Lean_Syntax_getNumArgs(v___x_2542_);
v___x_2544_ = lean_nat_dec_eq(v___x_2543_, v___x_2527_);
lean_dec(v___x_2543_);
if (v___x_2544_ == 0)
{
v___y_2531_ = v___y_2540_;
v___y_2532_ = v___x_2542_;
goto v___jp_2530_;
}
else
{
if (v___x_2528_ == 0)
{
lean_object* v___x_2545_; 
lean_dec(v___x_2542_);
v___x_2545_ = lean_box(0);
v___y_2506_ = v___y_2540_;
v___y_2507_ = v___x_2545_;
goto v___jp_2505_;
}
else
{
v___y_2531_ = v___y_2540_;
v___y_2532_ = v___x_2542_;
goto v___jp_2530_;
}
}
}
v___jp_2547_:
{
lean_object* v___x_2548_; lean_object* v___x_2549_; 
v___x_2548_ = l_Lean_Syntax_getArg(v___x_2546_, v___x_2527_);
lean_dec(v___x_2546_);
v___x_2549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2548_);
v___y_2540_ = v___x_2549_;
goto v___jp_2539_;
}
}
else
{
lean_object* v___x_2553_; lean_object* v___x_2554_; 
v___x_2553_ = lean_box(0);
v___x_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
return v___x_2554_;
}
v___jp_2505_:
{
lean_object* v___x_2508_; 
v___x_2508_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSymSimpParts(v___y_2506_, v___y_2507_, v_a_2500_, v_a_2501_, v_a_2502_, v_a_2503_);
lean_dec(v___y_2507_);
lean_dec(v___y_2506_);
if (lean_obj_tag(v___x_2508_) == 0)
{
lean_object* v_a_2509_; lean_object* v___x_2511_; uint8_t v_isShared_2512_; uint8_t v_isSharedCheck_2517_; 
v_a_2509_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2511_ = v___x_2508_;
v_isShared_2512_ = v_isSharedCheck_2517_;
goto v_resetjp_2510_;
}
else
{
lean_inc(v_a_2509_);
lean_dec(v___x_2508_);
v___x_2511_ = lean_box(0);
v_isShared_2512_ = v_isSharedCheck_2517_;
goto v_resetjp_2510_;
}
v_resetjp_2510_:
{
lean_object* v___x_2513_; lean_object* v___x_2515_; 
v___x_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2513_, 0, v_a_2509_);
if (v_isShared_2512_ == 0)
{
lean_ctor_set(v___x_2511_, 0, v___x_2513_);
v___x_2515_ = v___x_2511_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v___x_2513_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
v_a_2518_ = lean_ctor_get(v___x_2508_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2508_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2508_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2508_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions___boxed(lean_object* v_simpClause_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_){
_start:
{
lean_object* v_res_2561_; 
v_res_2561_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(v_simpClause_2555_, v_a_2556_, v_a_2557_, v_a_2558_, v_a_2559_);
lean_dec(v_a_2559_);
lean_dec_ref(v_a_2558_);
lean_dec(v_a_2557_);
lean_dec_ref(v_a_2556_);
lean_dec(v_simpClause_2555_);
return v_res_2561_;
}
}
static lean_object* _init_l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2563_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0));
v___x_2564_ = lean_string_utf8_byte_size(v___x_2563_);
return v___x_2564_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(lean_object* v_s_2565_){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; uint8_t v___x_2569_; 
v___x_2566_ = ((lean_object*)(l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__0));
v___x_2567_ = lean_string_utf8_byte_size(v_s_2565_);
v___x_2568_ = lean_obj_once(&l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1, &l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1_once, _init_l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg___closed__1);
v___x_2569_ = lean_nat_dec_le(v___x_2568_, v___x_2567_);
if (v___x_2569_ == 0)
{
lean_object* v___x_2570_; 
lean_dec_ref(v_s_2565_);
v___x_2570_ = lean_box(0);
return v___x_2570_;
}
else
{
lean_object* v___x_2571_; uint8_t v___x_2572_; 
v___x_2571_ = lean_unsigned_to_nat(0u);
v___x_2572_ = lean_string_memcmp(v_s_2565_, v___x_2566_, v___x_2571_, v___x_2571_, v___x_2568_);
if (v___x_2572_ == 0)
{
lean_object* v___x_2573_; 
lean_dec_ref(v_s_2565_);
v___x_2573_ = lean_box(0);
return v___x_2573_;
}
else
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
lean_inc_ref(v_s_2565_);
v___x_2574_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2574_, 0, v_s_2565_);
lean_ctor_set(v___x_2574_, 1, v___x_2571_);
lean_ctor_set(v___x_2574_, 2, v___x_2567_);
v___x_2575_ = l_String_Slice_pos_x21(v___x_2574_, v___x_2568_);
lean_dec_ref_known(v___x_2574_, 3);
v___x_2576_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2576_, 0, v_s_2565_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
lean_ctor_set(v___x_2576_, 2, v___x_2567_);
v___x_2577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
return v___x_2577_;
}
}
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(lean_object* v_s_2578_, lean_object* v_pat_2579_){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(v_s_2578_);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___boxed(lean_object* v_s_2581_, lean_object* v_pat_2582_){
_start:
{
lean_object* v_res_2583_; 
v_res_2583_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2(v_s_2581_, v_pat_2582_);
lean_dec_ref(v_pat_2582_);
return v_res_2583_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(lean_object* v_a_2584_, lean_object* v_x_2585_){
_start:
{
if (lean_obj_tag(v_x_2585_) == 0)
{
uint8_t v___x_2586_; 
v___x_2586_ = 0;
return v___x_2586_;
}
else
{
lean_object* v_key_2587_; lean_object* v_tail_2588_; uint8_t v___x_2589_; 
v_key_2587_ = lean_ctor_get(v_x_2585_, 0);
v_tail_2588_ = lean_ctor_get(v_x_2585_, 2);
v___x_2589_ = lean_nat_dec_eq(v_key_2587_, v_a_2584_);
if (v___x_2589_ == 0)
{
v_x_2585_ = v_tail_2588_;
goto _start;
}
else
{
return v___x_2589_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg___boxed(lean_object* v_a_2591_, lean_object* v_x_2592_){
_start:
{
uint8_t v_res_2593_; lean_object* v_r_2594_; 
v_res_2593_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2591_, v_x_2592_);
lean_dec(v_x_2592_);
lean_dec(v_a_2591_);
v_r_2594_ = lean_box(v_res_2593_);
return v_r_2594_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(lean_object* v_m_2595_, lean_object* v_a_2596_){
_start:
{
lean_object* v_buckets_2597_; lean_object* v___x_2598_; uint64_t v___x_2599_; uint64_t v___x_2600_; uint64_t v___x_2601_; uint64_t v_fold_2602_; uint64_t v___x_2603_; uint64_t v___x_2604_; uint64_t v___x_2605_; size_t v___x_2606_; size_t v___x_2607_; size_t v___x_2608_; size_t v___x_2609_; size_t v___x_2610_; lean_object* v___x_2611_; uint8_t v___x_2612_; 
v_buckets_2597_ = lean_ctor_get(v_m_2595_, 1);
v___x_2598_ = lean_array_get_size(v_buckets_2597_);
v___x_2599_ = lean_uint64_of_nat(v_a_2596_);
v___x_2600_ = 32ULL;
v___x_2601_ = lean_uint64_shift_right(v___x_2599_, v___x_2600_);
v_fold_2602_ = lean_uint64_xor(v___x_2599_, v___x_2601_);
v___x_2603_ = 16ULL;
v___x_2604_ = lean_uint64_shift_right(v_fold_2602_, v___x_2603_);
v___x_2605_ = lean_uint64_xor(v_fold_2602_, v___x_2604_);
v___x_2606_ = lean_uint64_to_usize(v___x_2605_);
v___x_2607_ = lean_usize_of_nat(v___x_2598_);
v___x_2608_ = ((size_t)1ULL);
v___x_2609_ = lean_usize_sub(v___x_2607_, v___x_2608_);
v___x_2610_ = lean_usize_land(v___x_2606_, v___x_2609_);
v___x_2611_ = lean_array_uget_borrowed(v_buckets_2597_, v___x_2610_);
v___x_2612_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2596_, v___x_2611_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg___boxed(lean_object* v_m_2613_, lean_object* v_a_2614_){
_start:
{
uint8_t v_res_2615_; lean_object* v_r_2616_; 
v_res_2615_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_m_2613_, v_a_2614_);
lean_dec(v_a_2614_);
lean_dec_ref(v_m_2613_);
v_r_2616_ = lean_box(v_res_2615_);
return v_r_2616_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(lean_object* v_a_2617_, lean_object* v_b_2618_, lean_object* v_x_2619_){
_start:
{
if (lean_obj_tag(v_x_2619_) == 0)
{
lean_dec(v_b_2618_);
lean_dec(v_a_2617_);
return v_x_2619_;
}
else
{
lean_object* v_key_2620_; lean_object* v_value_2621_; lean_object* v_tail_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2634_; 
v_key_2620_ = lean_ctor_get(v_x_2619_, 0);
v_value_2621_ = lean_ctor_get(v_x_2619_, 1);
v_tail_2622_ = lean_ctor_get(v_x_2619_, 2);
v_isSharedCheck_2634_ = !lean_is_exclusive(v_x_2619_);
if (v_isSharedCheck_2634_ == 0)
{
v___x_2624_ = v_x_2619_;
v_isShared_2625_ = v_isSharedCheck_2634_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_tail_2622_);
lean_inc(v_value_2621_);
lean_inc(v_key_2620_);
lean_dec(v_x_2619_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2634_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
uint8_t v___x_2626_; 
v___x_2626_ = lean_nat_dec_eq(v_key_2620_, v_a_2617_);
if (v___x_2626_ == 0)
{
lean_object* v___x_2627_; lean_object* v___x_2629_; 
v___x_2627_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_2617_, v_b_2618_, v_tail_2622_);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 2, v___x_2627_);
v___x_2629_ = v___x_2624_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_key_2620_);
lean_ctor_set(v_reuseFailAlloc_2630_, 1, v_value_2621_);
lean_ctor_set(v_reuseFailAlloc_2630_, 2, v___x_2627_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
else
{
lean_object* v___x_2632_; 
lean_dec(v_value_2621_);
lean_dec(v_key_2620_);
if (v_isShared_2625_ == 0)
{
lean_ctor_set(v___x_2624_, 1, v_b_2618_);
lean_ctor_set(v___x_2624_, 0, v_a_2617_);
v___x_2632_ = v___x_2624_;
goto v_reusejp_2631_;
}
else
{
lean_object* v_reuseFailAlloc_2633_; 
v_reuseFailAlloc_2633_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2633_, 0, v_a_2617_);
lean_ctor_set(v_reuseFailAlloc_2633_, 1, v_b_2618_);
lean_ctor_set(v_reuseFailAlloc_2633_, 2, v_tail_2622_);
v___x_2632_ = v_reuseFailAlloc_2633_;
goto v_reusejp_2631_;
}
v_reusejp_2631_:
{
return v___x_2632_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(lean_object* v_x_2635_, lean_object* v_x_2636_){
_start:
{
if (lean_obj_tag(v_x_2636_) == 0)
{
return v_x_2635_;
}
else
{
lean_object* v_key_2637_; lean_object* v_value_2638_; lean_object* v_tail_2639_; lean_object* v___x_2641_; uint8_t v_isShared_2642_; uint8_t v_isSharedCheck_2662_; 
v_key_2637_ = lean_ctor_get(v_x_2636_, 0);
v_value_2638_ = lean_ctor_get(v_x_2636_, 1);
v_tail_2639_ = lean_ctor_get(v_x_2636_, 2);
v_isSharedCheck_2662_ = !lean_is_exclusive(v_x_2636_);
if (v_isSharedCheck_2662_ == 0)
{
v___x_2641_ = v_x_2636_;
v_isShared_2642_ = v_isSharedCheck_2662_;
goto v_resetjp_2640_;
}
else
{
lean_inc(v_tail_2639_);
lean_inc(v_value_2638_);
lean_inc(v_key_2637_);
lean_dec(v_x_2636_);
v___x_2641_ = lean_box(0);
v_isShared_2642_ = v_isSharedCheck_2662_;
goto v_resetjp_2640_;
}
v_resetjp_2640_:
{
lean_object* v___x_2643_; uint64_t v___x_2644_; uint64_t v___x_2645_; uint64_t v___x_2646_; uint64_t v_fold_2647_; uint64_t v___x_2648_; uint64_t v___x_2649_; uint64_t v___x_2650_; size_t v___x_2651_; size_t v___x_2652_; size_t v___x_2653_; size_t v___x_2654_; size_t v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2658_; 
v___x_2643_ = lean_array_get_size(v_x_2635_);
v___x_2644_ = lean_uint64_of_nat(v_key_2637_);
v___x_2645_ = 32ULL;
v___x_2646_ = lean_uint64_shift_right(v___x_2644_, v___x_2645_);
v_fold_2647_ = lean_uint64_xor(v___x_2644_, v___x_2646_);
v___x_2648_ = 16ULL;
v___x_2649_ = lean_uint64_shift_right(v_fold_2647_, v___x_2648_);
v___x_2650_ = lean_uint64_xor(v_fold_2647_, v___x_2649_);
v___x_2651_ = lean_uint64_to_usize(v___x_2650_);
v___x_2652_ = lean_usize_of_nat(v___x_2643_);
v___x_2653_ = ((size_t)1ULL);
v___x_2654_ = lean_usize_sub(v___x_2652_, v___x_2653_);
v___x_2655_ = lean_usize_land(v___x_2651_, v___x_2654_);
v___x_2656_ = lean_array_uget_borrowed(v_x_2635_, v___x_2655_);
lean_inc(v___x_2656_);
if (v_isShared_2642_ == 0)
{
lean_ctor_set(v___x_2641_, 2, v___x_2656_);
v___x_2658_ = v___x_2641_;
goto v_reusejp_2657_;
}
else
{
lean_object* v_reuseFailAlloc_2661_; 
v_reuseFailAlloc_2661_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2661_, 0, v_key_2637_);
lean_ctor_set(v_reuseFailAlloc_2661_, 1, v_value_2638_);
lean_ctor_set(v_reuseFailAlloc_2661_, 2, v___x_2656_);
v___x_2658_ = v_reuseFailAlloc_2661_;
goto v_reusejp_2657_;
}
v_reusejp_2657_:
{
lean_object* v___x_2659_; 
v___x_2659_ = lean_array_uset(v_x_2635_, v___x_2655_, v___x_2658_);
v_x_2635_ = v___x_2659_;
v_x_2636_ = v_tail_2639_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(lean_object* v_i_2663_, lean_object* v_source_2664_, lean_object* v_target_2665_){
_start:
{
lean_object* v___x_2666_; uint8_t v___x_2667_; 
v___x_2666_ = lean_array_get_size(v_source_2664_);
v___x_2667_ = lean_nat_dec_lt(v_i_2663_, v___x_2666_);
if (v___x_2667_ == 0)
{
lean_dec_ref(v_source_2664_);
lean_dec(v_i_2663_);
return v_target_2665_;
}
else
{
lean_object* v_es_2668_; lean_object* v___x_2669_; lean_object* v_source_2670_; lean_object* v_target_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; 
v_es_2668_ = lean_array_fget(v_source_2664_, v_i_2663_);
v___x_2669_ = lean_box(0);
v_source_2670_ = lean_array_fset(v_source_2664_, v_i_2663_, v___x_2669_);
v_target_2671_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(v_target_2665_, v_es_2668_);
v___x_2672_ = lean_unsigned_to_nat(1u);
v___x_2673_ = lean_nat_add(v_i_2663_, v___x_2672_);
lean_dec(v_i_2663_);
v_i_2663_ = v___x_2673_;
v_source_2664_ = v_source_2670_;
v_target_2665_ = v_target_2671_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(lean_object* v_data_2675_){
_start:
{
lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v_nbuckets_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___x_2676_ = lean_array_get_size(v_data_2675_);
v___x_2677_ = lean_unsigned_to_nat(2u);
v_nbuckets_2678_ = lean_nat_mul(v___x_2676_, v___x_2677_);
v___x_2679_ = lean_unsigned_to_nat(0u);
v___x_2680_ = lean_box(0);
v___x_2681_ = lean_mk_array(v_nbuckets_2678_, v___x_2680_);
v___x_2682_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(v___x_2679_, v_data_2675_, v___x_2681_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(lean_object* v_m_2683_, lean_object* v_a_2684_, lean_object* v_b_2685_){
_start:
{
lean_object* v_size_2686_; lean_object* v_buckets_2687_; lean_object* v___x_2689_; uint8_t v_isShared_2690_; uint8_t v_isSharedCheck_2730_; 
v_size_2686_ = lean_ctor_get(v_m_2683_, 0);
v_buckets_2687_ = lean_ctor_get(v_m_2683_, 1);
v_isSharedCheck_2730_ = !lean_is_exclusive(v_m_2683_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2689_ = v_m_2683_;
v_isShared_2690_ = v_isSharedCheck_2730_;
goto v_resetjp_2688_;
}
else
{
lean_inc(v_buckets_2687_);
lean_inc(v_size_2686_);
lean_dec(v_m_2683_);
v___x_2689_ = lean_box(0);
v_isShared_2690_ = v_isSharedCheck_2730_;
goto v_resetjp_2688_;
}
v_resetjp_2688_:
{
lean_object* v___x_2691_; uint64_t v___x_2692_; uint64_t v___x_2693_; uint64_t v___x_2694_; uint64_t v_fold_2695_; uint64_t v___x_2696_; uint64_t v___x_2697_; uint64_t v___x_2698_; size_t v___x_2699_; size_t v___x_2700_; size_t v___x_2701_; size_t v___x_2702_; size_t v___x_2703_; lean_object* v_bkt_2704_; uint8_t v___x_2705_; 
v___x_2691_ = lean_array_get_size(v_buckets_2687_);
v___x_2692_ = lean_uint64_of_nat(v_a_2684_);
v___x_2693_ = 32ULL;
v___x_2694_ = lean_uint64_shift_right(v___x_2692_, v___x_2693_);
v_fold_2695_ = lean_uint64_xor(v___x_2692_, v___x_2694_);
v___x_2696_ = 16ULL;
v___x_2697_ = lean_uint64_shift_right(v_fold_2695_, v___x_2696_);
v___x_2698_ = lean_uint64_xor(v_fold_2695_, v___x_2697_);
v___x_2699_ = lean_uint64_to_usize(v___x_2698_);
v___x_2700_ = lean_usize_of_nat(v___x_2691_);
v___x_2701_ = ((size_t)1ULL);
v___x_2702_ = lean_usize_sub(v___x_2700_, v___x_2701_);
v___x_2703_ = lean_usize_land(v___x_2699_, v___x_2702_);
v_bkt_2704_ = lean_array_uget_borrowed(v_buckets_2687_, v___x_2703_);
v___x_2705_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_2684_, v_bkt_2704_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; lean_object* v_size_x27_2707_; lean_object* v___x_2708_; lean_object* v_buckets_x27_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; uint8_t v___x_2715_; 
v___x_2706_ = lean_unsigned_to_nat(1u);
v_size_x27_2707_ = lean_nat_add(v_size_2686_, v___x_2706_);
lean_dec(v_size_2686_);
lean_inc(v_bkt_2704_);
v___x_2708_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2708_, 0, v_a_2684_);
lean_ctor_set(v___x_2708_, 1, v_b_2685_);
lean_ctor_set(v___x_2708_, 2, v_bkt_2704_);
v_buckets_x27_2709_ = lean_array_uset(v_buckets_2687_, v___x_2703_, v___x_2708_);
v___x_2710_ = lean_unsigned_to_nat(4u);
v___x_2711_ = lean_nat_mul(v_size_x27_2707_, v___x_2710_);
v___x_2712_ = lean_unsigned_to_nat(3u);
v___x_2713_ = lean_nat_div(v___x_2711_, v___x_2712_);
lean_dec(v___x_2711_);
v___x_2714_ = lean_array_get_size(v_buckets_x27_2709_);
v___x_2715_ = lean_nat_dec_le(v___x_2713_, v___x_2714_);
lean_dec(v___x_2713_);
if (v___x_2715_ == 0)
{
lean_object* v_val_2716_; lean_object* v___x_2718_; 
v_val_2716_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_buckets_x27_2709_);
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 1, v_val_2716_);
lean_ctor_set(v___x_2689_, 0, v_size_x27_2707_);
v___x_2718_ = v___x_2689_;
goto v_reusejp_2717_;
}
else
{
lean_object* v_reuseFailAlloc_2719_; 
v_reuseFailAlloc_2719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2719_, 0, v_size_x27_2707_);
lean_ctor_set(v_reuseFailAlloc_2719_, 1, v_val_2716_);
v___x_2718_ = v_reuseFailAlloc_2719_;
goto v_reusejp_2717_;
}
v_reusejp_2717_:
{
return v___x_2718_;
}
}
else
{
lean_object* v___x_2721_; 
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 1, v_buckets_x27_2709_);
lean_ctor_set(v___x_2689_, 0, v_size_x27_2707_);
v___x_2721_ = v___x_2689_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v_size_x27_2707_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v_buckets_x27_2709_);
v___x_2721_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
return v___x_2721_;
}
}
}
else
{
lean_object* v___x_2723_; lean_object* v_buckets_x27_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v___x_2728_; 
lean_inc(v_bkt_2704_);
v___x_2723_ = lean_box(0);
v_buckets_x27_2724_ = lean_array_uset(v_buckets_2687_, v___x_2703_, v___x_2723_);
v___x_2725_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_2684_, v_b_2685_, v_bkt_2704_);
v___x_2726_ = lean_array_uset(v_buckets_x27_2724_, v___x_2703_, v___x_2725_);
if (v_isShared_2690_ == 0)
{
lean_ctor_set(v___x_2689_, 1, v___x_2726_);
v___x_2728_ = v___x_2689_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v_size_2686_);
lean_ctor_set(v_reuseFailAlloc_2729_, 1, v___x_2726_);
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
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2734_; lean_object* v___x_2735_; 
v___x_2734_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__1));
v___x_2735_ = l_Lean_MessageData_ofFormat(v___x_2734_);
return v___x_2735_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(lean_object* v_fst_2740_, lean_object* v___x_2741_, lean_object* v___x_2742_, lean_object* v___x_2743_, lean_object* v_a_2744_, lean_object* v___x_2745_, lean_object* v___x_2746_, lean_object* v_____r_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_){
_start:
{
uint8_t v___x_2755_; lean_object* v___y_2779_; lean_object* v_val_2786_; uint8_t v___x_2804_; 
v___x_2755_ = 0;
lean_inc(v___x_2742_);
v___x_2804_ = l_Lean_Syntax_isOfKind(v___x_2742_, v___x_2743_);
if (v___x_2804_ == 0)
{
lean_object* v___x_2805_; 
v___x_2805_ = lean_nat_add(v_a_2744_, v___x_2745_);
v_val_2786_ = v___x_2805_;
goto v___jp_2785_;
}
else
{
lean_object* v___x_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v___x_2806_ = l_Lean_Syntax_getArg(v___x_2742_, v___x_2746_);
v___x_2807_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__5));
lean_inc(v___x_2806_);
v___x_2808_ = l_Lean_Syntax_isOfKind(v___x_2806_, v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; 
lean_dec(v___x_2806_);
v___x_2809_ = lean_nat_add(v_a_2744_, v___x_2745_);
v_val_2786_ = v___x_2809_;
goto v___jp_2785_;
}
else
{
lean_object* v___x_2810_; 
v___x_2810_ = l_Lean_TSyntax_getId(v___x_2806_);
lean_dec(v___x_2806_);
if (lean_obj_tag(v___x_2810_) == 1)
{
lean_object* v_pre_2811_; 
v_pre_2811_ = lean_ctor_get(v___x_2810_, 0);
lean_inc(v_pre_2811_);
if (lean_obj_tag(v_pre_2811_) == 0)
{
lean_object* v_str_2812_; lean_object* v___x_2813_; 
v_str_2812_ = lean_ctor_get(v___x_2810_, 1);
lean_inc_ref(v_str_2812_);
lean_dec_ref_known(v___x_2810_, 2);
v___x_2813_ = l_String_dropPrefix_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__2___redArg(v_str_2812_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_dec(v___x_2741_);
goto v___jp_2756_;
}
else
{
lean_object* v_val_2814_; lean_object* v___x_2815_; 
v_val_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_val_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v___x_2815_ = l_String_Slice_toNat_x3f(v_val_2814_);
lean_dec(v_val_2814_);
if (lean_obj_tag(v___x_2815_) == 1)
{
lean_object* v_val_2816_; 
v_val_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_val_2816_);
lean_dec_ref_known(v___x_2815_, 1);
v_val_2786_ = v_val_2816_;
goto v___jp_2785_;
}
else
{
lean_dec(v___x_2815_);
lean_dec(v___x_2741_);
goto v___jp_2756_;
}
}
}
else
{
lean_dec(v_pre_2811_);
lean_dec_ref_known(v___x_2810_, 2);
lean_dec(v___x_2741_);
goto v___jp_2756_;
}
}
else
{
lean_dec(v___x_2810_);
lean_dec(v___x_2741_);
goto v___jp_2756_;
}
}
}
v___jp_2756_:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; 
v___x_2757_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__2);
v___x_2758_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2742_, v___x_2757_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_);
lean_dec(v___x_2742_);
if (lean_obj_tag(v___x_2758_) == 0)
{
lean_object* v___x_2760_; uint8_t v_isShared_2761_; uint8_t v_isSharedCheck_2768_; 
v_isSharedCheck_2768_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2768_ == 0)
{
lean_object* v_unused_2769_; 
v_unused_2769_ = lean_ctor_get(v___x_2758_, 0);
lean_dec(v_unused_2769_);
v___x_2760_ = v___x_2758_;
v_isShared_2761_ = v_isSharedCheck_2768_;
goto v_resetjp_2759_;
}
else
{
lean_dec(v___x_2758_);
v___x_2760_ = lean_box(0);
v_isShared_2761_ = v_isSharedCheck_2768_;
goto v_resetjp_2759_;
}
v_resetjp_2759_:
{
lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2766_; 
v___x_2762_ = lean_box(v___x_2755_);
v___x_2763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2763_, 0, v_fst_2740_);
lean_ctor_set(v___x_2763_, 1, v___x_2762_);
v___x_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2763_);
if (v_isShared_2761_ == 0)
{
lean_ctor_set(v___x_2760_, 0, v___x_2764_);
v___x_2766_ = v___x_2760_;
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
lean_object* v_a_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2777_; 
lean_dec(v_fst_2740_);
v_a_2770_ = lean_ctor_get(v___x_2758_, 0);
v_isSharedCheck_2777_ = !lean_is_exclusive(v___x_2758_);
if (v_isSharedCheck_2777_ == 0)
{
v___x_2772_ = v___x_2758_;
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_a_2770_);
lean_dec(v___x_2758_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2777_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2775_; 
if (v_isShared_2773_ == 0)
{
v___x_2775_ = v___x_2772_;
goto v_reusejp_2774_;
}
else
{
lean_object* v_reuseFailAlloc_2776_; 
v_reuseFailAlloc_2776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2776_, 0, v_a_2770_);
v___x_2775_ = v_reuseFailAlloc_2776_;
goto v_reusejp_2774_;
}
v_reusejp_2774_:
{
return v___x_2775_;
}
}
}
}
v___jp_2778_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2780_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_fst_2740_, v___y_2779_, v___x_2741_);
v___x_2781_ = lean_box(v___x_2755_);
v___x_2782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2782_, 0, v___x_2780_);
lean_ctor_set(v___x_2782_, 1, v___x_2781_);
v___x_2783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2783_, 0, v___x_2782_);
v___x_2784_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2784_, 0, v___x_2783_);
return v___x_2784_;
}
v___jp_2785_:
{
uint8_t v___x_2787_; 
v___x_2787_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_fst_2740_, v_val_2786_);
if (v___x_2787_ == 0)
{
lean_dec(v___x_2742_);
v___y_2779_ = v_val_2786_;
goto v___jp_2778_;
}
else
{
lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; 
v___x_2788_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___closed__3));
lean_inc(v_val_2786_);
v___x_2789_ = l_Nat_reprFast(v_val_2786_);
v___x_2790_ = lean_string_append(v___x_2788_, v___x_2789_);
lean_dec_ref(v___x_2789_);
v___x_2791_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__12_spec__13___redArg___closed__14));
v___x_2792_ = lean_string_append(v___x_2790_, v___x_2791_);
v___x_2793_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2793_, 0, v___x_2792_);
v___x_2794_ = l_Lean_MessageData_ofFormat(v___x_2793_);
v___x_2795_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2742_, v___x_2794_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_, v___y_2752_, v___y_2753_);
lean_dec(v___x_2742_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_dec_ref_known(v___x_2795_, 1);
v___y_2779_ = v_val_2786_;
goto v___jp_2778_;
}
else
{
lean_object* v_a_2796_; lean_object* v___x_2798_; uint8_t v_isShared_2799_; uint8_t v_isSharedCheck_2803_; 
lean_dec(v_val_2786_);
lean_dec(v___x_2741_);
lean_dec(v_fst_2740_);
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
v_isSharedCheck_2803_ = !lean_is_exclusive(v___x_2795_);
if (v_isSharedCheck_2803_ == 0)
{
v___x_2798_ = v___x_2795_;
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
else
{
lean_inc(v_a_2796_);
lean_dec(v___x_2795_);
v___x_2798_ = lean_box(0);
v_isShared_2799_ = v_isSharedCheck_2803_;
goto v_resetjp_2797_;
}
v_resetjp_2797_:
{
lean_object* v___x_2801_; 
if (v_isShared_2799_ == 0)
{
v___x_2801_ = v___x_2798_;
goto v_reusejp_2800_;
}
else
{
lean_object* v_reuseFailAlloc_2802_; 
v_reuseFailAlloc_2802_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2802_, 0, v_a_2796_);
v___x_2801_ = v_reuseFailAlloc_2802_;
goto v_reusejp_2800_;
}
v_reusejp_2800_:
{
return v___x_2801_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0___boxed(lean_object* v_fst_2817_, lean_object* v___x_2818_, lean_object* v___x_2819_, lean_object* v___x_2820_, lean_object* v_a_2821_, lean_object* v___x_2822_, lean_object* v___x_2823_, lean_object* v_____r_2824_, lean_object* v___y_2825_, lean_object* v___y_2826_, lean_object* v___y_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_){
_start:
{
lean_object* v_res_2832_; 
v_res_2832_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_2817_, v___x_2818_, v___x_2819_, v___x_2820_, v_a_2821_, v___x_2822_, v___x_2823_, v_____r_2824_, v___y_2825_, v___y_2826_, v___y_2827_, v___y_2828_, v___y_2829_, v___y_2830_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec_ref(v___y_2827_);
lean_dec(v___y_2826_);
lean_dec_ref(v___y_2825_);
lean_dec(v___x_2823_);
lean_dec(v___x_2822_);
lean_dec(v_a_2821_);
lean_dec(v___x_2820_);
return v_res_2832_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(lean_object* v_a_2833_, lean_object* v___x_2834_, lean_object* v_fst_2835_, lean_object* v___x_2836_, lean_object* v_____r_2837_, lean_object* v___y_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
uint8_t v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2845_ = 1;
v___x_2846_ = lean_nat_add(v_a_2833_, v___x_2834_);
v___x_2847_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_fst_2835_, v___x_2846_, v___x_2836_);
v___x_2848_ = lean_box(v___x_2845_);
v___x_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2849_, 0, v___x_2847_);
lean_ctor_set(v___x_2849_, 1, v___x_2848_);
v___x_2850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2849_);
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
return v___x_2851_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1___boxed(lean_object* v_a_2852_, lean_object* v___x_2853_, lean_object* v_fst_2854_, lean_object* v___x_2855_, lean_object* v_____r_2856_, lean_object* v___y_2857_, lean_object* v___y_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_){
_start:
{
lean_object* v_res_2864_; 
v_res_2864_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_2852_, v___x_2853_, v_fst_2854_, v___x_2855_, v_____r_2856_, v___y_2857_, v___y_2858_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
lean_dec(v___y_2860_);
lean_dec_ref(v___y_2859_);
lean_dec(v___y_2858_);
lean_dec_ref(v___y_2857_);
lean_dec(v___x_2853_);
lean_dec(v_a_2852_);
return v_res_2864_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_2878_; lean_object* v___x_2879_; 
v___x_2878_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__4));
v___x_2879_ = l_Lean_stringToMessageData(v___x_2878_);
return v___x_2879_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11(void){
_start:
{
lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2891_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__10));
v___x_2892_ = l_Lean_stringToMessageData(v___x_2891_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(lean_object* v_upperBound_2897_, lean_object* v_alts_2898_, lean_object* v___x_2899_, lean_object* v_a_2900_, lean_object* v_b_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_, lean_object* v___y_2907_){
_start:
{
uint8_t v___x_2909_; 
v___x_2909_ = lean_nat_dec_lt(v_a_2900_, v_upperBound_2897_);
if (v___x_2909_ == 0)
{
lean_object* v___x_2910_; 
lean_dec(v_a_2900_);
v___x_2910_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2910_, 0, v_b_2901_);
return v___x_2910_;
}
else
{
lean_object* v_fst_2911_; lean_object* v_snd_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_3027_; 
v_fst_2911_ = lean_ctor_get(v_b_2901_, 0);
v_snd_2912_ = lean_ctor_get(v_b_2901_, 1);
v_isSharedCheck_3027_ = !lean_is_exclusive(v_b_2901_);
if (v_isSharedCheck_3027_ == 0)
{
v___x_2914_ = v_b_2901_;
v_isShared_2915_ = v_isSharedCheck_3027_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_snd_2912_);
lean_inc(v_fst_2911_);
lean_dec(v_b_2901_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_3027_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v_a_2919_; lean_object* v___y_2923_; lean_object* v___x_2942_; lean_object* v___x_2943_; uint8_t v___x_2944_; 
v___x_2916_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__1));
v___x_2917_ = lean_unsigned_to_nat(1u);
v___x_2942_ = lean_unsigned_to_nat(0u);
v___x_2943_ = lean_array_fget_borrowed(v_alts_2898_, v_a_2900_);
lean_inc(v___x_2943_);
v___x_2944_ = l_Lean_Syntax_isOfKind(v___x_2943_, v___x_2916_);
if (v___x_2944_ == 0)
{
lean_object* v___x_2945_; uint8_t v___x_2946_; 
v___x_2945_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__3));
lean_inc(v___x_2943_);
v___x_2946_ = l_Lean_Syntax_isOfKind(v___x_2943_, v___x_2945_);
if (v___x_2946_ == 0)
{
lean_object* v___x_2947_; lean_object* v___x_2948_; 
v___x_2947_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_2948_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2943_, v___x_2947_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_2948_) == 0)
{
lean_object* v___x_2950_; 
lean_dec_ref_known(v___x_2948_, 1);
if (v_isShared_2915_ == 0)
{
v___x_2950_ = v___x_2914_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_fst_2911_);
lean_ctor_set(v_reuseFailAlloc_2951_, 1, v_snd_2912_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
v_a_2919_ = v___x_2950_;
goto v___jp_2918_;
}
}
else
{
lean_object* v_a_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2959_; 
lean_del_object(v___x_2914_);
lean_dec(v_snd_2912_);
lean_dec(v_fst_2911_);
lean_dec(v_a_2900_);
v_a_2952_ = lean_ctor_get(v___x_2948_, 0);
v_isSharedCheck_2959_ = !lean_is_exclusive(v___x_2948_);
if (v_isSharedCheck_2959_ == 0)
{
v___x_2954_ = v___x_2948_;
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_a_2952_);
lean_dec(v___x_2948_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2959_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v_a_2952_);
v___x_2957_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
return v___x_2957_;
}
}
}
}
else
{
lean_object* v___x_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; 
v___x_2960_ = l_Lean_Syntax_getArg(v___x_2943_, v___x_2917_);
v___x_2961_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__7));
lean_inc(v___x_2960_);
v___x_2962_ = l_Lean_Syntax_isOfKind(v___x_2960_, v___x_2961_);
if (v___x_2962_ == 0)
{
lean_object* v___x_2963_; lean_object* v___x_2964_; 
lean_dec(v___x_2960_);
v___x_2963_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_2964_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2943_, v___x_2963_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_2964_) == 0)
{
lean_object* v___x_2966_; 
lean_dec_ref_known(v___x_2964_, 1);
if (v_isShared_2915_ == 0)
{
v___x_2966_ = v___x_2914_;
goto v_reusejp_2965_;
}
else
{
lean_object* v_reuseFailAlloc_2967_; 
v_reuseFailAlloc_2967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2967_, 0, v_fst_2911_);
lean_ctor_set(v_reuseFailAlloc_2967_, 1, v_snd_2912_);
v___x_2966_ = v_reuseFailAlloc_2967_;
goto v_reusejp_2965_;
}
v_reusejp_2965_:
{
v_a_2919_ = v___x_2966_;
goto v___jp_2918_;
}
}
else
{
lean_object* v_a_2968_; lean_object* v___x_2970_; uint8_t v_isShared_2971_; uint8_t v_isSharedCheck_2975_; 
lean_del_object(v___x_2914_);
lean_dec(v_snd_2912_);
lean_dec(v_fst_2911_);
lean_dec(v_a_2900_);
v_a_2968_ = lean_ctor_get(v___x_2964_, 0);
v_isSharedCheck_2975_ = !lean_is_exclusive(v___x_2964_);
if (v_isSharedCheck_2975_ == 0)
{
v___x_2970_ = v___x_2964_;
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
else
{
lean_inc(v_a_2968_);
lean_dec(v___x_2964_);
v___x_2970_ = lean_box(0);
v_isShared_2971_ = v_isSharedCheck_2975_;
goto v_resetjp_2969_;
}
v_resetjp_2969_:
{
lean_object* v___x_2973_; 
if (v_isShared_2971_ == 0)
{
v___x_2973_ = v___x_2970_;
goto v_reusejp_2972_;
}
else
{
lean_object* v_reuseFailAlloc_2974_; 
v_reuseFailAlloc_2974_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2974_, 0, v_a_2968_);
v___x_2973_ = v_reuseFailAlloc_2974_;
goto v_reusejp_2972_;
}
v_reusejp_2972_:
{
return v___x_2973_;
}
}
}
}
else
{
lean_object* v___x_2976_; lean_object* v___x_2977_; uint8_t v___x_2991_; 
lean_del_object(v___x_2914_);
v___x_2976_ = l_Lean_Syntax_getArg(v___x_2960_, v___x_2942_);
lean_dec(v___x_2960_);
v___x_2977_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__9));
v___x_2991_ = lean_unbox(v_snd_2912_);
lean_dec(v_snd_2912_);
if (v___x_2991_ == 1)
{
goto v___jp_2978_;
}
else
{
if (v___x_2944_ == 0)
{
lean_object* v___x_2992_; lean_object* v___x_2993_; 
v___x_2992_ = lean_box(0);
lean_inc(v___x_2943_);
v___x_2993_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_2911_, v___x_2943_, v___x_2976_, v___x_2977_, v_a_2900_, v___x_2917_, v___x_2942_, v___x_2992_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
v___y_2923_ = v___x_2993_;
goto v___jp_2922_;
}
else
{
goto v___jp_2978_;
}
}
v___jp_2978_:
{
lean_object* v___x_2979_; lean_object* v___x_2980_; 
v___x_2979_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11);
v___x_2980_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2943_, v___x_2979_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_2980_) == 0)
{
lean_object* v_a_2981_; lean_object* v___x_2982_; 
v_a_2981_ = lean_ctor_get(v___x_2980_, 0);
lean_inc(v_a_2981_);
lean_dec_ref_known(v___x_2980_, 1);
lean_inc(v___x_2943_);
v___x_2982_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__0(v_fst_2911_, v___x_2943_, v___x_2976_, v___x_2977_, v_a_2900_, v___x_2917_, v___x_2942_, v_a_2981_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
v___y_2923_ = v___x_2982_;
goto v___jp_2922_;
}
else
{
lean_object* v_a_2983_; lean_object* v___x_2985_; uint8_t v_isShared_2986_; uint8_t v_isSharedCheck_2990_; 
lean_dec(v___x_2976_);
lean_dec(v_fst_2911_);
lean_dec(v_a_2900_);
v_a_2983_ = lean_ctor_get(v___x_2980_, 0);
v_isSharedCheck_2990_ = !lean_is_exclusive(v___x_2980_);
if (v_isSharedCheck_2990_ == 0)
{
v___x_2985_ = v___x_2980_;
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
else
{
lean_inc(v_a_2983_);
lean_dec(v___x_2980_);
v___x_2985_ = lean_box(0);
v_isShared_2986_ = v_isSharedCheck_2990_;
goto v_resetjp_2984_;
}
v_resetjp_2984_:
{
lean_object* v___x_2988_; 
if (v_isShared_2986_ == 0)
{
v___x_2988_ = v___x_2985_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_a_2983_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
return v___x_2988_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_2994_; lean_object* v___x_2995_; uint8_t v___x_2996_; 
v___x_2994_ = l_Lean_Syntax_getArg(v___x_2943_, v___x_2942_);
v___x_2995_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__13));
v___x_2996_ = l_Lean_Syntax_isOfKind(v___x_2994_, v___x_2995_);
if (v___x_2996_ == 0)
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2997_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__5);
v___x_2998_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2943_, v___x_2997_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_2998_) == 0)
{
lean_object* v___x_3000_; 
lean_dec_ref_known(v___x_2998_, 1);
if (v_isShared_2915_ == 0)
{
v___x_3000_ = v___x_2914_;
goto v_reusejp_2999_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_fst_2911_);
lean_ctor_set(v_reuseFailAlloc_3001_, 1, v_snd_2912_);
v___x_3000_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2999_;
}
v_reusejp_2999_:
{
v_a_2919_ = v___x_3000_;
goto v___jp_2918_;
}
}
else
{
lean_object* v_a_3002_; lean_object* v___x_3004_; uint8_t v_isShared_3005_; uint8_t v_isSharedCheck_3009_; 
lean_del_object(v___x_2914_);
lean_dec(v_snd_2912_);
lean_dec(v_fst_2911_);
lean_dec(v_a_2900_);
v_a_3002_ = lean_ctor_get(v___x_2998_, 0);
v_isSharedCheck_3009_ = !lean_is_exclusive(v___x_2998_);
if (v_isSharedCheck_3009_ == 0)
{
v___x_3004_ = v___x_2998_;
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
else
{
lean_inc(v_a_3002_);
lean_dec(v___x_2998_);
v___x_3004_ = lean_box(0);
v_isShared_3005_ = v_isSharedCheck_3009_;
goto v_resetjp_3003_;
}
v_resetjp_3003_:
{
lean_object* v___x_3007_; 
if (v_isShared_3005_ == 0)
{
v___x_3007_ = v___x_3004_;
goto v_reusejp_3006_;
}
else
{
lean_object* v_reuseFailAlloc_3008_; 
v_reuseFailAlloc_3008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3008_, 0, v_a_3002_);
v___x_3007_ = v_reuseFailAlloc_3008_;
goto v_reusejp_3006_;
}
v_reusejp_3006_:
{
return v___x_3007_;
}
}
}
}
else
{
uint8_t v___x_3023_; 
lean_del_object(v___x_2914_);
v___x_3023_ = lean_unbox(v_snd_2912_);
lean_dec(v_snd_2912_);
if (v___x_3023_ == 0)
{
goto v___jp_3010_;
}
else
{
uint8_t v___x_3024_; 
v___x_3024_ = lean_nat_dec_eq(v___x_2899_, v___x_2942_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; lean_object* v___x_3026_; 
v___x_3025_ = lean_box(0);
lean_inc(v___x_2943_);
v___x_3026_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_2900_, v___x_2917_, v_fst_2911_, v___x_2943_, v___x_3025_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
v___y_2923_ = v___x_3026_;
goto v___jp_2922_;
}
else
{
goto v___jp_3010_;
}
}
v___jp_3010_:
{
lean_object* v___x_3011_; lean_object* v___x_3012_; 
v___x_3011_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___closed__11);
v___x_3012_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__2_spec__4_spec__9_spec__13___redArg(v___x_2943_, v___x_3011_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
if (lean_obj_tag(v___x_3012_) == 0)
{
lean_object* v_a_3013_; lean_object* v___x_3014_; 
v_a_3013_ = lean_ctor_get(v___x_3012_, 0);
lean_inc(v_a_3013_);
lean_dec_ref_known(v___x_3012_, 1);
lean_inc(v___x_2943_);
v___x_3014_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___lam__1(v_a_2900_, v___x_2917_, v_fst_2911_, v___x_2943_, v_a_3013_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_);
v___y_2923_ = v___x_3014_;
goto v___jp_2922_;
}
else
{
lean_object* v_a_3015_; lean_object* v___x_3017_; uint8_t v_isShared_3018_; uint8_t v_isSharedCheck_3022_; 
lean_dec(v_fst_2911_);
lean_dec(v_a_2900_);
v_a_3015_ = lean_ctor_get(v___x_3012_, 0);
v_isSharedCheck_3022_ = !lean_is_exclusive(v___x_3012_);
if (v_isSharedCheck_3022_ == 0)
{
v___x_3017_ = v___x_3012_;
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
else
{
lean_inc(v_a_3015_);
lean_dec(v___x_3012_);
v___x_3017_ = lean_box(0);
v_isShared_3018_ = v_isSharedCheck_3022_;
goto v_resetjp_3016_;
}
v_resetjp_3016_:
{
lean_object* v___x_3020_; 
if (v_isShared_3018_ == 0)
{
v___x_3020_ = v___x_3017_;
goto v_reusejp_3019_;
}
else
{
lean_object* v_reuseFailAlloc_3021_; 
v_reuseFailAlloc_3021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3021_, 0, v_a_3015_);
v___x_3020_ = v_reuseFailAlloc_3021_;
goto v_reusejp_3019_;
}
v_reusejp_3019_:
{
return v___x_3020_;
}
}
}
}
}
}
v___jp_2918_:
{
lean_object* v___x_2920_; 
v___x_2920_ = lean_nat_add(v_a_2900_, v___x_2917_);
lean_dec(v_a_2900_);
v_a_2900_ = v___x_2920_;
v_b_2901_ = v_a_2919_;
goto _start;
}
v___jp_2922_:
{
if (lean_obj_tag(v___y_2923_) == 0)
{
lean_object* v_a_2924_; lean_object* v___x_2926_; uint8_t v_isShared_2927_; uint8_t v_isSharedCheck_2933_; 
v_a_2924_ = lean_ctor_get(v___y_2923_, 0);
v_isSharedCheck_2933_ = !lean_is_exclusive(v___y_2923_);
if (v_isSharedCheck_2933_ == 0)
{
v___x_2926_ = v___y_2923_;
v_isShared_2927_ = v_isSharedCheck_2933_;
goto v_resetjp_2925_;
}
else
{
lean_inc(v_a_2924_);
lean_dec(v___y_2923_);
v___x_2926_ = lean_box(0);
v_isShared_2927_ = v_isSharedCheck_2933_;
goto v_resetjp_2925_;
}
v_resetjp_2925_:
{
if (lean_obj_tag(v_a_2924_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2930_; 
lean_dec(v_a_2900_);
v_a_2928_ = lean_ctor_get(v_a_2924_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v_a_2924_, 1);
if (v_isShared_2927_ == 0)
{
lean_ctor_set(v___x_2926_, 0, v_a_2928_);
v___x_2930_ = v___x_2926_;
goto v_reusejp_2929_;
}
else
{
lean_object* v_reuseFailAlloc_2931_; 
v_reuseFailAlloc_2931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2931_, 0, v_a_2928_);
v___x_2930_ = v_reuseFailAlloc_2931_;
goto v_reusejp_2929_;
}
v_reusejp_2929_:
{
return v___x_2930_;
}
}
else
{
lean_object* v_a_2932_; 
lean_del_object(v___x_2926_);
v_a_2932_ = lean_ctor_get(v_a_2924_, 0);
lean_inc(v_a_2932_);
lean_dec_ref_known(v_a_2924_, 1);
v_a_2919_ = v_a_2932_;
goto v___jp_2918_;
}
}
}
else
{
lean_object* v_a_2934_; lean_object* v___x_2936_; uint8_t v_isShared_2937_; uint8_t v_isSharedCheck_2941_; 
lean_dec(v_a_2900_);
v_a_2934_ = lean_ctor_get(v___y_2923_, 0);
v_isSharedCheck_2941_ = !lean_is_exclusive(v___y_2923_);
if (v_isSharedCheck_2941_ == 0)
{
v___x_2936_ = v___y_2923_;
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
else
{
lean_inc(v_a_2934_);
lean_dec(v___y_2923_);
v___x_2936_ = lean_box(0);
v_isShared_2937_ = v_isSharedCheck_2941_;
goto v_resetjp_2935_;
}
v_resetjp_2935_:
{
lean_object* v___x_2939_; 
if (v_isShared_2937_ == 0)
{
v___x_2939_ = v___x_2936_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_a_2934_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
return v___x_2939_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg___boxed(lean_object* v_upperBound_3028_, lean_object* v_alts_3029_, lean_object* v___x_3030_, lean_object* v_a_3031_, lean_object* v_b_3032_, lean_object* v___y_3033_, lean_object* v___y_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_){
_start:
{
lean_object* v_res_3040_; 
v_res_3040_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v_upperBound_3028_, v_alts_3029_, v___x_3030_, v_a_3031_, v_b_3032_, v___y_3033_, v___y_3034_, v___y_3035_, v___y_3036_, v___y_3037_, v___y_3038_);
lean_dec(v___y_3038_);
lean_dec_ref(v___y_3037_);
lean_dec(v___y_3036_);
lean_dec_ref(v___y_3035_);
lean_dec(v___y_3034_);
lean_dec_ref(v___y_3033_);
lean_dec(v___x_3030_);
lean_dec_ref(v_alts_3029_);
lean_dec(v_upperBound_3028_);
return v_res_3040_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2(void){
_start:
{
uint8_t v_dotOrCase_3047_; lean_object* v_map_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; 
v_dotOrCase_3047_ = 2;
v_map_3048_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41);
v___x_3049_ = lean_box(v_dotOrCase_3047_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v_map_3048_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
return v___x_3050_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3(void){
_start:
{
lean_object* v___x_3051_; lean_object* v___x_3052_; 
v___x_3051_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41);
v___x_3052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3052_, 0, v___x_3051_);
return v___x_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(lean_object* v_stx_3064_, lean_object* v_a_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_){
_start:
{
lean_object* v___x_3072_; 
v___x_3072_ = l_Lean_Syntax_getOptional_x3f(v_stx_3064_);
if (lean_obj_tag(v___x_3072_) == 1)
{
lean_object* v_val_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3182_; 
v_val_3073_ = lean_ctor_get(v___x_3072_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3072_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3075_ = v___x_3072_;
v_isShared_3076_ = v_isSharedCheck_3182_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_val_3073_);
lean_dec(v___x_3072_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3182_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3077_; uint8_t v___x_3078_; 
v___x_3077_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__1));
lean_inc(v_val_3073_);
v___x_3078_ = l_Lean_Syntax_isOfKind(v_val_3073_, v___x_3077_);
if (v___x_3078_ == 0)
{
if (v___x_3078_ == 0)
{
lean_object* v___x_3079_; lean_object* v___x_3080_; 
lean_del_object(v___x_3075_);
lean_dec(v_val_3073_);
v___x_3079_ = lean_box(0);
v___x_3080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3079_);
return v___x_3080_;
}
else
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v_alts_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; uint8_t v___x_3086_; 
v___x_3081_ = lean_unsigned_to_nat(1u);
v___x_3082_ = l_Lean_Syntax_getArg(v_val_3073_, v___x_3081_);
lean_dec(v_val_3073_);
v_alts_3083_ = l_Lean_Syntax_getArgs(v___x_3082_);
lean_dec(v___x_3082_);
v___x_3084_ = lean_array_get_size(v_alts_3083_);
v___x_3085_ = lean_unsigned_to_nat(0u);
v___x_3086_ = lean_nat_dec_eq(v___x_3084_, v___x_3085_);
if (v___x_3086_ == 0)
{
lean_object* v___x_3087_; lean_object* v___x_3088_; 
v___x_3087_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_3088_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_3084_, v_alts_3083_, v___x_3084_, v___x_3085_, v___x_3087_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_);
lean_dec_ref(v_alts_3083_);
if (lean_obj_tag(v___x_3088_) == 0)
{
lean_object* v_a_3089_; lean_object* v___x_3091_; uint8_t v_isShared_3092_; uint8_t v_isSharedCheck_3100_; 
v_a_3089_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3100_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3100_ == 0)
{
v___x_3091_ = v___x_3088_;
v_isShared_3092_ = v_isSharedCheck_3100_;
goto v_resetjp_3090_;
}
else
{
lean_inc(v_a_3089_);
lean_dec(v___x_3088_);
v___x_3091_ = lean_box(0);
v_isShared_3092_ = v_isSharedCheck_3100_;
goto v_resetjp_3090_;
}
v_resetjp_3090_:
{
lean_object* v_fst_3093_; lean_object* v___x_3095_; 
v_fst_3093_ = lean_ctor_get(v_a_3089_, 0);
lean_inc(v_fst_3093_);
lean_dec(v_a_3089_);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v_fst_3093_);
v___x_3095_ = v___x_3075_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3099_; 
v_reuseFailAlloc_3099_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3099_, 0, v_fst_3093_);
v___x_3095_ = v_reuseFailAlloc_3099_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
lean_object* v___x_3097_; 
if (v_isShared_3092_ == 0)
{
lean_ctor_set(v___x_3091_, 0, v___x_3095_);
v___x_3097_ = v___x_3091_;
goto v_reusejp_3096_;
}
else
{
lean_object* v_reuseFailAlloc_3098_; 
v_reuseFailAlloc_3098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3098_, 0, v___x_3095_);
v___x_3097_ = v_reuseFailAlloc_3098_;
goto v_reusejp_3096_;
}
v_reusejp_3096_:
{
return v___x_3097_;
}
}
}
}
else
{
lean_object* v_a_3101_; lean_object* v___x_3103_; uint8_t v_isShared_3104_; uint8_t v_isSharedCheck_3108_; 
lean_del_object(v___x_3075_);
v_a_3101_ = lean_ctor_get(v___x_3088_, 0);
v_isSharedCheck_3108_ = !lean_is_exclusive(v___x_3088_);
if (v_isSharedCheck_3108_ == 0)
{
v___x_3103_ = v___x_3088_;
v_isShared_3104_ = v_isSharedCheck_3108_;
goto v_resetjp_3102_;
}
else
{
lean_inc(v_a_3101_);
lean_dec(v___x_3088_);
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
else
{
lean_object* v___x_3109_; lean_object* v___x_3110_; 
lean_dec_ref(v_alts_3083_);
lean_del_object(v___x_3075_);
v___x_3109_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_3110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3110_, 0, v___x_3109_);
return v___x_3110_;
}
}
}
else
{
lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; uint8_t v___x_3114_; 
v___x_3111_ = lean_unsigned_to_nat(0u);
v___x_3112_ = l_Lean_Syntax_getArg(v_val_3073_, v___x_3111_);
v___x_3113_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__5));
lean_inc(v___x_3112_);
v___x_3114_ = l_Lean_Syntax_isOfKind(v___x_3112_, v___x_3113_);
if (v___x_3114_ == 0)
{
lean_dec(v___x_3112_);
if (v___x_3078_ == 0)
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
lean_del_object(v___x_3075_);
lean_dec(v_val_3073_);
v___x_3115_ = lean_box(0);
v___x_3116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3115_);
return v___x_3116_;
}
else
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v_alts_3119_; lean_object* v___x_3120_; uint8_t v___x_3121_; 
v___x_3117_ = lean_unsigned_to_nat(1u);
v___x_3118_ = l_Lean_Syntax_getArg(v_val_3073_, v___x_3117_);
lean_dec(v_val_3073_);
v_alts_3119_ = l_Lean_Syntax_getArgs(v___x_3118_);
lean_dec(v___x_3118_);
v___x_3120_ = lean_array_get_size(v_alts_3119_);
v___x_3121_ = lean_nat_dec_eq(v___x_3120_, v___x_3111_);
if (v___x_3121_ == 0)
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_3123_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_3120_, v_alts_3119_, v___x_3120_, v___x_3111_, v___x_3122_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_);
lean_dec_ref(v_alts_3119_);
if (lean_obj_tag(v___x_3123_) == 0)
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3135_; 
v_a_3124_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3135_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3135_ == 0)
{
v___x_3126_ = v___x_3123_;
v_isShared_3127_ = v_isSharedCheck_3135_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3123_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3135_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v_fst_3128_; lean_object* v___x_3130_; 
v_fst_3128_ = lean_ctor_get(v_a_3124_, 0);
lean_inc(v_fst_3128_);
lean_dec(v_a_3124_);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v_fst_3128_);
v___x_3130_ = v___x_3075_;
goto v_reusejp_3129_;
}
else
{
lean_object* v_reuseFailAlloc_3134_; 
v_reuseFailAlloc_3134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3134_, 0, v_fst_3128_);
v___x_3130_ = v_reuseFailAlloc_3134_;
goto v_reusejp_3129_;
}
v_reusejp_3129_:
{
lean_object* v___x_3132_; 
if (v_isShared_3127_ == 0)
{
lean_ctor_set(v___x_3126_, 0, v___x_3130_);
v___x_3132_ = v___x_3126_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v___x_3130_);
v___x_3132_ = v_reuseFailAlloc_3133_;
goto v_reusejp_3131_;
}
v_reusejp_3131_:
{
return v___x_3132_;
}
}
}
}
else
{
lean_object* v_a_3136_; lean_object* v___x_3138_; uint8_t v_isShared_3139_; uint8_t v_isSharedCheck_3143_; 
lean_del_object(v___x_3075_);
v_a_3136_ = lean_ctor_get(v___x_3123_, 0);
v_isSharedCheck_3143_ = !lean_is_exclusive(v___x_3123_);
if (v_isSharedCheck_3143_ == 0)
{
v___x_3138_ = v___x_3123_;
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
else
{
lean_inc(v_a_3136_);
lean_dec(v___x_3123_);
v___x_3138_ = lean_box(0);
v_isShared_3139_ = v_isSharedCheck_3143_;
goto v_resetjp_3137_;
}
v_resetjp_3137_:
{
lean_object* v___x_3141_; 
if (v_isShared_3139_ == 0)
{
v___x_3141_ = v___x_3138_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_a_3136_);
v___x_3141_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
return v___x_3141_;
}
}
}
}
else
{
lean_object* v___x_3144_; lean_object* v___x_3145_; 
lean_dec_ref(v_alts_3119_);
lean_del_object(v___x_3075_);
v___x_3144_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_3145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
return v___x_3145_;
}
}
}
else
{
lean_object* v___x_3146_; lean_object* v___x_3147_; uint8_t v___x_3148_; 
v___x_3146_ = l_Lean_Syntax_getArg(v___x_3112_, v___x_3111_);
lean_dec(v___x_3112_);
v___x_3147_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__8));
v___x_3148_ = l_Lean_Syntax_isOfKind(v___x_3146_, v___x_3147_);
if (v___x_3148_ == 0)
{
if (v___x_3078_ == 0)
{
lean_object* v___x_3149_; lean_object* v___x_3150_; 
lean_del_object(v___x_3075_);
lean_dec(v_val_3073_);
v___x_3149_ = lean_box(0);
v___x_3150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3150_, 0, v___x_3149_);
return v___x_3150_;
}
else
{
lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v_alts_3153_; lean_object* v___x_3154_; uint8_t v___x_3155_; 
v___x_3151_ = lean_unsigned_to_nat(1u);
v___x_3152_ = l_Lean_Syntax_getArg(v_val_3073_, v___x_3151_);
lean_dec(v_val_3073_);
v_alts_3153_ = l_Lean_Syntax_getArgs(v___x_3152_);
lean_dec(v___x_3152_);
v___x_3154_ = lean_array_get_size(v_alts_3153_);
v___x_3155_ = lean_nat_dec_eq(v___x_3154_, v___x_3111_);
if (v___x_3155_ == 0)
{
lean_object* v___x_3156_; lean_object* v___x_3157_; 
v___x_3156_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__2);
v___x_3157_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v___x_3154_, v_alts_3153_, v___x_3154_, v___x_3111_, v___x_3156_, v_a_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_);
lean_dec_ref(v_alts_3153_);
if (lean_obj_tag(v___x_3157_) == 0)
{
lean_object* v_a_3158_; lean_object* v___x_3160_; uint8_t v_isShared_3161_; uint8_t v_isSharedCheck_3169_; 
v_a_3158_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3169_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3160_ = v___x_3157_;
v_isShared_3161_ = v_isSharedCheck_3169_;
goto v_resetjp_3159_;
}
else
{
lean_inc(v_a_3158_);
lean_dec(v___x_3157_);
v___x_3160_ = lean_box(0);
v_isShared_3161_ = v_isSharedCheck_3169_;
goto v_resetjp_3159_;
}
v_resetjp_3159_:
{
lean_object* v_fst_3162_; lean_object* v___x_3164_; 
v_fst_3162_ = lean_ctor_get(v_a_3158_, 0);
lean_inc(v_fst_3162_);
lean_dec(v_a_3158_);
if (v_isShared_3076_ == 0)
{
lean_ctor_set(v___x_3075_, 0, v_fst_3162_);
v___x_3164_ = v___x_3075_;
goto v_reusejp_3163_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v_fst_3162_);
v___x_3164_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3163_;
}
v_reusejp_3163_:
{
lean_object* v___x_3166_; 
if (v_isShared_3161_ == 0)
{
lean_ctor_set(v___x_3160_, 0, v___x_3164_);
v___x_3166_ = v___x_3160_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v___x_3164_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
else
{
lean_object* v_a_3170_; lean_object* v___x_3172_; uint8_t v_isShared_3173_; uint8_t v_isSharedCheck_3177_; 
lean_del_object(v___x_3075_);
v_a_3170_ = lean_ctor_get(v___x_3157_, 0);
v_isSharedCheck_3177_ = !lean_is_exclusive(v___x_3157_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3172_ = v___x_3157_;
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
else
{
lean_inc(v_a_3170_);
lean_dec(v___x_3157_);
v___x_3172_ = lean_box(0);
v_isShared_3173_ = v_isSharedCheck_3177_;
goto v_resetjp_3171_;
}
v_resetjp_3171_:
{
lean_object* v___x_3175_; 
if (v_isShared_3173_ == 0)
{
v___x_3175_ = v___x_3172_;
goto v_reusejp_3174_;
}
else
{
lean_object* v_reuseFailAlloc_3176_; 
v_reuseFailAlloc_3176_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3176_, 0, v_a_3170_);
v___x_3175_ = v_reuseFailAlloc_3176_;
goto v_reusejp_3174_;
}
v_reusejp_3174_:
{
return v___x_3175_;
}
}
}
}
else
{
lean_object* v___x_3178_; lean_object* v___x_3179_; 
lean_dec_ref(v_alts_3153_);
lean_del_object(v___x_3075_);
v___x_3178_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___closed__3);
v___x_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
return v___x_3179_;
}
}
}
else
{
lean_object* v___x_3180_; lean_object* v___x_3181_; 
lean_del_object(v___x_3075_);
lean_dec(v_val_3073_);
v___x_3180_ = lean_box(0);
v___x_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3181_, 0, v___x_3180_);
return v___x_3181_;
}
}
}
}
}
else
{
lean_object* v___x_3183_; lean_object* v___x_3184_; 
lean_dec(v___x_3072_);
v___x_3183_ = lean_box(0);
v___x_3184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3184_, 0, v___x_3183_);
return v___x_3184_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap___boxed(lean_object* v_stx_3185_, lean_object* v_a_3186_, lean_object* v_a_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_, lean_object* v_a_3190_, lean_object* v_a_3191_, lean_object* v_a_3192_){
_start:
{
lean_object* v_res_3193_; 
v_res_3193_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(v_stx_3185_, v_a_3186_, v_a_3187_, v_a_3188_, v_a_3189_, v_a_3190_, v_a_3191_);
lean_dec(v_a_3191_);
lean_dec_ref(v_a_3190_);
lean_dec(v_a_3189_);
lean_dec_ref(v_a_3188_);
lean_dec(v_a_3187_);
lean_dec_ref(v_a_3186_);
lean_dec(v_stx_3185_);
return v_res_3193_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0(lean_object* v_00_u03b2_3194_, lean_object* v_m_3195_, lean_object* v_a_3196_, lean_object* v_b_3197_){
_start:
{
lean_object* v___x_3198_; 
v___x_3198_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0___redArg(v_m_3195_, v_a_3196_, v_b_3197_);
return v___x_3198_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(lean_object* v_00_u03b2_3199_, lean_object* v_m_3200_, lean_object* v_a_3201_){
_start:
{
uint8_t v___x_3202_; 
v___x_3202_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_m_3200_, v_a_3201_);
return v___x_3202_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___boxed(lean_object* v_00_u03b2_3203_, lean_object* v_m_3204_, lean_object* v_a_3205_){
_start:
{
uint8_t v_res_3206_; lean_object* v_r_3207_; 
v_res_3206_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1(v_00_u03b2_3203_, v_m_3204_, v_a_3205_);
lean_dec(v_a_3205_);
lean_dec_ref(v_m_3204_);
v_r_3207_ = lean_box(v_res_3206_);
return v_r_3207_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(lean_object* v_upperBound_3208_, lean_object* v_alts_3209_, lean_object* v___x_3210_, lean_object* v_inst_3211_, lean_object* v_R_3212_, lean_object* v_a_3213_, lean_object* v_b_3214_, lean_object* v_c_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_, lean_object* v___y_3219_, lean_object* v___y_3220_, lean_object* v___y_3221_){
_start:
{
lean_object* v___x_3223_; 
v___x_3223_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___redArg(v_upperBound_3208_, v_alts_3209_, v___x_3210_, v_a_3213_, v_b_3214_, v___y_3216_, v___y_3217_, v___y_3218_, v___y_3219_, v___y_3220_, v___y_3221_);
return v___x_3223_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3___boxed(lean_object* v_upperBound_3224_, lean_object* v_alts_3225_, lean_object* v___x_3226_, lean_object* v_inst_3227_, lean_object* v_R_3228_, lean_object* v_a_3229_, lean_object* v_b_3230_, lean_object* v_c_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_, lean_object* v___y_3234_, lean_object* v___y_3235_, lean_object* v___y_3236_, lean_object* v___y_3237_, lean_object* v___y_3238_){
_start:
{
lean_object* v_res_3239_; 
v_res_3239_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__3(v_upperBound_3224_, v_alts_3225_, v___x_3226_, v_inst_3227_, v_R_3228_, v_a_3229_, v_b_3230_, v_c_3231_, v___y_3232_, v___y_3233_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec(v___y_3237_);
lean_dec_ref(v___y_3236_);
lean_dec(v___y_3235_);
lean_dec_ref(v___y_3234_);
lean_dec(v___y_3233_);
lean_dec_ref(v___y_3232_);
lean_dec(v___x_3226_);
lean_dec_ref(v_alts_3225_);
lean_dec(v_upperBound_3224_);
return v_res_3239_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(lean_object* v_00_u03b2_3240_, lean_object* v_a_3241_, lean_object* v_x_3242_){
_start:
{
uint8_t v___x_3243_; 
v___x_3243_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_3241_, v_x_3242_);
return v___x_3243_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___boxed(lean_object* v_00_u03b2_3244_, lean_object* v_a_3245_, lean_object* v_x_3246_){
_start:
{
uint8_t v_res_3247_; lean_object* v_r_3248_; 
v_res_3247_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0(v_00_u03b2_3244_, v_a_3245_, v_x_3246_);
lean_dec(v_x_3246_);
lean_dec(v_a_3245_);
v_r_3248_ = lean_box(v_res_3247_);
return v_r_3248_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1(lean_object* v_00_u03b2_3249_, lean_object* v_data_3250_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_data_3250_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2(lean_object* v_00_u03b2_3252_, lean_object* v_a_3253_, lean_object* v_b_3254_, lean_object* v_x_3255_){
_start:
{
lean_object* v___x_3256_; 
v___x_3256_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__2___redArg(v_a_3253_, v_b_3254_, v_x_3255_);
return v___x_3256_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3(lean_object* v_00_u03b2_3257_, lean_object* v_i_3258_, lean_object* v_source_3259_, lean_object* v_target_3260_){
_start:
{
lean_object* v___x_3261_; 
v___x_3261_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3___redArg(v_i_3258_, v_source_3259_, v_target_3260_);
return v___x_3261_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6(lean_object* v_00_u03b2_3262_, lean_object* v_x_3263_, lean_object* v_x_3264_){
_start:
{
lean_object* v___x_3265_; 
v___x_3265_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1_spec__3_spec__6___redArg(v_x_3263_, v_x_3264_);
return v___x_3265_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(lean_object* v_a_3266_, lean_object* v_x_3267_){
_start:
{
if (lean_obj_tag(v_x_3267_) == 0)
{
lean_object* v___x_3268_; 
v___x_3268_ = lean_box(0);
return v___x_3268_;
}
else
{
lean_object* v_key_3269_; lean_object* v_value_3270_; lean_object* v_tail_3271_; uint8_t v___x_3272_; 
v_key_3269_ = lean_ctor_get(v_x_3267_, 0);
v_value_3270_ = lean_ctor_get(v_x_3267_, 1);
v_tail_3271_ = lean_ctor_get(v_x_3267_, 2);
v___x_3272_ = lean_nat_dec_eq(v_key_3269_, v_a_3266_);
if (v___x_3272_ == 0)
{
v_x_3267_ = v_tail_3271_;
goto _start;
}
else
{
lean_object* v___x_3274_; 
lean_inc(v_value_3270_);
v___x_3274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3274_, 0, v_value_3270_);
return v___x_3274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg___boxed(lean_object* v_a_3275_, lean_object* v_x_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3275_, v_x_3276_);
lean_dec(v_x_3276_);
lean_dec(v_a_3275_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(lean_object* v_m_3278_, lean_object* v_a_3279_){
_start:
{
lean_object* v_buckets_3280_; lean_object* v___x_3281_; uint64_t v___x_3282_; uint64_t v___x_3283_; uint64_t v___x_3284_; uint64_t v_fold_3285_; uint64_t v___x_3286_; uint64_t v___x_3287_; uint64_t v___x_3288_; size_t v___x_3289_; size_t v___x_3290_; size_t v___x_3291_; size_t v___x_3292_; size_t v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; 
v_buckets_3280_ = lean_ctor_get(v_m_3278_, 1);
v___x_3281_ = lean_array_get_size(v_buckets_3280_);
v___x_3282_ = lean_uint64_of_nat(v_a_3279_);
v___x_3283_ = 32ULL;
v___x_3284_ = lean_uint64_shift_right(v___x_3282_, v___x_3283_);
v_fold_3285_ = lean_uint64_xor(v___x_3282_, v___x_3284_);
v___x_3286_ = 16ULL;
v___x_3287_ = lean_uint64_shift_right(v_fold_3285_, v___x_3286_);
v___x_3288_ = lean_uint64_xor(v_fold_3285_, v___x_3287_);
v___x_3289_ = lean_uint64_to_usize(v___x_3288_);
v___x_3290_ = lean_usize_of_nat(v___x_3281_);
v___x_3291_ = ((size_t)1ULL);
v___x_3292_ = lean_usize_sub(v___x_3290_, v___x_3291_);
v___x_3293_ = lean_usize_land(v___x_3289_, v___x_3292_);
v___x_3294_ = lean_array_uget_borrowed(v_buckets_3280_, v___x_3293_);
v___x_3295_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3279_, v___x_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg___boxed(lean_object* v_m_3296_, lean_object* v_a_3297_){
_start:
{
lean_object* v_res_3298_; 
v_res_3298_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_m_3296_, v_a_3297_);
lean_dec(v_a_3297_);
lean_dec_ref(v_m_3296_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(lean_object* v_m_3299_, lean_object* v_a_3300_, lean_object* v_b_3301_){
_start:
{
lean_object* v_size_3302_; lean_object* v_buckets_3303_; lean_object* v___x_3304_; uint64_t v___x_3305_; uint64_t v___x_3306_; uint64_t v___x_3307_; uint64_t v_fold_3308_; uint64_t v___x_3309_; uint64_t v___x_3310_; uint64_t v___x_3311_; size_t v___x_3312_; size_t v___x_3313_; size_t v___x_3314_; size_t v___x_3315_; size_t v___x_3316_; lean_object* v_bkt_3317_; uint8_t v___x_3318_; 
v_size_3302_ = lean_ctor_get(v_m_3299_, 0);
v_buckets_3303_ = lean_ctor_get(v_m_3299_, 1);
v___x_3304_ = lean_array_get_size(v_buckets_3303_);
v___x_3305_ = lean_uint64_of_nat(v_a_3300_);
v___x_3306_ = 32ULL;
v___x_3307_ = lean_uint64_shift_right(v___x_3305_, v___x_3306_);
v_fold_3308_ = lean_uint64_xor(v___x_3305_, v___x_3307_);
v___x_3309_ = 16ULL;
v___x_3310_ = lean_uint64_shift_right(v_fold_3308_, v___x_3309_);
v___x_3311_ = lean_uint64_xor(v_fold_3308_, v___x_3310_);
v___x_3312_ = lean_uint64_to_usize(v___x_3311_);
v___x_3313_ = lean_usize_of_nat(v___x_3304_);
v___x_3314_ = ((size_t)1ULL);
v___x_3315_ = lean_usize_sub(v___x_3313_, v___x_3314_);
v___x_3316_ = lean_usize_land(v___x_3312_, v___x_3315_);
v_bkt_3317_ = lean_array_uget_borrowed(v_buckets_3303_, v___x_3316_);
v___x_3318_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__0___redArg(v_a_3300_, v_bkt_3317_);
if (v___x_3318_ == 0)
{
lean_object* v___x_3320_; uint8_t v_isShared_3321_; uint8_t v_isSharedCheck_3339_; 
lean_inc_ref(v_buckets_3303_);
lean_inc(v_size_3302_);
v_isSharedCheck_3339_ = !lean_is_exclusive(v_m_3299_);
if (v_isSharedCheck_3339_ == 0)
{
lean_object* v_unused_3340_; lean_object* v_unused_3341_; 
v_unused_3340_ = lean_ctor_get(v_m_3299_, 1);
lean_dec(v_unused_3340_);
v_unused_3341_ = lean_ctor_get(v_m_3299_, 0);
lean_dec(v_unused_3341_);
v___x_3320_ = v_m_3299_;
v_isShared_3321_ = v_isSharedCheck_3339_;
goto v_resetjp_3319_;
}
else
{
lean_dec(v_m_3299_);
v___x_3320_ = lean_box(0);
v_isShared_3321_ = v_isSharedCheck_3339_;
goto v_resetjp_3319_;
}
v_resetjp_3319_:
{
lean_object* v___x_3322_; lean_object* v_size_x27_3323_; lean_object* v___x_3324_; lean_object* v_buckets_x27_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; uint8_t v___x_3331_; 
v___x_3322_ = lean_unsigned_to_nat(1u);
v_size_x27_3323_ = lean_nat_add(v_size_3302_, v___x_3322_);
lean_dec(v_size_3302_);
lean_inc(v_bkt_3317_);
v___x_3324_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3324_, 0, v_a_3300_);
lean_ctor_set(v___x_3324_, 1, v_b_3301_);
lean_ctor_set(v___x_3324_, 2, v_bkt_3317_);
v_buckets_x27_3325_ = lean_array_uset(v_buckets_3303_, v___x_3316_, v___x_3324_);
v___x_3326_ = lean_unsigned_to_nat(4u);
v___x_3327_ = lean_nat_mul(v_size_x27_3323_, v___x_3326_);
v___x_3328_ = lean_unsigned_to_nat(3u);
v___x_3329_ = lean_nat_div(v___x_3327_, v___x_3328_);
lean_dec(v___x_3327_);
v___x_3330_ = lean_array_get_size(v_buckets_x27_3325_);
v___x_3331_ = lean_nat_dec_le(v___x_3329_, v___x_3330_);
lean_dec(v___x_3329_);
if (v___x_3331_ == 0)
{
lean_object* v_val_3332_; lean_object* v___x_3334_; 
v_val_3332_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__0_spec__1___redArg(v_buckets_x27_3325_);
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 1, v_val_3332_);
lean_ctor_set(v___x_3320_, 0, v_size_x27_3323_);
v___x_3334_ = v___x_3320_;
goto v_reusejp_3333_;
}
else
{
lean_object* v_reuseFailAlloc_3335_; 
v_reuseFailAlloc_3335_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3335_, 0, v_size_x27_3323_);
lean_ctor_set(v_reuseFailAlloc_3335_, 1, v_val_3332_);
v___x_3334_ = v_reuseFailAlloc_3335_;
goto v_reusejp_3333_;
}
v_reusejp_3333_:
{
return v___x_3334_;
}
}
else
{
lean_object* v___x_3337_; 
if (v_isShared_3321_ == 0)
{
lean_ctor_set(v___x_3320_, 1, v_buckets_x27_3325_);
lean_ctor_set(v___x_3320_, 0, v_size_x27_3323_);
v___x_3337_ = v___x_3320_;
goto v_reusejp_3336_;
}
else
{
lean_object* v_reuseFailAlloc_3338_; 
v_reuseFailAlloc_3338_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3338_, 0, v_size_x27_3323_);
lean_ctor_set(v_reuseFailAlloc_3338_, 1, v_buckets_x27_3325_);
v___x_3337_ = v_reuseFailAlloc_3338_;
goto v_reusejp_3336_;
}
v_reusejp_3336_:
{
return v___x_3337_;
}
}
}
}
else
{
lean_dec(v_b_3301_);
lean_dec(v_a_3300_);
return v_m_3299_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(lean_object* v_upperBound_3342_, lean_object* v_alts_3343_, lean_object* v_invariants_3344_, lean_object* v_a_3345_, lean_object* v_b_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_){
_start:
{
lean_object* v_a_3355_; uint8_t v___x_3359_; 
v___x_3359_ = lean_nat_dec_lt(v_a_3345_, v_upperBound_3342_);
if (v___x_3359_ == 0)
{
lean_object* v___x_3360_; 
lean_dec(v_a_3345_);
v___x_3360_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3360_, 0, v_b_3346_);
return v___x_3360_;
}
else
{
lean_object* v___x_3361_; lean_object* v___x_3362_; uint8_t v___x_3363_; 
v___x_3361_ = lean_unsigned_to_nat(1u);
v___x_3362_ = lean_nat_add(v_a_3345_, v___x_3361_);
v___x_3363_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_b_3346_, v___x_3362_);
if (v___x_3363_ == 0)
{
lean_object* v___x_3364_; 
v___x_3364_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_alts_3343_, v___x_3362_);
if (lean_obj_tag(v___x_3364_) == 1)
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
lean_dec_ref_known(v___x_3364_, 1);
v___x_3365_ = lean_array_fget_borrowed(v_invariants_3344_, v_a_3345_);
lean_inc(v___x_3365_);
v___x_3366_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_alts_3343_, v___x_3362_, v___x_3365_, v___y_3347_, v___y_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
if (lean_obj_tag(v___x_3366_) == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; 
lean_dec_ref_known(v___x_3366_, 1);
v___x_3367_ = lean_box(0);
v___x_3368_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(v_b_3346_, v___x_3362_, v___x_3367_);
v_a_3355_ = v___x_3368_;
goto v___jp_3354_;
}
else
{
lean_object* v_a_3369_; lean_object* v___x_3371_; uint8_t v_isShared_3372_; uint8_t v_isSharedCheck_3376_; 
lean_dec(v___x_3362_);
lean_dec_ref(v_b_3346_);
lean_dec(v_a_3345_);
v_a_3369_ = lean_ctor_get(v___x_3366_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3366_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3371_ = v___x_3366_;
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
else
{
lean_inc(v_a_3369_);
lean_dec(v___x_3366_);
v___x_3371_ = lean_box(0);
v_isShared_3372_ = v_isSharedCheck_3376_;
goto v_resetjp_3370_;
}
v_resetjp_3370_:
{
lean_object* v___x_3374_; 
if (v_isShared_3372_ == 0)
{
v___x_3374_ = v___x_3371_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3369_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
else
{
lean_dec(v___x_3364_);
lean_dec(v___x_3362_);
v_a_3355_ = v_b_3346_;
goto v___jp_3354_;
}
}
else
{
lean_dec(v___x_3362_);
v_a_3355_ = v_b_3346_;
goto v___jp_3354_;
}
}
v___jp_3354_:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; 
v___x_3356_ = lean_unsigned_to_nat(1u);
v___x_3357_ = lean_nat_add(v_a_3345_, v___x_3356_);
lean_dec(v_a_3345_);
v_a_3345_ = v___x_3357_;
v_b_3346_ = v_a_3355_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg___boxed(lean_object* v_upperBound_3377_, lean_object* v_alts_3378_, lean_object* v_invariants_3379_, lean_object* v_a_3380_, lean_object* v_b_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v_upperBound_3377_, v_alts_3378_, v_invariants_3379_, v_a_3380_, v_b_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
lean_dec(v___y_3385_);
lean_dec_ref(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec_ref(v___y_3382_);
lean_dec_ref(v_invariants_3379_);
lean_dec_ref(v_alts_3378_);
lean_dec(v_upperBound_3377_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(lean_object* v_ref_3390_, lean_object* v_msgData_3391_, uint8_t v_severity_3392_, uint8_t v_isSilent_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v___y_3400_; lean_object* v___y_3401_; uint8_t v___y_3402_; lean_object* v___y_3403_; uint8_t v___y_3404_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3408_; lean_object* v___y_3436_; lean_object* v___y_3437_; uint8_t v___y_3438_; lean_object* v___y_3439_; lean_object* v___y_3440_; uint8_t v___y_3441_; uint8_t v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3461_; lean_object* v___y_3462_; uint8_t v___y_3463_; lean_object* v___y_3464_; uint8_t v___y_3465_; lean_object* v___y_3466_; uint8_t v___y_3467_; lean_object* v___y_3468_; lean_object* v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; uint8_t v___y_3476_; uint8_t v___y_3477_; uint8_t v___y_3478_; uint8_t v___x_3483_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3487_; lean_object* v___y_3488_; uint8_t v___y_3489_; uint8_t v___y_3490_; uint8_t v___y_3491_; uint8_t v___y_3493_; uint8_t v___x_3508_; 
v___x_3483_ = 2;
v___x_3508_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3392_, v___x_3483_);
if (v___x_3508_ == 0)
{
v___y_3493_ = v___x_3508_;
goto v___jp_3492_;
}
else
{
uint8_t v___x_3509_; 
lean_inc_ref(v_msgData_3391_);
v___x_3509_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_3391_);
v___y_3493_ = v___x_3509_;
goto v___jp_3492_;
}
v___jp_3399_:
{
lean_object* v___x_3409_; lean_object* v_currNamespace_3410_; lean_object* v_openDecls_3411_; lean_object* v_env_3412_; lean_object* v_nextMacroScope_3413_; lean_object* v_ngen_3414_; lean_object* v_auxDeclNGen_3415_; lean_object* v_traceState_3416_; lean_object* v_cache_3417_; lean_object* v_messages_3418_; lean_object* v_infoState_3419_; lean_object* v_snapshotTasks_3420_; lean_object* v___x_3422_; uint8_t v_isShared_3423_; uint8_t v_isSharedCheck_3434_; 
v___x_3409_ = lean_st_ref_take(v___y_3408_);
v_currNamespace_3410_ = lean_ctor_get(v___y_3407_, 6);
v_openDecls_3411_ = lean_ctor_get(v___y_3407_, 7);
v_env_3412_ = lean_ctor_get(v___x_3409_, 0);
v_nextMacroScope_3413_ = lean_ctor_get(v___x_3409_, 1);
v_ngen_3414_ = lean_ctor_get(v___x_3409_, 2);
v_auxDeclNGen_3415_ = lean_ctor_get(v___x_3409_, 3);
v_traceState_3416_ = lean_ctor_get(v___x_3409_, 4);
v_cache_3417_ = lean_ctor_get(v___x_3409_, 5);
v_messages_3418_ = lean_ctor_get(v___x_3409_, 6);
v_infoState_3419_ = lean_ctor_get(v___x_3409_, 7);
v_snapshotTasks_3420_ = lean_ctor_get(v___x_3409_, 8);
v_isSharedCheck_3434_ = !lean_is_exclusive(v___x_3409_);
if (v_isSharedCheck_3434_ == 0)
{
v___x_3422_ = v___x_3409_;
v_isShared_3423_ = v_isSharedCheck_3434_;
goto v_resetjp_3421_;
}
else
{
lean_inc(v_snapshotTasks_3420_);
lean_inc(v_infoState_3419_);
lean_inc(v_messages_3418_);
lean_inc(v_cache_3417_);
lean_inc(v_traceState_3416_);
lean_inc(v_auxDeclNGen_3415_);
lean_inc(v_ngen_3414_);
lean_inc(v_nextMacroScope_3413_);
lean_inc(v_env_3412_);
lean_dec(v___x_3409_);
v___x_3422_ = lean_box(0);
v_isShared_3423_ = v_isSharedCheck_3434_;
goto v_resetjp_3421_;
}
v_resetjp_3421_:
{
lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3429_; 
lean_inc(v_openDecls_3411_);
lean_inc(v_currNamespace_3410_);
v___x_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3424_, 0, v_currNamespace_3410_);
lean_ctor_set(v___x_3424_, 1, v_openDecls_3411_);
v___x_3425_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_3425_, 0, v___x_3424_);
lean_ctor_set(v___x_3425_, 1, v___y_3405_);
lean_inc_ref(v___y_3401_);
lean_inc_ref(v___y_3403_);
v___x_3426_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_3426_, 0, v___y_3403_);
lean_ctor_set(v___x_3426_, 1, v___y_3400_);
lean_ctor_set(v___x_3426_, 2, v___y_3406_);
lean_ctor_set(v___x_3426_, 3, v___y_3401_);
lean_ctor_set(v___x_3426_, 4, v___x_3425_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*5, v___y_3404_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*5 + 1, v___y_3402_);
lean_ctor_set_uint8(v___x_3426_, sizeof(void*)*5 + 2, v_isSilent_3393_);
v___x_3427_ = l_Lean_MessageLog_add(v___x_3426_, v_messages_3418_);
if (v_isShared_3423_ == 0)
{
lean_ctor_set(v___x_3422_, 6, v___x_3427_);
v___x_3429_ = v___x_3422_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3433_; 
v_reuseFailAlloc_3433_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3433_, 0, v_env_3412_);
lean_ctor_set(v_reuseFailAlloc_3433_, 1, v_nextMacroScope_3413_);
lean_ctor_set(v_reuseFailAlloc_3433_, 2, v_ngen_3414_);
lean_ctor_set(v_reuseFailAlloc_3433_, 3, v_auxDeclNGen_3415_);
lean_ctor_set(v_reuseFailAlloc_3433_, 4, v_traceState_3416_);
lean_ctor_set(v_reuseFailAlloc_3433_, 5, v_cache_3417_);
lean_ctor_set(v_reuseFailAlloc_3433_, 6, v___x_3427_);
lean_ctor_set(v_reuseFailAlloc_3433_, 7, v_infoState_3419_);
lean_ctor_set(v_reuseFailAlloc_3433_, 8, v_snapshotTasks_3420_);
v___x_3429_ = v_reuseFailAlloc_3433_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; 
v___x_3430_ = lean_st_ref_set(v___y_3408_, v___x_3429_);
v___x_3431_ = lean_box(0);
v___x_3432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3432_, 0, v___x_3431_);
return v___x_3432_;
}
}
}
v___jp_3435_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v_a_3446_; lean_object* v___x_3448_; uint8_t v_isShared_3449_; uint8_t v_isSharedCheck_3459_; 
v___x_3444_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_3391_);
v___x_3445_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v___x_3444_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_);
v_a_3446_ = lean_ctor_get(v___x_3445_, 0);
v_isSharedCheck_3459_ = !lean_is_exclusive(v___x_3445_);
if (v_isSharedCheck_3459_ == 0)
{
v___x_3448_ = v___x_3445_;
v_isShared_3449_ = v_isSharedCheck_3459_;
goto v_resetjp_3447_;
}
else
{
lean_inc(v_a_3446_);
lean_dec(v___x_3445_);
v___x_3448_ = lean_box(0);
v_isShared_3449_ = v_isSharedCheck_3459_;
goto v_resetjp_3447_;
}
v_resetjp_3447_:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
lean_inc_ref_n(v___y_3437_, 2);
v___x_3450_ = l_Lean_FileMap_toPosition(v___y_3437_, v___y_3439_);
lean_dec(v___y_3439_);
v___x_3451_ = l_Lean_FileMap_toPosition(v___y_3437_, v___y_3443_);
lean_dec(v___y_3443_);
v___x_3452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3451_);
v___x_3453_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_3442_ == 0)
{
lean_del_object(v___x_3448_);
lean_dec_ref(v___y_3436_);
v___y_3400_ = v___x_3450_;
v___y_3401_ = v___x_3453_;
v___y_3402_ = v___y_3438_;
v___y_3403_ = v___y_3440_;
v___y_3404_ = v___y_3441_;
v___y_3405_ = v_a_3446_;
v___y_3406_ = v___x_3452_;
v___y_3407_ = v___y_3396_;
v___y_3408_ = v___y_3397_;
goto v___jp_3399_;
}
else
{
uint8_t v___x_3454_; 
lean_inc(v_a_3446_);
v___x_3454_ = l_Lean_MessageData_hasTag(v___y_3436_, v_a_3446_);
if (v___x_3454_ == 0)
{
lean_object* v___x_3455_; lean_object* v___x_3457_; 
lean_dec_ref_known(v___x_3452_, 1);
lean_dec_ref(v___x_3450_);
lean_dec(v_a_3446_);
v___x_3455_ = lean_box(0);
if (v_isShared_3449_ == 0)
{
lean_ctor_set(v___x_3448_, 0, v___x_3455_);
v___x_3457_ = v___x_3448_;
goto v_reusejp_3456_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v___x_3455_);
v___x_3457_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3456_;
}
v_reusejp_3456_:
{
return v___x_3457_;
}
}
else
{
lean_del_object(v___x_3448_);
v___y_3400_ = v___x_3450_;
v___y_3401_ = v___x_3453_;
v___y_3402_ = v___y_3438_;
v___y_3403_ = v___y_3440_;
v___y_3404_ = v___y_3441_;
v___y_3405_ = v_a_3446_;
v___y_3406_ = v___x_3452_;
v___y_3407_ = v___y_3396_;
v___y_3408_ = v___y_3397_;
goto v___jp_3399_;
}
}
}
}
v___jp_3460_:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_Lean_Syntax_getTailPos_x3f(v___y_3466_, v___y_3465_);
lean_dec(v___y_3466_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_inc(v___y_3468_);
v___y_3436_ = v___y_3461_;
v___y_3437_ = v___y_3462_;
v___y_3438_ = v___y_3463_;
v___y_3439_ = v___y_3468_;
v___y_3440_ = v___y_3464_;
v___y_3441_ = v___y_3465_;
v___y_3442_ = v___y_3467_;
v___y_3443_ = v___y_3468_;
goto v___jp_3435_;
}
else
{
lean_object* v_val_3470_; 
v_val_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc(v_val_3470_);
lean_dec_ref_known(v___x_3469_, 1);
v___y_3436_ = v___y_3461_;
v___y_3437_ = v___y_3462_;
v___y_3438_ = v___y_3463_;
v___y_3439_ = v___y_3468_;
v___y_3440_ = v___y_3464_;
v___y_3441_ = v___y_3465_;
v___y_3442_ = v___y_3467_;
v___y_3443_ = v_val_3470_;
goto v___jp_3435_;
}
}
v___jp_3471_:
{
lean_object* v_ref_3479_; lean_object* v___x_3480_; 
v_ref_3479_ = l_Lean_replaceRef(v_ref_3390_, v___y_3474_);
v___x_3480_ = l_Lean_Syntax_getPos_x3f(v_ref_3479_, v___y_3476_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v___x_3481_; 
v___x_3481_ = lean_unsigned_to_nat(0u);
v___y_3461_ = v___y_3472_;
v___y_3462_ = v___y_3473_;
v___y_3463_ = v___y_3478_;
v___y_3464_ = v___y_3475_;
v___y_3465_ = v___y_3476_;
v___y_3466_ = v_ref_3479_;
v___y_3467_ = v___y_3477_;
v___y_3468_ = v___x_3481_;
goto v___jp_3460_;
}
else
{
lean_object* v_val_3482_; 
v_val_3482_ = lean_ctor_get(v___x_3480_, 0);
lean_inc(v_val_3482_);
lean_dec_ref_known(v___x_3480_, 1);
v___y_3461_ = v___y_3472_;
v___y_3462_ = v___y_3473_;
v___y_3463_ = v___y_3478_;
v___y_3464_ = v___y_3475_;
v___y_3465_ = v___y_3476_;
v___y_3466_ = v_ref_3479_;
v___y_3467_ = v___y_3477_;
v___y_3468_ = v_val_3482_;
goto v___jp_3460_;
}
}
v___jp_3484_:
{
if (v___y_3491_ == 0)
{
v___y_3472_ = v___y_3487_;
v___y_3473_ = v___y_3485_;
v___y_3474_ = v___y_3486_;
v___y_3475_ = v___y_3488_;
v___y_3476_ = v___y_3490_;
v___y_3477_ = v___y_3489_;
v___y_3478_ = v_severity_3392_;
goto v___jp_3471_;
}
else
{
v___y_3472_ = v___y_3487_;
v___y_3473_ = v___y_3485_;
v___y_3474_ = v___y_3486_;
v___y_3475_ = v___y_3488_;
v___y_3476_ = v___y_3490_;
v___y_3477_ = v___y_3489_;
v___y_3478_ = v___x_3483_;
goto v___jp_3471_;
}
}
v___jp_3492_:
{
if (v___y_3493_ == 0)
{
lean_object* v_fileName_3494_; lean_object* v_fileMap_3495_; lean_object* v_options_3496_; lean_object* v_ref_3497_; uint8_t v_suppressElabErrors_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___f_3501_; uint8_t v___x_3502_; uint8_t v___x_3503_; 
v_fileName_3494_ = lean_ctor_get(v___y_3396_, 0);
v_fileMap_3495_ = lean_ctor_get(v___y_3396_, 1);
v_options_3496_ = lean_ctor_get(v___y_3396_, 2);
v_ref_3497_ = lean_ctor_get(v___y_3396_, 5);
v_suppressElabErrors_3498_ = lean_ctor_get_uint8(v___y_3396_, sizeof(void*)*14 + 1);
v___x_3499_ = lean_box(v___y_3493_);
v___x_3500_ = lean_box(v_suppressElabErrors_3498_);
v___f_3501_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_3501_, 0, v___x_3499_);
lean_closure_set(v___f_3501_, 1, v___x_3500_);
v___x_3502_ = 1;
v___x_3503_ = l_Lean_instBEqMessageSeverity_beq(v_severity_3392_, v___x_3502_);
if (v___x_3503_ == 0)
{
v___y_3485_ = v_fileMap_3495_;
v___y_3486_ = v_ref_3497_;
v___y_3487_ = v___f_3501_;
v___y_3488_ = v_fileName_3494_;
v___y_3489_ = v_suppressElabErrors_3498_;
v___y_3490_ = v___y_3493_;
v___y_3491_ = v___x_3503_;
goto v___jp_3484_;
}
else
{
lean_object* v___x_3504_; uint8_t v___x_3505_; 
v___x_3504_ = l_Lean_warningAsError;
v___x_3505_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_3496_, v___x_3504_);
v___y_3485_ = v_fileMap_3495_;
v___y_3486_ = v_ref_3497_;
v___y_3487_ = v___f_3501_;
v___y_3488_ = v_fileName_3494_;
v___y_3489_ = v_suppressElabErrors_3498_;
v___y_3490_ = v___y_3493_;
v___y_3491_ = v___x_3505_;
goto v___jp_3484_;
}
}
else
{
lean_object* v___x_3506_; lean_object* v___x_3507_; 
lean_dec_ref(v_msgData_3391_);
v___x_3506_ = lean_box(0);
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3506_);
return v___x_3507_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg___boxed(lean_object* v_ref_3510_, lean_object* v_msgData_3511_, lean_object* v_severity_3512_, lean_object* v_isSilent_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_){
_start:
{
uint8_t v_severity_boxed_3519_; uint8_t v_isSilent_boxed_3520_; lean_object* v_res_3521_; 
v_severity_boxed_3519_ = lean_unbox(v_severity_3512_);
v_isSilent_boxed_3520_ = lean_unbox(v_isSilent_3513_);
v_res_3521_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3510_, v_msgData_3511_, v_severity_boxed_3519_, v_isSilent_boxed_3520_, v___y_3514_, v___y_3515_, v___y_3516_, v___y_3517_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
lean_dec(v___y_3515_);
lean_dec_ref(v___y_3514_);
lean_dec(v_ref_3510_);
return v_res_3521_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(lean_object* v_ref_3522_, lean_object* v_msgData_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_){
_start:
{
uint8_t v___x_3531_; uint8_t v___x_3532_; lean_object* v___x_3533_; 
v___x_3531_ = 1;
v___x_3532_ = 0;
v___x_3533_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3522_, v_msgData_3523_, v___x_3531_, v___x_3532_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_);
return v___x_3533_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0___boxed(lean_object* v_ref_3534_, lean_object* v_msgData_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_, lean_object* v___y_3542_){
_start:
{
lean_object* v_res_3543_; 
v_res_3543_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(v_ref_3534_, v_msgData_3535_, v___y_3536_, v___y_3537_, v___y_3538_, v___y_3539_, v___y_3540_, v___y_3541_);
lean_dec(v___y_3541_);
lean_dec_ref(v___y_3540_);
lean_dec(v___y_3539_);
lean_dec_ref(v___y_3538_);
lean_dec(v___y_3537_);
lean_dec_ref(v___y_3536_);
lean_dec(v_ref_3534_);
return v_res_3543_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(lean_object* v_a_3546_, lean_object* v_as_3547_, size_t v_sz_3548_, size_t v_i_3549_, lean_object* v_b_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v_a_3559_; uint8_t v___x_3563_; 
v___x_3563_ = lean_usize_dec_lt(v_i_3549_, v_sz_3548_);
if (v___x_3563_ == 0)
{
lean_object* v___x_3564_; 
v___x_3564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3564_, 0, v_b_3550_);
return v___x_3564_;
}
else
{
lean_object* v_a_3565_; lean_object* v_fst_3566_; lean_object* v_snd_3567_; lean_object* v___x_3568_; uint8_t v___x_3569_; 
v_a_3565_ = lean_array_uget_borrowed(v_as_3547_, v_i_3549_);
v_fst_3566_ = lean_ctor_get(v_a_3565_, 0);
v_snd_3567_ = lean_ctor_get(v_a_3565_, 1);
v___x_3568_ = lean_box(0);
v___x_3569_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap_spec__1___redArg(v_a_3546_, v_fst_3566_);
if (v___x_3569_ == 0)
{
lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3570_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__0));
lean_inc(v_fst_3566_);
v___x_3571_ = l_Nat_reprFast(v_fst_3566_);
v___x_3572_ = lean_string_append(v___x_3570_, v___x_3571_);
lean_dec_ref(v___x_3571_);
v___x_3573_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___closed__1));
v___x_3574_ = lean_string_append(v___x_3572_, v___x_3573_);
v___x_3575_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3575_, 0, v___x_3574_);
v___x_3576_ = l_Lean_MessageData_ofFormat(v___x_3575_);
v___x_3577_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0(v_snd_3567_, v___x_3576_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_);
if (lean_obj_tag(v___x_3577_) == 0)
{
lean_dec_ref_known(v___x_3577_, 1);
v_a_3559_ = v___x_3568_;
goto v___jp_3558_;
}
else
{
return v___x_3577_;
}
}
else
{
v_a_3559_ = v___x_3568_;
goto v___jp_3558_;
}
}
v___jp_3558_:
{
size_t v___x_3560_; size_t v___x_3561_; 
v___x_3560_ = ((size_t)1ULL);
v___x_3561_ = lean_usize_add(v_i_3549_, v___x_3560_);
v_i_3549_ = v___x_3561_;
v_b_3550_ = v_a_3559_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1___boxed(lean_object* v_a_3578_, lean_object* v_as_3579_, lean_object* v_sz_3580_, lean_object* v_i_3581_, lean_object* v_b_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_){
_start:
{
size_t v_sz_boxed_3590_; size_t v_i_boxed_3591_; lean_object* v_res_3592_; 
v_sz_boxed_3590_ = lean_unbox_usize(v_sz_3580_);
lean_dec(v_sz_3580_);
v_i_boxed_3591_ = lean_unbox_usize(v_i_3581_);
lean_dec(v_i_3581_);
v_res_3592_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(v_a_3578_, v_as_3579_, v_sz_boxed_3590_, v_i_boxed_3591_, v_b_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_, v___y_3588_);
lean_dec(v___y_3588_);
lean_dec_ref(v___y_3587_);
lean_dec(v___y_3586_);
lean_dec_ref(v___y_3585_);
lean_dec(v___y_3584_);
lean_dec_ref(v___y_3583_);
lean_dec_ref(v_as_3579_);
lean_dec_ref(v_a_3578_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(lean_object* v_x_3593_, lean_object* v_x_3594_){
_start:
{
if (lean_obj_tag(v_x_3594_) == 0)
{
return v_x_3593_;
}
else
{
lean_object* v_key_3595_; lean_object* v_value_3596_; lean_object* v_tail_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; 
v_key_3595_ = lean_ctor_get(v_x_3594_, 0);
v_value_3596_ = lean_ctor_get(v_x_3594_, 1);
v_tail_3597_ = lean_ctor_get(v_x_3594_, 2);
lean_inc(v_value_3596_);
lean_inc(v_key_3595_);
v___x_3598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3598_, 0, v_key_3595_);
lean_ctor_set(v___x_3598_, 1, v_value_3596_);
v___x_3599_ = lean_array_push(v_x_3593_, v___x_3598_);
v_x_3593_ = v___x_3599_;
v_x_3594_ = v_tail_3597_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2___boxed(lean_object* v_x_3601_, lean_object* v_x_3602_){
_start:
{
lean_object* v_res_3603_; 
v_res_3603_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(v_x_3601_, v_x_3602_);
lean_dec(v_x_3602_);
return v_res_3603_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(lean_object* v_as_3604_, size_t v_i_3605_, size_t v_stop_3606_, lean_object* v_b_3607_){
_start:
{
uint8_t v___x_3608_; 
v___x_3608_ = lean_usize_dec_eq(v_i_3605_, v_stop_3606_);
if (v___x_3608_ == 0)
{
lean_object* v___x_3609_; lean_object* v___x_3610_; size_t v___x_3611_; size_t v___x_3612_; 
v___x_3609_ = lean_array_uget_borrowed(v_as_3604_, v_i_3605_);
v___x_3610_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__2(v_b_3607_, v___x_3609_);
v___x_3611_ = ((size_t)1ULL);
v___x_3612_ = lean_usize_add(v_i_3605_, v___x_3611_);
v_i_3605_ = v___x_3612_;
v_b_3607_ = v___x_3610_;
goto _start;
}
else
{
return v_b_3607_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3___boxed(lean_object* v_as_3614_, lean_object* v_i_3615_, lean_object* v_stop_3616_, lean_object* v_b_3617_){
_start:
{
size_t v_i_boxed_3618_; size_t v_stop_boxed_3619_; lean_object* v_res_3620_; 
v_i_boxed_3618_ = lean_unbox_usize(v_i_3615_);
lean_dec(v_i_3615_);
v_stop_boxed_3619_ = lean_unbox_usize(v_stop_3616_);
lean_dec(v_stop_3616_);
v_res_3620_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_as_3614_, v_i_boxed_3618_, v_stop_boxed_3619_, v_b_3617_);
lean_dec_ref(v_as_3614_);
return v_res_3620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(lean_object* v_alts_3621_, lean_object* v_invariants_3622_, lean_object* v_inlineHandled_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_, lean_object* v_a_3628_, lean_object* v_a_3629_){
_start:
{
lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; 
v___x_3631_ = lean_unsigned_to_nat(0u);
v___x_3632_ = lean_array_get_size(v_invariants_3622_);
v___x_3633_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v___x_3632_, v_alts_3621_, v_invariants_3622_, v___x_3631_, v_inlineHandled_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_, v_a_3628_, v_a_3629_);
if (lean_obj_tag(v___x_3633_) == 0)
{
lean_object* v_a_3634_; lean_object* v___y_3636_; lean_object* v_size_3649_; lean_object* v_buckets_3650_; lean_object* v___x_3651_; lean_object* v___x_3652_; uint8_t v___x_3653_; 
v_a_3634_ = lean_ctor_get(v___x_3633_, 0);
lean_inc(v_a_3634_);
lean_dec_ref_known(v___x_3633_, 1);
v_size_3649_ = lean_ctor_get(v_alts_3621_, 0);
v_buckets_3650_ = lean_ctor_get(v_alts_3621_, 1);
v___x_3651_ = lean_mk_empty_array_with_capacity(v_size_3649_);
v___x_3652_ = lean_array_get_size(v_buckets_3650_);
v___x_3653_ = lean_nat_dec_lt(v___x_3631_, v___x_3652_);
if (v___x_3653_ == 0)
{
v___y_3636_ = v___x_3651_;
goto v___jp_3635_;
}
else
{
uint8_t v___x_3654_; 
v___x_3654_ = lean_nat_dec_le(v___x_3652_, v___x_3652_);
if (v___x_3654_ == 0)
{
if (v___x_3653_ == 0)
{
v___y_3636_ = v___x_3651_;
goto v___jp_3635_;
}
else
{
size_t v___x_3655_; size_t v___x_3656_; lean_object* v___x_3657_; 
v___x_3655_ = ((size_t)0ULL);
v___x_3656_ = lean_usize_of_nat(v___x_3652_);
v___x_3657_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_buckets_3650_, v___x_3655_, v___x_3656_, v___x_3651_);
v___y_3636_ = v___x_3657_;
goto v___jp_3635_;
}
}
else
{
size_t v___x_3658_; size_t v___x_3659_; lean_object* v___x_3660_; 
v___x_3658_ = ((size_t)0ULL);
v___x_3659_ = lean_usize_of_nat(v___x_3652_);
v___x_3660_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__3(v_buckets_3650_, v___x_3658_, v___x_3659_, v___x_3651_);
v___y_3636_ = v___x_3660_;
goto v___jp_3635_;
}
}
v___jp_3635_:
{
lean_object* v___x_3637_; size_t v_sz_3638_; size_t v___x_3639_; lean_object* v___x_3640_; 
v___x_3637_ = lean_box(0);
v_sz_3638_ = lean_array_size(v___y_3636_);
v___x_3639_ = ((size_t)0ULL);
v___x_3640_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__1(v_a_3634_, v___y_3636_, v_sz_3638_, v___x_3639_, v___x_3637_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_, v_a_3628_, v_a_3629_);
lean_dec_ref(v___y_3636_);
lean_dec(v_a_3634_);
if (lean_obj_tag(v___x_3640_) == 0)
{
lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3647_; 
v_isSharedCheck_3647_ = !lean_is_exclusive(v___x_3640_);
if (v_isSharedCheck_3647_ == 0)
{
lean_object* v_unused_3648_; 
v_unused_3648_ = lean_ctor_get(v___x_3640_, 0);
lean_dec(v_unused_3648_);
v___x_3642_ = v___x_3640_;
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
else
{
lean_dec(v___x_3640_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3647_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3645_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 0, v___x_3637_);
v___x_3645_ = v___x_3642_;
goto v_reusejp_3644_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v___x_3637_);
v___x_3645_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3644_;
}
v_reusejp_3644_:
{
return v___x_3645_;
}
}
}
else
{
return v___x_3640_;
}
}
}
else
{
lean_object* v_a_3661_; lean_object* v___x_3663_; uint8_t v_isShared_3664_; uint8_t v_isSharedCheck_3668_; 
v_a_3661_ = lean_ctor_get(v___x_3633_, 0);
v_isSharedCheck_3668_ = !lean_is_exclusive(v___x_3633_);
if (v_isSharedCheck_3668_ == 0)
{
v___x_3663_ = v___x_3633_;
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
else
{
lean_inc(v_a_3661_);
lean_dec(v___x_3633_);
v___x_3663_ = lean_box(0);
v_isShared_3664_ = v_isSharedCheck_3668_;
goto v_resetjp_3662_;
}
v_resetjp_3662_:
{
lean_object* v___x_3666_; 
if (v_isShared_3664_ == 0)
{
v___x_3666_ = v___x_3663_;
goto v_reusejp_3665_;
}
else
{
lean_object* v_reuseFailAlloc_3667_; 
v_reuseFailAlloc_3667_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3667_, 0, v_a_3661_);
v___x_3666_ = v_reuseFailAlloc_3667_;
goto v_reusejp_3665_;
}
v_reusejp_3665_:
{
return v___x_3666_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants___boxed(lean_object* v_alts_3669_, lean_object* v_invariants_3670_, lean_object* v_inlineHandled_3671_, lean_object* v_a_3672_, lean_object* v_a_3673_, lean_object* v_a_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_){
_start:
{
lean_object* v_res_3679_; 
v_res_3679_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_alts_3669_, v_invariants_3670_, v_inlineHandled_3671_, v_a_3672_, v_a_3673_, v_a_3674_, v_a_3675_, v_a_3676_, v_a_3677_);
lean_dec(v_a_3677_);
lean_dec_ref(v_a_3676_);
lean_dec(v_a_3675_);
lean_dec_ref(v_a_3674_);
lean_dec(v_a_3673_);
lean_dec_ref(v_a_3672_);
lean_dec_ref(v_invariants_3670_);
lean_dec_ref(v_alts_3669_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(lean_object* v_00_u03b2_3680_, lean_object* v_m_3681_, lean_object* v_a_3682_){
_start:
{
lean_object* v___x_3683_; 
v___x_3683_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___redArg(v_m_3681_, v_a_3682_);
return v___x_3683_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4___boxed(lean_object* v_00_u03b2_3684_, lean_object* v_m_3685_, lean_object* v_a_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4(v_00_u03b2_3684_, v_m_3685_, v_a_3686_);
lean_dec(v_a_3686_);
lean_dec_ref(v_m_3685_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5(lean_object* v_00_u03b2_3688_, lean_object* v_m_3689_, lean_object* v_a_3690_, lean_object* v_b_3691_){
_start:
{
lean_object* v___x_3692_; 
v___x_3692_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__5___redArg(v_m_3689_, v_a_3690_, v_b_3691_);
return v___x_3692_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(lean_object* v_upperBound_3693_, lean_object* v_alts_3694_, lean_object* v_invariants_3695_, lean_object* v_inst_3696_, lean_object* v_R_3697_, lean_object* v_a_3698_, lean_object* v_b_3699_, lean_object* v_c_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
lean_object* v___x_3708_; 
v___x_3708_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___redArg(v_upperBound_3693_, v_alts_3694_, v_invariants_3695_, v_a_3698_, v_b_3699_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_, v___y_3706_);
return v___x_3708_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6___boxed(lean_object* v_upperBound_3709_, lean_object* v_alts_3710_, lean_object* v_invariants_3711_, lean_object* v_inst_3712_, lean_object* v_R_3713_, lean_object* v_a_3714_, lean_object* v_b_3715_, lean_object* v_c_3716_, lean_object* v___y_3717_, lean_object* v___y_3718_, lean_object* v___y_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_){
_start:
{
lean_object* v_res_3724_; 
v_res_3724_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__6(v_upperBound_3709_, v_alts_3710_, v_invariants_3711_, v_inst_3712_, v_R_3713_, v_a_3714_, v_b_3715_, v_c_3716_, v___y_3717_, v___y_3718_, v___y_3719_, v___y_3720_, v___y_3721_, v___y_3722_);
lean_dec(v___y_3722_);
lean_dec_ref(v___y_3721_);
lean_dec(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec(v___y_3718_);
lean_dec_ref(v___y_3717_);
lean_dec_ref(v_invariants_3711_);
lean_dec_ref(v_alts_3710_);
lean_dec(v_upperBound_3709_);
return v_res_3724_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(lean_object* v_ref_3725_, lean_object* v_msgData_3726_, uint8_t v_severity_3727_, uint8_t v_isSilent_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_, lean_object* v___y_3734_){
_start:
{
lean_object* v___x_3736_; 
v___x_3736_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___redArg(v_ref_3725_, v_msgData_3726_, v_severity_3727_, v_isSilent_3728_, v___y_3731_, v___y_3732_, v___y_3733_, v___y_3734_);
return v___x_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0___boxed(lean_object* v_ref_3737_, lean_object* v_msgData_3738_, lean_object* v_severity_3739_, lean_object* v_isSilent_3740_, lean_object* v___y_3741_, lean_object* v___y_3742_, lean_object* v___y_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_){
_start:
{
uint8_t v_severity_boxed_3748_; uint8_t v_isSilent_boxed_3749_; lean_object* v_res_3750_; 
v_severity_boxed_3748_ = lean_unbox(v_severity_3739_);
v_isSilent_boxed_3749_ = lean_unbox(v_isSilent_3740_);
v_res_3750_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__0_spec__0(v_ref_3737_, v_msgData_3738_, v_severity_boxed_3748_, v_isSilent_boxed_3749_, v___y_3741_, v___y_3742_, v___y_3743_, v___y_3744_, v___y_3745_, v___y_3746_);
lean_dec(v___y_3746_);
lean_dec_ref(v___y_3745_);
lean_dec(v___y_3744_);
lean_dec_ref(v___y_3743_);
lean_dec(v___y_3742_);
lean_dec_ref(v___y_3741_);
lean_dec(v_ref_3737_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(lean_object* v_00_u03b2_3751_, lean_object* v_a_3752_, lean_object* v_x_3753_){
_start:
{
lean_object* v___x_3754_; 
v___x_3754_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___redArg(v_a_3752_, v_x_3753_);
return v___x_3754_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5___boxed(lean_object* v_00_u03b2_3755_, lean_object* v_a_3756_, lean_object* v_x_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants_spec__4_spec__5(v_00_u03b2_3755_, v_a_3756_, v_x_3757_);
lean_dec(v_x_3757_);
lean_dec(v_a_3756_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(lean_object* v_xs_3759_, lean_object* v_range_3760_, lean_object* v_b_3761_, lean_object* v_i_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_){
_start:
{
lean_object* v_stop_3768_; lean_object* v_step_3769_; uint8_t v___x_3770_; 
v_stop_3768_ = lean_ctor_get(v_range_3760_, 1);
v_step_3769_ = lean_ctor_get(v_range_3760_, 2);
v___x_3770_ = lean_nat_dec_lt(v_i_3762_, v_stop_3768_);
if (v___x_3770_ == 0)
{
lean_object* v___x_3771_; 
lean_dec(v_i_3762_);
v___x_3771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3771_, 0, v_b_3761_);
return v___x_3771_;
}
else
{
lean_object* v___x_3772_; lean_object* v___x_3773_; 
v___x_3772_ = lean_array_fget_borrowed(v_xs_3759_, v_i_3762_);
lean_inc(v___y_3766_);
lean_inc_ref(v___y_3765_);
lean_inc(v___y_3764_);
lean_inc_ref(v___y_3763_);
lean_inc(v___x_3772_);
v___x_3773_ = lean_infer_type(v___x_3772_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v___x_3775_; lean_object* v___x_3776_; lean_object* v___x_3777_; 
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
lean_inc(v_a_3774_);
lean_dec_ref_known(v___x_3773_, 1);
v___x_3775_ = lean_expr_abstract_range(v_a_3774_, v_i_3762_, v_xs_3759_);
lean_dec(v_a_3774_);
v___x_3776_ = lean_array_push(v_b_3761_, v___x_3775_);
v___x_3777_ = lean_nat_add(v_i_3762_, v_step_3769_);
lean_dec(v_i_3762_);
v_b_3761_ = v___x_3776_;
v_i_3762_ = v___x_3777_;
goto _start;
}
else
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3786_; 
lean_dec(v_i_3762_);
lean_dec_ref(v_b_3761_);
v_a_3779_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3781_ = v___x_3773_;
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3773_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3784_; 
if (v_isShared_3782_ == 0)
{
v___x_3784_ = v___x_3781_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3779_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg___boxed(lean_object* v_xs_3787_, lean_object* v_range_3788_, lean_object* v_b_3789_, lean_object* v_i_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_){
_start:
{
lean_object* v_res_3796_; 
v_res_3796_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(v_xs_3787_, v_range_3788_, v_b_3789_, v_i_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_);
lean_dec(v___y_3794_);
lean_dec_ref(v___y_3793_);
lean_dec(v___y_3792_);
lean_dec_ref(v___y_3791_);
lean_dec_ref(v_range_3788_);
lean_dec_ref(v_xs_3787_);
return v_res_3796_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(lean_object* v_as_3797_, size_t v_sz_3798_, size_t v_i_3799_, lean_object* v_b_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_){
_start:
{
uint8_t v___x_3806_; 
v___x_3806_ = lean_usize_dec_lt(v_i_3799_, v_sz_3798_);
if (v___x_3806_ == 0)
{
lean_object* v___x_3807_; 
v___x_3807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3807_, 0, v_b_3800_);
return v___x_3807_;
}
else
{
lean_object* v_a_3808_; lean_object* v___x_3809_; 
v_a_3808_ = lean_array_uget_borrowed(v_as_3797_, v_i_3799_);
lean_inc(v_a_3808_);
v___x_3809_ = l_Lean_Meta_Sym_mkProofInstInfo_x3f(v_a_3808_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_);
if (lean_obj_tag(v___x_3809_) == 0)
{
lean_object* v_a_3810_; lean_object* v_a_3812_; 
v_a_3810_ = lean_ctor_get(v___x_3809_, 0);
lean_inc(v_a_3810_);
lean_dec_ref_known(v___x_3809_, 1);
if (lean_obj_tag(v_a_3810_) == 1)
{
lean_object* v_val_3816_; lean_object* v___x_3817_; 
v_val_3816_ = lean_ctor_get(v_a_3810_, 0);
lean_inc(v_val_3816_);
lean_dec_ref_known(v_a_3810_, 1);
lean_inc(v_a_3808_);
v___x_3817_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_3817_, 0, v_a_3808_);
lean_ctor_set(v___x_3817_, 1, v_val_3816_);
lean_ctor_set(v___x_3817_, 2, v_b_3800_);
v_a_3812_ = v___x_3817_;
goto v___jp_3811_;
}
else
{
lean_dec(v_a_3810_);
v_a_3812_ = v_b_3800_;
goto v___jp_3811_;
}
v___jp_3811_:
{
size_t v___x_3813_; size_t v___x_3814_; 
v___x_3813_ = ((size_t)1ULL);
v___x_3814_ = lean_usize_add(v_i_3799_, v___x_3813_);
v_i_3799_ = v___x_3814_;
v_b_3800_ = v_a_3812_;
goto _start;
}
}
else
{
lean_object* v_a_3818_; lean_object* v___x_3820_; uint8_t v_isShared_3821_; uint8_t v_isSharedCheck_3825_; 
lean_dec(v_b_3800_);
v_a_3818_ = lean_ctor_get(v___x_3809_, 0);
v_isSharedCheck_3825_ = !lean_is_exclusive(v___x_3809_);
if (v_isSharedCheck_3825_ == 0)
{
v___x_3820_ = v___x_3809_;
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
else
{
lean_inc(v_a_3818_);
lean_dec(v___x_3809_);
v___x_3820_ = lean_box(0);
v_isShared_3821_ = v_isSharedCheck_3825_;
goto v_resetjp_3819_;
}
v_resetjp_3819_:
{
lean_object* v___x_3823_; 
if (v_isShared_3821_ == 0)
{
v___x_3823_ = v___x_3820_;
goto v_reusejp_3822_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_a_3818_);
v___x_3823_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3822_;
}
v_reusejp_3822_:
{
return v___x_3823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1___boxed(lean_object* v_as_3826_, lean_object* v_sz_3827_, lean_object* v_i_3828_, lean_object* v_b_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
size_t v_sz_boxed_3835_; size_t v_i_boxed_3836_; lean_object* v_res_3837_; 
v_sz_boxed_3835_ = lean_unbox_usize(v_sz_3827_);
lean_dec(v_sz_3827_);
v_i_boxed_3836_ = lean_unbox_usize(v_i_3828_);
lean_dec(v_i_3828_);
v_res_3837_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(v_as_3826_, v_sz_boxed_3835_, v_i_boxed_3836_, v_b_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec_ref(v_as_3826_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(lean_object* v_xs_3840_, lean_object* v_e_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_){
_start:
{
lean_object* v___x_3847_; lean_object* v_varTypes_3848_; lean_object* v___x_3849_; lean_object* v___x_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; 
v___x_3847_ = lean_unsigned_to_nat(0u);
v_varTypes_3848_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___closed__0));
v___x_3849_ = lean_array_get_size(v_xs_3840_);
v___x_3850_ = lean_unsigned_to_nat(1u);
v___x_3851_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_3851_, 0, v___x_3847_);
lean_ctor_set(v___x_3851_, 1, v___x_3849_);
lean_ctor_set(v___x_3851_, 2, v___x_3850_);
v___x_3852_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(v_xs_3840_, v___x_3851_, v_varTypes_3848_, v___x_3847_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_);
lean_dec_ref_known(v___x_3851_, 3);
if (lean_obj_tag(v___x_3852_) == 0)
{
lean_object* v_a_3853_; lean_object* v_pattern_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; size_t v_sz_3857_; size_t v___x_3858_; lean_object* v___x_3859_; 
v_a_3853_ = lean_ctor_get(v___x_3852_, 0);
lean_inc(v_a_3853_);
lean_dec_ref_known(v___x_3852_, 1);
v_pattern_3854_ = lean_expr_abstract(v_e_3841_, v_xs_3840_);
v___x_3855_ = lean_box(0);
lean_inc_ref(v_pattern_3854_);
v___x_3856_ = l_Lean_Expr_getUsedConstants(v_pattern_3854_);
v_sz_3857_ = lean_array_size(v___x_3856_);
v___x_3858_ = ((size_t)0ULL);
v___x_3859_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__1(v___x_3856_, v_sz_3857_, v___x_3858_, v___x_3855_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_);
lean_dec_ref(v___x_3856_);
if (lean_obj_tag(v___x_3859_) == 0)
{
lean_object* v_a_3860_; lean_object* v___x_3861_; 
v_a_3860_ = lean_ctor_get(v___x_3859_, 0);
lean_inc(v_a_3860_);
lean_dec_ref_known(v___x_3859_, 1);
v___x_3861_ = l_Lean_Meta_Sym_mkProofInstArgInfo_x3f(v_xs_3840_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_);
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; lean_object* v___x_3864_; uint8_t v_isShared_3865_; uint8_t v_isSharedCheck_3872_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3872_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3872_ == 0)
{
v___x_3864_ = v___x_3861_;
v_isShared_3865_ = v_isSharedCheck_3872_;
goto v_resetjp_3863_;
}
else
{
lean_inc(v_a_3862_);
lean_dec(v___x_3861_);
v___x_3864_ = lean_box(0);
v_isShared_3865_ = v_isSharedCheck_3872_;
goto v_resetjp_3863_;
}
v_resetjp_3863_:
{
lean_object* v___x_3866_; lean_object* v___x_3867_; lean_object* v___x_3868_; lean_object* v___x_3870_; 
v___x_3866_ = lean_box(0);
v___x_3867_ = lean_box(0);
v___x_3868_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3866_);
lean_ctor_set(v___x_3868_, 1, v_a_3853_);
lean_ctor_set(v___x_3868_, 2, v_a_3862_);
lean_ctor_set(v___x_3868_, 3, v_pattern_3854_);
lean_ctor_set(v___x_3868_, 4, v_a_3860_);
lean_ctor_set(v___x_3868_, 5, v___x_3867_);
if (v_isShared_3865_ == 0)
{
lean_ctor_set(v___x_3864_, 0, v___x_3868_);
v___x_3870_ = v___x_3864_;
goto v_reusejp_3869_;
}
else
{
lean_object* v_reuseFailAlloc_3871_; 
v_reuseFailAlloc_3871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3871_, 0, v___x_3868_);
v___x_3870_ = v_reuseFailAlloc_3871_;
goto v_reusejp_3869_;
}
v_reusejp_3869_:
{
return v___x_3870_;
}
}
}
else
{
lean_object* v_a_3873_; lean_object* v___x_3875_; uint8_t v_isShared_3876_; uint8_t v_isSharedCheck_3880_; 
lean_dec(v_a_3860_);
lean_dec_ref(v_pattern_3854_);
lean_dec(v_a_3853_);
v_a_3873_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3880_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3880_ == 0)
{
v___x_3875_ = v___x_3861_;
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
else
{
lean_inc(v_a_3873_);
lean_dec(v___x_3861_);
v___x_3875_ = lean_box(0);
v_isShared_3876_ = v_isSharedCheck_3880_;
goto v_resetjp_3874_;
}
v_resetjp_3874_:
{
lean_object* v___x_3878_; 
if (v_isShared_3876_ == 0)
{
v___x_3878_ = v___x_3875_;
goto v_reusejp_3877_;
}
else
{
lean_object* v_reuseFailAlloc_3879_; 
v_reuseFailAlloc_3879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3879_, 0, v_a_3873_);
v___x_3878_ = v_reuseFailAlloc_3879_;
goto v_reusejp_3877_;
}
v_reusejp_3877_:
{
return v___x_3878_;
}
}
}
}
else
{
lean_object* v_a_3881_; lean_object* v___x_3883_; uint8_t v_isShared_3884_; uint8_t v_isSharedCheck_3888_; 
lean_dec_ref(v_pattern_3854_);
lean_dec(v_a_3853_);
v_a_3881_ = lean_ctor_get(v___x_3859_, 0);
v_isSharedCheck_3888_ = !lean_is_exclusive(v___x_3859_);
if (v_isSharedCheck_3888_ == 0)
{
v___x_3883_ = v___x_3859_;
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
else
{
lean_inc(v_a_3881_);
lean_dec(v___x_3859_);
v___x_3883_ = lean_box(0);
v_isShared_3884_ = v_isSharedCheck_3888_;
goto v_resetjp_3882_;
}
v_resetjp_3882_:
{
lean_object* v___x_3886_; 
if (v_isShared_3884_ == 0)
{
v___x_3886_ = v___x_3883_;
goto v_reusejp_3885_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_a_3881_);
v___x_3886_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3885_;
}
v_reusejp_3885_:
{
return v___x_3886_;
}
}
}
}
else
{
lean_object* v_a_3889_; lean_object* v___x_3891_; uint8_t v_isShared_3892_; uint8_t v_isSharedCheck_3896_; 
v_a_3889_ = lean_ctor_get(v___x_3852_, 0);
v_isSharedCheck_3896_ = !lean_is_exclusive(v___x_3852_);
if (v_isSharedCheck_3896_ == 0)
{
v___x_3891_ = v___x_3852_;
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
else
{
lean_inc(v_a_3889_);
lean_dec(v___x_3852_);
v___x_3891_ = lean_box(0);
v_isShared_3892_ = v_isSharedCheck_3896_;
goto v_resetjp_3890_;
}
v_resetjp_3890_:
{
lean_object* v___x_3894_; 
if (v_isShared_3892_ == 0)
{
v___x_3894_ = v___x_3891_;
goto v_reusejp_3893_;
}
else
{
lean_object* v_reuseFailAlloc_3895_; 
v_reuseFailAlloc_3895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3895_, 0, v_a_3889_);
v___x_3894_ = v_reuseFailAlloc_3895_;
goto v_reusejp_3893_;
}
v_reusejp_3893_:
{
return v___x_3894_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern___boxed(lean_object* v_xs_3897_, lean_object* v_e_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_, lean_object* v_a_3901_, lean_object* v_a_3902_, lean_object* v_a_3903_){
_start:
{
lean_object* v_res_3904_; 
v_res_3904_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(v_xs_3897_, v_e_3898_, v_a_3899_, v_a_3900_, v_a_3901_, v_a_3902_);
lean_dec(v_a_3902_);
lean_dec_ref(v_a_3901_);
lean_dec(v_a_3900_);
lean_dec_ref(v_a_3899_);
lean_dec_ref(v_e_3898_);
lean_dec_ref(v_xs_3897_);
return v_res_3904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0(lean_object* v_xs_3905_, lean_object* v_range_3906_, lean_object* v_b_3907_, lean_object* v_i_3908_, lean_object* v_hs_3909_, lean_object* v_hl_3910_, lean_object* v___y_3911_, lean_object* v___y_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_){
_start:
{
lean_object* v___x_3916_; 
v___x_3916_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___redArg(v_xs_3905_, v_range_3906_, v_b_3907_, v_i_3908_, v___y_3911_, v___y_3912_, v___y_3913_, v___y_3914_);
return v___x_3916_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0___boxed(lean_object* v_xs_3917_, lean_object* v_range_3918_, lean_object* v_b_3919_, lean_object* v_i_3920_, lean_object* v_hs_3921_, lean_object* v_hl_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern_spec__0(v_xs_3917_, v_range_3918_, v_b_3919_, v_i_3920_, v_hs_3921_, v_hl_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec_ref(v_range_3918_);
lean_dec_ref(v_xs_3917_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(lean_object* v_e_3929_, lean_object* v___y_3930_){
_start:
{
uint8_t v___x_3932_; 
v___x_3932_ = l_Lean_Expr_hasMVar(v_e_3929_);
if (v___x_3932_ == 0)
{
lean_object* v___x_3933_; 
v___x_3933_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3933_, 0, v_e_3929_);
return v___x_3933_;
}
else
{
lean_object* v___x_3934_; lean_object* v_mctx_3935_; lean_object* v___x_3936_; lean_object* v_fst_3937_; lean_object* v_snd_3938_; lean_object* v___x_3939_; lean_object* v_cache_3940_; lean_object* v_zetaDeltaFVarIds_3941_; lean_object* v_postponed_3942_; lean_object* v_diag_3943_; lean_object* v___x_3945_; uint8_t v_isShared_3946_; uint8_t v_isSharedCheck_3952_; 
v___x_3934_ = lean_st_ref_get(v___y_3930_);
v_mctx_3935_ = lean_ctor_get(v___x_3934_, 0);
lean_inc_ref(v_mctx_3935_);
lean_dec(v___x_3934_);
v___x_3936_ = l_Lean_instantiateMVarsCore(v_mctx_3935_, v_e_3929_);
v_fst_3937_ = lean_ctor_get(v___x_3936_, 0);
lean_inc(v_fst_3937_);
v_snd_3938_ = lean_ctor_get(v___x_3936_, 1);
lean_inc(v_snd_3938_);
lean_dec_ref(v___x_3936_);
v___x_3939_ = lean_st_ref_take(v___y_3930_);
v_cache_3940_ = lean_ctor_get(v___x_3939_, 1);
v_zetaDeltaFVarIds_3941_ = lean_ctor_get(v___x_3939_, 2);
v_postponed_3942_ = lean_ctor_get(v___x_3939_, 3);
v_diag_3943_ = lean_ctor_get(v___x_3939_, 4);
v_isSharedCheck_3952_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3952_ == 0)
{
lean_object* v_unused_3953_; 
v_unused_3953_ = lean_ctor_get(v___x_3939_, 0);
lean_dec(v_unused_3953_);
v___x_3945_ = v___x_3939_;
v_isShared_3946_ = v_isSharedCheck_3952_;
goto v_resetjp_3944_;
}
else
{
lean_inc(v_diag_3943_);
lean_inc(v_postponed_3942_);
lean_inc(v_zetaDeltaFVarIds_3941_);
lean_inc(v_cache_3940_);
lean_dec(v___x_3939_);
v___x_3945_ = lean_box(0);
v_isShared_3946_ = v_isSharedCheck_3952_;
goto v_resetjp_3944_;
}
v_resetjp_3944_:
{
lean_object* v___x_3948_; 
if (v_isShared_3946_ == 0)
{
lean_ctor_set(v___x_3945_, 0, v_snd_3938_);
v___x_3948_ = v___x_3945_;
goto v_reusejp_3947_;
}
else
{
lean_object* v_reuseFailAlloc_3951_; 
v_reuseFailAlloc_3951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3951_, 0, v_snd_3938_);
lean_ctor_set(v_reuseFailAlloc_3951_, 1, v_cache_3940_);
lean_ctor_set(v_reuseFailAlloc_3951_, 2, v_zetaDeltaFVarIds_3941_);
lean_ctor_set(v_reuseFailAlloc_3951_, 3, v_postponed_3942_);
lean_ctor_set(v_reuseFailAlloc_3951_, 4, v_diag_3943_);
v___x_3948_ = v_reuseFailAlloc_3951_;
goto v_reusejp_3947_;
}
v_reusejp_3947_:
{
lean_object* v___x_3949_; lean_object* v___x_3950_; 
v___x_3949_ = lean_st_ref_set(v___y_3930_, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3950_, 0, v_fst_3937_);
return v___x_3950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg___boxed(lean_object* v_e_3954_, lean_object* v___y_3955_, lean_object* v___y_3956_){
_start:
{
lean_object* v_res_3957_; 
v_res_3957_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(v_e_3954_, v___y_3955_);
lean_dec(v___y_3955_);
return v_res_3957_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0(lean_object* v_e_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_, lean_object* v___y_3964_){
_start:
{
lean_object* v___x_3966_; 
v___x_3966_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(v_e_3958_, v___y_3962_);
return v___x_3966_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___boxed(lean_object* v_e_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_){
_start:
{
lean_object* v_res_3975_; 
v_res_3975_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0(v_e_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
lean_dec(v___y_3973_);
lean_dec_ref(v___y_3972_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
lean_dec(v___y_3969_);
lean_dec_ref(v___y_3968_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg(lean_object* v_a_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_){
_start:
{
lean_object* v___x_3984_; 
v___x_3984_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg___boxed(lean_object* v_a_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___redArg(v_a_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec(v___y_3989_);
lean_dec_ref(v___y_3988_);
lean_dec(v___y_3987_);
lean_dec_ref(v___y_3986_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2(lean_object* v_00_u03b1_3994_, lean_object* v_a_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_, lean_object* v___y_4000_, lean_object* v___y_4001_){
_start:
{
lean_object* v___x_4003_; 
v___x_4003_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v_a_3995_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_, v___y_4000_, v___y_4001_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2___boxed(lean_object* v_00_u03b1_4004_, lean_object* v_a_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l_Lean_Elab_Term_withoutErrToSorry___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__2(v_00_u03b1_4004_, v_a_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_);
lean_dec(v___y_4011_);
lean_dec_ref(v___y_4010_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(lean_object* v_lctx_4014_, lean_object* v_localInsts_4015_, lean_object* v_x_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
lean_object* v___x_4022_; 
v___x_4022_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_4014_, v_localInsts_4015_, v_x_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_);
if (lean_obj_tag(v___x_4022_) == 0)
{
lean_object* v_a_4023_; lean_object* v___x_4025_; uint8_t v_isShared_4026_; uint8_t v_isSharedCheck_4030_; 
v_a_4023_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4030_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4030_ == 0)
{
v___x_4025_ = v___x_4022_;
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
else
{
lean_inc(v_a_4023_);
lean_dec(v___x_4022_);
v___x_4025_ = lean_box(0);
v_isShared_4026_ = v_isSharedCheck_4030_;
goto v_resetjp_4024_;
}
v_resetjp_4024_:
{
lean_object* v___x_4028_; 
if (v_isShared_4026_ == 0)
{
v___x_4028_ = v___x_4025_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v_a_4023_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
}
else
{
lean_object* v_a_4031_; lean_object* v___x_4033_; uint8_t v_isShared_4034_; uint8_t v_isSharedCheck_4038_; 
v_a_4031_ = lean_ctor_get(v___x_4022_, 0);
v_isSharedCheck_4038_ = !lean_is_exclusive(v___x_4022_);
if (v_isSharedCheck_4038_ == 0)
{
v___x_4033_ = v___x_4022_;
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
else
{
lean_inc(v_a_4031_);
lean_dec(v___x_4022_);
v___x_4033_ = lean_box(0);
v_isShared_4034_ = v_isSharedCheck_4038_;
goto v_resetjp_4032_;
}
v_resetjp_4032_:
{
lean_object* v___x_4036_; 
if (v_isShared_4034_ == 0)
{
v___x_4036_ = v___x_4033_;
goto v_reusejp_4035_;
}
else
{
lean_object* v_reuseFailAlloc_4037_; 
v_reuseFailAlloc_4037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4037_, 0, v_a_4031_);
v___x_4036_ = v_reuseFailAlloc_4037_;
goto v_reusejp_4035_;
}
v_reusejp_4035_:
{
return v___x_4036_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg___boxed(lean_object* v_lctx_4039_, lean_object* v_localInsts_4040_, lean_object* v_x_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_, lean_object* v___y_4046_){
_start:
{
lean_object* v_res_4047_; 
v_res_4047_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(v_lctx_4039_, v_localInsts_4040_, v_x_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_);
lean_dec(v___y_4045_);
lean_dec_ref(v___y_4044_);
lean_dec(v___y_4043_);
lean_dec_ref(v___y_4042_);
return v_res_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3(lean_object* v_00_u03b1_4048_, lean_object* v_lctx_4049_, lean_object* v_localInsts_4050_, lean_object* v_x_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v___x_4057_; 
v___x_4057_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(v_lctx_4049_, v_localInsts_4050_, v_x_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_);
return v___x_4057_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___boxed(lean_object* v_00_u03b1_4058_, lean_object* v_lctx_4059_, lean_object* v_localInsts_4060_, lean_object* v_x_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_, lean_object* v___y_4065_, lean_object* v___y_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3(v_00_u03b1_4058_, v_lctx_4059_, v_localInsts_4060_, v_x_4061_, v___y_4062_, v___y_4063_, v___y_4064_, v___y_4065_);
lean_dec(v___y_4065_);
lean_dec_ref(v___y_4064_);
lean_dec(v___y_4063_);
lean_dec_ref(v___y_4062_);
return v_res_4067_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0(lean_object* v_x_4068_){
_start:
{
uint8_t v___x_4069_; 
v___x_4069_ = 0;
return v___x_4069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0___boxed(lean_object* v_x_4070_){
_start:
{
uint8_t v_res_4071_; lean_object* v_r_4072_; 
v_res_4071_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__0(v_x_4070_);
lean_dec(v_x_4070_);
v_r_4072_ = lean_box(v_res_4071_);
return v_r_4072_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(size_t v_sz_4073_, size_t v_i_4074_, lean_object* v_bs_4075_){
_start:
{
uint8_t v___x_4076_; 
v___x_4076_ = lean_usize_dec_lt(v_i_4074_, v_sz_4073_);
if (v___x_4076_ == 0)
{
return v_bs_4075_;
}
else
{
lean_object* v_v_4077_; lean_object* v___x_4078_; lean_object* v_bs_x27_4079_; lean_object* v___x_4080_; size_t v___x_4081_; size_t v___x_4082_; lean_object* v___x_4083_; 
v_v_4077_ = lean_array_uget(v_bs_4075_, v_i_4074_);
v___x_4078_ = lean_unsigned_to_nat(0u);
v_bs_x27_4079_ = lean_array_uset(v_bs_4075_, v_i_4074_, v___x_4078_);
v___x_4080_ = l_Lean_Expr_mvar___override(v_v_4077_);
v___x_4081_ = ((size_t)1ULL);
v___x_4082_ = lean_usize_add(v_i_4074_, v___x_4081_);
v___x_4083_ = lean_array_uset(v_bs_x27_4079_, v_i_4074_, v___x_4080_);
v_i_4074_ = v___x_4082_;
v_bs_4075_ = v___x_4083_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1___boxed(lean_object* v_sz_4085_, lean_object* v_i_4086_, lean_object* v_bs_4087_){
_start:
{
size_t v_sz_boxed_4088_; size_t v_i_boxed_4089_; lean_object* v_res_4090_; 
v_sz_boxed_4088_ = lean_unbox_usize(v_sz_4085_);
lean_dec(v_sz_4085_);
v_i_boxed_4089_ = lean_unbox_usize(v_i_4086_);
lean_dec(v_i_4086_);
v_res_4090_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(v_sz_boxed_4088_, v_i_boxed_4089_, v_bs_4087_);
return v_res_4090_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0(void){
_start:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; lean_object* v___x_4093_; 
v___x_4091_ = lean_box(0);
v___x_4092_ = lean_unsigned_to_nat(16u);
v___x_4093_ = lean_mk_array(v___x_4092_, v___x_4091_);
return v___x_4093_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_4094_; lean_object* v___x_4095_; lean_object* v___x_4096_; 
v___x_4094_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__0);
v___x_4095_ = lean_unsigned_to_nat(0u);
v___x_4096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4096_, 0, v___x_4095_);
lean_ctor_set(v___x_4096_, 1, v___x_4094_);
return v___x_4096_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_4099_; lean_object* v___x_4100_; lean_object* v___x_4101_; 
v___x_4099_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2));
v___x_4100_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__1);
v___x_4101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4101_, 0, v___x_4100_);
lean_ctor_set(v___x_4101_, 1, v___x_4099_);
return v___x_4101_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1(uint8_t v___x_4102_, lean_object* v___x_4103_, lean_object* v_m_4104_, lean_object* v_p_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v___x_4113_; 
v___x_4113_ = l_Lean_Meta_mkFreshTypeMVar(v___x_4102_, v___x_4103_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
if (lean_obj_tag(v___x_4113_) == 0)
{
lean_object* v_a_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; uint8_t v___x_4117_; lean_object* v___x_4118_; 
v_a_4114_ = lean_ctor_get(v___x_4113_, 0);
lean_inc(v_a_4114_);
lean_dec_ref_known(v___x_4113_, 1);
v___x_4115_ = l_Lean_Expr_app___override(v_m_4104_, v_a_4114_);
v___x_4116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4115_);
v___x_4117_ = 1;
v___x_4118_ = l_Lean_Elab_Term_elabTerm(v_p_4105_, v___x_4116_, v___x_4117_, v___x_4117_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
if (lean_obj_tag(v___x_4118_) == 0)
{
lean_object* v_a_4119_; lean_object* v___x_4120_; lean_object* v_a_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v_result_4124_; size_t v_sz_4125_; size_t v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; 
v_a_4119_ = lean_ctor_get(v___x_4118_, 0);
lean_inc(v_a_4119_);
lean_dec_ref_known(v___x_4118_, 1);
v___x_4120_ = l_Lean_instantiateMVars___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__0___redArg(v_a_4119_, v___y_4109_);
v_a_4121_ = lean_ctor_get(v___x_4120_, 0);
lean_inc_n(v_a_4121_, 2);
lean_dec_ref(v___x_4120_);
v___x_4122_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__3);
v___x_4123_ = l_Lean_Expr_collectMVars(v___x_4122_, v_a_4121_);
v_result_4124_ = lean_ctor_get(v___x_4123_, 1);
lean_inc_ref(v_result_4124_);
lean_dec_ref(v___x_4123_);
v_sz_4125_ = lean_array_size(v_result_4124_);
v___x_4126_ = ((size_t)0ULL);
v___x_4127_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__1(v_sz_4125_, v___x_4126_, v_result_4124_);
v___x_4128_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_mkUntilPattern(v___x_4127_, v_a_4121_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
lean_dec(v_a_4121_);
lean_dec_ref(v___x_4127_);
return v___x_4128_;
}
else
{
lean_object* v_a_4129_; lean_object* v___x_4131_; uint8_t v_isShared_4132_; uint8_t v_isSharedCheck_4136_; 
v_a_4129_ = lean_ctor_get(v___x_4118_, 0);
v_isSharedCheck_4136_ = !lean_is_exclusive(v___x_4118_);
if (v_isSharedCheck_4136_ == 0)
{
v___x_4131_ = v___x_4118_;
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
else
{
lean_inc(v_a_4129_);
lean_dec(v___x_4118_);
v___x_4131_ = lean_box(0);
v_isShared_4132_ = v_isSharedCheck_4136_;
goto v_resetjp_4130_;
}
v_resetjp_4130_:
{
lean_object* v___x_4134_; 
if (v_isShared_4132_ == 0)
{
v___x_4134_ = v___x_4131_;
goto v_reusejp_4133_;
}
else
{
lean_object* v_reuseFailAlloc_4135_; 
v_reuseFailAlloc_4135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4135_, 0, v_a_4129_);
v___x_4134_ = v_reuseFailAlloc_4135_;
goto v_reusejp_4133_;
}
v_reusejp_4133_:
{
return v___x_4134_;
}
}
}
}
else
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
lean_dec(v_p_4105_);
lean_dec_ref(v_m_4104_);
v_a_4137_ = lean_ctor_get(v___x_4113_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4113_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4113_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4113_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___boxed(lean_object* v___x_4145_, lean_object* v___x_4146_, lean_object* v_m_4147_, lean_object* v_p_4148_, lean_object* v___y_4149_, lean_object* v___y_4150_, lean_object* v___y_4151_, lean_object* v___y_4152_, lean_object* v___y_4153_, lean_object* v___y_4154_, lean_object* v___y_4155_){
_start:
{
uint8_t v___x_3884__boxed_4156_; lean_object* v_res_4157_; 
v___x_3884__boxed_4156_ = lean_unbox(v___x_4145_);
v_res_4157_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1(v___x_3884__boxed_4156_, v___x_4146_, v_m_4147_, v_p_4148_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_);
lean_dec(v___y_4154_);
lean_dec_ref(v___y_4153_);
lean_dec(v___y_4152_);
lean_dec_ref(v___y_4151_);
lean_dec(v___y_4150_);
lean_dec_ref(v___y_4149_);
return v_res_4157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2(lean_object* v_p_4158_, lean_object* v___f_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_){
_start:
{
lean_object* v_fileName_4167_; lean_object* v_fileMap_4168_; lean_object* v_options_4169_; lean_object* v_currRecDepth_4170_; lean_object* v_maxRecDepth_4171_; lean_object* v_ref_4172_; lean_object* v_currNamespace_4173_; lean_object* v_openDecls_4174_; lean_object* v_initHeartbeats_4175_; lean_object* v_maxHeartbeats_4176_; lean_object* v_quotContext_4177_; lean_object* v_currMacroScope_4178_; uint8_t v_diag_4179_; lean_object* v_cancelTk_x3f_4180_; uint8_t v_suppressElabErrors_4181_; lean_object* v_inheritedTraceOptions_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4217_; 
v_fileName_4167_ = lean_ctor_get(v___y_4164_, 0);
v_fileMap_4168_ = lean_ctor_get(v___y_4164_, 1);
v_options_4169_ = lean_ctor_get(v___y_4164_, 2);
v_currRecDepth_4170_ = lean_ctor_get(v___y_4164_, 3);
v_maxRecDepth_4171_ = lean_ctor_get(v___y_4164_, 4);
v_ref_4172_ = lean_ctor_get(v___y_4164_, 5);
v_currNamespace_4173_ = lean_ctor_get(v___y_4164_, 6);
v_openDecls_4174_ = lean_ctor_get(v___y_4164_, 7);
v_initHeartbeats_4175_ = lean_ctor_get(v___y_4164_, 8);
v_maxHeartbeats_4176_ = lean_ctor_get(v___y_4164_, 9);
v_quotContext_4177_ = lean_ctor_get(v___y_4164_, 10);
v_currMacroScope_4178_ = lean_ctor_get(v___y_4164_, 11);
v_diag_4179_ = lean_ctor_get_uint8(v___y_4164_, sizeof(void*)*14);
v_cancelTk_x3f_4180_ = lean_ctor_get(v___y_4164_, 12);
v_suppressElabErrors_4181_ = lean_ctor_get_uint8(v___y_4164_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_4182_ = lean_ctor_get(v___y_4164_, 13);
v_isSharedCheck_4217_ = !lean_is_exclusive(v___y_4164_);
if (v_isSharedCheck_4217_ == 0)
{
v___x_4184_ = v___y_4164_;
v_isShared_4185_ = v_isSharedCheck_4217_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_inheritedTraceOptions_4182_);
lean_inc(v_cancelTk_x3f_4180_);
lean_inc(v_currMacroScope_4178_);
lean_inc(v_quotContext_4177_);
lean_inc(v_maxHeartbeats_4176_);
lean_inc(v_initHeartbeats_4175_);
lean_inc(v_openDecls_4174_);
lean_inc(v_currNamespace_4173_);
lean_inc(v_ref_4172_);
lean_inc(v_maxRecDepth_4171_);
lean_inc(v_currRecDepth_4170_);
lean_inc(v_options_4169_);
lean_inc(v_fileMap_4168_);
lean_inc(v_fileName_4167_);
lean_dec(v___y_4164_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4217_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
lean_object* v_declName_x3f_4186_; lean_object* v_macroStack_4187_; uint8_t v_mayPostpone_4188_; uint8_t v_errToSorry_4189_; lean_object* v_autoBoundImplicitContext_4190_; lean_object* v_autoBoundImplicitForbidden_4191_; lean_object* v_sectionVars_4192_; lean_object* v_sectionFVars_4193_; uint8_t v_implicitLambda_4194_; uint8_t v_heedElabAsElim_4195_; uint8_t v_isNoncomputableSection_4196_; uint8_t v_isMetaSection_4197_; uint8_t v_inPattern_4198_; lean_object* v_tacSnap_x3f_4199_; uint8_t v_saveRecAppSyntax_4200_; uint8_t v_holesAsSyntheticOpaque_4201_; uint8_t v_checkDeprecated_4202_; lean_object* v_fixedTermElabs_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4216_; 
v_declName_x3f_4186_ = lean_ctor_get(v___y_4160_, 0);
v_macroStack_4187_ = lean_ctor_get(v___y_4160_, 1);
v_mayPostpone_4188_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8);
v_errToSorry_4189_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 1);
v_autoBoundImplicitContext_4190_ = lean_ctor_get(v___y_4160_, 2);
v_autoBoundImplicitForbidden_4191_ = lean_ctor_get(v___y_4160_, 3);
v_sectionVars_4192_ = lean_ctor_get(v___y_4160_, 4);
v_sectionFVars_4193_ = lean_ctor_get(v___y_4160_, 5);
v_implicitLambda_4194_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 2);
v_heedElabAsElim_4195_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 3);
v_isNoncomputableSection_4196_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 4);
v_isMetaSection_4197_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 5);
v_inPattern_4198_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 7);
v_tacSnap_x3f_4199_ = lean_ctor_get(v___y_4160_, 6);
v_saveRecAppSyntax_4200_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 8);
v_holesAsSyntheticOpaque_4201_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 9);
v_checkDeprecated_4202_ = lean_ctor_get_uint8(v___y_4160_, sizeof(void*)*8 + 10);
v_fixedTermElabs_4203_ = lean_ctor_get(v___y_4160_, 7);
v_isSharedCheck_4216_ = !lean_is_exclusive(v___y_4160_);
if (v_isSharedCheck_4216_ == 0)
{
v___x_4205_ = v___y_4160_;
v_isShared_4206_ = v_isSharedCheck_4216_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_fixedTermElabs_4203_);
lean_inc(v_tacSnap_x3f_4199_);
lean_inc(v_sectionFVars_4193_);
lean_inc(v_sectionVars_4192_);
lean_inc(v_autoBoundImplicitForbidden_4191_);
lean_inc(v_autoBoundImplicitContext_4190_);
lean_inc(v_macroStack_4187_);
lean_inc(v_declName_x3f_4186_);
lean_dec(v___y_4160_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4216_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v_ref_4207_; lean_object* v___x_4209_; 
v_ref_4207_ = l_Lean_replaceRef(v_p_4158_, v_ref_4172_);
lean_dec(v_ref_4172_);
if (v_isShared_4185_ == 0)
{
lean_ctor_set(v___x_4184_, 5, v_ref_4207_);
v___x_4209_ = v___x_4184_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4215_; 
v_reuseFailAlloc_4215_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v_reuseFailAlloc_4215_, 0, v_fileName_4167_);
lean_ctor_set(v_reuseFailAlloc_4215_, 1, v_fileMap_4168_);
lean_ctor_set(v_reuseFailAlloc_4215_, 2, v_options_4169_);
lean_ctor_set(v_reuseFailAlloc_4215_, 3, v_currRecDepth_4170_);
lean_ctor_set(v_reuseFailAlloc_4215_, 4, v_maxRecDepth_4171_);
lean_ctor_set(v_reuseFailAlloc_4215_, 5, v_ref_4207_);
lean_ctor_set(v_reuseFailAlloc_4215_, 6, v_currNamespace_4173_);
lean_ctor_set(v_reuseFailAlloc_4215_, 7, v_openDecls_4174_);
lean_ctor_set(v_reuseFailAlloc_4215_, 8, v_initHeartbeats_4175_);
lean_ctor_set(v_reuseFailAlloc_4215_, 9, v_maxHeartbeats_4176_);
lean_ctor_set(v_reuseFailAlloc_4215_, 10, v_quotContext_4177_);
lean_ctor_set(v_reuseFailAlloc_4215_, 11, v_currMacroScope_4178_);
lean_ctor_set(v_reuseFailAlloc_4215_, 12, v_cancelTk_x3f_4180_);
lean_ctor_set(v_reuseFailAlloc_4215_, 13, v_inheritedTraceOptions_4182_);
lean_ctor_set_uint8(v_reuseFailAlloc_4215_, sizeof(void*)*14, v_diag_4179_);
lean_ctor_set_uint8(v_reuseFailAlloc_4215_, sizeof(void*)*14 + 1, v_suppressElabErrors_4181_);
v___x_4209_ = v_reuseFailAlloc_4215_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
uint8_t v___x_4210_; lean_object* v___x_4212_; 
v___x_4210_ = 1;
if (v_isShared_4206_ == 0)
{
v___x_4212_ = v___x_4205_;
goto v_reusejp_4211_;
}
else
{
lean_object* v_reuseFailAlloc_4214_; 
v_reuseFailAlloc_4214_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v_reuseFailAlloc_4214_, 0, v_declName_x3f_4186_);
lean_ctor_set(v_reuseFailAlloc_4214_, 1, v_macroStack_4187_);
lean_ctor_set(v_reuseFailAlloc_4214_, 2, v_autoBoundImplicitContext_4190_);
lean_ctor_set(v_reuseFailAlloc_4214_, 3, v_autoBoundImplicitForbidden_4191_);
lean_ctor_set(v_reuseFailAlloc_4214_, 4, v_sectionVars_4192_);
lean_ctor_set(v_reuseFailAlloc_4214_, 5, v_sectionFVars_4193_);
lean_ctor_set(v_reuseFailAlloc_4214_, 6, v_tacSnap_x3f_4199_);
lean_ctor_set(v_reuseFailAlloc_4214_, 7, v_fixedTermElabs_4203_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8, v_mayPostpone_4188_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 1, v_errToSorry_4189_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 2, v_implicitLambda_4194_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 3, v_heedElabAsElim_4195_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 4, v_isNoncomputableSection_4196_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 5, v_isMetaSection_4197_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 7, v_inPattern_4198_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 8, v_saveRecAppSyntax_4200_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 9, v_holesAsSyntheticOpaque_4201_);
lean_ctor_set_uint8(v_reuseFailAlloc_4214_, sizeof(void*)*8 + 10, v_checkDeprecated_4202_);
v___x_4212_ = v_reuseFailAlloc_4214_;
goto v_reusejp_4211_;
}
v_reusejp_4211_:
{
lean_object* v___x_4213_; 
lean_ctor_set_uint8(v___x_4212_, sizeof(void*)*8 + 6, v___x_4210_);
v___x_4213_ = l_Lean_Elab_Term_withoutErrToSorryImp___redArg(v___f_4159_, v___x_4212_, v___y_4161_, v___y_4162_, v___y_4163_, v___x_4209_, v___y_4165_);
lean_dec_ref(v___x_4209_);
lean_dec_ref(v___x_4212_);
return v___x_4213_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2___boxed(lean_object* v_p_4218_, lean_object* v___f_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_){
_start:
{
lean_object* v_res_4227_; 
v_res_4227_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2(v_p_4218_, v___f_4219_, v___y_4220_, v___y_4221_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
lean_dec(v___y_4225_);
lean_dec(v___y_4223_);
lean_dec_ref(v___y_4222_);
lean_dec(v___y_4221_);
lean_dec(v_p_4218_);
return v_res_4227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3(lean_object* v___x_4228_, lean_object* v___x_4229_, lean_object* v___x_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_, lean_object* v___y_4233_, lean_object* v___y_4234_){
_start:
{
lean_object* v___x_4236_; 
v___x_4236_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___x_4228_, v___x_4229_, v___x_4230_, v___y_4231_, v___y_4232_, v___y_4233_, v___y_4234_);
if (lean_obj_tag(v___x_4236_) == 0)
{
lean_object* v_a_4237_; lean_object* v___x_4239_; uint8_t v_isShared_4240_; uint8_t v_isSharedCheck_4245_; 
v_a_4237_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4245_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4245_ == 0)
{
v___x_4239_ = v___x_4236_;
v_isShared_4240_ = v_isSharedCheck_4245_;
goto v_resetjp_4238_;
}
else
{
lean_inc(v_a_4237_);
lean_dec(v___x_4236_);
v___x_4239_ = lean_box(0);
v_isShared_4240_ = v_isSharedCheck_4245_;
goto v_resetjp_4238_;
}
v_resetjp_4238_:
{
lean_object* v_fst_4241_; lean_object* v___x_4243_; 
v_fst_4241_ = lean_ctor_get(v_a_4237_, 0);
lean_inc(v_fst_4241_);
lean_dec(v_a_4237_);
if (v_isShared_4240_ == 0)
{
lean_ctor_set(v___x_4239_, 0, v_fst_4241_);
v___x_4243_ = v___x_4239_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v_fst_4241_);
v___x_4243_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
return v___x_4243_;
}
}
}
else
{
lean_object* v_a_4246_; lean_object* v___x_4248_; uint8_t v_isShared_4249_; uint8_t v_isSharedCheck_4253_; 
v_a_4246_ = lean_ctor_get(v___x_4236_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4236_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4248_ = v___x_4236_;
v_isShared_4249_ = v_isSharedCheck_4253_;
goto v_resetjp_4247_;
}
else
{
lean_inc(v_a_4246_);
lean_dec(v___x_4236_);
v___x_4248_ = lean_box(0);
v_isShared_4249_ = v_isSharedCheck_4253_;
goto v_resetjp_4247_;
}
v_resetjp_4247_:
{
lean_object* v___x_4251_; 
if (v_isShared_4249_ == 0)
{
v___x_4251_ = v___x_4248_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_a_4246_);
v___x_4251_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
return v___x_4251_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3___boxed(lean_object* v___x_4254_, lean_object* v___x_4255_, lean_object* v___x_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_){
_start:
{
lean_object* v_res_4262_; 
v_res_4262_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3(v___x_4254_, v___x_4255_, v___x_4256_, v___y_4257_, v___y_4258_, v___y_4259_, v___y_4260_);
lean_dec(v___y_4260_);
lean_dec_ref(v___y_4259_);
lean_dec(v___y_4258_);
lean_dec_ref(v___y_4257_);
return v_res_4262_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4(lean_object* v_p_4268_, lean_object* v___f_4269_, lean_object* v_lctx_4270_, lean_object* v_localInstances_4271_, lean_object* v_m_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_){
_start:
{
uint8_t v___x_4278_; lean_object* v___x_4279_; lean_object* v___x_4280_; lean_object* v___f_4281_; lean_object* v___f_4282_; lean_object* v___x_4283_; lean_object* v___x_4284_; lean_object* v___x_4285_; uint8_t v___x_4286_; lean_object* v___x_4287_; uint8_t v___x_4288_; lean_object* v___x_4289_; lean_object* v___x_4290_; lean_object* v___x_4291_; lean_object* v___f_4292_; lean_object* v___x_4293_; 
v___x_4278_ = 0;
v___x_4279_ = lean_box(0);
v___x_4280_ = lean_box(v___x_4278_);
lean_inc(v_p_4268_);
v___f_4281_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___boxed), 11, 4);
lean_closure_set(v___f_4281_, 0, v___x_4280_);
lean_closure_set(v___f_4281_, 1, v___x_4279_);
lean_closure_set(v___f_4281_, 2, v_m_4272_);
lean_closure_set(v___f_4281_, 3, v_p_4268_);
v___f_4282_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__2___boxed), 9, 2);
lean_closure_set(v___f_4282_, 0, v_p_4268_);
lean_closure_set(v___f_4282_, 1, v___f_4281_);
v___x_4283_ = lean_alloc_closure((void*)(l_Lean_Elab_Term_withoutModifyingElabMetaStateWithInfo___boxed), 9, 2);
lean_closure_set(v___x_4283_, 0, lean_box(0));
lean_closure_set(v___x_4283_, 1, v___f_4282_);
v___x_4284_ = lean_box(0);
v___x_4285_ = lean_box(0);
v___x_4286_ = 1;
v___x_4287_ = lean_box(1);
v___x_4288_ = 0;
v___x_4289_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__0));
v___x_4290_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_4290_, 0, v___x_4284_);
lean_ctor_set(v___x_4290_, 1, v___x_4285_);
lean_ctor_set(v___x_4290_, 2, v___x_4284_);
lean_ctor_set(v___x_4290_, 3, v___f_4269_);
lean_ctor_set(v___x_4290_, 4, v___x_4287_);
lean_ctor_set(v___x_4290_, 5, v___x_4287_);
lean_ctor_set(v___x_4290_, 6, v___x_4284_);
lean_ctor_set(v___x_4290_, 7, v___x_4289_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8, v___x_4286_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 1, v___x_4286_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 2, v___x_4286_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 3, v___x_4286_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 4, v___x_4288_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 5, v___x_4288_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 6, v___x_4288_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 7, v___x_4288_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 8, v___x_4286_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 9, v___x_4288_);
lean_ctor_set_uint8(v___x_4290_, sizeof(void*)*8 + 10, v___x_4286_);
v___x_4291_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___closed__1));
v___f_4292_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__3___boxed), 8, 3);
lean_closure_set(v___f_4292_, 0, v___x_4283_);
lean_closure_set(v___f_4292_, 1, v___x_4290_);
lean_closure_set(v___f_4292_, 2, v___x_4291_);
v___x_4293_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern_spec__3___redArg(v_lctx_4270_, v_localInstances_4271_, v___f_4292_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_);
return v___x_4293_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___boxed(lean_object* v_p_4294_, lean_object* v___f_4295_, lean_object* v_lctx_4296_, lean_object* v_localInstances_4297_, lean_object* v_m_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_){
_start:
{
lean_object* v_res_4304_; 
v_res_4304_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4(v_p_4294_, v___f_4295_, v_lctx_4296_, v_localInstances_4297_, v_m_4298_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_);
lean_dec(v___y_4302_);
lean_dec_ref(v___y_4301_);
lean_dec(v___y_4300_);
lean_dec_ref(v___y_4299_);
return v_res_4304_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(lean_object* v_p_4306_, lean_object* v_a_4307_){
_start:
{
lean_object* v_lctx_4309_; lean_object* v_localInstances_4310_; lean_object* v___f_4311_; lean_object* v___f_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4315_; 
v_lctx_4309_ = lean_ctor_get(v_a_4307_, 2);
v_localInstances_4310_ = lean_ctor_get(v_a_4307_, 3);
v___f_4311_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___closed__0));
lean_inc_ref(v_localInstances_4310_);
lean_inc_ref(v_lctx_4309_);
v___f_4312_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__4___boxed), 10, 4);
lean_closure_set(v___f_4312_, 0, v_p_4306_);
lean_closure_set(v___f_4312_, 1, v___f_4311_);
lean_closure_set(v___f_4312_, 2, v_lctx_4309_);
lean_closure_set(v___f_4312_, 3, v_localInstances_4310_);
v___x_4313_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4313_, 0, v___f_4312_);
v___x_4314_ = lean_st_mk_ref(v___x_4313_);
v___x_4315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4315_, 0, v___x_4314_);
return v___x_4315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___boxed(lean_object* v_p_4316_, lean_object* v_a_4317_, lean_object* v_a_4318_){
_start:
{
lean_object* v_res_4319_; 
v_res_4319_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(v_p_4316_, v_a_4317_);
lean_dec_ref(v_a_4317_);
return v_res_4319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern(lean_object* v_p_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(v_p_4320_, v_a_4323_);
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___boxed(lean_object* v_p_4329_, lean_object* v_a_4330_, lean_object* v_a_4331_, lean_object* v_a_4332_, lean_object* v_a_4333_, lean_object* v_a_4334_, lean_object* v_a_4335_, lean_object* v_a_4336_){
_start:
{
lean_object* v_res_4337_; 
v_res_4337_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern(v_p_4329_, v_a_4330_, v_a_4331_, v_a_4332_, v_a_4333_, v_a_4334_, v_a_4335_);
lean_dec(v_a_4335_);
lean_dec_ref(v_a_4334_);
lean_dec(v_a_4333_);
lean_dec_ref(v_a_4332_);
lean_dec(v_a_4331_);
lean_dec_ref(v_a_4330_);
return v_res_4337_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(lean_object* v_x_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_, lean_object* v___y_4342_, lean_object* v___y_4343_, lean_object* v___y_4344_){
_start:
{
lean_object* v___x_4346_; 
lean_inc(v___y_4340_);
lean_inc_ref(v___y_4339_);
v___x_4346_ = lean_apply_7(v_x_4338_, v___y_4339_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_, v___y_4344_, lean_box(0));
return v___x_4346_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed(lean_object* v_x_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0(v_x_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(lean_object* v_mvarId_4356_, lean_object* v_x_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v___f_4365_; lean_object* v___x_4366_; 
lean_inc(v___y_4359_);
lean_inc_ref(v___y_4358_);
v___f_4365_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4365_, 0, v_x_4357_);
lean_closure_set(v___f_4365_, 1, v___y_4358_);
lean_closure_set(v___f_4365_, 2, v___y_4359_);
v___x_4366_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4356_, v___f_4365_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
if (lean_obj_tag(v___x_4366_) == 0)
{
return v___x_4366_;
}
else
{
lean_object* v_a_4367_; lean_object* v___x_4369_; uint8_t v_isShared_4370_; uint8_t v_isSharedCheck_4374_; 
v_a_4367_ = lean_ctor_get(v___x_4366_, 0);
v_isSharedCheck_4374_ = !lean_is_exclusive(v___x_4366_);
if (v_isSharedCheck_4374_ == 0)
{
v___x_4369_ = v___x_4366_;
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
else
{
lean_inc(v_a_4367_);
lean_dec(v___x_4366_);
v___x_4369_ = lean_box(0);
v_isShared_4370_ = v_isSharedCheck_4374_;
goto v_resetjp_4368_;
}
v_resetjp_4368_:
{
lean_object* v___x_4372_; 
if (v_isShared_4370_ == 0)
{
v___x_4372_ = v___x_4369_;
goto v_reusejp_4371_;
}
else
{
lean_object* v_reuseFailAlloc_4373_; 
v_reuseFailAlloc_4373_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4373_, 0, v_a_4367_);
v___x_4372_ = v_reuseFailAlloc_4373_;
goto v_reusejp_4371_;
}
v_reusejp_4371_:
{
return v___x_4372_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg___boxed(lean_object* v_mvarId_4375_, lean_object* v_x_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_){
_start:
{
lean_object* v_res_4384_; 
v_res_4384_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_mvarId_4375_, v_x_4376_, v___y_4377_, v___y_4378_, v___y_4379_, v___y_4380_, v___y_4381_, v___y_4382_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
lean_dec(v___y_4380_);
lean_dec_ref(v___y_4379_);
lean_dec(v___y_4378_);
lean_dec_ref(v___y_4377_);
return v_res_4384_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(lean_object* v_00_u03b1_4385_, lean_object* v_mvarId_4386_, lean_object* v_x_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_, lean_object* v___y_4393_){
_start:
{
lean_object* v___x_4395_; 
v___x_4395_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_mvarId_4386_, v_x_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_, v___y_4392_, v___y_4393_);
return v___x_4395_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___boxed(lean_object* v_00_u03b1_4396_, lean_object* v_mvarId_4397_, lean_object* v_x_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_){
_start:
{
lean_object* v_res_4406_; 
v_res_4406_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1(v_00_u03b1_4396_, v_mvarId_4397_, v_x_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_);
lean_dec(v___y_4404_);
lean_dec_ref(v___y_4403_);
lean_dec(v___y_4402_);
lean_dec_ref(v___y_4401_);
lean_dec(v___y_4400_);
lean_dec_ref(v___y_4399_);
return v_res_4406_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(lean_object* v_ref_4407_, lean_object* v_msgData_4408_, uint8_t v_severity_4409_, uint8_t v_isSilent_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_){
_start:
{
lean_object* v___y_4417_; lean_object* v___y_4418_; uint8_t v___y_4419_; lean_object* v___y_4420_; lean_object* v___y_4421_; lean_object* v___y_4422_; uint8_t v___y_4423_; lean_object* v___y_4424_; lean_object* v___y_4425_; lean_object* v___y_4453_; lean_object* v___y_4454_; uint8_t v___y_4455_; uint8_t v___y_4456_; lean_object* v___y_4457_; uint8_t v___y_4458_; lean_object* v___y_4459_; lean_object* v___y_4460_; lean_object* v___y_4478_; lean_object* v___y_4479_; uint8_t v___y_4480_; uint8_t v___y_4481_; lean_object* v___y_4482_; uint8_t v___y_4483_; lean_object* v___y_4484_; lean_object* v___y_4485_; lean_object* v___y_4489_; lean_object* v___y_4490_; uint8_t v___y_4491_; lean_object* v___y_4492_; lean_object* v___y_4493_; uint8_t v___y_4494_; uint8_t v___y_4495_; uint8_t v___x_4500_; lean_object* v___y_4502_; lean_object* v___y_4503_; uint8_t v___y_4504_; lean_object* v___y_4505_; lean_object* v___y_4506_; uint8_t v___y_4507_; uint8_t v___y_4508_; uint8_t v___y_4510_; uint8_t v___x_4525_; 
v___x_4500_ = 2;
v___x_4525_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4409_, v___x_4500_);
if (v___x_4525_ == 0)
{
v___y_4510_ = v___x_4525_;
goto v___jp_4509_;
}
else
{
uint8_t v___x_4526_; 
lean_inc_ref(v_msgData_4408_);
v___x_4526_ = l_Lean_MessageData_hasSyntheticSorry(v_msgData_4408_);
v___y_4510_ = v___x_4526_;
goto v___jp_4509_;
}
v___jp_4416_:
{
lean_object* v___x_4426_; lean_object* v_currNamespace_4427_; lean_object* v_openDecls_4428_; lean_object* v_env_4429_; lean_object* v_nextMacroScope_4430_; lean_object* v_ngen_4431_; lean_object* v_auxDeclNGen_4432_; lean_object* v_traceState_4433_; lean_object* v_cache_4434_; lean_object* v_messages_4435_; lean_object* v_infoState_4436_; lean_object* v_snapshotTasks_4437_; lean_object* v___x_4439_; uint8_t v_isShared_4440_; uint8_t v_isSharedCheck_4451_; 
v___x_4426_ = lean_st_ref_take(v___y_4425_);
v_currNamespace_4427_ = lean_ctor_get(v___y_4424_, 6);
v_openDecls_4428_ = lean_ctor_get(v___y_4424_, 7);
v_env_4429_ = lean_ctor_get(v___x_4426_, 0);
v_nextMacroScope_4430_ = lean_ctor_get(v___x_4426_, 1);
v_ngen_4431_ = lean_ctor_get(v___x_4426_, 2);
v_auxDeclNGen_4432_ = lean_ctor_get(v___x_4426_, 3);
v_traceState_4433_ = lean_ctor_get(v___x_4426_, 4);
v_cache_4434_ = lean_ctor_get(v___x_4426_, 5);
v_messages_4435_ = lean_ctor_get(v___x_4426_, 6);
v_infoState_4436_ = lean_ctor_get(v___x_4426_, 7);
v_snapshotTasks_4437_ = lean_ctor_get(v___x_4426_, 8);
v_isSharedCheck_4451_ = !lean_is_exclusive(v___x_4426_);
if (v_isSharedCheck_4451_ == 0)
{
v___x_4439_ = v___x_4426_;
v_isShared_4440_ = v_isSharedCheck_4451_;
goto v_resetjp_4438_;
}
else
{
lean_inc(v_snapshotTasks_4437_);
lean_inc(v_infoState_4436_);
lean_inc(v_messages_4435_);
lean_inc(v_cache_4434_);
lean_inc(v_traceState_4433_);
lean_inc(v_auxDeclNGen_4432_);
lean_inc(v_ngen_4431_);
lean_inc(v_nextMacroScope_4430_);
lean_inc(v_env_4429_);
lean_dec(v___x_4426_);
v___x_4439_ = lean_box(0);
v_isShared_4440_ = v_isSharedCheck_4451_;
goto v_resetjp_4438_;
}
v_resetjp_4438_:
{
lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4446_; 
lean_inc(v_openDecls_4428_);
lean_inc(v_currNamespace_4427_);
v___x_4441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4441_, 0, v_currNamespace_4427_);
lean_ctor_set(v___x_4441_, 1, v_openDecls_4428_);
v___x_4442_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4441_);
lean_ctor_set(v___x_4442_, 1, v___y_4422_);
lean_inc_ref(v___y_4417_);
lean_inc_ref(v___y_4420_);
v___x_4443_ = lean_alloc_ctor(0, 5, 3);
lean_ctor_set(v___x_4443_, 0, v___y_4420_);
lean_ctor_set(v___x_4443_, 1, v___y_4421_);
lean_ctor_set(v___x_4443_, 2, v___y_4418_);
lean_ctor_set(v___x_4443_, 3, v___y_4417_);
lean_ctor_set(v___x_4443_, 4, v___x_4442_);
lean_ctor_set_uint8(v___x_4443_, sizeof(void*)*5, v___y_4423_);
lean_ctor_set_uint8(v___x_4443_, sizeof(void*)*5 + 1, v___y_4419_);
lean_ctor_set_uint8(v___x_4443_, sizeof(void*)*5 + 2, v_isSilent_4410_);
v___x_4444_ = l_Lean_MessageLog_add(v___x_4443_, v_messages_4435_);
if (v_isShared_4440_ == 0)
{
lean_ctor_set(v___x_4439_, 6, v___x_4444_);
v___x_4446_ = v___x_4439_;
goto v_reusejp_4445_;
}
else
{
lean_object* v_reuseFailAlloc_4450_; 
v_reuseFailAlloc_4450_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4450_, 0, v_env_4429_);
lean_ctor_set(v_reuseFailAlloc_4450_, 1, v_nextMacroScope_4430_);
lean_ctor_set(v_reuseFailAlloc_4450_, 2, v_ngen_4431_);
lean_ctor_set(v_reuseFailAlloc_4450_, 3, v_auxDeclNGen_4432_);
lean_ctor_set(v_reuseFailAlloc_4450_, 4, v_traceState_4433_);
lean_ctor_set(v_reuseFailAlloc_4450_, 5, v_cache_4434_);
lean_ctor_set(v_reuseFailAlloc_4450_, 6, v___x_4444_);
lean_ctor_set(v_reuseFailAlloc_4450_, 7, v_infoState_4436_);
lean_ctor_set(v_reuseFailAlloc_4450_, 8, v_snapshotTasks_4437_);
v___x_4446_ = v_reuseFailAlloc_4450_;
goto v_reusejp_4445_;
}
v_reusejp_4445_:
{
lean_object* v___x_4447_; lean_object* v___x_4448_; lean_object* v___x_4449_; 
v___x_4447_ = lean_st_ref_set(v___y_4425_, v___x_4446_);
v___x_4448_ = lean_box(0);
v___x_4449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4449_, 0, v___x_4448_);
return v___x_4449_;
}
}
}
v___jp_4452_:
{
lean_object* v___x_4461_; lean_object* v___x_4462_; lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4476_; 
v___x_4461_ = l___private_Lean_Log_0__Lean_MessageData_appendDescriptionWidgetIfNamed(v_msgData_4408_);
v___x_4462_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__1(v___x_4461_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_);
v_a_4463_ = lean_ctor_get(v___x_4462_, 0);
v_isSharedCheck_4476_ = !lean_is_exclusive(v___x_4462_);
if (v_isSharedCheck_4476_ == 0)
{
v___x_4465_ = v___x_4462_;
v_isShared_4466_ = v_isSharedCheck_4476_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4462_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4476_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4467_; lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; 
lean_inc_ref_n(v___y_4454_, 2);
v___x_4467_ = l_Lean_FileMap_toPosition(v___y_4454_, v___y_4459_);
lean_dec(v___y_4459_);
v___x_4468_ = l_Lean_FileMap_toPosition(v___y_4454_, v___y_4460_);
lean_dec(v___y_4460_);
v___x_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4469_, 0, v___x_4468_);
v___x_4470_ = ((lean_object*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___closed__0));
if (v___y_4455_ == 0)
{
lean_del_object(v___x_4465_);
lean_dec_ref(v___y_4453_);
v___y_4417_ = v___x_4470_;
v___y_4418_ = v___x_4469_;
v___y_4419_ = v___y_4456_;
v___y_4420_ = v___y_4457_;
v___y_4421_ = v___x_4467_;
v___y_4422_ = v_a_4463_;
v___y_4423_ = v___y_4458_;
v___y_4424_ = v___y_4413_;
v___y_4425_ = v___y_4414_;
goto v___jp_4416_;
}
else
{
uint8_t v___x_4471_; 
lean_inc(v_a_4463_);
v___x_4471_ = l_Lean_MessageData_hasTag(v___y_4453_, v_a_4463_);
if (v___x_4471_ == 0)
{
lean_object* v___x_4472_; lean_object* v___x_4474_; 
lean_dec_ref_known(v___x_4469_, 1);
lean_dec_ref(v___x_4467_);
lean_dec(v_a_4463_);
v___x_4472_ = lean_box(0);
if (v_isShared_4466_ == 0)
{
lean_ctor_set(v___x_4465_, 0, v___x_4472_);
v___x_4474_ = v___x_4465_;
goto v_reusejp_4473_;
}
else
{
lean_object* v_reuseFailAlloc_4475_; 
v_reuseFailAlloc_4475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4475_, 0, v___x_4472_);
v___x_4474_ = v_reuseFailAlloc_4475_;
goto v_reusejp_4473_;
}
v_reusejp_4473_:
{
return v___x_4474_;
}
}
else
{
lean_del_object(v___x_4465_);
v___y_4417_ = v___x_4470_;
v___y_4418_ = v___x_4469_;
v___y_4419_ = v___y_4456_;
v___y_4420_ = v___y_4457_;
v___y_4421_ = v___x_4467_;
v___y_4422_ = v_a_4463_;
v___y_4423_ = v___y_4458_;
v___y_4424_ = v___y_4413_;
v___y_4425_ = v___y_4414_;
goto v___jp_4416_;
}
}
}
}
v___jp_4477_:
{
lean_object* v___x_4486_; 
v___x_4486_ = l_Lean_Syntax_getTailPos_x3f(v___y_4484_, v___y_4483_);
lean_dec(v___y_4484_);
if (lean_obj_tag(v___x_4486_) == 0)
{
lean_inc(v___y_4485_);
v___y_4453_ = v___y_4478_;
v___y_4454_ = v___y_4479_;
v___y_4455_ = v___y_4481_;
v___y_4456_ = v___y_4480_;
v___y_4457_ = v___y_4482_;
v___y_4458_ = v___y_4483_;
v___y_4459_ = v___y_4485_;
v___y_4460_ = v___y_4485_;
goto v___jp_4452_;
}
else
{
lean_object* v_val_4487_; 
v_val_4487_ = lean_ctor_get(v___x_4486_, 0);
lean_inc(v_val_4487_);
lean_dec_ref_known(v___x_4486_, 1);
v___y_4453_ = v___y_4478_;
v___y_4454_ = v___y_4479_;
v___y_4455_ = v___y_4481_;
v___y_4456_ = v___y_4480_;
v___y_4457_ = v___y_4482_;
v___y_4458_ = v___y_4483_;
v___y_4459_ = v___y_4485_;
v___y_4460_ = v_val_4487_;
goto v___jp_4452_;
}
}
v___jp_4488_:
{
lean_object* v_ref_4496_; lean_object* v___x_4497_; 
v_ref_4496_ = l_Lean_replaceRef(v_ref_4407_, v___y_4493_);
v___x_4497_ = l_Lean_Syntax_getPos_x3f(v_ref_4496_, v___y_4494_);
if (lean_obj_tag(v___x_4497_) == 0)
{
lean_object* v___x_4498_; 
v___x_4498_ = lean_unsigned_to_nat(0u);
v___y_4478_ = v___y_4489_;
v___y_4479_ = v___y_4490_;
v___y_4480_ = v___y_4495_;
v___y_4481_ = v___y_4491_;
v___y_4482_ = v___y_4492_;
v___y_4483_ = v___y_4494_;
v___y_4484_ = v_ref_4496_;
v___y_4485_ = v___x_4498_;
goto v___jp_4477_;
}
else
{
lean_object* v_val_4499_; 
v_val_4499_ = lean_ctor_get(v___x_4497_, 0);
lean_inc(v_val_4499_);
lean_dec_ref_known(v___x_4497_, 1);
v___y_4478_ = v___y_4489_;
v___y_4479_ = v___y_4490_;
v___y_4480_ = v___y_4495_;
v___y_4481_ = v___y_4491_;
v___y_4482_ = v___y_4492_;
v___y_4483_ = v___y_4494_;
v___y_4484_ = v_ref_4496_;
v___y_4485_ = v_val_4499_;
goto v___jp_4477_;
}
}
v___jp_4501_:
{
if (v___y_4508_ == 0)
{
v___y_4489_ = v___y_4502_;
v___y_4490_ = v___y_4503_;
v___y_4491_ = v___y_4504_;
v___y_4492_ = v___y_4505_;
v___y_4493_ = v___y_4506_;
v___y_4494_ = v___y_4507_;
v___y_4495_ = v_severity_4409_;
goto v___jp_4488_;
}
else
{
v___y_4489_ = v___y_4502_;
v___y_4490_ = v___y_4503_;
v___y_4491_ = v___y_4504_;
v___y_4492_ = v___y_4505_;
v___y_4493_ = v___y_4506_;
v___y_4494_ = v___y_4507_;
v___y_4495_ = v___x_4500_;
goto v___jp_4488_;
}
}
v___jp_4509_:
{
if (v___y_4510_ == 0)
{
lean_object* v_fileName_4511_; lean_object* v_fileMap_4512_; lean_object* v_options_4513_; lean_object* v_ref_4514_; uint8_t v_suppressElabErrors_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___f_4518_; uint8_t v___x_4519_; uint8_t v___x_4520_; 
v_fileName_4511_ = lean_ctor_get(v___y_4413_, 0);
v_fileMap_4512_ = lean_ctor_get(v___y_4413_, 1);
v_options_4513_ = lean_ctor_get(v___y_4413_, 2);
v_ref_4514_ = lean_ctor_get(v___y_4413_, 5);
v_suppressElabErrors_4515_ = lean_ctor_get_uint8(v___y_4413_, sizeof(void*)*14 + 1);
v___x_4516_ = lean_box(v___y_4510_);
v___x_4517_ = lean_box(v_suppressElabErrors_4515_);
v___f_4518_ = lean_alloc_closure((void*)(l_Lean_logAt___at___00Lean_log___at___00Lean_logWarning___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig_spec__0_spec__0_spec__1___lam__0___boxed), 3, 2);
lean_closure_set(v___f_4518_, 0, v___x_4516_);
lean_closure_set(v___f_4518_, 1, v___x_4517_);
v___x_4519_ = 1;
v___x_4520_ = l_Lean_instBEqMessageSeverity_beq(v_severity_4409_, v___x_4519_);
if (v___x_4520_ == 0)
{
v___y_4502_ = v___f_4518_;
v___y_4503_ = v_fileMap_4512_;
v___y_4504_ = v_suppressElabErrors_4515_;
v___y_4505_ = v_fileName_4511_;
v___y_4506_ = v_ref_4514_;
v___y_4507_ = v___y_4510_;
v___y_4508_ = v___x_4520_;
goto v___jp_4501_;
}
else
{
lean_object* v___x_4521_; uint8_t v___x_4522_; 
v___x_4521_ = l_Lean_warningAsError;
v___x_4522_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_4513_, v___x_4521_);
v___y_4502_ = v___f_4518_;
v___y_4503_ = v_fileMap_4512_;
v___y_4504_ = v_suppressElabErrors_4515_;
v___y_4505_ = v_fileName_4511_;
v___y_4506_ = v_ref_4514_;
v___y_4507_ = v___y_4510_;
v___y_4508_ = v___x_4522_;
goto v___jp_4501_;
}
}
else
{
lean_object* v___x_4523_; lean_object* v___x_4524_; 
lean_dec_ref(v_msgData_4408_);
v___x_4523_ = lean_box(0);
v___x_4524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4524_, 0, v___x_4523_);
return v___x_4524_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg___boxed(lean_object* v_ref_4527_, lean_object* v_msgData_4528_, lean_object* v_severity_4529_, lean_object* v_isSilent_4530_, lean_object* v___y_4531_, lean_object* v___y_4532_, lean_object* v___y_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_){
_start:
{
uint8_t v_severity_boxed_4536_; uint8_t v_isSilent_boxed_4537_; lean_object* v_res_4538_; 
v_severity_boxed_4536_ = lean_unbox(v_severity_4529_);
v_isSilent_boxed_4537_ = lean_unbox(v_isSilent_4530_);
v_res_4538_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4527_, v_msgData_4528_, v_severity_boxed_4536_, v_isSilent_boxed_4537_, v___y_4531_, v___y_4532_, v___y_4533_, v___y_4534_);
lean_dec(v___y_4534_);
lean_dec_ref(v___y_4533_);
lean_dec(v___y_4532_);
lean_dec_ref(v___y_4531_);
lean_dec(v_ref_4527_);
return v_res_4538_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(lean_object* v_ref_4539_, lean_object* v_msgData_4540_, lean_object* v___y_4541_, lean_object* v___y_4542_, lean_object* v___y_4543_, lean_object* v___y_4544_, lean_object* v___y_4545_, lean_object* v___y_4546_){
_start:
{
uint8_t v___x_4548_; uint8_t v___x_4549_; lean_object* v___x_4550_; 
v___x_4548_ = 1;
v___x_4549_ = 0;
v___x_4550_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4539_, v_msgData_4540_, v___x_4548_, v___x_4549_, v___y_4543_, v___y_4544_, v___y_4545_, v___y_4546_);
return v___x_4550_;
}
}
LEAN_EXPORT lean_object* l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0___boxed(lean_object* v_ref_4551_, lean_object* v_msgData_4552_, lean_object* v___y_4553_, lean_object* v___y_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_){
_start:
{
lean_object* v_res_4560_; 
v_res_4560_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(v_ref_4551_, v_msgData_4552_, v___y_4553_, v___y_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_);
lean_dec(v___y_4558_);
lean_dec_ref(v___y_4557_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
lean_dec(v___y_4554_);
lean_dec_ref(v___y_4553_);
lean_dec(v_ref_4551_);
return v_res_4560_;
}
}
static lean_object* _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4568_; lean_object* v___x_4569_; 
v___x_4568_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__2));
v___x_4569_ = l_Lean_MessageData_ofFormat(v___x_4568_);
return v___x_4569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(lean_object* v_stx_4570_, lean_object* v_goal_4571_, lean_object* v___y_4572_, lean_object* v___y_4573_, lean_object* v___y_4574_, lean_object* v___y_4575_, lean_object* v___y_4576_, lean_object* v___y_4577_){
_start:
{
lean_object* v___y_4580_; lean_object* v___y_4581_; lean_object* v___y_4582_; lean_object* v___y_4583_; uint8_t v___y_4584_; lean_object* v___y_4585_; lean_object* v___y_4586_; uint8_t v___y_4587_; lean_object* v___y_4588_; lean_object* v___y_4589_; lean_object* v___y_4590_; uint8_t v___y_4591_; lean_object* v___y_4592_; lean_object* v___y_4593_; lean_object* v___y_4594_; lean_object* v___y_4595_; lean_object* v___y_4596_; lean_object* v___y_4597_; lean_object* v___y_4598_; lean_object* v___y_4599_; lean_object* v___y_4600_; uint8_t v___y_4601_; uint8_t v___y_4602_; lean_object* v___y_4603_; lean_object* v___y_4604_; lean_object* v___y_4605_; lean_object* v___y_4606_; lean_object* v___y_4611_; lean_object* v___y_4612_; lean_object* v___y_4613_; lean_object* v_untilPat_x3f_4614_; lean_object* v___y_4615_; lean_object* v___y_4616_; lean_object* v___y_4617_; lean_object* v___y_4618_; lean_object* v___y_4619_; lean_object* v___y_4620_; lean_object* v___y_4690_; lean_object* v___y_4691_; lean_object* v___y_4692_; lean_object* v___y_4693_; lean_object* v___y_4694_; lean_object* v___y_4695_; lean_object* v_options_4751_; lean_object* v___x_4752_; uint8_t v___x_4753_; 
v_options_4751_ = lean_ctor_get(v___y_4576_, 2);
v___x_4752_ = l_Lean_Elab_Tactic_Do_mvcgen_warning;
v___x_4753_ = l_Lean_Option_get___at___00Lean_Elab_addMacroStack___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__1_spec__2_spec__5(v_options_4751_, v___x_4752_);
if (v___x_4753_ == 0)
{
v___y_4690_ = v___y_4572_;
v___y_4691_ = v___y_4573_;
v___y_4692_ = v___y_4574_;
v___y_4693_ = v___y_4575_;
v___y_4694_ = v___y_4576_;
v___y_4695_ = v___y_4577_;
goto v___jp_4689_;
}
else
{
lean_object* v___x_4754_; lean_object* v___x_4755_; 
v___x_4754_ = lean_obj_once(&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3, &l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3_once, _init_l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__3);
v___x_4755_ = l_Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0(v_stx_4570_, v___x_4754_, v___y_4572_, v___y_4573_, v___y_4574_, v___y_4575_, v___y_4576_, v___y_4577_);
if (lean_obj_tag(v___x_4755_) == 0)
{
lean_dec_ref_known(v___x_4755_, 1);
v___y_4690_ = v___y_4572_;
v___y_4691_ = v___y_4573_;
v___y_4692_ = v___y_4574_;
v___y_4693_ = v___y_4575_;
v___y_4694_ = v___y_4576_;
v___y_4695_ = v___y_4577_;
goto v___jp_4689_;
}
else
{
lean_object* v_a_4756_; lean_object* v___x_4758_; uint8_t v_isShared_4759_; uint8_t v_isSharedCheck_4763_; 
lean_dec(v_goal_4571_);
v_a_4756_ = lean_ctor_get(v___x_4755_, 0);
v_isSharedCheck_4763_ = !lean_is_exclusive(v___x_4755_);
if (v_isSharedCheck_4763_ == 0)
{
v___x_4758_ = v___x_4755_;
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
else
{
lean_inc(v_a_4756_);
lean_dec(v___x_4755_);
v___x_4758_ = lean_box(0);
v_isShared_4759_ = v_isSharedCheck_4763_;
goto v_resetjp_4757_;
}
v_resetjp_4757_:
{
lean_object* v___x_4761_; 
if (v_isShared_4759_ == 0)
{
v___x_4761_ = v___x_4758_;
goto v_reusejp_4760_;
}
else
{
lean_object* v_reuseFailAlloc_4762_; 
v_reuseFailAlloc_4762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4762_, 0, v_a_4756_);
v___x_4761_ = v_reuseFailAlloc_4762_;
goto v_reusejp_4760_;
}
v_reusejp_4760_:
{
return v___x_4761_;
}
}
}
}
v___jp_4579_:
{
lean_object* v___x_4607_; lean_object* v___x_4608_; lean_object* v___x_4609_; 
v___x_4607_ = lean_alloc_ctor(0, 19, 5);
lean_ctor_set(v___x_4607_, 0, v___y_4589_);
lean_ctor_set(v___x_4607_, 1, v___y_4604_);
lean_ctor_set(v___x_4607_, 2, v___y_4585_);
lean_ctor_set(v___x_4607_, 3, v___y_4600_);
lean_ctor_set(v___x_4607_, 4, v___y_4586_);
lean_ctor_set(v___x_4607_, 5, v___y_4596_);
lean_ctor_set(v___x_4607_, 6, v___y_4594_);
lean_ctor_set(v___x_4607_, 7, v___y_4603_);
lean_ctor_set(v___x_4607_, 8, v___y_4599_);
lean_ctor_set(v___x_4607_, 9, v___y_4597_);
lean_ctor_set(v___x_4607_, 10, v___y_4581_);
lean_ctor_set(v___x_4607_, 11, v___y_4583_);
lean_ctor_set(v___x_4607_, 12, v___y_4598_);
lean_ctor_set(v___x_4607_, 13, v___y_4605_);
lean_ctor_set(v___x_4607_, 14, v___y_4593_);
lean_ctor_set(v___x_4607_, 15, v___y_4595_);
lean_ctor_set(v___x_4607_, 16, v___y_4582_);
lean_ctor_set(v___x_4607_, 17, v___y_4606_);
lean_ctor_set(v___x_4607_, 18, v___y_4580_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*19, v___y_4587_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*19 + 1, v___y_4591_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*19 + 2, v___y_4584_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*19 + 3, v___y_4601_);
lean_ctor_set_uint8(v___x_4607_, sizeof(void*)*19 + 4, v___y_4602_);
v___x_4608_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_4608_, 0, v___y_4590_);
lean_ctor_set(v___x_4608_, 1, v___x_4607_);
lean_ctor_set(v___x_4608_, 2, v___y_4592_);
lean_ctor_set(v___x_4608_, 3, v___y_4588_);
v___x_4609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4609_, 0, v___x_4608_);
return v___x_4609_;
}
v___jp_4610_:
{
lean_object* v___x_4621_; lean_object* v___x_4622_; lean_object* v___x_4623_; 
v___x_4621_ = lean_unsigned_to_nat(5u);
v___x_4622_ = l_Lean_Syntax_getArg(v_stx_4570_, v___x_4621_);
v___x_4623_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabSimplifyingAssumptions(v___x_4622_, v___y_4617_, v___y_4618_, v___y_4619_, v___y_4620_);
lean_dec(v___x_4622_);
if (lean_obj_tag(v___x_4623_) == 0)
{
lean_object* v_a_4624_; lean_object* v___x_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; 
v_a_4624_ = lean_ctor_get(v___x_4623_, 0);
lean_inc(v_a_4624_);
lean_dec_ref_known(v___x_4623_, 1);
v___x_4625_ = lean_unsigned_to_nat(4u);
v___x_4626_ = l_Lean_Syntax_getArg(v_stx_4570_, v___x_4625_);
v___x_4627_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseInvariantMap(v___x_4626_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_, v___y_4620_);
lean_dec(v___x_4626_);
if (lean_obj_tag(v___x_4627_) == 0)
{
lean_object* v_a_4628_; 
v_a_4628_ = lean_ctor_get(v___x_4627_, 0);
lean_inc(v_a_4628_);
lean_dec_ref_known(v___x_4627_, 1);
if (lean_obj_tag(v_a_4628_) == 0)
{
lean_object* v_entailsConsIntroRule_4629_; lean_object* v_entailsNilPureIntroRule_4630_; lean_object* v_entailsNilIntroRule_4631_; lean_object* v_applyPureConsEntailsLRule_4632_; lean_object* v_applyPureConsEntailsRRule_4633_; lean_object* v_downPureIntroRule_4634_; lean_object* v_pureElimRule_4635_; lean_object* v_pureIntroRule_4636_; lean_object* v_postCondEntailsRflRule_4637_; lean_object* v_postCondEntailsMkRule_4638_; lean_object* v_exceptCondsEntailsRflRule_4639_; lean_object* v_exceptCondsEntailsPureRule_4640_; lean_object* v_exceptCondsEntailsFalseRule_4641_; lean_object* v_exceptCondsEntailsTrueRule_4642_; lean_object* v_tripleOfEntailsWPRule_4643_; lean_object* v_andIntroRule_4644_; uint8_t v_trivial_4645_; uint8_t v_jp_4646_; uint8_t v_errorOnMissingSpec_4647_; uint8_t v_debug_4648_; uint8_t v_internalize_4649_; lean_object* v___x_4650_; 
v_entailsConsIntroRule_4629_ = lean_ctor_get(v___y_4613_, 0);
lean_inc_ref(v_entailsConsIntroRule_4629_);
v_entailsNilPureIntroRule_4630_ = lean_ctor_get(v___y_4613_, 1);
lean_inc_ref(v_entailsNilPureIntroRule_4630_);
v_entailsNilIntroRule_4631_ = lean_ctor_get(v___y_4613_, 2);
lean_inc_ref(v_entailsNilIntroRule_4631_);
v_applyPureConsEntailsLRule_4632_ = lean_ctor_get(v___y_4613_, 3);
lean_inc_ref(v_applyPureConsEntailsLRule_4632_);
v_applyPureConsEntailsRRule_4633_ = lean_ctor_get(v___y_4613_, 4);
lean_inc_ref(v_applyPureConsEntailsRRule_4633_);
v_downPureIntroRule_4634_ = lean_ctor_get(v___y_4613_, 5);
lean_inc_ref(v_downPureIntroRule_4634_);
v_pureElimRule_4635_ = lean_ctor_get(v___y_4613_, 6);
lean_inc_ref(v_pureElimRule_4635_);
v_pureIntroRule_4636_ = lean_ctor_get(v___y_4613_, 7);
lean_inc_ref(v_pureIntroRule_4636_);
v_postCondEntailsRflRule_4637_ = lean_ctor_get(v___y_4613_, 8);
lean_inc_ref(v_postCondEntailsRflRule_4637_);
v_postCondEntailsMkRule_4638_ = lean_ctor_get(v___y_4613_, 9);
lean_inc_ref(v_postCondEntailsMkRule_4638_);
v_exceptCondsEntailsRflRule_4639_ = lean_ctor_get(v___y_4613_, 10);
lean_inc_ref(v_exceptCondsEntailsRflRule_4639_);
v_exceptCondsEntailsPureRule_4640_ = lean_ctor_get(v___y_4613_, 11);
lean_inc_ref(v_exceptCondsEntailsPureRule_4640_);
v_exceptCondsEntailsFalseRule_4641_ = lean_ctor_get(v___y_4613_, 12);
lean_inc_ref(v_exceptCondsEntailsFalseRule_4641_);
v_exceptCondsEntailsTrueRule_4642_ = lean_ctor_get(v___y_4613_, 13);
lean_inc_ref(v_exceptCondsEntailsTrueRule_4642_);
v_tripleOfEntailsWPRule_4643_ = lean_ctor_get(v___y_4613_, 14);
lean_inc_ref(v_tripleOfEntailsWPRule_4643_);
v_andIntroRule_4644_ = lean_ctor_get(v___y_4613_, 15);
lean_inc_ref(v_andIntroRule_4644_);
lean_dec_ref(v___y_4613_);
v_trivial_4645_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1);
v_jp_4646_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_4647_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 4);
v_debug_4648_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 5);
v_internalize_4649_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 6);
v___x_4650_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__41);
v___y_4580_ = v_untilPat_x3f_4614_;
v___y_4581_ = v_exceptCondsEntailsRflRule_4639_;
v___y_4582_ = v_a_4624_;
v___y_4583_ = v_exceptCondsEntailsPureRule_4640_;
v___y_4584_ = v_errorOnMissingSpec_4647_;
v___y_4585_ = v_entailsNilIntroRule_4631_;
v___y_4586_ = v_applyPureConsEntailsRRule_4633_;
v___y_4587_ = v_trivial_4645_;
v___y_4588_ = v_a_4628_;
v___y_4589_ = v_entailsConsIntroRule_4629_;
v___y_4590_ = v___y_4611_;
v___y_4591_ = v_jp_4646_;
v___y_4592_ = v___y_4612_;
v___y_4593_ = v_tripleOfEntailsWPRule_4643_;
v___y_4594_ = v_pureElimRule_4635_;
v___y_4595_ = v_andIntroRule_4644_;
v___y_4596_ = v_downPureIntroRule_4634_;
v___y_4597_ = v_postCondEntailsMkRule_4638_;
v___y_4598_ = v_exceptCondsEntailsFalseRule_4641_;
v___y_4599_ = v_postCondEntailsRflRule_4637_;
v___y_4600_ = v_applyPureConsEntailsLRule_4632_;
v___y_4601_ = v_debug_4648_;
v___y_4602_ = v_internalize_4649_;
v___y_4603_ = v_pureIntroRule_4636_;
v___y_4604_ = v_entailsNilPureIntroRule_4630_;
v___y_4605_ = v_exceptCondsEntailsTrueRule_4642_;
v___y_4606_ = v___x_4650_;
goto v___jp_4579_;
}
else
{
lean_object* v_entailsConsIntroRule_4651_; lean_object* v_entailsNilPureIntroRule_4652_; lean_object* v_entailsNilIntroRule_4653_; lean_object* v_applyPureConsEntailsLRule_4654_; lean_object* v_applyPureConsEntailsRRule_4655_; lean_object* v_downPureIntroRule_4656_; lean_object* v_pureElimRule_4657_; lean_object* v_pureIntroRule_4658_; lean_object* v_postCondEntailsRflRule_4659_; lean_object* v_postCondEntailsMkRule_4660_; lean_object* v_exceptCondsEntailsRflRule_4661_; lean_object* v_exceptCondsEntailsPureRule_4662_; lean_object* v_exceptCondsEntailsFalseRule_4663_; lean_object* v_exceptCondsEntailsTrueRule_4664_; lean_object* v_tripleOfEntailsWPRule_4665_; lean_object* v_andIntroRule_4666_; uint8_t v_trivial_4667_; uint8_t v_jp_4668_; uint8_t v_errorOnMissingSpec_4669_; uint8_t v_debug_4670_; uint8_t v_internalize_4671_; lean_object* v_val_4672_; 
v_entailsConsIntroRule_4651_ = lean_ctor_get(v___y_4613_, 0);
lean_inc_ref(v_entailsConsIntroRule_4651_);
v_entailsNilPureIntroRule_4652_ = lean_ctor_get(v___y_4613_, 1);
lean_inc_ref(v_entailsNilPureIntroRule_4652_);
v_entailsNilIntroRule_4653_ = lean_ctor_get(v___y_4613_, 2);
lean_inc_ref(v_entailsNilIntroRule_4653_);
v_applyPureConsEntailsLRule_4654_ = lean_ctor_get(v___y_4613_, 3);
lean_inc_ref(v_applyPureConsEntailsLRule_4654_);
v_applyPureConsEntailsRRule_4655_ = lean_ctor_get(v___y_4613_, 4);
lean_inc_ref(v_applyPureConsEntailsRRule_4655_);
v_downPureIntroRule_4656_ = lean_ctor_get(v___y_4613_, 5);
lean_inc_ref(v_downPureIntroRule_4656_);
v_pureElimRule_4657_ = lean_ctor_get(v___y_4613_, 6);
lean_inc_ref(v_pureElimRule_4657_);
v_pureIntroRule_4658_ = lean_ctor_get(v___y_4613_, 7);
lean_inc_ref(v_pureIntroRule_4658_);
v_postCondEntailsRflRule_4659_ = lean_ctor_get(v___y_4613_, 8);
lean_inc_ref(v_postCondEntailsRflRule_4659_);
v_postCondEntailsMkRule_4660_ = lean_ctor_get(v___y_4613_, 9);
lean_inc_ref(v_postCondEntailsMkRule_4660_);
v_exceptCondsEntailsRflRule_4661_ = lean_ctor_get(v___y_4613_, 10);
lean_inc_ref(v_exceptCondsEntailsRflRule_4661_);
v_exceptCondsEntailsPureRule_4662_ = lean_ctor_get(v___y_4613_, 11);
lean_inc_ref(v_exceptCondsEntailsPureRule_4662_);
v_exceptCondsEntailsFalseRule_4663_ = lean_ctor_get(v___y_4613_, 12);
lean_inc_ref(v_exceptCondsEntailsFalseRule_4663_);
v_exceptCondsEntailsTrueRule_4664_ = lean_ctor_get(v___y_4613_, 13);
lean_inc_ref(v_exceptCondsEntailsTrueRule_4664_);
v_tripleOfEntailsWPRule_4665_ = lean_ctor_get(v___y_4613_, 14);
lean_inc_ref(v_tripleOfEntailsWPRule_4665_);
v_andIntroRule_4666_ = lean_ctor_get(v___y_4613_, 15);
lean_inc_ref(v_andIntroRule_4666_);
lean_dec_ref(v___y_4613_);
v_trivial_4667_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1);
v_jp_4668_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 3);
v_errorOnMissingSpec_4669_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 4);
v_debug_4670_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 5);
v_internalize_4671_ = lean_ctor_get_uint8(v___y_4611_, sizeof(void*)*1 + 6);
v_val_4672_ = lean_ctor_get(v_a_4628_, 0);
lean_inc(v_val_4672_);
v___y_4580_ = v_untilPat_x3f_4614_;
v___y_4581_ = v_exceptCondsEntailsRflRule_4661_;
v___y_4582_ = v_a_4624_;
v___y_4583_ = v_exceptCondsEntailsPureRule_4662_;
v___y_4584_ = v_errorOnMissingSpec_4669_;
v___y_4585_ = v_entailsNilIntroRule_4653_;
v___y_4586_ = v_applyPureConsEntailsRRule_4655_;
v___y_4587_ = v_trivial_4667_;
v___y_4588_ = v_a_4628_;
v___y_4589_ = v_entailsConsIntroRule_4651_;
v___y_4590_ = v___y_4611_;
v___y_4591_ = v_jp_4668_;
v___y_4592_ = v___y_4612_;
v___y_4593_ = v_tripleOfEntailsWPRule_4665_;
v___y_4594_ = v_pureElimRule_4657_;
v___y_4595_ = v_andIntroRule_4666_;
v___y_4596_ = v_downPureIntroRule_4656_;
v___y_4597_ = v_postCondEntailsMkRule_4660_;
v___y_4598_ = v_exceptCondsEntailsFalseRule_4663_;
v___y_4599_ = v_postCondEntailsRflRule_4659_;
v___y_4600_ = v_applyPureConsEntailsLRule_4654_;
v___y_4601_ = v_debug_4670_;
v___y_4602_ = v_internalize_4671_;
v___y_4603_ = v_pureIntroRule_4658_;
v___y_4604_ = v_entailsNilPureIntroRule_4652_;
v___y_4605_ = v_exceptCondsEntailsTrueRule_4664_;
v___y_4606_ = v_val_4672_;
goto v___jp_4579_;
}
}
else
{
lean_object* v_a_4673_; lean_object* v___x_4675_; uint8_t v_isShared_4676_; uint8_t v_isSharedCheck_4680_; 
lean_dec(v_a_4624_);
lean_dec(v_untilPat_x3f_4614_);
lean_dec_ref(v___y_4613_);
lean_dec_ref(v___y_4612_);
lean_dec_ref(v___y_4611_);
v_a_4673_ = lean_ctor_get(v___x_4627_, 0);
v_isSharedCheck_4680_ = !lean_is_exclusive(v___x_4627_);
if (v_isSharedCheck_4680_ == 0)
{
v___x_4675_ = v___x_4627_;
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
else
{
lean_inc(v_a_4673_);
lean_dec(v___x_4627_);
v___x_4675_ = lean_box(0);
v_isShared_4676_ = v_isSharedCheck_4680_;
goto v_resetjp_4674_;
}
v_resetjp_4674_:
{
lean_object* v___x_4678_; 
if (v_isShared_4676_ == 0)
{
v___x_4678_ = v___x_4675_;
goto v_reusejp_4677_;
}
else
{
lean_object* v_reuseFailAlloc_4679_; 
v_reuseFailAlloc_4679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4679_, 0, v_a_4673_);
v___x_4678_ = v_reuseFailAlloc_4679_;
goto v_reusejp_4677_;
}
v_reusejp_4677_:
{
return v___x_4678_;
}
}
}
}
else
{
lean_object* v_a_4681_; lean_object* v___x_4683_; uint8_t v_isShared_4684_; uint8_t v_isSharedCheck_4688_; 
lean_dec(v_untilPat_x3f_4614_);
lean_dec_ref(v___y_4613_);
lean_dec_ref(v___y_4612_);
lean_dec_ref(v___y_4611_);
v_a_4681_ = lean_ctor_get(v___x_4623_, 0);
v_isSharedCheck_4688_ = !lean_is_exclusive(v___x_4623_);
if (v_isSharedCheck_4688_ == 0)
{
v___x_4683_ = v___x_4623_;
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
else
{
lean_inc(v_a_4681_);
lean_dec(v___x_4623_);
v___x_4683_ = lean_box(0);
v_isShared_4684_ = v_isSharedCheck_4688_;
goto v_resetjp_4682_;
}
v_resetjp_4682_:
{
lean_object* v___x_4686_; 
if (v_isShared_4684_ == 0)
{
v___x_4686_ = v___x_4683_;
goto v_reusejp_4685_;
}
else
{
lean_object* v_reuseFailAlloc_4687_; 
v_reuseFailAlloc_4687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4687_, 0, v_a_4681_);
v___x_4686_ = v_reuseFailAlloc_4687_;
goto v_reusejp_4685_;
}
v_reusejp_4685_:
{
return v___x_4686_;
}
}
}
}
v___jp_4689_:
{
lean_object* v___x_4696_; lean_object* v___x_4697_; uint8_t v___x_4698_; uint8_t v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; 
v___x_4696_ = lean_unsigned_to_nat(1u);
v___x_4697_ = l_Lean_Syntax_getArg(v_stx_4570_, v___x_4696_);
v___x_4698_ = 1;
v___x_4699_ = 0;
v___x_4700_ = lean_box(0);
v___x_4701_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___closed__0));
v___x_4702_ = lean_box(v___x_4698_);
v___x_4703_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabConfig___boxed), 12, 3);
lean_closure_set(v___x_4703_, 0, v___x_4697_);
lean_closure_set(v___x_4703_, 1, v___x_4701_);
lean_closure_set(v___x_4703_, 2, v___x_4702_);
v___x_4704_ = lean_box(0);
v___x_4705_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_4703_, v___x_4704_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; lean_object* v___x_4707_; 
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___x_4705_, 1);
v___x_4707_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_warnIgnoredConfig(v_a_4706_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_);
if (lean_obj_tag(v___x_4707_) == 0)
{
lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; 
lean_dec_ref_known(v___x_4707_, 1);
v___x_4708_ = lean_unsigned_to_nat(2u);
v___x_4709_ = l_Lean_Syntax_getArg(v_stx_4570_, v___x_4708_);
v___x_4710_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext(v___x_4709_, v_goal_4571_, v___x_4699_, v___y_4690_, v___y_4691_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_);
lean_dec(v___x_4709_);
if (lean_obj_tag(v___x_4710_) == 0)
{
lean_object* v_a_4711_; lean_object* v_fst_4712_; lean_object* v_snd_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; uint8_t v___x_4716_; 
v_a_4711_ = lean_ctor_get(v___x_4710_, 0);
lean_inc(v_a_4711_);
lean_dec_ref_known(v___x_4710_, 1);
v_fst_4712_ = lean_ctor_get(v_a_4711_, 0);
lean_inc(v_fst_4712_);
v_snd_4713_ = lean_ctor_get(v_a_4711_, 1);
lean_inc(v_snd_4713_);
lean_dec(v_a_4711_);
v___x_4714_ = lean_unsigned_to_nat(3u);
v___x_4715_ = l_Lean_Syntax_getArg(v_stx_4570_, v___x_4714_);
v___x_4716_ = l_Lean_Syntax_isNone(v___x_4715_);
if (v___x_4716_ == 0)
{
lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v_a_4719_; lean_object* v___x_4721_; uint8_t v_isShared_4722_; uint8_t v_isSharedCheck_4726_; 
v___x_4717_ = l_Lean_Syntax_getArg(v___x_4715_, v___x_4696_);
lean_dec(v___x_4715_);
v___x_4718_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg(v___x_4717_, v___y_4692_);
v_a_4719_ = lean_ctor_get(v___x_4718_, 0);
v_isSharedCheck_4726_ = !lean_is_exclusive(v___x_4718_);
if (v_isSharedCheck_4726_ == 0)
{
v___x_4721_ = v___x_4718_;
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
else
{
lean_inc(v_a_4719_);
lean_dec(v___x_4718_);
v___x_4721_ = lean_box(0);
v_isShared_4722_ = v_isSharedCheck_4726_;
goto v_resetjp_4720_;
}
v_resetjp_4720_:
{
lean_object* v___x_4724_; 
if (v_isShared_4722_ == 0)
{
lean_ctor_set_tag(v___x_4721_, 1);
v___x_4724_ = v___x_4721_;
goto v_reusejp_4723_;
}
else
{
lean_object* v_reuseFailAlloc_4725_; 
v_reuseFailAlloc_4725_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4725_, 0, v_a_4719_);
v___x_4724_ = v_reuseFailAlloc_4725_;
goto v_reusejp_4723_;
}
v_reusejp_4723_:
{
v___y_4611_ = v_a_4706_;
v___y_4612_ = v_snd_4713_;
v___y_4613_ = v_fst_4712_;
v_untilPat_x3f_4614_ = v___x_4724_;
v___y_4615_ = v___y_4690_;
v___y_4616_ = v___y_4691_;
v___y_4617_ = v___y_4692_;
v___y_4618_ = v___y_4693_;
v___y_4619_ = v___y_4694_;
v___y_4620_ = v___y_4695_;
goto v___jp_4610_;
}
}
}
else
{
lean_dec(v___x_4715_);
v___y_4611_ = v_a_4706_;
v___y_4612_ = v_snd_4713_;
v___y_4613_ = v_fst_4712_;
v_untilPat_x3f_4614_ = v___x_4700_;
v___y_4615_ = v___y_4690_;
v___y_4616_ = v___y_4691_;
v___y_4617_ = v___y_4692_;
v___y_4618_ = v___y_4693_;
v___y_4619_ = v___y_4694_;
v___y_4620_ = v___y_4695_;
goto v___jp_4610_;
}
}
else
{
lean_object* v_a_4727_; lean_object* v___x_4729_; uint8_t v_isShared_4730_; uint8_t v_isSharedCheck_4734_; 
lean_dec(v_a_4706_);
v_a_4727_ = lean_ctor_get(v___x_4710_, 0);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4710_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4729_ = v___x_4710_;
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
else
{
lean_inc(v_a_4727_);
lean_dec(v___x_4710_);
v___x_4729_ = lean_box(0);
v_isShared_4730_ = v_isSharedCheck_4734_;
goto v_resetjp_4728_;
}
v_resetjp_4728_:
{
lean_object* v___x_4732_; 
if (v_isShared_4730_ == 0)
{
v___x_4732_ = v___x_4729_;
goto v_reusejp_4731_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4733_, 0, v_a_4727_);
v___x_4732_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4731_;
}
v_reusejp_4731_:
{
return v___x_4732_;
}
}
}
}
else
{
lean_object* v_a_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4742_; 
lean_dec(v_a_4706_);
lean_dec(v_goal_4571_);
v_a_4735_ = lean_ctor_get(v___x_4707_, 0);
v_isSharedCheck_4742_ = !lean_is_exclusive(v___x_4707_);
if (v_isSharedCheck_4742_ == 0)
{
v___x_4737_ = v___x_4707_;
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_a_4735_);
lean_dec(v___x_4707_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4742_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v___x_4740_; 
if (v_isShared_4738_ == 0)
{
v___x_4740_ = v___x_4737_;
goto v_reusejp_4739_;
}
else
{
lean_object* v_reuseFailAlloc_4741_; 
v_reuseFailAlloc_4741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4741_, 0, v_a_4735_);
v___x_4740_ = v_reuseFailAlloc_4741_;
goto v_reusejp_4739_;
}
v_reusejp_4739_:
{
return v___x_4740_;
}
}
}
}
else
{
lean_object* v_a_4743_; lean_object* v___x_4745_; uint8_t v_isShared_4746_; uint8_t v_isSharedCheck_4750_; 
lean_dec(v_goal_4571_);
v_a_4743_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4750_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4750_ == 0)
{
v___x_4745_ = v___x_4705_;
v_isShared_4746_ = v_isSharedCheck_4750_;
goto v_resetjp_4744_;
}
else
{
lean_inc(v_a_4743_);
lean_dec(v___x_4705_);
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
v_reuseFailAlloc_4749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4749_, 0, v_a_4743_);
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
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed(lean_object* v_stx_4764_, lean_object* v_goal_4765_, lean_object* v___y_4766_, lean_object* v___y_4767_, lean_object* v___y_4768_, lean_object* v___y_4769_, lean_object* v___y_4770_, lean_object* v___y_4771_, lean_object* v___y_4772_){
_start:
{
lean_object* v_res_4773_; 
v_res_4773_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0(v_stx_4764_, v_goal_4765_, v___y_4766_, v___y_4767_, v___y_4768_, v___y_4769_, v___y_4770_, v___y_4771_);
lean_dec(v___y_4771_);
lean_dec_ref(v___y_4770_);
lean_dec(v___y_4769_);
lean_dec_ref(v___y_4768_);
lean_dec(v___y_4767_);
lean_dec_ref(v___y_4766_);
lean_dec(v_stx_4764_);
return v_res_4773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(lean_object* v_stx_4774_, lean_object* v_goal_4775_, lean_object* v_a_4776_, lean_object* v_a_4777_, lean_object* v_a_4778_, lean_object* v_a_4779_, lean_object* v_a_4780_, lean_object* v_a_4781_){
_start:
{
lean_object* v___f_4783_; lean_object* v___x_4784_; 
lean_inc(v_goal_4775_);
v___f_4783_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___lam__0___boxed), 9, 2);
lean_closure_set(v___f_4783_, 0, v_stx_4774_);
lean_closure_set(v___f_4783_, 1, v_goal_4775_);
v___x_4784_ = l_Lean_MVarId_withContext___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__1___redArg(v_goal_4775_, v___f_4783_, v_a_4776_, v_a_4777_, v_a_4778_, v_a_4779_, v_a_4780_, v_a_4781_);
return v___x_4784_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs___boxed(lean_object* v_stx_4785_, lean_object* v_goal_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_, lean_object* v_a_4793_){
_start:
{
lean_object* v_res_4794_; 
v_res_4794_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_4785_, v_goal_4786_, v_a_4787_, v_a_4788_, v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_);
lean_dec(v_a_4792_);
lean_dec_ref(v_a_4791_);
lean_dec(v_a_4790_);
lean_dec_ref(v_a_4789_);
lean_dec(v_a_4788_);
lean_dec_ref(v_a_4787_);
return v_res_4794_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(lean_object* v_ref_4795_, lean_object* v_msgData_4796_, uint8_t v_severity_4797_, uint8_t v_isSilent_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_){
_start:
{
lean_object* v___x_4806_; 
v___x_4806_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___redArg(v_ref_4795_, v_msgData_4796_, v_severity_4797_, v_isSilent_4798_, v___y_4801_, v___y_4802_, v___y_4803_, v___y_4804_);
return v___x_4806_;
}
}
LEAN_EXPORT lean_object* l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0___boxed(lean_object* v_ref_4807_, lean_object* v_msgData_4808_, lean_object* v_severity_4809_, lean_object* v_isSilent_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_, lean_object* v___y_4814_, lean_object* v___y_4815_, lean_object* v___y_4816_, lean_object* v___y_4817_){
_start:
{
uint8_t v_severity_boxed_4818_; uint8_t v_isSilent_boxed_4819_; lean_object* v_res_4820_; 
v_severity_boxed_4818_ = lean_unbox(v_severity_4809_);
v_isSilent_boxed_4819_ = lean_unbox(v_isSilent_4810_);
v_res_4820_ = l_Lean_logAt___at___00Lean_logWarningAt___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs_spec__0_spec__0(v_ref_4807_, v_msgData_4808_, v_severity_boxed_4818_, v_isSilent_boxed_4819_, v___y_4811_, v___y_4812_, v___y_4813_, v___y_4814_, v___y_4815_, v___y_4816_);
lean_dec(v___y_4816_);
lean_dec_ref(v___y_4815_);
lean_dec(v___y_4814_);
lean_dec_ref(v___y_4813_);
lean_dec(v___y_4812_);
lean_dec_ref(v___y_4811_);
lean_dec(v_ref_4807_);
return v_res_4820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(lean_object* v_a_4821_, lean_object* v_ctx_4822_, lean_object* v_scope_4823_, lean_object* v_stepLimit_4824_, lean_object* v_invariantAlts_x3f_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_, lean_object* v___y_4834_){
_start:
{
lean_object* v___x_4836_; 
v___x_4836_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_run(v_a_4821_, v_ctx_4822_, v_scope_4823_, v_stepLimit_4824_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4836_) == 0)
{
if (lean_obj_tag(v_invariantAlts_x3f_4825_) == 1)
{
lean_object* v_a_4837_; lean_object* v_val_4838_; lean_object* v_invariants_4839_; lean_object* v_inlineHandledInvariants_4840_; lean_object* v___x_4841_; 
v_a_4837_ = lean_ctor_get(v___x_4836_, 0);
lean_inc(v_a_4837_);
lean_dec_ref_known(v___x_4836_, 1);
v_val_4838_ = lean_ctor_get(v_invariantAlts_x3f_4825_, 0);
v_invariants_4839_ = lean_ctor_get(v_a_4837_, 0);
v_inlineHandledInvariants_4840_ = lean_ctor_get(v_a_4837_, 2);
lean_inc_ref(v_inlineHandledInvariants_4840_);
v___x_4841_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabRemainingInvariants(v_val_4838_, v_invariants_4839_, v_inlineHandledInvariants_4840_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_, v___y_4833_, v___y_4834_);
if (lean_obj_tag(v___x_4841_) == 0)
{
lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4848_; 
v_isSharedCheck_4848_ = !lean_is_exclusive(v___x_4841_);
if (v_isSharedCheck_4848_ == 0)
{
lean_object* v_unused_4849_; 
v_unused_4849_ = lean_ctor_get(v___x_4841_, 0);
lean_dec(v_unused_4849_);
v___x_4843_ = v___x_4841_;
v_isShared_4844_ = v_isSharedCheck_4848_;
goto v_resetjp_4842_;
}
else
{
lean_dec(v___x_4841_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4848_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4846_; 
if (v_isShared_4844_ == 0)
{
lean_ctor_set(v___x_4843_, 0, v_a_4837_);
v___x_4846_ = v___x_4843_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4847_; 
v_reuseFailAlloc_4847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4847_, 0, v_a_4837_);
v___x_4846_ = v_reuseFailAlloc_4847_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
return v___x_4846_;
}
}
}
else
{
lean_object* v_a_4850_; lean_object* v___x_4852_; uint8_t v_isShared_4853_; uint8_t v_isSharedCheck_4857_; 
lean_dec(v_a_4837_);
v_a_4850_ = lean_ctor_get(v___x_4841_, 0);
v_isSharedCheck_4857_ = !lean_is_exclusive(v___x_4841_);
if (v_isSharedCheck_4857_ == 0)
{
v___x_4852_ = v___x_4841_;
v_isShared_4853_ = v_isSharedCheck_4857_;
goto v_resetjp_4851_;
}
else
{
lean_inc(v_a_4850_);
lean_dec(v___x_4841_);
v___x_4852_ = lean_box(0);
v_isShared_4853_ = v_isSharedCheck_4857_;
goto v_resetjp_4851_;
}
v_resetjp_4851_:
{
lean_object* v___x_4855_; 
if (v_isShared_4853_ == 0)
{
v___x_4855_ = v___x_4852_;
goto v_reusejp_4854_;
}
else
{
lean_object* v_reuseFailAlloc_4856_; 
v_reuseFailAlloc_4856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4856_, 0, v_a_4850_);
v___x_4855_ = v_reuseFailAlloc_4856_;
goto v_reusejp_4854_;
}
v_reusejp_4854_:
{
return v___x_4855_;
}
}
}
}
else
{
return v___x_4836_;
}
}
else
{
return v___x_4836_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed(lean_object* v_a_4858_, lean_object* v_ctx_4859_, lean_object* v_scope_4860_, lean_object* v_stepLimit_4861_, lean_object* v_invariantAlts_x3f_4862_, lean_object* v___y_4863_, lean_object* v___y_4864_, lean_object* v___y_4865_, lean_object* v___y_4866_, lean_object* v___y_4867_, lean_object* v___y_4868_, lean_object* v___y_4869_, lean_object* v___y_4870_, lean_object* v___y_4871_, lean_object* v___y_4872_){
_start:
{
lean_object* v_res_4873_; 
v_res_4873_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0(v_a_4858_, v_ctx_4859_, v_scope_4860_, v_stepLimit_4861_, v_invariantAlts_x3f_4862_, v___y_4863_, v___y_4864_, v___y_4865_, v___y_4866_, v___y_4867_, v___y_4868_, v___y_4869_, v___y_4870_, v___y_4871_);
lean_dec(v___y_4871_);
lean_dec_ref(v___y_4870_);
lean_dec(v___y_4869_);
lean_dec_ref(v___y_4868_);
lean_dec(v___y_4867_);
lean_dec_ref(v___y_4866_);
lean_dec(v___y_4865_);
lean_dec_ref(v___y_4864_);
lean_dec(v___y_4863_);
lean_dec(v_invariantAlts_x3f_4862_);
lean_dec_ref(v_ctx_4859_);
return v_res_4873_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(lean_object* v_x_4874_, lean_object* v_x_4875_, lean_object* v___y_4876_, lean_object* v___y_4877_, lean_object* v___y_4878_, lean_object* v___y_4879_, lean_object* v___y_4880_, lean_object* v___y_4881_, lean_object* v___y_4882_, lean_object* v___y_4883_, lean_object* v___y_4884_){
_start:
{
if (lean_obj_tag(v_x_4874_) == 0)
{
lean_object* v___x_4886_; lean_object* v___x_4887_; 
v___x_4886_ = l_List_reverse___redArg(v_x_4875_);
v___x_4887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4887_, 0, v___x_4886_);
return v___x_4887_;
}
else
{
lean_object* v_head_4888_; lean_object* v_tail_4889_; lean_object* v___x_4891_; uint8_t v_isShared_4892_; uint8_t v_isSharedCheck_4907_; 
v_head_4888_ = lean_ctor_get(v_x_4874_, 0);
v_tail_4889_ = lean_ctor_get(v_x_4874_, 1);
v_isSharedCheck_4907_ = !lean_is_exclusive(v_x_4874_);
if (v_isSharedCheck_4907_ == 0)
{
v___x_4891_ = v_x_4874_;
v_isShared_4892_ = v_isSharedCheck_4907_;
goto v_resetjp_4890_;
}
else
{
lean_inc(v_tail_4889_);
lean_inc(v_head_4888_);
lean_dec(v_x_4874_);
v___x_4891_ = lean_box(0);
v_isShared_4892_ = v_isSharedCheck_4907_;
goto v_resetjp_4890_;
}
v_resetjp_4890_:
{
lean_object* v___x_4893_; 
v___x_4893_ = l_Lean_Meta_Grind_mkGoalCore(v_head_4888_, v___y_4876_, v___y_4877_, v___y_4878_, v___y_4879_, v___y_4880_, v___y_4881_, v___y_4882_, v___y_4883_, v___y_4884_);
if (lean_obj_tag(v___x_4893_) == 0)
{
lean_object* v_a_4894_; lean_object* v___x_4896_; 
v_a_4894_ = lean_ctor_get(v___x_4893_, 0);
lean_inc(v_a_4894_);
lean_dec_ref_known(v___x_4893_, 1);
if (v_isShared_4892_ == 0)
{
lean_ctor_set(v___x_4891_, 1, v_x_4875_);
lean_ctor_set(v___x_4891_, 0, v_a_4894_);
v___x_4896_ = v___x_4891_;
goto v_reusejp_4895_;
}
else
{
lean_object* v_reuseFailAlloc_4898_; 
v_reuseFailAlloc_4898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4898_, 0, v_a_4894_);
lean_ctor_set(v_reuseFailAlloc_4898_, 1, v_x_4875_);
v___x_4896_ = v_reuseFailAlloc_4898_;
goto v_reusejp_4895_;
}
v_reusejp_4895_:
{
v_x_4874_ = v_tail_4889_;
v_x_4875_ = v___x_4896_;
goto _start;
}
}
else
{
lean_object* v_a_4899_; lean_object* v___x_4901_; uint8_t v_isShared_4902_; uint8_t v_isSharedCheck_4906_; 
lean_del_object(v___x_4891_);
lean_dec(v_tail_4889_);
lean_dec(v_x_4875_);
v_a_4899_ = lean_ctor_get(v___x_4893_, 0);
v_isSharedCheck_4906_ = !lean_is_exclusive(v___x_4893_);
if (v_isSharedCheck_4906_ == 0)
{
v___x_4901_ = v___x_4893_;
v_isShared_4902_ = v_isSharedCheck_4906_;
goto v_resetjp_4900_;
}
else
{
lean_inc(v_a_4899_);
lean_dec(v___x_4893_);
v___x_4901_ = lean_box(0);
v_isShared_4902_ = v_isSharedCheck_4906_;
goto v_resetjp_4900_;
}
v_resetjp_4900_:
{
lean_object* v___x_4904_; 
if (v_isShared_4902_ == 0)
{
v___x_4904_ = v___x_4901_;
goto v_reusejp_4903_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v_a_4899_);
v___x_4904_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4903_;
}
v_reusejp_4903_:
{
return v___x_4904_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1___boxed(lean_object* v_x_4908_, lean_object* v_x_4909_, lean_object* v___y_4910_, lean_object* v___y_4911_, lean_object* v___y_4912_, lean_object* v___y_4913_, lean_object* v___y_4914_, lean_object* v___y_4915_, lean_object* v___y_4916_, lean_object* v___y_4917_, lean_object* v___y_4918_, lean_object* v___y_4919_){
_start:
{
lean_object* v_res_4920_; 
v_res_4920_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(v_x_4908_, v_x_4909_, v___y_4910_, v___y_4911_, v___y_4912_, v___y_4913_, v___y_4914_, v___y_4915_, v___y_4916_, v___y_4917_, v___y_4918_);
lean_dec(v___y_4918_);
lean_dec_ref(v___y_4917_);
lean_dec(v___y_4916_);
lean_dec_ref(v___y_4915_);
lean_dec(v___y_4914_);
lean_dec_ref(v___y_4913_);
lean_dec(v___y_4912_);
lean_dec_ref(v___y_4911_);
lean_dec(v___y_4910_);
return v_res_4920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(lean_object* v___x_4921_, lean_object* v___x_4922_, lean_object* v_a_4923_, lean_object* v___y_4924_, lean_object* v___y_4925_, lean_object* v___y_4926_, lean_object* v___y_4927_, lean_object* v___y_4928_, lean_object* v___y_4929_, lean_object* v___y_4930_, lean_object* v___y_4931_, lean_object* v___y_4932_){
_start:
{
lean_object* v___x_4934_; 
v___x_4934_ = l_List_mapM_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__1(v___x_4921_, v___x_4922_, v___y_4924_, v___y_4925_, v___y_4926_, v___y_4927_, v___y_4928_, v___y_4929_, v___y_4930_, v___y_4931_, v___y_4932_);
if (lean_obj_tag(v___x_4934_) == 0)
{
lean_object* v_a_4935_; lean_object* v___x_4937_; uint8_t v_isShared_4938_; uint8_t v_isSharedCheck_4945_; 
v_a_4935_ = lean_ctor_get(v___x_4934_, 0);
v_isSharedCheck_4945_ = !lean_is_exclusive(v___x_4934_);
if (v_isSharedCheck_4945_ == 0)
{
v___x_4937_ = v___x_4934_;
v_isShared_4938_ = v_isSharedCheck_4945_;
goto v_resetjp_4936_;
}
else
{
lean_inc(v_a_4935_);
lean_dec(v___x_4934_);
v___x_4937_ = lean_box(0);
v_isShared_4938_ = v_isSharedCheck_4945_;
goto v_resetjp_4936_;
}
v_resetjp_4936_:
{
lean_object* v_vcs_4939_; lean_object* v___x_4940_; lean_object* v___x_4941_; lean_object* v___x_4943_; 
v_vcs_4939_ = lean_ctor_get(v_a_4923_, 1);
lean_inc_ref(v_vcs_4939_);
lean_dec_ref(v_a_4923_);
v___x_4940_ = lean_array_to_list(v_vcs_4939_);
v___x_4941_ = l_List_appendTR___redArg(v_a_4935_, v___x_4940_);
if (v_isShared_4938_ == 0)
{
lean_ctor_set(v___x_4937_, 0, v___x_4941_);
v___x_4943_ = v___x_4937_;
goto v_reusejp_4942_;
}
else
{
lean_object* v_reuseFailAlloc_4944_; 
v_reuseFailAlloc_4944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4944_, 0, v___x_4941_);
v___x_4943_ = v_reuseFailAlloc_4944_;
goto v_reusejp_4942_;
}
v_reusejp_4942_:
{
return v___x_4943_;
}
}
}
else
{
lean_dec_ref(v_a_4923_);
return v___x_4934_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed(lean_object* v___x_4946_, lean_object* v___x_4947_, lean_object* v_a_4948_, lean_object* v___y_4949_, lean_object* v___y_4950_, lean_object* v___y_4951_, lean_object* v___y_4952_, lean_object* v___y_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1(v___x_4946_, v___x_4947_, v_a_4948_, v___y_4949_, v___y_4950_, v___y_4951_, v___y_4952_, v___y_4953_, v___y_4954_, v___y_4955_, v___y_4956_, v___y_4957_);
lean_dec(v___y_4957_);
lean_dec_ref(v___y_4956_);
lean_dec(v___y_4955_);
lean_dec_ref(v___y_4954_);
lean_dec(v___y_4953_);
lean_dec_ref(v___y_4952_);
lean_dec(v___y_4951_);
lean_dec_ref(v___y_4950_);
lean_dec(v___y_4949_);
return v_res_4959_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(size_t v_sz_4960_, size_t v_i_4961_, lean_object* v_bs_4962_){
_start:
{
uint8_t v___x_4963_; 
v___x_4963_ = lean_usize_dec_lt(v_i_4961_, v_sz_4960_);
if (v___x_4963_ == 0)
{
return v_bs_4962_;
}
else
{
lean_object* v_v_4964_; lean_object* v_mvarId_4965_; lean_object* v___x_4966_; lean_object* v_bs_x27_4967_; size_t v___x_4968_; size_t v___x_4969_; lean_object* v___x_4970_; 
v_v_4964_ = lean_array_uget_borrowed(v_bs_4962_, v_i_4961_);
v_mvarId_4965_ = lean_ctor_get(v_v_4964_, 1);
lean_inc(v_mvarId_4965_);
v___x_4966_ = lean_unsigned_to_nat(0u);
v_bs_x27_4967_ = lean_array_uset(v_bs_4962_, v_i_4961_, v___x_4966_);
v___x_4968_ = ((size_t)1ULL);
v___x_4969_ = lean_usize_add(v_i_4961_, v___x_4968_);
v___x_4970_ = lean_array_uset(v_bs_x27_4967_, v_i_4961_, v_mvarId_4965_);
v_i_4961_ = v___x_4969_;
v_bs_4962_ = v___x_4970_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3___boxed(lean_object* v_sz_4972_, lean_object* v_i_4973_, lean_object* v_bs_4974_){
_start:
{
size_t v_sz_boxed_4975_; size_t v_i_boxed_4976_; lean_object* v_res_4977_; 
v_sz_boxed_4975_ = lean_unbox_usize(v_sz_4972_);
lean_dec(v_sz_4972_);
v_i_boxed_4976_ = lean_unbox_usize(v_i_4973_);
lean_dec(v_i_4973_);
v_res_4977_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(v_sz_boxed_4975_, v_i_boxed_4976_, v_bs_4974_);
return v_res_4977_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_keys_4978_, lean_object* v_i_4979_, lean_object* v_k_4980_){
_start:
{
lean_object* v___x_4981_; uint8_t v___x_4982_; 
v___x_4981_ = lean_array_get_size(v_keys_4978_);
v___x_4982_ = lean_nat_dec_lt(v_i_4979_, v___x_4981_);
if (v___x_4982_ == 0)
{
lean_dec(v_i_4979_);
return v___x_4982_;
}
else
{
lean_object* v_k_x27_4983_; uint8_t v___x_4984_; 
v_k_x27_4983_ = lean_array_fget_borrowed(v_keys_4978_, v_i_4979_);
v___x_4984_ = l_Lean_instBEqMVarId_beq(v_k_4980_, v_k_x27_4983_);
if (v___x_4984_ == 0)
{
lean_object* v___x_4985_; lean_object* v___x_4986_; 
v___x_4985_ = lean_unsigned_to_nat(1u);
v___x_4986_ = lean_nat_add(v_i_4979_, v___x_4985_);
lean_dec(v_i_4979_);
v_i_4979_ = v___x_4986_;
goto _start;
}
else
{
lean_dec(v_i_4979_);
return v___x_4984_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_keys_4988_, lean_object* v_i_4989_, lean_object* v_k_4990_){
_start:
{
uint8_t v_res_4991_; lean_object* v_r_4992_; 
v_res_4991_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(v_keys_4988_, v_i_4989_, v_k_4990_);
lean_dec(v_k_4990_);
lean_dec_ref(v_keys_4988_);
v_r_4992_ = lean_box(v_res_4991_);
return v_r_4992_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0(void){
_start:
{
size_t v___x_4993_; size_t v___x_4994_; size_t v___x_4995_; 
v___x_4993_ = ((size_t)5ULL);
v___x_4994_ = ((size_t)1ULL);
v___x_4995_ = lean_usize_shift_left(v___x_4994_, v___x_4993_);
return v___x_4995_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
size_t v___x_4996_; size_t v___x_4997_; size_t v___x_4998_; 
v___x_4996_ = ((size_t)1ULL);
v___x_4997_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__0);
v___x_4998_ = lean_usize_sub(v___x_4997_, v___x_4996_);
return v___x_4998_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(lean_object* v_x_4999_, size_t v_x_5000_, lean_object* v_x_5001_){
_start:
{
if (lean_obj_tag(v_x_4999_) == 0)
{
lean_object* v_es_5002_; lean_object* v___x_5003_; size_t v___x_5004_; size_t v___x_5005_; size_t v___x_5006_; lean_object* v_j_5007_; lean_object* v___x_5008_; 
v_es_5002_ = lean_ctor_get(v_x_4999_, 0);
v___x_5003_ = lean_box(2);
v___x_5004_ = ((size_t)5ULL);
v___x_5005_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___closed__1);
v___x_5006_ = lean_usize_land(v_x_5000_, v___x_5005_);
v_j_5007_ = lean_usize_to_nat(v___x_5006_);
v___x_5008_ = lean_array_get_borrowed(v___x_5003_, v_es_5002_, v_j_5007_);
lean_dec(v_j_5007_);
switch(lean_obj_tag(v___x_5008_))
{
case 0:
{
lean_object* v_key_5009_; uint8_t v___x_5010_; 
v_key_5009_ = lean_ctor_get(v___x_5008_, 0);
v___x_5010_ = l_Lean_instBEqMVarId_beq(v_x_5001_, v_key_5009_);
return v___x_5010_;
}
case 1:
{
lean_object* v_node_5011_; size_t v___x_5012_; 
v_node_5011_ = lean_ctor_get(v___x_5008_, 0);
v___x_5012_ = lean_usize_shift_right(v_x_5000_, v___x_5004_);
v_x_4999_ = v_node_5011_;
v_x_5000_ = v___x_5012_;
goto _start;
}
default: 
{
uint8_t v___x_5014_; 
v___x_5014_ = 0;
return v___x_5014_;
}
}
}
else
{
lean_object* v_ks_5015_; lean_object* v___x_5016_; uint8_t v___x_5017_; 
v_ks_5015_ = lean_ctor_get(v_x_4999_, 0);
v___x_5016_ = lean_unsigned_to_nat(0u);
v___x_5017_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(v_ks_5015_, v___x_5016_, v_x_5001_);
return v___x_5017_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_5018_, lean_object* v_x_5019_, lean_object* v_x_5020_){
_start:
{
size_t v_x_6274__boxed_5021_; uint8_t v_res_5022_; lean_object* v_r_5023_; 
v_x_6274__boxed_5021_ = lean_unbox_usize(v_x_5019_);
lean_dec(v_x_5019_);
v_res_5022_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_5018_, v_x_6274__boxed_5021_, v_x_5020_);
lean_dec(v_x_5020_);
lean_dec_ref(v_x_5018_);
v_r_5023_ = lean_box(v_res_5022_);
return v_r_5023_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(lean_object* v_x_5024_, lean_object* v_x_5025_){
_start:
{
uint64_t v___x_5026_; size_t v___x_5027_; uint8_t v___x_5028_; 
v___x_5026_ = l_Lean_instHashableMVarId_hash(v_x_5025_);
v___x_5027_ = lean_uint64_to_usize(v___x_5026_);
v___x_5028_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_5024_, v___x_5027_, v_x_5025_);
return v___x_5028_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg___boxed(lean_object* v_x_5029_, lean_object* v_x_5030_){
_start:
{
uint8_t v_res_5031_; lean_object* v_r_5032_; 
v_res_5031_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_x_5029_, v_x_5030_);
lean_dec(v_x_5030_);
lean_dec_ref(v_x_5029_);
v_r_5032_ = lean_box(v_res_5031_);
return v_r_5032_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(lean_object* v_mvarId_5033_, lean_object* v___y_5034_){
_start:
{
lean_object* v___x_5036_; lean_object* v_mctx_5037_; lean_object* v_eAssignment_5038_; uint8_t v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; 
v___x_5036_ = lean_st_ref_get(v___y_5034_);
v_mctx_5037_ = lean_ctor_get(v___x_5036_, 0);
lean_inc_ref(v_mctx_5037_);
lean_dec(v___x_5036_);
v_eAssignment_5038_ = lean_ctor_get(v_mctx_5037_, 8);
lean_inc_ref(v_eAssignment_5038_);
lean_dec_ref(v_mctx_5037_);
v___x_5039_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_eAssignment_5038_, v_mvarId_5033_);
lean_dec_ref(v_eAssignment_5038_);
v___x_5040_ = lean_box(v___x_5039_);
v___x_5041_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5041_, 0, v___x_5040_);
return v___x_5041_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg___boxed(lean_object* v_mvarId_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_){
_start:
{
lean_object* v_res_5045_; 
v_res_5045_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v_mvarId_5042_, v___y_5043_);
lean_dec(v___y_5043_);
lean_dec(v_mvarId_5042_);
return v_res_5045_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(lean_object* v_as_5046_, size_t v_i_5047_, size_t v_stop_5048_, lean_object* v_b_5049_, lean_object* v___y_5050_, lean_object* v___y_5051_, lean_object* v___y_5052_, lean_object* v___y_5053_, lean_object* v___y_5054_, lean_object* v___y_5055_, lean_object* v___y_5056_, lean_object* v___y_5057_){
_start:
{
lean_object* v_a_5060_; uint8_t v___x_5064_; 
v___x_5064_ = lean_usize_dec_eq(v_i_5047_, v_stop_5048_);
if (v___x_5064_ == 0)
{
lean_object* v___x_5065_; lean_object* v___x_5068_; 
v___x_5065_ = lean_array_uget_borrowed(v_as_5046_, v_i_5047_);
v___x_5068_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v___x_5065_, v___y_5055_);
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v_a_5069_; uint8_t v___x_5070_; 
v_a_5069_ = lean_ctor_get(v___x_5068_, 0);
lean_inc(v_a_5069_);
lean_dec_ref_known(v___x_5068_, 1);
v___x_5070_ = lean_unbox(v_a_5069_);
lean_dec(v_a_5069_);
if (v___x_5070_ == 0)
{
goto v___jp_5066_;
}
else
{
v_a_5060_ = v_b_5049_;
goto v___jp_5059_;
}
}
else
{
if (lean_obj_tag(v___x_5068_) == 0)
{
lean_object* v_a_5071_; uint8_t v___x_5072_; 
v_a_5071_ = lean_ctor_get(v___x_5068_, 0);
lean_inc(v_a_5071_);
lean_dec_ref_known(v___x_5068_, 1);
v___x_5072_ = lean_unbox(v_a_5071_);
lean_dec(v_a_5071_);
if (v___x_5072_ == 0)
{
v_a_5060_ = v_b_5049_;
goto v___jp_5059_;
}
else
{
goto v___jp_5066_;
}
}
else
{
lean_object* v_a_5073_; lean_object* v___x_5075_; uint8_t v_isShared_5076_; uint8_t v_isSharedCheck_5080_; 
lean_dec_ref(v_b_5049_);
v_a_5073_ = lean_ctor_get(v___x_5068_, 0);
v_isSharedCheck_5080_ = !lean_is_exclusive(v___x_5068_);
if (v_isSharedCheck_5080_ == 0)
{
v___x_5075_ = v___x_5068_;
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
else
{
lean_inc(v_a_5073_);
lean_dec(v___x_5068_);
v___x_5075_ = lean_box(0);
v_isShared_5076_ = v_isSharedCheck_5080_;
goto v_resetjp_5074_;
}
v_resetjp_5074_:
{
lean_object* v___x_5078_; 
if (v_isShared_5076_ == 0)
{
v___x_5078_ = v___x_5075_;
goto v_reusejp_5077_;
}
else
{
lean_object* v_reuseFailAlloc_5079_; 
v_reuseFailAlloc_5079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5079_, 0, v_a_5073_);
v___x_5078_ = v_reuseFailAlloc_5079_;
goto v_reusejp_5077_;
}
v_reusejp_5077_:
{
return v___x_5078_;
}
}
}
}
v___jp_5066_:
{
lean_object* v___x_5067_; 
lean_inc(v___x_5065_);
v___x_5067_ = lean_array_push(v_b_5049_, v___x_5065_);
v_a_5060_ = v___x_5067_;
goto v___jp_5059_;
}
}
else
{
lean_object* v___x_5081_; 
v___x_5081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5081_, 0, v_b_5049_);
return v___x_5081_;
}
v___jp_5059_:
{
size_t v___x_5061_; size_t v___x_5062_; 
v___x_5061_ = ((size_t)1ULL);
v___x_5062_ = lean_usize_add(v_i_5047_, v___x_5061_);
v_i_5047_ = v___x_5062_;
v_b_5049_ = v_a_5060_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2___boxed(lean_object* v_as_5082_, lean_object* v_i_5083_, lean_object* v_stop_5084_, lean_object* v_b_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_, lean_object* v___y_5094_){
_start:
{
size_t v_i_boxed_5095_; size_t v_stop_boxed_5096_; lean_object* v_res_5097_; 
v_i_boxed_5095_ = lean_unbox_usize(v_i_5083_);
lean_dec(v_i_5083_);
v_stop_boxed_5096_ = lean_unbox_usize(v_stop_5084_);
lean_dec(v_stop_5084_);
v_res_5097_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_as_5082_, v_i_boxed_5095_, v_stop_boxed_5096_, v_b_5085_, v___y_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_);
lean_dec(v___y_5093_);
lean_dec_ref(v___y_5092_);
lean_dec(v___y_5091_);
lean_dec_ref(v___y_5090_);
lean_dec(v___y_5089_);
lean_dec_ref(v___y_5088_);
lean_dec(v___y_5087_);
lean_dec_ref(v___y_5086_);
lean_dec_ref(v_as_5082_);
return v_res_5097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(lean_object* v_stx_5098_, lean_object* v_a_5099_, lean_object* v_a_5100_, lean_object* v_a_5101_, lean_object* v_a_5102_, lean_object* v_a_5103_, lean_object* v_a_5104_, lean_object* v_a_5105_, lean_object* v_a_5106_){
_start:
{
lean_object* v___x_5108_; 
v___x_5108_ = l_Lean_Elab_Tactic_Grind_getMainGoal___redArg(v_a_5100_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_);
if (lean_obj_tag(v___x_5108_) == 0)
{
lean_object* v_a_5109_; lean_object* v_mvarId_5110_; lean_object* v___x_5111_; 
v_a_5109_ = lean_ctor_get(v___x_5108_, 0);
lean_inc(v_a_5109_);
lean_dec_ref_known(v___x_5108_, 1);
v_mvarId_5110_ = lean_ctor_get(v_a_5109_, 1);
lean_inc(v_mvarId_5110_);
lean_inc(v_stx_5098_);
v___x_5111_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_parseArgs(v_stx_5098_, v_mvarId_5110_, v_a_5101_, v_a_5102_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_);
if (lean_obj_tag(v___x_5111_) == 0)
{
lean_object* v_a_5112_; lean_object* v_config_5113_; lean_object* v_ctx_5114_; lean_object* v_scope_5115_; lean_object* v_invariantAlts_x3f_5116_; lean_object* v_stepLimit_5117_; lean_object* v___f_5118_; lean_object* v___x_5119_; 
v_a_5112_ = lean_ctor_get(v___x_5111_, 0);
lean_inc(v_a_5112_);
lean_dec_ref_known(v___x_5111_, 1);
v_config_5113_ = lean_ctor_get(v_a_5112_, 0);
lean_inc_ref(v_config_5113_);
v_ctx_5114_ = lean_ctor_get(v_a_5112_, 1);
lean_inc_ref(v_ctx_5114_);
v_scope_5115_ = lean_ctor_get(v_a_5112_, 2);
lean_inc_ref(v_scope_5115_);
v_invariantAlts_x3f_5116_ = lean_ctor_get(v_a_5112_, 3);
lean_inc_n(v_invariantAlts_x3f_5116_, 2);
lean_dec(v_a_5112_);
v_stepLimit_5117_ = lean_ctor_get(v_config_5113_, 0);
lean_inc(v_stepLimit_5117_);
lean_dec_ref(v_config_5113_);
v___f_5118_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__0___boxed), 15, 5);
lean_closure_set(v___f_5118_, 0, v_a_5109_);
lean_closure_set(v___f_5118_, 1, v_ctx_5114_);
lean_closure_set(v___f_5118_, 2, v_scope_5115_);
lean_closure_set(v___f_5118_, 3, v_stepLimit_5117_);
lean_closure_set(v___f_5118_, 4, v_invariantAlts_x3f_5116_);
v___x_5119_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_5118_, v_a_5099_, v_a_5100_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_);
if (lean_obj_tag(v___x_5119_) == 0)
{
lean_object* v_a_5120_; lean_object* v___y_5122_; lean_object* v___y_5123_; lean_object* v___y_5124_; lean_object* v___y_5125_; lean_object* v___y_5126_; lean_object* v___y_5127_; lean_object* v_a_5128_; lean_object* v___y_5144_; lean_object* v___y_5145_; lean_object* v___y_5146_; lean_object* v___y_5147_; lean_object* v___y_5148_; lean_object* v___y_5149_; lean_object* v___y_5150_; lean_object* v___y_5161_; lean_object* v___y_5162_; lean_object* v___y_5163_; lean_object* v___y_5164_; lean_object* v___y_5165_; lean_object* v___y_5166_; lean_object* v___y_5167_; lean_object* v___y_5168_; 
v_a_5120_ = lean_ctor_get(v___x_5119_, 0);
lean_inc(v_a_5120_);
lean_dec_ref_known(v___x_5119_, 1);
if (lean_obj_tag(v_invariantAlts_x3f_5116_) == 0)
{
lean_object* v_invariants_5181_; lean_object* v_vcs_5182_; lean_object* v___x_5183_; lean_object* v___x_5184_; size_t v_sz_5185_; size_t v___x_5186_; lean_object* v___x_5187_; lean_object* v___x_5188_; lean_object* v___x_5189_; lean_object* v___x_5190_; lean_object* v___x_5191_; 
v_invariants_5181_ = lean_ctor_get(v_a_5120_, 0);
v_vcs_5182_ = lean_ctor_get(v_a_5120_, 1);
v___x_5183_ = lean_unsigned_to_nat(4u);
v___x_5184_ = l_Lean_Syntax_getArg(v_stx_5098_, v___x_5183_);
lean_dec(v_stx_5098_);
v_sz_5185_ = lean_array_size(v_vcs_5182_);
v___x_5186_ = ((size_t)0ULL);
lean_inc_ref(v_vcs_5182_);
v___x_5187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__3(v_sz_5185_, v___x_5186_, v_vcs_5182_);
v___x_5188_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_suggestInvariant___boxed), 11, 1);
lean_closure_set(v___x_5188_, 0, v___x_5187_);
lean_inc_ref_n(v_invariants_5181_, 2);
v___x_5189_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_elabInvariants___boxed), 12, 3);
lean_closure_set(v___x_5189_, 0, v___x_5184_);
lean_closure_set(v___x_5189_, 1, v_invariants_5181_);
lean_closure_set(v___x_5189_, 2, v___x_5188_);
v___x_5190_ = lean_array_to_list(v_invariants_5181_);
v___x_5191_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_runTacticM___redArg(v___x_5189_, v___x_5190_, v_a_5101_, v_a_5102_, v_a_5103_, v_a_5104_, v_a_5105_, v_a_5106_);
if (lean_obj_tag(v___x_5191_) == 0)
{
lean_dec_ref_known(v___x_5191_, 1);
v___y_5161_ = v_a_5099_;
v___y_5162_ = v_a_5100_;
v___y_5163_ = v_a_5101_;
v___y_5164_ = v_a_5102_;
v___y_5165_ = v_a_5103_;
v___y_5166_ = v_a_5104_;
v___y_5167_ = v_a_5105_;
v___y_5168_ = v_a_5106_;
goto v___jp_5160_;
}
else
{
lean_dec(v_a_5120_);
return v___x_5191_;
}
}
else
{
lean_dec_ref_known(v_invariantAlts_x3f_5116_, 1);
lean_dec(v_stx_5098_);
v___y_5161_ = v_a_5099_;
v___y_5162_ = v_a_5100_;
v___y_5163_ = v_a_5101_;
v___y_5164_ = v_a_5102_;
v___y_5165_ = v_a_5103_;
v___y_5166_ = v_a_5104_;
v___y_5167_ = v_a_5105_;
v___y_5168_ = v_a_5106_;
goto v___jp_5160_;
}
v___jp_5121_:
{
lean_object* v___x_5129_; lean_object* v___x_5130_; lean_object* v___f_5131_; lean_object* v___x_5132_; 
v___x_5129_ = lean_array_to_list(v_a_5128_);
v___x_5130_ = lean_box(0);
v___f_5131_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___lam__1___boxed), 13, 3);
lean_closure_set(v___f_5131_, 0, v___x_5129_);
lean_closure_set(v___f_5131_, 1, v___x_5130_);
lean_closure_set(v___f_5131_, 2, v_a_5120_);
v___x_5132_ = l_Lean_Elab_Tactic_Grind_liftGrindM___redArg(v___f_5131_, v___y_5126_, v___y_5127_, v___y_5122_, v___y_5125_, v___y_5124_, v___y_5123_);
if (lean_obj_tag(v___x_5132_) == 0)
{
lean_object* v_a_5133_; lean_object* v___x_5134_; 
v_a_5133_ = lean_ctor_get(v___x_5132_, 0);
lean_inc(v_a_5133_);
lean_dec_ref_known(v___x_5132_, 1);
v___x_5134_ = l_Lean_Elab_Tactic_Grind_replaceMainGoal___redArg(v_a_5133_, v___y_5127_, v___y_5122_, v___y_5125_, v___y_5124_, v___y_5123_);
return v___x_5134_;
}
else
{
lean_object* v_a_5135_; lean_object* v___x_5137_; uint8_t v_isShared_5138_; uint8_t v_isSharedCheck_5142_; 
v_a_5135_ = lean_ctor_get(v___x_5132_, 0);
v_isSharedCheck_5142_ = !lean_is_exclusive(v___x_5132_);
if (v_isSharedCheck_5142_ == 0)
{
v___x_5137_ = v___x_5132_;
v_isShared_5138_ = v_isSharedCheck_5142_;
goto v_resetjp_5136_;
}
else
{
lean_inc(v_a_5135_);
lean_dec(v___x_5132_);
v___x_5137_ = lean_box(0);
v_isShared_5138_ = v_isSharedCheck_5142_;
goto v_resetjp_5136_;
}
v_resetjp_5136_:
{
lean_object* v___x_5140_; 
if (v_isShared_5138_ == 0)
{
v___x_5140_ = v___x_5137_;
goto v_reusejp_5139_;
}
else
{
lean_object* v_reuseFailAlloc_5141_; 
v_reuseFailAlloc_5141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5141_, 0, v_a_5135_);
v___x_5140_ = v_reuseFailAlloc_5141_;
goto v_reusejp_5139_;
}
v_reusejp_5139_:
{
return v___x_5140_;
}
}
}
}
v___jp_5143_:
{
if (lean_obj_tag(v___y_5150_) == 0)
{
lean_object* v_a_5151_; 
v_a_5151_ = lean_ctor_get(v___y_5150_, 0);
lean_inc(v_a_5151_);
lean_dec_ref_known(v___y_5150_, 1);
v___y_5122_ = v___y_5144_;
v___y_5123_ = v___y_5145_;
v___y_5124_ = v___y_5146_;
v___y_5125_ = v___y_5147_;
v___y_5126_ = v___y_5148_;
v___y_5127_ = v___y_5149_;
v_a_5128_ = v_a_5151_;
goto v___jp_5121_;
}
else
{
lean_object* v_a_5152_; lean_object* v___x_5154_; uint8_t v_isShared_5155_; uint8_t v_isSharedCheck_5159_; 
lean_dec(v_a_5120_);
v_a_5152_ = lean_ctor_get(v___y_5150_, 0);
v_isSharedCheck_5159_ = !lean_is_exclusive(v___y_5150_);
if (v_isSharedCheck_5159_ == 0)
{
v___x_5154_ = v___y_5150_;
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
else
{
lean_inc(v_a_5152_);
lean_dec(v___y_5150_);
v___x_5154_ = lean_box(0);
v_isShared_5155_ = v_isSharedCheck_5159_;
goto v_resetjp_5153_;
}
v_resetjp_5153_:
{
lean_object* v___x_5157_; 
if (v_isShared_5155_ == 0)
{
v___x_5157_ = v___x_5154_;
goto v_reusejp_5156_;
}
else
{
lean_object* v_reuseFailAlloc_5158_; 
v_reuseFailAlloc_5158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5158_, 0, v_a_5152_);
v___x_5157_ = v_reuseFailAlloc_5158_;
goto v_reusejp_5156_;
}
v_reusejp_5156_:
{
return v___x_5157_;
}
}
}
}
v___jp_5160_:
{
lean_object* v_invariants_5169_; lean_object* v___x_5170_; lean_object* v___x_5171_; lean_object* v___x_5172_; uint8_t v___x_5173_; 
v_invariants_5169_ = lean_ctor_get(v_a_5120_, 0);
v___x_5170_ = lean_unsigned_to_nat(0u);
v___x_5171_ = lean_array_get_size(v_invariants_5169_);
v___x_5172_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabUntilPattern___redArg___lam__1___closed__2));
v___x_5173_ = lean_nat_dec_lt(v___x_5170_, v___x_5171_);
if (v___x_5173_ == 0)
{
v___y_5122_ = v___y_5165_;
v___y_5123_ = v___y_5168_;
v___y_5124_ = v___y_5167_;
v___y_5125_ = v___y_5166_;
v___y_5126_ = v___y_5161_;
v___y_5127_ = v___y_5162_;
v_a_5128_ = v___x_5172_;
goto v___jp_5121_;
}
else
{
uint8_t v___x_5174_; 
v___x_5174_ = lean_nat_dec_le(v___x_5171_, v___x_5171_);
if (v___x_5174_ == 0)
{
if (v___x_5173_ == 0)
{
v___y_5122_ = v___y_5165_;
v___y_5123_ = v___y_5168_;
v___y_5124_ = v___y_5167_;
v___y_5125_ = v___y_5166_;
v___y_5126_ = v___y_5161_;
v___y_5127_ = v___y_5162_;
v_a_5128_ = v___x_5172_;
goto v___jp_5121_;
}
else
{
size_t v___x_5175_; size_t v___x_5176_; lean_object* v___x_5177_; 
v___x_5175_ = ((size_t)0ULL);
v___x_5176_ = lean_usize_of_nat(v___x_5171_);
v___x_5177_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_invariants_5169_, v___x_5175_, v___x_5176_, v___x_5172_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_);
v___y_5144_ = v___y_5165_;
v___y_5145_ = v___y_5168_;
v___y_5146_ = v___y_5167_;
v___y_5147_ = v___y_5166_;
v___y_5148_ = v___y_5161_;
v___y_5149_ = v___y_5162_;
v___y_5150_ = v___x_5177_;
goto v___jp_5143_;
}
}
else
{
size_t v___x_5178_; size_t v___x_5179_; lean_object* v___x_5180_; 
v___x_5178_ = ((size_t)0ULL);
v___x_5179_ = lean_usize_of_nat(v___x_5171_);
v___x_5180_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__2(v_invariants_5169_, v___x_5178_, v___x_5179_, v___x_5172_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_);
v___y_5144_ = v___y_5165_;
v___y_5145_ = v___y_5168_;
v___y_5146_ = v___y_5167_;
v___y_5147_ = v___y_5166_;
v___y_5148_ = v___y_5161_;
v___y_5149_ = v___y_5162_;
v___y_5150_ = v___x_5180_;
goto v___jp_5143_;
}
}
}
}
else
{
lean_object* v_a_5192_; lean_object* v___x_5194_; uint8_t v_isShared_5195_; uint8_t v_isSharedCheck_5199_; 
lean_dec(v_invariantAlts_x3f_5116_);
lean_dec(v_stx_5098_);
v_a_5192_ = lean_ctor_get(v___x_5119_, 0);
v_isSharedCheck_5199_ = !lean_is_exclusive(v___x_5119_);
if (v_isSharedCheck_5199_ == 0)
{
v___x_5194_ = v___x_5119_;
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
else
{
lean_inc(v_a_5192_);
lean_dec(v___x_5119_);
v___x_5194_ = lean_box(0);
v_isShared_5195_ = v_isSharedCheck_5199_;
goto v_resetjp_5193_;
}
v_resetjp_5193_:
{
lean_object* v___x_5197_; 
if (v_isShared_5195_ == 0)
{
v___x_5197_ = v___x_5194_;
goto v_reusejp_5196_;
}
else
{
lean_object* v_reuseFailAlloc_5198_; 
v_reuseFailAlloc_5198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5198_, 0, v_a_5192_);
v___x_5197_ = v_reuseFailAlloc_5198_;
goto v_reusejp_5196_;
}
v_reusejp_5196_:
{
return v___x_5197_;
}
}
}
}
else
{
lean_object* v_a_5200_; lean_object* v___x_5202_; uint8_t v_isShared_5203_; uint8_t v_isSharedCheck_5207_; 
lean_dec(v_a_5109_);
lean_dec(v_stx_5098_);
v_a_5200_ = lean_ctor_get(v___x_5111_, 0);
v_isSharedCheck_5207_ = !lean_is_exclusive(v___x_5111_);
if (v_isSharedCheck_5207_ == 0)
{
v___x_5202_ = v___x_5111_;
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
else
{
lean_inc(v_a_5200_);
lean_dec(v___x_5111_);
v___x_5202_ = lean_box(0);
v_isShared_5203_ = v_isSharedCheck_5207_;
goto v_resetjp_5201_;
}
v_resetjp_5201_:
{
lean_object* v___x_5205_; 
if (v_isShared_5203_ == 0)
{
v___x_5205_ = v___x_5202_;
goto v_reusejp_5204_;
}
else
{
lean_object* v_reuseFailAlloc_5206_; 
v_reuseFailAlloc_5206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5206_, 0, v_a_5200_);
v___x_5205_ = v_reuseFailAlloc_5206_;
goto v_reusejp_5204_;
}
v_reusejp_5204_:
{
return v___x_5205_;
}
}
}
}
else
{
lean_object* v_a_5208_; lean_object* v___x_5210_; uint8_t v_isShared_5211_; uint8_t v_isSharedCheck_5215_; 
lean_dec(v_stx_5098_);
v_a_5208_ = lean_ctor_get(v___x_5108_, 0);
v_isSharedCheck_5215_ = !lean_is_exclusive(v___x_5108_);
if (v_isSharedCheck_5215_ == 0)
{
v___x_5210_ = v___x_5108_;
v_isShared_5211_ = v_isSharedCheck_5215_;
goto v_resetjp_5209_;
}
else
{
lean_inc(v_a_5208_);
lean_dec(v___x_5108_);
v___x_5210_ = lean_box(0);
v_isShared_5211_ = v_isSharedCheck_5215_;
goto v_resetjp_5209_;
}
v_resetjp_5209_:
{
lean_object* v___x_5213_; 
if (v_isShared_5211_ == 0)
{
v___x_5213_ = v___x_5210_;
goto v_reusejp_5212_;
}
else
{
lean_object* v_reuseFailAlloc_5214_; 
v_reuseFailAlloc_5214_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5214_, 0, v_a_5208_);
v___x_5213_ = v_reuseFailAlloc_5214_;
goto v_reusejp_5212_;
}
v_reusejp_5212_:
{
return v___x_5213_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed(lean_object* v_stx_5216_, lean_object* v_a_5217_, lean_object* v_a_5218_, lean_object* v_a_5219_, lean_object* v_a_5220_, lean_object* v_a_5221_, lean_object* v_a_5222_, lean_object* v_a_5223_, lean_object* v_a_5224_, lean_object* v_a_5225_){
_start:
{
lean_object* v_res_5226_; 
v_res_5226_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27(v_stx_5216_, v_a_5217_, v_a_5218_, v_a_5219_, v_a_5220_, v_a_5221_, v_a_5222_, v_a_5223_, v_a_5224_);
lean_dec(v_a_5224_);
lean_dec_ref(v_a_5223_);
lean_dec(v_a_5222_);
lean_dec_ref(v_a_5221_);
lean_dec(v_a_5220_);
lean_dec_ref(v_a_5219_);
lean_dec(v_a_5218_);
lean_dec_ref(v_a_5217_);
return v_res_5226_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(lean_object* v_mvarId_5227_, lean_object* v___y_5228_, lean_object* v___y_5229_, lean_object* v___y_5230_, lean_object* v___y_5231_, lean_object* v___y_5232_, lean_object* v___y_5233_, lean_object* v___y_5234_, lean_object* v___y_5235_){
_start:
{
lean_object* v___x_5237_; 
v___x_5237_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___redArg(v_mvarId_5227_, v___y_5233_);
return v___x_5237_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0___boxed(lean_object* v_mvarId_5238_, lean_object* v___y_5239_, lean_object* v___y_5240_, lean_object* v___y_5241_, lean_object* v___y_5242_, lean_object* v___y_5243_, lean_object* v___y_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_){
_start:
{
lean_object* v_res_5248_; 
v_res_5248_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0(v_mvarId_5238_, v___y_5239_, v___y_5240_, v___y_5241_, v___y_5242_, v___y_5243_, v___y_5244_, v___y_5245_, v___y_5246_);
lean_dec(v___y_5246_);
lean_dec_ref(v___y_5245_);
lean_dec(v___y_5244_);
lean_dec_ref(v___y_5243_);
lean_dec(v___y_5242_);
lean_dec_ref(v___y_5241_);
lean_dec(v___y_5240_);
lean_dec_ref(v___y_5239_);
lean_dec(v_mvarId_5238_);
return v_res_5248_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(lean_object* v_00_u03b2_5249_, lean_object* v_x_5250_, lean_object* v_x_5251_){
_start:
{
uint8_t v___x_5252_; 
v___x_5252_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___redArg(v_x_5250_, v_x_5251_);
return v___x_5252_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0___boxed(lean_object* v_00_u03b2_5253_, lean_object* v_x_5254_, lean_object* v_x_5255_){
_start:
{
uint8_t v_res_5256_; lean_object* v_r_5257_; 
v_res_5256_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0(v_00_u03b2_5253_, v_x_5254_, v_x_5255_);
lean_dec(v_x_5255_);
lean_dec_ref(v_x_5254_);
v_r_5257_ = lean_box(v_res_5256_);
return v_r_5257_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_5258_, lean_object* v_x_5259_, size_t v_x_5260_, lean_object* v_x_5261_){
_start:
{
uint8_t v___x_5262_; 
v___x_5262_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___redArg(v_x_5259_, v_x_5260_, v_x_5261_);
return v___x_5262_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_5263_, lean_object* v_x_5264_, lean_object* v_x_5265_, lean_object* v_x_5266_){
_start:
{
size_t v_x_6661__boxed_5267_; uint8_t v_res_5268_; lean_object* v_r_5269_; 
v_x_6661__boxed_5267_ = lean_unbox_usize(v_x_5265_);
lean_dec(v_x_5265_);
v_res_5268_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1(v_00_u03b2_5263_, v_x_5264_, v_x_6661__boxed_5267_, v_x_5266_);
lean_dec(v_x_5266_);
lean_dec_ref(v_x_5264_);
v_r_5269_ = lean_box(v_res_5268_);
return v_r_5269_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_5270_, lean_object* v_keys_5271_, lean_object* v_vals_5272_, lean_object* v_heq_5273_, lean_object* v_i_5274_, lean_object* v_k_5275_){
_start:
{
uint8_t v___x_5276_; 
v___x_5276_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___redArg(v_keys_5271_, v_i_5274_, v_k_5275_);
return v___x_5276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03b2_5277_, lean_object* v_keys_5278_, lean_object* v_vals_5279_, lean_object* v_heq_5280_, lean_object* v_i_5281_, lean_object* v_k_5282_){
_start:
{
uint8_t v_res_5283_; lean_object* v_r_5284_; 
v_res_5283_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_spec__0_spec__0_spec__1_spec__5(v_00_u03b2_5277_, v_keys_5278_, v_vals_5279_, v_heq_5280_, v_i_5281_, v_k_5282_);
lean_dec(v_k_5282_);
lean_dec_ref(v_vals_5279_);
lean_dec_ref(v_keys_5278_);
v_r_5284_ = lean_box(v_res_5283_);
return v_r_5284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1(){
_start:
{
lean_object* v___x_5344_; lean_object* v___x_5345_; lean_object* v___x_5346_; lean_object* v___x_5347_; lean_object* v___x_5348_; 
v___x_5344_ = l_Lean_Elab_Tactic_Grind_grindTacElabAttribute;
v___x_5345_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__2));
v___x_5346_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22));
v___x_5347_ = lean_alloc_closure((void*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___boxed), 10, 0);
v___x_5348_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5344_, v___x_5345_, v___x_5346_, v___x_5347_);
return v___x_5348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___boxed(lean_object* v_a_5349_){
_start:
{
lean_object* v_res_5350_; 
v_res_5350_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
return v_res_5350_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3(){
_start:
{
lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5355_; 
v___x_5353_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__22));
v___x_5354_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___closed__0));
v___x_5355_ = l_Lean_addBuiltinDocString(v___x_5353_, v___x_5354_);
return v___x_5355_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3___boxed(lean_object* v_a_5356_){
_start:
{
lean_object* v_res_5357_; 
v_res_5357_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
return v_res_5357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg(){
_start:
{
lean_object* v___x_5359_; lean_object* v___x_5360_; 
v___x_5359_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__0___redArg___closed__0);
v___x_5360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5360_, 0, v___x_5359_);
return v___x_5360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg___boxed(lean_object* v___y_5361_){
_start:
{
lean_object* v_res_5362_; 
v_res_5362_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v_res_5362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(lean_object* v_00_u03b1_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_, lean_object* v___y_5367_, lean_object* v___y_5368_, lean_object* v___y_5369_, lean_object* v___y_5370_, lean_object* v___y_5371_){
_start:
{
lean_object* v___x_5373_; 
v___x_5373_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___boxed(lean_object* v_00_u03b1_5374_, lean_object* v___y_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_){
_start:
{
lean_object* v_res_5384_; 
v_res_5384_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0(v_00_u03b1_5374_, v___y_5375_, v___y_5376_, v___y_5377_, v___y_5378_, v___y_5379_, v___y_5380_, v___y_5381_, v___y_5382_);
lean_dec(v___y_5382_);
lean_dec_ref(v___y_5381_);
lean_dec(v___y_5380_);
lean_dec_ref(v___y_5379_);
lean_dec(v___y_5378_);
lean_dec_ref(v___y_5377_);
lean_dec(v___y_5376_);
lean_dec_ref(v___y_5375_);
return v_res_5384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(lean_object* v_x_5387_, lean_object* v_x_5388_){
_start:
{
lean_object* v___x_5389_; 
v___x_5389_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
return v___x_5389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___boxed(lean_object* v_x_5390_, lean_object* v_x_5391_){
_start:
{
lean_object* v_res_5392_; 
v_res_5392_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0(v_x_5390_, v_x_5391_);
lean_dec(v_x_5391_);
lean_dec(v_x_5390_);
return v_res_5392_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__1(lean_object* v_00___5393_){
_start:
{
lean_object* v___x_5394_; 
v___x_5394_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
return v___x_5394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__2(lean_object* v_x_5395_){
_start:
{
lean_object* v___x_5396_; lean_object* v___x_5397_; 
v___x_5396_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___x_5397_ = lean_array_push(v___x_5396_, v_x_5395_);
return v___x_5397_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(lean_object* v_a_5398_, lean_object* v_a_5399_){
_start:
{
if (lean_obj_tag(v_a_5398_) == 0)
{
lean_object* v___x_5400_; 
v___x_5400_ = l_List_reverse___redArg(v_a_5399_);
return v___x_5400_;
}
else
{
lean_object* v_head_5401_; lean_object* v_tail_5402_; lean_object* v___x_5404_; uint8_t v_isShared_5405_; uint8_t v_isSharedCheck_5411_; 
v_head_5401_ = lean_ctor_get(v_a_5398_, 0);
v_tail_5402_ = lean_ctor_get(v_a_5398_, 1);
v_isSharedCheck_5411_ = !lean_is_exclusive(v_a_5398_);
if (v_isSharedCheck_5411_ == 0)
{
v___x_5404_ = v_a_5398_;
v_isShared_5405_ = v_isSharedCheck_5411_;
goto v_resetjp_5403_;
}
else
{
lean_inc(v_tail_5402_);
lean_inc(v_head_5401_);
lean_dec(v_a_5398_);
v___x_5404_ = lean_box(0);
v_isShared_5405_ = v_isSharedCheck_5411_;
goto v_resetjp_5403_;
}
v_resetjp_5403_:
{
lean_object* v_mvarId_5406_; lean_object* v___x_5408_; 
v_mvarId_5406_ = lean_ctor_get(v_head_5401_, 1);
lean_inc(v_mvarId_5406_);
lean_dec(v_head_5401_);
if (v_isShared_5405_ == 0)
{
lean_ctor_set(v___x_5404_, 1, v_a_5399_);
lean_ctor_set(v___x_5404_, 0, v_mvarId_5406_);
v___x_5408_ = v___x_5404_;
goto v_reusejp_5407_;
}
else
{
lean_object* v_reuseFailAlloc_5410_; 
v_reuseFailAlloc_5410_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5410_, 0, v_mvarId_5406_);
lean_ctor_set(v_reuseFailAlloc_5410_, 1, v_a_5399_);
v___x_5408_ = v_reuseFailAlloc_5410_;
goto v_reusejp_5407_;
}
v_reusejp_5407_:
{
v_a_5398_ = v_tail_5402_;
v_a_5399_ = v___x_5408_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5(void){
_start:
{
lean_object* v___x_5417_; lean_object* v___x_5418_; 
v___x_5417_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__4));
v___x_5418_ = l_String_toRawSubstring_x27(v___x_5417_);
return v___x_5418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3(uint8_t v___x_5421_, lean_object* v_stx_5422_, lean_object* v___x_5423_, lean_object* v___x_5424_, lean_object* v___x_5425_, uint8_t v___x_5426_, lean_object* v___f_5427_, lean_object* v___f_5428_, lean_object* v___f_5429_, lean_object* v___x_5430_, lean_object* v___y_5431_, lean_object* v___y_5432_, lean_object* v___y_5433_, lean_object* v___y_5434_, lean_object* v___y_5435_, lean_object* v___y_5436_, lean_object* v___y_5437_, lean_object* v___y_5438_){
_start:
{
lean_object* v___y_5441_; lean_object* v_step_5442_; lean_object* v___y_5443_; lean_object* v___y_5444_; lean_object* v___y_5445_; lean_object* v___y_5446_; lean_object* v___y_5447_; lean_object* v___y_5448_; lean_object* v___y_5449_; lean_object* v___y_5450_; lean_object* v___y_5499_; lean_object* v___y_5500_; lean_object* v___y_5501_; lean_object* v___y_5502_; lean_object* v___y_5503_; lean_object* v___y_5504_; lean_object* v___y_5505_; lean_object* v___y_5506_; lean_object* v___y_5507_; lean_object* v___y_5508_; lean_object* v___y_5509_; lean_object* v___y_5510_; lean_object* v___y_5511_; lean_object* v___y_5512_; lean_object* v___y_5513_; lean_object* v___y_5514_; lean_object* v___y_5515_; lean_object* v___y_5516_; lean_object* v___y_5517_; lean_object* v___y_5518_; lean_object* v___y_5519_; lean_object* v___y_5530_; lean_object* v___y_5531_; lean_object* v___y_5532_; lean_object* v___y_5533_; lean_object* v___y_5534_; lean_object* v___y_5535_; lean_object* v___y_5536_; lean_object* v___y_5537_; lean_object* v___y_5538_; lean_object* v___y_5539_; lean_object* v___y_5540_; lean_object* v___y_5541_; lean_object* v___y_5542_; lean_object* v___y_5543_; lean_object* v___y_5544_; lean_object* v___y_5545_; lean_object* v___y_5546_; lean_object* v___y_5547_; lean_object* v___y_5548_; lean_object* v___y_5549_; lean_object* v___y_5550_; lean_object* v___y_5551_; lean_object* v___y_5552_; 
if (v___x_5421_ == 0)
{
lean_object* v___x_5556_; 
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5556_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5556_;
}
else
{
lean_object* v___x_5557_; lean_object* v_cfg_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; uint8_t v___x_5561_; 
v___x_5557_ = lean_unsigned_to_nat(1u);
v_cfg_5558_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5557_);
v___x_5559_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__45));
lean_inc_ref(v___x_5425_);
lean_inc_ref(v___x_5424_);
lean_inc_ref(v___x_5423_);
v___x_5560_ = l_Lean_Name_mkStr4(v___x_5423_, v___x_5424_, v___x_5425_, v___x_5559_);
lean_inc(v_cfg_5558_);
v___x_5561_ = l_Lean_Syntax_isOfKind(v_cfg_5558_, v___x_5560_);
if (v___x_5561_ == 0)
{
lean_object* v___x_5562_; 
lean_dec(v___x_5560_);
lean_dec(v_cfg_5558_);
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5562_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5562_;
}
else
{
lean_object* v___x_5563_; lean_object* v___y_5565_; lean_object* v___y_5566_; lean_object* v___y_5567_; lean_object* v___y_5568_; lean_object* v___y_5569_; lean_object* v___y_5570_; lean_object* v___y_5571_; lean_object* v___y_5572_; lean_object* v___y_5573_; lean_object* v___y_5574_; lean_object* v___y_5575_; lean_object* v___y_5576_; lean_object* v___y_5577_; lean_object* v___y_5578_; lean_object* v___y_5579_; lean_object* v___y_5580_; lean_object* v___y_5581_; lean_object* v___y_5582_; lean_object* v___y_5583_; lean_object* v___y_5584_; lean_object* v___y_5585_; lean_object* v___y_5586_; lean_object* v___y_5587_; lean_object* v___y_5600_; lean_object* v___y_5601_; lean_object* v___y_5602_; lean_object* v___y_5603_; lean_object* v___y_5604_; lean_object* v___y_5605_; lean_object* v___y_5606_; lean_object* v___y_5607_; lean_object* v___y_5608_; lean_object* v___y_5609_; lean_object* v___y_5610_; lean_object* v___y_5611_; lean_object* v___y_5612_; lean_object* v___y_5613_; lean_object* v___y_5614_; lean_object* v___y_5615_; lean_object* v___y_5616_; lean_object* v___y_5617_; lean_object* v___y_5618_; lean_object* v___y_5619_; lean_object* v___y_5620_; lean_object* v___y_5621_; lean_object* v___y_5635_; lean_object* v___y_5636_; lean_object* v___y_5637_; lean_object* v___y_5638_; lean_object* v___y_5639_; lean_object* v___y_5640_; lean_object* v___y_5641_; lean_object* v___y_5642_; lean_object* v___y_5643_; lean_object* v___y_5644_; lean_object* v___y_5645_; lean_object* v___y_5646_; lean_object* v___y_5647_; lean_object* v___y_5648_; lean_object* v___y_5649_; lean_object* v___y_5650_; lean_object* v___y_5651_; lean_object* v___y_5652_; lean_object* v___y_5653_; lean_object* v___y_5654_; lean_object* v___y_5655_; lean_object* v___y_5656_; lean_object* v___y_5664_; lean_object* v___y_5665_; lean_object* v___y_5666_; lean_object* v___y_5667_; lean_object* v___y_5668_; lean_object* v___y_5669_; lean_object* v___y_5670_; lean_object* v___y_5671_; lean_object* v___y_5672_; lean_object* v___y_5673_; lean_object* v___y_5674_; lean_object* v___y_5675_; lean_object* v___y_5676_; lean_object* v___y_5677_; lean_object* v___y_5678_; lean_object* v___y_5679_; lean_object* v___y_5680_; lean_object* v___y_5681_; lean_object* v___y_5682_; lean_object* v___y_5683_; lean_object* v___y_5684_; lean_object* v___y_5685_; lean_object* v_tk_5693_; lean_object* v___y_5695_; lean_object* v___y_5696_; lean_object* v___y_5697_; lean_object* v___y_5698_; lean_object* v___y_5699_; lean_object* v___y_5700_; lean_object* v___y_5701_; lean_object* v_cfg_5702_; lean_object* v___y_5703_; lean_object* v___y_5704_; lean_object* v___y_5705_; lean_object* v___y_5706_; lean_object* v___y_5707_; lean_object* v___y_5708_; lean_object* v___y_5709_; lean_object* v_ref_5710_; lean_object* v___y_5711_; lean_object* v___y_5730_; lean_object* v___y_5731_; lean_object* v___y_5732_; lean_object* v___y_5733_; lean_object* v___y_5734_; lean_object* v___y_5735_; lean_object* v___y_5736_; lean_object* v___y_5737_; lean_object* v___y_5738_; lean_object* v___y_5739_; lean_object* v___y_5740_; lean_object* v___y_5741_; lean_object* v___y_5742_; lean_object* v___y_5743_; lean_object* v___y_5744_; lean_object* v___y_5769_; lean_object* v___y_5770_; lean_object* v___y_5771_; lean_object* v___y_5772_; lean_object* v___y_5773_; lean_object* v___y_5774_; lean_object* v_g_5775_; lean_object* v___y_5776_; lean_object* v___y_5777_; lean_object* v___y_5778_; lean_object* v___y_5779_; lean_object* v___y_5780_; lean_object* v___y_5781_; lean_object* v___y_5782_; lean_object* v___y_5783_; lean_object* v___x_5794_; lean_object* v___y_5796_; lean_object* v___y_5797_; lean_object* v___y_5798_; lean_object* v___y_5799_; lean_object* v_sa_5800_; lean_object* v_thms_5801_; lean_object* v___y_5802_; lean_object* v___y_5803_; lean_object* v___y_5804_; lean_object* v___y_5805_; lean_object* v___y_5806_; lean_object* v___y_5807_; lean_object* v___y_5808_; lean_object* v___y_5809_; lean_object* v___y_5819_; lean_object* v___y_5820_; lean_object* v___y_5821_; lean_object* v___y_5822_; lean_object* v___y_5823_; lean_object* v___y_5824_; lean_object* v___y_5825_; lean_object* v___y_5826_; lean_object* v___y_5827_; lean_object* v___y_5828_; lean_object* v___y_5829_; lean_object* v___y_5830_; lean_object* v___y_5831_; lean_object* v___y_5832_; lean_object* v___y_5836_; lean_object* v___y_5837_; lean_object* v___y_5838_; lean_object* v___y_5839_; lean_object* v___y_5840_; lean_object* v_thms_5841_; lean_object* v___y_5842_; lean_object* v___y_5843_; lean_object* v___y_5844_; lean_object* v___y_5845_; lean_object* v___y_5846_; lean_object* v___y_5847_; lean_object* v___y_5848_; lean_object* v___y_5849_; lean_object* v___y_5861_; lean_object* v___y_5862_; lean_object* v_u_5863_; lean_object* v___y_5864_; lean_object* v___y_5865_; lean_object* v___y_5866_; lean_object* v___y_5867_; lean_object* v___y_5868_; lean_object* v___y_5869_; lean_object* v___y_5870_; lean_object* v___y_5871_; lean_object* v_lems_5890_; lean_object* v___y_5891_; lean_object* v___y_5892_; lean_object* v___y_5893_; lean_object* v___y_5894_; lean_object* v___y_5895_; lean_object* v___y_5896_; lean_object* v___y_5897_; lean_object* v___y_5898_; lean_object* v___x_5907_; uint8_t v___x_5908_; 
v___x_5563_ = lean_unsigned_to_nat(0u);
v_tk_5693_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5563_);
v___x_5794_ = lean_unsigned_to_nat(2u);
v___x_5907_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5794_);
v___x_5908_ = l_Lean_Syntax_isNone(v___x_5907_);
if (v___x_5908_ == 0)
{
lean_object* v___x_5909_; uint8_t v___x_5910_; 
v___x_5909_ = lean_unsigned_to_nat(3u);
lean_inc(v___x_5907_);
v___x_5910_ = l_Lean_Syntax_matchesNull(v___x_5907_, v___x_5909_);
if (v___x_5910_ == 0)
{
lean_object* v___x_5911_; 
lean_dec(v___x_5907_);
lean_dec(v_tk_5693_);
lean_dec(v___x_5560_);
lean_dec(v_cfg_5558_);
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5911_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5911_;
}
else
{
lean_object* v___x_5912_; lean_object* v_lems_5913_; lean_object* v___x_5914_; 
v___x_5912_ = l_Lean_Syntax_getArg(v___x_5907_, v___x_5557_);
lean_dec(v___x_5907_);
v_lems_5913_ = l_Lean_Syntax_getArgs(v___x_5912_);
lean_dec(v___x_5912_);
v___x_5914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5914_, 0, v_lems_5913_);
v_lems_5890_ = v___x_5914_;
v___y_5891_ = v___y_5431_;
v___y_5892_ = v___y_5432_;
v___y_5893_ = v___y_5433_;
v___y_5894_ = v___y_5434_;
v___y_5895_ = v___y_5435_;
v___y_5896_ = v___y_5436_;
v___y_5897_ = v___y_5437_;
v___y_5898_ = v___y_5438_;
goto v___jp_5889_;
}
}
else
{
lean_object* v___x_5915_; 
lean_dec(v___x_5907_);
v___x_5915_ = lean_box(0);
v_lems_5890_ = v___x_5915_;
v___y_5891_ = v___y_5431_;
v___y_5892_ = v___y_5432_;
v___y_5893_ = v___y_5433_;
v___y_5894_ = v___y_5434_;
v___y_5895_ = v___y_5435_;
v___y_5896_ = v___y_5436_;
v___y_5897_ = v___y_5437_;
v___y_5898_ = v___y_5438_;
goto v___jp_5889_;
}
v___jp_5564_:
{
lean_object* v___x_5588_; lean_object* v___x_5589_; 
lean_inc_ref(v___y_5566_);
v___x_5588_ = l_Array_append___redArg(v___y_5566_, v___y_5587_);
lean_dec_ref(v___y_5587_);
lean_inc(v___y_5567_);
lean_inc(v___y_5583_);
v___x_5589_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5589_, 0, v___y_5583_);
lean_ctor_set(v___x_5589_, 1, v___y_5567_);
lean_ctor_set(v___x_5589_, 2, v___x_5588_);
if (lean_obj_tag(v___y_5576_) == 1)
{
lean_object* v_val_5590_; lean_object* v___x_5591_; lean_object* v___x_5592_; lean_object* v___x_5593_; lean_object* v___x_5594_; lean_object* v___x_5595_; lean_object* v___x_5596_; lean_object* v___x_5597_; 
v_val_5590_ = lean_ctor_get(v___y_5576_, 0);
lean_inc(v_val_5590_);
lean_dec_ref_known(v___y_5576_, 1);
v___x_5591_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__64));
lean_inc_n(v___y_5583_, 3);
v___x_5592_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5592_, 0, v___y_5583_);
lean_ctor_set(v___x_5592_, 1, v___x_5591_);
lean_inc_ref(v___y_5566_);
v___x_5593_ = l_Array_append___redArg(v___y_5566_, v_val_5590_);
lean_dec(v_val_5590_);
lean_inc(v___y_5567_);
v___x_5594_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5594_, 0, v___y_5583_);
lean_ctor_set(v___x_5594_, 1, v___y_5567_);
lean_ctor_set(v___x_5594_, 2, v___x_5593_);
v___x_5595_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__66));
v___x_5596_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5596_, 0, v___y_5583_);
lean_ctor_set(v___x_5596_, 1, v___x_5595_);
v___x_5597_ = l_Array_mkArray3___redArg(v___x_5592_, v___x_5594_, v___x_5596_);
v___y_5530_ = v___y_5565_;
v___y_5531_ = v___y_5566_;
v___y_5532_ = v___x_5589_;
v___y_5533_ = v___y_5567_;
v___y_5534_ = v___y_5568_;
v___y_5535_ = v___y_5569_;
v___y_5536_ = v___y_5570_;
v___y_5537_ = v___y_5571_;
v___y_5538_ = v___y_5572_;
v___y_5539_ = v___y_5573_;
v___y_5540_ = v___y_5574_;
v___y_5541_ = v___y_5575_;
v___y_5542_ = v___y_5577_;
v___y_5543_ = v___y_5580_;
v___y_5544_ = v___y_5579_;
v___y_5545_ = v___y_5578_;
v___y_5546_ = v___y_5581_;
v___y_5547_ = v___y_5582_;
v___y_5548_ = v___y_5583_;
v___y_5549_ = v___y_5585_;
v___y_5550_ = v___y_5584_;
v___y_5551_ = v___y_5586_;
v___y_5552_ = v___x_5597_;
goto v___jp_5529_;
}
else
{
lean_object* v___x_5598_; 
lean_dec(v___y_5576_);
v___x_5598_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___y_5530_ = v___y_5565_;
v___y_5531_ = v___y_5566_;
v___y_5532_ = v___x_5589_;
v___y_5533_ = v___y_5567_;
v___y_5534_ = v___y_5568_;
v___y_5535_ = v___y_5569_;
v___y_5536_ = v___y_5570_;
v___y_5537_ = v___y_5571_;
v___y_5538_ = v___y_5572_;
v___y_5539_ = v___y_5573_;
v___y_5540_ = v___y_5574_;
v___y_5541_ = v___y_5575_;
v___y_5542_ = v___y_5577_;
v___y_5543_ = v___y_5580_;
v___y_5544_ = v___y_5579_;
v___y_5545_ = v___y_5578_;
v___y_5546_ = v___y_5581_;
v___y_5547_ = v___y_5582_;
v___y_5548_ = v___y_5583_;
v___y_5549_ = v___y_5585_;
v___y_5550_ = v___y_5584_;
v___y_5551_ = v___y_5586_;
v___y_5552_ = v___x_5598_;
goto v___jp_5529_;
}
}
v___jp_5599_:
{
lean_object* v___x_5622_; lean_object* v___x_5623_; 
lean_inc_ref(v___y_5601_);
v___x_5622_ = l_Array_append___redArg(v___y_5601_, v___y_5621_);
lean_dec_ref(v___y_5621_);
lean_inc(v___y_5602_);
lean_inc(v___y_5618_);
v___x_5623_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5623_, 0, v___y_5618_);
lean_ctor_set(v___x_5623_, 1, v___y_5602_);
lean_ctor_set(v___x_5623_, 2, v___x_5622_);
if (lean_obj_tag(v___y_5611_) == 1)
{
if (lean_obj_tag(v___y_5616_) == 1)
{
lean_object* v_val_5624_; lean_object* v_val_5625_; lean_object* v___x_5626_; lean_object* v___x_5627_; 
lean_dec_ref(v___f_5429_);
v_val_5624_ = lean_ctor_get(v___y_5611_, 0);
lean_inc(v_val_5624_);
lean_dec_ref_known(v___y_5611_, 1);
v_val_5625_ = lean_ctor_get(v___y_5616_, 0);
lean_inc(v_val_5625_);
lean_dec_ref_known(v___y_5616_, 1);
v___x_5626_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__2));
lean_inc(v___y_5618_);
v___x_5627_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5627_, 0, v___y_5618_);
lean_ctor_set(v___x_5627_, 1, v___x_5626_);
if (lean_obj_tag(v_val_5624_) == 0)
{
lean_object* v___x_5628_; lean_object* v___x_5629_; 
lean_dec_ref(v___f_5428_);
v___x_5628_ = lean_box(0);
v___x_5629_ = lean_apply_1(v___f_5427_, v___x_5628_);
v___y_5565_ = v___y_5600_;
v___y_5566_ = v___y_5601_;
v___y_5567_ = v___y_5602_;
v___y_5568_ = v___y_5603_;
v___y_5569_ = v___y_5604_;
v___y_5570_ = v___y_5605_;
v___y_5571_ = v___y_5606_;
v___y_5572_ = v___y_5607_;
v___y_5573_ = v___y_5608_;
v___y_5574_ = v___y_5609_;
v___y_5575_ = v___x_5623_;
v___y_5576_ = v_val_5625_;
v___y_5577_ = v___y_5610_;
v___y_5578_ = v___y_5614_;
v___y_5579_ = v___y_5613_;
v___y_5580_ = v___y_5612_;
v___y_5581_ = v___y_5615_;
v___y_5582_ = v___y_5617_;
v___y_5583_ = v___y_5618_;
v___y_5584_ = v___x_5627_;
v___y_5585_ = v___y_5619_;
v___y_5586_ = v___y_5620_;
v___y_5587_ = v___x_5629_;
goto v___jp_5564_;
}
else
{
lean_object* v_val_5630_; lean_object* v___x_5631_; 
lean_dec_ref(v___f_5427_);
v_val_5630_ = lean_ctor_get(v_val_5624_, 0);
lean_inc(v_val_5630_);
lean_dec_ref_known(v_val_5624_, 1);
v___x_5631_ = lean_apply_1(v___f_5428_, v_val_5630_);
v___y_5565_ = v___y_5600_;
v___y_5566_ = v___y_5601_;
v___y_5567_ = v___y_5602_;
v___y_5568_ = v___y_5603_;
v___y_5569_ = v___y_5604_;
v___y_5570_ = v___y_5605_;
v___y_5571_ = v___y_5606_;
v___y_5572_ = v___y_5607_;
v___y_5573_ = v___y_5608_;
v___y_5574_ = v___y_5609_;
v___y_5575_ = v___x_5623_;
v___y_5576_ = v_val_5625_;
v___y_5577_ = v___y_5610_;
v___y_5578_ = v___y_5614_;
v___y_5579_ = v___y_5613_;
v___y_5580_ = v___y_5612_;
v___y_5581_ = v___y_5615_;
v___y_5582_ = v___y_5617_;
v___y_5583_ = v___y_5618_;
v___y_5584_ = v___x_5627_;
v___y_5585_ = v___y_5619_;
v___y_5586_ = v___y_5620_;
v___y_5587_ = v___x_5631_;
goto v___jp_5564_;
}
}
else
{
lean_object* v___x_5632_; 
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
v___x_5632_ = lean_apply_2(v___f_5429_, v___y_5611_, v___y_5616_);
v___y_5499_ = v___y_5600_;
v___y_5500_ = v___y_5601_;
v___y_5501_ = v___y_5603_;
v___y_5502_ = v___y_5604_;
v___y_5503_ = v___y_5602_;
v___y_5504_ = v___y_5605_;
v___y_5505_ = v___y_5606_;
v___y_5506_ = v___y_5607_;
v___y_5507_ = v___y_5608_;
v___y_5508_ = v___x_5623_;
v___y_5509_ = v___y_5609_;
v___y_5510_ = v___y_5610_;
v___y_5511_ = v___y_5614_;
v___y_5512_ = v___y_5613_;
v___y_5513_ = v___y_5612_;
v___y_5514_ = v___y_5615_;
v___y_5515_ = v___y_5618_;
v___y_5516_ = v___y_5617_;
v___y_5517_ = v___y_5619_;
v___y_5518_ = v___y_5620_;
v___y_5519_ = v___x_5632_;
goto v___jp_5498_;
}
}
else
{
lean_object* v___x_5633_; 
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
v___x_5633_ = lean_apply_2(v___f_5429_, v___y_5611_, v___y_5616_);
v___y_5499_ = v___y_5600_;
v___y_5500_ = v___y_5601_;
v___y_5501_ = v___y_5603_;
v___y_5502_ = v___y_5604_;
v___y_5503_ = v___y_5602_;
v___y_5504_ = v___y_5605_;
v___y_5505_ = v___y_5606_;
v___y_5506_ = v___y_5607_;
v___y_5507_ = v___y_5608_;
v___y_5508_ = v___x_5623_;
v___y_5509_ = v___y_5609_;
v___y_5510_ = v___y_5610_;
v___y_5511_ = v___y_5614_;
v___y_5512_ = v___y_5613_;
v___y_5513_ = v___y_5612_;
v___y_5514_ = v___y_5615_;
v___y_5515_ = v___y_5618_;
v___y_5516_ = v___y_5617_;
v___y_5517_ = v___y_5619_;
v___y_5518_ = v___y_5620_;
v___y_5519_ = v___x_5633_;
goto v___jp_5498_;
}
}
v___jp_5634_:
{
lean_object* v___x_5657_; lean_object* v___x_5658_; 
lean_inc_ref(v___y_5636_);
v___x_5657_ = l_Array_append___redArg(v___y_5636_, v___y_5656_);
lean_dec_ref(v___y_5656_);
lean_inc(v___y_5637_);
lean_inc(v___y_5653_);
v___x_5658_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5658_, 0, v___y_5653_);
lean_ctor_set(v___x_5658_, 1, v___y_5637_);
lean_ctor_set(v___x_5658_, 2, v___x_5657_);
if (lean_obj_tag(v___y_5640_) == 0)
{
lean_object* v___x_5659_; lean_object* v___x_5660_; 
v___x_5659_ = lean_box(0);
lean_inc_ref(v___f_5427_);
v___x_5660_ = lean_apply_1(v___f_5427_, v___x_5659_);
v___y_5600_ = v___y_5635_;
v___y_5601_ = v___y_5636_;
v___y_5602_ = v___y_5637_;
v___y_5603_ = v___y_5638_;
v___y_5604_ = v___y_5639_;
v___y_5605_ = v___y_5641_;
v___y_5606_ = v___y_5642_;
v___y_5607_ = v___x_5658_;
v___y_5608_ = v___y_5643_;
v___y_5609_ = v___y_5644_;
v___y_5610_ = v___y_5645_;
v___y_5611_ = v___y_5649_;
v___y_5612_ = v___y_5648_;
v___y_5613_ = v___y_5647_;
v___y_5614_ = v___y_5646_;
v___y_5615_ = v___y_5650_;
v___y_5616_ = v___y_5652_;
v___y_5617_ = v___y_5651_;
v___y_5618_ = v___y_5653_;
v___y_5619_ = v___y_5654_;
v___y_5620_ = v___y_5655_;
v___y_5621_ = v___x_5660_;
goto v___jp_5599_;
}
else
{
lean_object* v_val_5661_; lean_object* v___x_5662_; 
v_val_5661_ = lean_ctor_get(v___y_5640_, 0);
lean_inc(v_val_5661_);
lean_dec_ref_known(v___y_5640_, 1);
lean_inc_ref(v___f_5428_);
v___x_5662_ = lean_apply_1(v___f_5428_, v_val_5661_);
v___y_5600_ = v___y_5635_;
v___y_5601_ = v___y_5636_;
v___y_5602_ = v___y_5637_;
v___y_5603_ = v___y_5638_;
v___y_5604_ = v___y_5639_;
v___y_5605_ = v___y_5641_;
v___y_5606_ = v___y_5642_;
v___y_5607_ = v___x_5658_;
v___y_5608_ = v___y_5643_;
v___y_5609_ = v___y_5644_;
v___y_5610_ = v___y_5645_;
v___y_5611_ = v___y_5649_;
v___y_5612_ = v___y_5648_;
v___y_5613_ = v___y_5647_;
v___y_5614_ = v___y_5646_;
v___y_5615_ = v___y_5650_;
v___y_5616_ = v___y_5652_;
v___y_5617_ = v___y_5651_;
v___y_5618_ = v___y_5653_;
v___y_5619_ = v___y_5654_;
v___y_5620_ = v___y_5655_;
v___y_5621_ = v___x_5662_;
goto v___jp_5599_;
}
}
v___jp_5663_:
{
lean_object* v___x_5686_; lean_object* v___x_5687_; 
lean_inc_ref(v___y_5664_);
v___x_5686_ = l_Array_append___redArg(v___y_5664_, v___y_5685_);
lean_dec_ref(v___y_5685_);
lean_inc(v___y_5666_);
lean_inc(v___y_5682_);
v___x_5687_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5687_, 0, v___y_5682_);
lean_ctor_set(v___x_5687_, 1, v___y_5666_);
lean_ctor_set(v___x_5687_, 2, v___x_5686_);
if (lean_obj_tag(v___y_5665_) == 1)
{
lean_object* v_val_5688_; lean_object* v___x_5689_; lean_object* v___x_5690_; lean_object* v___x_5691_; 
v_val_5688_ = lean_ctor_get(v___y_5665_, 0);
lean_inc(v_val_5688_);
lean_dec_ref_known(v___y_5665_, 1);
v___x_5689_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__3));
lean_inc(v___y_5682_);
v___x_5690_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5690_, 0, v___y_5682_);
lean_ctor_set(v___x_5690_, 1, v___x_5689_);
v___x_5691_ = l_Array_mkArray2___redArg(v___x_5690_, v_val_5688_);
v___y_5635_ = v___x_5687_;
v___y_5636_ = v___y_5664_;
v___y_5637_ = v___y_5666_;
v___y_5638_ = v___y_5667_;
v___y_5639_ = v___y_5668_;
v___y_5640_ = v___y_5669_;
v___y_5641_ = v___y_5670_;
v___y_5642_ = v___y_5671_;
v___y_5643_ = v___y_5672_;
v___y_5644_ = v___y_5673_;
v___y_5645_ = v___y_5674_;
v___y_5646_ = v___y_5678_;
v___y_5647_ = v___y_5677_;
v___y_5648_ = v___y_5676_;
v___y_5649_ = v___y_5675_;
v___y_5650_ = v___y_5679_;
v___y_5651_ = v___y_5681_;
v___y_5652_ = v___y_5680_;
v___y_5653_ = v___y_5682_;
v___y_5654_ = v___y_5683_;
v___y_5655_ = v___y_5684_;
v___y_5656_ = v___x_5691_;
goto v___jp_5634_;
}
else
{
lean_object* v___x_5692_; 
lean_dec(v___y_5665_);
v___x_5692_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___y_5635_ = v___x_5687_;
v___y_5636_ = v___y_5664_;
v___y_5637_ = v___y_5666_;
v___y_5638_ = v___y_5667_;
v___y_5639_ = v___y_5668_;
v___y_5640_ = v___y_5669_;
v___y_5641_ = v___y_5670_;
v___y_5642_ = v___y_5671_;
v___y_5643_ = v___y_5672_;
v___y_5644_ = v___y_5673_;
v___y_5645_ = v___y_5674_;
v___y_5646_ = v___y_5678_;
v___y_5647_ = v___y_5677_;
v___y_5648_ = v___y_5676_;
v___y_5649_ = v___y_5675_;
v___y_5650_ = v___y_5679_;
v___y_5651_ = v___y_5681_;
v___y_5652_ = v___y_5680_;
v___y_5653_ = v___y_5682_;
v___y_5654_ = v___y_5683_;
v___y_5655_ = v___y_5684_;
v___y_5656_ = v___x_5692_;
goto v___jp_5634_;
}
}
v___jp_5694_:
{
uint8_t v___x_5712_; lean_object* v___x_5713_; lean_object* v___x_5714_; lean_object* v___x_5715_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; 
v___x_5712_ = 0;
v___x_5713_ = l_Lean_SourceInfo_fromRef(v_ref_5710_, v___x_5712_);
v___x_5714_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__0));
lean_inc_ref(v___x_5430_);
lean_inc_ref(v___x_5425_);
lean_inc_ref(v___x_5424_);
lean_inc_ref(v___x_5423_);
v___x_5715_ = l_Lean_Name_mkStr5(v___x_5423_, v___x_5424_, v___x_5425_, v___x_5714_, v___x_5430_);
v___x_5716_ = l_Lean_SourceInfo_fromRef(v_tk_5693_, v___x_5426_);
lean_dec(v_tk_5693_);
v___x_5717_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5717_, 0, v___x_5716_);
lean_ctor_set(v___x_5717_, 1, v___x_5430_);
v___x_5718_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__48));
v___x_5719_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63, &l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__63);
if (lean_obj_tag(v___y_5699_) == 1)
{
lean_object* v_val_5720_; lean_object* v___x_5721_; lean_object* v___x_5722_; lean_object* v___x_5723_; lean_object* v___x_5724_; lean_object* v___x_5725_; lean_object* v___x_5726_; lean_object* v___x_5727_; 
v_val_5720_ = lean_ctor_get(v___y_5699_, 0);
lean_inc(v_val_5720_);
lean_dec_ref_known(v___y_5699_, 1);
v___x_5721_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__64));
lean_inc_n(v___x_5713_, 3);
v___x_5722_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5722_, 0, v___x_5713_);
lean_ctor_set(v___x_5722_, 1, v___x_5721_);
v___x_5723_ = l_Array_append___redArg(v___x_5719_, v_val_5720_);
lean_dec(v_val_5720_);
v___x_5724_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5724_, 0, v___x_5713_);
lean_ctor_set(v___x_5724_, 1, v___x_5718_);
lean_ctor_set(v___x_5724_, 2, v___x_5723_);
v___x_5725_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__66));
v___x_5726_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5726_, 0, v___x_5713_);
lean_ctor_set(v___x_5726_, 1, v___x_5725_);
v___x_5727_ = l_Array_mkArray3___redArg(v___x_5722_, v___x_5724_, v___x_5726_);
v___y_5664_ = v___x_5719_;
v___y_5665_ = v___y_5696_;
v___y_5666_ = v___x_5718_;
v___y_5667_ = v___y_5697_;
v___y_5668_ = v___y_5706_;
v___y_5669_ = v___y_5698_;
v___y_5670_ = v___y_5705_;
v___y_5671_ = v___y_5703_;
v___y_5672_ = v___y_5709_;
v___y_5673_ = v___y_5704_;
v___y_5674_ = v___x_5714_;
v___y_5675_ = v___y_5695_;
v___y_5676_ = v_cfg_5702_;
v___y_5677_ = v___x_5717_;
v___y_5678_ = v___y_5708_;
v___y_5679_ = v___y_5707_;
v___y_5680_ = v___y_5700_;
v___y_5681_ = v___x_5715_;
v___y_5682_ = v___x_5713_;
v___y_5683_ = v___y_5711_;
v___y_5684_ = v___y_5701_;
v___y_5685_ = v___x_5727_;
goto v___jp_5663_;
}
else
{
lean_object* v___x_5728_; 
lean_dec(v___y_5699_);
v___x_5728_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__0___closed__0));
v___y_5664_ = v___x_5719_;
v___y_5665_ = v___y_5696_;
v___y_5666_ = v___x_5718_;
v___y_5667_ = v___y_5697_;
v___y_5668_ = v___y_5706_;
v___y_5669_ = v___y_5698_;
v___y_5670_ = v___y_5705_;
v___y_5671_ = v___y_5703_;
v___y_5672_ = v___y_5709_;
v___y_5673_ = v___y_5704_;
v___y_5674_ = v___x_5714_;
v___y_5675_ = v___y_5695_;
v___y_5676_ = v_cfg_5702_;
v___y_5677_ = v___x_5717_;
v___y_5678_ = v___y_5708_;
v___y_5679_ = v___y_5707_;
v___y_5680_ = v___y_5700_;
v___y_5681_ = v___x_5715_;
v___y_5682_ = v___x_5713_;
v___y_5683_ = v___y_5711_;
v___y_5684_ = v___y_5701_;
v___y_5685_ = v___x_5728_;
goto v___jp_5663_;
}
}
v___jp_5729_:
{
if (lean_obj_tag(v___y_5743_) == 0)
{
lean_object* v_ref_5745_; lean_object* v_quotContext_5746_; lean_object* v_currMacroScope_5747_; uint8_t v___x_5748_; lean_object* v___x_5749_; lean_object* v___x_5750_; lean_object* v___x_5751_; lean_object* v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5755_; lean_object* v___x_5756_; lean_object* v___x_5757_; lean_object* v___x_5758_; lean_object* v___x_5759_; lean_object* v___x_5760_; lean_object* v___x_5761_; lean_object* v___x_5762_; lean_object* v___x_5763_; lean_object* v___x_5764_; lean_object* v___x_5765_; lean_object* v___x_5766_; 
v_ref_5745_ = lean_ctor_get(v___y_5742_, 5);
v_quotContext_5746_ = lean_ctor_get(v___y_5742_, 10);
v_currMacroScope_5747_ = lean_ctor_get(v___y_5742_, 11);
v___x_5748_ = 0;
v___x_5749_ = l_Lean_SourceInfo_fromRef(v_ref_5745_, v___x_5748_);
v___x_5750_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__48));
v___x_5751_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__49));
lean_inc_ref_n(v___x_5425_, 2);
lean_inc_ref_n(v___x_5424_, 2);
lean_inc_ref_n(v___x_5423_, 2);
v___x_5752_ = l_Lean_Name_mkStr4(v___x_5423_, v___x_5424_, v___x_5425_, v___x_5751_);
v___x_5753_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__57));
v___x_5754_ = l_Lean_Name_mkStr4(v___x_5423_, v___x_5424_, v___x_5425_, v___x_5753_);
v___x_5755_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_mkContext___closed__59));
lean_inc_n(v___x_5749_, 5);
v___x_5756_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5756_, 0, v___x_5749_);
lean_ctor_set(v___x_5756_, 1, v___x_5755_);
v___x_5757_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5, &l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5_once, _init_l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__5);
v___x_5758_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__6));
lean_inc(v_currMacroScope_5747_);
lean_inc(v_quotContext_5746_);
v___x_5759_ = l_Lean_addMacroScope(v_quotContext_5746_, v___x_5758_, v_currMacroScope_5747_);
v___x_5760_ = lean_box(0);
v___x_5761_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_5761_, 0, v___x_5749_);
lean_ctor_set(v___x_5761_, 1, v___x_5757_);
lean_ctor_set(v___x_5761_, 2, v___x_5759_);
lean_ctor_set(v___x_5761_, 3, v___x_5760_);
v___x_5762_ = l_Lean_Syntax_node2(v___x_5749_, v___x_5754_, v___x_5756_, v___x_5761_);
v___x_5763_ = l_Lean_Syntax_node1(v___x_5749_, v___x_5752_, v___x_5762_);
v___x_5764_ = l_Lean_Syntax_node1(v___x_5749_, v___x_5750_, v___x_5763_);
v___x_5765_ = l_Lean_Syntax_node1(v___x_5749_, v___x_5560_, v___x_5764_);
v___x_5766_ = l_Lean_Parser_Tactic_appendConfig(v___x_5765_, v_cfg_5558_);
v___y_5695_ = v___y_5738_;
v___y_5696_ = v___y_5730_;
v___y_5697_ = v___y_5731_;
v___y_5698_ = v___y_5744_;
v___y_5699_ = v___y_5732_;
v___y_5700_ = v___y_5741_;
v___y_5701_ = v___y_5743_;
v_cfg_5702_ = v___x_5766_;
v___y_5703_ = v___y_5740_;
v___y_5704_ = v___y_5735_;
v___y_5705_ = v___y_5733_;
v___y_5706_ = v___y_5736_;
v___y_5707_ = v___y_5734_;
v___y_5708_ = v___y_5739_;
v___y_5709_ = v___y_5742_;
v_ref_5710_ = v_ref_5745_;
v___y_5711_ = v___y_5737_;
goto v___jp_5694_;
}
else
{
lean_object* v_ref_5767_; 
lean_dec(v___x_5560_);
v_ref_5767_ = lean_ctor_get(v___y_5742_, 5);
v___y_5695_ = v___y_5738_;
v___y_5696_ = v___y_5730_;
v___y_5697_ = v___y_5731_;
v___y_5698_ = v___y_5744_;
v___y_5699_ = v___y_5732_;
v___y_5700_ = v___y_5741_;
v___y_5701_ = v___y_5743_;
v_cfg_5702_ = v_cfg_5558_;
v___y_5703_ = v___y_5740_;
v___y_5704_ = v___y_5735_;
v___y_5705_ = v___y_5733_;
v___y_5706_ = v___y_5736_;
v___y_5707_ = v___y_5734_;
v___y_5708_ = v___y_5739_;
v___y_5709_ = v___y_5742_;
v_ref_5710_ = v_ref_5767_;
v___y_5711_ = v___y_5737_;
goto v___jp_5694_;
}
}
v___jp_5768_:
{
lean_object* v___x_5784_; 
v___x_5784_ = l_Lean_Syntax_getOptional_x3f(v___y_5774_);
lean_dec(v___y_5774_);
if (lean_obj_tag(v___x_5784_) == 0)
{
lean_object* v___x_5785_; 
v___x_5785_ = lean_box(0);
v___y_5730_ = v___y_5770_;
v___y_5731_ = v___y_5771_;
v___y_5732_ = v___y_5772_;
v___y_5733_ = v___y_5778_;
v___y_5734_ = v___y_5780_;
v___y_5735_ = v___y_5777_;
v___y_5736_ = v___y_5779_;
v___y_5737_ = v___y_5783_;
v___y_5738_ = v___y_5769_;
v___y_5739_ = v___y_5781_;
v___y_5740_ = v___y_5776_;
v___y_5741_ = v___y_5773_;
v___y_5742_ = v___y_5782_;
v___y_5743_ = v_g_5775_;
v___y_5744_ = v___x_5785_;
goto v___jp_5729_;
}
else
{
lean_object* v_val_5786_; lean_object* v___x_5788_; uint8_t v_isShared_5789_; uint8_t v_isSharedCheck_5793_; 
v_val_5786_ = lean_ctor_get(v___x_5784_, 0);
v_isSharedCheck_5793_ = !lean_is_exclusive(v___x_5784_);
if (v_isSharedCheck_5793_ == 0)
{
v___x_5788_ = v___x_5784_;
v_isShared_5789_ = v_isSharedCheck_5793_;
goto v_resetjp_5787_;
}
else
{
lean_inc(v_val_5786_);
lean_dec(v___x_5784_);
v___x_5788_ = lean_box(0);
v_isShared_5789_ = v_isSharedCheck_5793_;
goto v_resetjp_5787_;
}
v_resetjp_5787_:
{
lean_object* v___x_5791_; 
if (v_isShared_5789_ == 0)
{
v___x_5791_ = v___x_5788_;
goto v_reusejp_5790_;
}
else
{
lean_object* v_reuseFailAlloc_5792_; 
v_reuseFailAlloc_5792_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5792_, 0, v_val_5786_);
v___x_5791_ = v_reuseFailAlloc_5792_;
goto v_reusejp_5790_;
}
v_reusejp_5790_:
{
v___y_5730_ = v___y_5770_;
v___y_5731_ = v___y_5771_;
v___y_5732_ = v___y_5772_;
v___y_5733_ = v___y_5778_;
v___y_5734_ = v___y_5780_;
v___y_5735_ = v___y_5777_;
v___y_5736_ = v___y_5779_;
v___y_5737_ = v___y_5783_;
v___y_5738_ = v___y_5769_;
v___y_5739_ = v___y_5781_;
v___y_5740_ = v___y_5776_;
v___y_5741_ = v___y_5773_;
v___y_5742_ = v___y_5782_;
v___y_5743_ = v_g_5775_;
v___y_5744_ = v___x_5791_;
goto v___jp_5729_;
}
}
}
}
v___jp_5795_:
{
lean_object* v___x_5810_; lean_object* v___x_5811_; uint8_t v___x_5812_; 
v___x_5810_ = lean_unsigned_to_nat(6u);
v___x_5811_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5810_);
v___x_5812_ = l_Lean_Syntax_isNone(v___x_5811_);
if (v___x_5812_ == 0)
{
uint8_t v___x_5813_; 
lean_inc(v___x_5811_);
v___x_5813_ = l_Lean_Syntax_matchesNull(v___x_5811_, v___x_5794_);
if (v___x_5813_ == 0)
{
lean_object* v___x_5814_; 
lean_dec(v___x_5811_);
lean_dec(v_thms_5801_);
lean_dec(v_sa_5800_);
lean_dec(v___y_5799_);
lean_dec(v___y_5798_);
lean_dec(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec(v_tk_5693_);
lean_dec(v___x_5560_);
lean_dec(v_cfg_5558_);
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5814_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5814_;
}
else
{
lean_object* v_g_5815_; lean_object* v___x_5816_; 
v_g_5815_ = l_Lean_Syntax_getArg(v___x_5811_, v___x_5557_);
lean_dec(v___x_5811_);
v___x_5816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5816_, 0, v_g_5815_);
v___y_5769_ = v_sa_5800_;
v___y_5770_ = v___y_5796_;
v___y_5771_ = v___y_5797_;
v___y_5772_ = v___y_5798_;
v___y_5773_ = v_thms_5801_;
v___y_5774_ = v___y_5799_;
v_g_5775_ = v___x_5816_;
v___y_5776_ = v___y_5802_;
v___y_5777_ = v___y_5803_;
v___y_5778_ = v___y_5804_;
v___y_5779_ = v___y_5805_;
v___y_5780_ = v___y_5806_;
v___y_5781_ = v___y_5807_;
v___y_5782_ = v___y_5808_;
v___y_5783_ = v___y_5809_;
goto v___jp_5768_;
}
}
else
{
lean_object* v___x_5817_; 
lean_dec(v___x_5811_);
v___x_5817_ = lean_box(0);
v___y_5769_ = v_sa_5800_;
v___y_5770_ = v___y_5796_;
v___y_5771_ = v___y_5797_;
v___y_5772_ = v___y_5798_;
v___y_5773_ = v_thms_5801_;
v___y_5774_ = v___y_5799_;
v_g_5775_ = v___x_5817_;
v___y_5776_ = v___y_5802_;
v___y_5777_ = v___y_5803_;
v___y_5778_ = v___y_5804_;
v___y_5779_ = v___y_5805_;
v___y_5780_ = v___y_5806_;
v___y_5781_ = v___y_5807_;
v___y_5782_ = v___y_5808_;
v___y_5783_ = v___y_5809_;
goto v___jp_5768_;
}
}
v___jp_5818_:
{
lean_object* v___x_5833_; lean_object* v___x_5834_; 
v___x_5833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5833_, 0, v___y_5832_);
v___x_5834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5834_, 0, v___y_5822_);
v___y_5796_ = v___y_5819_;
v___y_5797_ = v___y_5820_;
v___y_5798_ = v___y_5821_;
v___y_5799_ = v___y_5830_;
v_sa_5800_ = v___x_5833_;
v_thms_5801_ = v___x_5834_;
v___y_5802_ = v___y_5824_;
v___y_5803_ = v___y_5831_;
v___y_5804_ = v___y_5827_;
v___y_5805_ = v___y_5825_;
v___y_5806_ = v___y_5828_;
v___y_5807_ = v___y_5829_;
v___y_5808_ = v___y_5823_;
v___y_5809_ = v___y_5826_;
goto v___jp_5795_;
}
v___jp_5835_:
{
lean_object* v___x_5850_; 
v___x_5850_ = l_Lean_Syntax_getOptional_x3f(v___y_5839_);
lean_dec(v___y_5839_);
if (lean_obj_tag(v___x_5850_) == 0)
{
lean_object* v___x_5851_; 
v___x_5851_ = lean_box(0);
v___y_5819_ = v___y_5836_;
v___y_5820_ = v___y_5837_;
v___y_5821_ = v___y_5838_;
v___y_5822_ = v_thms_5841_;
v___y_5823_ = v___y_5848_;
v___y_5824_ = v___y_5842_;
v___y_5825_ = v___y_5845_;
v___y_5826_ = v___y_5849_;
v___y_5827_ = v___y_5844_;
v___y_5828_ = v___y_5846_;
v___y_5829_ = v___y_5847_;
v___y_5830_ = v___y_5840_;
v___y_5831_ = v___y_5843_;
v___y_5832_ = v___x_5851_;
goto v___jp_5818_;
}
else
{
lean_object* v_val_5852_; lean_object* v___x_5854_; uint8_t v_isShared_5855_; uint8_t v_isSharedCheck_5859_; 
v_val_5852_ = lean_ctor_get(v___x_5850_, 0);
v_isSharedCheck_5859_ = !lean_is_exclusive(v___x_5850_);
if (v_isSharedCheck_5859_ == 0)
{
v___x_5854_ = v___x_5850_;
v_isShared_5855_ = v_isSharedCheck_5859_;
goto v_resetjp_5853_;
}
else
{
lean_inc(v_val_5852_);
lean_dec(v___x_5850_);
v___x_5854_ = lean_box(0);
v_isShared_5855_ = v_isSharedCheck_5859_;
goto v_resetjp_5853_;
}
v_resetjp_5853_:
{
lean_object* v___x_5857_; 
if (v_isShared_5855_ == 0)
{
v___x_5857_ = v___x_5854_;
goto v_reusejp_5856_;
}
else
{
lean_object* v_reuseFailAlloc_5858_; 
v_reuseFailAlloc_5858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5858_, 0, v_val_5852_);
v___x_5857_ = v_reuseFailAlloc_5858_;
goto v_reusejp_5856_;
}
v_reusejp_5856_:
{
v___y_5819_ = v___y_5836_;
v___y_5820_ = v___y_5837_;
v___y_5821_ = v___y_5838_;
v___y_5822_ = v_thms_5841_;
v___y_5823_ = v___y_5848_;
v___y_5824_ = v___y_5842_;
v___y_5825_ = v___y_5845_;
v___y_5826_ = v___y_5849_;
v___y_5827_ = v___y_5844_;
v___y_5828_ = v___y_5846_;
v___y_5829_ = v___y_5847_;
v___y_5830_ = v___y_5840_;
v___y_5831_ = v___y_5843_;
v___y_5832_ = v___x_5857_;
goto v___jp_5818_;
}
}
}
}
v___jp_5860_:
{
lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; uint8_t v___x_5876_; 
v___x_5872_ = lean_unsigned_to_nat(4u);
v___x_5873_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5872_);
v___x_5874_ = lean_unsigned_to_nat(5u);
v___x_5875_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5874_);
v___x_5876_ = l_Lean_Syntax_isNone(v___x_5875_);
if (v___x_5876_ == 0)
{
uint8_t v___x_5877_; 
lean_inc(v___x_5875_);
v___x_5877_ = l_Lean_Syntax_matchesNull(v___x_5875_, v___y_5861_);
if (v___x_5877_ == 0)
{
lean_object* v___x_5878_; 
lean_dec(v___x_5875_);
lean_dec(v___x_5873_);
lean_dec(v_u_5863_);
lean_dec(v___y_5862_);
lean_dec(v_tk_5693_);
lean_dec(v___x_5560_);
lean_dec(v_cfg_5558_);
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5878_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5878_;
}
else
{
lean_object* v___x_5879_; lean_object* v___x_5880_; uint8_t v___x_5881_; 
v___x_5879_ = l_Lean_Syntax_getArg(v___x_5875_, v___x_5557_);
v___x_5880_ = l_Lean_Syntax_getArg(v___x_5875_, v___x_5794_);
lean_dec(v___x_5875_);
v___x_5881_ = l_Lean_Syntax_isNone(v___x_5880_);
if (v___x_5881_ == 0)
{
uint8_t v___x_5882_; 
lean_inc(v___x_5880_);
v___x_5882_ = l_Lean_Syntax_matchesNull(v___x_5880_, v___y_5861_);
if (v___x_5882_ == 0)
{
lean_object* v___x_5883_; 
lean_dec(v___x_5880_);
lean_dec(v___x_5879_);
lean_dec(v___x_5873_);
lean_dec(v_u_5863_);
lean_dec(v___y_5862_);
lean_dec(v_tk_5693_);
lean_dec(v___x_5560_);
lean_dec(v_cfg_5558_);
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5883_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5883_;
}
else
{
lean_object* v___x_5884_; lean_object* v_thms_5885_; lean_object* v___x_5886_; 
v___x_5884_ = l_Lean_Syntax_getArg(v___x_5880_, v___x_5557_);
lean_dec(v___x_5880_);
v_thms_5885_ = l_Lean_Syntax_getArgs(v___x_5884_);
lean_dec(v___x_5884_);
v___x_5886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5886_, 0, v_thms_5885_);
v___y_5836_ = v_u_5863_;
v___y_5837_ = v___x_5874_;
v___y_5838_ = v___y_5862_;
v___y_5839_ = v___x_5879_;
v___y_5840_ = v___x_5873_;
v_thms_5841_ = v___x_5886_;
v___y_5842_ = v___y_5864_;
v___y_5843_ = v___y_5865_;
v___y_5844_ = v___y_5866_;
v___y_5845_ = v___y_5867_;
v___y_5846_ = v___y_5868_;
v___y_5847_ = v___y_5869_;
v___y_5848_ = v___y_5870_;
v___y_5849_ = v___y_5871_;
goto v___jp_5835_;
}
}
else
{
lean_object* v___x_5887_; 
lean_dec(v___x_5880_);
v___x_5887_ = lean_box(0);
v___y_5836_ = v_u_5863_;
v___y_5837_ = v___x_5874_;
v___y_5838_ = v___y_5862_;
v___y_5839_ = v___x_5879_;
v___y_5840_ = v___x_5873_;
v_thms_5841_ = v___x_5887_;
v___y_5842_ = v___y_5864_;
v___y_5843_ = v___y_5865_;
v___y_5844_ = v___y_5866_;
v___y_5845_ = v___y_5867_;
v___y_5846_ = v___y_5868_;
v___y_5847_ = v___y_5869_;
v___y_5848_ = v___y_5870_;
v___y_5849_ = v___y_5871_;
goto v___jp_5835_;
}
}
}
else
{
lean_object* v___x_5888_; 
lean_dec(v___x_5875_);
v___x_5888_ = lean_box(0);
v___y_5796_ = v_u_5863_;
v___y_5797_ = v___x_5874_;
v___y_5798_ = v___y_5862_;
v___y_5799_ = v___x_5873_;
v_sa_5800_ = v___x_5888_;
v_thms_5801_ = v___x_5888_;
v___y_5802_ = v___y_5864_;
v___y_5803_ = v___y_5865_;
v___y_5804_ = v___y_5866_;
v___y_5805_ = v___y_5867_;
v___y_5806_ = v___y_5868_;
v___y_5807_ = v___y_5869_;
v___y_5808_ = v___y_5870_;
v___y_5809_ = v___y_5871_;
goto v___jp_5795_;
}
}
v___jp_5889_:
{
lean_object* v___x_5899_; lean_object* v___x_5900_; uint8_t v___x_5901_; 
v___x_5899_ = lean_unsigned_to_nat(3u);
v___x_5900_ = l_Lean_Syntax_getArg(v_stx_5422_, v___x_5899_);
v___x_5901_ = l_Lean_Syntax_isNone(v___x_5900_);
if (v___x_5901_ == 0)
{
uint8_t v___x_5902_; 
lean_inc(v___x_5900_);
v___x_5902_ = l_Lean_Syntax_matchesNull(v___x_5900_, v___x_5794_);
if (v___x_5902_ == 0)
{
lean_object* v___x_5903_; 
lean_dec(v___x_5900_);
lean_dec(v_lems_5890_);
lean_dec(v_tk_5693_);
lean_dec(v___x_5560_);
lean_dec(v_cfg_5558_);
lean_dec_ref(v___x_5430_);
lean_dec_ref(v___f_5429_);
lean_dec_ref(v___f_5428_);
lean_dec_ref(v___f_5427_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___x_5903_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__0___redArg();
return v___x_5903_;
}
else
{
lean_object* v_u_5904_; lean_object* v___x_5905_; 
v_u_5904_ = l_Lean_Syntax_getArg(v___x_5900_, v___x_5557_);
lean_dec(v___x_5900_);
v___x_5905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5905_, 0, v_u_5904_);
v___y_5861_ = v___x_5899_;
v___y_5862_ = v_lems_5890_;
v_u_5863_ = v___x_5905_;
v___y_5864_ = v___y_5891_;
v___y_5865_ = v___y_5892_;
v___y_5866_ = v___y_5893_;
v___y_5867_ = v___y_5894_;
v___y_5868_ = v___y_5895_;
v___y_5869_ = v___y_5896_;
v___y_5870_ = v___y_5897_;
v___y_5871_ = v___y_5898_;
goto v___jp_5860_;
}
}
else
{
lean_object* v___x_5906_; 
lean_dec(v___x_5900_);
v___x_5906_ = lean_box(0);
v___y_5861_ = v___x_5899_;
v___y_5862_ = v_lems_5890_;
v_u_5863_ = v___x_5906_;
v___y_5864_ = v___y_5891_;
v___y_5865_ = v___y_5892_;
v___y_5866_ = v___y_5893_;
v___y_5867_ = v___y_5894_;
v___y_5868_ = v___y_5895_;
v___y_5869_ = v___y_5896_;
v___y_5870_ = v___y_5897_;
v___y_5871_ = v___y_5898_;
goto v___jp_5860_;
}
}
}
}
v___jp_5440_:
{
lean_object* v___x_5451_; 
v___x_5451_ = l_Lean_Elab_Tactic_getMainGoal___redArg(v___y_5444_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
if (lean_obj_tag(v___x_5451_) == 0)
{
lean_object* v_a_5452_; uint8_t v___x_5453_; lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; lean_object* v___x_5457_; lean_object* v___x_5458_; lean_object* v___x_5459_; lean_object* v___x_5460_; lean_object* v___x_5461_; lean_object* v___x_5462_; lean_object* v___x_5463_; lean_object* v___x_5464_; 
v_a_5452_ = lean_ctor_get(v___x_5451_, 0);
lean_inc(v_a_5452_);
lean_dec_ref_known(v___x_5451_, 1);
v___x_5453_ = 0;
v___x_5454_ = lean_unsigned_to_nat(9u);
v___x_5455_ = lean_unsigned_to_nat(8u);
v___x_5456_ = lean_unsigned_to_nat(1000u);
v___x_5457_ = lean_unsigned_to_nat(100000u);
v___x_5458_ = lean_unsigned_to_nat(1024u);
v___x_5459_ = lean_unsigned_to_nat(1048576u);
v___x_5460_ = lean_unsigned_to_nat(10u);
v___x_5461_ = lean_unsigned_to_nat(50u);
v___x_5462_ = lean_box(0);
v___x_5463_ = lean_alloc_ctor(0, 13, 32);
lean_ctor_set(v___x_5463_, 0, v___x_5454_);
lean_ctor_set(v___x_5463_, 1, v___y_5441_);
lean_ctor_set(v___x_5463_, 2, v___x_5455_);
lean_ctor_set(v___x_5463_, 3, v___x_5455_);
lean_ctor_set(v___x_5463_, 4, v___x_5456_);
lean_ctor_set(v___x_5463_, 5, v___x_5456_);
lean_ctor_set(v___x_5463_, 6, v___x_5457_);
lean_ctor_set(v___x_5463_, 7, v___x_5458_);
lean_ctor_set(v___x_5463_, 8, v___x_5456_);
lean_ctor_set(v___x_5463_, 9, v___x_5459_);
lean_ctor_set(v___x_5463_, 10, v___x_5460_);
lean_ctor_set(v___x_5463_, 11, v___x_5461_);
lean_ctor_set(v___x_5463_, 12, v___x_5462_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 1, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 2, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 3, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 4, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 5, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 6, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 7, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 8, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 9, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 10, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 11, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 12, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 13, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 14, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 15, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 16, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 17, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 18, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 19, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 20, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 21, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 22, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 23, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 24, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 25, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 26, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 27, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 28, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 29, v___x_5453_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 30, v___x_5426_);
lean_ctor_set_uint8(v___x_5463_, sizeof(void*)*13 + 31, v___x_5426_);
v___x_5464_ = l_Lean_Meta_Grind_mkDefaultParams(v___x_5463_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
if (lean_obj_tag(v___x_5464_) == 0)
{
lean_object* v_a_5465_; lean_object* v___x_5466_; lean_object* v___x_5467_; 
v_a_5465_ = lean_ctor_get(v___x_5464_, 0);
lean_inc(v_a_5465_);
lean_dec_ref_known(v___x_5464_, 1);
v___x_5466_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Grind_evalGrindTactic___boxed), 10, 1);
lean_closure_set(v___x_5466_, 0, v_step_5442_);
v___x_5467_ = l_Lean_Elab_Tactic_Grind_GrindTacticM_runAtGoal___redArg(v_a_5452_, v_a_5465_, v___x_5466_, v___x_5426_, v___y_5443_, v___y_5445_, v___y_5446_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
if (lean_obj_tag(v___x_5467_) == 0)
{
lean_object* v_a_5468_; lean_object* v_snd_5469_; lean_object* v_goals_5470_; lean_object* v___x_5471_; lean_object* v___x_5472_; lean_object* v___x_5473_; 
v_a_5468_ = lean_ctor_get(v___x_5467_, 0);
lean_inc(v_a_5468_);
lean_dec_ref_known(v___x_5467_, 1);
v_snd_5469_ = lean_ctor_get(v_a_5468_, 1);
lean_inc(v_snd_5469_);
lean_dec(v_a_5468_);
v_goals_5470_ = lean_ctor_get(v_snd_5469_, 2);
lean_inc(v_goals_5470_);
lean_dec(v_snd_5469_);
v___x_5471_ = lean_box(0);
v___x_5472_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_spec__1(v_goals_5470_, v___x_5471_);
v___x_5473_ = l_Lean_Elab_Tactic_replaceMainGoal___redArg(v___x_5472_, v___y_5444_, v___y_5447_, v___y_5448_, v___y_5449_, v___y_5450_);
return v___x_5473_;
}
else
{
lean_object* v_a_5474_; lean_object* v___x_5476_; uint8_t v_isShared_5477_; uint8_t v_isSharedCheck_5481_; 
v_a_5474_ = lean_ctor_get(v___x_5467_, 0);
v_isSharedCheck_5481_ = !lean_is_exclusive(v___x_5467_);
if (v_isSharedCheck_5481_ == 0)
{
v___x_5476_ = v___x_5467_;
v_isShared_5477_ = v_isSharedCheck_5481_;
goto v_resetjp_5475_;
}
else
{
lean_inc(v_a_5474_);
lean_dec(v___x_5467_);
v___x_5476_ = lean_box(0);
v_isShared_5477_ = v_isSharedCheck_5481_;
goto v_resetjp_5475_;
}
v_resetjp_5475_:
{
lean_object* v___x_5479_; 
if (v_isShared_5477_ == 0)
{
v___x_5479_ = v___x_5476_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v_a_5474_);
v___x_5479_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
return v___x_5479_;
}
}
}
}
else
{
lean_object* v_a_5482_; lean_object* v___x_5484_; uint8_t v_isShared_5485_; uint8_t v_isSharedCheck_5489_; 
lean_dec(v_a_5452_);
lean_dec(v_step_5442_);
v_a_5482_ = lean_ctor_get(v___x_5464_, 0);
v_isSharedCheck_5489_ = !lean_is_exclusive(v___x_5464_);
if (v_isSharedCheck_5489_ == 0)
{
v___x_5484_ = v___x_5464_;
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
else
{
lean_inc(v_a_5482_);
lean_dec(v___x_5464_);
v___x_5484_ = lean_box(0);
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
v_resetjp_5483_:
{
lean_object* v___x_5487_; 
if (v_isShared_5485_ == 0)
{
v___x_5487_ = v___x_5484_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v_a_5482_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
return v___x_5487_;
}
}
}
}
else
{
lean_object* v_a_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5497_; 
lean_dec(v_step_5442_);
lean_dec(v___y_5441_);
v_a_5490_ = lean_ctor_get(v___x_5451_, 0);
v_isSharedCheck_5497_ = !lean_is_exclusive(v___x_5451_);
if (v_isSharedCheck_5497_ == 0)
{
v___x_5492_ = v___x_5451_;
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_a_5490_);
lean_dec(v___x_5451_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5495_; 
if (v_isShared_5493_ == 0)
{
v___x_5495_ = v___x_5492_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5496_; 
v_reuseFailAlloc_5496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5496_, 0, v_a_5490_);
v___x_5495_ = v_reuseFailAlloc_5496_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
return v___x_5495_;
}
}
}
}
v___jp_5498_:
{
lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; 
v___x_5520_ = l_Array_append___redArg(v___y_5500_, v___y_5519_);
lean_dec_ref(v___y_5519_);
lean_inc(v___y_5503_);
lean_inc_n(v___y_5515_, 2);
v___x_5521_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5521_, 0, v___y_5515_);
lean_ctor_set(v___x_5521_, 1, v___y_5503_);
lean_ctor_set(v___x_5521_, 2, v___x_5520_);
v___x_5522_ = l_Lean_Syntax_node6(v___y_5515_, v___y_5516_, v___y_5512_, v___y_5513_, v___y_5499_, v___y_5506_, v___y_5508_, v___x_5521_);
if (lean_obj_tag(v___y_5518_) == 0)
{
lean_dec(v___y_5515_);
lean_dec_ref(v___y_5510_);
lean_dec_ref(v___x_5425_);
lean_dec_ref(v___x_5424_);
lean_dec_ref(v___x_5423_);
v___y_5441_ = v___y_5501_;
v_step_5442_ = v___x_5522_;
v___y_5443_ = v___y_5505_;
v___y_5444_ = v___y_5509_;
v___y_5445_ = v___y_5504_;
v___y_5446_ = v___y_5502_;
v___y_5447_ = v___y_5514_;
v___y_5448_ = v___y_5511_;
v___y_5449_ = v___y_5507_;
v___y_5450_ = v___y_5517_;
goto v___jp_5440_;
}
else
{
lean_object* v_val_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; lean_object* v___x_5527_; lean_object* v___x_5528_; 
v_val_5523_ = lean_ctor_get(v___y_5518_, 0);
lean_inc(v_val_5523_);
lean_dec_ref_known(v___y_5518_, 1);
v___x_5524_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__0));
v___x_5525_ = l_Lean_Name_mkStr5(v___x_5423_, v___x_5424_, v___x_5425_, v___y_5510_, v___x_5524_);
v___x_5526_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___closed__1));
lean_inc(v___y_5515_);
v___x_5527_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_5527_, 0, v___y_5515_);
lean_ctor_set(v___x_5527_, 1, v___x_5526_);
v___x_5528_ = l_Lean_Syntax_node3(v___y_5515_, v___x_5525_, v___x_5522_, v___x_5527_, v_val_5523_);
v___y_5441_ = v___y_5501_;
v_step_5442_ = v___x_5528_;
v___y_5443_ = v___y_5505_;
v___y_5444_ = v___y_5509_;
v___y_5445_ = v___y_5504_;
v___y_5446_ = v___y_5502_;
v___y_5447_ = v___y_5514_;
v___y_5448_ = v___y_5511_;
v___y_5449_ = v___y_5507_;
v___y_5450_ = v___y_5517_;
goto v___jp_5440_;
}
}
v___jp_5529_:
{
lean_object* v___x_5553_; lean_object* v___x_5554_; lean_object* v___x_5555_; 
lean_inc_ref(v___y_5531_);
v___x_5553_ = l_Array_append___redArg(v___y_5531_, v___y_5552_);
lean_dec_ref(v___y_5552_);
lean_inc(v___y_5533_);
lean_inc(v___y_5548_);
v___x_5554_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_5554_, 0, v___y_5548_);
lean_ctor_set(v___x_5554_, 1, v___y_5533_);
lean_ctor_set(v___x_5554_, 2, v___x_5553_);
v___x_5555_ = l_Array_mkArray3___redArg(v___y_5550_, v___y_5532_, v___x_5554_);
v___y_5499_ = v___y_5530_;
v___y_5500_ = v___y_5531_;
v___y_5501_ = v___y_5534_;
v___y_5502_ = v___y_5535_;
v___y_5503_ = v___y_5533_;
v___y_5504_ = v___y_5536_;
v___y_5505_ = v___y_5537_;
v___y_5506_ = v___y_5538_;
v___y_5507_ = v___y_5539_;
v___y_5508_ = v___y_5541_;
v___y_5509_ = v___y_5540_;
v___y_5510_ = v___y_5542_;
v___y_5511_ = v___y_5545_;
v___y_5512_ = v___y_5544_;
v___y_5513_ = v___y_5543_;
v___y_5514_ = v___y_5546_;
v___y_5515_ = v___y_5548_;
v___y_5516_ = v___y_5547_;
v___y_5517_ = v___y_5549_;
v___y_5518_ = v___y_5551_;
v___y_5519_ = v___x_5555_;
goto v___jp_5498_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___boxed(lean_object** _args){
lean_object* v___x_5916_ = _args[0];
lean_object* v_stx_5917_ = _args[1];
lean_object* v___x_5918_ = _args[2];
lean_object* v___x_5919_ = _args[3];
lean_object* v___x_5920_ = _args[4];
lean_object* v___x_5921_ = _args[5];
lean_object* v___f_5922_ = _args[6];
lean_object* v___f_5923_ = _args[7];
lean_object* v___f_5924_ = _args[8];
lean_object* v___x_5925_ = _args[9];
lean_object* v___y_5926_ = _args[10];
lean_object* v___y_5927_ = _args[11];
lean_object* v___y_5928_ = _args[12];
lean_object* v___y_5929_ = _args[13];
lean_object* v___y_5930_ = _args[14];
lean_object* v___y_5931_ = _args[15];
lean_object* v___y_5932_ = _args[16];
lean_object* v___y_5933_ = _args[17];
lean_object* v___y_5934_ = _args[18];
_start:
{
uint8_t v___x_10950__boxed_5935_; uint8_t v___x_10954__boxed_5936_; lean_object* v_res_5937_; 
v___x_10950__boxed_5935_ = lean_unbox(v___x_5916_);
v___x_10954__boxed_5936_ = lean_unbox(v___x_5921_);
v_res_5937_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3(v___x_10950__boxed_5935_, v_stx_5917_, v___x_5918_, v___x_5919_, v___x_5920_, v___x_10954__boxed_5936_, v___f_5922_, v___f_5923_, v___f_5924_, v___x_5925_, v___y_5926_, v___y_5927_, v___y_5928_, v___y_5929_, v___y_5930_, v___y_5931_, v___y_5932_, v___y_5933_);
lean_dec(v___y_5933_);
lean_dec_ref(v___y_5932_);
lean_dec(v___y_5931_);
lean_dec_ref(v___y_5930_);
lean_dec(v___y_5929_);
lean_dec_ref(v___y_5928_);
lean_dec(v___y_5927_);
lean_dec_ref(v___y_5926_);
lean_dec(v_stx_5917_);
return v_res_5937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(lean_object* v_stx_5946_, lean_object* v_a_5947_, lean_object* v_a_5948_, lean_object* v_a_5949_, lean_object* v_a_5950_, lean_object* v_a_5951_, lean_object* v_a_5952_, lean_object* v_a_5953_, lean_object* v_a_5954_){
_start:
{
lean_object* v___f_5956_; lean_object* v___f_5957_; lean_object* v___f_5958_; lean_object* v___x_5959_; lean_object* v___x_5960_; lean_object* v___x_5961_; lean_object* v___x_5962_; lean_object* v___x_5963_; uint8_t v___x_5964_; uint8_t v___x_5965_; lean_object* v___x_5966_; lean_object* v___x_5967_; lean_object* v___y_5968_; lean_object* v___x_5969_; 
v___f_5956_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__0));
v___f_5957_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__1));
v___f_5958_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__2));
v___x_5959_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__0));
v___x_5960_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__1));
v___x_5961_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_mkContext_spec__3___closed__2));
v___x_5962_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1___closed__1));
v___x_5963_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3));
lean_inc(v_stx_5946_);
v___x_5964_ = l_Lean_Syntax_isOfKind(v_stx_5946_, v___x_5963_);
v___x_5965_ = 1;
v___x_5966_ = lean_box(v___x_5964_);
v___x_5967_ = lean_box(v___x_5965_);
v___y_5968_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___lam__3___boxed), 19, 10);
lean_closure_set(v___y_5968_, 0, v___x_5966_);
lean_closure_set(v___y_5968_, 1, v_stx_5946_);
lean_closure_set(v___y_5968_, 2, v___x_5959_);
lean_closure_set(v___y_5968_, 3, v___x_5960_);
lean_closure_set(v___y_5968_, 4, v___x_5961_);
lean_closure_set(v___y_5968_, 5, v___x_5967_);
lean_closure_set(v___y_5968_, 6, v___f_5957_);
lean_closure_set(v___y_5968_, 7, v___f_5958_);
lean_closure_set(v___y_5968_, 8, v___f_5956_);
lean_closure_set(v___y_5968_, 9, v___x_5962_);
v___x_5969_ = l_Lean_Elab_Tactic_withMainContext___redArg(v___y_5968_, v_a_5947_, v_a_5948_, v_a_5949_, v_a_5950_, v_a_5951_, v_a_5952_, v_a_5953_, v_a_5954_);
return v___x_5969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed(lean_object* v_stx_5970_, lean_object* v_a_5971_, lean_object* v_a_5972_, lean_object* v_a_5973_, lean_object* v_a_5974_, lean_object* v_a_5975_, lean_object* v_a_5976_, lean_object* v_a_5977_, lean_object* v_a_5978_, lean_object* v_a_5979_){
_start:
{
lean_object* v_res_5980_; 
v_res_5980_ = l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27(v_stx_5970_, v_a_5971_, v_a_5972_, v_a_5973_, v_a_5974_, v_a_5975_, v_a_5976_, v_a_5977_, v_a_5978_);
lean_dec(v_a_5978_);
lean_dec_ref(v_a_5977_);
lean_dec(v_a_5976_);
lean_dec_ref(v_a_5975_);
lean_dec(v_a_5974_);
lean_dec_ref(v_a_5973_);
lean_dec(v_a_5972_);
lean_dec_ref(v_a_5971_);
return v_res_5980_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1(){
_start:
{
lean_object* v___x_5990_; lean_object* v___x_5991_; lean_object* v___x_5992_; lean_object* v___x_5993_; lean_object* v___x_5994_; 
v___x_5990_ = l_Lean_Elab_Tactic_tacticElabAttribute;
v___x_5991_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___closed__3));
v___x_5992_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1));
v___x_5993_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___boxed), 10, 0);
v___x_5994_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_5990_, v___x_5991_, v___x_5992_, v___x_5993_);
return v___x_5994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___boxed(lean_object* v_a_5995_){
_start:
{
lean_object* v_res_5996_; 
v_res_5996_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
return v_res_5996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3(){
_start:
{
lean_object* v___x_5999_; lean_object* v___x_6000_; lean_object* v___x_6001_; 
v___x_5999_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1___closed__1));
v___x_6000_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___closed__0));
v___x_6001_ = l_Lean_addBuiltinDocString(v___x_5999_, v___x_6000_);
return v___x_6001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3___boxed(lean_object* v_a_6002_){
_start:
{
lean_object* v_res_6003_; 
v_res_6003_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
return v_res_6003_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_VCGen(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_ProofInstInfo(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_VCGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_ProofInstInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27___regBuiltin___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_evalSymMVCGen_x27_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend_0__Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27___regBuiltin_Lean_Elab_Tactic_Do_Internal_elabMVCGen_x27_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_VCGen(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Attr(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_ControlFlow(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_EvalGround(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Forall(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Rewrite(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Simp_Simproc(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Grind_Basic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_ProofInstInfo(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Do_VCGen_SuggestInvariant(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_VCGen(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_ControlFlow(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_EvalGround(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Forall(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Rewrite(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Simp_Simproc(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Grind_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_ProofInstInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Frontend(builtin);
}
#ifdef __cplusplus
}
#endif
