// Lean compiler output
// Module: Lean.Elab.Tactic.Do.Internal.VCGen.Driver
// Imports: public import Lean.Elab.Tactic.Meta public import Lean.Elab.Tactic.Do.Internal.VCGen.Context public import Lean.Elab.Tactic.Do.Internal.VCGen.Solve public import Lean.Meta.Sym.Grind
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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setKind___redArg(lean_object*, uint8_t, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_set(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_MetavarContext_getExprAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Array_mkArray0(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_unfoldReducible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint64_t l_Lean_Meta_Context_configKey(lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint64_t lean_uint64_shift_left(uint64_t, uint64_t);
uint64_t l_Lean_Meta_TransparencyMode_toUInt64(uint8_t);
uint64_t lean_uint64_lor(uint64_t, uint64_t);
lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Sym_preprocessMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* lean_erase_macro_scopes(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1;
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1_value;
static const lean_array_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "invariantDotAlt"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__4_value),LEAN_SCALAR_PTR_LITERAL(174, 218, 225, 197, 89, 244, 133, 64)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invariantCaseAlt"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__6_value),LEAN_SCALAR_PTR_LITERAL(163, 146, 32, 128, 83, 151, 179, 6)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "caseArg"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__8_value),LEAN_SCALAR_PTR_LITERAL(151, 119, 254, 229, 232, 21, 225, 201)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__10_value),LEAN_SCALAR_PTR_LITERAL(117, 253, 122, 28, 77, 248, 149, 120)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__13_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__15_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__17_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "renameI"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__19_value),LEAN_SCALAR_PTR_LITERAL(20, 41, 101, 89, 107, 117, 242, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rename_i"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ";"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__3_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26_value;
static const lean_string_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "cdotTk"};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__27 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__27_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__28_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__27_value),LEAN_SCALAR_PTR_LITERAL(117, 126, 44, 217, 38, 3, 69, 145)}};
static const lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__28_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0 = (const lean_object*)&l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object**);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "SpecProof.global "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__0_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__1;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.local "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__2 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__2_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__3;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "SpecProof.stx _ "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__4 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__4_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__5;
static const lean_string_object l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__6 = (const lean_object*)&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__6_value;
static lean_once_cell_t l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__7;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "No spec matching the monad "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__1;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " found for program "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__2 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__3;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ". Candidates were "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__4 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__5;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__6 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__6_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7;
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "No spec found for program "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__8 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__8_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__9;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "Did not know how to decompose weakest precondition for "};
static const lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "vc"};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0 = (const lean_object*)&l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3;
static lean_once_cell_t l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(lean_object* v_mvarId_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_mctx_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_mctx_5_ = lean_ctor_get(v___x_4_, 0);
lean_inc_ref(v_mctx_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_MetavarContext_getExprAssignmentCore_x3f(v_mctx_5_, v_mvarId_1_);
lean_dec_ref(v_mctx_5_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg___boxed(lean_object* v_mvarId_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v_res_11_; 
v_res_11_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(v_mvarId_8_, v___y_9_);
lean_dec(v___y_9_);
lean_dec(v_mvarId_8_);
return v_res_11_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2(lean_object* v_mvarId_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(v_mvarId_12_, v___y_16_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___boxed(lean_object* v_mvarId_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2(v_mvarId_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v_mvarId_21_);
return v_res_29_;
}
}
LEAN_EXPORT uint8_t l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__0(lean_object* v_x_30_){
_start:
{
uint8_t v___x_31_; 
v___x_31_ = 0;
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__0___boxed(lean_object* v_x_32_){
_start:
{
uint8_t v_res_33_; lean_object* v_r_34_; 
v_res_33_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__0(v_x_32_);
lean_dec(v_x_32_);
v_r_34_ = lean_box(v_res_33_);
return v_r_34_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v_keys_35_, lean_object* v_i_36_, lean_object* v_k_37_){
_start:
{
lean_object* v___x_38_; uint8_t v___x_39_; 
v___x_38_ = lean_array_get_size(v_keys_35_);
v___x_39_ = lean_nat_dec_lt(v_i_36_, v___x_38_);
if (v___x_39_ == 0)
{
lean_dec(v_i_36_);
return v___x_39_;
}
else
{
lean_object* v_k_x27_40_; uint8_t v___x_41_; 
v_k_x27_40_ = lean_array_fget_borrowed(v_keys_35_, v_i_36_);
v___x_41_ = l_Lean_instBEqMVarId_beq(v_k_37_, v_k_x27_40_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = lean_unsigned_to_nat(1u);
v___x_43_ = lean_nat_add(v_i_36_, v___x_42_);
lean_dec(v_i_36_);
v_i_36_ = v___x_43_;
goto _start;
}
else
{
lean_dec(v_i_36_);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v_keys_45_, lean_object* v_i_46_, lean_object* v_k_47_){
_start:
{
uint8_t v_res_48_; lean_object* v_r_49_; 
v_res_48_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_keys_45_, v_i_46_, v_k_47_);
lean_dec(v_k_47_);
lean_dec_ref(v_keys_45_);
v_r_49_ = lean_box(v_res_48_);
return v_r_49_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0(void){
_start:
{
size_t v___x_50_; size_t v___x_51_; size_t v___x_52_; 
v___x_50_ = ((size_t)5ULL);
v___x_51_ = ((size_t)1ULL);
v___x_52_ = lean_usize_shift_left(v___x_51_, v___x_50_);
return v___x_52_;
}
}
static size_t _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_53_; size_t v___x_54_; size_t v___x_55_; 
v___x_53_ = ((size_t)1ULL);
v___x_54_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__0);
v___x_55_ = lean_usize_sub(v___x_54_, v___x_53_);
return v___x_55_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(lean_object* v_x_56_, size_t v_x_57_, lean_object* v_x_58_){
_start:
{
if (lean_obj_tag(v_x_56_) == 0)
{
lean_object* v_es_59_; lean_object* v___x_60_; size_t v___x_61_; size_t v___x_62_; size_t v___x_63_; lean_object* v_j_64_; lean_object* v___x_65_; 
v_es_59_ = lean_ctor_get(v_x_56_, 0);
v___x_60_ = lean_box(2);
v___x_61_ = ((size_t)5ULL);
v___x_62_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_63_ = lean_usize_land(v_x_57_, v___x_62_);
v_j_64_ = lean_usize_to_nat(v___x_63_);
v___x_65_ = lean_array_get_borrowed(v___x_60_, v_es_59_, v_j_64_);
lean_dec(v_j_64_);
switch(lean_obj_tag(v___x_65_))
{
case 0:
{
lean_object* v_key_66_; uint8_t v___x_67_; 
v_key_66_ = lean_ctor_get(v___x_65_, 0);
v___x_67_ = l_Lean_instBEqMVarId_beq(v_x_58_, v_key_66_);
return v___x_67_;
}
case 1:
{
lean_object* v_node_68_; size_t v___x_69_; 
v_node_68_ = lean_ctor_get(v___x_65_, 0);
v___x_69_ = lean_usize_shift_right(v_x_57_, v___x_61_);
v_x_56_ = v_node_68_;
v_x_57_ = v___x_69_;
goto _start;
}
default: 
{
uint8_t v___x_71_; 
v___x_71_ = 0;
return v___x_71_;
}
}
}
else
{
lean_object* v_ks_72_; lean_object* v___x_73_; uint8_t v___x_74_; 
v_ks_72_ = lean_ctor_get(v_x_56_, 0);
v___x_73_ = lean_unsigned_to_nat(0u);
v___x_74_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_ks_72_, v___x_73_, v_x_58_);
return v___x_74_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_x_75_, lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
size_t v_x_17597__boxed_78_; uint8_t v_res_79_; lean_object* v_r_80_; 
v_x_17597__boxed_78_ = lean_unbox_usize(v_x_76_);
lean_dec(v_x_76_);
v_res_79_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_75_, v_x_17597__boxed_78_, v_x_77_);
lean_dec(v_x_77_);
lean_dec_ref(v_x_75_);
v_r_80_ = lean_box(v_res_79_);
return v_r_80_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(lean_object* v_x_81_, lean_object* v_x_82_){
_start:
{
uint64_t v___x_83_; size_t v___x_84_; uint8_t v___x_85_; 
v___x_83_ = l_Lean_instHashableMVarId_hash(v_x_82_);
v___x_84_ = lean_uint64_to_usize(v___x_83_);
v___x_85_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_81_, v___x_84_, v_x_82_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg___boxed(lean_object* v_x_86_, lean_object* v_x_87_){
_start:
{
uint8_t v_res_88_; lean_object* v_r_89_; 
v_res_88_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_x_86_, v_x_87_);
lean_dec(v_x_87_);
lean_dec_ref(v_x_86_);
v_r_89_ = lean_box(v_res_88_);
return v_r_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(lean_object* v_mvarId_90_, lean_object* v___y_91_){
_start:
{
lean_object* v___x_93_; lean_object* v_mctx_94_; lean_object* v_eAssignment_95_; uint8_t v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_93_ = lean_st_ref_get(v___y_91_);
v_mctx_94_ = lean_ctor_get(v___x_93_, 0);
lean_inc_ref(v_mctx_94_);
lean_dec(v___x_93_);
v_eAssignment_95_ = lean_ctor_get(v_mctx_94_, 8);
lean_inc_ref(v_eAssignment_95_);
lean_dec_ref(v_mctx_94_);
v___x_96_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_95_, v_mvarId_90_);
lean_dec_ref(v_eAssignment_95_);
v___x_97_ = lean_box(v___x_96_);
v___x_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg___boxed(lean_object* v_mvarId_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(v_mvarId_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec(v_mvarId_99_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(lean_object* v_x_103_, lean_object* v_x_104_, lean_object* v_x_105_, lean_object* v_x_106_){
_start:
{
lean_object* v_ks_107_; lean_object* v_vs_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_132_; 
v_ks_107_ = lean_ctor_get(v_x_103_, 0);
v_vs_108_ = lean_ctor_get(v_x_103_, 1);
v_isSharedCheck_132_ = !lean_is_exclusive(v_x_103_);
if (v_isSharedCheck_132_ == 0)
{
v___x_110_ = v_x_103_;
v_isShared_111_ = v_isSharedCheck_132_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_vs_108_);
lean_inc(v_ks_107_);
lean_dec(v_x_103_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_132_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_112_; uint8_t v___x_113_; 
v___x_112_ = lean_array_get_size(v_ks_107_);
v___x_113_ = lean_nat_dec_lt(v_x_104_, v___x_112_);
if (v___x_113_ == 0)
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_117_; 
lean_dec(v_x_104_);
v___x_114_ = lean_array_push(v_ks_107_, v_x_105_);
v___x_115_ = lean_array_push(v_vs_108_, v_x_106_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_115_);
lean_ctor_set(v___x_110_, 0, v___x_114_);
v___x_117_ = v___x_110_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_118_, 1, v___x_115_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
else
{
lean_object* v_k_x27_119_; uint8_t v___x_120_; 
v_k_x27_119_ = lean_array_fget_borrowed(v_ks_107_, v_x_104_);
v___x_120_ = l_Lean_instBEqMVarId_beq(v_x_105_, v_k_x27_119_);
if (v___x_120_ == 0)
{
lean_object* v___x_122_; 
if (v_isShared_111_ == 0)
{
v___x_122_ = v___x_110_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_ks_107_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v_vs_108_);
v___x_122_ = v_reuseFailAlloc_126_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_123_ = lean_unsigned_to_nat(1u);
v___x_124_ = lean_nat_add(v_x_104_, v___x_123_);
lean_dec(v_x_104_);
v_x_103_ = v___x_122_;
v_x_104_ = v___x_124_;
goto _start;
}
}
else
{
lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_130_; 
v___x_127_ = lean_array_fset(v_ks_107_, v_x_104_, v_x_105_);
v___x_128_ = lean_array_fset(v_vs_108_, v_x_104_, v_x_106_);
lean_dec(v_x_104_);
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 1, v___x_128_);
lean_ctor_set(v___x_110_, 0, v___x_127_);
v___x_130_ = v___x_110_;
goto v_reusejp_129_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_127_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___x_128_);
v___x_130_ = v_reuseFailAlloc_131_;
goto v_reusejp_129_;
}
v_reusejp_129_:
{
return v___x_130_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(lean_object* v_n_133_, lean_object* v_k_134_, lean_object* v_v_135_){
_start:
{
lean_object* v___x_136_; lean_object* v___x_137_; 
v___x_136_ = lean_unsigned_to_nat(0u);
v___x_137_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_n_133_, v___x_136_, v_k_134_, v_v_135_);
return v___x_137_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0(void){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(lean_object* v_x_139_, size_t v_x_140_, size_t v_x_141_, lean_object* v_x_142_, lean_object* v_x_143_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_object* v_es_144_; size_t v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; lean_object* v_j_149_; lean_object* v___x_150_; uint8_t v___x_151_; 
v_es_144_ = lean_ctor_get(v_x_139_, 0);
v___x_145_ = ((size_t)5ULL);
v___x_146_ = ((size_t)1ULL);
v___x_147_ = lean_usize_once(&l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg___closed__1);
v___x_148_ = lean_usize_land(v_x_140_, v___x_147_);
v_j_149_ = lean_usize_to_nat(v___x_148_);
v___x_150_ = lean_array_get_size(v_es_144_);
v___x_151_ = lean_nat_dec_lt(v_j_149_, v___x_150_);
if (v___x_151_ == 0)
{
lean_dec(v_j_149_);
lean_dec(v_x_143_);
lean_dec(v_x_142_);
return v_x_139_;
}
else
{
lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_188_; 
lean_inc_ref(v_es_144_);
v_isSharedCheck_188_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_188_ == 0)
{
lean_object* v_unused_189_; 
v_unused_189_ = lean_ctor_get(v_x_139_, 0);
lean_dec(v_unused_189_);
v___x_153_ = v_x_139_;
v_isShared_154_ = v_isSharedCheck_188_;
goto v_resetjp_152_;
}
else
{
lean_dec(v_x_139_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_188_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
lean_object* v_v_155_; lean_object* v___x_156_; lean_object* v_xs_x27_157_; lean_object* v___y_159_; 
v_v_155_ = lean_array_fget(v_es_144_, v_j_149_);
v___x_156_ = lean_box(0);
v_xs_x27_157_ = lean_array_fset(v_es_144_, v_j_149_, v___x_156_);
switch(lean_obj_tag(v_v_155_))
{
case 0:
{
lean_object* v_key_164_; lean_object* v_val_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_175_; 
v_key_164_ = lean_ctor_get(v_v_155_, 0);
v_val_165_ = lean_ctor_get(v_v_155_, 1);
v_isSharedCheck_175_ = !lean_is_exclusive(v_v_155_);
if (v_isSharedCheck_175_ == 0)
{
v___x_167_ = v_v_155_;
v_isShared_168_ = v_isSharedCheck_175_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_val_165_);
lean_inc(v_key_164_);
lean_dec(v_v_155_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_175_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
uint8_t v___x_169_; 
v___x_169_ = l_Lean_instBEqMVarId_beq(v_x_142_, v_key_164_);
if (v___x_169_ == 0)
{
lean_object* v___x_170_; lean_object* v___x_171_; 
lean_del_object(v___x_167_);
v___x_170_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_164_, v_val_165_, v_x_142_, v_x_143_);
v___x_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_171_, 0, v___x_170_);
v___y_159_ = v___x_171_;
goto v___jp_158_;
}
else
{
lean_object* v___x_173_; 
lean_dec(v_val_165_);
lean_dec(v_key_164_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v_x_143_);
lean_ctor_set(v___x_167_, 0, v_x_142_);
v___x_173_ = v___x_167_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_174_; 
v_reuseFailAlloc_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_174_, 0, v_x_142_);
lean_ctor_set(v_reuseFailAlloc_174_, 1, v_x_143_);
v___x_173_ = v_reuseFailAlloc_174_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
v___y_159_ = v___x_173_;
goto v___jp_158_;
}
}
}
}
case 1:
{
lean_object* v_node_176_; lean_object* v___x_178_; uint8_t v_isShared_179_; uint8_t v_isSharedCheck_186_; 
v_node_176_ = lean_ctor_get(v_v_155_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v_v_155_);
if (v_isSharedCheck_186_ == 0)
{
v___x_178_ = v_v_155_;
v_isShared_179_ = v_isSharedCheck_186_;
goto v_resetjp_177_;
}
else
{
lean_inc(v_node_176_);
lean_dec(v_v_155_);
v___x_178_ = lean_box(0);
v_isShared_179_ = v_isSharedCheck_186_;
goto v_resetjp_177_;
}
v_resetjp_177_:
{
size_t v___x_180_; size_t v___x_181_; lean_object* v___x_182_; lean_object* v___x_184_; 
v___x_180_ = lean_usize_shift_right(v_x_140_, v___x_145_);
v___x_181_ = lean_usize_add(v_x_141_, v___x_146_);
v___x_182_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_node_176_, v___x_180_, v___x_181_, v_x_142_, v_x_143_);
if (v_isShared_179_ == 0)
{
lean_ctor_set(v___x_178_, 0, v___x_182_);
v___x_184_ = v___x_178_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v___x_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
v___y_159_ = v___x_184_;
goto v___jp_158_;
}
}
}
default: 
{
lean_object* v___x_187_; 
v___x_187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_187_, 0, v_x_142_);
lean_ctor_set(v___x_187_, 1, v_x_143_);
v___y_159_ = v___x_187_;
goto v___jp_158_;
}
}
v___jp_158_:
{
lean_object* v___x_160_; lean_object* v___x_162_; 
v___x_160_ = lean_array_fset(v_xs_x27_157_, v_j_149_, v___y_159_);
lean_dec(v_j_149_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v___x_160_);
v___x_162_ = v___x_153_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v___x_160_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
}
}
}
else
{
lean_object* v_ks_190_; lean_object* v_vs_191_; lean_object* v___x_193_; uint8_t v_isShared_194_; uint8_t v_isSharedCheck_211_; 
v_ks_190_ = lean_ctor_get(v_x_139_, 0);
v_vs_191_ = lean_ctor_get(v_x_139_, 1);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_139_);
if (v_isSharedCheck_211_ == 0)
{
v___x_193_ = v_x_139_;
v_isShared_194_ = v_isSharedCheck_211_;
goto v_resetjp_192_;
}
else
{
lean_inc(v_vs_191_);
lean_inc(v_ks_190_);
lean_dec(v_x_139_);
v___x_193_ = lean_box(0);
v_isShared_194_ = v_isSharedCheck_211_;
goto v_resetjp_192_;
}
v_resetjp_192_:
{
lean_object* v___x_196_; 
if (v_isShared_194_ == 0)
{
v___x_196_ = v___x_193_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_ks_190_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v_vs_191_);
v___x_196_ = v_reuseFailAlloc_210_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
lean_object* v_newNode_197_; uint8_t v___y_199_; size_t v___x_205_; uint8_t v___x_206_; 
v_newNode_197_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(v___x_196_, v_x_142_, v_x_143_);
v___x_205_ = ((size_t)7ULL);
v___x_206_ = lean_usize_dec_le(v___x_205_, v_x_141_);
if (v___x_206_ == 0)
{
lean_object* v___x_207_; lean_object* v___x_208_; uint8_t v___x_209_; 
v___x_207_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_197_);
v___x_208_ = lean_unsigned_to_nat(4u);
v___x_209_ = lean_nat_dec_lt(v___x_207_, v___x_208_);
lean_dec(v___x_207_);
v___y_199_ = v___x_209_;
goto v___jp_198_;
}
else
{
v___y_199_ = v___x_206_;
goto v___jp_198_;
}
v___jp_198_:
{
if (v___y_199_ == 0)
{
lean_object* v_ks_200_; lean_object* v_vs_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_ks_200_ = lean_ctor_get(v_newNode_197_, 0);
lean_inc_ref(v_ks_200_);
v_vs_201_ = lean_ctor_get(v_newNode_197_, 1);
lean_inc_ref(v_vs_201_);
lean_dec_ref(v_newNode_197_);
v___x_202_ = lean_unsigned_to_nat(0u);
v___x_203_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___closed__0);
v___x_204_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_x_141_, v_ks_200_, v_vs_201_, v___x_202_, v___x_203_);
lean_dec_ref(v_vs_201_);
lean_dec_ref(v_ks_200_);
return v___x_204_;
}
else
{
return v_newNode_197_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(size_t v_depth_212_, lean_object* v_keys_213_, lean_object* v_vals_214_, lean_object* v_i_215_, lean_object* v_entries_216_){
_start:
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = lean_array_get_size(v_keys_213_);
v___x_218_ = lean_nat_dec_lt(v_i_215_, v___x_217_);
if (v___x_218_ == 0)
{
lean_dec(v_i_215_);
return v_entries_216_;
}
else
{
lean_object* v_k_219_; lean_object* v_v_220_; uint64_t v___x_221_; size_t v_h_222_; size_t v___x_223_; lean_object* v___x_224_; size_t v___x_225_; size_t v___x_226_; size_t v___x_227_; size_t v_h_228_; lean_object* v___x_229_; lean_object* v___x_230_; 
v_k_219_ = lean_array_fget_borrowed(v_keys_213_, v_i_215_);
v_v_220_ = lean_array_fget_borrowed(v_vals_214_, v_i_215_);
v___x_221_ = l_Lean_instHashableMVarId_hash(v_k_219_);
v_h_222_ = lean_uint64_to_usize(v___x_221_);
v___x_223_ = ((size_t)5ULL);
v___x_224_ = lean_unsigned_to_nat(1u);
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_sub(v_depth_212_, v___x_225_);
v___x_227_ = lean_usize_mul(v___x_223_, v___x_226_);
v_h_228_ = lean_usize_shift_right(v_h_222_, v___x_227_);
v___x_229_ = lean_nat_add(v_i_215_, v___x_224_);
lean_dec(v_i_215_);
lean_inc(v_v_220_);
lean_inc(v_k_219_);
v___x_230_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_entries_216_, v_h_228_, v_depth_212_, v_k_219_, v_v_220_);
v_i_215_ = v___x_229_;
v_entries_216_ = v___x_230_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg___boxed(lean_object* v_depth_232_, lean_object* v_keys_233_, lean_object* v_vals_234_, lean_object* v_i_235_, lean_object* v_entries_236_){
_start:
{
size_t v_depth_boxed_237_; lean_object* v_res_238_; 
v_depth_boxed_237_ = lean_unbox_usize(v_depth_232_);
lean_dec(v_depth_232_);
v_res_238_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_depth_boxed_237_, v_keys_233_, v_vals_234_, v_i_235_, v_entries_236_);
lean_dec_ref(v_vals_234_);
lean_dec_ref(v_keys_233_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_x_239_, lean_object* v_x_240_, lean_object* v_x_241_, lean_object* v_x_242_, lean_object* v_x_243_){
_start:
{
size_t v_x_17752__boxed_244_; size_t v_x_17753__boxed_245_; lean_object* v_res_246_; 
v_x_17752__boxed_244_ = lean_unbox_usize(v_x_240_);
lean_dec(v_x_240_);
v_x_17753__boxed_245_ = lean_unbox_usize(v_x_241_);
lean_dec(v_x_241_);
v_res_246_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_239_, v_x_17752__boxed_244_, v_x_17753__boxed_245_, v_x_242_, v_x_243_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
uint64_t v___x_250_; size_t v___x_251_; size_t v___x_252_; lean_object* v___x_253_; 
v___x_250_ = l_Lean_instHashableMVarId_hash(v_x_248_);
v___x_251_ = lean_uint64_to_usize(v___x_250_);
v___x_252_ = ((size_t)1ULL);
v___x_253_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_247_, v___x_251_, v___x_252_, v_x_248_, v_x_249_);
return v___x_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(lean_object* v_mvarId_254_, lean_object* v_val_255_, lean_object* v___y_256_){
_start:
{
lean_object* v___x_258_; lean_object* v_mctx_259_; lean_object* v_cache_260_; lean_object* v_zetaDeltaFVarIds_261_; lean_object* v_postponed_262_; lean_object* v_diag_263_; lean_object* v___x_265_; uint8_t v_isShared_266_; uint8_t v_isSharedCheck_291_; 
v___x_258_ = lean_st_ref_take(v___y_256_);
v_mctx_259_ = lean_ctor_get(v___x_258_, 0);
v_cache_260_ = lean_ctor_get(v___x_258_, 1);
v_zetaDeltaFVarIds_261_ = lean_ctor_get(v___x_258_, 2);
v_postponed_262_ = lean_ctor_get(v___x_258_, 3);
v_diag_263_ = lean_ctor_get(v___x_258_, 4);
v_isSharedCheck_291_ = !lean_is_exclusive(v___x_258_);
if (v_isSharedCheck_291_ == 0)
{
v___x_265_ = v___x_258_;
v_isShared_266_ = v_isSharedCheck_291_;
goto v_resetjp_264_;
}
else
{
lean_inc(v_diag_263_);
lean_inc(v_postponed_262_);
lean_inc(v_zetaDeltaFVarIds_261_);
lean_inc(v_cache_260_);
lean_inc(v_mctx_259_);
lean_dec(v___x_258_);
v___x_265_ = lean_box(0);
v_isShared_266_ = v_isSharedCheck_291_;
goto v_resetjp_264_;
}
v_resetjp_264_:
{
lean_object* v_depth_267_; lean_object* v_levelAssignDepth_268_; lean_object* v_lmvarCounter_269_; lean_object* v_mvarCounter_270_; lean_object* v_lDecls_271_; lean_object* v_decls_272_; lean_object* v_userNames_273_; lean_object* v_lAssignment_274_; lean_object* v_eAssignment_275_; lean_object* v_dAssignment_276_; lean_object* v___x_278_; uint8_t v_isShared_279_; uint8_t v_isSharedCheck_290_; 
v_depth_267_ = lean_ctor_get(v_mctx_259_, 0);
v_levelAssignDepth_268_ = lean_ctor_get(v_mctx_259_, 1);
v_lmvarCounter_269_ = lean_ctor_get(v_mctx_259_, 2);
v_mvarCounter_270_ = lean_ctor_get(v_mctx_259_, 3);
v_lDecls_271_ = lean_ctor_get(v_mctx_259_, 4);
v_decls_272_ = lean_ctor_get(v_mctx_259_, 5);
v_userNames_273_ = lean_ctor_get(v_mctx_259_, 6);
v_lAssignment_274_ = lean_ctor_get(v_mctx_259_, 7);
v_eAssignment_275_ = lean_ctor_get(v_mctx_259_, 8);
v_dAssignment_276_ = lean_ctor_get(v_mctx_259_, 9);
v_isSharedCheck_290_ = !lean_is_exclusive(v_mctx_259_);
if (v_isSharedCheck_290_ == 0)
{
v___x_278_ = v_mctx_259_;
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
else
{
lean_inc(v_dAssignment_276_);
lean_inc(v_eAssignment_275_);
lean_inc(v_lAssignment_274_);
lean_inc(v_userNames_273_);
lean_inc(v_decls_272_);
lean_inc(v_lDecls_271_);
lean_inc(v_mvarCounter_270_);
lean_inc(v_lmvarCounter_269_);
lean_inc(v_levelAssignDepth_268_);
lean_inc(v_depth_267_);
lean_dec(v_mctx_259_);
v___x_278_ = lean_box(0);
v_isShared_279_ = v_isSharedCheck_290_;
goto v_resetjp_277_;
}
v_resetjp_277_:
{
lean_object* v___x_280_; lean_object* v___x_282_; 
v___x_280_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(v_eAssignment_275_, v_mvarId_254_, v_val_255_);
if (v_isShared_279_ == 0)
{
lean_ctor_set(v___x_278_, 8, v___x_280_);
v___x_282_ = v___x_278_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v_depth_267_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_levelAssignDepth_268_);
lean_ctor_set(v_reuseFailAlloc_289_, 2, v_lmvarCounter_269_);
lean_ctor_set(v_reuseFailAlloc_289_, 3, v_mvarCounter_270_);
lean_ctor_set(v_reuseFailAlloc_289_, 4, v_lDecls_271_);
lean_ctor_set(v_reuseFailAlloc_289_, 5, v_decls_272_);
lean_ctor_set(v_reuseFailAlloc_289_, 6, v_userNames_273_);
lean_ctor_set(v_reuseFailAlloc_289_, 7, v_lAssignment_274_);
lean_ctor_set(v_reuseFailAlloc_289_, 8, v___x_280_);
lean_ctor_set(v_reuseFailAlloc_289_, 9, v_dAssignment_276_);
v___x_282_ = v_reuseFailAlloc_289_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
lean_object* v___x_284_; 
if (v_isShared_266_ == 0)
{
lean_ctor_set(v___x_265_, 0, v___x_282_);
v___x_284_ = v___x_265_;
goto v_reusejp_283_;
}
else
{
lean_object* v_reuseFailAlloc_288_; 
v_reuseFailAlloc_288_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_288_, 0, v___x_282_);
lean_ctor_set(v_reuseFailAlloc_288_, 1, v_cache_260_);
lean_ctor_set(v_reuseFailAlloc_288_, 2, v_zetaDeltaFVarIds_261_);
lean_ctor_set(v_reuseFailAlloc_288_, 3, v_postponed_262_);
lean_ctor_set(v_reuseFailAlloc_288_, 4, v_diag_263_);
v___x_284_ = v_reuseFailAlloc_288_;
goto v_reusejp_283_;
}
v_reusejp_283_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
v___x_285_ = lean_st_ref_set(v___y_256_, v___x_284_);
v___x_286_ = lean_box(0);
v___x_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
return v___x_287_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg___boxed(lean_object* v_mvarId_292_, lean_object* v_val_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(v_mvarId_292_, v_val_293_, v___y_294_);
lean_dec(v___y_294_);
return v_res_296_;
}
}
static uint64_t _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__4(void){
_start:
{
uint8_t v___x_308_; uint64_t v___x_309_; 
v___x_308_ = 1;
v___x_309_ = l_Lean_Meta_TransparencyMode_toUInt64(v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(lean_object* v___f_310_, lean_object* v_mv_311_, lean_object* v_val_312_, lean_object* v_tac_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; lean_object* v___x_327_; uint8_t v___x_328_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v_fileName_367_; lean_object* v_fileMap_368_; lean_object* v_options_369_; lean_object* v_currRecDepth_370_; lean_object* v_maxRecDepth_371_; lean_object* v_ref_372_; lean_object* v_currNamespace_373_; lean_object* v_openDecls_374_; lean_object* v_initHeartbeats_375_; lean_object* v_maxHeartbeats_376_; lean_object* v_quotContext_377_; lean_object* v_currMacroScope_378_; uint8_t v_diag_379_; lean_object* v_cancelTk_x3f_380_; uint8_t v_suppressElabErrors_381_; lean_object* v_inheritedTraceOptions_382_; lean_object* v___x_383_; uint8_t v_foApprox_384_; uint8_t v_ctxApprox_385_; uint8_t v_quasiPatternApprox_386_; uint8_t v_constApprox_387_; uint8_t v_isDefEqStuckEx_388_; uint8_t v_unificationHints_389_; uint8_t v_proofIrrelevance_390_; uint8_t v_assignSyntheticOpaque_391_; uint8_t v_offsetCnstrs_392_; uint8_t v_etaStruct_393_; uint8_t v_univApprox_394_; uint8_t v_iota_395_; uint8_t v_beta_396_; uint8_t v_proj_397_; uint8_t v_zeta_398_; uint8_t v_zetaDelta_399_; uint8_t v_zetaUnused_400_; uint8_t v_zetaHave_401_; lean_object* v___x_403_; uint8_t v_isShared_404_; uint8_t v_isSharedCheck_439_; 
v___x_321_ = lean_box(0);
v___x_322_ = lean_box(0);
v___x_323_ = 1;
v___x_327_ = lean_box(1);
v___x_328_ = 0;
v___x_365_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__2));
v___x_366_ = lean_alloc_ctor(0, 8, 11);
lean_ctor_set(v___x_366_, 0, v___x_321_);
lean_ctor_set(v___x_366_, 1, v___x_322_);
lean_ctor_set(v___x_366_, 2, v___x_321_);
lean_ctor_set(v___x_366_, 3, v___f_310_);
lean_ctor_set(v___x_366_, 4, v___x_327_);
lean_ctor_set(v___x_366_, 5, v___x_327_);
lean_ctor_set(v___x_366_, 6, v___x_321_);
lean_ctor_set(v___x_366_, 7, v___x_365_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8, v___x_323_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 1, v___x_323_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 2, v___x_323_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 3, v___x_323_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 4, v___x_328_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 5, v___x_328_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 6, v___x_328_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 7, v___x_328_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 8, v___x_323_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 9, v___x_328_);
lean_ctor_set_uint8(v___x_366_, sizeof(void*)*8 + 10, v___x_323_);
v_fileName_367_ = lean_ctor_get(v___y_318_, 0);
v_fileMap_368_ = lean_ctor_get(v___y_318_, 1);
v_options_369_ = lean_ctor_get(v___y_318_, 2);
v_currRecDepth_370_ = lean_ctor_get(v___y_318_, 3);
v_maxRecDepth_371_ = lean_ctor_get(v___y_318_, 4);
v_ref_372_ = lean_ctor_get(v___y_318_, 5);
v_currNamespace_373_ = lean_ctor_get(v___y_318_, 6);
v_openDecls_374_ = lean_ctor_get(v___y_318_, 7);
v_initHeartbeats_375_ = lean_ctor_get(v___y_318_, 8);
v_maxHeartbeats_376_ = lean_ctor_get(v___y_318_, 9);
v_quotContext_377_ = lean_ctor_get(v___y_318_, 10);
v_currMacroScope_378_ = lean_ctor_get(v___y_318_, 11);
v_diag_379_ = lean_ctor_get_uint8(v___y_318_, sizeof(void*)*14);
v_cancelTk_x3f_380_ = lean_ctor_get(v___y_318_, 12);
v_suppressElabErrors_381_ = lean_ctor_get_uint8(v___y_318_, sizeof(void*)*14 + 1);
v_inheritedTraceOptions_382_ = lean_ctor_get(v___y_318_, 13);
v___x_383_ = l_Lean_Meta_Context_config(v___y_316_);
v_foApprox_384_ = lean_ctor_get_uint8(v___x_383_, 0);
v_ctxApprox_385_ = lean_ctor_get_uint8(v___x_383_, 1);
v_quasiPatternApprox_386_ = lean_ctor_get_uint8(v___x_383_, 2);
v_constApprox_387_ = lean_ctor_get_uint8(v___x_383_, 3);
v_isDefEqStuckEx_388_ = lean_ctor_get_uint8(v___x_383_, 4);
v_unificationHints_389_ = lean_ctor_get_uint8(v___x_383_, 5);
v_proofIrrelevance_390_ = lean_ctor_get_uint8(v___x_383_, 6);
v_assignSyntheticOpaque_391_ = lean_ctor_get_uint8(v___x_383_, 7);
v_offsetCnstrs_392_ = lean_ctor_get_uint8(v___x_383_, 8);
v_etaStruct_393_ = lean_ctor_get_uint8(v___x_383_, 10);
v_univApprox_394_ = lean_ctor_get_uint8(v___x_383_, 11);
v_iota_395_ = lean_ctor_get_uint8(v___x_383_, 12);
v_beta_396_ = lean_ctor_get_uint8(v___x_383_, 13);
v_proj_397_ = lean_ctor_get_uint8(v___x_383_, 14);
v_zeta_398_ = lean_ctor_get_uint8(v___x_383_, 15);
v_zetaDelta_399_ = lean_ctor_get_uint8(v___x_383_, 16);
v_zetaUnused_400_ = lean_ctor_get_uint8(v___x_383_, 17);
v_zetaHave_401_ = lean_ctor_get_uint8(v___x_383_, 18);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_383_);
if (v_isSharedCheck_439_ == 0)
{
v___x_403_ = v___x_383_;
v_isShared_404_ = v_isSharedCheck_439_;
goto v_resetjp_402_;
}
else
{
lean_dec(v___x_383_);
v___x_403_ = lean_box(0);
v_isShared_404_ = v_isSharedCheck_439_;
goto v_resetjp_402_;
}
v___jp_324_:
{
lean_object* v___x_325_; lean_object* v___x_326_; 
v___x_325_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__0));
v___x_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_326_, 0, v___x_325_);
return v___x_326_;
}
v___jp_329_:
{
lean_object* v___x_330_; lean_object* v_a_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_364_; 
v___x_330_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(v_mv_311_, v___y_317_);
v_a_331_ = lean_ctor_get(v___x_330_, 0);
v_isSharedCheck_364_ = !lean_is_exclusive(v___x_330_);
if (v_isSharedCheck_364_ == 0)
{
v___x_333_ = v___x_330_;
v_isShared_334_ = v_isSharedCheck_364_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_a_331_);
lean_dec(v___x_330_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_364_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
uint8_t v___x_335_; 
v___x_335_ = lean_unbox(v_a_331_);
lean_dec(v_a_331_);
if (v___x_335_ == 0)
{
lean_object* v___x_336_; lean_object* v___x_338_; 
lean_dec(v_mv_311_);
v___x_336_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__1));
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 0, v___x_336_);
v___x_338_ = v___x_333_;
goto v_reusejp_337_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v___x_336_);
v___x_338_ = v_reuseFailAlloc_339_;
goto v_reusejp_337_;
}
v_reusejp_337_:
{
return v___x_338_;
}
}
else
{
lean_object* v___x_340_; lean_object* v_a_341_; 
lean_del_object(v___x_333_);
v___x_340_ = l_Lean_getExprMVarAssignment_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__2___redArg(v_mv_311_, v___y_317_);
v_a_341_ = lean_ctor_get(v___x_340_, 0);
lean_inc(v_a_341_);
lean_dec_ref(v___x_340_);
if (lean_obj_tag(v_a_341_) == 1)
{
lean_object* v_val_342_; lean_object* v___x_343_; 
v_val_342_ = lean_ctor_get(v_a_341_, 0);
lean_inc(v_val_342_);
lean_dec_ref_known(v_a_341_, 1);
v___x_343_ = l_Lean_Meta_Sym_unfoldReducible(v_val_342_, v___y_316_, v___y_317_, v___y_318_, v___y_319_);
if (lean_obj_tag(v___x_343_) == 0)
{
lean_object* v_a_344_; lean_object* v___x_345_; 
v_a_344_ = lean_ctor_get(v___x_343_, 0);
lean_inc(v_a_344_);
lean_dec_ref_known(v___x_343_, 1);
v___x_345_ = l_Lean_Meta_Sym_shareCommon___redArg(v_a_344_, v___y_315_);
if (lean_obj_tag(v___x_345_) == 0)
{
lean_object* v_a_346_; lean_object* v___x_347_; 
v_a_346_ = lean_ctor_get(v___x_345_, 0);
lean_inc(v_a_346_);
lean_dec_ref_known(v___x_345_, 1);
v___x_347_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(v_mv_311_, v_a_346_, v___y_317_);
lean_dec_ref(v___x_347_);
goto v___jp_324_;
}
else
{
lean_object* v_a_348_; lean_object* v___x_350_; uint8_t v_isShared_351_; uint8_t v_isSharedCheck_355_; 
lean_dec(v_mv_311_);
v_a_348_ = lean_ctor_get(v___x_345_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_345_);
if (v_isSharedCheck_355_ == 0)
{
v___x_350_ = v___x_345_;
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
else
{
lean_inc(v_a_348_);
lean_dec(v___x_345_);
v___x_350_ = lean_box(0);
v_isShared_351_ = v_isSharedCheck_355_;
goto v_resetjp_349_;
}
v_resetjp_349_:
{
lean_object* v___x_353_; 
if (v_isShared_351_ == 0)
{
v___x_353_ = v___x_350_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_a_348_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
}
}
else
{
lean_object* v_a_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_363_; 
lean_dec(v_mv_311_);
v_a_356_ = lean_ctor_get(v___x_343_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_343_);
if (v_isSharedCheck_363_ == 0)
{
v___x_358_ = v___x_343_;
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_a_356_);
lean_dec(v___x_343_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_363_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_356_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
}
else
{
lean_dec(v_a_341_);
lean_dec(v_mv_311_);
goto v___jp_324_;
}
}
}
}
v_resetjp_402_:
{
uint8_t v_trackZetaDelta_405_; lean_object* v_zetaDeltaSet_406_; lean_object* v_lctx_407_; lean_object* v_localInstances_408_; lean_object* v_defEqCtx_x3f_409_; lean_object* v_synthPendingDepth_410_; lean_object* v_canUnfold_x3f_411_; uint8_t v_univApprox_412_; uint8_t v_inTypeClassResolution_413_; uint8_t v_cacheInferType_414_; uint8_t v___x_415_; lean_object* v_config_417_; 
v_trackZetaDelta_405_ = lean_ctor_get_uint8(v___y_316_, sizeof(void*)*7);
v_zetaDeltaSet_406_ = lean_ctor_get(v___y_316_, 1);
v_lctx_407_ = lean_ctor_get(v___y_316_, 2);
v_localInstances_408_ = lean_ctor_get(v___y_316_, 3);
v_defEqCtx_x3f_409_ = lean_ctor_get(v___y_316_, 4);
v_synthPendingDepth_410_ = lean_ctor_get(v___y_316_, 5);
v_canUnfold_x3f_411_ = lean_ctor_get(v___y_316_, 6);
v_univApprox_412_ = lean_ctor_get_uint8(v___y_316_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_413_ = lean_ctor_get_uint8(v___y_316_, sizeof(void*)*7 + 2);
v_cacheInferType_414_ = lean_ctor_get_uint8(v___y_316_, sizeof(void*)*7 + 3);
v___x_415_ = 1;
if (v_isShared_404_ == 0)
{
v_config_417_ = v___x_403_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 0, 19);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 0, v_foApprox_384_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 1, v_ctxApprox_385_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 2, v_quasiPatternApprox_386_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 3, v_constApprox_387_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 4, v_isDefEqStuckEx_388_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 5, v_unificationHints_389_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 6, v_proofIrrelevance_390_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 7, v_assignSyntheticOpaque_391_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 8, v_offsetCnstrs_392_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 10, v_etaStruct_393_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 11, v_univApprox_394_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 12, v_iota_395_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 13, v_beta_396_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 14, v_proj_397_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 15, v_zeta_398_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 16, v_zetaDelta_399_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 17, v_zetaUnused_400_);
lean_ctor_set_uint8(v_reuseFailAlloc_438_, 18, v_zetaHave_401_);
v_config_417_ = v_reuseFailAlloc_438_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
uint64_t v___x_418_; uint64_t v___x_419_; uint64_t v___x_420_; lean_object* v___x_421_; lean_object* v_ref_422_; lean_object* v___x_423_; uint64_t v___x_424_; uint64_t v___x_425_; uint64_t v_key_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; 
lean_ctor_set_uint8(v_config_417_, 9, v___x_415_);
v___x_418_ = l_Lean_Meta_Context_configKey(v___y_316_);
v___x_419_ = 3ULL;
v___x_420_ = lean_uint64_shift_right(v___x_418_, v___x_419_);
v___x_421_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__3));
v_ref_422_ = l_Lean_replaceRef(v_val_312_, v_ref_372_);
lean_inc_ref(v_inheritedTraceOptions_382_);
lean_inc(v_cancelTk_x3f_380_);
lean_inc(v_currMacroScope_378_);
lean_inc(v_quotContext_377_);
lean_inc(v_maxHeartbeats_376_);
lean_inc(v_initHeartbeats_375_);
lean_inc(v_openDecls_374_);
lean_inc(v_currNamespace_373_);
lean_inc(v_maxRecDepth_371_);
lean_inc(v_currRecDepth_370_);
lean_inc_ref(v_options_369_);
lean_inc_ref(v_fileMap_368_);
lean_inc_ref(v_fileName_367_);
v___x_423_ = lean_alloc_ctor(0, 14, 2);
lean_ctor_set(v___x_423_, 0, v_fileName_367_);
lean_ctor_set(v___x_423_, 1, v_fileMap_368_);
lean_ctor_set(v___x_423_, 2, v_options_369_);
lean_ctor_set(v___x_423_, 3, v_currRecDepth_370_);
lean_ctor_set(v___x_423_, 4, v_maxRecDepth_371_);
lean_ctor_set(v___x_423_, 5, v_ref_422_);
lean_ctor_set(v___x_423_, 6, v_currNamespace_373_);
lean_ctor_set(v___x_423_, 7, v_openDecls_374_);
lean_ctor_set(v___x_423_, 8, v_initHeartbeats_375_);
lean_ctor_set(v___x_423_, 9, v_maxHeartbeats_376_);
lean_ctor_set(v___x_423_, 10, v_quotContext_377_);
lean_ctor_set(v___x_423_, 11, v_currMacroScope_378_);
lean_ctor_set(v___x_423_, 12, v_cancelTk_x3f_380_);
lean_ctor_set(v___x_423_, 13, v_inheritedTraceOptions_382_);
lean_ctor_set_uint8(v___x_423_, sizeof(void*)*14, v_diag_379_);
lean_ctor_set_uint8(v___x_423_, sizeof(void*)*14 + 1, v_suppressElabErrors_381_);
v___x_424_ = lean_uint64_shift_left(v___x_420_, v___x_419_);
v___x_425_ = lean_uint64_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__4, &l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__4_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___closed__4);
v_key_426_ = lean_uint64_lor(v___x_424_, v___x_425_);
v___x_427_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_427_, 0, v_config_417_);
lean_ctor_set_uint64(v___x_427_, sizeof(void*)*1, v_key_426_);
lean_inc(v_canUnfold_x3f_411_);
lean_inc(v_synthPendingDepth_410_);
lean_inc(v_defEqCtx_x3f_409_);
lean_inc_ref(v_localInstances_408_);
lean_inc_ref(v_lctx_407_);
lean_inc(v_zetaDeltaSet_406_);
v___x_428_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_428_, 0, v___x_427_);
lean_ctor_set(v___x_428_, 1, v_zetaDeltaSet_406_);
lean_ctor_set(v___x_428_, 2, v_lctx_407_);
lean_ctor_set(v___x_428_, 3, v_localInstances_408_);
lean_ctor_set(v___x_428_, 4, v_defEqCtx_x3f_409_);
lean_ctor_set(v___x_428_, 5, v_synthPendingDepth_410_);
lean_ctor_set(v___x_428_, 6, v_canUnfold_x3f_411_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*7, v_trackZetaDelta_405_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*7 + 1, v_univApprox_412_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*7 + 2, v_inTypeClassResolution_413_);
lean_ctor_set_uint8(v___x_428_, sizeof(void*)*7 + 3, v_cacheInferType_414_);
lean_inc(v_mv_311_);
v___x_429_ = l_Lean_Elab_runTactic(v_mv_311_, v_tac_313_, v___x_366_, v___x_421_, v___x_428_, v___y_317_, v___x_423_, v___y_319_);
lean_dec_ref_known(v___x_423_, 14);
lean_dec_ref_known(v___x_428_, 7);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_dec_ref_known(v___x_429_, 1);
goto v___jp_329_;
}
else
{
if (lean_obj_tag(v___x_429_) == 0)
{
lean_dec_ref_known(v___x_429_, 1);
goto v___jp_329_;
}
else
{
lean_object* v_a_430_; lean_object* v___x_432_; uint8_t v_isShared_433_; uint8_t v_isSharedCheck_437_; 
lean_dec(v_mv_311_);
v_a_430_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_437_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_437_ == 0)
{
v___x_432_ = v___x_429_;
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
else
{
lean_inc(v_a_430_);
lean_dec(v___x_429_);
v___x_432_ = lean_box(0);
v_isShared_433_ = v_isSharedCheck_437_;
goto v_resetjp_431_;
}
v_resetjp_431_:
{
lean_object* v___x_435_; 
if (v_isShared_433_ == 0)
{
v___x_435_ = v___x_432_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_436_; 
v_reuseFailAlloc_436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_436_, 0, v_a_430_);
v___x_435_ = v_reuseFailAlloc_436_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
return v___x_435_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1___boxed(lean_object* v___f_440_, lean_object* v_mv_441_, lean_object* v_val_442_, lean_object* v_tac_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(v___f_440_, v_mv_441_, v_val_442_, v_tac_443_, v___y_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
lean_dec_ref(v___y_444_);
lean_dec(v_val_442_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(lean_object* v_a_452_, lean_object* v_x_453_){
_start:
{
if (lean_obj_tag(v_x_453_) == 0)
{
lean_object* v___x_454_; 
v___x_454_ = lean_box(0);
return v___x_454_;
}
else
{
lean_object* v_key_455_; lean_object* v_value_456_; lean_object* v_tail_457_; uint8_t v___x_458_; 
v_key_455_ = lean_ctor_get(v_x_453_, 0);
v_value_456_ = lean_ctor_get(v_x_453_, 1);
v_tail_457_ = lean_ctor_get(v_x_453_, 2);
v___x_458_ = lean_nat_dec_eq(v_key_455_, v_a_452_);
if (v___x_458_ == 0)
{
v_x_453_ = v_tail_457_;
goto _start;
}
else
{
lean_object* v___x_460_; 
lean_inc(v_value_456_);
v___x_460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_460_, 0, v_value_456_);
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg___boxed(lean_object* v_a_461_, lean_object* v_x_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_461_, v_x_462_);
lean_dec(v_x_462_);
lean_dec(v_a_461_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(lean_object* v_m_464_, lean_object* v_a_465_){
_start:
{
lean_object* v_buckets_466_; lean_object* v___x_467_; uint64_t v___x_468_; uint64_t v___x_469_; uint64_t v___x_470_; uint64_t v_fold_471_; uint64_t v___x_472_; uint64_t v___x_473_; uint64_t v___x_474_; size_t v___x_475_; size_t v___x_476_; size_t v___x_477_; size_t v___x_478_; size_t v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v_buckets_466_ = lean_ctor_get(v_m_464_, 1);
v___x_467_ = lean_array_get_size(v_buckets_466_);
v___x_468_ = lean_uint64_of_nat(v_a_465_);
v___x_469_ = 32ULL;
v___x_470_ = lean_uint64_shift_right(v___x_468_, v___x_469_);
v_fold_471_ = lean_uint64_xor(v___x_468_, v___x_470_);
v___x_472_ = 16ULL;
v___x_473_ = lean_uint64_shift_right(v_fold_471_, v___x_472_);
v___x_474_ = lean_uint64_xor(v_fold_471_, v___x_473_);
v___x_475_ = lean_uint64_to_usize(v___x_474_);
v___x_476_ = lean_usize_of_nat(v___x_467_);
v___x_477_ = ((size_t)1ULL);
v___x_478_ = lean_usize_sub(v___x_476_, v___x_477_);
v___x_479_ = lean_usize_land(v___x_475_, v___x_478_);
v___x_480_ = lean_array_uget_borrowed(v_buckets_466_, v___x_479_);
v___x_481_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_465_, v___x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg___boxed(lean_object* v_m_482_, lean_object* v_a_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(v_m_482_, v_a_483_);
lean_dec(v_a_483_);
lean_dec_ref(v_m_482_);
return v_res_484_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22(void){
_start:
{
lean_object* v___x_536_; 
v___x_536_ = l_Array_mkArray0(lean_box(0));
return v___x_536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(lean_object* v_invariantAlts_549_, lean_object* v_n_550_, lean_object* v_mv_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_, lean_object* v_a_557_){
_start:
{
lean_object* v___y_560_; uint8_t v___y_561_; lean_object* v___y_566_; lean_object* v___x_579_; 
v___x_579_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(v_invariantAlts_549_, v_n_550_);
if (lean_obj_tag(v___x_579_) == 1)
{
lean_object* v_val_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_651_; 
v_val_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_651_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_651_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_val_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_651_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___f_584_; lean_object* v___x_585_; uint8_t v___x_586_; 
v___f_584_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__0));
v___x_585_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__5));
lean_inc(v_val_580_);
v___x_586_ = l_Lean_Syntax_isOfKind(v_val_580_, v___x_585_);
if (v___x_586_ == 0)
{
lean_object* v___x_587_; uint8_t v___x_588_; 
v___x_587_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__7));
lean_inc(v_val_580_);
v___x_588_ = l_Lean_Syntax_isOfKind(v_val_580_, v___x_587_);
if (v___x_588_ == 0)
{
lean_object* v___x_589_; lean_object* v___x_591_; 
lean_dec(v_val_580_);
lean_dec(v_mv_551_);
v___x_589_ = lean_box(v___x_588_);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 0);
lean_ctor_set(v___x_582_, 0, v___x_589_);
v___x_591_ = v___x_582_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_589_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
else
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; uint8_t v___x_596_; 
v___x_593_ = lean_unsigned_to_nat(1u);
v___x_594_ = l_Lean_Syntax_getArg(v_val_580_, v___x_593_);
v___x_595_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__9));
lean_inc(v___x_594_);
v___x_596_ = l_Lean_Syntax_isOfKind(v___x_594_, v___x_595_);
if (v___x_596_ == 0)
{
lean_object* v___x_597_; lean_object* v___x_599_; 
lean_dec(v___x_594_);
lean_dec(v_val_580_);
lean_dec(v_mv_551_);
v___x_597_ = lean_box(v___x_596_);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 0);
lean_ctor_set(v___x_582_, 0, v___x_597_);
v___x_599_ = v___x_582_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
return v___x_599_;
}
}
else
{
lean_object* v_ref_601_; lean_object* v___x_602_; lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v_args_605_; lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; 
lean_del_object(v___x_582_);
v_ref_601_ = lean_ctor_get(v_a_556_, 5);
v___x_602_ = l_Lean_Syntax_getArg(v___x_594_, v___x_593_);
lean_dec(v___x_594_);
v___x_603_ = lean_unsigned_to_nat(3u);
v___x_604_ = l_Lean_Syntax_getArg(v_val_580_, v___x_603_);
v_args_605_ = l_Lean_Syntax_getArgs(v___x_602_);
lean_dec(v___x_602_);
v___x_606_ = l_Lean_SourceInfo_fromRef(v_ref_601_, v___x_586_);
v___x_607_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__11));
v___x_608_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__12));
lean_inc_n(v___x_606_, 11);
v___x_609_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_609_, 0, v___x_606_);
lean_ctor_set(v___x_609_, 1, v___x_608_);
v___x_610_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__14));
v___x_611_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__16));
v___x_612_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__18));
v___x_613_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__20));
v___x_614_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__21));
v___x_615_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_615_, 0, v___x_606_);
lean_ctor_set(v___x_615_, 1, v___x_614_);
v___x_616_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22, &l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__22);
v___x_617_ = l_Array_append___redArg(v___x_616_, v_args_605_);
lean_dec_ref(v_args_605_);
v___x_618_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_618_, 0, v___x_606_);
lean_ctor_set(v___x_618_, 1, v___x_612_);
lean_ctor_set(v___x_618_, 2, v___x_617_);
v___x_619_ = l_Lean_Syntax_node2(v___x_606_, v___x_613_, v___x_615_, v___x_618_);
v___x_620_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__23));
v___x_621_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_621_, 0, v___x_606_);
lean_ctor_set(v___x_621_, 1, v___x_620_);
v___x_622_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24));
v___x_623_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25));
v___x_624_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_624_, 0, v___x_606_);
lean_ctor_set(v___x_624_, 1, v___x_622_);
v___x_625_ = l_Lean_Syntax_node2(v___x_606_, v___x_623_, v___x_624_, v___x_604_);
v___x_626_ = l_Lean_Syntax_node3(v___x_606_, v___x_612_, v___x_619_, v___x_621_, v___x_625_);
v___x_627_ = l_Lean_Syntax_node1(v___x_606_, v___x_611_, v___x_626_);
v___x_628_ = l_Lean_Syntax_node1(v___x_606_, v___x_610_, v___x_627_);
v___x_629_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__26));
v___x_630_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_606_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
v___x_631_ = l_Lean_Syntax_node3(v___x_606_, v___x_607_, v___x_609_, v___x_628_, v___x_630_);
v___x_632_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(v___f_584_, v_mv_551_, v_val_580_, v___x_631_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
lean_dec(v_val_580_);
v___y_566_ = v___x_632_;
goto v___jp_565_;
}
}
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v___x_633_ = lean_unsigned_to_nat(0u);
v___x_634_ = l_Lean_Syntax_getArg(v_val_580_, v___x_633_);
v___x_635_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__28));
v___x_636_ = l_Lean_Syntax_isOfKind(v___x_634_, v___x_635_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; lean_object* v___x_639_; 
lean_dec(v_val_580_);
lean_dec(v_mv_551_);
v___x_637_ = lean_box(v___x_636_);
if (v_isShared_583_ == 0)
{
lean_ctor_set_tag(v___x_582_, 0);
lean_ctor_set(v___x_582_, 0, v___x_637_);
v___x_639_ = v___x_582_;
goto v_reusejp_638_;
}
else
{
lean_object* v_reuseFailAlloc_640_; 
v_reuseFailAlloc_640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_640_, 0, v___x_637_);
v___x_639_ = v_reuseFailAlloc_640_;
goto v_reusejp_638_;
}
v_reusejp_638_:
{
return v___x_639_;
}
}
else
{
lean_object* v_ref_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; 
lean_del_object(v___x_582_);
v_ref_641_ = lean_ctor_get(v_a_556_, 5);
v___x_642_ = lean_unsigned_to_nat(1u);
v___x_643_ = l_Lean_Syntax_getArg(v_val_580_, v___x_642_);
v___x_644_ = 0;
v___x_645_ = l_Lean_SourceInfo_fromRef(v_ref_641_, v___x_644_);
v___x_646_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__24));
v___x_647_ = ((lean_object*)(l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___closed__25));
lean_inc(v___x_645_);
v___x_648_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_648_, 0, v___x_645_);
lean_ctor_set(v___x_648_, 1, v___x_646_);
v___x_649_ = l_Lean_Syntax_node2(v___x_645_, v___x_647_, v___x_648_, v___x_643_);
v___x_650_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___lam__1(v___f_584_, v_mv_551_, v_val_580_, v___x_649_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_, v_a_557_);
lean_dec(v_val_580_);
v___y_566_ = v___x_650_;
goto v___jp_565_;
}
}
}
}
else
{
uint8_t v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; 
lean_dec(v___x_579_);
lean_dec(v_mv_551_);
v___x_652_ = 0;
v___x_653_ = lean_box(v___x_652_);
v___x_654_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_654_, 0, v___x_653_);
return v___x_654_;
}
v___jp_559_:
{
if (v___y_561_ == 0)
{
lean_object* v___x_562_; lean_object* v___x_563_; 
lean_dec_ref(v___y_560_);
v___x_562_ = lean_box(v___y_561_);
v___x_563_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_563_, 0, v___x_562_);
return v___x_563_;
}
else
{
lean_object* v___x_564_; 
v___x_564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_564_, 0, v___y_560_);
return v___x_564_;
}
}
v___jp_565_:
{
if (lean_obj_tag(v___y_566_) == 0)
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_575_; 
v_a_567_ = lean_ctor_get(v___y_566_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v___y_566_);
if (v_isSharedCheck_575_ == 0)
{
v___x_569_ = v___y_566_;
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___y_566_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_575_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v_a_571_; lean_object* v___x_573_; 
v_a_571_ = lean_ctor_get(v_a_567_, 0);
lean_inc(v_a_571_);
lean_dec(v_a_567_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 0, v_a_571_);
v___x_573_ = v___x_569_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_a_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
else
{
lean_object* v_a_576_; uint8_t v___x_577_; 
v_a_576_ = lean_ctor_get(v___y_566_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___y_566_, 1);
v___x_577_ = l_Lean_Exception_isInterrupt(v_a_576_);
if (v___x_577_ == 0)
{
uint8_t v___x_578_; 
lean_inc(v_a_576_);
v___x_578_ = l_Lean_Exception_isRuntime(v_a_576_);
v___y_560_ = v_a_576_;
v___y_561_ = v___x_578_;
goto v___jp_559_;
}
else
{
v___y_560_ = v_a_576_;
v___y_561_ = v___x_577_;
goto v___jp_559_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant___boxed(lean_object* v_invariantAlts_655_, lean_object* v_n_656_, lean_object* v_mv_657_, lean_object* v_a_658_, lean_object* v_a_659_, lean_object* v_a_660_, lean_object* v_a_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_){
_start:
{
lean_object* v_res_665_; 
v_res_665_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_invariantAlts_655_, v_n_656_, v_mv_657_, v_a_658_, v_a_659_, v_a_660_, v_a_661_, v_a_662_, v_a_663_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
lean_dec(v_a_661_);
lean_dec_ref(v_a_660_);
lean_dec(v_a_659_);
lean_dec_ref(v_a_658_);
lean_dec(v_n_656_);
lean_dec_ref(v_invariantAlts_655_);
return v_res_665_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0(lean_object* v_00_u03b2_666_, lean_object* v_m_667_, lean_object* v_a_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___redArg(v_m_667_, v_a_668_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0___boxed(lean_object* v_00_u03b2_670_, lean_object* v_m_671_, lean_object* v_a_672_){
_start:
{
lean_object* v_res_673_; 
v_res_673_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0(v_00_u03b2_670_, v_m_671_, v_a_672_);
lean_dec(v_a_672_);
lean_dec_ref(v_m_671_);
return v_res_673_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1(lean_object* v_mvarId_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
lean_object* v___x_682_; 
v___x_682_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___redArg(v_mvarId_674_, v___y_678_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1___boxed(lean_object* v_mvarId_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1(v_mvarId_683_, v___y_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec_ref(v___y_686_);
lean_dec(v___y_685_);
lean_dec_ref(v___y_684_);
lean_dec(v_mvarId_683_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3(lean_object* v_mvarId_692_, lean_object* v_val_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_){
_start:
{
lean_object* v___x_701_; 
v___x_701_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___redArg(v_mvarId_692_, v_val_693_, v___y_697_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3___boxed(lean_object* v_mvarId_702_, lean_object* v_val_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l_Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3(v_mvarId_702_, v_val_703_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0(lean_object* v_00_u03b2_712_, lean_object* v_a_713_, lean_object* v_x_714_){
_start:
{
lean_object* v___x_715_; 
v___x_715_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___redArg(v_a_713_, v_x_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0___boxed(lean_object* v_00_u03b2_716_, lean_object* v_a_717_, lean_object* v_x_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__0_spec__0(v_00_u03b2_716_, v_a_717_, v_x_718_);
lean_dec(v_x_718_);
lean_dec(v_a_717_);
return v_res_719_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2(lean_object* v_00_u03b2_720_, lean_object* v_x_721_, lean_object* v_x_722_){
_start:
{
uint8_t v___x_723_; 
v___x_723_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_x_721_, v_x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___boxed(lean_object* v_00_u03b2_724_, lean_object* v_x_725_, lean_object* v_x_726_){
_start:
{
uint8_t v_res_727_; lean_object* v_r_728_; 
v_res_727_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2(v_00_u03b2_724_, v_x_725_, v_x_726_);
lean_dec(v_x_726_);
lean_dec_ref(v_x_725_);
v_r_728_ = lean_box(v_res_727_);
return v_r_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5(lean_object* v_00_u03b2_729_, lean_object* v_x_730_, lean_object* v_x_731_, lean_object* v_x_732_){
_start:
{
lean_object* v___x_733_; 
v___x_733_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5___redArg(v_x_730_, v_x_731_, v_x_732_);
return v___x_733_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_734_, lean_object* v_x_735_, size_t v_x_736_, lean_object* v_x_737_){
_start:
{
uint8_t v___x_738_; 
v___x_738_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___redArg(v_x_735_, v_x_736_, v_x_737_);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b2_739_, lean_object* v_x_740_, lean_object* v_x_741_, lean_object* v_x_742_){
_start:
{
size_t v_x_18696__boxed_743_; uint8_t v_res_744_; lean_object* v_r_745_; 
v_x_18696__boxed_743_ = lean_unbox_usize(v_x_741_);
lean_dec(v_x_741_);
v_res_744_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4(v_00_u03b2_739_, v_x_740_, v_x_18696__boxed_743_, v_x_742_);
lean_dec(v_x_742_);
lean_dec_ref(v_x_740_);
v_r_745_ = lean_box(v_res_744_);
return v_r_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7(lean_object* v_00_u03b2_746_, lean_object* v_x_747_, size_t v_x_748_, size_t v_x_749_, lean_object* v_x_750_, lean_object* v_x_751_){
_start:
{
lean_object* v___x_752_; 
v___x_752_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___redArg(v_x_747_, v_x_748_, v_x_749_, v_x_750_, v_x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b2_753_, lean_object* v_x_754_, lean_object* v_x_755_, lean_object* v_x_756_, lean_object* v_x_757_, lean_object* v_x_758_){
_start:
{
size_t v_x_18707__boxed_759_; size_t v_x_18708__boxed_760_; lean_object* v_res_761_; 
v_x_18707__boxed_759_ = lean_unbox_usize(v_x_755_);
lean_dec(v_x_755_);
v_x_18708__boxed_760_ = lean_unbox_usize(v_x_756_);
lean_dec(v_x_756_);
v_res_761_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7(v_00_u03b2_753_, v_x_754_, v_x_18707__boxed_759_, v_x_18708__boxed_760_, v_x_757_, v_x_758_);
return v_res_761_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(lean_object* v_00_u03b2_762_, lean_object* v_keys_763_, lean_object* v_vals_764_, lean_object* v_heq_765_, lean_object* v_i_766_, lean_object* v_k_767_){
_start:
{
uint8_t v___x_768_; 
v___x_768_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___redArg(v_keys_763_, v_i_766_, v_k_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v_00_u03b2_769_, lean_object* v_keys_770_, lean_object* v_vals_771_, lean_object* v_heq_772_, lean_object* v_i_773_, lean_object* v_k_774_){
_start:
{
uint8_t v_res_775_; lean_object* v_r_776_; 
v_res_775_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2_spec__4_spec__6(v_00_u03b2_769_, v_keys_770_, v_vals_771_, v_heq_772_, v_i_773_, v_k_774_);
lean_dec(v_k_774_);
lean_dec_ref(v_vals_771_);
lean_dec_ref(v_keys_770_);
v_r_776_ = lean_box(v_res_775_);
return v_r_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9(lean_object* v_00_u03b2_777_, lean_object* v_n_778_, lean_object* v_k_779_, lean_object* v_v_780_){
_start:
{
lean_object* v___x_781_; 
v___x_781_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9___redArg(v_n_778_, v_k_779_, v_v_780_);
return v___x_781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(lean_object* v_00_u03b2_782_, size_t v_depth_783_, lean_object* v_keys_784_, lean_object* v_vals_785_, lean_object* v_heq_786_, lean_object* v_i_787_, lean_object* v_entries_788_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___redArg(v_depth_783_, v_keys_784_, v_vals_785_, v_i_787_, v_entries_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10___boxed(lean_object* v_00_u03b2_790_, lean_object* v_depth_791_, lean_object* v_keys_792_, lean_object* v_vals_793_, lean_object* v_heq_794_, lean_object* v_i_795_, lean_object* v_entries_796_){
_start:
{
size_t v_depth_boxed_797_; lean_object* v_res_798_; 
v_depth_boxed_797_ = lean_unbox_usize(v_depth_791_);
lean_dec(v_depth_791_);
v_res_798_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__10(v_00_u03b2_790_, v_depth_boxed_797_, v_keys_792_, v_vals_793_, v_heq_794_, v_i_795_, v_entries_796_);
lean_dec_ref(v_vals_793_);
lean_dec_ref(v_keys_792_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10(lean_object* v_00_u03b2_799_, lean_object* v_x_800_, lean_object* v_x_801_, lean_object* v_x_802_, lean_object* v_x_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__3_spec__5_spec__7_spec__9_spec__10___redArg(v_x_800_, v_x_801_, v_x_802_, v_x_803_);
return v___x_804_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(lean_object* v_a_805_, lean_object* v_x_806_){
_start:
{
if (lean_obj_tag(v_x_806_) == 0)
{
uint8_t v___x_807_; 
v___x_807_ = 0;
return v___x_807_;
}
else
{
lean_object* v_key_808_; lean_object* v_tail_809_; uint8_t v___x_810_; 
v_key_808_ = lean_ctor_get(v_x_806_, 0);
v_tail_809_ = lean_ctor_get(v_x_806_, 2);
v___x_810_ = lean_nat_dec_eq(v_key_808_, v_a_805_);
if (v___x_810_ == 0)
{
v_x_806_ = v_tail_809_;
goto _start;
}
else
{
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg___boxed(lean_object* v_a_812_, lean_object* v_x_813_){
_start:
{
uint8_t v_res_814_; lean_object* v_r_815_; 
v_res_814_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_812_, v_x_813_);
lean_dec(v_x_813_);
lean_dec(v_a_812_);
v_r_815_ = lean_box(v_res_814_);
return v_r_815_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_816_, lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
return v_x_816_;
}
else
{
lean_object* v_key_818_; lean_object* v_value_819_; lean_object* v_tail_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_843_; 
v_key_818_ = lean_ctor_get(v_x_817_, 0);
v_value_819_ = lean_ctor_get(v_x_817_, 1);
v_tail_820_ = lean_ctor_get(v_x_817_, 2);
v_isSharedCheck_843_ = !lean_is_exclusive(v_x_817_);
if (v_isSharedCheck_843_ == 0)
{
v___x_822_ = v_x_817_;
v_isShared_823_ = v_isSharedCheck_843_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_tail_820_);
lean_inc(v_value_819_);
lean_inc(v_key_818_);
lean_dec(v_x_817_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_843_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; uint64_t v___x_825_; uint64_t v___x_826_; uint64_t v___x_827_; uint64_t v_fold_828_; uint64_t v___x_829_; uint64_t v___x_830_; uint64_t v___x_831_; size_t v___x_832_; size_t v___x_833_; size_t v___x_834_; size_t v___x_835_; size_t v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_824_ = lean_array_get_size(v_x_816_);
v___x_825_ = lean_uint64_of_nat(v_key_818_);
v___x_826_ = 32ULL;
v___x_827_ = lean_uint64_shift_right(v___x_825_, v___x_826_);
v_fold_828_ = lean_uint64_xor(v___x_825_, v___x_827_);
v___x_829_ = 16ULL;
v___x_830_ = lean_uint64_shift_right(v_fold_828_, v___x_829_);
v___x_831_ = lean_uint64_xor(v_fold_828_, v___x_830_);
v___x_832_ = lean_uint64_to_usize(v___x_831_);
v___x_833_ = lean_usize_of_nat(v___x_824_);
v___x_834_ = ((size_t)1ULL);
v___x_835_ = lean_usize_sub(v___x_833_, v___x_834_);
v___x_836_ = lean_usize_land(v___x_832_, v___x_835_);
v___x_837_ = lean_array_uget_borrowed(v_x_816_, v___x_836_);
lean_inc(v___x_837_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 2, v___x_837_);
v___x_839_ = v___x_822_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_key_818_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_value_819_);
lean_ctor_set(v_reuseFailAlloc_842_, 2, v___x_837_);
v___x_839_ = v_reuseFailAlloc_842_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_840_; 
v___x_840_ = lean_array_uset(v_x_816_, v___x_836_, v___x_839_);
v_x_816_ = v___x_840_;
v_x_817_ = v_tail_820_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(lean_object* v_i_844_, lean_object* v_source_845_, lean_object* v_target_846_){
_start:
{
lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_847_ = lean_array_get_size(v_source_845_);
v___x_848_ = lean_nat_dec_lt(v_i_844_, v___x_847_);
if (v___x_848_ == 0)
{
lean_dec_ref(v_source_845_);
lean_dec(v_i_844_);
return v_target_846_;
}
else
{
lean_object* v_es_849_; lean_object* v___x_850_; lean_object* v_source_851_; lean_object* v_target_852_; lean_object* v___x_853_; lean_object* v___x_854_; 
v_es_849_ = lean_array_fget(v_source_845_, v_i_844_);
v___x_850_ = lean_box(0);
v_source_851_ = lean_array_fset(v_source_845_, v_i_844_, v___x_850_);
v_target_852_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_target_846_, v_es_849_);
v___x_853_ = lean_unsigned_to_nat(1u);
v___x_854_ = lean_nat_add(v_i_844_, v___x_853_);
lean_dec(v_i_844_);
v_i_844_ = v___x_854_;
v_source_845_ = v_source_851_;
v_target_846_ = v_target_852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(lean_object* v_data_856_){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v_nbuckets_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; 
v___x_857_ = lean_array_get_size(v_data_856_);
v___x_858_ = lean_unsigned_to_nat(2u);
v_nbuckets_859_ = lean_nat_mul(v___x_857_, v___x_858_);
v___x_860_ = lean_unsigned_to_nat(0u);
v___x_861_ = lean_box(0);
v___x_862_ = lean_mk_array(v_nbuckets_859_, v___x_861_);
v___x_863_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v___x_860_, v_data_856_, v___x_862_);
return v___x_863_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(lean_object* v_m_864_, lean_object* v_a_865_, lean_object* v_b_866_){
_start:
{
lean_object* v_size_867_; lean_object* v_buckets_868_; lean_object* v___x_869_; uint64_t v___x_870_; uint64_t v___x_871_; uint64_t v___x_872_; uint64_t v_fold_873_; uint64_t v___x_874_; uint64_t v___x_875_; uint64_t v___x_876_; size_t v___x_877_; size_t v___x_878_; size_t v___x_879_; size_t v___x_880_; size_t v___x_881_; lean_object* v_bkt_882_; uint8_t v___x_883_; 
v_size_867_ = lean_ctor_get(v_m_864_, 0);
v_buckets_868_ = lean_ctor_get(v_m_864_, 1);
v___x_869_ = lean_array_get_size(v_buckets_868_);
v___x_870_ = lean_uint64_of_nat(v_a_865_);
v___x_871_ = 32ULL;
v___x_872_ = lean_uint64_shift_right(v___x_870_, v___x_871_);
v_fold_873_ = lean_uint64_xor(v___x_870_, v___x_872_);
v___x_874_ = 16ULL;
v___x_875_ = lean_uint64_shift_right(v_fold_873_, v___x_874_);
v___x_876_ = lean_uint64_xor(v_fold_873_, v___x_875_);
v___x_877_ = lean_uint64_to_usize(v___x_876_);
v___x_878_ = lean_usize_of_nat(v___x_869_);
v___x_879_ = ((size_t)1ULL);
v___x_880_ = lean_usize_sub(v___x_878_, v___x_879_);
v___x_881_ = lean_usize_land(v___x_877_, v___x_880_);
v_bkt_882_ = lean_array_uget_borrowed(v_buckets_868_, v___x_881_);
v___x_883_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_865_, v_bkt_882_);
if (v___x_883_ == 0)
{
lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_904_; 
lean_inc_ref(v_buckets_868_);
lean_inc(v_size_867_);
v_isSharedCheck_904_ = !lean_is_exclusive(v_m_864_);
if (v_isSharedCheck_904_ == 0)
{
lean_object* v_unused_905_; lean_object* v_unused_906_; 
v_unused_905_ = lean_ctor_get(v_m_864_, 1);
lean_dec(v_unused_905_);
v_unused_906_ = lean_ctor_get(v_m_864_, 0);
lean_dec(v_unused_906_);
v___x_885_ = v_m_864_;
v_isShared_886_ = v_isSharedCheck_904_;
goto v_resetjp_884_;
}
else
{
lean_dec(v_m_864_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_904_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v_size_x27_888_; lean_object* v___x_889_; lean_object* v_buckets_x27_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; uint8_t v___x_896_; 
v___x_887_ = lean_unsigned_to_nat(1u);
v_size_x27_888_ = lean_nat_add(v_size_867_, v___x_887_);
lean_dec(v_size_867_);
lean_inc(v_bkt_882_);
v___x_889_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_889_, 0, v_a_865_);
lean_ctor_set(v___x_889_, 1, v_b_866_);
lean_ctor_set(v___x_889_, 2, v_bkt_882_);
v_buckets_x27_890_ = lean_array_uset(v_buckets_868_, v___x_881_, v___x_889_);
v___x_891_ = lean_unsigned_to_nat(4u);
v___x_892_ = lean_nat_mul(v_size_x27_888_, v___x_891_);
v___x_893_ = lean_unsigned_to_nat(3u);
v___x_894_ = lean_nat_div(v___x_892_, v___x_893_);
lean_dec(v___x_892_);
v___x_895_ = lean_array_get_size(v_buckets_x27_890_);
v___x_896_ = lean_nat_dec_le(v___x_894_, v___x_895_);
lean_dec(v___x_894_);
if (v___x_896_ == 0)
{
lean_object* v_val_897_; lean_object* v___x_899_; 
v_val_897_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_buckets_x27_890_);
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v_val_897_);
lean_ctor_set(v___x_885_, 0, v_size_x27_888_);
v___x_899_ = v___x_885_;
goto v_reusejp_898_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_size_x27_888_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v_val_897_);
v___x_899_ = v_reuseFailAlloc_900_;
goto v_reusejp_898_;
}
v_reusejp_898_:
{
return v___x_899_;
}
}
else
{
lean_object* v___x_902_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v_buckets_x27_890_);
lean_ctor_set(v___x_885_, 0, v_size_x27_888_);
v___x_902_ = v___x_885_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_size_x27_888_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_buckets_x27_890_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
}
}
else
{
lean_dec(v_b_866_);
lean_dec(v_a_865_);
return v_m_864_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(lean_object* v___x_907_, lean_object* v_as_x27_908_, lean_object* v_b_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
if (lean_obj_tag(v_as_x27_908_) == 0)
{
lean_object* v___x_919_; 
lean_dec_ref(v___x_907_);
v___x_919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_919_, 0, v_b_909_);
return v___x_919_;
}
else
{
lean_object* v_head_920_; lean_object* v_tail_921_; lean_object* v___x_922_; 
v_head_920_ = lean_ctor_get(v_as_x27_908_, 0);
v_tail_921_ = lean_ctor_get(v_as_x27_908_, 1);
lean_inc(v_head_920_);
v___x_922_ = l_Lean_MVarId_getType(v_head_920_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
if (lean_obj_tag(v___x_922_) == 0)
{
lean_object* v_a_923_; uint8_t v___x_924_; 
v_a_923_ = lean_ctor_get(v___x_922_, 0);
lean_inc(v_a_923_);
lean_dec_ref_known(v___x_922_, 1);
lean_inc_ref(v___x_907_);
v___x_924_ = l_Lean_Elab_Tactic_Do_SpecAttr_isSpecInvariantType(v___x_907_, v_a_923_);
lean_dec(v_a_923_);
if (v___x_924_ == 0)
{
lean_object* v___x_925_; 
lean_inc(v_head_920_);
v___x_925_ = lean_array_push(v_b_909_, v_head_920_);
v_as_x27_908_ = v_tail_921_;
v_b_909_ = v___x_925_;
goto _start;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v_specBackwardRuleCache_929_; lean_object* v_splitBackwardRuleCache_930_; lean_object* v_invariants_931_; lean_object* v_vcs_932_; lean_object* v_simpState_933_; lean_object* v_fuel_934_; lean_object* v_inlineHandledInvariants_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_990_; 
v___x_927_ = lean_st_ref_get(v___y_911_);
v___x_928_ = lean_st_ref_take(v___y_911_);
v_specBackwardRuleCache_929_ = lean_ctor_get(v___x_928_, 0);
v_splitBackwardRuleCache_930_ = lean_ctor_get(v___x_928_, 1);
v_invariants_931_ = lean_ctor_get(v___x_928_, 2);
v_vcs_932_ = lean_ctor_get(v___x_928_, 3);
v_simpState_933_ = lean_ctor_get(v___x_928_, 4);
v_fuel_934_ = lean_ctor_get(v___x_928_, 5);
v_inlineHandledInvariants_935_ = lean_ctor_get(v___x_928_, 6);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_928_);
if (v_isSharedCheck_990_ == 0)
{
v___x_937_ = v___x_928_;
v_isShared_938_ = v_isSharedCheck_990_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_inlineHandledInvariants_935_);
lean_inc(v_fuel_934_);
lean_inc(v_simpState_933_);
lean_inc(v_vcs_932_);
lean_inc(v_invariants_931_);
lean_inc(v_splitBackwardRuleCache_930_);
lean_inc(v_specBackwardRuleCache_929_);
lean_dec(v___x_928_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_990_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_939_; lean_object* v___x_941_; 
lean_inc(v_head_920_);
v___x_939_ = lean_array_push(v_invariants_931_, v_head_920_);
if (v_isShared_938_ == 0)
{
lean_ctor_set(v___x_937_, 2, v___x_939_);
v___x_941_ = v___x_937_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_specBackwardRuleCache_929_);
lean_ctor_set(v_reuseFailAlloc_989_, 1, v_splitBackwardRuleCache_930_);
lean_ctor_set(v_reuseFailAlloc_989_, 2, v___x_939_);
lean_ctor_set(v_reuseFailAlloc_989_, 3, v_vcs_932_);
lean_ctor_set(v_reuseFailAlloc_989_, 4, v_simpState_933_);
lean_ctor_set(v_reuseFailAlloc_989_, 5, v_fuel_934_);
lean_ctor_set(v_reuseFailAlloc_989_, 6, v_inlineHandledInvariants_935_);
v___x_941_ = v_reuseFailAlloc_989_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; lean_object* v_invariants_943_; lean_object* v_invariantAlts_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_942_ = lean_st_ref_set(v___y_911_, v___x_941_);
v_invariants_943_ = lean_ctor_get(v___x_927_, 2);
lean_inc_ref(v_invariants_943_);
lean_dec(v___x_927_);
v_invariantAlts_944_ = lean_ctor_get(v___y_910_, 17);
v___x_945_ = lean_array_get_size(v_invariants_943_);
lean_dec_ref(v_invariants_943_);
v___x_946_ = lean_unsigned_to_nat(1u);
v___x_947_ = lean_nat_add(v___x_945_, v___x_946_);
lean_inc(v_head_920_);
v___x_948_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant(v_invariantAlts_944_, v___x_947_, v_head_920_, v___y_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
if (lean_obj_tag(v___x_948_) == 0)
{
lean_object* v_a_949_; uint8_t v___x_950_; 
v_a_949_ = lean_ctor_get(v___x_948_, 0);
lean_inc(v_a_949_);
lean_dec_ref_known(v___x_948_, 1);
v___x_950_ = lean_unbox(v_a_949_);
lean_dec(v_a_949_);
if (v___x_950_ == 0)
{
uint8_t v___x_951_; lean_object* v___x_952_; 
lean_dec(v___x_947_);
v___x_951_ = 2;
lean_inc(v_head_920_);
v___x_952_ = l_Lean_MVarId_setKind___redArg(v_head_920_, v___x_951_, v___y_915_);
if (lean_obj_tag(v___x_952_) == 0)
{
lean_dec_ref_known(v___x_952_, 1);
v_as_x27_908_ = v_tail_921_;
goto _start;
}
else
{
lean_object* v_a_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_961_; 
lean_dec_ref(v_b_909_);
lean_dec_ref(v___x_907_);
v_a_954_ = lean_ctor_get(v___x_952_, 0);
v_isSharedCheck_961_ = !lean_is_exclusive(v___x_952_);
if (v_isSharedCheck_961_ == 0)
{
v___x_956_ = v___x_952_;
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_a_954_);
lean_dec(v___x_952_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_961_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_959_; 
if (v_isShared_957_ == 0)
{
v___x_959_ = v___x_956_;
goto v_reusejp_958_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_a_954_);
v___x_959_ = v_reuseFailAlloc_960_;
goto v_reusejp_958_;
}
v_reusejp_958_:
{
return v___x_959_;
}
}
}
}
else
{
lean_object* v___x_962_; lean_object* v_specBackwardRuleCache_963_; lean_object* v_splitBackwardRuleCache_964_; lean_object* v_invariants_965_; lean_object* v_vcs_966_; lean_object* v_simpState_967_; lean_object* v_fuel_968_; lean_object* v_inlineHandledInvariants_969_; lean_object* v___x_971_; uint8_t v_isShared_972_; uint8_t v_isSharedCheck_980_; 
v___x_962_ = lean_st_ref_take(v___y_911_);
v_specBackwardRuleCache_963_ = lean_ctor_get(v___x_962_, 0);
v_splitBackwardRuleCache_964_ = lean_ctor_get(v___x_962_, 1);
v_invariants_965_ = lean_ctor_get(v___x_962_, 2);
v_vcs_966_ = lean_ctor_get(v___x_962_, 3);
v_simpState_967_ = lean_ctor_get(v___x_962_, 4);
v_fuel_968_ = lean_ctor_get(v___x_962_, 5);
v_inlineHandledInvariants_969_ = lean_ctor_get(v___x_962_, 6);
v_isSharedCheck_980_ = !lean_is_exclusive(v___x_962_);
if (v_isSharedCheck_980_ == 0)
{
v___x_971_ = v___x_962_;
v_isShared_972_ = v_isSharedCheck_980_;
goto v_resetjp_970_;
}
else
{
lean_inc(v_inlineHandledInvariants_969_);
lean_inc(v_fuel_968_);
lean_inc(v_simpState_967_);
lean_inc(v_vcs_966_);
lean_inc(v_invariants_965_);
lean_inc(v_splitBackwardRuleCache_964_);
lean_inc(v_specBackwardRuleCache_963_);
lean_dec(v___x_962_);
v___x_971_ = lean_box(0);
v_isShared_972_ = v_isSharedCheck_980_;
goto v_resetjp_970_;
}
v_resetjp_970_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_973_ = lean_box(0);
v___x_974_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(v_inlineHandledInvariants_969_, v___x_947_, v___x_973_);
if (v_isShared_972_ == 0)
{
lean_ctor_set(v___x_971_, 6, v___x_974_);
v___x_976_ = v___x_971_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_979_; 
v_reuseFailAlloc_979_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_979_, 0, v_specBackwardRuleCache_963_);
lean_ctor_set(v_reuseFailAlloc_979_, 1, v_splitBackwardRuleCache_964_);
lean_ctor_set(v_reuseFailAlloc_979_, 2, v_invariants_965_);
lean_ctor_set(v_reuseFailAlloc_979_, 3, v_vcs_966_);
lean_ctor_set(v_reuseFailAlloc_979_, 4, v_simpState_967_);
lean_ctor_set(v_reuseFailAlloc_979_, 5, v_fuel_968_);
lean_ctor_set(v_reuseFailAlloc_979_, 6, v___x_974_);
v___x_976_ = v_reuseFailAlloc_979_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
lean_object* v___x_977_; 
v___x_977_ = lean_st_ref_set(v___y_911_, v___x_976_);
v_as_x27_908_ = v_tail_921_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_981_; lean_object* v___x_983_; uint8_t v_isShared_984_; uint8_t v_isSharedCheck_988_; 
lean_dec(v___x_947_);
lean_dec_ref(v_b_909_);
lean_dec_ref(v___x_907_);
v_a_981_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_988_ == 0)
{
v___x_983_ = v___x_948_;
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
else
{
lean_inc(v_a_981_);
lean_dec(v___x_948_);
v___x_983_ = lean_box(0);
v_isShared_984_ = v_isSharedCheck_988_;
goto v_resetjp_982_;
}
v_resetjp_982_:
{
lean_object* v___x_986_; 
if (v_isShared_984_ == 0)
{
v___x_986_ = v___x_983_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v_a_981_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_998_; 
lean_dec_ref(v_b_909_);
lean_dec_ref(v___x_907_);
v_a_991_ = lean_ctor_get(v___x_922_, 0);
v_isSharedCheck_998_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_998_ == 0)
{
v___x_993_ = v___x_922_;
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_922_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_998_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_996_; 
if (v_isShared_994_ == 0)
{
v___x_996_ = v___x_993_;
goto v_reusejp_995_;
}
else
{
lean_object* v_reuseFailAlloc_997_; 
v_reuseFailAlloc_997_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_997_, 0, v_a_991_);
v___x_996_ = v_reuseFailAlloc_997_;
goto v_reusejp_995_;
}
v_reusejp_995_:
{
return v___x_996_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg___boxed(lean_object* v___x_999_, lean_object* v_as_x27_1000_, lean_object* v_b_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_, lean_object* v___y_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_999_, v_as_x27_1000_, v_b_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec_ref(v___y_1006_);
lean_dec(v___y_1005_);
lean_dec_ref(v___y_1004_);
lean_dec(v___y_1003_);
lean_dec_ref(v___y_1002_);
lean_dec(v_as_x27_1000_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(lean_object* v_subgoals_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_, lean_object* v_a_1017_, lean_object* v_a_1018_, lean_object* v_a_1019_, lean_object* v_a_1020_, lean_object* v_a_1021_, lean_object* v_a_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_){
_start:
{
lean_object* v___x_1027_; lean_object* v_env_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1027_ = lean_st_ref_get(v_a_1025_);
v_env_1028_ = lean_ctor_get(v___x_1027_, 0);
lean_inc_ref(v_env_1028_);
lean_dec(v___x_1027_);
v___x_1029_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0));
v___x_1030_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(v_env_1028_, v_subgoals_1014_, v___x_1029_, v_a_1015_, v_a_1016_, v_a_1020_, v_a_1021_, v_a_1022_, v_a_1023_, v_a_1024_, v_a_1025_);
return v___x_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___boxed(lean_object* v_subgoals_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_, lean_object* v_a_1037_, lean_object* v_a_1038_, lean_object* v_a_1039_, lean_object* v_a_1040_, lean_object* v_a_1041_, lean_object* v_a_1042_, lean_object* v_a_1043_){
_start:
{
lean_object* v_res_1044_; 
v_res_1044_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(v_subgoals_1031_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_, v_a_1037_, v_a_1038_, v_a_1039_, v_a_1040_, v_a_1041_, v_a_1042_);
lean_dec(v_a_1042_);
lean_dec_ref(v_a_1041_);
lean_dec(v_a_1040_);
lean_dec_ref(v_a_1039_);
lean_dec(v_a_1038_);
lean_dec_ref(v_a_1037_);
lean_dec(v_a_1036_);
lean_dec_ref(v_a_1035_);
lean_dec(v_a_1034_);
lean_dec(v_a_1033_);
lean_dec_ref(v_a_1032_);
lean_dec(v_subgoals_1031_);
return v_res_1044_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0(lean_object* v_00_u03b2_1045_, lean_object* v_m_1046_, lean_object* v_a_1047_, lean_object* v_b_1048_){
_start:
{
lean_object* v___x_1049_; 
v___x_1049_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0___redArg(v_m_1046_, v_a_1047_, v_b_1048_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1(lean_object* v___x_1050_, lean_object* v_as_1051_, lean_object* v_as_x27_1052_, lean_object* v_b_1053_, lean_object* v_a_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___redArg(v___x_1050_, v_as_x27_1052_, v_b_1053_, v___y_1055_, v___y_1056_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, v___y_1064_, v___y_1065_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1___boxed(lean_object** _args){
lean_object* v___x_1068_ = _args[0];
lean_object* v_as_1069_ = _args[1];
lean_object* v_as_x27_1070_ = _args[2];
lean_object* v_b_1071_ = _args[3];
lean_object* v_a_1072_ = _args[4];
lean_object* v___y_1073_ = _args[5];
lean_object* v___y_1074_ = _args[6];
lean_object* v___y_1075_ = _args[7];
lean_object* v___y_1076_ = _args[8];
lean_object* v___y_1077_ = _args[9];
lean_object* v___y_1078_ = _args[10];
lean_object* v___y_1079_ = _args[11];
lean_object* v___y_1080_ = _args[12];
lean_object* v___y_1081_ = _args[13];
lean_object* v___y_1082_ = _args[14];
lean_object* v___y_1083_ = _args[15];
lean_object* v___y_1084_ = _args[16];
_start:
{
lean_object* v_res_1085_; 
v_res_1085_ = l_List_forIn_x27_loop___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__1(v___x_1068_, v_as_1069_, v_as_x27_1070_, v_b_1071_, v_a_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v_as_x27_1070_);
lean_dec(v_as_1069_);
return v_res_1085_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0(lean_object* v_00_u03b2_1086_, lean_object* v_a_1087_, lean_object* v_x_1088_){
_start:
{
uint8_t v___x_1089_; 
v___x_1089_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___redArg(v_a_1087_, v_x_1088_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1090_, lean_object* v_a_1091_, lean_object* v_x_1092_){
_start:
{
uint8_t v_res_1093_; lean_object* v_r_1094_; 
v_res_1093_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__0(v_00_u03b2_1090_, v_a_1091_, v_x_1092_);
lean_dec(v_x_1092_);
lean_dec(v_a_1091_);
v_r_1094_ = lean_box(v_res_1093_);
return v_r_1094_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1(lean_object* v_00_u03b2_1095_, lean_object* v_data_1096_){
_start:
{
lean_object* v___x_1097_; 
v___x_1097_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1___redArg(v_data_1096_);
return v___x_1097_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_1098_, lean_object* v_i_1099_, lean_object* v_source_1100_, lean_object* v_target_1101_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2___redArg(v_i_1099_, v_source_1100_, v_target_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_1103_, lean_object* v_x_1104_, lean_object* v_x_1105_){
_start:
{
lean_object* v___x_1106_; 
v___x_1106_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals_spec__0_spec__1_spec__2_spec__4___redArg(v_x_1104_, v_x_1105_);
return v___x_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(lean_object* v_goal_1107_, lean_object* v_a_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_, lean_object* v_a_1111_, lean_object* v_a_1112_, lean_object* v_a_1113_, lean_object* v_a_1114_, lean_object* v_a_1115_, lean_object* v_a_1116_, lean_object* v_a_1117_, lean_object* v_a_1118_){
_start:
{
lean_object* v___x_1120_; 
v___x_1120_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(v_goal_1107_, v_a_1108_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1191_; 
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1191_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1191_ == 0)
{
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1191_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1191_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v_toGoalState_1125_; lean_object* v_mvarId_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1190_; 
v_toGoalState_1125_ = lean_ctor_get(v_a_1121_, 0);
v_mvarId_1126_ = lean_ctor_get(v_a_1121_, 1);
v_isSharedCheck_1190_ = !lean_is_exclusive(v_a_1121_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1128_ = v_a_1121_;
v_isShared_1129_ = v_isSharedCheck_1190_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_mvarId_1126_);
lean_inc(v_toGoalState_1125_);
lean_dec(v_a_1121_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1190_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v_mvarId_1131_; lean_object* v___y_1132_; lean_object* v___y_1133_; uint8_t v_inconsistent_1165_; 
v_inconsistent_1165_ = lean_ctor_get_uint8(v_toGoalState_1125_, sizeof(void*)*17);
if (v_inconsistent_1165_ == 0)
{
uint8_t v_trivial_1166_; 
lean_del_object(v___x_1123_);
v_trivial_1166_ = lean_ctor_get_uint8(v_a_1108_, sizeof(void*)*19);
if (v_trivial_1166_ == 0)
{
v_mvarId_1131_ = v_mvarId_1126_;
v___y_1132_ = v_a_1109_;
v___y_1133_ = v_a_1116_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_repeatAndRfl(v_mvarId_1126_, v_a_1108_, v_a_1109_, v_a_1110_, v_a_1111_, v_a_1112_, v_a_1113_, v_a_1114_, v_a_1115_, v_a_1116_, v_a_1117_, v_a_1118_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v_a_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1177_; 
v_a_1168_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1177_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1177_ == 0)
{
v___x_1170_ = v___x_1167_;
v_isShared_1171_ = v_isSharedCheck_1177_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_a_1168_);
lean_dec(v___x_1167_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1177_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
if (lean_obj_tag(v_a_1168_) == 1)
{
lean_object* v_val_1172_; 
lean_del_object(v___x_1170_);
v_val_1172_ = lean_ctor_get(v_a_1168_, 0);
lean_inc(v_val_1172_);
lean_dec_ref_known(v_a_1168_, 1);
v_mvarId_1131_ = v_val_1172_;
v___y_1132_ = v_a_1109_;
v___y_1133_ = v_a_1116_;
goto v___jp_1130_;
}
else
{
lean_object* v___x_1173_; lean_object* v___x_1175_; 
lean_dec(v_a_1168_);
lean_del_object(v___x_1128_);
lean_dec_ref(v_toGoalState_1125_);
v___x_1173_ = lean_box(0);
if (v_isShared_1171_ == 0)
{
lean_ctor_set(v___x_1170_, 0, v___x_1173_);
v___x_1175_ = v___x_1170_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1176_; 
v_reuseFailAlloc_1176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1176_, 0, v___x_1173_);
v___x_1175_ = v_reuseFailAlloc_1176_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
return v___x_1175_;
}
}
}
}
else
{
lean_object* v_a_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1185_; 
lean_del_object(v___x_1128_);
lean_dec_ref(v_toGoalState_1125_);
v_a_1178_ = lean_ctor_get(v___x_1167_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1167_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1180_ = v___x_1167_;
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_a_1178_);
lean_dec(v___x_1167_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1185_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1183_; 
if (v_isShared_1181_ == 0)
{
v___x_1183_ = v___x_1180_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v_a_1178_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
}
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1188_; 
lean_del_object(v___x_1128_);
lean_dec(v_mvarId_1126_);
lean_dec_ref(v_toGoalState_1125_);
v___x_1186_ = lean_box(0);
if (v_isShared_1124_ == 0)
{
lean_ctor_set(v___x_1123_, 0, v___x_1186_);
v___x_1188_ = v___x_1123_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v___x_1186_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
v___jp_1130_:
{
uint8_t v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = 2;
lean_inc(v_mvarId_1131_);
v___x_1135_ = l_Lean_MVarId_setKind___redArg(v_mvarId_1131_, v___x_1134_, v___y_1133_);
if (lean_obj_tag(v___x_1135_) == 0)
{
lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1163_; 
v_isSharedCheck_1163_ = !lean_is_exclusive(v___x_1135_);
if (v_isSharedCheck_1163_ == 0)
{
lean_object* v_unused_1164_; 
v_unused_1164_ = lean_ctor_get(v___x_1135_, 0);
lean_dec(v_unused_1164_);
v___x_1137_ = v___x_1135_;
v_isShared_1138_ = v_isSharedCheck_1163_;
goto v_resetjp_1136_;
}
else
{
lean_dec(v___x_1135_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1163_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1139_; lean_object* v_specBackwardRuleCache_1140_; lean_object* v_splitBackwardRuleCache_1141_; lean_object* v_invariants_1142_; lean_object* v_vcs_1143_; lean_object* v_simpState_1144_; lean_object* v_fuel_1145_; lean_object* v_inlineHandledInvariants_1146_; lean_object* v___x_1148_; uint8_t v_isShared_1149_; uint8_t v_isSharedCheck_1162_; 
v___x_1139_ = lean_st_ref_take(v___y_1132_);
v_specBackwardRuleCache_1140_ = lean_ctor_get(v___x_1139_, 0);
v_splitBackwardRuleCache_1141_ = lean_ctor_get(v___x_1139_, 1);
v_invariants_1142_ = lean_ctor_get(v___x_1139_, 2);
v_vcs_1143_ = lean_ctor_get(v___x_1139_, 3);
v_simpState_1144_ = lean_ctor_get(v___x_1139_, 4);
v_fuel_1145_ = lean_ctor_get(v___x_1139_, 5);
v_inlineHandledInvariants_1146_ = lean_ctor_get(v___x_1139_, 6);
v_isSharedCheck_1162_ = !lean_is_exclusive(v___x_1139_);
if (v_isSharedCheck_1162_ == 0)
{
v___x_1148_ = v___x_1139_;
v_isShared_1149_ = v_isSharedCheck_1162_;
goto v_resetjp_1147_;
}
else
{
lean_inc(v_inlineHandledInvariants_1146_);
lean_inc(v_fuel_1145_);
lean_inc(v_simpState_1144_);
lean_inc(v_vcs_1143_);
lean_inc(v_invariants_1142_);
lean_inc(v_splitBackwardRuleCache_1141_);
lean_inc(v_specBackwardRuleCache_1140_);
lean_dec(v___x_1139_);
v___x_1148_ = lean_box(0);
v_isShared_1149_ = v_isSharedCheck_1162_;
goto v_resetjp_1147_;
}
v_resetjp_1147_:
{
lean_object* v___x_1151_; 
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 1, v_mvarId_1131_);
v___x_1151_ = v___x_1128_;
goto v_reusejp_1150_;
}
else
{
lean_object* v_reuseFailAlloc_1161_; 
v_reuseFailAlloc_1161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1161_, 0, v_toGoalState_1125_);
lean_ctor_set(v_reuseFailAlloc_1161_, 1, v_mvarId_1131_);
v___x_1151_ = v_reuseFailAlloc_1161_;
goto v_reusejp_1150_;
}
v_reusejp_1150_:
{
lean_object* v___x_1152_; lean_object* v___x_1154_; 
v___x_1152_ = lean_array_push(v_vcs_1143_, v___x_1151_);
if (v_isShared_1149_ == 0)
{
lean_ctor_set(v___x_1148_, 3, v___x_1152_);
v___x_1154_ = v___x_1148_;
goto v_reusejp_1153_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_specBackwardRuleCache_1140_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_splitBackwardRuleCache_1141_);
lean_ctor_set(v_reuseFailAlloc_1160_, 2, v_invariants_1142_);
lean_ctor_set(v_reuseFailAlloc_1160_, 3, v___x_1152_);
lean_ctor_set(v_reuseFailAlloc_1160_, 4, v_simpState_1144_);
lean_ctor_set(v_reuseFailAlloc_1160_, 5, v_fuel_1145_);
lean_ctor_set(v_reuseFailAlloc_1160_, 6, v_inlineHandledInvariants_1146_);
v___x_1154_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1158_; 
v___x_1155_ = lean_st_ref_set(v___y_1132_, v___x_1154_);
v___x_1156_ = lean_box(0);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 0, v___x_1156_);
v___x_1158_ = v___x_1137_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v___x_1156_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
}
}
}
}
}
}
else
{
lean_dec(v_mvarId_1131_);
lean_del_object(v___x_1128_);
lean_dec_ref(v_toGoalState_1125_);
return v___x_1135_;
}
}
}
}
}
else
{
lean_object* v_a_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
v_a_1192_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1194_ = v___x_1120_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_a_1192_);
lean_dec(v___x_1120_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_a_1192_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC___boxed(lean_object* v_goal_1200_, lean_object* v_a_1201_, lean_object* v_a_1202_, lean_object* v_a_1203_, lean_object* v_a_1204_, lean_object* v_a_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v_goal_1200_, v_a_1201_, v_a_1202_, v_a_1203_, v_a_1204_, v_a_1205_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_, v_a_1210_, v_a_1211_);
lean_dec(v_a_1211_);
lean_dec_ref(v_a_1210_);
lean_dec(v_a_1209_);
lean_dec_ref(v_a_1208_);
lean_dec(v_a_1207_);
lean_dec_ref(v_a_1206_);
lean_dec(v_a_1205_);
lean_dec_ref(v_a_1204_);
lean_dec(v_a_1203_);
lean_dec(v_a_1202_);
lean_dec_ref(v_a_1201_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___lam__0(lean_object* v_x_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; 
lean_inc(v___y_1221_);
lean_inc_ref(v___y_1220_);
lean_inc(v___y_1219_);
lean_inc_ref(v___y_1218_);
lean_inc(v___y_1217_);
lean_inc(v___y_1216_);
lean_inc_ref(v___y_1215_);
v___x_1227_ = lean_apply_12(v_x_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, lean_box(0));
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___lam__0___boxed(lean_object* v_x_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v_res_1241_; 
v_res_1241_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___lam__0(v_x_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
return v_res_1241_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg(lean_object* v_mvarId_1242_, lean_object* v_x_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_){
_start:
{
lean_object* v___f_1256_; lean_object* v___x_1257_; 
lean_inc(v___y_1250_);
lean_inc_ref(v___y_1249_);
lean_inc(v___y_1248_);
lean_inc_ref(v___y_1247_);
lean_inc(v___y_1246_);
lean_inc(v___y_1245_);
lean_inc_ref(v___y_1244_);
v___f_1256_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___lam__0___boxed), 13, 8);
lean_closure_set(v___f_1256_, 0, v_x_1243_);
lean_closure_set(v___f_1256_, 1, v___y_1244_);
lean_closure_set(v___f_1256_, 2, v___y_1245_);
lean_closure_set(v___f_1256_, 3, v___y_1246_);
lean_closure_set(v___f_1256_, 4, v___y_1247_);
lean_closure_set(v___f_1256_, 5, v___y_1248_);
lean_closure_set(v___f_1256_, 6, v___y_1249_);
lean_closure_set(v___f_1256_, 7, v___y_1250_);
v___x_1257_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1242_, v___f_1256_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_);
if (lean_obj_tag(v___x_1257_) == 0)
{
return v___x_1257_;
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
v_a_1258_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1257_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1257_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg___boxed(lean_object* v_mvarId_1266_, lean_object* v_x_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_, lean_object* v___y_1271_, lean_object* v___y_1272_, lean_object* v___y_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg(v_mvarId_1266_, v_x_1267_, v___y_1268_, v___y_1269_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
lean_dec(v___y_1274_);
lean_dec_ref(v___y_1273_);
lean_dec(v___y_1272_);
lean_dec_ref(v___y_1271_);
lean_dec(v___y_1270_);
lean_dec(v___y_1269_);
lean_dec_ref(v___y_1268_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(lean_object* v_00_u03b1_1281_, lean_object* v_mvarId_1282_, lean_object* v_x_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_){
_start:
{
lean_object* v___x_1296_; 
v___x_1296_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg(v_mvarId_1282_, v_x_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_, v___y_1293_, v___y_1294_);
return v___x_1296_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___boxed(lean_object* v_00_u03b1_1297_, lean_object* v_mvarId_1298_, lean_object* v_x_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v_res_1312_; 
v_res_1312_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1(v_00_u03b1_1297_, v_mvarId_1298_, v_x_1299_, v___y_1300_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_);
lean_dec(v___y_1310_);
lean_dec_ref(v___y_1309_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec(v___y_1301_);
lean_dec_ref(v___y_1300_);
return v_res_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(lean_object* v_goal_1313_, lean_object* v_scope_1314_, size_t v_sz_1315_, size_t v_i_1316_, lean_object* v_bs_1317_){
_start:
{
uint8_t v___x_1318_; 
v___x_1318_ = lean_usize_dec_lt(v_i_1316_, v_sz_1315_);
if (v___x_1318_ == 0)
{
lean_dec_ref(v_scope_1314_);
return v_bs_1317_;
}
else
{
lean_object* v_toGoalState_1319_; lean_object* v_v_1320_; lean_object* v___x_1321_; lean_object* v_bs_x27_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; size_t v___x_1325_; size_t v___x_1326_; lean_object* v___x_1327_; 
v_toGoalState_1319_ = lean_ctor_get(v_goal_1313_, 0);
v_v_1320_ = lean_array_uget(v_bs_1317_, v_i_1316_);
v___x_1321_ = lean_unsigned_to_nat(0u);
v_bs_x27_1322_ = lean_array_uset(v_bs_1317_, v_i_1316_, v___x_1321_);
lean_inc_ref(v_toGoalState_1319_);
v___x_1323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1323_, 0, v_toGoalState_1319_);
lean_ctor_set(v___x_1323_, 1, v_v_1320_);
lean_inc_ref(v_scope_1314_);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1323_);
lean_ctor_set(v___x_1324_, 1, v_scope_1314_);
v___x_1325_ = ((size_t)1ULL);
v___x_1326_ = lean_usize_add(v_i_1316_, v___x_1325_);
v___x_1327_ = lean_array_uset(v_bs_x27_1322_, v_i_1316_, v___x_1324_);
v_i_1316_ = v___x_1326_;
v_bs_1317_ = v___x_1327_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4___boxed(lean_object* v_goal_1329_, lean_object* v_scope_1330_, lean_object* v_sz_1331_, lean_object* v_i_1332_, lean_object* v_bs_1333_){
_start:
{
size_t v_sz_boxed_1334_; size_t v_i_boxed_1335_; lean_object* v_res_1336_; 
v_sz_boxed_1334_ = lean_unbox_usize(v_sz_1331_);
lean_dec(v_sz_1331_);
v_i_boxed_1335_ = lean_unbox_usize(v_i_1332_);
lean_dec(v_i_1332_);
v_res_1336_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(v_goal_1329_, v_scope_1330_, v_sz_boxed_1334_, v_i_boxed_1335_, v_bs_1333_);
lean_dec_ref(v_goal_1329_);
return v_res_1336_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2(lean_object* v_a_1337_, lean_object* v_scope_1338_, lean_object* v___x_1339_, lean_object* v_goal_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
lean_object* v___x_1353_; size_t v_sz_1354_; size_t v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1353_ = l_Array_reverse___redArg(v_a_1337_);
v_sz_1354_ = lean_array_size(v___x_1353_);
v___x_1355_ = ((size_t)0ULL);
v___x_1356_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__4(v_goal_1340_, v_scope_1338_, v_sz_1354_, v___x_1355_, v___x_1353_);
v___x_1357_ = l_Array_append___redArg(v___x_1339_, v___x_1356_);
lean_dec_ref(v___x_1356_);
v___x_1358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1358_, 0, v___x_1357_);
v___x_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1359_, 0, v___x_1358_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2___boxed(lean_object* v_a_1360_, lean_object* v_scope_1361_, lean_object* v___x_1362_, lean_object* v_goal_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_, lean_object* v___y_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v_res_1376_; 
v_res_1376_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2(v_a_1360_, v_scope_1361_, v___x_1362_, v_goal_1363_, v___y_1364_, v___y_1365_, v___y_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_);
lean_dec(v___y_1374_);
lean_dec_ref(v___y_1373_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec_ref(v___y_1367_);
lean_dec(v___y_1366_);
lean_dec(v___y_1365_);
lean_dec_ref(v___y_1364_);
lean_dec_ref(v_goal_1363_);
return v_res_1376_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0_spec__0(lean_object* v_msgData_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_){
_start:
{
lean_object* v___x_1383_; lean_object* v_env_1384_; lean_object* v___x_1385_; lean_object* v_mctx_1386_; lean_object* v_lctx_1387_; lean_object* v_options_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1383_ = lean_st_ref_get(v___y_1381_);
v_env_1384_ = lean_ctor_get(v___x_1383_, 0);
lean_inc_ref(v_env_1384_);
lean_dec(v___x_1383_);
v___x_1385_ = lean_st_ref_get(v___y_1379_);
v_mctx_1386_ = lean_ctor_get(v___x_1385_, 0);
lean_inc_ref(v_mctx_1386_);
lean_dec(v___x_1385_);
v_lctx_1387_ = lean_ctor_get(v___y_1378_, 2);
v_options_1388_ = lean_ctor_get(v___y_1380_, 2);
lean_inc_ref(v_options_1388_);
lean_inc_ref(v_lctx_1387_);
v___x_1389_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1389_, 0, v_env_1384_);
lean_ctor_set(v___x_1389_, 1, v_mctx_1386_);
lean_ctor_set(v___x_1389_, 2, v_lctx_1387_);
lean_ctor_set(v___x_1389_, 3, v_options_1388_);
v___x_1390_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
lean_ctor_set(v___x_1390_, 1, v_msgData_1377_);
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
return v___x_1391_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0_spec__0___boxed(lean_object* v_msgData_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_){
_start:
{
lean_object* v_res_1398_; 
v_res_1398_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0_spec__0(v_msgData_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec_ref(v___y_1393_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(lean_object* v_msg_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_ref_1405_; lean_object* v___x_1406_; lean_object* v_a_1407_; lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1415_; 
v_ref_1405_ = lean_ctor_get(v___y_1402_, 5);
v___x_1406_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0_spec__0(v_msg_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
v_a_1407_ = lean_ctor_get(v___x_1406_, 0);
v_isSharedCheck_1415_ = !lean_is_exclusive(v___x_1406_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1409_ = v___x_1406_;
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
else
{
lean_inc(v_a_1407_);
lean_dec(v___x_1406_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1415_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
lean_object* v___x_1411_; lean_object* v___x_1413_; 
lean_inc(v_ref_1405_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_ref_1405_);
lean_ctor_set(v___x_1411_, 1, v_a_1407_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 1);
lean_ctor_set(v___x_1409_, 0, v___x_1411_);
v___x_1413_ = v___x_1409_;
goto v_reusejp_1412_;
}
else
{
lean_object* v_reuseFailAlloc_1414_; 
v_reuseFailAlloc_1414_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1414_, 0, v___x_1411_);
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
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg___boxed(lean_object* v_msg_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_){
_start:
{
lean_object* v_res_1422_; 
v_res_1422_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v_msg_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
lean_dec(v___y_1420_);
lean_dec_ref(v___y_1419_);
lean_dec(v___y_1418_);
lean_dec_ref(v___y_1417_);
return v_res_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0(lean_object* v_00_u03b1_1423_, lean_object* v_msg_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v_msg_1424_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___boxed(lean_object* v_00_u03b1_1438_, lean_object* v_msg_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v_res_1452_; 
v_res_1452_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0(v_00_u03b1_1438_, v_msg_1439_, v___y_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
return v_res_1452_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__1(void){
_start:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; 
v___x_1454_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__0));
v___x_1455_ = l_Lean_stringToMessageData(v___x_1454_);
return v___x_1455_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__3(void){
_start:
{
lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1457_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__2));
v___x_1458_ = l_Lean_stringToMessageData(v___x_1457_);
return v___x_1458_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__5(void){
_start:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1460_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__4));
v___x_1461_ = l_Lean_stringToMessageData(v___x_1460_);
return v___x_1461_;
}
}
static lean_object* _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__7(void){
_start:
{
lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1463_ = ((lean_object*)(l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__6));
v___x_1464_ = l_Lean_stringToMessageData(v___x_1463_);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(lean_object* v_a_1465_, lean_object* v_a_1466_){
_start:
{
if (lean_obj_tag(v_a_1465_) == 0)
{
lean_object* v___x_1467_; 
v___x_1467_ = l_List_reverse___redArg(v_a_1466_);
return v___x_1467_;
}
else
{
lean_object* v_head_1468_; lean_object* v_tail_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1497_; 
v_head_1468_ = lean_ctor_get(v_a_1465_, 0);
v_tail_1469_ = lean_ctor_get(v_a_1465_, 1);
v_isSharedCheck_1497_ = !lean_is_exclusive(v_a_1465_);
if (v_isSharedCheck_1497_ == 0)
{
v___x_1471_ = v_a_1465_;
v_isShared_1472_ = v_isSharedCheck_1497_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_tail_1469_);
lean_inc(v_head_1468_);
lean_dec(v_a_1465_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1497_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___y_1474_; 
switch(lean_obj_tag(v_head_1468_))
{
case 0:
{
lean_object* v_declName_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v_declName_1479_ = lean_ctor_get(v_head_1468_, 0);
lean_inc(v_declName_1479_);
lean_dec_ref_known(v_head_1468_, 1);
v___x_1480_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__1, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__1_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__1);
v___x_1481_ = l_Lean_MessageData_ofName(v_declName_1479_);
v___x_1482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1482_, 0, v___x_1480_);
lean_ctor_set(v___x_1482_, 1, v___x_1481_);
v___y_1474_ = v___x_1482_;
goto v___jp_1473_;
}
case 1:
{
lean_object* v_fvarId_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; 
v_fvarId_1483_ = lean_ctor_get(v_head_1468_, 0);
lean_inc(v_fvarId_1483_);
lean_dec_ref_known(v_head_1468_, 1);
v___x_1484_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__3, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__3_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__3);
v___x_1485_ = l_Lean_mkFVar(v_fvarId_1483_);
v___x_1486_ = l_Lean_MessageData_ofExpr(v___x_1485_);
v___x_1487_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1487_, 0, v___x_1484_);
lean_ctor_set(v___x_1487_, 1, v___x_1486_);
v___y_1474_ = v___x_1487_;
goto v___jp_1473_;
}
default: 
{
lean_object* v_ref_1488_; lean_object* v_proof_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
v_ref_1488_ = lean_ctor_get(v_head_1468_, 1);
lean_inc(v_ref_1488_);
v_proof_1489_ = lean_ctor_get(v_head_1468_, 2);
lean_inc_ref(v_proof_1489_);
lean_dec_ref_known(v_head_1468_, 3);
v___x_1490_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__5, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__5_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__5);
v___x_1491_ = l_Lean_MessageData_ofSyntax(v_ref_1488_);
v___x_1492_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1490_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = lean_obj_once(&l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__7, &l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__7_once, _init_l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3___closed__7);
v___x_1494_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1492_);
lean_ctor_set(v___x_1494_, 1, v___x_1493_);
v___x_1495_ = l_Lean_MessageData_ofExpr(v_proof_1489_);
v___x_1496_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1496_, 0, v___x_1494_);
lean_ctor_set(v___x_1496_, 1, v___x_1495_);
v___y_1474_ = v___x_1496_;
goto v___jp_1473_;
}
}
v___jp_1473_:
{
lean_object* v___x_1476_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 1, v_a_1466_);
lean_ctor_set(v___x_1471_, 0, v___y_1474_);
v___x_1476_ = v___x_1471_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___y_1474_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_a_1466_);
v___x_1476_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
v_a_1465_ = v_tail_1469_;
v_a_1466_ = v___x_1476_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(size_t v_sz_1498_, size_t v_i_1499_, lean_object* v_bs_1500_){
_start:
{
uint8_t v___x_1501_; 
v___x_1501_ = lean_usize_dec_lt(v_i_1499_, v_sz_1498_);
if (v___x_1501_ == 0)
{
return v_bs_1500_;
}
else
{
lean_object* v_v_1502_; lean_object* v_proof_1503_; lean_object* v___x_1504_; lean_object* v_bs_x27_1505_; size_t v___x_1506_; size_t v___x_1507_; lean_object* v___x_1508_; 
v_v_1502_ = lean_array_uget_borrowed(v_bs_1500_, v_i_1499_);
v_proof_1503_ = lean_ctor_get(v_v_1502_, 1);
lean_inc_ref(v_proof_1503_);
v___x_1504_ = lean_unsigned_to_nat(0u);
v_bs_x27_1505_ = lean_array_uset(v_bs_1500_, v_i_1499_, v___x_1504_);
v___x_1506_ = ((size_t)1ULL);
v___x_1507_ = lean_usize_add(v_i_1499_, v___x_1506_);
v___x_1508_ = lean_array_uset(v_bs_x27_1505_, v_i_1499_, v_proof_1503_);
v_i_1499_ = v___x_1507_;
v_bs_1500_ = v___x_1508_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2___boxed(lean_object* v_sz_1510_, lean_object* v_i_1511_, lean_object* v_bs_1512_){
_start:
{
size_t v_sz_boxed_1513_; size_t v_i_boxed_1514_; lean_object* v_res_1515_; 
v_sz_boxed_1513_ = lean_unbox_usize(v_sz_1510_);
lean_dec(v_sz_1510_);
v_i_boxed_1514_ = lean_unbox_usize(v_i_1511_);
lean_dec(v_i_1511_);
v_res_1515_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(v_sz_boxed_1513_, v_i_boxed_1514_, v_bs_1512_);
return v_res_1515_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__1(void){
_start:
{
lean_object* v___x_1517_; lean_object* v___x_1518_; 
v___x_1517_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__0));
v___x_1518_ = l_Lean_stringToMessageData(v___x_1517_);
return v___x_1518_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1520_; lean_object* v___x_1521_; 
v___x_1520_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__2));
v___x_1521_ = l_Lean_stringToMessageData(v___x_1520_);
return v___x_1521_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__5(void){
_start:
{
lean_object* v___x_1523_; lean_object* v___x_1524_; 
v___x_1523_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__4));
v___x_1524_ = l_Lean_stringToMessageData(v___x_1523_);
return v___x_1524_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; 
v___x_1526_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__6));
v___x_1527_ = l_Lean_stringToMessageData(v___x_1526_);
return v___x_1527_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__9(void){
_start:
{
lean_object* v___x_1529_; lean_object* v___x_1530_; 
v___x_1529_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__8));
v___x_1530_ = l_Lean_stringToMessageData(v___x_1529_);
return v___x_1530_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1(uint8_t v___x_1531_, lean_object* v_monad_1532_, lean_object* v_e_1533_, lean_object* v_thms_1534_, lean_object* v___y_1535_, lean_object* v___y_1536_, lean_object* v___y_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_){
_start:
{
if (v___x_1531_ == 0)
{
lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; size_t v_sz_1556_; size_t v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1547_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__1, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__1_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__1);
v___x_1548_ = l_Lean_MessageData_ofExpr(v_monad_1532_);
v___x_1549_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1547_);
lean_ctor_set(v___x_1549_, 1, v___x_1548_);
v___x_1550_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__3, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__3_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__3);
v___x_1551_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___x_1552_ = l_Lean_MessageData_ofExpr(v_e_1533_);
v___x_1553_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1551_);
lean_ctor_set(v___x_1553_, 1, v___x_1552_);
v___x_1554_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__5, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__5_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__5);
v___x_1555_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1555_, 0, v___x_1553_);
lean_ctor_set(v___x_1555_, 1, v___x_1554_);
v_sz_1556_ = lean_array_size(v_thms_1534_);
v___x_1557_ = ((size_t)0ULL);
v___x_1558_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__2(v_sz_1556_, v___x_1557_, v_thms_1534_);
v___x_1559_ = lean_array_to_list(v___x_1558_);
v___x_1560_ = lean_box(0);
v___x_1561_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__3(v___x_1559_, v___x_1560_);
v___x_1562_ = l_Lean_MessageData_ofList(v___x_1561_);
v___x_1563_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1563_, 0, v___x_1555_);
lean_ctor_set(v___x_1563_, 1, v___x_1562_);
v___x_1564_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7);
v___x_1565_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1565_, 0, v___x_1563_);
lean_ctor_set(v___x_1565_, 1, v___x_1564_);
v___x_1566_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v___x_1565_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
return v___x_1566_;
}
else
{
lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; 
lean_dec_ref(v_thms_1534_);
lean_dec_ref(v_monad_1532_);
v___x_1567_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__9, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__9_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__9);
v___x_1568_ = l_Lean_MessageData_ofExpr(v_e_1533_);
v___x_1569_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1569_, 0, v___x_1567_);
lean_ctor_set(v___x_1569_, 1, v___x_1568_);
v___x_1570_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___closed__7);
v___x_1571_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1571_, 0, v___x_1569_);
lean_ctor_set(v___x_1571_, 1, v___x_1570_);
v___x_1572_ = l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___redArg(v___x_1571_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_);
return v___x_1572_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___boxed(lean_object* v___x_1573_, lean_object* v_monad_1574_, lean_object* v_e_1575_, lean_object* v_thms_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
uint8_t v___x_69603__boxed_1589_; lean_object* v_res_1590_; 
v___x_69603__boxed_1589_ = lean_unbox(v___x_1573_);
v_res_1590_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1(v___x_69603__boxed_1589_, v_monad_1574_, v_e_1575_, v_thms_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec(v___y_1581_);
lean_dec_ref(v___y_1580_);
lean_dec(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__0(lean_object* v_goal_1591_, lean_object* v___x_1592_, lean_object* v_target_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_){
_start:
{
lean_object* v___x_1606_; 
v___x_1606_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v_goal_1591_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_);
if (lean_obj_tag(v___x_1606_) == 0)
{
lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1614_; 
v_isSharedCheck_1614_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1614_ == 0)
{
lean_object* v_unused_1615_; 
v_unused_1615_ = lean_ctor_get(v___x_1606_, 0);
lean_dec(v_unused_1615_);
v___x_1608_ = v___x_1606_;
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
else
{
lean_dec(v___x_1606_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1614_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1610_; lean_object* v___x_1612_; 
v___x_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1592_);
if (v_isShared_1609_ == 0)
{
lean_ctor_set(v___x_1608_, 0, v___x_1610_);
v___x_1612_ = v___x_1608_;
goto v_reusejp_1611_;
}
else
{
lean_object* v_reuseFailAlloc_1613_; 
v_reuseFailAlloc_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1613_, 0, v___x_1610_);
v___x_1612_ = v_reuseFailAlloc_1613_;
goto v_reusejp_1611_;
}
v_reusejp_1611_:
{
return v___x_1612_;
}
}
}
else
{
lean_object* v_a_1616_; lean_object* v___x_1618_; uint8_t v_isShared_1619_; uint8_t v_isSharedCheck_1623_; 
lean_dec_ref(v___x_1592_);
v_a_1616_ = lean_ctor_get(v___x_1606_, 0);
v_isSharedCheck_1623_ = !lean_is_exclusive(v___x_1606_);
if (v_isSharedCheck_1623_ == 0)
{
v___x_1618_ = v___x_1606_;
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
else
{
lean_inc(v_a_1616_);
lean_dec(v___x_1606_);
v___x_1618_ = lean_box(0);
v_isShared_1619_ = v_isSharedCheck_1623_;
goto v_resetjp_1617_;
}
v_resetjp_1617_:
{
lean_object* v___x_1621_; 
if (v_isShared_1619_ == 0)
{
v___x_1621_ = v___x_1618_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_a_1616_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__0___boxed(lean_object* v_goal_1624_, lean_object* v___x_1625_, lean_object* v_target_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
lean_object* v_res_1639_; 
v_res_1639_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__0(v_goal_1624_, v___x_1625_, v_target_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_);
lean_dec(v___y_1637_);
lean_dec_ref(v___y_1636_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec(v___y_1628_);
lean_dec_ref(v___y_1627_);
lean_dec_ref(v_target_1626_);
return v_res_1639_;
}
}
static lean_object* _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1641_ = ((lean_object*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__0));
v___x_1642_ = l_Lean_stringToMessageData(v___x_1641_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg(lean_object* v_a_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_){
_start:
{
lean_object* v___y_1657_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; 
v___x_1677_ = lean_array_get_size(v_a_1643_);
v___x_1678_ = lean_unsigned_to_nat(1u);
v___x_1679_ = lean_nat_sub(v___x_1677_, v___x_1678_);
v___x_1680_ = lean_nat_dec_lt(v___x_1679_, v___x_1677_);
if (v___x_1680_ == 0)
{
lean_object* v___x_1681_; 
lean_dec(v___x_1679_);
v___x_1681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1681_, 0, v_a_1643_);
return v___x_1681_;
}
else
{
lean_object* v___x_1682_; lean_object* v_goal_1683_; lean_object* v_toGoalState_1684_; lean_object* v_scope_1685_; lean_object* v_mvarId_1686_; uint8_t v_inconsistent_1687_; lean_object* v___x_1688_; 
v___x_1682_ = lean_array_fget_borrowed(v_a_1643_, v___x_1679_);
lean_dec(v___x_1679_);
v_goal_1683_ = lean_ctor_get(v___x_1682_, 0);
lean_inc_ref(v_goal_1683_);
v_toGoalState_1684_ = lean_ctor_get(v_goal_1683_, 0);
v_scope_1685_ = lean_ctor_get(v___x_1682_, 1);
lean_inc_ref(v_scope_1685_);
v_mvarId_1686_ = lean_ctor_get(v_goal_1683_, 1);
v_inconsistent_1687_ = lean_ctor_get_uint8(v_toGoalState_1684_, sizeof(void*)*17);
v___x_1688_ = lean_array_pop(v_a_1643_);
if (v_inconsistent_1687_ == 0)
{
lean_object* v___x_1689_; 
lean_inc(v_mvarId_1686_);
v___x_1689_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_solve(v_scope_1685_, v_mvarId_1686_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1689_) == 0)
{
lean_object* v_a_1690_; 
v_a_1690_ = lean_ctor_get(v___x_1689_, 0);
lean_inc(v_a_1690_);
lean_dec_ref_known(v___x_1689_, 1);
switch(lean_obj_tag(v_a_1690_))
{
case 2:
{
lean_object* v___x_1692_; uint8_t v_isShared_1693_; uint8_t v_isSharedCheck_1711_; 
lean_inc(v_mvarId_1686_);
v_isSharedCheck_1711_ = !lean_is_exclusive(v_goal_1683_);
if (v_isSharedCheck_1711_ == 0)
{
lean_object* v_unused_1712_; lean_object* v_unused_1713_; 
v_unused_1712_ = lean_ctor_get(v_goal_1683_, 1);
lean_dec(v_unused_1712_);
v_unused_1713_ = lean_ctor_get(v_goal_1683_, 0);
lean_dec(v_unused_1713_);
v___x_1692_ = v_goal_1683_;
v_isShared_1693_ = v_isSharedCheck_1711_;
goto v_resetjp_1691_;
}
else
{
lean_dec(v_goal_1683_);
v___x_1692_ = lean_box(0);
v_isShared_1693_ = v_isSharedCheck_1711_;
goto v_resetjp_1691_;
}
v_resetjp_1691_:
{
lean_object* v_e_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1698_; 
v_e_1694_ = lean_ctor_get(v_a_1690_, 0);
lean_inc_ref(v_e_1694_);
lean_dec_ref_known(v_a_1690_, 1);
v___x_1695_ = lean_obj_once(&l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__1, &l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__1_once, _init_l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___closed__1);
v___x_1696_ = l_Lean_MessageData_ofExpr(v_e_1694_);
if (v_isShared_1693_ == 0)
{
lean_ctor_set_tag(v___x_1692_, 7);
lean_ctor_set(v___x_1692_, 1, v___x_1696_);
lean_ctor_set(v___x_1692_, 0, v___x_1695_);
v___x_1698_ = v___x_1692_;
goto v_reusejp_1697_;
}
else
{
lean_object* v_reuseFailAlloc_1710_; 
v_reuseFailAlloc_1710_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1710_, 0, v___x_1695_);
lean_ctor_set(v_reuseFailAlloc_1710_, 1, v___x_1696_);
v___x_1698_ = v_reuseFailAlloc_1710_;
goto v_reusejp_1697_;
}
v_reusejp_1697_:
{
lean_object* v___x_1699_; lean_object* v___x_1700_; 
v___x_1699_ = lean_alloc_closure((void*)(l_Lean_throwError___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__0___boxed), 14, 2);
lean_closure_set(v___x_1699_, 0, lean_box(0));
lean_closure_set(v___x_1699_, 1, v___x_1698_);
v___x_1700_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg(v_mvarId_1686_, v___x_1699_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1700_) == 0)
{
lean_dec_ref_known(v___x_1700_, 1);
v_a_1643_ = v___x_1688_;
goto _start;
}
else
{
lean_object* v_a_1702_; lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1709_; 
lean_dec_ref(v___x_1688_);
v_a_1702_ = lean_ctor_get(v___x_1700_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1700_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1704_ = v___x_1700_;
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
else
{
lean_inc(v_a_1702_);
lean_dec(v___x_1700_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1709_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1707_; 
if (v_isShared_1705_ == 0)
{
v___x_1707_ = v___x_1704_;
goto v_reusejp_1706_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_a_1702_);
v___x_1707_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1706_;
}
v_reusejp_1706_:
{
return v___x_1707_;
}
}
}
}
}
}
case 3:
{
uint8_t v_errorOnMissingSpec_1714_; 
v_errorOnMissingSpec_1714_ = lean_ctor_get_uint8(v___y_1644_, sizeof(void*)*19 + 2);
if (v_errorOnMissingSpec_1714_ == 0)
{
lean_object* v___x_1715_; 
lean_dec_ref_known(v_a_1690_, 3);
v___x_1715_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v_goal_1683_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1715_) == 0)
{
lean_dec_ref_known(v___x_1715_, 1);
v_a_1643_ = v___x_1688_;
goto _start;
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec_ref(v___x_1688_);
v_a_1717_ = lean_ctor_get(v___x_1715_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1715_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1715_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1715_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
else
{
lean_object* v_e_1725_; lean_object* v_monad_1726_; lean_object* v_thms_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; uint8_t v___x_1730_; lean_object* v___x_1731_; lean_object* v___y_1732_; lean_object* v___x_1733_; 
lean_inc(v_mvarId_1686_);
lean_dec_ref(v_goal_1683_);
v_e_1725_ = lean_ctor_get(v_a_1690_, 0);
lean_inc_ref(v_e_1725_);
v_monad_1726_ = lean_ctor_get(v_a_1690_, 1);
lean_inc_ref(v_monad_1726_);
v_thms_1727_ = lean_ctor_get(v_a_1690_, 2);
lean_inc_ref(v_thms_1727_);
lean_dec_ref_known(v_a_1690_, 3);
v___x_1728_ = lean_array_get_size(v_thms_1727_);
v___x_1729_ = lean_unsigned_to_nat(0u);
v___x_1730_ = lean_nat_dec_eq(v___x_1728_, v___x_1729_);
v___x_1731_ = lean_box(v___x_1730_);
v___y_1732_ = lean_alloc_closure((void*)(l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__1___boxed), 16, 4);
lean_closure_set(v___y_1732_, 0, v___x_1731_);
lean_closure_set(v___y_1732_, 1, v_monad_1726_);
lean_closure_set(v___y_1732_, 2, v_e_1725_);
lean_closure_set(v___y_1732_, 3, v_thms_1727_);
v___x_1733_ = l_Lean_MVarId_withContext___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__1___redArg(v_mvarId_1686_, v___y_1732_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1733_) == 0)
{
lean_dec_ref_known(v___x_1733_, 1);
v_a_1643_ = v___x_1688_;
goto _start;
}
else
{
lean_object* v_a_1735_; lean_object* v___x_1737_; uint8_t v_isShared_1738_; uint8_t v_isSharedCheck_1742_; 
lean_dec_ref(v___x_1688_);
v_a_1735_ = lean_ctor_get(v___x_1733_, 0);
v_isSharedCheck_1742_ = !lean_is_exclusive(v___x_1733_);
if (v_isSharedCheck_1742_ == 0)
{
v___x_1737_ = v___x_1733_;
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
else
{
lean_inc(v_a_1735_);
lean_dec(v___x_1733_);
v___x_1737_ = lean_box(0);
v_isShared_1738_ = v_isSharedCheck_1742_;
goto v_resetjp_1736_;
}
v_resetjp_1736_:
{
lean_object* v___x_1740_; 
if (v_isShared_1738_ == 0)
{
v___x_1740_ = v___x_1737_;
goto v_reusejp_1739_;
}
else
{
lean_object* v_reuseFailAlloc_1741_; 
v_reuseFailAlloc_1741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1741_, 0, v_a_1735_);
v___x_1740_ = v_reuseFailAlloc_1741_;
goto v_reusejp_1739_;
}
v_reusejp_1739_:
{
return v___x_1740_;
}
}
}
}
}
case 4:
{
lean_object* v_scope_1743_; lean_object* v_subgoals_1744_; lean_object* v___x_1745_; 
v_scope_1743_ = lean_ctor_get(v_a_1690_, 0);
lean_inc_ref(v_scope_1743_);
v_subgoals_1744_ = lean_ctor_get(v_a_1690_, 1);
lean_inc(v_subgoals_1744_);
lean_dec_ref_known(v_a_1690_, 2);
v___x_1745_ = l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals(v_subgoals_1744_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec(v_subgoals_1744_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1747_; uint8_t v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
v___x_1747_ = lean_array_get_size(v_a_1746_);
v___x_1748_ = lean_nat_dec_lt(v___x_1678_, v___x_1747_);
if (v___x_1748_ == 0)
{
lean_object* v___x_1749_; 
v___x_1749_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2(v_a_1746_, v_scope_1743_, v___x_1688_, v_goal_1683_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec_ref(v_goal_1683_);
v___y_1657_ = v___x_1749_;
goto v___jp_1656_;
}
else
{
lean_object* v___x_1750_; 
v___x_1750_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_processHypotheses___redArg(v_goal_1683_, v___y_1644_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1750_) == 0)
{
lean_object* v_a_1751_; lean_object* v___x_1752_; 
v_a_1751_ = lean_ctor_get(v___x_1750_, 0);
lean_inc(v_a_1751_);
lean_dec_ref_known(v___x_1750_, 1);
v___x_1752_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__2(v_a_1746_, v_scope_1743_, v___x_1688_, v_a_1751_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec(v_a_1751_);
v___y_1657_ = v___x_1752_;
goto v___jp_1656_;
}
else
{
lean_object* v_a_1753_; lean_object* v___x_1755_; uint8_t v_isShared_1756_; uint8_t v_isSharedCheck_1760_; 
lean_dec(v_a_1746_);
lean_dec_ref(v_scope_1743_);
lean_dec_ref(v___x_1688_);
v_a_1753_ = lean_ctor_get(v___x_1750_, 0);
v_isSharedCheck_1760_ = !lean_is_exclusive(v___x_1750_);
if (v_isSharedCheck_1760_ == 0)
{
v___x_1755_ = v___x_1750_;
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
else
{
lean_inc(v_a_1753_);
lean_dec(v___x_1750_);
v___x_1755_ = lean_box(0);
v_isShared_1756_ = v_isSharedCheck_1760_;
goto v_resetjp_1754_;
}
v_resetjp_1754_:
{
lean_object* v___x_1758_; 
if (v_isShared_1756_ == 0)
{
v___x_1758_ = v___x_1755_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1759_; 
v_reuseFailAlloc_1759_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1759_, 0, v_a_1753_);
v___x_1758_ = v_reuseFailAlloc_1759_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
return v___x_1758_;
}
}
}
}
}
else
{
lean_object* v_a_1761_; lean_object* v___x_1763_; uint8_t v_isShared_1764_; uint8_t v_isSharedCheck_1768_; 
lean_dec_ref(v_scope_1743_);
lean_dec_ref(v___x_1688_);
lean_dec_ref(v_goal_1683_);
v_a_1761_ = lean_ctor_get(v___x_1745_, 0);
v_isSharedCheck_1768_ = !lean_is_exclusive(v___x_1745_);
if (v_isSharedCheck_1768_ == 0)
{
v___x_1763_ = v___x_1745_;
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
else
{
lean_inc(v_a_1761_);
lean_dec(v___x_1745_);
v___x_1763_ = lean_box(0);
v_isShared_1764_ = v_isSharedCheck_1768_;
goto v_resetjp_1762_;
}
v_resetjp_1762_:
{
lean_object* v___x_1766_; 
if (v_isShared_1764_ == 0)
{
v___x_1766_ = v___x_1763_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v_a_1761_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
case 5:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_emitVC(v_goal_1683_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
if (lean_obj_tag(v___x_1769_) == 0)
{
lean_dec_ref_known(v___x_1769_, 1);
v_a_1643_ = v___x_1688_;
goto _start;
}
else
{
lean_object* v_a_1771_; lean_object* v___x_1773_; uint8_t v_isShared_1774_; uint8_t v_isSharedCheck_1778_; 
lean_dec_ref(v___x_1688_);
v_a_1771_ = lean_ctor_get(v___x_1769_, 0);
v_isSharedCheck_1778_ = !lean_is_exclusive(v___x_1769_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1773_ = v___x_1769_;
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
else
{
lean_inc(v_a_1771_);
lean_dec(v___x_1769_);
v___x_1773_ = lean_box(0);
v_isShared_1774_ = v_isSharedCheck_1778_;
goto v_resetjp_1772_;
}
v_resetjp_1772_:
{
lean_object* v___x_1776_; 
if (v_isShared_1774_ == 0)
{
v___x_1776_ = v___x_1773_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v_a_1771_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
}
default: 
{
lean_object* v_target_1779_; lean_object* v___x_1780_; 
v_target_1779_ = lean_ctor_get(v_a_1690_, 0);
lean_inc_ref(v_target_1779_);
lean_dec(v_a_1690_);
v___x_1780_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___lam__0(v_goal_1683_, v___x_1688_, v_target_1779_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec_ref(v_target_1779_);
v___y_1657_ = v___x_1780_;
goto v___jp_1656_;
}
}
}
else
{
lean_object* v_a_1781_; lean_object* v___x_1783_; uint8_t v_isShared_1784_; uint8_t v_isSharedCheck_1788_; 
lean_dec_ref(v___x_1688_);
lean_dec_ref(v_goal_1683_);
v_a_1781_ = lean_ctor_get(v___x_1689_, 0);
v_isSharedCheck_1788_ = !lean_is_exclusive(v___x_1689_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1783_ = v___x_1689_;
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
else
{
lean_inc(v_a_1781_);
lean_dec(v___x_1689_);
v___x_1783_ = lean_box(0);
v_isShared_1784_ = v_isSharedCheck_1788_;
goto v_resetjp_1782_;
}
v_resetjp_1782_:
{
lean_object* v___x_1786_; 
if (v_isShared_1784_ == 0)
{
v___x_1786_ = v___x_1783_;
goto v_reusejp_1785_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_a_1781_);
v___x_1786_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1785_;
}
v_reusejp_1785_:
{
return v___x_1786_;
}
}
}
}
else
{
lean_dec_ref(v_scope_1685_);
lean_dec_ref(v_goal_1683_);
v_a_1643_ = v___x_1688_;
goto _start;
}
}
v___jp_1656_:
{
if (lean_obj_tag(v___y_1657_) == 0)
{
lean_object* v_a_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1668_; 
v_a_1658_ = lean_ctor_get(v___y_1657_, 0);
v_isSharedCheck_1668_ = !lean_is_exclusive(v___y_1657_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1660_ = v___y_1657_;
v_isShared_1661_ = v_isSharedCheck_1668_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_a_1658_);
lean_dec(v___y_1657_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1668_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
if (lean_obj_tag(v_a_1658_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1664_; 
v_a_1662_ = lean_ctor_get(v_a_1658_, 0);
lean_inc(v_a_1662_);
lean_dec_ref_known(v_a_1658_, 1);
if (v_isShared_1661_ == 0)
{
lean_ctor_set(v___x_1660_, 0, v_a_1662_);
v___x_1664_ = v___x_1660_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1662_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
else
{
lean_object* v_a_1666_; 
lean_del_object(v___x_1660_);
v_a_1666_ = lean_ctor_get(v_a_1658_, 0);
lean_inc(v_a_1666_);
lean_dec_ref_known(v_a_1658_, 1);
v_a_1643_ = v_a_1666_;
goto _start;
}
}
}
else
{
lean_object* v_a_1669_; lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1676_; 
v_a_1669_ = lean_ctor_get(v___y_1657_, 0);
v_isSharedCheck_1676_ = !lean_is_exclusive(v___y_1657_);
if (v_isSharedCheck_1676_ == 0)
{
v___x_1671_ = v___y_1657_;
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
else
{
lean_inc(v_a_1669_);
lean_dec(v___y_1657_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1676_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v_a_1669_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg___boxed(lean_object* v_a_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_, lean_object* v___y_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_){
_start:
{
lean_object* v_res_1803_; 
v_res_1803_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg(v_a_1790_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_, v___y_1796_, v___y_1797_, v___y_1798_, v___y_1799_, v___y_1800_, v___y_1801_);
lean_dec(v___y_1801_);
lean_dec_ref(v___y_1800_);
lean_dec(v___y_1799_);
lean_dec_ref(v___y_1798_);
lean_dec(v___y_1797_);
lean_dec_ref(v___y_1796_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec(v___y_1792_);
lean_dec_ref(v___y_1791_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work(lean_object* v_scope_1804_, lean_object* v_goal_1805_, lean_object* v_a_1806_, lean_object* v_a_1807_, lean_object* v_a_1808_, lean_object* v_a_1809_, lean_object* v_a_1810_, lean_object* v_a_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_){
_start:
{
lean_object* v_toGoalState_1818_; lean_object* v_mvarId_1819_; lean_object* v___x_1821_; uint8_t v_isShared_1822_; uint8_t v_isSharedCheck_1858_; 
v_toGoalState_1818_ = lean_ctor_get(v_goal_1805_, 0);
v_mvarId_1819_ = lean_ctor_get(v_goal_1805_, 1);
v_isSharedCheck_1858_ = !lean_is_exclusive(v_goal_1805_);
if (v_isSharedCheck_1858_ == 0)
{
v___x_1821_ = v_goal_1805_;
v_isShared_1822_ = v_isSharedCheck_1858_;
goto v_resetjp_1820_;
}
else
{
lean_inc(v_mvarId_1819_);
lean_inc(v_toGoalState_1818_);
lean_dec(v_goal_1805_);
v___x_1821_ = lean_box(0);
v_isShared_1822_ = v_isSharedCheck_1858_;
goto v_resetjp_1820_;
}
v_resetjp_1820_:
{
lean_object* v___x_1823_; 
v___x_1823_ = l_Lean_Meta_Sym_preprocessMVar(v_mvarId_1819_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc(v_a_1824_);
lean_dec_ref_known(v___x_1823_, 1);
if (v_isShared_1822_ == 0)
{
lean_ctor_set(v___x_1821_, 1, v_a_1824_);
v___x_1826_ = v___x_1821_;
goto v_reusejp_1825_;
}
else
{
lean_object* v_reuseFailAlloc_1849_; 
v_reuseFailAlloc_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1849_, 0, v_toGoalState_1818_);
lean_ctor_set(v_reuseFailAlloc_1849_, 1, v_a_1824_);
v___x_1826_ = v_reuseFailAlloc_1849_;
goto v_reusejp_1825_;
}
v_reusejp_1825_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1827_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1827_, 0, v___x_1826_);
lean_ctor_set(v___x_1827_, 1, v_scope_1804_);
v___x_1828_ = lean_unsigned_to_nat(1u);
v___x_1829_ = lean_mk_empty_array_with_capacity(v___x_1828_);
v___x_1830_ = lean_array_push(v___x_1829_, v___x_1827_);
v___x_1831_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg(v___x_1830_, v_a_1806_, v_a_1807_, v_a_1808_, v_a_1809_, v_a_1810_, v_a_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v___x_1833_; uint8_t v_isShared_1834_; uint8_t v_isSharedCheck_1839_; 
v_isSharedCheck_1839_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1839_ == 0)
{
lean_object* v_unused_1840_; 
v_unused_1840_ = lean_ctor_get(v___x_1831_, 0);
lean_dec(v_unused_1840_);
v___x_1833_ = v___x_1831_;
v_isShared_1834_ = v_isSharedCheck_1839_;
goto v_resetjp_1832_;
}
else
{
lean_dec(v___x_1831_);
v___x_1833_ = lean_box(0);
v_isShared_1834_ = v_isSharedCheck_1839_;
goto v_resetjp_1832_;
}
v_resetjp_1832_:
{
lean_object* v___x_1835_; lean_object* v___x_1837_; 
v___x_1835_ = lean_box(0);
if (v_isShared_1834_ == 0)
{
lean_ctor_set(v___x_1833_, 0, v___x_1835_);
v___x_1837_ = v___x_1833_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1838_; 
v_reuseFailAlloc_1838_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1838_, 0, v___x_1835_);
v___x_1837_ = v_reuseFailAlloc_1838_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
return v___x_1837_;
}
}
}
else
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1848_; 
v_a_1841_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1848_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1848_ == 0)
{
v___x_1843_ = v___x_1831_;
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1831_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1848_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1846_; 
if (v_isShared_1844_ == 0)
{
v___x_1846_ = v___x_1843_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1847_; 
v_reuseFailAlloc_1847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1847_, 0, v_a_1841_);
v___x_1846_ = v_reuseFailAlloc_1847_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
return v___x_1846_;
}
}
}
}
}
else
{
lean_object* v_a_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1857_; 
lean_del_object(v___x_1821_);
lean_dec_ref(v_toGoalState_1818_);
lean_dec_ref(v_scope_1804_);
v_a_1850_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1857_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1857_ == 0)
{
v___x_1852_ = v___x_1823_;
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_a_1850_);
lean_dec(v___x_1823_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1857_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v___x_1855_; 
if (v_isShared_1853_ == 0)
{
v___x_1855_ = v___x_1852_;
goto v_reusejp_1854_;
}
else
{
lean_object* v_reuseFailAlloc_1856_; 
v_reuseFailAlloc_1856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1856_, 0, v_a_1850_);
v___x_1855_ = v_reuseFailAlloc_1856_;
goto v_reusejp_1854_;
}
v_reusejp_1854_:
{
return v___x_1855_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_work___boxed(lean_object* v_scope_1859_, lean_object* v_goal_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_){
_start:
{
lean_object* v_res_1873_; 
v_res_1873_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_work(v_scope_1859_, v_goal_1860_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec(v_a_1869_);
lean_dec_ref(v_a_1868_);
lean_dec(v_a_1867_);
lean_dec_ref(v_a_1866_);
lean_dec(v_a_1865_);
lean_dec_ref(v_a_1864_);
lean_dec(v_a_1863_);
lean_dec(v_a_1862_);
lean_dec_ref(v_a_1861_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5(lean_object* v_inst_1874_, lean_object* v_a_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___redArg(v_a_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_, v___y_1884_, v___y_1885_, v___y_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5___boxed(lean_object* v_inst_1889_, lean_object* v_a_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_, lean_object* v___y_1896_, lean_object* v___y_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
lean_object* v_res_1903_; 
v_res_1903_ = l___private_Init_While_0__whileM_erased___at___00Lean_Elab_Tactic_Do_Internal_VCGen_work_spec__5(v_inst_1889_, v_a_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_, v___y_1895_, v___y_1896_, v___y_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
lean_dec(v___y_1897_);
lean_dec_ref(v___y_1896_);
lean_dec(v___y_1895_);
lean_dec_ref(v___y_1894_);
lean_dec(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
return v_res_1903_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(lean_object* v_as_1905_, lean_object* v_i_1906_, lean_object* v_j_1907_, lean_object* v_bs_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_zero_1914_; uint8_t v_isZero_1915_; 
v_zero_1914_ = lean_unsigned_to_nat(0u);
v_isZero_1915_ = lean_nat_dec_eq(v_i_1906_, v_zero_1914_);
if (v_isZero_1915_ == 1)
{
lean_object* v___x_1916_; 
lean_dec(v_j_1907_);
lean_dec(v_i_1906_);
v___x_1916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1916_, 0, v_bs_1908_);
return v___x_1916_;
}
else
{
lean_object* v___x_1917_; lean_object* v_mvarId_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_array_fget_borrowed(v_as_1905_, v_j_1907_);
v_mvarId_1918_ = lean_ctor_get(v___x_1917_, 1);
lean_inc(v_mvarId_1918_);
v___x_1919_ = l_Lean_MVarId_getTag(v_mvarId_1918_, v___y_1909_, v___y_1910_, v___y_1911_, v___y_1912_);
if (lean_obj_tag(v___x_1919_) == 0)
{
lean_object* v_a_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v___x_1928_; lean_object* v___x_1929_; lean_object* v___x_1930_; 
v_a_1920_ = lean_ctor_get(v___x_1919_, 0);
lean_inc(v_a_1920_);
lean_dec_ref_known(v___x_1919_, 1);
v___x_1921_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___closed__0));
v___x_1922_ = lean_unsigned_to_nat(1u);
v___x_1923_ = lean_nat_add(v_j_1907_, v___x_1922_);
lean_dec(v_j_1907_);
lean_inc(v___x_1923_);
v___x_1924_ = l_Nat_reprFast(v___x_1923_);
v___x_1925_ = lean_string_append(v___x_1921_, v___x_1924_);
lean_dec_ref(v___x_1924_);
v___x_1926_ = lean_box(0);
v___x_1927_ = l_Lean_Name_str___override(v___x_1926_, v___x_1925_);
v___x_1928_ = lean_erase_macro_scopes(v_a_1920_);
v___x_1929_ = l_Lean_Name_append(v___x_1927_, v___x_1928_);
lean_inc(v_mvarId_1918_);
v___x_1930_ = l_Lean_MVarId_setTag___redArg(v_mvarId_1918_, v___x_1929_, v___y_1910_);
if (lean_obj_tag(v___x_1930_) == 0)
{
lean_object* v_a_1931_; lean_object* v_n_1932_; lean_object* v___x_1933_; 
v_a_1931_ = lean_ctor_get(v___x_1930_, 0);
lean_inc(v_a_1931_);
lean_dec_ref_known(v___x_1930_, 1);
v_n_1932_ = lean_nat_sub(v_i_1906_, v___x_1922_);
lean_dec(v_i_1906_);
v___x_1933_ = lean_array_push(v_bs_1908_, v_a_1931_);
v_i_1906_ = v_n_1932_;
v_j_1907_ = v___x_1923_;
v_bs_1908_ = v___x_1933_;
goto _start;
}
else
{
lean_object* v_a_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1942_; 
lean_dec(v___x_1923_);
lean_dec_ref(v_bs_1908_);
lean_dec(v_i_1906_);
v_a_1935_ = lean_ctor_get(v___x_1930_, 0);
v_isSharedCheck_1942_ = !lean_is_exclusive(v___x_1930_);
if (v_isSharedCheck_1942_ == 0)
{
v___x_1937_ = v___x_1930_;
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_a_1935_);
lean_dec(v___x_1930_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1942_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1940_; 
if (v_isShared_1938_ == 0)
{
v___x_1940_ = v___x_1937_;
goto v_reusejp_1939_;
}
else
{
lean_object* v_reuseFailAlloc_1941_; 
v_reuseFailAlloc_1941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1941_, 0, v_a_1935_);
v___x_1940_ = v_reuseFailAlloc_1941_;
goto v_reusejp_1939_;
}
v_reusejp_1939_:
{
return v___x_1940_;
}
}
}
}
else
{
lean_object* v_a_1943_; lean_object* v___x_1945_; uint8_t v_isShared_1946_; uint8_t v_isSharedCheck_1950_; 
lean_dec_ref(v_bs_1908_);
lean_dec(v_j_1907_);
lean_dec(v_i_1906_);
v_a_1943_ = lean_ctor_get(v___x_1919_, 0);
v_isSharedCheck_1950_ = !lean_is_exclusive(v___x_1919_);
if (v_isSharedCheck_1950_ == 0)
{
v___x_1945_ = v___x_1919_;
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
else
{
lean_inc(v_a_1943_);
lean_dec(v___x_1919_);
v___x_1945_ = lean_box(0);
v_isShared_1946_ = v_isSharedCheck_1950_;
goto v_resetjp_1944_;
}
v_resetjp_1944_:
{
lean_object* v___x_1948_; 
if (v_isShared_1946_ == 0)
{
v___x_1948_ = v___x_1945_;
goto v_reusejp_1947_;
}
else
{
lean_object* v_reuseFailAlloc_1949_; 
v_reuseFailAlloc_1949_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1949_, 0, v_a_1943_);
v___x_1948_ = v_reuseFailAlloc_1949_;
goto v_reusejp_1947_;
}
v_reusejp_1947_:
{
return v___x_1948_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg___boxed(lean_object* v_as_1951_, lean_object* v_i_1952_, lean_object* v_j_1953_, lean_object* v_bs_1954_, lean_object* v___y_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_){
_start:
{
lean_object* v_res_1960_; 
v_res_1960_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(v_as_1951_, v_i_1952_, v_j_1953_, v_bs_1954_, v___y_1955_, v___y_1956_, v___y_1957_, v___y_1958_);
lean_dec(v___y_1958_);
lean_dec_ref(v___y_1957_);
lean_dec(v___y_1956_);
lean_dec_ref(v___y_1955_);
lean_dec_ref(v_as_1951_);
return v_res_1960_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(lean_object* v_as_1962_, lean_object* v_i_1963_, lean_object* v_j_1964_, lean_object* v_bs_1965_, lean_object* v___y_1966_){
_start:
{
lean_object* v_zero_1968_; uint8_t v_isZero_1969_; 
v_zero_1968_ = lean_unsigned_to_nat(0u);
v_isZero_1969_ = lean_nat_dec_eq(v_i_1963_, v_zero_1968_);
if (v_isZero_1969_ == 1)
{
lean_object* v___x_1970_; 
lean_dec(v_j_1964_);
lean_dec(v_i_1963_);
v___x_1970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1970_, 0, v_bs_1965_);
return v___x_1970_;
}
else
{
lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; lean_object* v___x_1979_; 
v___x_1971_ = lean_array_fget_borrowed(v_as_1962_, v_j_1964_);
v___x_1972_ = ((lean_object*)(l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___closed__0));
v___x_1973_ = lean_unsigned_to_nat(1u);
v___x_1974_ = lean_nat_add(v_j_1964_, v___x_1973_);
lean_dec(v_j_1964_);
lean_inc(v___x_1974_);
v___x_1975_ = l_Nat_reprFast(v___x_1974_);
v___x_1976_ = lean_string_append(v___x_1972_, v___x_1975_);
lean_dec_ref(v___x_1975_);
v___x_1977_ = lean_box(0);
v___x_1978_ = l_Lean_Name_str___override(v___x_1977_, v___x_1976_);
lean_inc(v___x_1971_);
v___x_1979_ = l_Lean_MVarId_setTag___redArg(v___x_1971_, v___x_1978_, v___y_1966_);
if (lean_obj_tag(v___x_1979_) == 0)
{
lean_object* v_a_1980_; lean_object* v_n_1981_; lean_object* v___x_1982_; 
v_a_1980_ = lean_ctor_get(v___x_1979_, 0);
lean_inc(v_a_1980_);
lean_dec_ref_known(v___x_1979_, 1);
v_n_1981_ = lean_nat_sub(v_i_1963_, v___x_1973_);
lean_dec(v_i_1963_);
v___x_1982_ = lean_array_push(v_bs_1965_, v_a_1980_);
v_i_1963_ = v_n_1981_;
v_j_1964_ = v___x_1974_;
v_bs_1965_ = v___x_1982_;
goto _start;
}
else
{
lean_object* v_a_1984_; lean_object* v___x_1986_; uint8_t v_isShared_1987_; uint8_t v_isSharedCheck_1991_; 
lean_dec(v___x_1974_);
lean_dec_ref(v_bs_1965_);
lean_dec(v_i_1963_);
v_a_1984_ = lean_ctor_get(v___x_1979_, 0);
v_isSharedCheck_1991_ = !lean_is_exclusive(v___x_1979_);
if (v_isSharedCheck_1991_ == 0)
{
v___x_1986_ = v___x_1979_;
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
else
{
lean_inc(v_a_1984_);
lean_dec(v___x_1979_);
v___x_1986_ = lean_box(0);
v_isShared_1987_ = v_isSharedCheck_1991_;
goto v_resetjp_1985_;
}
v_resetjp_1985_:
{
lean_object* v___x_1989_; 
if (v_isShared_1987_ == 0)
{
v___x_1989_ = v___x_1986_;
goto v_reusejp_1988_;
}
else
{
lean_object* v_reuseFailAlloc_1990_; 
v_reuseFailAlloc_1990_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1990_, 0, v_a_1984_);
v___x_1989_ = v_reuseFailAlloc_1990_;
goto v_reusejp_1988_;
}
v_reusejp_1988_:
{
return v___x_1989_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg___boxed(lean_object* v_as_1992_, lean_object* v_i_1993_, lean_object* v_j_1994_, lean_object* v_bs_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(v_as_1992_, v_i_1993_, v_j_1994_, v_bs_1995_, v___y_1996_);
lean_dec(v___y_1996_);
lean_dec_ref(v_as_1992_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(lean_object* v_mvarId_1999_, lean_object* v___y_2000_){
_start:
{
lean_object* v___x_2002_; lean_object* v_mctx_2003_; lean_object* v_eAssignment_2004_; uint8_t v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2002_ = lean_st_ref_get(v___y_2000_);
v_mctx_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc_ref(v_mctx_2003_);
lean_dec(v___x_2002_);
v_eAssignment_2004_ = lean_ctor_get(v_mctx_2003_, 8);
lean_inc_ref(v_eAssignment_2004_);
lean_dec_ref(v_mctx_2003_);
v___x_2005_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_elabInvariant_spec__1_spec__2___redArg(v_eAssignment_2004_, v_mvarId_1999_);
lean_dec_ref(v_eAssignment_2004_);
v___x_2006_ = lean_box(v___x_2005_);
v___x_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2006_);
return v___x_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg___boxed(lean_object* v_mvarId_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(v_mvarId_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec(v_mvarId_2008_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(lean_object* v_as_2012_, size_t v_i_2013_, size_t v_stop_2014_, lean_object* v_b_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_){
_start:
{
lean_object* v_a_2027_; uint8_t v___x_2031_; 
v___x_2031_ = lean_usize_dec_eq(v_i_2013_, v_stop_2014_);
if (v___x_2031_ == 0)
{
lean_object* v___x_2032_; lean_object* v_mvarId_2035_; lean_object* v___x_2036_; 
v___x_2032_ = lean_array_uget_borrowed(v_as_2012_, v_i_2013_);
v_mvarId_2035_ = lean_ctor_get(v___x_2032_, 1);
v___x_2036_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(v_mvarId_2035_, v___y_2022_);
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2037_; uint8_t v___x_2038_; 
v_a_2037_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2037_);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2038_ = lean_unbox(v_a_2037_);
lean_dec(v_a_2037_);
if (v___x_2038_ == 0)
{
goto v___jp_2033_;
}
else
{
v_a_2027_ = v_b_2015_;
goto v___jp_2026_;
}
}
else
{
if (lean_obj_tag(v___x_2036_) == 0)
{
lean_object* v_a_2039_; uint8_t v___x_2040_; 
v_a_2039_ = lean_ctor_get(v___x_2036_, 0);
lean_inc(v_a_2039_);
lean_dec_ref_known(v___x_2036_, 1);
v___x_2040_ = lean_unbox(v_a_2039_);
lean_dec(v_a_2039_);
if (v___x_2040_ == 0)
{
v_a_2027_ = v_b_2015_;
goto v___jp_2026_;
}
else
{
goto v___jp_2033_;
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_dec_ref(v_b_2015_);
v_a_2041_ = lean_ctor_get(v___x_2036_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_2036_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_2036_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_2036_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
v___jp_2033_:
{
lean_object* v___x_2034_; 
lean_inc(v___x_2032_);
v___x_2034_ = lean_array_push(v_b_2015_, v___x_2032_);
v_a_2027_ = v___x_2034_;
goto v___jp_2026_;
}
}
else
{
lean_object* v___x_2049_; 
v___x_2049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2049_, 0, v_b_2015_);
return v___x_2049_;
}
v___jp_2026_:
{
size_t v___x_2028_; size_t v___x_2029_; 
v___x_2028_ = ((size_t)1ULL);
v___x_2029_ = lean_usize_add(v_i_2013_, v___x_2028_);
v_i_2013_ = v___x_2029_;
v_b_2015_ = v_a_2027_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3___boxed(lean_object* v_as_2050_, lean_object* v_i_2051_, lean_object* v_stop_2052_, lean_object* v_b_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_){
_start:
{
size_t v_i_boxed_2064_; size_t v_stop_boxed_2065_; lean_object* v_res_2066_; 
v_i_boxed_2064_ = lean_unbox_usize(v_i_2051_);
lean_dec(v_i_2051_);
v_stop_boxed_2065_ = lean_unbox_usize(v_stop_2052_);
lean_dec(v_stop_2052_);
v_res_2066_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(v_as_2050_, v_i_boxed_2064_, v_stop_boxed_2065_, v_b_2053_, v___y_2054_, v___y_2055_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
lean_dec(v___y_2060_);
lean_dec_ref(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec_ref(v___y_2057_);
lean_dec(v___y_2056_);
lean_dec_ref(v___y_2055_);
lean_dec(v___y_2054_);
lean_dec_ref(v_as_2050_);
return v_res_2066_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0(void){
_start:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2067_ = lean_box(0);
v___x_2068_ = lean_unsigned_to_nat(16u);
v___x_2069_ = lean_mk_array(v___x_2068_, v___x_2067_);
return v___x_2069_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; 
v___x_2070_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__0);
v___x_2071_ = lean_unsigned_to_nat(0u);
v___x_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2072_, 0, v___x_2071_);
lean_ctor_set(v___x_2072_, 1, v___x_2070_);
return v___x_2072_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2(void){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_box(0), lean_box(0));
return v___x_2073_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3(void){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__2);
v___x_2075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2075_, 0, v___x_2074_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4(void){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2076_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__3);
v___x_2077_ = lean_unsigned_to_nat(0u);
v___x_2078_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2078_, 0, v___x_2077_);
lean_ctor_set(v___x_2078_, 1, v___x_2076_);
lean_ctor_set(v___x_2078_, 2, v___x_2076_);
lean_ctor_set(v___x_2078_, 3, v___x_2076_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run(lean_object* v_goal_2079_, lean_object* v_ctx_2080_, lean_object* v_scope_2081_, lean_object* v_stepLimit_x3f_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_){
_start:
{
lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v_a_2096_; lean_object* v___y_2100_; lean_object* v___y_2101_; lean_object* v___y_2102_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___y_2117_; 
v___x_2112_ = lean_unsigned_to_nat(0u);
v___x_2113_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__1);
v___x_2114_ = ((lean_object*)(l___private_Lean_Elab_Tactic_Do_Internal_VCGen_Driver_0__Lean_Elab_Tactic_Do_Internal_VCGen_handleInvariantSubgoals___closed__0));
v___x_2115_ = lean_obj_once(&l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4, &l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4_once, _init_l_Lean_Elab_Tactic_Do_Internal_VCGen_run___closed__4);
if (lean_obj_tag(v_stepLimit_x3f_2082_) == 0)
{
lean_object* v___x_2163_; 
v___x_2163_ = lean_box(1);
v___y_2117_ = v___x_2163_;
goto v___jp_2116_;
}
else
{
lean_object* v_val_2164_; lean_object* v___x_2166_; uint8_t v_isShared_2167_; uint8_t v_isSharedCheck_2171_; 
v_val_2164_ = lean_ctor_get(v_stepLimit_x3f_2082_, 0);
v_isSharedCheck_2171_ = !lean_is_exclusive(v_stepLimit_x3f_2082_);
if (v_isSharedCheck_2171_ == 0)
{
v___x_2166_ = v_stepLimit_x3f_2082_;
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
else
{
lean_inc(v_val_2164_);
lean_dec(v_stepLimit_x3f_2082_);
v___x_2166_ = lean_box(0);
v_isShared_2167_ = v_isSharedCheck_2171_;
goto v_resetjp_2165_;
}
v_resetjp_2165_:
{
lean_object* v___x_2169_; 
if (v_isShared_2167_ == 0)
{
lean_ctor_set_tag(v___x_2166_, 0);
v___x_2169_ = v___x_2166_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_val_2164_);
v___x_2169_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
v___y_2117_ = v___x_2169_;
goto v___jp_2116_;
}
}
}
v___jp_2093_:
{
lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2097_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2097_, 0, v___y_2094_);
lean_ctor_set(v___x_2097_, 1, v_a_2096_);
lean_ctor_set(v___x_2097_, 2, v___y_2095_);
v___x_2098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2098_, 0, v___x_2097_);
return v___x_2098_;
}
v___jp_2099_:
{
if (lean_obj_tag(v___y_2102_) == 0)
{
lean_object* v_a_2103_; 
v_a_2103_ = lean_ctor_get(v___y_2102_, 0);
lean_inc(v_a_2103_);
lean_dec_ref_known(v___y_2102_, 1);
v___y_2094_ = v___y_2100_;
v___y_2095_ = v___y_2101_;
v_a_2096_ = v_a_2103_;
goto v___jp_2093_;
}
else
{
lean_object* v_a_2104_; lean_object* v___x_2106_; uint8_t v_isShared_2107_; uint8_t v_isSharedCheck_2111_; 
lean_dec_ref(v___y_2101_);
lean_dec_ref(v___y_2100_);
v_a_2104_ = lean_ctor_get(v___y_2102_, 0);
v_isSharedCheck_2111_ = !lean_is_exclusive(v___y_2102_);
if (v_isSharedCheck_2111_ == 0)
{
v___x_2106_ = v___y_2102_;
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
else
{
lean_inc(v_a_2104_);
lean_dec(v___y_2102_);
v___x_2106_ = lean_box(0);
v_isShared_2107_ = v_isSharedCheck_2111_;
goto v_resetjp_2105_;
}
v_resetjp_2105_:
{
lean_object* v___x_2109_; 
if (v_isShared_2107_ == 0)
{
v___x_2109_ = v___x_2106_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_a_2104_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
v___jp_2116_:
{
lean_object* v_initState_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; 
v_initState_2118_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_initState_2118_, 0, v___x_2113_);
lean_ctor_set(v_initState_2118_, 1, v___x_2113_);
lean_ctor_set(v_initState_2118_, 2, v___x_2114_);
lean_ctor_set(v_initState_2118_, 3, v___x_2114_);
lean_ctor_set(v_initState_2118_, 4, v___x_2115_);
lean_ctor_set(v_initState_2118_, 5, v___y_2117_);
lean_ctor_set(v_initState_2118_, 6, v___x_2113_);
v___x_2119_ = lean_st_mk_ref(v_initState_2118_);
v___x_2120_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_work(v_scope_2081_, v_goal_2079_, v_ctx_2080_, v___x_2119_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
if (lean_obj_tag(v___x_2120_) == 0)
{
lean_object* v___x_2121_; lean_object* v_invariants_2122_; lean_object* v_vcs_2123_; lean_object* v_inlineHandledInvariants_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
lean_dec_ref_known(v___x_2120_, 1);
v___x_2121_ = lean_st_ref_get(v___x_2119_);
lean_dec(v___x_2119_);
v_invariants_2122_ = lean_ctor_get(v___x_2121_, 2);
lean_inc_ref(v_invariants_2122_);
v_vcs_2123_ = lean_ctor_get(v___x_2121_, 3);
lean_inc_ref(v_vcs_2123_);
v_inlineHandledInvariants_2124_ = lean_ctor_get(v___x_2121_, 6);
lean_inc_ref(v_inlineHandledInvariants_2124_);
lean_dec(v___x_2121_);
v___x_2125_ = lean_array_get_size(v_invariants_2122_);
v___x_2126_ = lean_mk_empty_array_with_capacity(v___x_2125_);
v___x_2127_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(v_invariants_2122_, v___x_2125_, v___x_2112_, v___x_2126_, v_a_2089_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
lean_dec_ref_known(v___x_2127_, 1);
v___x_2128_ = lean_array_get_size(v_vcs_2123_);
v___x_2129_ = lean_mk_empty_array_with_capacity(v___x_2128_);
v___x_2130_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(v_vcs_2123_, v___x_2128_, v___x_2112_, v___x_2129_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
if (lean_obj_tag(v___x_2130_) == 0)
{
uint8_t v___x_2131_; 
lean_dec_ref_known(v___x_2130_, 1);
v___x_2131_ = lean_nat_dec_lt(v___x_2112_, v___x_2128_);
if (v___x_2131_ == 0)
{
lean_dec_ref(v_vcs_2123_);
v___y_2094_ = v_invariants_2122_;
v___y_2095_ = v_inlineHandledInvariants_2124_;
v_a_2096_ = v___x_2114_;
goto v___jp_2093_;
}
else
{
uint8_t v___x_2132_; 
v___x_2132_ = lean_nat_dec_le(v___x_2128_, v___x_2128_);
if (v___x_2132_ == 0)
{
if (v___x_2131_ == 0)
{
lean_dec_ref(v_vcs_2123_);
v___y_2094_ = v_invariants_2122_;
v___y_2095_ = v_inlineHandledInvariants_2124_;
v_a_2096_ = v___x_2114_;
goto v___jp_2093_;
}
else
{
size_t v___x_2133_; size_t v___x_2134_; lean_object* v___x_2135_; 
v___x_2133_ = ((size_t)0ULL);
v___x_2134_ = lean_usize_of_nat(v___x_2128_);
v___x_2135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(v_vcs_2123_, v___x_2133_, v___x_2134_, v___x_2114_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec_ref(v_vcs_2123_);
v___y_2100_ = v_invariants_2122_;
v___y_2101_ = v_inlineHandledInvariants_2124_;
v___y_2102_ = v___x_2135_;
goto v___jp_2099_;
}
}
else
{
size_t v___x_2136_; size_t v___x_2137_; lean_object* v___x_2138_; 
v___x_2136_ = ((size_t)0ULL);
v___x_2137_ = lean_usize_of_nat(v___x_2128_);
v___x_2138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__3(v_vcs_2123_, v___x_2136_, v___x_2137_, v___x_2114_, v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_, v_a_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_);
lean_dec_ref(v_vcs_2123_);
v___y_2100_ = v_invariants_2122_;
v___y_2101_ = v_inlineHandledInvariants_2124_;
v___y_2102_ = v___x_2138_;
goto v___jp_2099_;
}
}
}
else
{
lean_object* v_a_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2146_; 
lean_dec_ref(v_inlineHandledInvariants_2124_);
lean_dec_ref(v_vcs_2123_);
lean_dec_ref(v_invariants_2122_);
v_a_2139_ = lean_ctor_get(v___x_2130_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v___x_2130_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2141_ = v___x_2130_;
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_a_2139_);
lean_dec(v___x_2130_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2146_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v___x_2144_; 
if (v_isShared_2142_ == 0)
{
v___x_2144_ = v___x_2141_;
goto v_reusejp_2143_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v_a_2139_);
v___x_2144_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2143_;
}
v_reusejp_2143_:
{
return v___x_2144_;
}
}
}
}
else
{
lean_object* v_a_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2154_; 
lean_dec_ref(v_inlineHandledInvariants_2124_);
lean_dec_ref(v_vcs_2123_);
lean_dec_ref(v_invariants_2122_);
v_a_2147_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2154_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2149_ = v___x_2127_;
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_a_2147_);
lean_dec(v___x_2127_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2154_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
lean_object* v___x_2152_; 
if (v_isShared_2150_ == 0)
{
v___x_2152_ = v___x_2149_;
goto v_reusejp_2151_;
}
else
{
lean_object* v_reuseFailAlloc_2153_; 
v_reuseFailAlloc_2153_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2153_, 0, v_a_2147_);
v___x_2152_ = v_reuseFailAlloc_2153_;
goto v_reusejp_2151_;
}
v_reusejp_2151_:
{
return v___x_2152_;
}
}
}
}
else
{
lean_object* v_a_2155_; lean_object* v___x_2157_; uint8_t v_isShared_2158_; uint8_t v_isSharedCheck_2162_; 
lean_dec(v___x_2119_);
v_a_2155_ = lean_ctor_get(v___x_2120_, 0);
v_isSharedCheck_2162_ = !lean_is_exclusive(v___x_2120_);
if (v_isSharedCheck_2162_ == 0)
{
v___x_2157_ = v___x_2120_;
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
else
{
lean_inc(v_a_2155_);
lean_dec(v___x_2120_);
v___x_2157_ = lean_box(0);
v_isShared_2158_ = v_isSharedCheck_2162_;
goto v_resetjp_2156_;
}
v_resetjp_2156_:
{
lean_object* v___x_2160_; 
if (v_isShared_2158_ == 0)
{
v___x_2160_ = v___x_2157_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_a_2155_);
v___x_2160_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
return v___x_2160_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Do_Internal_VCGen_run___boxed(lean_object* v_goal_2172_, lean_object* v_ctx_2173_, lean_object* v_scope_2174_, lean_object* v_stepLimit_x3f_2175_, lean_object* v_a_2176_, lean_object* v_a_2177_, lean_object* v_a_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lean_Elab_Tactic_Do_Internal_VCGen_run(v_goal_2172_, v_ctx_2173_, v_scope_2174_, v_stepLimit_x3f_2175_, v_a_2176_, v_a_2177_, v_a_2178_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_, v_a_2183_, v_a_2184_);
lean_dec(v_a_2184_);
lean_dec_ref(v_a_2183_);
lean_dec(v_a_2182_);
lean_dec_ref(v_a_2181_);
lean_dec(v_a_2180_);
lean_dec_ref(v_a_2179_);
lean_dec(v_a_2178_);
lean_dec_ref(v_a_2177_);
lean_dec(v_a_2176_);
lean_dec_ref(v_ctx_2173_);
return v_res_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0(lean_object* v_mvarId_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___redArg(v_mvarId_2187_, v___y_2194_);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0___boxed(lean_object* v_mvarId_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_, lean_object* v___y_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l_Lean_MVarId_isAssigned___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__0(v_mvarId_2199_, v___y_2200_, v___y_2201_, v___y_2202_, v___y_2203_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_, v___y_2208_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
lean_dec(v___y_2206_);
lean_dec_ref(v___y_2205_);
lean_dec(v___y_2204_);
lean_dec_ref(v___y_2203_);
lean_dec(v___y_2202_);
lean_dec_ref(v___y_2201_);
lean_dec(v___y_2200_);
lean_dec(v_mvarId_2199_);
return v_res_2210_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1(lean_object* v_as_2211_, lean_object* v_i_2212_, lean_object* v_j_2213_, lean_object* v_inv_2214_, lean_object* v_bs_2215_, lean_object* v___y_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_){
_start:
{
lean_object* v___x_2226_; 
v___x_2226_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___redArg(v_as_2211_, v_i_2212_, v_j_2213_, v_bs_2215_, v___y_2222_);
return v___x_2226_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1___boxed(lean_object* v_as_2227_, lean_object* v_i_2228_, lean_object* v_j_2229_, lean_object* v_inv_2230_, lean_object* v_bs_2231_, lean_object* v___y_2232_, lean_object* v___y_2233_, lean_object* v___y_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_, lean_object* v___y_2237_, lean_object* v___y_2238_, lean_object* v___y_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__1(v_as_2227_, v_i_2228_, v_j_2229_, v_inv_2230_, v_bs_2231_, v___y_2232_, v___y_2233_, v___y_2234_, v___y_2235_, v___y_2236_, v___y_2237_, v___y_2238_, v___y_2239_, v___y_2240_);
lean_dec(v___y_2240_);
lean_dec_ref(v___y_2239_);
lean_dec(v___y_2238_);
lean_dec_ref(v___y_2237_);
lean_dec(v___y_2236_);
lean_dec_ref(v___y_2235_);
lean_dec(v___y_2234_);
lean_dec_ref(v___y_2233_);
lean_dec(v___y_2232_);
lean_dec_ref(v_as_2227_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2(lean_object* v_as_2243_, lean_object* v_i_2244_, lean_object* v_j_2245_, lean_object* v_inv_2246_, lean_object* v_bs_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_){
_start:
{
lean_object* v___x_2258_; 
v___x_2258_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___redArg(v_as_2243_, v_i_2244_, v_j_2245_, v_bs_2247_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_);
return v___x_2258_;
}
}
LEAN_EXPORT lean_object* l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2___boxed(lean_object* v_as_2259_, lean_object* v_i_2260_, lean_object* v_j_2261_, lean_object* v_inv_2262_, lean_object* v_bs_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_, lean_object* v___y_2270_, lean_object* v___y_2271_, lean_object* v___y_2272_, lean_object* v___y_2273_){
_start:
{
lean_object* v_res_2274_; 
v_res_2274_ = l_Array_mapFinIdxM_map___at___00Lean_Elab_Tactic_Do_Internal_VCGen_run_spec__2(v_as_2259_, v_i_2260_, v_j_2261_, v_inv_2262_, v_bs_2263_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_, v___y_2268_, v___y_2269_, v___y_2270_, v___y_2271_, v___y_2272_);
lean_dec(v___y_2272_);
lean_dec_ref(v___y_2271_);
lean_dec(v___y_2270_);
lean_dec_ref(v___y_2269_);
lean_dec(v___y_2268_);
lean_dec_ref(v___y_2267_);
lean_dec(v___y_2266_);
lean_dec_ref(v___y_2265_);
lean_dec(v___y_2264_);
lean_dec_ref(v_as_2259_);
return v_res_2274_;
}
}
lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(uint8_t builtin);
lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Grind(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Context(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Solve(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Grind(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Do_Internal_VCGen_Driver(builtin);
}
#ifdef __cplusplus
}
#endif
