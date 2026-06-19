// Lean compiler output
// Module: Lean.Parser.Types
// Imports: public import Lean.Data.Trie public import Lean.DocString.Extension import Init.Data.String.OrderInstances
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
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_string_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_prev(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint64_t lean_uint64_of_nat(lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint32_t lean_string_utf8_get(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint64_t l_String_instHashableRaw_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Char_utf8Size(uint32_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_string_utf8_extract(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_shrink___redArg(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_Syntax_getPos_x3f(lean_object*, uint8_t);
lean_object* lean_dbg_trace(lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_decEq___boxed(lean_object*, lean_object*);
lean_object* l_List_eraseRepsBy___redArg(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFileMap_default;
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FileMap_toPosition(lean_object*, lean_object*);
lean_object* l_Lean_mkErrorStringWithPos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Option_instBEq_beq___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtom(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdent(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_getNext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_getNext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_maxPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_argPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_leadPrec;
LEAN_EXPORT lean_object* l_Lean_Parser_minPrec;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4_value;
static const lean_array_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13;
static const lean_string_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_1),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value_aux_2),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9_value),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5_value)}};
static const lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16 = (const lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16_value;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29;
static lean_once_cell_t l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_endPos__valid___autoParam;
static const lean_string_object l_Lean_Parser_instInhabitedInputContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_Parser_instInhabitedInputContext___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedInputContext___closed__0_value;
static lean_once_cell_t l_Lean_Parser_instInhabitedInputContext___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedInputContext___closed__1;
static lean_once_cell_t l_Lean_Parser_instInhabitedInputContext___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_instInhabitedInputContext___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedInputContext;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___auto__1;
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_atEnd___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__String_Pos_Raw_get_x3f_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__String_Pos_Raw_get_x3f_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_getNext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_getNext___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqCacheableParserContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqCacheableParserContext_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqCacheableParserContext___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqCacheableParserContext = (const lean_object*)&l_Lean_Parser_instBEqCacheableParserContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instCoeParserContextInputContext___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instCoeParserContextInputContext___closed__0 = (const lean_object*)&l_Lean_Parser_instCoeParserContextInputContext___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instCoeParserContextInputContext = (const lean_object*)&l_Lean_Parser_instCoeParserContextInputContext___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Parser_instInhabitedError_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_instInhabitedInputContext___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedError_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedError_default = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedError = (const lean_object*)&l_Lean_Parser_instInhabitedError_default___closed__0_value;
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqError_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqError___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqError___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqError = (const lean_object*)&l_Lean_Parser_instBEqError___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " or "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(lean_object*);
static const lean_closure_object l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_String_decEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0___closed__0 = (const lean_object*)&l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Error_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "; "};
static const lean_object* l_Lean_Parser_Error_toString___closed__0 = (const lean_object*)&l_Lean_Parser_Error_toString___closed__0_value;
static const lean_string_object l_Lean_Parser_Error_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "expected "};
static const lean_object* l_Lean_Parser_Error_toString___closed__1 = (const lean_object*)&l_Lean_Parser_Error_toString___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Error_toString(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Error_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Error_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Error_instToString___closed__0 = (const lean_object*)&l_Lean_Parser_Error_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_Error_instToString = (const lean_object*)&l_Lean_Parser_Error_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Error_merge(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqParserCacheKey_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqParserCacheKey_beq___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instBEqParserCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instBEqParserCacheKey_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instBEqParserCacheKey___closed__0 = (const lean_object*)&l_Lean_Parser_instBEqParserCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instBEqParserCacheKey = (const lean_object*)&l_Lean_Parser_instBEqParserCacheKey___closed__0_value;
LEAN_EXPORT uint64_t l_Lean_Parser_instHashableParserCacheKey___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instHashableParserCacheKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instHashableParserCacheKey___closed__0 = (const lean_object*)&l_Lean_Parser_instHashableParserCacheKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instHashableParserCacheKey = (const lean_object*)&l_Lean_Parser_instHashableParserCacheKey___closed__0_value;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__0;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__1;
static lean_once_cell_t l_Lean_Parser_initCacheForInput___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_initCacheForInput___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object*);
static const lean_array_object l_Lean_Parser_SyntaxStack_empty___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_SyntaxStack_empty___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__0_value;
static const lean_ctor_object l_Lean_Parser_SyntaxStack_empty___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Parser_SyntaxStack_empty___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_SyntaxStack_empty = (const lean_object*)&l_Lean_Parser_SyntaxStack_empty___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_isEmpty___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_pop(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.Parser.Types"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__0_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Parser.SyntaxStack.back"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__1_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_back___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "SyntaxStack.back: element is inaccessible"};
static const lean_object* l_Lean_Parser_SyntaxStack_back___closed__2 = (const lean_object*)&l_Lean_Parser_SyntaxStack_back___closed__2_value;
static lean_once_cell_t l_Lean_Parser_SyntaxStack_back___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_SyntaxStack_back___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_SyntaxStack_get_x21___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Parser.SyntaxStack.get!"};
static const lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_get_x21___closed__0_value;
static const lean_string_object l_Lean_Parser_SyntaxStack_get_x21___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "SyntaxStack.get!: element is inaccessible"};
static const lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__1 = (const lean_object*)&l_Lean_Parser_SyntaxStack_get_x21___closed__1_value;
static lean_once_cell_t l_Lean_Parser_SyntaxStack_get_x21___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_SyntaxStack_get_x21___closed__2;
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0 = (const lean_object*)&l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax = (const lean_object*)&l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_stop_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_stop_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_parser_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_parser_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_result_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_result_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_log_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_log_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_cacheHit_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_cacheHit_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_error_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_error_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Could not find stop for "};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_withTraceNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Parser_ParserState_hasError(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_ParserState_mkNode_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Parser_ParserState_allErrors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Parser_ParserState_allErrors___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_allErrors___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_allErrors(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_ParserState_mkEOIError___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unexpected end of input"};
static const lean_object* l_Lean_Parser_ParserState_mkEOIError___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_mkEOIError___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(lean_object*);
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0_value;
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1_value;
static const lean_string_object l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2 = (const lean_object*)&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2_value;
static lean_once_cell_t l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_instInhabitedParserFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserFn___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserFn___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserFn = (const lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedFirstTokens_default;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedFirstTokens;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_seq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_merge(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[]"};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1_value;
static const lean_string_object l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2 = (const lean_object*)&l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "epsilon"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__0 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__0_value;
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__1 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__1_value;
static const lean_string_object l_Lean_Parser_FirstTokens_toStr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\?"};
static const lean_object* l_Lean_Parser_FirstTokens_toStr___closed__2 = (const lean_object*)&l_Lean_Parser_FirstTokens_toStr___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_FirstTokens_instToString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_FirstTokens_toStr___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_FirstTokens_instToString___closed__0 = (const lean_object*)&l_Lean_Parser_FirstTokens_instToString___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_FirstTokens_instToString = (const lean_object*)&l_Lean_Parser_FirstTokens_instToString___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value;
static const lean_closure_object l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__1 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value;
static const lean_ctor_object l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__0_value),((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Parser_instInhabitedParserInfo_default___closed__2 = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserInfo_default = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParserInfo = (const lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value;
static const lean_ctor_object l_Lean_Parser_instInhabitedParser_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Parser_instInhabitedParserInfo_default___closed__2_value),((lean_object*)&l_Lean_Parser_instInhabitedParserFn___closed__0_value)}};
static const lean_object* l_Lean_Parser_instInhabitedParser_default___closed__0 = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParser_default = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Parser_instInhabitedParser = (const lean_object*)&l_Lean_Parser_instInhabitedParser_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_withFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withTraceNodeFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withTraceNode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCacheFn(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "withCache"};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_0),((lean_object*)&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(25, 241, 193, 7, 69, 147, 159, 180)}};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1_value;
static const lean_string_object l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 542, .m_capacity = 542, .m_length = 541, .m_data = "Run `p` and record result in parser cache for any further invocation with this `parserName`, parser context, and parser state.\n`p` cannot access syntax stack elements pushed before the invocation in order to make caching independent of parser history.\nAs this excludes trailing parsers from being cached, we also reset `lhsPrec`, which is not read but set by leading parsers, to 0\nin order to increase cache hits. Finally, `errorMsg` is also reset to `none` as a leading parser should not be called in the first\nplace if there was an error.\n"};
static const lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___boxed(lean_object*);
static const lean_ctor_object l_Lean_Parser_ParserFn_run___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Parser_ParserFn_run___closed__0 = (const lean_object*)&l_Lean_Parser_ParserFn_run___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_ParserFn_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_mkAtom(lean_object* v_info_1_, lean_object* v_val_2_){
_start:
{
lean_object* v___x_3_; 
v___x_3_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_3_, 0, v_info_1_);
lean_ctor_set(v___x_3_, 1, v_val_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_mkIdent(lean_object* v_info_4_, lean_object* v_rawVal_5_, lean_object* v_val_6_){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; 
v___x_7_ = lean_box(0);
v___x_8_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_8_, 0, v_info_4_);
lean_ctor_set(v___x_8_, 1, v_rawVal_5_);
lean_ctor_set(v___x_8_, 2, v_val_6_);
lean_ctor_set(v___x_8_, 3, v___x_7_);
return v___x_8_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_getNext(lean_object* v_input_9_, lean_object* v_pos_10_){
_start:
{
lean_object* v___x_11_; uint32_t v___x_12_; 
v___x_11_ = lean_string_utf8_next(v_input_9_, v_pos_10_);
v___x_12_ = lean_string_utf8_get(v_input_9_, v___x_11_);
lean_dec(v___x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_getNext___boxed(lean_object* v_input_13_, lean_object* v_pos_14_){
_start:
{
uint32_t v_res_15_; lean_object* v_r_16_; 
v_res_15_ = l_Lean_Parser_getNext(v_input_13_, v_pos_14_);
lean_dec(v_pos_14_);
lean_dec_ref(v_input_13_);
v_r_16_ = lean_box_uint32(v_res_15_);
return v_r_16_;
}
}
static lean_object* _init_l_Lean_Parser_maxPrec(void){
_start:
{
lean_object* v___x_17_; 
v___x_17_ = lean_unsigned_to_nat(1024u);
return v___x_17_;
}
}
static lean_object* _init_l_Lean_Parser_argPrec(void){
_start:
{
lean_object* v___x_18_; 
v___x_18_ = lean_unsigned_to_nat(1023u);
return v___x_18_;
}
}
static lean_object* _init_l_Lean_Parser_leadPrec(void){
_start:
{
lean_object* v___x_19_; 
v___x_19_ = lean_unsigned_to_nat(1022u);
return v___x_19_;
}
}
static lean_object* _init_l_Lean_Parser_minPrec(void){
_start:
{
lean_object* v___x_20_; 
v___x_20_ = lean_unsigned_to_nat(10u);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_21_, lean_object* v_x_22_, lean_object* v_x_23_, lean_object* v_x_24_){
_start:
{
lean_object* v_ks_25_; lean_object* v_vs_26_; lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_50_; 
v_ks_25_ = lean_ctor_get(v_x_21_, 0);
v_vs_26_ = lean_ctor_get(v_x_21_, 1);
v_isSharedCheck_50_ = !lean_is_exclusive(v_x_21_);
if (v_isSharedCheck_50_ == 0)
{
v___x_28_ = v_x_21_;
v_isShared_29_ = v_isSharedCheck_50_;
goto v_resetjp_27_;
}
else
{
lean_inc(v_vs_26_);
lean_inc(v_ks_25_);
lean_dec(v_x_21_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_50_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; uint8_t v___x_31_; 
v___x_30_ = lean_array_get_size(v_ks_25_);
v___x_31_ = lean_nat_dec_lt(v_x_22_, v___x_30_);
if (v___x_31_ == 0)
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_35_; 
lean_dec(v_x_22_);
v___x_32_ = lean_array_push(v_ks_25_, v_x_23_);
v___x_33_ = lean_array_push(v_vs_26_, v_x_24_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_33_);
lean_ctor_set(v___x_28_, 0, v___x_32_);
v___x_35_ = v___x_28_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v___x_32_);
lean_ctor_set(v_reuseFailAlloc_36_, 1, v___x_33_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
else
{
lean_object* v_k_x27_37_; uint8_t v___x_38_; 
v_k_x27_37_ = lean_array_fget_borrowed(v_ks_25_, v_x_22_);
v___x_38_ = lean_name_eq(v_x_23_, v_k_x27_37_);
if (v___x_38_ == 0)
{
lean_object* v___x_40_; 
if (v_isShared_29_ == 0)
{
v___x_40_ = v___x_28_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_ks_25_);
lean_ctor_set(v_reuseFailAlloc_44_, 1, v_vs_26_);
v___x_40_ = v_reuseFailAlloc_44_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(1u);
v___x_42_ = lean_nat_add(v_x_22_, v___x_41_);
lean_dec(v_x_22_);
v_x_21_ = v___x_40_;
v_x_22_ = v___x_42_;
goto _start;
}
}
else
{
lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_48_; 
v___x_45_ = lean_array_fset(v_ks_25_, v_x_22_, v_x_23_);
v___x_46_ = lean_array_fset(v_vs_26_, v_x_22_, v_x_24_);
lean_dec(v_x_22_);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 1, v___x_46_);
lean_ctor_set(v___x_28_, 0, v___x_45_);
v___x_48_ = v___x_28_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_49_; 
v_reuseFailAlloc_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_49_, 0, v___x_45_);
lean_ctor_set(v_reuseFailAlloc_49_, 1, v___x_46_);
v___x_48_ = v_reuseFailAlloc_49_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
return v___x_48_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(lean_object* v_n_51_, lean_object* v_k_52_, lean_object* v_v_53_){
_start:
{
lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_54_ = lean_unsigned_to_nat(0u);
v___x_55_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_n_51_, v___x_54_, v_k_52_, v_v_53_);
return v___x_55_;
}
}
static uint64_t _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_56_; uint64_t v___x_57_; 
v___x_56_ = lean_unsigned_to_nat(1723u);
v___x_57_ = lean_uint64_of_nat(v___x_56_);
return v___x_57_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = l_Lean_PersistentHashMap_mkEmptyEntries(lean_box(0), lean_box(0));
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(lean_object* v_x_59_, size_t v_x_60_, size_t v_x_61_, lean_object* v_x_62_, lean_object* v_x_63_){
_start:
{
if (lean_obj_tag(v_x_59_) == 0)
{
lean_object* v_es_64_; size_t v___x_65_; size_t v___x_66_; lean_object* v_j_67_; lean_object* v___x_68_; uint8_t v___x_69_; 
v_es_64_ = lean_ctor_get(v_x_59_, 0);
v___x_65_ = ((size_t)31ULL);
v___x_66_ = lean_usize_land(v_x_60_, v___x_65_);
v_j_67_ = lean_usize_to_nat(v___x_66_);
v___x_68_ = lean_array_get_size(v_es_64_);
v___x_69_ = lean_nat_dec_lt(v_j_67_, v___x_68_);
if (v___x_69_ == 0)
{
lean_dec(v_j_67_);
lean_dec(v_x_63_);
lean_dec(v_x_62_);
return v_x_59_;
}
else
{
lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_108_; 
lean_inc_ref(v_es_64_);
v_isSharedCheck_108_ = !lean_is_exclusive(v_x_59_);
if (v_isSharedCheck_108_ == 0)
{
lean_object* v_unused_109_; 
v_unused_109_ = lean_ctor_get(v_x_59_, 0);
lean_dec(v_unused_109_);
v___x_71_ = v_x_59_;
v_isShared_72_ = v_isSharedCheck_108_;
goto v_resetjp_70_;
}
else
{
lean_dec(v_x_59_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_108_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v_v_73_; lean_object* v___x_74_; lean_object* v_xs_x27_75_; lean_object* v___y_77_; 
v_v_73_ = lean_array_fget(v_es_64_, v_j_67_);
v___x_74_ = lean_box(0);
v_xs_x27_75_ = lean_array_fset(v_es_64_, v_j_67_, v___x_74_);
switch(lean_obj_tag(v_v_73_))
{
case 0:
{
lean_object* v_key_82_; lean_object* v_val_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_93_; 
v_key_82_ = lean_ctor_get(v_v_73_, 0);
v_val_83_ = lean_ctor_get(v_v_73_, 1);
v_isSharedCheck_93_ = !lean_is_exclusive(v_v_73_);
if (v_isSharedCheck_93_ == 0)
{
v___x_85_ = v_v_73_;
v_isShared_86_ = v_isSharedCheck_93_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_val_83_);
lean_inc(v_key_82_);
lean_dec(v_v_73_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_93_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
uint8_t v___x_87_; 
v___x_87_ = lean_name_eq(v_x_62_, v_key_82_);
if (v___x_87_ == 0)
{
lean_object* v___x_88_; lean_object* v___x_89_; 
lean_del_object(v___x_85_);
v___x_88_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_82_, v_val_83_, v_x_62_, v_x_63_);
v___x_89_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_89_, 0, v___x_88_);
v___y_77_ = v___x_89_;
goto v___jp_76_;
}
else
{
lean_object* v___x_91_; 
lean_dec(v_val_83_);
lean_dec(v_key_82_);
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 1, v_x_63_);
lean_ctor_set(v___x_85_, 0, v_x_62_);
v___x_91_ = v___x_85_;
goto v_reusejp_90_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_x_62_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_x_63_);
v___x_91_ = v_reuseFailAlloc_92_;
goto v_reusejp_90_;
}
v_reusejp_90_:
{
v___y_77_ = v___x_91_;
goto v___jp_76_;
}
}
}
}
case 1:
{
lean_object* v_node_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_106_; 
v_node_94_ = lean_ctor_get(v_v_73_, 0);
v_isSharedCheck_106_ = !lean_is_exclusive(v_v_73_);
if (v_isSharedCheck_106_ == 0)
{
v___x_96_ = v_v_73_;
v_isShared_97_ = v_isSharedCheck_106_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_node_94_);
lean_dec(v_v_73_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_106_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
size_t v___x_98_; size_t v___x_99_; size_t v___x_100_; size_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_104_; 
v___x_98_ = ((size_t)5ULL);
v___x_99_ = lean_usize_shift_right(v_x_60_, v___x_98_);
v___x_100_ = ((size_t)1ULL);
v___x_101_ = lean_usize_add(v_x_61_, v___x_100_);
v___x_102_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_node_94_, v___x_99_, v___x_101_, v_x_62_, v_x_63_);
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 0, v___x_102_);
v___x_104_ = v___x_96_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_105_; 
v_reuseFailAlloc_105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_105_, 0, v___x_102_);
v___x_104_ = v_reuseFailAlloc_105_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
v___y_77_ = v___x_104_;
goto v___jp_76_;
}
}
}
default: 
{
lean_object* v___x_107_; 
v___x_107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_107_, 0, v_x_62_);
lean_ctor_set(v___x_107_, 1, v_x_63_);
v___y_77_ = v___x_107_;
goto v___jp_76_;
}
}
v___jp_76_:
{
lean_object* v___x_78_; lean_object* v___x_80_; 
v___x_78_ = lean_array_fset(v_xs_x27_75_, v_j_67_, v___y_77_);
lean_dec(v_j_67_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_78_);
v___x_80_ = v___x_71_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_78_);
v___x_80_ = v_reuseFailAlloc_81_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
return v___x_80_;
}
}
}
}
}
else
{
lean_object* v_ks_110_; lean_object* v_vs_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_131_; 
v_ks_110_ = lean_ctor_get(v_x_59_, 0);
v_vs_111_ = lean_ctor_get(v_x_59_, 1);
v_isSharedCheck_131_ = !lean_is_exclusive(v_x_59_);
if (v_isSharedCheck_131_ == 0)
{
v___x_113_ = v_x_59_;
v_isShared_114_ = v_isSharedCheck_131_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_vs_111_);
lean_inc(v_ks_110_);
lean_dec(v_x_59_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_131_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_116_; 
if (v_isShared_114_ == 0)
{
v___x_116_ = v___x_113_;
goto v_reusejp_115_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v_ks_110_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v_vs_111_);
v___x_116_ = v_reuseFailAlloc_130_;
goto v_reusejp_115_;
}
v_reusejp_115_:
{
lean_object* v_newNode_117_; uint8_t v___y_119_; size_t v___x_125_; uint8_t v___x_126_; 
v_newNode_117_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(v___x_116_, v_x_62_, v_x_63_);
v___x_125_ = ((size_t)7ULL);
v___x_126_ = lean_usize_dec_le(v___x_125_, v_x_61_);
if (v___x_126_ == 0)
{
lean_object* v___x_127_; lean_object* v___x_128_; uint8_t v___x_129_; 
v___x_127_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_117_);
v___x_128_ = lean_unsigned_to_nat(4u);
v___x_129_ = lean_nat_dec_lt(v___x_127_, v___x_128_);
lean_dec(v___x_127_);
v___y_119_ = v___x_129_;
goto v___jp_118_;
}
else
{
v___y_119_ = v___x_126_;
goto v___jp_118_;
}
v___jp_118_:
{
if (v___y_119_ == 0)
{
lean_object* v_ks_120_; lean_object* v_vs_121_; lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v_ks_120_ = lean_ctor_get(v_newNode_117_, 0);
lean_inc_ref(v_ks_120_);
v_vs_121_ = lean_ctor_get(v_newNode_117_, 1);
lean_inc_ref(v_vs_121_);
lean_dec_ref(v_newNode_117_);
v___x_122_ = lean_unsigned_to_nat(0u);
v___x_123_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___closed__0);
v___x_124_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_x_61_, v_ks_120_, v_vs_121_, v___x_122_, v___x_123_);
lean_dec_ref(v_vs_121_);
lean_dec_ref(v_ks_120_);
return v___x_124_;
}
else
{
return v_newNode_117_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(size_t v_depth_132_, lean_object* v_keys_133_, lean_object* v_vals_134_, lean_object* v_i_135_, lean_object* v_entries_136_){
_start:
{
lean_object* v___x_137_; uint8_t v___x_138_; 
v___x_137_ = lean_array_get_size(v_keys_133_);
v___x_138_ = lean_nat_dec_lt(v_i_135_, v___x_137_);
if (v___x_138_ == 0)
{
lean_dec(v_i_135_);
return v_entries_136_;
}
else
{
lean_object* v_k_139_; lean_object* v_v_140_; uint64_t v___y_142_; 
v_k_139_ = lean_array_fget_borrowed(v_keys_133_, v_i_135_);
v_v_140_ = lean_array_fget_borrowed(v_vals_134_, v_i_135_);
if (lean_obj_tag(v_k_139_) == 0)
{
uint64_t v___x_153_; 
v___x_153_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_142_ = v___x_153_;
goto v___jp_141_;
}
else
{
uint64_t v_hash_154_; 
v_hash_154_ = lean_ctor_get_uint64(v_k_139_, sizeof(void*)*2);
v___y_142_ = v_hash_154_;
goto v___jp_141_;
}
v___jp_141_:
{
size_t v_h_143_; size_t v___x_144_; lean_object* v___x_145_; size_t v___x_146_; size_t v___x_147_; size_t v___x_148_; size_t v_h_149_; lean_object* v___x_150_; lean_object* v___x_151_; 
v_h_143_ = lean_uint64_to_usize(v___y_142_);
v___x_144_ = ((size_t)5ULL);
v___x_145_ = lean_unsigned_to_nat(1u);
v___x_146_ = ((size_t)1ULL);
v___x_147_ = lean_usize_sub(v_depth_132_, v___x_146_);
v___x_148_ = lean_usize_mul(v___x_144_, v___x_147_);
v_h_149_ = lean_usize_shift_right(v_h_143_, v___x_148_);
v___x_150_ = lean_nat_add(v_i_135_, v___x_145_);
lean_dec(v_i_135_);
lean_inc(v_v_140_);
lean_inc(v_k_139_);
v___x_151_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_entries_136_, v_h_149_, v_depth_132_, v_k_139_, v_v_140_);
v_i_135_ = v___x_150_;
v_entries_136_ = v___x_151_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_depth_155_, lean_object* v_keys_156_, lean_object* v_vals_157_, lean_object* v_i_158_, lean_object* v_entries_159_){
_start:
{
size_t v_depth_boxed_160_; lean_object* v_res_161_; 
v_depth_boxed_160_ = lean_unbox_usize(v_depth_155_);
lean_dec(v_depth_155_);
v_res_161_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_depth_boxed_160_, v_keys_156_, v_vals_157_, v_i_158_, v_entries_159_);
lean_dec_ref(v_vals_157_);
lean_dec_ref(v_keys_156_);
return v_res_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg___boxed(lean_object* v_x_162_, lean_object* v_x_163_, lean_object* v_x_164_, lean_object* v_x_165_, lean_object* v_x_166_){
_start:
{
size_t v_x_357__boxed_167_; size_t v_x_358__boxed_168_; lean_object* v_res_169_; 
v_x_357__boxed_167_ = lean_unbox_usize(v_x_163_);
lean_dec(v_x_163_);
v_x_358__boxed_168_ = lean_unbox_usize(v_x_164_);
lean_dec(v_x_164_);
v_res_169_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_162_, v_x_357__boxed_167_, v_x_358__boxed_168_, v_x_165_, v_x_166_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(lean_object* v_x_170_, lean_object* v_x_171_, lean_object* v_x_172_){
_start:
{
uint64_t v___y_174_; 
if (lean_obj_tag(v_x_171_) == 0)
{
uint64_t v___x_178_; 
v___x_178_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_174_ = v___x_178_;
goto v___jp_173_;
}
else
{
uint64_t v_hash_179_; 
v_hash_179_ = lean_ctor_get_uint64(v_x_171_, sizeof(void*)*2);
v___y_174_ = v_hash_179_;
goto v___jp_173_;
}
v___jp_173_:
{
size_t v___x_175_; size_t v___x_176_; lean_object* v___x_177_; 
v___x_175_ = lean_uint64_to_usize(v___y_174_);
v___x_176_ = ((size_t)1ULL);
v___x_177_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_170_, v___x_175_, v___x_176_, v_x_171_, v_x_172_);
return v___x_177_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxNodeKindSet_insert(lean_object* v_s_180_, lean_object* v_k_181_){
_start:
{
lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_182_ = lean_box(0);
v___x_183_ = l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(v_s_180_, v_k_181_, v___x_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0(lean_object* v_00_u03b2_184_, lean_object* v_x_185_, lean_object* v_x_186_, lean_object* v_x_187_){
_start:
{
lean_object* v___x_188_; 
v___x_188_ = l_Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0___redArg(v_x_185_, v_x_186_, v_x_187_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(lean_object* v_00_u03b2_189_, lean_object* v_x_190_, size_t v_x_191_, size_t v_x_192_, lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
lean_object* v___x_195_; 
v___x_195_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___redArg(v_x_190_, v_x_191_, v_x_192_, v_x_193_, v_x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0___boxed(lean_object* v_00_u03b2_196_, lean_object* v_x_197_, lean_object* v_x_198_, lean_object* v_x_199_, lean_object* v_x_200_, lean_object* v_x_201_){
_start:
{
size_t v_x_550__boxed_202_; size_t v_x_551__boxed_203_; lean_object* v_res_204_; 
v_x_550__boxed_202_ = lean_unbox_usize(v_x_198_);
lean_dec(v_x_198_);
v_x_551__boxed_203_ = lean_unbox_usize(v_x_199_);
lean_dec(v_x_199_);
v_res_204_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0(v_00_u03b2_196_, v_x_197_, v_x_550__boxed_202_, v_x_551__boxed_203_, v_x_200_, v_x_201_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_205_, lean_object* v_n_206_, lean_object* v_k_207_, lean_object* v_v_208_){
_start:
{
lean_object* v___x_209_; 
v___x_209_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1___redArg(v_n_206_, v_k_207_, v_v_208_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_210_, size_t v_depth_211_, lean_object* v_keys_212_, lean_object* v_vals_213_, lean_object* v_heq_214_, lean_object* v_i_215_, lean_object* v_entries_216_){
_start:
{
lean_object* v___x_217_; 
v___x_217_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg(v_depth_211_, v_keys_212_, v_vals_213_, v_i_215_, v_entries_216_);
return v___x_217_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_218_, lean_object* v_depth_219_, lean_object* v_keys_220_, lean_object* v_vals_221_, lean_object* v_heq_222_, lean_object* v_i_223_, lean_object* v_entries_224_){
_start:
{
size_t v_depth_boxed_225_; lean_object* v_res_226_; 
v_depth_boxed_225_ = lean_unbox_usize(v_depth_219_);
lean_dec(v_depth_219_);
v_res_226_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2(v_00_u03b2_218_, v_depth_boxed_225_, v_keys_220_, v_vals_221_, v_heq_222_, v_i_223_, v_entries_224_);
lean_dec_ref(v_vals_221_);
lean_dec_ref(v_keys_220_);
return v_res_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_227_, lean_object* v_x_228_, lean_object* v_x_229_, lean_object* v_x_230_, lean_object* v_x_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__1_spec__2___redArg(v_x_228_, v_x_229_, v_x_230_, v_x_231_);
return v___x_232_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12(void){
_start:
{
lean_object* v___x_259_; lean_object* v___x_260_; 
v___x_259_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__10));
v___x_260_ = l_Lean_mkAtom(v___x_259_);
return v___x_260_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13(void){
_start:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_261_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__12);
v___x_262_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_263_ = lean_array_push(v___x_262_, v___x_261_);
return v___x_263_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17(void){
_start:
{
lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_274_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_275_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_276_ = lean_array_push(v___x_275_, v___x_274_);
return v___x_276_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18(void){
_start:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
v___x_277_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__17);
v___x_278_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__15));
v___x_279_ = lean_box(2);
v___x_280_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_280_, 0, v___x_279_);
lean_ctor_set(v___x_280_, 1, v___x_278_);
lean_ctor_set(v___x_280_, 2, v___x_277_);
return v___x_280_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; 
v___x_281_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__18);
v___x_282_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__13);
v___x_283_ = lean_array_push(v___x_282_, v___x_281_);
return v___x_283_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_284_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_285_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__19);
v___x_286_ = lean_array_push(v___x_285_, v___x_284_);
return v___x_286_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21(void){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_287_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_288_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__20);
v___x_289_ = lean_array_push(v___x_288_, v___x_287_);
return v___x_289_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22(void){
_start:
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_290_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_291_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__21);
v___x_292_ = lean_array_push(v___x_291_, v___x_290_);
return v___x_292_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23(void){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_293_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__16));
v___x_294_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__22);
v___x_295_ = lean_array_push(v___x_294_, v___x_293_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_296_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__23);
v___x_297_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__11));
v___x_298_ = lean_box(2);
v___x_299_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_299_, 0, v___x_298_);
lean_ctor_set(v___x_299_, 1, v___x_297_);
lean_ctor_set(v___x_299_, 2, v___x_296_);
return v___x_299_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_300_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__24);
v___x_301_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_302_ = lean_array_push(v___x_301_, v___x_300_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26(void){
_start:
{
lean_object* v___x_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; 
v___x_303_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__25);
v___x_304_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__9));
v___x_305_ = lean_box(2);
v___x_306_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_306_, 0, v___x_305_);
lean_ctor_set(v___x_306_, 1, v___x_304_);
lean_ctor_set(v___x_306_, 2, v___x_303_);
return v___x_306_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_307_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__26);
v___x_308_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_309_ = lean_array_push(v___x_308_, v___x_307_);
return v___x_309_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__27);
v___x_311_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__7));
v___x_312_ = lean_box(2);
v___x_313_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_313_, 0, v___x_312_);
lean_ctor_set(v___x_313_, 1, v___x_311_);
lean_ctor_set(v___x_313_, 2, v___x_310_);
return v___x_313_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__28);
v___x_315_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__5));
v___x_316_ = lean_array_push(v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; 
v___x_317_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__29);
v___x_318_ = ((lean_object*)(l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__4));
v___x_319_ = lean_box(2);
v___x_320_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_320_, 0, v___x_319_);
lean_ctor_set(v___x_320_, 1, v___x_318_);
lean_ctor_set(v___x_320_, 2, v___x_317_);
return v___x_320_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_endPos__valid___autoParam(void){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext___closed__1(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_324_ = lean_string_utf8_byte_size(v___x_323_);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext___closed__2(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_325_ = lean_obj_once(&l_Lean_Parser_instInhabitedInputContext___closed__1, &l_Lean_Parser_instInhabitedInputContext___closed__1_once, _init_l_Lean_Parser_instInhabitedInputContext___closed__1);
v___x_326_ = l_Lean_instInhabitedFileMap_default;
v___x_327_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_328_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
lean_ctor_set(v___x_328_, 1, v___x_327_);
lean_ctor_set(v___x_328_, 2, v___x_326_);
lean_ctor_set(v___x_328_, 3, v___x_325_);
return v___x_328_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedInputContext(void){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lean_obj_once(&l_Lean_Parser_instInhabitedInputContext___closed__2, &l_Lean_Parser_instInhabitedInputContext___closed__2_once, _init_l_Lean_Parser_instInhabitedInputContext___closed__2);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Parser_InputContext_mk___auto__1(void){
_start:
{
lean_object* v___x_330_; 
v___x_330_ = lean_obj_once(&l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30, &l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30_once, _init_l_Lean_Parser_InputContext_endPos__valid___autoParam___closed__30);
return v___x_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk___redArg(lean_object* v_input_331_, lean_object* v_fileName_332_, lean_object* v_endPos_333_, lean_object* v_fileMap_334_){
_start:
{
lean_object* v___x_335_; 
v___x_335_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_335_, 0, v_input_331_);
lean_ctor_set(v___x_335_, 1, v_fileName_332_);
lean_ctor_set(v___x_335_, 2, v_fileMap_334_);
lean_ctor_set(v___x_335_, 3, v_endPos_333_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_mk(lean_object* v_input_336_, lean_object* v_fileName_337_, lean_object* v_endPos_338_, lean_object* v_endPos__valid_339_, lean_object* v_fileMap_340_){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_341_, 0, v_input_336_);
lean_ctor_set(v___x_341_, 1, v_fileName_337_);
lean_ctor_set(v___x_341_, 2, v_fileMap_340_);
lean_ctor_set(v___x_341_, 3, v_endPos_338_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input(lean_object* v_c_342_){
_start:
{
lean_object* v_inputString_343_; lean_object* v_endPos_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v_inputString_343_ = lean_ctor_get(v_c_342_, 0);
v_endPos_344_ = lean_ctor_get(v_c_342_, 3);
v___x_345_ = lean_unsigned_to_nat(0u);
v___x_346_ = lean_string_utf8_extract(v_inputString_343_, v___x_345_, v_endPos_344_);
return v___x_346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_input___boxed(lean_object* v_c_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l_Lean_Parser_InputContext_input(v_c_347_);
lean_dec_ref(v_c_347_);
return v_res_348_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_InputContext_atEnd(lean_object* v_c_349_, lean_object* v_p_350_){
_start:
{
lean_object* v_endPos_351_; uint8_t v___x_352_; 
v_endPos_351_ = lean_ctor_get(v_c_349_, 3);
v___x_352_ = lean_nat_dec_le(v_endPos_351_, v_p_350_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_atEnd___boxed(lean_object* v_c_353_, lean_object* v_p_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Lean_Parser_InputContext_atEnd(v_c_353_, v_p_354_);
lean_dec(v_p_354_);
lean_dec_ref(v_c_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get(lean_object* v_c_357_, lean_object* v_p_358_){
_start:
{
lean_object* v_inputString_359_; uint32_t v___x_360_; 
v_inputString_359_ = lean_ctor_get(v_c_357_, 0);
v___x_360_ = lean_string_utf8_get(v_inputString_359_, v_p_358_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get___boxed(lean_object* v_c_361_, lean_object* v_p_362_){
_start:
{
uint32_t v_res_363_; lean_object* v_r_364_; 
v_res_363_ = l_Lean_Parser_InputContext_get(v_c_361_, v_p_362_);
lean_dec(v_p_362_);
lean_dec_ref(v_c_361_);
v_r_364_ = lean_box_uint32(v_res_363_);
return v_r_364_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__String_Pos_Raw_get_x3f_match__1_splitter___redArg(lean_object* v_x_365_, lean_object* v_x_366_, lean_object* v_h__1_367_){
_start:
{
lean_object* v___x_368_; 
v___x_368_ = lean_apply_2(v_h__1_367_, v_x_365_, v_x_366_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__String_Pos_Raw_get_x3f_match__1_splitter(lean_object* v_motive_369_, lean_object* v_x_370_, lean_object* v_x_371_, lean_object* v_h__1_372_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = lean_apply_2(v_h__1_372_, v_x_370_, v_x_371_);
return v___x_373_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27___redArg(lean_object* v_c_374_, lean_object* v_p_375_){
_start:
{
lean_object* v_inputString_376_; uint32_t v___x_377_; 
v_inputString_376_ = lean_ctor_get(v_c_374_, 0);
v___x_377_ = lean_string_utf8_get_fast(v_inputString_376_, v_p_375_);
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___redArg___boxed(lean_object* v_c_378_, lean_object* v_p_379_){
_start:
{
uint32_t v_res_380_; lean_object* v_r_381_; 
v_res_380_ = l_Lean_Parser_InputContext_get_x27___redArg(v_c_378_, v_p_379_);
lean_dec(v_p_379_);
lean_dec_ref(v_c_378_);
v_r_381_ = lean_box_uint32(v_res_380_);
return v_r_381_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_get_x27(lean_object* v_c_382_, lean_object* v_p_383_, lean_object* v_h_384_){
_start:
{
lean_object* v_inputString_385_; uint32_t v___x_386_; 
v_inputString_385_ = lean_ctor_get(v_c_382_, 0);
v___x_386_ = lean_string_utf8_get_fast(v_inputString_385_, v_p_383_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_get_x27___boxed(lean_object* v_c_387_, lean_object* v_p_388_, lean_object* v_h_389_){
_start:
{
uint32_t v_res_390_; lean_object* v_r_391_; 
v_res_390_ = l_Lean_Parser_InputContext_get_x27(v_c_387_, v_p_388_, v_h_389_);
lean_dec(v_p_388_);
lean_dec_ref(v_c_387_);
v_r_391_ = lean_box_uint32(v_res_390_);
return v_r_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next(lean_object* v_c_392_, lean_object* v_p_393_){
_start:
{
lean_object* v_inputString_394_; lean_object* v___x_395_; 
v_inputString_394_ = lean_ctor_get(v_c_392_, 0);
v___x_395_ = lean_string_utf8_next(v_inputString_394_, v_p_393_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next___boxed(lean_object* v_c_396_, lean_object* v_p_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_Parser_InputContext_next(v_c_396_, v_p_397_);
lean_dec(v_p_397_);
lean_dec_ref(v_c_396_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg(lean_object* v_c_399_, lean_object* v_p_400_){
_start:
{
lean_object* v_inputString_401_; lean_object* v___x_402_; 
v_inputString_401_ = lean_ctor_get(v_c_399_, 0);
v___x_402_ = lean_string_utf8_next_fast(v_inputString_401_, v_p_400_);
return v___x_402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___redArg___boxed(lean_object* v_c_403_, lean_object* v_p_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = l_Lean_Parser_InputContext_next_x27___redArg(v_c_403_, v_p_404_);
lean_dec(v_p_404_);
lean_dec_ref(v_c_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27(lean_object* v_c_406_, lean_object* v_p_407_, lean_object* v_h_408_){
_start:
{
lean_object* v_inputString_409_; lean_object* v___x_410_; 
v_inputString_409_ = lean_ctor_get(v_c_406_, 0);
v___x_410_ = lean_string_utf8_next_fast(v_inputString_409_, v_p_407_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_next_x27___boxed(lean_object* v_c_411_, lean_object* v_p_412_, lean_object* v_h_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = l_Lean_Parser_InputContext_next_x27(v_c_411_, v_p_412_, v_h_413_);
lean_dec(v_p_412_);
lean_dec_ref(v_c_411_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract(lean_object* v_c_415_, lean_object* v_a_416_, lean_object* v_a_417_){
_start:
{
lean_object* v_inputString_418_; lean_object* v___x_419_; 
v_inputString_418_ = lean_ctor_get(v_c_415_, 0);
v___x_419_ = lean_string_utf8_extract(v_inputString_418_, v_a_416_, v_a_417_);
return v___x_419_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_extract___boxed(lean_object* v_c_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_Parser_InputContext_extract(v_c_420_, v_a_421_, v_a_422_);
lean_dec(v_a_422_);
lean_dec(v_a_421_);
lean_dec_ref(v_c_420_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring(lean_object* v_c_424_, lean_object* v_startPos_425_, lean_object* v_stopPos_426_){
_start:
{
lean_object* v_inputString_427_; lean_object* v_endPos_428_; uint8_t v___x_429_; 
v_inputString_427_ = lean_ctor_get(v_c_424_, 0);
v_endPos_428_ = lean_ctor_get(v_c_424_, 3);
v___x_429_ = lean_nat_dec_le(v_stopPos_426_, v_endPos_428_);
if (v___x_429_ == 0)
{
lean_object* v___x_430_; 
lean_dec(v_stopPos_426_);
lean_inc(v_endPos_428_);
lean_inc_ref(v_inputString_427_);
v___x_430_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_430_, 0, v_inputString_427_);
lean_ctor_set(v___x_430_, 1, v_startPos_425_);
lean_ctor_set(v___x_430_, 2, v_endPos_428_);
return v___x_430_;
}
else
{
lean_object* v___x_431_; 
lean_inc_ref(v_inputString_427_);
v___x_431_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_431_, 0, v_inputString_427_);
lean_ctor_set(v___x_431_, 1, v_startPos_425_);
lean_ctor_set(v___x_431_, 2, v_stopPos_426_);
return v___x_431_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_substring___boxed(lean_object* v_c_432_, lean_object* v_startPos_433_, lean_object* v_stopPos_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Parser_InputContext_substring(v_c_432_, v_startPos_433_, v_stopPos_434_);
lean_dec_ref(v_c_432_);
return v_res_435_;
}
}
LEAN_EXPORT uint32_t l_Lean_Parser_InputContext_getNext(lean_object* v_input_436_, lean_object* v_pos_437_){
_start:
{
lean_object* v_inputString_438_; lean_object* v___x_439_; uint32_t v___x_440_; 
v_inputString_438_ = lean_ctor_get(v_input_436_, 0);
v___x_439_ = lean_string_utf8_next(v_inputString_438_, v_pos_437_);
v___x_440_ = lean_string_utf8_get(v_inputString_438_, v___x_439_);
lean_dec(v___x_439_);
return v___x_440_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_getNext___boxed(lean_object* v_input_441_, lean_object* v_pos_442_){
_start:
{
uint32_t v_res_443_; lean_object* v_r_444_; 
v_res_443_ = l_Lean_Parser_InputContext_getNext(v_input_441_, v_pos_442_);
lean_dec(v_pos_442_);
lean_dec_ref(v_input_441_);
v_r_444_ = lean_box_uint32(v_res_443_);
return v_r_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev(lean_object* v_c_445_, lean_object* v_pos_446_){
_start:
{
lean_object* v_inputString_447_; lean_object* v___x_448_; 
v_inputString_447_ = lean_ctor_get(v_c_445_, 0);
v___x_448_ = lean_string_utf8_prev(v_inputString_447_, v_pos_446_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_InputContext_prev___boxed(lean_object* v_c_449_, lean_object* v_pos_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_Lean_Parser_InputContext_prev(v_c_449_, v_pos_450_);
lean_dec(v_pos_450_);
lean_dec_ref(v_c_449_);
return v_res_451_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__0(lean_object* v_x_452_, lean_object* v_x_453_){
_start:
{
if (lean_obj_tag(v_x_452_) == 0)
{
if (lean_obj_tag(v_x_453_) == 0)
{
uint8_t v___x_454_; 
v___x_454_ = 1;
return v___x_454_;
}
else
{
uint8_t v___x_455_; 
v___x_455_ = 0;
return v___x_455_;
}
}
else
{
if (lean_obj_tag(v_x_453_) == 0)
{
uint8_t v___x_456_; 
v___x_456_ = 0;
return v___x_456_;
}
else
{
lean_object* v_val_457_; lean_object* v_val_458_; uint8_t v___x_459_; 
v_val_457_ = lean_ctor_get(v_x_452_, 0);
v_val_458_ = lean_ctor_get(v_x_453_, 0);
v___x_459_ = lean_nat_dec_eq(v_val_457_, v_val_458_);
return v___x_459_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__0___boxed(lean_object* v_x_460_, lean_object* v_x_461_){
_start:
{
uint8_t v_res_462_; lean_object* v_r_463_; 
v_res_462_ = l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__0(v_x_460_, v_x_461_);
lean_dec(v_x_461_);
lean_dec(v_x_460_);
v_r_463_ = lean_box(v_res_462_);
return v_r_463_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__1(lean_object* v_x_464_, lean_object* v_x_465_){
_start:
{
if (lean_obj_tag(v_x_464_) == 0)
{
if (lean_obj_tag(v_x_465_) == 0)
{
uint8_t v___x_466_; 
v___x_466_ = 1;
return v___x_466_;
}
else
{
uint8_t v___x_467_; 
v___x_467_ = 0;
return v___x_467_;
}
}
else
{
if (lean_obj_tag(v_x_465_) == 0)
{
uint8_t v___x_468_; 
v___x_468_ = 0;
return v___x_468_;
}
else
{
lean_object* v_val_469_; lean_object* v_val_470_; uint8_t v___x_471_; 
v_val_469_ = lean_ctor_get(v_x_464_, 0);
v_val_470_ = lean_ctor_get(v_x_465_, 0);
v___x_471_ = lean_string_dec_eq(v_val_469_, v_val_470_);
return v___x_471_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__1___boxed(lean_object* v_x_472_, lean_object* v_x_473_){
_start:
{
uint8_t v_res_474_; lean_object* v_r_475_; 
v_res_474_ = l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__1(v_x_472_, v_x_473_);
lean_dec(v_x_473_);
lean_dec(v_x_472_);
v_r_475_ = lean_box(v_res_474_);
return v_r_475_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqCacheableParserContext_beq(lean_object* v_x_476_, lean_object* v_x_477_){
_start:
{
lean_object* v_prec_478_; lean_object* v_quotDepth_479_; uint8_t v_suppressInsideQuot_480_; lean_object* v_savedPos_x3f_481_; lean_object* v_forbiddenTk_x3f_482_; lean_object* v_prec_483_; lean_object* v_quotDepth_484_; uint8_t v_suppressInsideQuot_485_; lean_object* v_savedPos_x3f_486_; lean_object* v_forbiddenTk_x3f_487_; uint8_t v___y_489_; uint8_t v___x_492_; 
v_prec_478_ = lean_ctor_get(v_x_476_, 0);
v_quotDepth_479_ = lean_ctor_get(v_x_476_, 1);
v_suppressInsideQuot_480_ = lean_ctor_get_uint8(v_x_476_, sizeof(void*)*4);
v_savedPos_x3f_481_ = lean_ctor_get(v_x_476_, 2);
v_forbiddenTk_x3f_482_ = lean_ctor_get(v_x_476_, 3);
v_prec_483_ = lean_ctor_get(v_x_477_, 0);
v_quotDepth_484_ = lean_ctor_get(v_x_477_, 1);
v_suppressInsideQuot_485_ = lean_ctor_get_uint8(v_x_477_, sizeof(void*)*4);
v_savedPos_x3f_486_ = lean_ctor_get(v_x_477_, 2);
v_forbiddenTk_x3f_487_ = lean_ctor_get(v_x_477_, 3);
v___x_492_ = lean_nat_dec_eq(v_prec_478_, v_prec_483_);
if (v___x_492_ == 0)
{
return v___x_492_;
}
else
{
uint8_t v___x_493_; 
v___x_493_ = lean_nat_dec_eq(v_quotDepth_479_, v_quotDepth_484_);
if (v___x_493_ == 0)
{
return v___x_493_;
}
else
{
if (v_suppressInsideQuot_480_ == 0)
{
if (v_suppressInsideQuot_485_ == 0)
{
v___y_489_ = v___x_493_;
goto v___jp_488_;
}
else
{
return v_suppressInsideQuot_480_;
}
}
else
{
v___y_489_ = v_suppressInsideQuot_485_;
goto v___jp_488_;
}
}
}
v___jp_488_:
{
if (v___y_489_ == 0)
{
return v___y_489_;
}
else
{
uint8_t v___x_490_; 
v___x_490_ = l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__0(v_savedPos_x3f_481_, v_savedPos_x3f_486_);
if (v___x_490_ == 0)
{
return v___x_490_;
}
else
{
uint8_t v___x_491_; 
v___x_491_ = l_Option_instBEq_beq___at___00Lean_Parser_instBEqCacheableParserContext_beq_spec__1(v_forbiddenTk_x3f_482_, v_forbiddenTk_x3f_487_);
return v___x_491_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqCacheableParserContext_beq___boxed(lean_object* v_x_494_, lean_object* v_x_495_){
_start:
{
uint8_t v_res_496_; lean_object* v_r_497_; 
v_res_496_ = l_Lean_Parser_instBEqCacheableParserContext_beq(v_x_494_, v_x_495_);
lean_dec_ref(v_x_495_);
lean_dec_ref(v_x_494_);
v_r_497_ = lean_box(v_res_496_);
return v_r_497_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0(lean_object* v_x_500_){
_start:
{
lean_object* v_toInputContext_501_; 
v_toInputContext_501_ = lean_ctor_get(v_x_500_, 0);
lean_inc_ref(v_toInputContext_501_);
return v_toInputContext_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instCoeParserContextInputContext___lam__0___boxed(lean_object* v_x_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Parser_instCoeParserContextInputContext___lam__0(v_x_502_);
lean_dec_ref(v_x_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos___redArg(lean_object* v_c_506_, lean_object* v_endPos_507_){
_start:
{
lean_object* v_toInputContext_508_; lean_object* v_toParserModuleContext_509_; lean_object* v_toCacheableParserContext_510_; lean_object* v_tokens_511_; lean_object* v___x_513_; uint8_t v_isShared_514_; uint8_t v_isSharedCheck_529_; 
v_toInputContext_508_ = lean_ctor_get(v_c_506_, 0);
v_toParserModuleContext_509_ = lean_ctor_get(v_c_506_, 1);
v_toCacheableParserContext_510_ = lean_ctor_get(v_c_506_, 2);
v_tokens_511_ = lean_ctor_get(v_c_506_, 3);
v_isSharedCheck_529_ = !lean_is_exclusive(v_c_506_);
if (v_isSharedCheck_529_ == 0)
{
v___x_513_ = v_c_506_;
v_isShared_514_ = v_isSharedCheck_529_;
goto v_resetjp_512_;
}
else
{
lean_inc(v_tokens_511_);
lean_inc(v_toCacheableParserContext_510_);
lean_inc(v_toParserModuleContext_509_);
lean_inc(v_toInputContext_508_);
lean_dec(v_c_506_);
v___x_513_ = lean_box(0);
v_isShared_514_ = v_isSharedCheck_529_;
goto v_resetjp_512_;
}
v_resetjp_512_:
{
lean_object* v_inputString_515_; lean_object* v_fileName_516_; lean_object* v_fileMap_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_527_; 
v_inputString_515_ = lean_ctor_get(v_toInputContext_508_, 0);
v_fileName_516_ = lean_ctor_get(v_toInputContext_508_, 1);
v_fileMap_517_ = lean_ctor_get(v_toInputContext_508_, 2);
v_isSharedCheck_527_ = !lean_is_exclusive(v_toInputContext_508_);
if (v_isSharedCheck_527_ == 0)
{
lean_object* v_unused_528_; 
v_unused_528_ = lean_ctor_get(v_toInputContext_508_, 3);
lean_dec(v_unused_528_);
v___x_519_ = v_toInputContext_508_;
v_isShared_520_ = v_isSharedCheck_527_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_fileMap_517_);
lean_inc(v_fileName_516_);
lean_inc(v_inputString_515_);
lean_dec(v_toInputContext_508_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_527_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 3, v_endPos_507_);
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_inputString_515_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v_fileName_516_);
lean_ctor_set(v_reuseFailAlloc_526_, 2, v_fileMap_517_);
lean_ctor_set(v_reuseFailAlloc_526_, 3, v_endPos_507_);
v___x_522_ = v_reuseFailAlloc_526_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_524_; 
if (v_isShared_514_ == 0)
{
lean_ctor_set(v___x_513_, 0, v___x_522_);
v___x_524_ = v___x_513_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_525_; 
v_reuseFailAlloc_525_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_525_, 0, v___x_522_);
lean_ctor_set(v_reuseFailAlloc_525_, 1, v_toParserModuleContext_509_);
lean_ctor_set(v_reuseFailAlloc_525_, 2, v_toCacheableParserContext_510_);
lean_ctor_set(v_reuseFailAlloc_525_, 3, v_tokens_511_);
v___x_524_ = v_reuseFailAlloc_525_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
return v___x_524_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserContext_setEndPos(lean_object* v_c_530_, lean_object* v_endPos_531_, lean_object* v_endPos__valid_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l_Lean_Parser_ParserContext_setEndPos___redArg(v_c_530_, v_endPos_531_);
return v___x_533_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
if (lean_obj_tag(v_x_540_) == 0)
{
if (lean_obj_tag(v_x_541_) == 0)
{
uint8_t v___x_542_; 
v___x_542_ = 1;
return v___x_542_;
}
else
{
uint8_t v___x_543_; 
v___x_543_ = 0;
return v___x_543_;
}
}
else
{
if (lean_obj_tag(v_x_541_) == 0)
{
uint8_t v___x_544_; 
v___x_544_ = 0;
return v___x_544_;
}
else
{
lean_object* v_head_545_; lean_object* v_tail_546_; lean_object* v_head_547_; lean_object* v_tail_548_; uint8_t v___x_549_; 
v_head_545_ = lean_ctor_get(v_x_540_, 0);
v_tail_546_ = lean_ctor_get(v_x_540_, 1);
v_head_547_ = lean_ctor_get(v_x_541_, 0);
v_tail_548_ = lean_ctor_get(v_x_541_, 1);
v___x_549_ = lean_string_dec_eq(v_head_545_, v_head_547_);
if (v___x_549_ == 0)
{
return v___x_549_;
}
else
{
v_x_540_ = v_tail_546_;
v_x_541_ = v_tail_548_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0___boxed(lean_object* v_x_551_, lean_object* v_x_552_){
_start:
{
uint8_t v_res_553_; lean_object* v_r_554_; 
v_res_553_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_x_551_, v_x_552_);
lean_dec(v_x_552_);
lean_dec(v_x_551_);
v_r_554_ = lean_box(v_res_553_);
return v_r_554_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqError_beq(lean_object* v_x_555_, lean_object* v_x_556_){
_start:
{
lean_object* v_unexpectedTk_557_; lean_object* v_unexpected_558_; lean_object* v_expected_559_; lean_object* v_unexpectedTk_560_; lean_object* v_unexpected_561_; lean_object* v_expected_562_; uint8_t v___x_563_; 
v_unexpectedTk_557_ = lean_ctor_get(v_x_555_, 0);
lean_inc(v_unexpectedTk_557_);
v_unexpected_558_ = lean_ctor_get(v_x_555_, 1);
lean_inc_ref(v_unexpected_558_);
v_expected_559_ = lean_ctor_get(v_x_555_, 2);
lean_inc(v_expected_559_);
lean_dec_ref(v_x_555_);
v_unexpectedTk_560_ = lean_ctor_get(v_x_556_, 0);
lean_inc(v_unexpectedTk_560_);
v_unexpected_561_ = lean_ctor_get(v_x_556_, 1);
lean_inc_ref(v_unexpected_561_);
v_expected_562_ = lean_ctor_get(v_x_556_, 2);
lean_inc(v_expected_562_);
lean_dec_ref(v_x_556_);
v___x_563_ = l_Lean_Syntax_structEq(v_unexpectedTk_557_, v_unexpectedTk_560_);
if (v___x_563_ == 0)
{
lean_dec(v_expected_562_);
lean_dec_ref(v_unexpected_561_);
lean_dec(v_expected_559_);
lean_dec_ref(v_unexpected_558_);
return v___x_563_;
}
else
{
uint8_t v___x_564_; 
v___x_564_ = lean_string_dec_eq(v_unexpected_558_, v_unexpected_561_);
lean_dec_ref(v_unexpected_561_);
lean_dec_ref(v_unexpected_558_);
if (v___x_564_ == 0)
{
lean_dec(v_expected_562_);
lean_dec(v_expected_559_);
return v___x_564_;
}
else
{
uint8_t v___x_565_; 
v___x_565_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_expected_559_, v_expected_562_);
lean_dec(v_expected_562_);
lean_dec(v_expected_559_);
return v___x_565_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqError_beq___boxed(lean_object* v_x_566_, lean_object* v_x_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = l_Lean_Parser_instBEqError_beq(v_x_566_, v_x_567_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(lean_object* v_x_574_){
_start:
{
if (lean_obj_tag(v_x_574_) == 0)
{
lean_object* v___x_575_; 
v___x_575_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
return v___x_575_;
}
else
{
lean_object* v_tail_576_; 
v_tail_576_ = lean_ctor_get(v_x_574_, 1);
if (lean_obj_tag(v_tail_576_) == 0)
{
lean_object* v_head_577_; 
v_head_577_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_head_577_);
lean_dec_ref_known(v_x_574_, 2);
return v_head_577_;
}
else
{
lean_object* v_tail_578_; 
lean_inc_ref(v_tail_576_);
v_tail_578_ = lean_ctor_get(v_tail_576_, 1);
if (lean_obj_tag(v_tail_578_) == 0)
{
lean_object* v_head_579_; lean_object* v_head_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; 
v_head_579_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_head_579_);
lean_dec_ref_known(v_x_574_, 2);
v_head_580_ = lean_ctor_get(v_tail_576_, 0);
lean_inc(v_head_580_);
lean_dec_ref_known(v_tail_576_, 2);
v___x_581_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__0));
v___x_582_ = lean_string_append(v_head_579_, v___x_581_);
v___x_583_ = lean_string_append(v___x_582_, v_head_580_);
lean_dec(v_head_580_);
return v___x_583_;
}
else
{
lean_object* v_head_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; 
v_head_584_ = lean_ctor_get(v_x_574_, 0);
lean_inc(v_head_584_);
lean_dec_ref_known(v_x_574_, 2);
v___x_585_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1));
v___x_586_ = lean_string_append(v_head_584_, v___x_585_);
v___x_587_ = l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(v_tail_576_);
v___x_588_ = lean_string_append(v___x_586_, v___x_587_);
lean_dec_ref(v___x_587_);
return v___x_588_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(lean_object* v_as_590_){
_start:
{
lean_object* v___f_591_; lean_object* v___x_592_; 
v___f_591_ = ((lean_object*)(l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0___closed__0));
v___x_592_ = l_List_eraseRepsBy___redArg(v___f_591_, v_as_590_);
return v___x_592_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(lean_object* v_hi_593_, lean_object* v_pivot_594_, lean_object* v_as_595_, lean_object* v_i_596_, lean_object* v_k_597_){
_start:
{
uint8_t v___x_598_; 
v___x_598_ = lean_nat_dec_lt(v_k_597_, v_hi_593_);
if (v___x_598_ == 0)
{
lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec(v_k_597_);
v___x_599_ = lean_array_fswap(v_as_595_, v_i_596_, v_hi_593_);
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v_i_596_);
lean_ctor_set(v___x_600_, 1, v___x_599_);
return v___x_600_;
}
else
{
lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_601_ = lean_array_fget_borrowed(v_as_595_, v_k_597_);
v___x_602_ = lean_string_dec_lt(v___x_601_, v_pivot_594_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = lean_nat_add(v_k_597_, v___x_603_);
lean_dec(v_k_597_);
v_k_597_ = v___x_604_;
goto _start;
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; 
v___x_606_ = lean_array_fswap(v_as_595_, v_i_596_, v_k_597_);
v___x_607_ = lean_unsigned_to_nat(1u);
v___x_608_ = lean_nat_add(v_i_596_, v___x_607_);
lean_dec(v_i_596_);
v___x_609_ = lean_nat_add(v_k_597_, v___x_607_);
lean_dec(v_k_597_);
v_as_595_ = v___x_606_;
v_i_596_ = v___x_608_;
v_k_597_ = v___x_609_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg___boxed(lean_object* v_hi_611_, lean_object* v_pivot_612_, lean_object* v_as_613_, lean_object* v_i_614_, lean_object* v_k_615_){
_start:
{
lean_object* v_res_616_; 
v_res_616_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_611_, v_pivot_612_, v_as_613_, v_i_614_, v_k_615_);
lean_dec_ref(v_pivot_612_);
lean_dec(v_hi_611_);
return v_res_616_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(lean_object* v_n_617_, lean_object* v_as_618_, lean_object* v_lo_619_, lean_object* v_hi_620_){
_start:
{
lean_object* v___y_622_; uint8_t v___x_632_; 
v___x_632_ = lean_nat_dec_lt(v_lo_619_, v_hi_620_);
if (v___x_632_ == 0)
{
lean_dec(v_lo_619_);
return v_as_618_;
}
else
{
lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v_mid_635_; lean_object* v___y_637_; lean_object* v___y_643_; lean_object* v___x_648_; lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_633_ = lean_nat_add(v_lo_619_, v_hi_620_);
v___x_634_ = lean_unsigned_to_nat(1u);
v_mid_635_ = lean_nat_shiftr(v___x_633_, v___x_634_);
lean_dec(v___x_633_);
v___x_648_ = lean_array_fget_borrowed(v_as_618_, v_mid_635_);
v___x_649_ = lean_array_fget_borrowed(v_as_618_, v_lo_619_);
v___x_650_ = lean_string_dec_lt(v___x_648_, v___x_649_);
if (v___x_650_ == 0)
{
v___y_643_ = v_as_618_;
goto v___jp_642_;
}
else
{
lean_object* v___x_651_; 
v___x_651_ = lean_array_fswap(v_as_618_, v_lo_619_, v_mid_635_);
v___y_643_ = v___x_651_;
goto v___jp_642_;
}
v___jp_636_:
{
lean_object* v___x_638_; lean_object* v___x_639_; uint8_t v___x_640_; 
v___x_638_ = lean_array_fget_borrowed(v___y_637_, v_mid_635_);
v___x_639_ = lean_array_fget_borrowed(v___y_637_, v_hi_620_);
v___x_640_ = lean_string_dec_lt(v___x_638_, v___x_639_);
if (v___x_640_ == 0)
{
lean_dec(v_mid_635_);
v___y_622_ = v___y_637_;
goto v___jp_621_;
}
else
{
lean_object* v___x_641_; 
v___x_641_ = lean_array_fswap(v___y_637_, v_mid_635_, v_hi_620_);
lean_dec(v_mid_635_);
v___y_622_ = v___x_641_;
goto v___jp_621_;
}
}
v___jp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v___x_644_ = lean_array_fget_borrowed(v___y_643_, v_hi_620_);
v___x_645_ = lean_array_fget_borrowed(v___y_643_, v_lo_619_);
v___x_646_ = lean_string_dec_lt(v___x_644_, v___x_645_);
if (v___x_646_ == 0)
{
v___y_637_ = v___y_643_;
goto v___jp_636_;
}
else
{
lean_object* v___x_647_; 
v___x_647_ = lean_array_fswap(v___y_643_, v_lo_619_, v_hi_620_);
v___y_637_ = v___x_647_;
goto v___jp_636_;
}
}
}
v___jp_621_:
{
lean_object* v_pivot_623_; lean_object* v___x_624_; lean_object* v_fst_625_; lean_object* v_snd_626_; uint8_t v___x_627_; 
v_pivot_623_ = lean_array_fget(v___y_622_, v_hi_620_);
lean_inc_n(v_lo_619_, 2);
v___x_624_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_620_, v_pivot_623_, v___y_622_, v_lo_619_, v_lo_619_);
lean_dec(v_pivot_623_);
v_fst_625_ = lean_ctor_get(v___x_624_, 0);
lean_inc(v_fst_625_);
v_snd_626_ = lean_ctor_get(v___x_624_, 1);
lean_inc(v_snd_626_);
lean_dec_ref(v___x_624_);
v___x_627_ = lean_nat_dec_le(v_hi_620_, v_fst_625_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v___x_628_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_617_, v_snd_626_, v_lo_619_, v_fst_625_);
v___x_629_ = lean_unsigned_to_nat(1u);
v___x_630_ = lean_nat_add(v_fst_625_, v___x_629_);
lean_dec(v_fst_625_);
v_as_618_ = v___x_628_;
v_lo_619_ = v___x_630_;
goto _start;
}
else
{
lean_dec(v_fst_625_);
lean_dec(v_lo_619_);
return v_snd_626_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg___boxed(lean_object* v_n_652_, lean_object* v_as_653_, lean_object* v_lo_654_, lean_object* v_hi_655_){
_start:
{
lean_object* v_res_656_; 
v_res_656_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_652_, v_as_653_, v_lo_654_, v_hi_655_);
lean_dec(v_hi_655_);
lean_dec(v_n_652_);
return v_res_656_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Error_toString(lean_object* v_e_659_){
_start:
{
lean_object* v___y_661_; lean_object* v___y_662_; lean_object* v___y_667_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_677_; lean_object* v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_681_; lean_object* v___y_682_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_688_; lean_object* v___y_689_; lean_object* v___y_690_; lean_object* v_unexpected_692_; lean_object* v_expected_693_; lean_object* v___y_695_; lean_object* v___x_705_; uint8_t v___x_706_; 
v_unexpected_692_ = lean_ctor_get(v_e_659_, 1);
lean_inc_ref(v_unexpected_692_);
v_expected_693_ = lean_ctor_get(v_e_659_, 2);
lean_inc(v_expected_693_);
lean_dec_ref(v_e_659_);
v___x_705_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_706_ = lean_string_dec_eq(v_unexpected_692_, v___x_705_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; lean_object* v___x_708_; 
v___x_707_ = lean_box(0);
v___x_708_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_708_, 0, v_unexpected_692_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
v___y_695_ = v___x_708_;
goto v___jp_694_;
}
else
{
lean_object* v___x_709_; 
lean_dec_ref(v_unexpected_692_);
v___x_709_ = lean_box(0);
v___y_695_ = v___x_709_;
goto v___jp_694_;
}
v___jp_660_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
v___x_663_ = ((lean_object*)(l_Lean_Parser_Error_toString___closed__0));
v___x_664_ = l_List_appendTR___redArg(v___y_661_, v___y_662_);
v___x_665_ = l_String_intercalate(v___x_663_, v___x_664_);
return v___x_665_;
}
v___jp_666_:
{
lean_object* v___x_670_; lean_object* v_expected_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
v___x_670_ = lean_array_to_list(v___y_669_);
v_expected_671_ = l_List_eraseReps___at___00Lean_Parser_Error_toString_spec__0(v___x_670_);
v___x_672_ = ((lean_object*)(l_Lean_Parser_Error_toString___closed__1));
v___x_673_ = l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString(v_expected_671_);
v___x_674_ = lean_string_append(v___x_672_, v___x_673_);
lean_dec_ref(v___x_673_);
v___x_675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
lean_ctor_set(v___x_675_, 1, v___y_667_);
v___y_661_ = v___y_668_;
v___y_662_ = v___x_675_;
goto v___jp_660_;
}
v___jp_676_:
{
lean_object* v___x_683_; 
v___x_683_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v___y_678_, v___y_679_, v___y_681_, v___y_682_);
lean_dec(v___y_682_);
lean_dec(v___y_678_);
v___y_667_ = v___y_677_;
v___y_668_ = v___y_680_;
v___y_669_ = v___x_683_;
goto v___jp_666_;
}
v___jp_684_:
{
uint8_t v___x_691_; 
v___x_691_ = lean_nat_dec_le(v___y_690_, v___y_689_);
if (v___x_691_ == 0)
{
lean_dec(v___y_689_);
lean_inc(v___y_690_);
v___y_677_ = v___y_685_;
v___y_678_ = v___y_686_;
v___y_679_ = v___y_687_;
v___y_680_ = v___y_688_;
v___y_681_ = v___y_690_;
v___y_682_ = v___y_690_;
goto v___jp_676_;
}
else
{
v___y_677_ = v___y_685_;
v___y_678_ = v___y_686_;
v___y_679_ = v___y_687_;
v___y_680_ = v___y_688_;
v___y_681_ = v___y_690_;
v___y_682_ = v___y_689_;
goto v___jp_676_;
}
}
v___jp_694_:
{
lean_object* v___x_696_; uint8_t v___x_697_; 
v___x_696_ = lean_box(0);
v___x_697_ = l_List_beq___at___00Lean_Parser_instBEqError_beq_spec__0(v_expected_693_, v___x_696_);
if (v___x_697_ == 0)
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_698_ = lean_array_mk(v_expected_693_);
v___x_699_ = lean_array_get_size(v___x_698_);
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = lean_nat_dec_eq(v___x_699_, v___x_700_);
if (v___x_701_ == 0)
{
lean_object* v___x_702_; lean_object* v___x_703_; uint8_t v___x_704_; 
v___x_702_ = lean_unsigned_to_nat(1u);
v___x_703_ = lean_nat_sub(v___x_699_, v___x_702_);
v___x_704_ = lean_nat_dec_le(v___x_700_, v___x_703_);
if (v___x_704_ == 0)
{
lean_inc(v___x_703_);
v___y_685_ = v___x_696_;
v___y_686_ = v___x_699_;
v___y_687_ = v___x_698_;
v___y_688_ = v___y_695_;
v___y_689_ = v___x_703_;
v___y_690_ = v___x_703_;
goto v___jp_684_;
}
else
{
v___y_685_ = v___x_696_;
v___y_686_ = v___x_699_;
v___y_687_ = v___x_698_;
v___y_688_ = v___y_695_;
v___y_689_ = v___x_703_;
v___y_690_ = v___x_700_;
goto v___jp_684_;
}
}
else
{
v___y_667_ = v___x_696_;
v___y_668_ = v___y_695_;
v___y_669_ = v___x_698_;
goto v___jp_666_;
}
}
else
{
lean_dec(v_expected_693_);
v___y_661_ = v___y_695_;
v___y_662_ = v___x_696_;
goto v___jp_660_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(lean_object* v_n_710_, lean_object* v_as_711_, lean_object* v_lo_712_, lean_object* v_hi_713_, lean_object* v_w_714_, lean_object* v_hlo_715_, lean_object* v_hhi_716_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___redArg(v_n_710_, v_as_711_, v_lo_712_, v_hi_713_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1___boxed(lean_object* v_n_718_, lean_object* v_as_719_, lean_object* v_lo_720_, lean_object* v_hi_721_, lean_object* v_w_722_, lean_object* v_hlo_723_, lean_object* v_hhi_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1(v_n_718_, v_as_719_, v_lo_720_, v_hi_721_, v_w_722_, v_hlo_723_, v_hhi_724_);
lean_dec(v_hi_721_);
lean_dec(v_n_718_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(lean_object* v_n_726_, lean_object* v_lo_727_, lean_object* v_hi_728_, lean_object* v_hhi_729_, lean_object* v_pivot_730_, lean_object* v_as_731_, lean_object* v_i_732_, lean_object* v_k_733_, lean_object* v_ilo_734_, lean_object* v_ik_735_, lean_object* v_w_736_){
_start:
{
lean_object* v___x_737_; 
v___x_737_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___redArg(v_hi_728_, v_pivot_730_, v_as_731_, v_i_732_, v_k_733_);
return v___x_737_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1___boxed(lean_object* v_n_738_, lean_object* v_lo_739_, lean_object* v_hi_740_, lean_object* v_hhi_741_, lean_object* v_pivot_742_, lean_object* v_as_743_, lean_object* v_i_744_, lean_object* v_k_745_, lean_object* v_ilo_746_, lean_object* v_ik_747_, lean_object* v_w_748_){
_start:
{
lean_object* v_res_749_; 
v_res_749_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Parser_Error_toString_spec__1_spec__1(v_n_738_, v_lo_739_, v_hi_740_, v_hhi_741_, v_pivot_742_, v_as_743_, v_i_744_, v_k_745_, v_ilo_746_, v_ik_747_, v_w_748_);
lean_dec_ref(v_pivot_742_);
lean_dec(v_hi_740_);
lean_dec(v_lo_739_);
lean_dec(v_n_738_);
return v_res_749_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Error_merge(lean_object* v_e_u2081_752_, lean_object* v_e_u2082_753_){
_start:
{
lean_object* v_unexpectedTk_754_; lean_object* v_unexpected_755_; lean_object* v_expected_756_; lean_object* v___y_758_; lean_object* v___x_770_; uint8_t v___x_771_; 
v_unexpectedTk_754_ = lean_ctor_get(v_e_u2082_753_, 0);
lean_inc(v_unexpectedTk_754_);
v_unexpected_755_ = lean_ctor_get(v_e_u2082_753_, 1);
lean_inc_ref(v_unexpected_755_);
v_expected_756_ = lean_ctor_get(v_e_u2082_753_, 2);
lean_inc(v_expected_756_);
lean_dec_ref(v_e_u2082_753_);
v___x_770_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_771_ = lean_string_dec_eq(v_unexpected_755_, v___x_770_);
if (v___x_771_ == 0)
{
v___y_758_ = v_unexpected_755_;
goto v___jp_757_;
}
else
{
lean_object* v_unexpected_772_; 
lean_dec_ref(v_unexpected_755_);
v_unexpected_772_ = lean_ctor_get(v_e_u2081_752_, 1);
lean_inc_ref(v_unexpected_772_);
v___y_758_ = v_unexpected_772_;
goto v___jp_757_;
}
v___jp_757_:
{
lean_object* v_expected_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_767_; 
v_expected_759_ = lean_ctor_get(v_e_u2081_752_, 2);
v_isSharedCheck_767_ = !lean_is_exclusive(v_e_u2081_752_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; lean_object* v_unused_769_; 
v_unused_768_ = lean_ctor_get(v_e_u2081_752_, 1);
lean_dec(v_unused_768_);
v_unused_769_ = lean_ctor_get(v_e_u2081_752_, 0);
lean_dec(v_unused_769_);
v___x_761_ = v_e_u2081_752_;
v_isShared_762_ = v_isSharedCheck_767_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_expected_759_);
lean_dec(v_e_u2081_752_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_767_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_763_; lean_object* v___x_765_; 
v___x_763_ = l_List_appendTR___redArg(v_expected_759_, v_expected_756_);
if (v_isShared_762_ == 0)
{
lean_ctor_set(v___x_761_, 2, v___x_763_);
lean_ctor_set(v___x_761_, 1, v___y_758_);
lean_ctor_set(v___x_761_, 0, v_unexpectedTk_754_);
v___x_765_ = v___x_761_;
goto v_reusejp_764_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v_unexpectedTk_754_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v___y_758_);
lean_ctor_set(v_reuseFailAlloc_766_, 2, v___x_763_);
v___x_765_ = v_reuseFailAlloc_766_;
goto v_reusejp_764_;
}
v_reusejp_764_:
{
return v___x_765_;
}
}
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_instBEqParserCacheKey_beq(lean_object* v_x_773_, lean_object* v_x_774_){
_start:
{
lean_object* v_toCacheableParserContext_775_; lean_object* v_parserName_776_; lean_object* v_pos_777_; lean_object* v_toCacheableParserContext_778_; lean_object* v_parserName_779_; lean_object* v_pos_780_; uint8_t v___x_781_; 
v_toCacheableParserContext_775_ = lean_ctor_get(v_x_773_, 0);
v_parserName_776_ = lean_ctor_get(v_x_773_, 1);
v_pos_777_ = lean_ctor_get(v_x_773_, 2);
v_toCacheableParserContext_778_ = lean_ctor_get(v_x_774_, 0);
v_parserName_779_ = lean_ctor_get(v_x_774_, 1);
v_pos_780_ = lean_ctor_get(v_x_774_, 2);
v___x_781_ = l_Lean_Parser_instBEqCacheableParserContext_beq(v_toCacheableParserContext_775_, v_toCacheableParserContext_778_);
if (v___x_781_ == 0)
{
return v___x_781_;
}
else
{
uint8_t v___x_782_; 
v___x_782_ = lean_name_eq(v_parserName_776_, v_parserName_779_);
if (v___x_782_ == 0)
{
return v___x_782_;
}
else
{
uint8_t v___x_783_; 
v___x_783_ = lean_nat_dec_eq(v_pos_777_, v_pos_780_);
return v___x_783_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instBEqParserCacheKey_beq___boxed(lean_object* v_x_784_, lean_object* v_x_785_){
_start:
{
uint8_t v_res_786_; lean_object* v_r_787_; 
v_res_786_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_x_784_, v_x_785_);
lean_dec_ref(v_x_785_);
lean_dec_ref(v_x_784_);
v_r_787_ = lean_box(v_res_786_);
return v_r_787_;
}
}
LEAN_EXPORT uint64_t l_Lean_Parser_instHashableParserCacheKey___lam__0(lean_object* v_k_790_){
_start:
{
lean_object* v_parserName_791_; lean_object* v_pos_792_; uint64_t v___x_793_; 
v_parserName_791_ = lean_ctor_get(v_k_790_, 1);
v_pos_792_ = lean_ctor_get(v_k_790_, 2);
v___x_793_ = l_String_instHashableRaw_hash(v_pos_792_);
if (lean_obj_tag(v_parserName_791_) == 0)
{
uint64_t v___x_794_; uint64_t v___x_795_; 
v___x_794_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_795_ = lean_uint64_mix_hash(v___x_793_, v___x_794_);
return v___x_795_;
}
else
{
uint64_t v_hash_796_; uint64_t v___x_797_; 
v_hash_796_ = lean_ctor_get_uint64(v_parserName_791_, sizeof(void*)*2);
v___x_797_ = lean_uint64_mix_hash(v___x_793_, v_hash_796_);
return v___x_797_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instHashableParserCacheKey___lam__0___boxed(lean_object* v_k_798_){
_start:
{
uint64_t v_res_799_; lean_object* v_r_800_; 
v_res_799_ = l_Lean_Parser_instHashableParserCacheKey___lam__0(v_k_798_);
lean_dec_ref(v_k_798_);
v_r_800_ = lean_box_uint64(v_res_799_);
return v_r_800_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__0(void){
_start:
{
uint32_t v___x_803_; lean_object* v___x_804_; 
v___x_803_ = 32;
v___x_804_ = l_Char_utf8Size(v___x_803_);
return v___x_804_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__1(void){
_start:
{
lean_object* v___x_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v___x_805_ = lean_box(0);
v___x_806_ = lean_unsigned_to_nat(16u);
v___x_807_ = lean_mk_array(v___x_806_, v___x_805_);
return v___x_807_;
}
}
static lean_object* _init_l_Lean_Parser_initCacheForInput___closed__2(void){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; 
v___x_808_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__1, &l_Lean_Parser_initCacheForInput___closed__1_once, _init_l_Lean_Parser_initCacheForInput___closed__1);
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_810_, 0, v___x_809_);
lean_ctor_set(v___x_810_, 1, v___x_808_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput(lean_object* v_input_811_){
_start:
{
lean_object* v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; 
v___x_812_ = lean_string_utf8_byte_size(v_input_811_);
v___x_813_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__0, &l_Lean_Parser_initCacheForInput___closed__0_once, _init_l_Lean_Parser_initCacheForInput___closed__0);
v___x_814_ = lean_nat_add(v___x_812_, v___x_813_);
v___x_815_ = lean_unsigned_to_nat(0u);
v___x_816_ = lean_box(0);
v___x_817_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_817_, 0, v___x_814_);
lean_ctor_set(v___x_817_, 1, v___x_815_);
lean_ctor_set(v___x_817_, 2, v___x_816_);
v___x_818_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__2, &l_Lean_Parser_initCacheForInput___closed__2_once, _init_l_Lean_Parser_initCacheForInput___closed__2);
v___x_819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_819_, 0, v___x_817_);
lean_ctor_set(v___x_819_, 1, v___x_818_);
return v___x_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_initCacheForInput___boxed(lean_object* v_input_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = l_Lean_Parser_initCacheForInput(v_input_820_);
lean_dec_ref(v_input_820_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_toSubarray(lean_object* v_stack_822_){
_start:
{
lean_object* v_raw_823_; lean_object* v_drop_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v_raw_823_ = lean_ctor_get(v_stack_822_, 0);
lean_inc_ref(v_raw_823_);
v_drop_824_ = lean_ctor_get(v_stack_822_, 1);
lean_inc(v_drop_824_);
lean_dec_ref(v_stack_822_);
v___x_825_ = lean_array_get_size(v_raw_823_);
v___x_826_ = l_Array_toSubarray___redArg(v_raw_823_, v_drop_824_, v___x_825_);
return v___x_826_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size(lean_object* v_stack_833_){
_start:
{
lean_object* v_raw_834_; lean_object* v_drop_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v_raw_834_ = lean_ctor_get(v_stack_833_, 0);
v_drop_835_ = lean_ctor_get(v_stack_833_, 1);
v___x_836_ = lean_array_get_size(v_raw_834_);
v___x_837_ = lean_nat_sub(v___x_836_, v_drop_835_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_size___boxed(lean_object* v_stack_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lean_Parser_SyntaxStack_size(v_stack_838_);
lean_dec_ref(v_stack_838_);
return v_res_839_;
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_SyntaxStack_isEmpty(lean_object* v_stack_840_){
_start:
{
lean_object* v___x_841_; lean_object* v___x_842_; uint8_t v___x_843_; 
v___x_841_ = l_Lean_Parser_SyntaxStack_size(v_stack_840_);
v___x_842_ = lean_unsigned_to_nat(0u);
v___x_843_ = lean_nat_dec_eq(v___x_841_, v___x_842_);
lean_dec(v___x_841_);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_isEmpty___boxed(lean_object* v_stack_844_){
_start:
{
uint8_t v_res_845_; lean_object* v_r_846_; 
v_res_845_ = l_Lean_Parser_SyntaxStack_isEmpty(v_stack_844_);
lean_dec_ref(v_stack_844_);
v_r_846_ = lean_box(v_res_845_);
return v_r_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink(lean_object* v_stack_847_, lean_object* v_n_848_){
_start:
{
lean_object* v_raw_849_; lean_object* v_drop_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_859_; 
v_raw_849_ = lean_ctor_get(v_stack_847_, 0);
v_drop_850_ = lean_ctor_get(v_stack_847_, 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v_stack_847_);
if (v_isSharedCheck_859_ == 0)
{
v___x_852_ = v_stack_847_;
v_isShared_853_ = v_isSharedCheck_859_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_drop_850_);
lean_inc(v_raw_849_);
lean_dec(v_stack_847_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_859_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_857_; 
v___x_854_ = lean_nat_add(v_drop_850_, v_n_848_);
v___x_855_ = l_Array_shrink___redArg(v_raw_849_, v___x_854_);
lean_dec(v___x_854_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 0, v___x_855_);
v___x_857_ = v___x_852_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_855_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_drop_850_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
return v___x_857_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_shrink___boxed(lean_object* v_stack_860_, lean_object* v_n_861_){
_start:
{
lean_object* v_res_862_; 
v_res_862_ = l_Lean_Parser_SyntaxStack_shrink(v_stack_860_, v_n_861_);
lean_dec(v_n_861_);
return v_res_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_push(lean_object* v_stack_863_, lean_object* v_a_864_){
_start:
{
lean_object* v_raw_865_; lean_object* v_drop_866_; lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_874_; 
v_raw_865_ = lean_ctor_get(v_stack_863_, 0);
v_drop_866_ = lean_ctor_get(v_stack_863_, 1);
v_isSharedCheck_874_ = !lean_is_exclusive(v_stack_863_);
if (v_isSharedCheck_874_ == 0)
{
v___x_868_ = v_stack_863_;
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
else
{
lean_inc(v_drop_866_);
lean_inc(v_raw_865_);
lean_dec(v_stack_863_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_874_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_870_; lean_object* v___x_872_; 
v___x_870_ = lean_array_push(v_raw_865_, v_a_864_);
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_870_);
v___x_872_ = v___x_868_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v___x_870_);
lean_ctor_set(v_reuseFailAlloc_873_, 1, v_drop_866_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_pop(lean_object* v_stack_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; uint8_t v___x_878_; 
v___x_876_ = lean_unsigned_to_nat(0u);
v___x_877_ = l_Lean_Parser_SyntaxStack_size(v_stack_875_);
v___x_878_ = lean_nat_dec_lt(v___x_876_, v___x_877_);
lean_dec(v___x_877_);
if (v___x_878_ == 0)
{
return v_stack_875_;
}
else
{
lean_object* v_raw_879_; lean_object* v_drop_880_; lean_object* v___x_882_; uint8_t v_isShared_883_; uint8_t v_isSharedCheck_888_; 
v_raw_879_ = lean_ctor_get(v_stack_875_, 0);
v_drop_880_ = lean_ctor_get(v_stack_875_, 1);
v_isSharedCheck_888_ = !lean_is_exclusive(v_stack_875_);
if (v_isSharedCheck_888_ == 0)
{
v___x_882_ = v_stack_875_;
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
else
{
lean_inc(v_drop_880_);
lean_inc(v_raw_879_);
lean_dec(v_stack_875_);
v___x_882_ = lean_box(0);
v_isShared_883_ = v_isSharedCheck_888_;
goto v_resetjp_881_;
}
v_resetjp_881_:
{
lean_object* v___x_884_; lean_object* v___x_886_; 
v___x_884_ = lean_array_pop(v_raw_879_);
if (v_isShared_883_ == 0)
{
lean_ctor_set(v___x_882_, 0, v___x_884_);
v___x_886_ = v___x_882_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_884_);
lean_ctor_set(v_reuseFailAlloc_887_, 1, v_drop_880_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(lean_object* v_msg_889_){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_box(0);
v___x_891_ = lean_panic_fn_borrowed(v___x_890_, v_msg_889_);
return v___x_891_;
}
}
static lean_object* _init_l_Lean_Parser_SyntaxStack_back___closed__3(void){
_start:
{
lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v___x_895_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__2));
v___x_896_ = lean_unsigned_to_nat(4u);
v___x_897_ = lean_unsigned_to_nat(305u);
v___x_898_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__1));
v___x_899_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__0));
v___x_900_ = l_mkPanicMessageWithDecl(v___x_899_, v___x_898_, v___x_897_, v___x_896_, v___x_895_);
return v___x_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back(lean_object* v_stack_901_){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; uint8_t v___x_904_; 
v___x_902_ = lean_unsigned_to_nat(0u);
v___x_903_ = l_Lean_Parser_SyntaxStack_size(v_stack_901_);
v___x_904_ = lean_nat_dec_lt(v___x_902_, v___x_903_);
lean_dec(v___x_903_);
if (v___x_904_ == 0)
{
lean_object* v___x_905_; lean_object* v___x_906_; 
v___x_905_ = lean_obj_once(&l_Lean_Parser_SyntaxStack_back___closed__3, &l_Lean_Parser_SyntaxStack_back___closed__3_once, _init_l_Lean_Parser_SyntaxStack_back___closed__3);
v___x_906_ = l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(v___x_905_);
return v___x_906_;
}
else
{
lean_object* v_raw_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v_raw_907_ = lean_ctor_get(v_stack_901_, 0);
v___x_908_ = lean_box(0);
v___x_909_ = lean_array_get_size(v_raw_907_);
v___x_910_ = lean_unsigned_to_nat(1u);
v___x_911_ = lean_nat_sub(v___x_909_, v___x_910_);
v___x_912_ = lean_array_get_borrowed(v___x_908_, v_raw_907_, v___x_911_);
lean_dec(v___x_911_);
lean_inc(v___x_912_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_back___boxed(lean_object* v_stack_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_Parser_SyntaxStack_back(v_stack_913_);
lean_dec_ref(v_stack_913_);
return v_res_914_;
}
}
static lean_object* _init_l_Lean_Parser_SyntaxStack_get_x21___closed__2(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v___x_917_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_get_x21___closed__1));
v___x_918_ = lean_unsigned_to_nat(4u);
v___x_919_ = lean_unsigned_to_nat(311u);
v___x_920_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_get_x21___closed__0));
v___x_921_ = ((lean_object*)(l_Lean_Parser_SyntaxStack_back___closed__0));
v___x_922_ = l_mkPanicMessageWithDecl(v___x_921_, v___x_920_, v___x_919_, v___x_918_, v___x_917_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21(lean_object* v_stack_923_, lean_object* v_i_924_){
_start:
{
lean_object* v___x_925_; uint8_t v___x_926_; 
v___x_925_ = l_Lean_Parser_SyntaxStack_size(v_stack_923_);
v___x_926_ = lean_nat_dec_lt(v_i_924_, v___x_925_);
lean_dec(v___x_925_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_obj_once(&l_Lean_Parser_SyntaxStack_get_x21___closed__2, &l_Lean_Parser_SyntaxStack_get_x21___closed__2_once, _init_l_Lean_Parser_SyntaxStack_get_x21___closed__2);
v___x_928_ = l_panic___at___00Lean_Parser_SyntaxStack_back_spec__0(v___x_927_);
return v___x_928_;
}
else
{
lean_object* v_raw_929_; lean_object* v_drop_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v_raw_929_ = lean_ctor_get(v_stack_923_, 0);
v_drop_930_ = lean_ctor_get(v_stack_923_, 1);
v___x_931_ = lean_box(0);
v___x_932_ = lean_nat_add(v_drop_930_, v_i_924_);
v___x_933_ = lean_array_get_borrowed(v___x_931_, v_raw_929_, v___x_932_);
lean_dec(v___x_932_);
lean_inc(v___x_933_);
return v___x_933_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_get_x21___boxed(lean_object* v_stack_934_, lean_object* v_i_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Lean_Parser_SyntaxStack_get_x21(v_stack_934_, v_i_935_);
lean_dec(v_i_935_);
lean_dec_ref(v_stack_934_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract(lean_object* v_stack_937_, lean_object* v_start_938_, lean_object* v_stop_939_){
_start:
{
lean_object* v_raw_940_; lean_object* v_drop_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v_raw_940_ = lean_ctor_get(v_stack_937_, 0);
v_drop_941_ = lean_ctor_get(v_stack_937_, 1);
v___x_942_ = lean_nat_add(v_drop_941_, v_start_938_);
v___x_943_ = lean_nat_add(v_drop_941_, v_stop_939_);
v___x_944_ = l_Array_extract___redArg(v_raw_940_, v___x_942_, v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_extract___boxed(lean_object* v_stack_945_, lean_object* v_start_946_, lean_object* v_stop_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_Parser_SyntaxStack_extract(v_stack_945_, v_start_946_, v_stop_947_);
lean_dec(v_stop_947_);
lean_dec(v_start_946_);
lean_dec_ref(v_stack_945_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(lean_object* v_stack_949_, lean_object* v_stxs_950_){
_start:
{
lean_object* v_raw_951_; lean_object* v_drop_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_960_; 
v_raw_951_ = lean_ctor_get(v_stack_949_, 0);
v_drop_952_ = lean_ctor_get(v_stack_949_, 1);
v_isSharedCheck_960_ = !lean_is_exclusive(v_stack_949_);
if (v_isSharedCheck_960_ == 0)
{
v___x_954_ = v_stack_949_;
v_isShared_955_ = v_isSharedCheck_960_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_drop_952_);
lean_inc(v_raw_951_);
lean_dec(v_stack_949_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_960_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_956_; lean_object* v___x_958_; 
v___x_956_ = l_Array_append___redArg(v_raw_951_, v_stxs_950_);
if (v_isShared_955_ == 0)
{
lean_ctor_set(v___x_954_, 0, v___x_956_);
v___x_958_ = v___x_954_;
goto v_reusejp_957_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_956_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_drop_952_);
v___x_958_ = v_reuseFailAlloc_959_;
goto v_reusejp_957_;
}
v_reusejp_957_:
{
return v___x_958_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1___boxed(lean_object* v_stack_961_, lean_object* v_stxs_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___private__1(v_stack_961_, v_stxs_962_);
lean_dec_ref(v_stxs_962_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(lean_object* v_stack_964_, lean_object* v_stxs_965_){
_start:
{
lean_object* v_raw_966_; lean_object* v_drop_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_975_; 
v_raw_966_ = lean_ctor_get(v_stack_964_, 0);
v_drop_967_ = lean_ctor_get(v_stack_964_, 1);
v_isSharedCheck_975_ = !lean_is_exclusive(v_stack_964_);
if (v_isSharedCheck_975_ == 0)
{
v___x_969_ = v_stack_964_;
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_drop_967_);
lean_inc(v_raw_966_);
lean_dec(v_stack_964_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_975_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_971_; lean_object* v___x_973_; 
v___x_971_ = l_Array_append___redArg(v_raw_966_, v_stxs_965_);
if (v_isShared_970_ == 0)
{
lean_ctor_set(v___x_969_, 0, v___x_971_);
v___x_973_ = v___x_969_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v___x_971_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v_drop_967_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
return v___x_973_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0___boxed(lean_object* v_stack_976_, lean_object* v_stxs_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l_Lean_Parser_SyntaxStack_instHAppendArraySyntax___lam__0(v_stack_976_, v_stxs_977_);
lean_dec_ref(v_stxs_977_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorIdx(lean_object* v_x_981_){
_start:
{
switch(lean_obj_tag(v_x_981_))
{
case 0:
{
lean_object* v___x_982_; 
v___x_982_ = lean_unsigned_to_nat(0u);
return v___x_982_;
}
case 1:
{
lean_object* v___x_983_; 
v___x_983_ = lean_unsigned_to_nat(1u);
return v___x_983_;
}
case 2:
{
lean_object* v___x_984_; 
v___x_984_ = lean_unsigned_to_nat(2u);
return v___x_984_;
}
case 3:
{
lean_object* v___x_985_; 
v___x_985_ = lean_unsigned_to_nat(3u);
return v___x_985_;
}
case 4:
{
lean_object* v___x_986_; 
v___x_986_ = lean_unsigned_to_nat(4u);
return v___x_986_;
}
default: 
{
lean_object* v___x_987_; 
v___x_987_ = lean_unsigned_to_nat(5u);
return v___x_987_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorIdx___boxed(lean_object* v_x_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Lean_Parser_ParserTrace_ctorIdx(v_x_988_);
lean_dec(v_x_988_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorElim___redArg(lean_object* v_t_990_, lean_object* v_k_991_){
_start:
{
switch(lean_obj_tag(v_t_990_))
{
case 0:
{
return v_k_991_;
}
case 1:
{
lean_object* v_lhsPrec_992_; lean_object* v_pos_993_; lean_object* v_descr_994_; uint8_t v_failed_995_; lean_object* v_children_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v_lhsPrec_992_ = lean_ctor_get(v_t_990_, 0);
lean_inc(v_lhsPrec_992_);
v_pos_993_ = lean_ctor_get(v_t_990_, 1);
lean_inc(v_pos_993_);
v_descr_994_ = lean_ctor_get(v_t_990_, 2);
lean_inc_ref(v_descr_994_);
v_failed_995_ = lean_ctor_get_uint8(v_t_990_, sizeof(void*)*4);
v_children_996_ = lean_ctor_get(v_t_990_, 3);
lean_inc_ref(v_children_996_);
lean_dec_ref_known(v_t_990_, 4);
v___x_997_ = lean_box(v_failed_995_);
v___x_998_ = lean_apply_5(v_k_991_, v_lhsPrec_992_, v_pos_993_, v_descr_994_, v___x_997_, v_children_996_);
return v___x_998_;
}
case 2:
{
lean_object* v_stx_999_; lean_object* v___x_1000_; 
v_stx_999_ = lean_ctor_get(v_t_990_, 0);
lean_inc(v_stx_999_);
lean_dec_ref_known(v_t_990_, 1);
v___x_1000_ = lean_apply_1(v_k_991_, v_stx_999_);
return v___x_1000_;
}
case 3:
{
lean_object* v_s_1001_; lean_object* v___x_1002_; 
v_s_1001_ = lean_ctor_get(v_t_990_, 0);
lean_inc_ref(v_s_1001_);
lean_dec_ref_known(v_t_990_, 1);
v___x_1002_ = lean_apply_1(v_k_991_, v_s_1001_);
return v___x_1002_;
}
case 4:
{
lean_object* v_key_1003_; lean_object* v_res_1004_; lean_object* v___x_1005_; 
v_key_1003_ = lean_ctor_get(v_t_990_, 0);
lean_inc_ref(v_key_1003_);
v_res_1004_ = lean_ctor_get(v_t_990_, 1);
lean_inc_ref(v_res_1004_);
lean_dec_ref_known(v_t_990_, 2);
v___x_1005_ = lean_apply_2(v_k_991_, v_key_1003_, v_res_1004_);
return v___x_1005_;
}
default: 
{
lean_object* v_msg_1006_; lean_object* v_pos_1007_; lean_object* v___x_1008_; 
v_msg_1006_ = lean_ctor_get(v_t_990_, 0);
lean_inc_ref(v_msg_1006_);
v_pos_1007_ = lean_ctor_get(v_t_990_, 1);
lean_inc(v_pos_1007_);
lean_dec_ref_known(v_t_990_, 2);
v___x_1008_ = lean_apply_2(v_k_991_, v_msg_1006_, v_pos_1007_);
return v___x_1008_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorElim(lean_object* v_motive__1_1009_, lean_object* v_ctorIdx_1010_, lean_object* v_t_1011_, lean_object* v_h_1012_, lean_object* v_k_1013_){
_start:
{
lean_object* v___x_1014_; 
v___x_1014_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1011_, v_k_1013_);
return v___x_1014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_ctorElim___boxed(lean_object* v_motive__1_1015_, lean_object* v_ctorIdx_1016_, lean_object* v_t_1017_, lean_object* v_h_1018_, lean_object* v_k_1019_){
_start:
{
lean_object* v_res_1020_; 
v_res_1020_ = l_Lean_Parser_ParserTrace_ctorElim(v_motive__1_1015_, v_ctorIdx_1016_, v_t_1017_, v_h_1018_, v_k_1019_);
lean_dec(v_ctorIdx_1016_);
return v_res_1020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_stop_elim___redArg(lean_object* v_t_1021_, lean_object* v_stop_1022_){
_start:
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1021_, v_stop_1022_);
return v___x_1023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_stop_elim(lean_object* v_motive__1_1024_, lean_object* v_t_1025_, lean_object* v_h_1026_, lean_object* v_stop_1027_){
_start:
{
lean_object* v___x_1028_; 
v___x_1028_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1025_, v_stop_1027_);
return v___x_1028_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_parser_elim___redArg(lean_object* v_t_1029_, lean_object* v_parser_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1029_, v_parser_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_parser_elim(lean_object* v_motive__1_1032_, lean_object* v_t_1033_, lean_object* v_h_1034_, lean_object* v_parser_1035_){
_start:
{
lean_object* v___x_1036_; 
v___x_1036_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1033_, v_parser_1035_);
return v___x_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_result_elim___redArg(lean_object* v_t_1037_, lean_object* v_result_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1037_, v_result_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_result_elim(lean_object* v_motive__1_1040_, lean_object* v_t_1041_, lean_object* v_h_1042_, lean_object* v_result_1043_){
_start:
{
lean_object* v___x_1044_; 
v___x_1044_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1041_, v_result_1043_);
return v___x_1044_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_log_elim___redArg(lean_object* v_t_1045_, lean_object* v_log_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1045_, v_log_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_log_elim(lean_object* v_motive__1_1048_, lean_object* v_t_1049_, lean_object* v_h_1050_, lean_object* v_log_1051_){
_start:
{
lean_object* v___x_1052_; 
v___x_1052_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1049_, v_log_1051_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_cacheHit_elim___redArg(lean_object* v_t_1053_, lean_object* v_cacheHit_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1053_, v_cacheHit_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_cacheHit_elim(lean_object* v_motive__1_1056_, lean_object* v_t_1057_, lean_object* v_h_1058_, lean_object* v_cacheHit_1059_){
_start:
{
lean_object* v___x_1060_; 
v___x_1060_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1057_, v_cacheHit_1059_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_error_elim___redArg(lean_object* v_t_1061_, lean_object* v_error_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1061_, v_error_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserTrace_error_elim(lean_object* v_motive__1_1064_, lean_object* v_t_1065_, lean_object* v_h_1066_, lean_object* v_error_1067_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_Parser_ParserTrace_ctorElim___redArg(v_t_1065_, v_error_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___lam__0(lean_object* v_s_1069_, lean_object* v_x_1070_){
_start:
{
lean_inc_ref(v_s_1069_);
return v_s_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___lam__0___boxed(lean_object* v_s_1071_, lean_object* v_x_1072_){
_start:
{
lean_object* v_res_1073_; 
v_res_1073_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___lam__0(v_s_1071_, v_x_1072_);
lean_dec_ref(v_s_1071_);
return v_res_1073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg(lean_object* v_descr_1075_, lean_object* v_lhsPrec_1076_, lean_object* v_pos_1077_, lean_object* v_s_1078_, lean_object* v_i_1079_){
_start:
{
lean_object* v_zero_1080_; uint8_t v_isZero_1081_; 
v_zero_1080_ = lean_unsigned_to_nat(0u);
v_isZero_1081_ = lean_nat_dec_eq(v_i_1079_, v_zero_1080_);
if (v_isZero_1081_ == 1)
{
lean_object* v___f_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_dec(v_i_1079_);
lean_dec(v_pos_1077_);
lean_dec(v_lhsPrec_1076_);
v___f_1082_ = lean_alloc_closure((void*)(l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1082_, 0, v_s_1078_);
v___x_1083_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg___closed__0));
v___x_1084_ = lean_string_append(v___x_1083_, v_descr_1075_);
lean_dec_ref(v_descr_1075_);
v___x_1085_ = lean_dbg_trace(v___x_1084_, v___f_1082_);
return v___x_1085_;
}
else
{
lean_object* v_stxStack_1086_; lean_object* v_lhsPrec_1087_; lean_object* v_pos_1088_; lean_object* v_cache_1089_; lean_object* v_errorMsg_1090_; lean_object* v_recoveredErrors_1091_; lean_object* v_traces_1092_; lean_object* v_one_1093_; lean_object* v_n_1094_; lean_object* v___x_1095_; 
v_stxStack_1086_ = lean_ctor_get(v_s_1078_, 0);
v_lhsPrec_1087_ = lean_ctor_get(v_s_1078_, 1);
v_pos_1088_ = lean_ctor_get(v_s_1078_, 2);
v_cache_1089_ = lean_ctor_get(v_s_1078_, 3);
v_errorMsg_1090_ = lean_ctor_get(v_s_1078_, 4);
v_recoveredErrors_1091_ = lean_ctor_get(v_s_1078_, 5);
v_traces_1092_ = lean_ctor_get(v_s_1078_, 6);
v_one_1093_ = lean_unsigned_to_nat(1u);
v_n_1094_ = lean_nat_sub(v_i_1079_, v_one_1093_);
v___x_1095_ = lean_array_fget_borrowed(v_traces_1092_, v_n_1094_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1110_; 
lean_inc_ref(v_traces_1092_);
lean_inc_ref(v_recoveredErrors_1091_);
lean_inc(v_errorMsg_1090_);
lean_inc_ref(v_cache_1089_);
lean_inc(v_pos_1088_);
lean_inc(v_lhsPrec_1087_);
lean_inc_ref(v_stxStack_1086_);
v_isSharedCheck_1110_ = !lean_is_exclusive(v_s_1078_);
if (v_isSharedCheck_1110_ == 0)
{
lean_object* v_unused_1111_; lean_object* v_unused_1112_; lean_object* v_unused_1113_; lean_object* v_unused_1114_; lean_object* v_unused_1115_; lean_object* v_unused_1116_; lean_object* v_unused_1117_; 
v_unused_1111_ = lean_ctor_get(v_s_1078_, 6);
lean_dec(v_unused_1111_);
v_unused_1112_ = lean_ctor_get(v_s_1078_, 5);
lean_dec(v_unused_1112_);
v_unused_1113_ = lean_ctor_get(v_s_1078_, 4);
lean_dec(v_unused_1113_);
v_unused_1114_ = lean_ctor_get(v_s_1078_, 3);
lean_dec(v_unused_1114_);
v_unused_1115_ = lean_ctor_get(v_s_1078_, 2);
lean_dec(v_unused_1115_);
v_unused_1116_ = lean_ctor_get(v_s_1078_, 1);
lean_dec(v_unused_1116_);
v_unused_1117_ = lean_ctor_get(v_s_1078_, 0);
lean_dec(v_unused_1117_);
v___x_1097_ = v_s_1078_;
v_isShared_1098_ = v_isSharedCheck_1110_;
goto v_resetjp_1096_;
}
else
{
lean_dec(v_s_1078_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1110_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v___x_1099_; lean_object* v_children_1100_; uint8_t v___y_1102_; 
v___x_1099_ = lean_array_get_size(v_traces_1092_);
v_children_1100_ = l_Array_extract___redArg(v_traces_1092_, v_i_1079_, v___x_1099_);
if (lean_obj_tag(v_errorMsg_1090_) == 0)
{
v___y_1102_ = v_isZero_1081_;
goto v___jp_1101_;
}
else
{
uint8_t v___x_1109_; 
v___x_1109_ = 1;
v___y_1102_ = v___x_1109_;
goto v___jp_1101_;
}
v___jp_1101_:
{
lean_object* v_trace_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1107_; 
v_trace_1103_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_trace_1103_, 0, v_lhsPrec_1076_);
lean_ctor_set(v_trace_1103_, 1, v_pos_1077_);
lean_ctor_set(v_trace_1103_, 2, v_descr_1075_);
lean_ctor_set(v_trace_1103_, 3, v_children_1100_);
lean_ctor_set_uint8(v_trace_1103_, sizeof(void*)*4, v___y_1102_);
v___x_1104_ = l_Array_shrink___redArg(v_traces_1092_, v_n_1094_);
lean_dec(v_n_1094_);
v___x_1105_ = lean_array_push(v___x_1104_, v_trace_1103_);
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 6, v___x_1105_);
v___x_1107_ = v___x_1097_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_stxStack_1086_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v_lhsPrec_1087_);
lean_ctor_set(v_reuseFailAlloc_1108_, 2, v_pos_1088_);
lean_ctor_set(v_reuseFailAlloc_1108_, 3, v_cache_1089_);
lean_ctor_set(v_reuseFailAlloc_1108_, 4, v_errorMsg_1090_);
lean_ctor_set(v_reuseFailAlloc_1108_, 5, v_recoveredErrors_1091_);
lean_ctor_set(v_reuseFailAlloc_1108_, 6, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
else
{
lean_dec(v_i_1079_);
v_i_1079_ = v_n_1094_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop(lean_object* v_descr_1119_, lean_object* v_lhsPrec_1120_, lean_object* v_pos_1121_, lean_object* v_s_1122_, lean_object* v_i_1123_, lean_object* v_h_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg(v_descr_1119_, v_lhsPrec_1120_, v_pos_1121_, v_s_1122_, v_i_1123_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(lean_object* v_s_1126_, lean_object* v_descr_1127_, lean_object* v_f_1128_){
_start:
{
lean_object* v_stxStack_1129_; lean_object* v_lhsPrec_1130_; lean_object* v_pos_1131_; lean_object* v_cache_1132_; lean_object* v_errorMsg_1133_; lean_object* v_recoveredErrors_1134_; lean_object* v_traces_1135_; lean_object* v___x_1137_; uint8_t v_isShared_1138_; uint8_t v_isSharedCheck_1148_; 
v_stxStack_1129_ = lean_ctor_get(v_s_1126_, 0);
v_lhsPrec_1130_ = lean_ctor_get(v_s_1126_, 1);
v_pos_1131_ = lean_ctor_get(v_s_1126_, 2);
v_cache_1132_ = lean_ctor_get(v_s_1126_, 3);
v_errorMsg_1133_ = lean_ctor_get(v_s_1126_, 4);
v_recoveredErrors_1134_ = lean_ctor_get(v_s_1126_, 5);
v_traces_1135_ = lean_ctor_get(v_s_1126_, 6);
v_isSharedCheck_1148_ = !lean_is_exclusive(v_s_1126_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1137_ = v_s_1126_;
v_isShared_1138_ = v_isSharedCheck_1148_;
goto v_resetjp_1136_;
}
else
{
lean_inc(v_traces_1135_);
lean_inc(v_recoveredErrors_1134_);
lean_inc(v_errorMsg_1133_);
lean_inc(v_cache_1132_);
lean_inc(v_pos_1131_);
lean_inc(v_lhsPrec_1130_);
lean_inc(v_stxStack_1129_);
lean_dec(v_s_1126_);
v___x_1137_ = lean_box(0);
v_isShared_1138_ = v_isSharedCheck_1148_;
goto v_resetjp_1136_;
}
v_resetjp_1136_:
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v_s_1142_; 
v___x_1139_ = lean_box(0);
v___x_1140_ = lean_array_push(v_traces_1135_, v___x_1139_);
lean_inc(v_pos_1131_);
lean_inc(v_lhsPrec_1130_);
if (v_isShared_1138_ == 0)
{
lean_ctor_set(v___x_1137_, 6, v___x_1140_);
v_s_1142_ = v___x_1137_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_stxStack_1129_);
lean_ctor_set(v_reuseFailAlloc_1147_, 1, v_lhsPrec_1130_);
lean_ctor_set(v_reuseFailAlloc_1147_, 2, v_pos_1131_);
lean_ctor_set(v_reuseFailAlloc_1147_, 3, v_cache_1132_);
lean_ctor_set(v_reuseFailAlloc_1147_, 4, v_errorMsg_1133_);
lean_ctor_set(v_reuseFailAlloc_1147_, 5, v_recoveredErrors_1134_);
lean_ctor_set(v_reuseFailAlloc_1147_, 6, v___x_1140_);
v_s_1142_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
lean_object* v_s_1143_; lean_object* v_traces_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v_s_1143_ = lean_apply_1(v_f_1128_, v_s_1142_);
v_traces_1144_ = lean_ctor_get(v_s_1143_, 6);
lean_inc_ref(v_traces_1144_);
v___x_1145_ = lean_array_get_size(v_traces_1144_);
lean_dec_ref(v_traces_1144_);
v___x_1146_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow_findStop___redArg(v_descr_1127_, v_lhsPrec_1130_, v_pos_1131_, v_s_1143_, v___x_1145_);
return v___x_1146_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_withTraceNode(lean_object* v_s_1149_, lean_object* v_descr_1150_, lean_object* v_f_1151_){
_start:
{
lean_object* v_traces_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v_traces_1152_ = lean_ctor_get(v_s_1149_, 6);
v___x_1153_ = lean_array_get_size(v_traces_1152_);
v___x_1154_ = lean_unsigned_to_nat(0u);
v___x_1155_ = lean_nat_dec_eq(v___x_1153_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
v___x_1156_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_s_1149_, v_descr_1150_, v_f_1151_);
return v___x_1156_;
}
else
{
lean_object* v___x_1157_; 
lean_dec_ref(v_descr_1150_);
v___x_1157_ = lean_apply_1(v_f_1151_, v_s_1149_);
return v___x_1157_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_Parser_ParserState_hasError(lean_object* v_s_1158_){
_start:
{
lean_object* v_errorMsg_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; uint8_t v___x_1162_; 
v_errorMsg_1159_ = lean_ctor_get(v_s_1158_, 4);
lean_inc(v_errorMsg_1159_);
lean_dec_ref(v_s_1158_);
v___x_1160_ = ((lean_object*)(l_Lean_Parser_instBEqError___closed__0));
v___x_1161_ = lean_box(0);
v___x_1162_ = l_Option_instBEq_beq___redArg(v___x_1160_, v_errorMsg_1159_, v___x_1161_);
if (v___x_1162_ == 0)
{
uint8_t v___x_1163_; 
v___x_1163_ = 1;
return v___x_1163_;
}
else
{
uint8_t v___x_1164_; 
v___x_1164_ = 0;
return v___x_1164_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_hasError___boxed(lean_object* v_s_1165_){
_start:
{
uint8_t v_res_1166_; lean_object* v_r_1167_; 
v_res_1166_ = l_Lean_Parser_ParserState_hasError(v_s_1165_);
v_r_1167_ = lean_box(v_res_1166_);
return v_r_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize(lean_object* v_s_1168_){
_start:
{
lean_object* v_stxStack_1169_; lean_object* v___x_1170_; 
v_stxStack_1169_ = lean_ctor_get(v_s_1168_, 0);
v___x_1170_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_stackSize___boxed(lean_object* v_s_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l_Lean_Parser_ParserState_stackSize(v_s_1171_);
lean_dec_ref(v_s_1171_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore(lean_object* v_s_1173_, lean_object* v_iniStackSz_1174_, lean_object* v_iniPos_1175_){
_start:
{
lean_object* v_stxStack_1176_; lean_object* v_lhsPrec_1177_; lean_object* v_cache_1178_; lean_object* v_recoveredErrors_1179_; lean_object* v_traces_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1189_; 
v_stxStack_1176_ = lean_ctor_get(v_s_1173_, 0);
v_lhsPrec_1177_ = lean_ctor_get(v_s_1173_, 1);
v_cache_1178_ = lean_ctor_get(v_s_1173_, 3);
v_recoveredErrors_1179_ = lean_ctor_get(v_s_1173_, 5);
v_traces_1180_ = lean_ctor_get(v_s_1173_, 6);
v_isSharedCheck_1189_ = !lean_is_exclusive(v_s_1173_);
if (v_isSharedCheck_1189_ == 0)
{
lean_object* v_unused_1190_; lean_object* v_unused_1191_; 
v_unused_1190_ = lean_ctor_get(v_s_1173_, 4);
lean_dec(v_unused_1190_);
v_unused_1191_ = lean_ctor_get(v_s_1173_, 2);
lean_dec(v_unused_1191_);
v___x_1182_ = v_s_1173_;
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_traces_1180_);
lean_inc(v_recoveredErrors_1179_);
lean_inc(v_cache_1178_);
lean_inc(v_lhsPrec_1177_);
lean_inc(v_stxStack_1176_);
lean_dec(v_s_1173_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1187_; 
v___x_1184_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1176_, v_iniStackSz_1174_);
v___x_1185_ = lean_box(0);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 4, v___x_1185_);
lean_ctor_set(v___x_1182_, 2, v_iniPos_1175_);
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1187_ = v___x_1182_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_lhsPrec_1177_);
lean_ctor_set(v_reuseFailAlloc_1188_, 2, v_iniPos_1175_);
lean_ctor_set(v_reuseFailAlloc_1188_, 3, v_cache_1178_);
lean_ctor_set(v_reuseFailAlloc_1188_, 4, v___x_1185_);
lean_ctor_set(v_reuseFailAlloc_1188_, 5, v_recoveredErrors_1179_);
lean_ctor_set(v_reuseFailAlloc_1188_, 6, v_traces_1180_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_restore___boxed(lean_object* v_s_1192_, lean_object* v_iniStackSz_1193_, lean_object* v_iniPos_1194_){
_start:
{
lean_object* v_res_1195_; 
v_res_1195_ = l_Lean_Parser_ParserState_restore(v_s_1192_, v_iniStackSz_1193_, v_iniPos_1194_);
lean_dec(v_iniStackSz_1193_);
return v_res_1195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setPos(lean_object* v_s_1196_, lean_object* v_pos_1197_){
_start:
{
lean_object* v_stxStack_1198_; lean_object* v_lhsPrec_1199_; lean_object* v_cache_1200_; lean_object* v_errorMsg_1201_; lean_object* v_recoveredErrors_1202_; lean_object* v_traces_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1210_; 
v_stxStack_1198_ = lean_ctor_get(v_s_1196_, 0);
v_lhsPrec_1199_ = lean_ctor_get(v_s_1196_, 1);
v_cache_1200_ = lean_ctor_get(v_s_1196_, 3);
v_errorMsg_1201_ = lean_ctor_get(v_s_1196_, 4);
v_recoveredErrors_1202_ = lean_ctor_get(v_s_1196_, 5);
v_traces_1203_ = lean_ctor_get(v_s_1196_, 6);
v_isSharedCheck_1210_ = !lean_is_exclusive(v_s_1196_);
if (v_isSharedCheck_1210_ == 0)
{
lean_object* v_unused_1211_; 
v_unused_1211_ = lean_ctor_get(v_s_1196_, 2);
lean_dec(v_unused_1211_);
v___x_1205_ = v_s_1196_;
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_traces_1203_);
lean_inc(v_recoveredErrors_1202_);
lean_inc(v_errorMsg_1201_);
lean_inc(v_cache_1200_);
lean_inc(v_lhsPrec_1199_);
lean_inc(v_stxStack_1198_);
lean_dec(v_s_1196_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1210_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v___x_1208_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 2, v_pos_1197_);
v___x_1208_ = v___x_1205_;
goto v_reusejp_1207_;
}
else
{
lean_object* v_reuseFailAlloc_1209_; 
v_reuseFailAlloc_1209_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1209_, 0, v_stxStack_1198_);
lean_ctor_set(v_reuseFailAlloc_1209_, 1, v_lhsPrec_1199_);
lean_ctor_set(v_reuseFailAlloc_1209_, 2, v_pos_1197_);
lean_ctor_set(v_reuseFailAlloc_1209_, 3, v_cache_1200_);
lean_ctor_set(v_reuseFailAlloc_1209_, 4, v_errorMsg_1201_);
lean_ctor_set(v_reuseFailAlloc_1209_, 5, v_recoveredErrors_1202_);
lean_ctor_set(v_reuseFailAlloc_1209_, 6, v_traces_1203_);
v___x_1208_ = v_reuseFailAlloc_1209_;
goto v_reusejp_1207_;
}
v_reusejp_1207_:
{
return v___x_1208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setCache(lean_object* v_s_1212_, lean_object* v_cache_1213_){
_start:
{
lean_object* v_stxStack_1214_; lean_object* v_lhsPrec_1215_; lean_object* v_pos_1216_; lean_object* v_errorMsg_1217_; lean_object* v_recoveredErrors_1218_; lean_object* v_traces_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
v_stxStack_1214_ = lean_ctor_get(v_s_1212_, 0);
v_lhsPrec_1215_ = lean_ctor_get(v_s_1212_, 1);
v_pos_1216_ = lean_ctor_get(v_s_1212_, 2);
v_errorMsg_1217_ = lean_ctor_get(v_s_1212_, 4);
v_recoveredErrors_1218_ = lean_ctor_get(v_s_1212_, 5);
v_traces_1219_ = lean_ctor_get(v_s_1212_, 6);
v_isSharedCheck_1226_ = !lean_is_exclusive(v_s_1212_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v_s_1212_, 3);
lean_dec(v_unused_1227_);
v___x_1221_ = v_s_1212_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_traces_1219_);
lean_inc(v_recoveredErrors_1218_);
lean_inc(v_errorMsg_1217_);
lean_inc(v_pos_1216_);
lean_inc(v_lhsPrec_1215_);
lean_inc(v_stxStack_1214_);
lean_dec(v_s_1212_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
lean_ctor_set(v___x_1221_, 3, v_cache_1213_);
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_stxStack_1214_);
lean_ctor_set(v_reuseFailAlloc_1225_, 1, v_lhsPrec_1215_);
lean_ctor_set(v_reuseFailAlloc_1225_, 2, v_pos_1216_);
lean_ctor_set(v_reuseFailAlloc_1225_, 3, v_cache_1213_);
lean_ctor_set(v_reuseFailAlloc_1225_, 4, v_errorMsg_1217_);
lean_ctor_set(v_reuseFailAlloc_1225_, 5, v_recoveredErrors_1218_);
lean_ctor_set(v_reuseFailAlloc_1225_, 6, v_traces_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax(lean_object* v_s_1228_, lean_object* v_n_1229_, uint8_t v_silent_1230_){
_start:
{
lean_object* v_stxStack_1231_; lean_object* v_lhsPrec_1232_; lean_object* v_pos_1233_; lean_object* v_cache_1234_; lean_object* v_errorMsg_1235_; lean_object* v_recoveredErrors_1236_; lean_object* v_traces_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1256_; 
v_stxStack_1231_ = lean_ctor_get(v_s_1228_, 0);
v_lhsPrec_1232_ = lean_ctor_get(v_s_1228_, 1);
v_pos_1233_ = lean_ctor_get(v_s_1228_, 2);
v_cache_1234_ = lean_ctor_get(v_s_1228_, 3);
v_errorMsg_1235_ = lean_ctor_get(v_s_1228_, 4);
v_recoveredErrors_1236_ = lean_ctor_get(v_s_1228_, 5);
v_traces_1237_ = lean_ctor_get(v_s_1228_, 6);
v_isSharedCheck_1256_ = !lean_is_exclusive(v_s_1228_);
if (v_isSharedCheck_1256_ == 0)
{
v___x_1239_ = v_s_1228_;
v_isShared_1240_ = v_isSharedCheck_1256_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_traces_1237_);
lean_inc(v_recoveredErrors_1236_);
lean_inc(v_errorMsg_1235_);
lean_inc(v_cache_1234_);
lean_inc(v_pos_1233_);
lean_inc(v_lhsPrec_1232_);
lean_inc(v_stxStack_1231_);
lean_dec(v_s_1228_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1256_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v___x_1241_; 
lean_inc(v_n_1229_);
v___x_1241_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_1231_, v_n_1229_);
if (v_silent_1230_ == 0)
{
lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1242_ = lean_array_get_size(v_traces_1237_);
v___x_1243_ = lean_unsigned_to_nat(0u);
v___x_1244_ = lean_nat_dec_eq(v___x_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1248_; 
v___x_1245_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1245_, 0, v_n_1229_);
v___x_1246_ = lean_array_push(v_traces_1237_, v___x_1245_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 6, v___x_1246_);
lean_ctor_set(v___x_1239_, 0, v___x_1241_);
v___x_1248_ = v___x_1239_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_lhsPrec_1232_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_pos_1233_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v_cache_1234_);
lean_ctor_set(v_reuseFailAlloc_1249_, 4, v_errorMsg_1235_);
lean_ctor_set(v_reuseFailAlloc_1249_, 5, v_recoveredErrors_1236_);
lean_ctor_set(v_reuseFailAlloc_1249_, 6, v___x_1246_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
return v___x_1248_;
}
}
else
{
lean_object* v___x_1251_; 
lean_dec(v_n_1229_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v___x_1241_);
v___x_1251_ = v___x_1239_;
goto v_reusejp_1250_;
}
else
{
lean_object* v_reuseFailAlloc_1252_; 
v_reuseFailAlloc_1252_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1252_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1252_, 1, v_lhsPrec_1232_);
lean_ctor_set(v_reuseFailAlloc_1252_, 2, v_pos_1233_);
lean_ctor_set(v_reuseFailAlloc_1252_, 3, v_cache_1234_);
lean_ctor_set(v_reuseFailAlloc_1252_, 4, v_errorMsg_1235_);
lean_ctor_set(v_reuseFailAlloc_1252_, 5, v_recoveredErrors_1236_);
lean_ctor_set(v_reuseFailAlloc_1252_, 6, v_traces_1237_);
v___x_1251_ = v_reuseFailAlloc_1252_;
goto v_reusejp_1250_;
}
v_reusejp_1250_:
{
return v___x_1251_;
}
}
}
else
{
lean_object* v___x_1254_; 
lean_dec(v_n_1229_);
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 0, v___x_1241_);
v___x_1254_ = v___x_1239_;
goto v_reusejp_1253_;
}
else
{
lean_object* v_reuseFailAlloc_1255_; 
v_reuseFailAlloc_1255_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1255_, 0, v___x_1241_);
lean_ctor_set(v_reuseFailAlloc_1255_, 1, v_lhsPrec_1232_);
lean_ctor_set(v_reuseFailAlloc_1255_, 2, v_pos_1233_);
lean_ctor_set(v_reuseFailAlloc_1255_, 3, v_cache_1234_);
lean_ctor_set(v_reuseFailAlloc_1255_, 4, v_errorMsg_1235_);
lean_ctor_set(v_reuseFailAlloc_1255_, 5, v_recoveredErrors_1236_);
lean_ctor_set(v_reuseFailAlloc_1255_, 6, v_traces_1237_);
v___x_1254_ = v_reuseFailAlloc_1255_;
goto v_reusejp_1253_;
}
v_reusejp_1253_:
{
return v___x_1254_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_pushSyntax___boxed(lean_object* v_s_1257_, lean_object* v_n_1258_, lean_object* v_silent_1259_){
_start:
{
uint8_t v_silent_boxed_1260_; lean_object* v_res_1261_; 
v_silent_boxed_1260_ = lean_unbox(v_silent_1259_);
v_res_1261_ = l_Lean_Parser_ParserState_pushSyntax(v_s_1257_, v_n_1258_, v_silent_boxed_1260_);
return v_res_1261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_popSyntax(lean_object* v_s_1262_){
_start:
{
lean_object* v_stxStack_1263_; lean_object* v_lhsPrec_1264_; lean_object* v_pos_1265_; lean_object* v_cache_1266_; lean_object* v_errorMsg_1267_; lean_object* v_recoveredErrors_1268_; lean_object* v_traces_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1277_; 
v_stxStack_1263_ = lean_ctor_get(v_s_1262_, 0);
v_lhsPrec_1264_ = lean_ctor_get(v_s_1262_, 1);
v_pos_1265_ = lean_ctor_get(v_s_1262_, 2);
v_cache_1266_ = lean_ctor_get(v_s_1262_, 3);
v_errorMsg_1267_ = lean_ctor_get(v_s_1262_, 4);
v_recoveredErrors_1268_ = lean_ctor_get(v_s_1262_, 5);
v_traces_1269_ = lean_ctor_get(v_s_1262_, 6);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_s_1262_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1271_ = v_s_1262_;
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_traces_1269_);
lean_inc(v_recoveredErrors_1268_);
lean_inc(v_errorMsg_1267_);
lean_inc(v_cache_1266_);
lean_inc(v_pos_1265_);
lean_inc(v_lhsPrec_1264_);
lean_inc(v_stxStack_1263_);
lean_dec(v_s_1262_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
v___x_1273_ = l_Lean_Parser_SyntaxStack_pop(v_stxStack_1263_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set(v___x_1271_, 0, v___x_1273_);
v___x_1275_ = v___x_1271_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
lean_ctor_set(v_reuseFailAlloc_1276_, 1, v_lhsPrec_1264_);
lean_ctor_set(v_reuseFailAlloc_1276_, 2, v_pos_1265_);
lean_ctor_set(v_reuseFailAlloc_1276_, 3, v_cache_1266_);
lean_ctor_set(v_reuseFailAlloc_1276_, 4, v_errorMsg_1267_);
lean_ctor_set(v_reuseFailAlloc_1276_, 5, v_recoveredErrors_1268_);
lean_ctor_set(v_reuseFailAlloc_1276_, 6, v_traces_1269_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack(lean_object* v_s_1278_, lean_object* v_iniStackSz_1279_){
_start:
{
lean_object* v_stxStack_1280_; lean_object* v_lhsPrec_1281_; lean_object* v_pos_1282_; lean_object* v_cache_1283_; lean_object* v_errorMsg_1284_; lean_object* v_recoveredErrors_1285_; lean_object* v_traces_1286_; lean_object* v___x_1288_; uint8_t v_isShared_1289_; uint8_t v_isSharedCheck_1294_; 
v_stxStack_1280_ = lean_ctor_get(v_s_1278_, 0);
v_lhsPrec_1281_ = lean_ctor_get(v_s_1278_, 1);
v_pos_1282_ = lean_ctor_get(v_s_1278_, 2);
v_cache_1283_ = lean_ctor_get(v_s_1278_, 3);
v_errorMsg_1284_ = lean_ctor_get(v_s_1278_, 4);
v_recoveredErrors_1285_ = lean_ctor_get(v_s_1278_, 5);
v_traces_1286_ = lean_ctor_get(v_s_1278_, 6);
v_isSharedCheck_1294_ = !lean_is_exclusive(v_s_1278_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1288_ = v_s_1278_;
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
else
{
lean_inc(v_traces_1286_);
lean_inc(v_recoveredErrors_1285_);
lean_inc(v_errorMsg_1284_);
lean_inc(v_cache_1283_);
lean_inc(v_pos_1282_);
lean_inc(v_lhsPrec_1281_);
lean_inc(v_stxStack_1280_);
lean_dec(v_s_1278_);
v___x_1288_ = lean_box(0);
v_isShared_1289_ = v_isSharedCheck_1294_;
goto v_resetjp_1287_;
}
v_resetjp_1287_:
{
lean_object* v___x_1290_; lean_object* v___x_1292_; 
v___x_1290_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1280_, v_iniStackSz_1279_);
if (v_isShared_1289_ == 0)
{
lean_ctor_set(v___x_1288_, 0, v___x_1290_);
v___x_1292_ = v___x_1288_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1293_, 1, v_lhsPrec_1281_);
lean_ctor_set(v_reuseFailAlloc_1293_, 2, v_pos_1282_);
lean_ctor_set(v_reuseFailAlloc_1293_, 3, v_cache_1283_);
lean_ctor_set(v_reuseFailAlloc_1293_, 4, v_errorMsg_1284_);
lean_ctor_set(v_reuseFailAlloc_1293_, 5, v_recoveredErrors_1285_);
lean_ctor_set(v_reuseFailAlloc_1293_, 6, v_traces_1286_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_shrinkStack___boxed(lean_object* v_s_1295_, lean_object* v_iniStackSz_1296_){
_start:
{
lean_object* v_res_1297_; 
v_res_1297_ = l_Lean_Parser_ParserState_shrinkStack(v_s_1295_, v_iniStackSz_1296_);
lean_dec(v_iniStackSz_1296_);
return v_res_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next(lean_object* v_s_1298_, lean_object* v_c_1299_, lean_object* v_pos_1300_){
_start:
{
lean_object* v_toInputContext_1301_; lean_object* v_stxStack_1302_; lean_object* v_lhsPrec_1303_; lean_object* v_cache_1304_; lean_object* v_errorMsg_1305_; lean_object* v_recoveredErrors_1306_; lean_object* v_traces_1307_; lean_object* v___x_1309_; uint8_t v_isShared_1310_; uint8_t v_isSharedCheck_1316_; 
v_toInputContext_1301_ = lean_ctor_get(v_c_1299_, 0);
v_stxStack_1302_ = lean_ctor_get(v_s_1298_, 0);
v_lhsPrec_1303_ = lean_ctor_get(v_s_1298_, 1);
v_cache_1304_ = lean_ctor_get(v_s_1298_, 3);
v_errorMsg_1305_ = lean_ctor_get(v_s_1298_, 4);
v_recoveredErrors_1306_ = lean_ctor_get(v_s_1298_, 5);
v_traces_1307_ = lean_ctor_get(v_s_1298_, 6);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_s_1298_);
if (v_isSharedCheck_1316_ == 0)
{
lean_object* v_unused_1317_; 
v_unused_1317_ = lean_ctor_get(v_s_1298_, 2);
lean_dec(v_unused_1317_);
v___x_1309_ = v_s_1298_;
v_isShared_1310_ = v_isSharedCheck_1316_;
goto v_resetjp_1308_;
}
else
{
lean_inc(v_traces_1307_);
lean_inc(v_recoveredErrors_1306_);
lean_inc(v_errorMsg_1305_);
lean_inc(v_cache_1304_);
lean_inc(v_lhsPrec_1303_);
lean_inc(v_stxStack_1302_);
lean_dec(v_s_1298_);
v___x_1309_ = lean_box(0);
v_isShared_1310_ = v_isSharedCheck_1316_;
goto v_resetjp_1308_;
}
v_resetjp_1308_:
{
lean_object* v_inputString_1311_; lean_object* v___x_1312_; lean_object* v___x_1314_; 
v_inputString_1311_ = lean_ctor_get(v_toInputContext_1301_, 0);
v___x_1312_ = lean_string_utf8_next(v_inputString_1311_, v_pos_1300_);
if (v_isShared_1310_ == 0)
{
lean_ctor_set(v___x_1309_, 2, v___x_1312_);
v___x_1314_ = v___x_1309_;
goto v_reusejp_1313_;
}
else
{
lean_object* v_reuseFailAlloc_1315_; 
v_reuseFailAlloc_1315_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1315_, 0, v_stxStack_1302_);
lean_ctor_set(v_reuseFailAlloc_1315_, 1, v_lhsPrec_1303_);
lean_ctor_set(v_reuseFailAlloc_1315_, 2, v___x_1312_);
lean_ctor_set(v_reuseFailAlloc_1315_, 3, v_cache_1304_);
lean_ctor_set(v_reuseFailAlloc_1315_, 4, v_errorMsg_1305_);
lean_ctor_set(v_reuseFailAlloc_1315_, 5, v_recoveredErrors_1306_);
lean_ctor_set(v_reuseFailAlloc_1315_, 6, v_traces_1307_);
v___x_1314_ = v_reuseFailAlloc_1315_;
goto v_reusejp_1313_;
}
v_reusejp_1313_:
{
return v___x_1314_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next___boxed(lean_object* v_s_1318_, lean_object* v_c_1319_, lean_object* v_pos_1320_){
_start:
{
lean_object* v_res_1321_; 
v_res_1321_ = l_Lean_Parser_ParserState_next(v_s_1318_, v_c_1319_, v_pos_1320_);
lean_dec(v_pos_1320_);
lean_dec_ref(v_c_1319_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object* v_s_1322_, lean_object* v_c_1323_, lean_object* v_pos_1324_){
_start:
{
lean_object* v_toInputContext_1325_; lean_object* v_stxStack_1326_; lean_object* v_lhsPrec_1327_; lean_object* v_cache_1328_; lean_object* v_errorMsg_1329_; lean_object* v_recoveredErrors_1330_; lean_object* v_traces_1331_; lean_object* v___x_1333_; uint8_t v_isShared_1334_; uint8_t v_isSharedCheck_1340_; 
v_toInputContext_1325_ = lean_ctor_get(v_c_1323_, 0);
v_stxStack_1326_ = lean_ctor_get(v_s_1322_, 0);
v_lhsPrec_1327_ = lean_ctor_get(v_s_1322_, 1);
v_cache_1328_ = lean_ctor_get(v_s_1322_, 3);
v_errorMsg_1329_ = lean_ctor_get(v_s_1322_, 4);
v_recoveredErrors_1330_ = lean_ctor_get(v_s_1322_, 5);
v_traces_1331_ = lean_ctor_get(v_s_1322_, 6);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_s_1322_);
if (v_isSharedCheck_1340_ == 0)
{
lean_object* v_unused_1341_; 
v_unused_1341_ = lean_ctor_get(v_s_1322_, 2);
lean_dec(v_unused_1341_);
v___x_1333_ = v_s_1322_;
v_isShared_1334_ = v_isSharedCheck_1340_;
goto v_resetjp_1332_;
}
else
{
lean_inc(v_traces_1331_);
lean_inc(v_recoveredErrors_1330_);
lean_inc(v_errorMsg_1329_);
lean_inc(v_cache_1328_);
lean_inc(v_lhsPrec_1327_);
lean_inc(v_stxStack_1326_);
lean_dec(v_s_1322_);
v___x_1333_ = lean_box(0);
v_isShared_1334_ = v_isSharedCheck_1340_;
goto v_resetjp_1332_;
}
v_resetjp_1332_:
{
lean_object* v_inputString_1335_; lean_object* v___x_1336_; lean_object* v___x_1338_; 
v_inputString_1335_ = lean_ctor_get(v_toInputContext_1325_, 0);
v___x_1336_ = lean_string_utf8_next_fast(v_inputString_1335_, v_pos_1324_);
if (v_isShared_1334_ == 0)
{
lean_ctor_set(v___x_1333_, 2, v___x_1336_);
v___x_1338_ = v___x_1333_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v_stxStack_1326_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_lhsPrec_1327_);
lean_ctor_set(v_reuseFailAlloc_1339_, 2, v___x_1336_);
lean_ctor_set(v_reuseFailAlloc_1339_, 3, v_cache_1328_);
lean_ctor_set(v_reuseFailAlloc_1339_, 4, v_errorMsg_1329_);
lean_ctor_set(v_reuseFailAlloc_1339_, 5, v_recoveredErrors_1330_);
lean_ctor_set(v_reuseFailAlloc_1339_, 6, v_traces_1331_);
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
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___redArg___boxed(lean_object* v_s_1342_, lean_object* v_c_1343_, lean_object* v_pos_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1342_, v_c_1343_, v_pos_1344_);
lean_dec(v_pos_1344_);
lean_dec_ref(v_c_1343_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27(lean_object* v_s_1346_, lean_object* v_c_1347_, lean_object* v_pos_1348_, lean_object* v_h_1349_){
_start:
{
lean_object* v___x_1350_; 
v___x_1350_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1346_, v_c_1347_, v_pos_1348_);
return v___x_1350_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_next_x27___boxed(lean_object* v_s_1351_, lean_object* v_c_1352_, lean_object* v_pos_1353_, lean_object* v_h_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l_Lean_Parser_ParserState_next_x27(v_s_1351_, v_c_1352_, v_pos_1353_, v_h_1354_);
lean_dec(v_pos_1353_);
lean_dec_ref(v_c_1352_);
return v_res_1355_;
}
}
LEAN_EXPORT uint8_t l_Option_instBEq_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(lean_object* v_x_1356_, lean_object* v_x_1357_){
_start:
{
if (lean_obj_tag(v_x_1356_) == 0)
{
if (lean_obj_tag(v_x_1357_) == 0)
{
uint8_t v___x_1358_; 
v___x_1358_ = 1;
return v___x_1358_;
}
else
{
uint8_t v___x_1359_; 
lean_dec_ref_known(v_x_1357_, 1);
v___x_1359_ = 0;
return v___x_1359_;
}
}
else
{
if (lean_obj_tag(v_x_1357_) == 0)
{
uint8_t v___x_1360_; 
lean_dec_ref_known(v_x_1356_, 1);
v___x_1360_ = 0;
return v___x_1360_;
}
else
{
lean_object* v_val_1361_; lean_object* v_val_1362_; uint8_t v___x_1363_; 
v_val_1361_ = lean_ctor_get(v_x_1356_, 0);
lean_inc(v_val_1361_);
lean_dec_ref_known(v_x_1356_, 1);
v_val_1362_ = lean_ctor_get(v_x_1357_, 0);
lean_inc(v_val_1362_);
lean_dec_ref_known(v_x_1357_, 1);
v___x_1363_ = l_Lean_Parser_instBEqError_beq(v_val_1361_, v_val_1362_);
return v___x_1363_;
}
}
}
}
LEAN_EXPORT lean_object* l_Option_instBEq_beq___at___00Lean_Parser_ParserState_mkNode_spec__0___boxed(lean_object* v_x_1364_, lean_object* v_x_1365_){
_start:
{
uint8_t v_res_1366_; lean_object* v_r_1367_; 
v_res_1366_ = l_Option_instBEq_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(v_x_1364_, v_x_1365_);
v_r_1367_ = lean_box(v_res_1366_);
return v_r_1367_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode(lean_object* v_s_1368_, lean_object* v_k_1369_, lean_object* v_iniStackSz_1370_){
_start:
{
lean_object* v_stxStack_1371_; lean_object* v_lhsPrec_1372_; lean_object* v_pos_1373_; lean_object* v_cache_1374_; lean_object* v_errorMsg_1375_; lean_object* v_recoveredErrors_1376_; lean_object* v_traces_1377_; lean_object* v___x_1379_; uint8_t v_isShared_1380_; uint8_t v_isSharedCheck_1398_; 
v_stxStack_1371_ = lean_ctor_get(v_s_1368_, 0);
v_lhsPrec_1372_ = lean_ctor_get(v_s_1368_, 1);
v_pos_1373_ = lean_ctor_get(v_s_1368_, 2);
v_cache_1374_ = lean_ctor_get(v_s_1368_, 3);
v_errorMsg_1375_ = lean_ctor_get(v_s_1368_, 4);
v_recoveredErrors_1376_ = lean_ctor_get(v_s_1368_, 5);
v_traces_1377_ = lean_ctor_get(v_s_1368_, 6);
v_isSharedCheck_1398_ = !lean_is_exclusive(v_s_1368_);
if (v_isSharedCheck_1398_ == 0)
{
v___x_1379_ = v_s_1368_;
v_isShared_1380_ = v_isSharedCheck_1398_;
goto v_resetjp_1378_;
}
else
{
lean_inc(v_traces_1377_);
lean_inc(v_recoveredErrors_1376_);
lean_inc(v_errorMsg_1375_);
lean_inc(v_cache_1374_);
lean_inc(v_pos_1373_);
lean_inc(v_lhsPrec_1372_);
lean_inc(v_stxStack_1371_);
lean_dec(v_s_1368_);
v___x_1379_ = lean_box(0);
v_isShared_1380_ = v_isSharedCheck_1398_;
goto v_resetjp_1378_;
}
v_resetjp_1378_:
{
lean_object* v___x_1391_; uint8_t v___x_1392_; 
v___x_1391_ = lean_box(0);
lean_inc(v_errorMsg_1375_);
v___x_1392_ = l_Option_instBEq_beq___at___00Lean_Parser_ParserState_mkNode_spec__0(v_errorMsg_1375_, v___x_1391_);
if (v___x_1392_ == 0)
{
lean_object* v___x_1393_; uint8_t v___x_1394_; 
v___x_1393_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1371_);
v___x_1394_ = lean_nat_dec_eq(v___x_1393_, v_iniStackSz_1370_);
lean_dec(v___x_1393_);
if (v___x_1394_ == 0)
{
goto v___jp_1381_;
}
else
{
lean_object* v___x_1395_; lean_object* v_stack_1396_; lean_object* v___x_1397_; 
lean_del_object(v___x_1379_);
lean_dec(v_k_1369_);
v___x_1395_ = lean_box(0);
v_stack_1396_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_1371_, v___x_1395_);
v___x_1397_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1397_, 0, v_stack_1396_);
lean_ctor_set(v___x_1397_, 1, v_lhsPrec_1372_);
lean_ctor_set(v___x_1397_, 2, v_pos_1373_);
lean_ctor_set(v___x_1397_, 3, v_cache_1374_);
lean_ctor_set(v___x_1397_, 4, v_errorMsg_1375_);
lean_ctor_set(v___x_1397_, 5, v_recoveredErrors_1376_);
lean_ctor_set(v___x_1397_, 6, v_traces_1377_);
return v___x_1397_;
}
}
else
{
goto v___jp_1381_;
}
v___jp_1381_:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v_newNode_1385_; lean_object* v_stack_1386_; lean_object* v_stack_1387_; lean_object* v___x_1389_; 
v___x_1382_ = lean_box(2);
v___x_1383_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1371_);
v___x_1384_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_1371_, v_iniStackSz_1370_, v___x_1383_);
lean_dec(v___x_1383_);
v_newNode_1385_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_newNode_1385_, 0, v___x_1382_);
lean_ctor_set(v_newNode_1385_, 1, v_k_1369_);
lean_ctor_set(v_newNode_1385_, 2, v___x_1384_);
v_stack_1386_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1371_, v_iniStackSz_1370_);
v_stack_1387_ = l_Lean_Parser_SyntaxStack_push(v_stack_1386_, v_newNode_1385_);
if (v_isShared_1380_ == 0)
{
lean_ctor_set(v___x_1379_, 0, v_stack_1387_);
v___x_1389_ = v___x_1379_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v_stack_1387_);
lean_ctor_set(v_reuseFailAlloc_1390_, 1, v_lhsPrec_1372_);
lean_ctor_set(v_reuseFailAlloc_1390_, 2, v_pos_1373_);
lean_ctor_set(v_reuseFailAlloc_1390_, 3, v_cache_1374_);
lean_ctor_set(v_reuseFailAlloc_1390_, 4, v_errorMsg_1375_);
lean_ctor_set(v_reuseFailAlloc_1390_, 5, v_recoveredErrors_1376_);
lean_ctor_set(v_reuseFailAlloc_1390_, 6, v_traces_1377_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkNode___boxed(lean_object* v_s_1399_, lean_object* v_k_1400_, lean_object* v_iniStackSz_1401_){
_start:
{
lean_object* v_res_1402_; 
v_res_1402_ = l_Lean_Parser_ParserState_mkNode(v_s_1399_, v_k_1400_, v_iniStackSz_1401_);
lean_dec(v_iniStackSz_1401_);
return v_res_1402_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode(lean_object* v_s_1403_, lean_object* v_k_1404_, lean_object* v_iniStackSz_1405_){
_start:
{
lean_object* v_stxStack_1406_; lean_object* v_lhsPrec_1407_; lean_object* v_pos_1408_; lean_object* v_cache_1409_; lean_object* v_errorMsg_1410_; lean_object* v_recoveredErrors_1411_; lean_object* v_traces_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1427_; 
v_stxStack_1406_ = lean_ctor_get(v_s_1403_, 0);
v_lhsPrec_1407_ = lean_ctor_get(v_s_1403_, 1);
v_pos_1408_ = lean_ctor_get(v_s_1403_, 2);
v_cache_1409_ = lean_ctor_get(v_s_1403_, 3);
v_errorMsg_1410_ = lean_ctor_get(v_s_1403_, 4);
v_recoveredErrors_1411_ = lean_ctor_get(v_s_1403_, 5);
v_traces_1412_ = lean_ctor_get(v_s_1403_, 6);
v_isSharedCheck_1427_ = !lean_is_exclusive(v_s_1403_);
if (v_isSharedCheck_1427_ == 0)
{
v___x_1414_ = v_s_1403_;
v_isShared_1415_ = v_isSharedCheck_1427_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_traces_1412_);
lean_inc(v_recoveredErrors_1411_);
lean_inc(v_errorMsg_1410_);
lean_inc(v_cache_1409_);
lean_inc(v_pos_1408_);
lean_inc(v_lhsPrec_1407_);
lean_inc(v_stxStack_1406_);
lean_dec(v_s_1403_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1427_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v_newNode_1421_; lean_object* v_stack_1422_; lean_object* v_stack_1423_; lean_object* v___x_1425_; 
v___x_1416_ = lean_box(2);
v___x_1417_ = lean_unsigned_to_nat(1u);
v___x_1418_ = lean_nat_sub(v_iniStackSz_1405_, v___x_1417_);
v___x_1419_ = l_Lean_Parser_SyntaxStack_size(v_stxStack_1406_);
v___x_1420_ = l_Lean_Parser_SyntaxStack_extract(v_stxStack_1406_, v___x_1418_, v___x_1419_);
lean_dec(v___x_1419_);
v_newNode_1421_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_newNode_1421_, 0, v___x_1416_);
lean_ctor_set(v_newNode_1421_, 1, v_k_1404_);
lean_ctor_set(v_newNode_1421_, 2, v___x_1420_);
v_stack_1422_ = l_Lean_Parser_SyntaxStack_shrink(v_stxStack_1406_, v___x_1418_);
lean_dec(v___x_1418_);
v_stack_1423_ = l_Lean_Parser_SyntaxStack_push(v_stack_1422_, v_newNode_1421_);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 0, v_stack_1423_);
v___x_1425_ = v___x_1414_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v_stack_1423_);
lean_ctor_set(v_reuseFailAlloc_1426_, 1, v_lhsPrec_1407_);
lean_ctor_set(v_reuseFailAlloc_1426_, 2, v_pos_1408_);
lean_ctor_set(v_reuseFailAlloc_1426_, 3, v_cache_1409_);
lean_ctor_set(v_reuseFailAlloc_1426_, 4, v_errorMsg_1410_);
lean_ctor_set(v_reuseFailAlloc_1426_, 5, v_recoveredErrors_1411_);
lean_ctor_set(v_reuseFailAlloc_1426_, 6, v_traces_1412_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkTrailingNode___boxed(lean_object* v_s_1428_, lean_object* v_k_1429_, lean_object* v_iniStackSz_1430_){
_start:
{
lean_object* v_res_1431_; 
v_res_1431_ = l_Lean_Parser_ParserState_mkTrailingNode(v_s_1428_, v_k_1429_, v_iniStackSz_1430_);
lean_dec(v_iniStackSz_1430_);
return v_res_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_allErrors(lean_object* v_s_1434_){
_start:
{
lean_object* v_errorMsg_1435_; 
v_errorMsg_1435_ = lean_ctor_get(v_s_1434_, 4);
if (lean_obj_tag(v_errorMsg_1435_) == 0)
{
lean_object* v_recoveredErrors_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v_recoveredErrors_1436_ = lean_ctor_get(v_s_1434_, 5);
lean_inc_ref(v_recoveredErrors_1436_);
lean_dec_ref(v_s_1434_);
v___x_1437_ = ((lean_object*)(l_Lean_Parser_ParserState_allErrors___closed__0));
v___x_1438_ = l_Array_append___redArg(v_recoveredErrors_1436_, v___x_1437_);
return v___x_1438_;
}
else
{
lean_object* v_stxStack_1439_; lean_object* v_pos_1440_; lean_object* v_recoveredErrors_1441_; lean_object* v_val_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
lean_inc_ref(v_errorMsg_1435_);
v_stxStack_1439_ = lean_ctor_get(v_s_1434_, 0);
lean_inc_ref(v_stxStack_1439_);
v_pos_1440_ = lean_ctor_get(v_s_1434_, 2);
lean_inc(v_pos_1440_);
v_recoveredErrors_1441_ = lean_ctor_get(v_s_1434_, 5);
lean_inc_ref(v_recoveredErrors_1441_);
lean_dec_ref(v_s_1434_);
v_val_1442_ = lean_ctor_get(v_errorMsg_1435_, 0);
lean_inc(v_val_1442_);
lean_dec_ref_known(v_errorMsg_1435_, 1);
v___x_1443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1443_, 0, v_stxStack_1439_);
lean_ctor_set(v___x_1443_, 1, v_val_1442_);
v___x_1444_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1444_, 0, v_pos_1440_);
lean_ctor_set(v___x_1444_, 1, v___x_1443_);
v___x_1445_ = lean_unsigned_to_nat(1u);
v___x_1446_ = lean_mk_empty_array_with_capacity(v___x_1445_);
v___x_1447_ = lean_array_push(v___x_1446_, v___x_1444_);
v___x_1448_ = l_Array_append___redArg(v_recoveredErrors_1441_, v___x_1447_);
lean_dec_ref(v___x_1447_);
return v___x_1448_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_setError(lean_object* v_s_1449_, lean_object* v_e_1450_){
_start:
{
lean_object* v_stxStack_1451_; lean_object* v_lhsPrec_1452_; lean_object* v_pos_1453_; lean_object* v_cache_1454_; lean_object* v_recoveredErrors_1455_; lean_object* v_traces_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1472_; 
v_stxStack_1451_ = lean_ctor_get(v_s_1449_, 0);
v_lhsPrec_1452_ = lean_ctor_get(v_s_1449_, 1);
v_pos_1453_ = lean_ctor_get(v_s_1449_, 2);
v_cache_1454_ = lean_ctor_get(v_s_1449_, 3);
v_recoveredErrors_1455_ = lean_ctor_get(v_s_1449_, 5);
v_traces_1456_ = lean_ctor_get(v_s_1449_, 6);
v_isSharedCheck_1472_ = !lean_is_exclusive(v_s_1449_);
if (v_isSharedCheck_1472_ == 0)
{
lean_object* v_unused_1473_; 
v_unused_1473_ = lean_ctor_get(v_s_1449_, 4);
lean_dec(v_unused_1473_);
v___x_1458_ = v_s_1449_;
v_isShared_1459_ = v_isSharedCheck_1472_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_traces_1456_);
lean_inc(v_recoveredErrors_1455_);
lean_inc(v_cache_1454_);
lean_inc(v_pos_1453_);
lean_inc(v_lhsPrec_1452_);
lean_inc(v_stxStack_1451_);
lean_dec(v_s_1449_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1472_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; uint8_t v___x_1463_; 
lean_inc_ref(v_e_1450_);
v___x_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1460_, 0, v_e_1450_);
v___x_1461_ = lean_array_get_size(v_traces_1456_);
v___x_1462_ = lean_unsigned_to_nat(0u);
v___x_1463_ = lean_nat_dec_eq(v___x_1461_, v___x_1462_);
if (v___x_1463_ == 0)
{
lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1467_; 
lean_inc(v_pos_1453_);
v___x_1464_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1464_, 0, v_e_1450_);
lean_ctor_set(v___x_1464_, 1, v_pos_1453_);
v___x_1465_ = lean_array_push(v_traces_1456_, v___x_1464_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 6, v___x_1465_);
lean_ctor_set(v___x_1458_, 4, v___x_1460_);
v___x_1467_ = v___x_1458_;
goto v_reusejp_1466_;
}
else
{
lean_object* v_reuseFailAlloc_1468_; 
v_reuseFailAlloc_1468_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1468_, 0, v_stxStack_1451_);
lean_ctor_set(v_reuseFailAlloc_1468_, 1, v_lhsPrec_1452_);
lean_ctor_set(v_reuseFailAlloc_1468_, 2, v_pos_1453_);
lean_ctor_set(v_reuseFailAlloc_1468_, 3, v_cache_1454_);
lean_ctor_set(v_reuseFailAlloc_1468_, 4, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1468_, 5, v_recoveredErrors_1455_);
lean_ctor_set(v_reuseFailAlloc_1468_, 6, v___x_1465_);
v___x_1467_ = v_reuseFailAlloc_1468_;
goto v_reusejp_1466_;
}
v_reusejp_1466_:
{
return v___x_1467_;
}
}
else
{
lean_object* v___x_1470_; 
lean_dec_ref(v_e_1450_);
if (v_isShared_1459_ == 0)
{
lean_ctor_set(v___x_1458_, 4, v___x_1460_);
v___x_1470_ = v___x_1458_;
goto v_reusejp_1469_;
}
else
{
lean_object* v_reuseFailAlloc_1471_; 
v_reuseFailAlloc_1471_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1471_, 0, v_stxStack_1451_);
lean_ctor_set(v_reuseFailAlloc_1471_, 1, v_lhsPrec_1452_);
lean_ctor_set(v_reuseFailAlloc_1471_, 2, v_pos_1453_);
lean_ctor_set(v_reuseFailAlloc_1471_, 3, v_cache_1454_);
lean_ctor_set(v_reuseFailAlloc_1471_, 4, v___x_1460_);
lean_ctor_set(v_reuseFailAlloc_1471_, 5, v_recoveredErrors_1455_);
lean_ctor_set(v_reuseFailAlloc_1471_, 6, v_traces_1456_);
v___x_1470_ = v_reuseFailAlloc_1471_;
goto v_reusejp_1469_;
}
v_reusejp_1469_:
{
return v___x_1470_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkError(lean_object* v_s_1474_, lean_object* v_msg_1475_){
_start:
{
lean_object* v_stxStack_1476_; lean_object* v_lhsPrec_1477_; lean_object* v_pos_1478_; lean_object* v_cache_1479_; lean_object* v_recoveredErrors_1480_; lean_object* v_traces_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1506_; 
v_stxStack_1476_ = lean_ctor_get(v_s_1474_, 0);
v_lhsPrec_1477_ = lean_ctor_get(v_s_1474_, 1);
v_pos_1478_ = lean_ctor_get(v_s_1474_, 2);
v_cache_1479_ = lean_ctor_get(v_s_1474_, 3);
v_recoveredErrors_1480_ = lean_ctor_get(v_s_1474_, 5);
v_traces_1481_ = lean_ctor_get(v_s_1474_, 6);
v_isSharedCheck_1506_ = !lean_is_exclusive(v_s_1474_);
if (v_isSharedCheck_1506_ == 0)
{
lean_object* v_unused_1507_; 
v_unused_1507_ = lean_ctor_get(v_s_1474_, 4);
lean_dec(v_unused_1507_);
v___x_1483_ = v_s_1474_;
v_isShared_1484_ = v_isSharedCheck_1506_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_traces_1481_);
lean_inc(v_recoveredErrors_1480_);
lean_inc(v_cache_1479_);
lean_inc(v_pos_1478_);
lean_inc(v_lhsPrec_1477_);
lean_inc(v_stxStack_1476_);
lean_dec(v_s_1474_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1506_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1485_; lean_object* v___y_1487_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; uint8_t v___x_1497_; 
v___x_1485_ = lean_box(0);
v___x_1490_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1491_ = lean_box(0);
v___x_1492_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1492_, 0, v_msg_1475_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1485_);
lean_ctor_set(v___x_1493_, 1, v___x_1490_);
lean_ctor_set(v___x_1493_, 2, v___x_1492_);
lean_inc_ref(v___x_1493_);
v___x_1494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1494_, 0, v___x_1493_);
v___x_1495_ = lean_array_get_size(v_traces_1481_);
v___x_1496_ = lean_unsigned_to_nat(0u);
v___x_1497_ = lean_nat_dec_eq(v___x_1495_, v___x_1496_);
if (v___x_1497_ == 0)
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1501_; 
lean_inc(v_pos_1478_);
v___x_1498_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1493_);
lean_ctor_set(v___x_1498_, 1, v_pos_1478_);
v___x_1499_ = lean_array_push(v_traces_1481_, v___x_1498_);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 6, v___x_1499_);
lean_ctor_set(v___x_1483_, 4, v___x_1494_);
v___x_1501_ = v___x_1483_;
goto v_reusejp_1500_;
}
else
{
lean_object* v_reuseFailAlloc_1502_; 
v_reuseFailAlloc_1502_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1502_, 0, v_stxStack_1476_);
lean_ctor_set(v_reuseFailAlloc_1502_, 1, v_lhsPrec_1477_);
lean_ctor_set(v_reuseFailAlloc_1502_, 2, v_pos_1478_);
lean_ctor_set(v_reuseFailAlloc_1502_, 3, v_cache_1479_);
lean_ctor_set(v_reuseFailAlloc_1502_, 4, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1502_, 5, v_recoveredErrors_1480_);
lean_ctor_set(v_reuseFailAlloc_1502_, 6, v___x_1499_);
v___x_1501_ = v_reuseFailAlloc_1502_;
goto v_reusejp_1500_;
}
v_reusejp_1500_:
{
v___y_1487_ = v___x_1501_;
goto v___jp_1486_;
}
}
else
{
lean_object* v___x_1504_; 
lean_dec_ref_known(v___x_1493_, 3);
if (v_isShared_1484_ == 0)
{
lean_ctor_set(v___x_1483_, 4, v___x_1494_);
v___x_1504_ = v___x_1483_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1505_; 
v_reuseFailAlloc_1505_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1505_, 0, v_stxStack_1476_);
lean_ctor_set(v_reuseFailAlloc_1505_, 1, v_lhsPrec_1477_);
lean_ctor_set(v_reuseFailAlloc_1505_, 2, v_pos_1478_);
lean_ctor_set(v_reuseFailAlloc_1505_, 3, v_cache_1479_);
lean_ctor_set(v_reuseFailAlloc_1505_, 4, v___x_1494_);
lean_ctor_set(v_reuseFailAlloc_1505_, 5, v_recoveredErrors_1480_);
lean_ctor_set(v_reuseFailAlloc_1505_, 6, v_traces_1481_);
v___x_1504_ = v_reuseFailAlloc_1505_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
v___y_1487_ = v___x_1504_;
goto v___jp_1486_;
}
}
v___jp_1486_:
{
uint8_t v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = 0;
v___x_1489_ = l_Lean_Parser_ParserState_pushSyntax(v___y_1487_, v___x_1485_, v___x_1488_);
return v___x_1489_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object* v_s_1508_, lean_object* v_msg_1509_, lean_object* v_expected_1510_, uint8_t v_pushMissing_1511_){
_start:
{
lean_object* v_stxStack_1512_; lean_object* v_lhsPrec_1513_; lean_object* v_pos_1514_; lean_object* v_cache_1515_; lean_object* v_recoveredErrors_1516_; lean_object* v_traces_1517_; lean_object* v___x_1519_; uint8_t v_isShared_1520_; uint8_t v_isSharedCheck_1539_; 
v_stxStack_1512_ = lean_ctor_get(v_s_1508_, 0);
v_lhsPrec_1513_ = lean_ctor_get(v_s_1508_, 1);
v_pos_1514_ = lean_ctor_get(v_s_1508_, 2);
v_cache_1515_ = lean_ctor_get(v_s_1508_, 3);
v_recoveredErrors_1516_ = lean_ctor_get(v_s_1508_, 5);
v_traces_1517_ = lean_ctor_get(v_s_1508_, 6);
v_isSharedCheck_1539_ = !lean_is_exclusive(v_s_1508_);
if (v_isSharedCheck_1539_ == 0)
{
lean_object* v_unused_1540_; 
v_unused_1540_ = lean_ctor_get(v_s_1508_, 4);
lean_dec(v_unused_1540_);
v___x_1519_ = v_s_1508_;
v_isShared_1520_ = v_isSharedCheck_1539_;
goto v_resetjp_1518_;
}
else
{
lean_inc(v_traces_1517_);
lean_inc(v_recoveredErrors_1516_);
lean_inc(v_cache_1515_);
lean_inc(v_pos_1514_);
lean_inc(v_lhsPrec_1513_);
lean_inc(v_stxStack_1512_);
lean_dec(v_s_1508_);
v___x_1519_ = lean_box(0);
v_isShared_1520_ = v_isSharedCheck_1539_;
goto v_resetjp_1518_;
}
v_resetjp_1518_:
{
lean_object* v___x_1521_; lean_object* v___y_1523_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; uint8_t v___x_1530_; 
v___x_1521_ = lean_box(0);
v___x_1526_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1526_, 0, v___x_1521_);
lean_ctor_set(v___x_1526_, 1, v_msg_1509_);
lean_ctor_set(v___x_1526_, 2, v_expected_1510_);
lean_inc_ref(v___x_1526_);
v___x_1527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1527_, 0, v___x_1526_);
v___x_1528_ = lean_array_get_size(v_traces_1517_);
v___x_1529_ = lean_unsigned_to_nat(0u);
v___x_1530_ = lean_nat_dec_eq(v___x_1528_, v___x_1529_);
if (v___x_1530_ == 0)
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1534_; 
lean_inc(v_pos_1514_);
v___x_1531_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1531_, 0, v___x_1526_);
lean_ctor_set(v___x_1531_, 1, v_pos_1514_);
v___x_1532_ = lean_array_push(v_traces_1517_, v___x_1531_);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 6, v___x_1532_);
lean_ctor_set(v___x_1519_, 4, v___x_1527_);
v___x_1534_ = v___x_1519_;
goto v_reusejp_1533_;
}
else
{
lean_object* v_reuseFailAlloc_1535_; 
v_reuseFailAlloc_1535_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1535_, 0, v_stxStack_1512_);
lean_ctor_set(v_reuseFailAlloc_1535_, 1, v_lhsPrec_1513_);
lean_ctor_set(v_reuseFailAlloc_1535_, 2, v_pos_1514_);
lean_ctor_set(v_reuseFailAlloc_1535_, 3, v_cache_1515_);
lean_ctor_set(v_reuseFailAlloc_1535_, 4, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1535_, 5, v_recoveredErrors_1516_);
lean_ctor_set(v_reuseFailAlloc_1535_, 6, v___x_1532_);
v___x_1534_ = v_reuseFailAlloc_1535_;
goto v_reusejp_1533_;
}
v_reusejp_1533_:
{
v___y_1523_ = v___x_1534_;
goto v___jp_1522_;
}
}
else
{
lean_object* v___x_1537_; 
lean_dec_ref_known(v___x_1526_, 3);
if (v_isShared_1520_ == 0)
{
lean_ctor_set(v___x_1519_, 4, v___x_1527_);
v___x_1537_ = v___x_1519_;
goto v_reusejp_1536_;
}
else
{
lean_object* v_reuseFailAlloc_1538_; 
v_reuseFailAlloc_1538_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1538_, 0, v_stxStack_1512_);
lean_ctor_set(v_reuseFailAlloc_1538_, 1, v_lhsPrec_1513_);
lean_ctor_set(v_reuseFailAlloc_1538_, 2, v_pos_1514_);
lean_ctor_set(v_reuseFailAlloc_1538_, 3, v_cache_1515_);
lean_ctor_set(v_reuseFailAlloc_1538_, 4, v___x_1527_);
lean_ctor_set(v_reuseFailAlloc_1538_, 5, v_recoveredErrors_1516_);
lean_ctor_set(v_reuseFailAlloc_1538_, 6, v_traces_1517_);
v___x_1537_ = v_reuseFailAlloc_1538_;
goto v_reusejp_1536_;
}
v_reusejp_1536_:
{
v___y_1523_ = v___x_1537_;
goto v___jp_1522_;
}
}
v___jp_1522_:
{
if (v_pushMissing_1511_ == 0)
{
return v___y_1523_;
}
else
{
uint8_t v___x_1524_; lean_object* v___x_1525_; 
v___x_1524_ = 0;
v___x_1525_ = l_Lean_Parser_ParserState_pushSyntax(v___y_1523_, v___x_1521_, v___x_1524_);
return v___x_1525_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedError___boxed(lean_object* v_s_1541_, lean_object* v_msg_1542_, lean_object* v_expected_1543_, lean_object* v_pushMissing_1544_){
_start:
{
uint8_t v_pushMissing_boxed_1545_; lean_object* v_res_1546_; 
v_pushMissing_boxed_1545_ = lean_unbox(v_pushMissing_1544_);
v_res_1546_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1541_, v_msg_1542_, v_expected_1543_, v_pushMissing_boxed_1545_);
return v_res_1546_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object* v_s_1548_, lean_object* v_expected_1549_){
_start:
{
lean_object* v___x_1550_; uint8_t v___x_1551_; lean_object* v___x_1552_; 
v___x_1550_ = ((lean_object*)(l_Lean_Parser_ParserState_mkEOIError___closed__0));
v___x_1551_ = 1;
v___x_1552_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1548_, v___x_1550_, v_expected_1549_, v___x_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt(lean_object* v_s_1553_, lean_object* v_ex_1554_, lean_object* v_pos_1555_, lean_object* v_initStackSz_x3f_1556_){
_start:
{
lean_object* v___y_1558_; lean_object* v___y_1559_; lean_object* v_s_1563_; lean_object* v_s_1590_; 
v_s_1590_ = l_Lean_Parser_ParserState_setPos(v_s_1553_, v_pos_1555_);
if (lean_obj_tag(v_initStackSz_x3f_1556_) == 1)
{
lean_object* v_val_1591_; lean_object* v_s_1592_; 
v_val_1591_ = lean_ctor_get(v_initStackSz_x3f_1556_, 0);
v_s_1592_ = l_Lean_Parser_ParserState_shrinkStack(v_s_1590_, v_val_1591_);
v_s_1563_ = v_s_1592_;
goto v___jp_1562_;
}
else
{
v_s_1563_ = v_s_1590_;
goto v___jp_1562_;
}
v___jp_1557_:
{
uint8_t v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = 0;
lean_inc(v___y_1558_);
v___x_1561_ = l_Lean_Parser_ParserState_pushSyntax(v___y_1559_, v___y_1558_, v___x_1560_);
return v___x_1561_;
}
v___jp_1562_:
{
lean_object* v_stxStack_1564_; lean_object* v_lhsPrec_1565_; lean_object* v_pos_1566_; lean_object* v_cache_1567_; lean_object* v_recoveredErrors_1568_; lean_object* v_traces_1569_; lean_object* v___x_1571_; uint8_t v_isShared_1572_; uint8_t v_isSharedCheck_1588_; 
v_stxStack_1564_ = lean_ctor_get(v_s_1563_, 0);
v_lhsPrec_1565_ = lean_ctor_get(v_s_1563_, 1);
v_pos_1566_ = lean_ctor_get(v_s_1563_, 2);
v_cache_1567_ = lean_ctor_get(v_s_1563_, 3);
v_recoveredErrors_1568_ = lean_ctor_get(v_s_1563_, 5);
v_traces_1569_ = lean_ctor_get(v_s_1563_, 6);
v_isSharedCheck_1588_ = !lean_is_exclusive(v_s_1563_);
if (v_isSharedCheck_1588_ == 0)
{
lean_object* v_unused_1589_; 
v_unused_1589_ = lean_ctor_get(v_s_1563_, 4);
lean_dec(v_unused_1589_);
v___x_1571_ = v_s_1563_;
v_isShared_1572_ = v_isSharedCheck_1588_;
goto v_resetjp_1570_;
}
else
{
lean_inc(v_traces_1569_);
lean_inc(v_recoveredErrors_1568_);
lean_inc(v_cache_1567_);
lean_inc(v_pos_1566_);
lean_inc(v_lhsPrec_1565_);
lean_inc(v_stxStack_1564_);
lean_dec(v_s_1563_);
v___x_1571_ = lean_box(0);
v_isShared_1572_ = v_isSharedCheck_1588_;
goto v_resetjp_1570_;
}
v_resetjp_1570_:
{
lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; uint8_t v___x_1579_; 
v___x_1573_ = lean_box(0);
v___x_1574_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1575_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
lean_ctor_set(v___x_1575_, 1, v___x_1574_);
lean_ctor_set(v___x_1575_, 2, v_ex_1554_);
lean_inc_ref(v___x_1575_);
v___x_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1576_, 0, v___x_1575_);
v___x_1577_ = lean_array_get_size(v_traces_1569_);
v___x_1578_ = lean_unsigned_to_nat(0u);
v___x_1579_ = lean_nat_dec_eq(v___x_1577_, v___x_1578_);
if (v___x_1579_ == 0)
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
lean_inc(v_pos_1566_);
v___x_1580_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1575_);
lean_ctor_set(v___x_1580_, 1, v_pos_1566_);
v___x_1581_ = lean_array_push(v_traces_1569_, v___x_1580_);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 6, v___x_1581_);
lean_ctor_set(v___x_1571_, 4, v___x_1576_);
v___x_1583_ = v___x_1571_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1584_; 
v_reuseFailAlloc_1584_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1584_, 0, v_stxStack_1564_);
lean_ctor_set(v_reuseFailAlloc_1584_, 1, v_lhsPrec_1565_);
lean_ctor_set(v_reuseFailAlloc_1584_, 2, v_pos_1566_);
lean_ctor_set(v_reuseFailAlloc_1584_, 3, v_cache_1567_);
lean_ctor_set(v_reuseFailAlloc_1584_, 4, v___x_1576_);
lean_ctor_set(v_reuseFailAlloc_1584_, 5, v_recoveredErrors_1568_);
lean_ctor_set(v_reuseFailAlloc_1584_, 6, v___x_1581_);
v___x_1583_ = v_reuseFailAlloc_1584_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v___y_1558_ = v___x_1573_;
v___y_1559_ = v___x_1583_;
goto v___jp_1557_;
}
}
else
{
lean_object* v___x_1586_; 
lean_dec_ref_known(v___x_1575_, 3);
if (v_isShared_1572_ == 0)
{
lean_ctor_set(v___x_1571_, 4, v___x_1576_);
v___x_1586_ = v___x_1571_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1587_; 
v_reuseFailAlloc_1587_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1587_, 0, v_stxStack_1564_);
lean_ctor_set(v_reuseFailAlloc_1587_, 1, v_lhsPrec_1565_);
lean_ctor_set(v_reuseFailAlloc_1587_, 2, v_pos_1566_);
lean_ctor_set(v_reuseFailAlloc_1587_, 3, v_cache_1567_);
lean_ctor_set(v_reuseFailAlloc_1587_, 4, v___x_1576_);
lean_ctor_set(v_reuseFailAlloc_1587_, 5, v_recoveredErrors_1568_);
lean_ctor_set(v_reuseFailAlloc_1587_, 6, v_traces_1569_);
v___x_1586_ = v_reuseFailAlloc_1587_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
v___y_1558_ = v___x_1573_;
v___y_1559_ = v___x_1586_;
goto v___jp_1557_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorsAt___boxed(lean_object* v_s_1593_, lean_object* v_ex_1594_, lean_object* v_pos_1595_, lean_object* v_initStackSz_x3f_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l_Lean_Parser_ParserState_mkErrorsAt(v_s_1593_, v_ex_1594_, v_pos_1595_, v_initStackSz_x3f_1596_);
lean_dec(v_initStackSz_x3f_1596_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object* v_s_1598_, lean_object* v_msg_1599_, lean_object* v_pos_1600_, lean_object* v_initStackSz_x3f_1601_){
_start:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = lean_box(0);
v___x_1603_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1603_, 0, v_msg_1599_);
lean_ctor_set(v___x_1603_, 1, v___x_1602_);
v___x_1604_ = l_Lean_Parser_ParserState_mkErrorsAt(v_s_1598_, v___x_1603_, v_pos_1600_, v_initStackSz_x3f_1601_);
return v___x_1604_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkErrorAt___boxed(lean_object* v_s_1605_, lean_object* v_msg_1606_, lean_object* v_pos_1607_, lean_object* v_initStackSz_x3f_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_1605_, v_msg_1606_, v_pos_1607_, v_initStackSz_x3f_1608_);
lean_dec(v_initStackSz_x3f_1608_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(lean_object* v_msg_1610_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_unsigned_to_nat(0u);
v___x_1612_ = lean_panic_fn_borrowed(v___x_1611_, v_msg_1610_);
return v___x_1612_;
}
}
static lean_object* _init_l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3(void){
_start:
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v___x_1616_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__2));
v___x_1617_ = lean_unsigned_to_nat(14u);
v___x_1618_ = lean_unsigned_to_nat(22u);
v___x_1619_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__1));
v___x_1620_ = ((lean_object*)(l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__0));
v___x_1621_ = l_mkPanicMessageWithDecl(v___x_1620_, v___x_1619_, v___x_1618_, v___x_1617_, v___x_1616_);
return v___x_1621_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(lean_object* v_s_1622_, lean_object* v_ex_1623_, lean_object* v_iniPos_1624_){
_start:
{
lean_object* v___y_1626_; lean_object* v_stxStack_1631_; lean_object* v_tk_1632_; lean_object* v___y_1634_; lean_object* v___x_1661_; uint8_t v___x_1662_; 
v_stxStack_1631_ = lean_ctor_get(v_s_1622_, 0);
v_tk_1632_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1631_);
v___x_1661_ = lean_unsigned_to_nat(0u);
v___x_1662_ = lean_nat_dec_lt(v___x_1661_, v_iniPos_1624_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; 
lean_dec(v_iniPos_1624_);
v___x_1663_ = l_Lean_Syntax_getPos_x3f(v_tk_1632_, v___x_1662_);
if (lean_obj_tag(v___x_1663_) == 0)
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = lean_obj_once(&l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3, &l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3_once, _init_l_Lean_Parser_ParserState_mkUnexpectedTokenErrors___closed__3);
v___x_1665_ = l_panic___at___00Lean_Parser_ParserState_mkUnexpectedTokenErrors_spec__0(v___x_1664_);
v___y_1634_ = v___x_1665_;
goto v___jp_1633_;
}
else
{
lean_object* v_val_1666_; 
v_val_1666_ = lean_ctor_get(v___x_1663_, 0);
lean_inc(v_val_1666_);
lean_dec_ref_known(v___x_1663_, 1);
v___y_1634_ = v_val_1666_;
goto v___jp_1633_;
}
}
else
{
v___y_1634_ = v_iniPos_1624_;
goto v___jp_1633_;
}
v___jp_1625_:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; uint8_t v___x_1629_; lean_object* v___x_1630_; 
v___x_1627_ = l_Lean_Parser_ParserState_popSyntax(v___y_1626_);
v___x_1628_ = lean_box(0);
v___x_1629_ = 0;
v___x_1630_ = l_Lean_Parser_ParserState_pushSyntax(v___x_1627_, v___x_1628_, v___x_1629_);
return v___x_1630_;
}
v___jp_1633_:
{
lean_object* v_s_1635_; lean_object* v_stxStack_1636_; lean_object* v_lhsPrec_1637_; lean_object* v_pos_1638_; lean_object* v_cache_1639_; lean_object* v_recoveredErrors_1640_; lean_object* v_traces_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1659_; 
v_s_1635_ = l_Lean_Parser_ParserState_setPos(v_s_1622_, v___y_1634_);
v_stxStack_1636_ = lean_ctor_get(v_s_1635_, 0);
v_lhsPrec_1637_ = lean_ctor_get(v_s_1635_, 1);
v_pos_1638_ = lean_ctor_get(v_s_1635_, 2);
v_cache_1639_ = lean_ctor_get(v_s_1635_, 3);
v_recoveredErrors_1640_ = lean_ctor_get(v_s_1635_, 5);
v_traces_1641_ = lean_ctor_get(v_s_1635_, 6);
v_isSharedCheck_1659_ = !lean_is_exclusive(v_s_1635_);
if (v_isSharedCheck_1659_ == 0)
{
lean_object* v_unused_1660_; 
v_unused_1660_ = lean_ctor_get(v_s_1635_, 4);
lean_dec(v_unused_1660_);
v___x_1643_ = v_s_1635_;
v_isShared_1644_ = v_isSharedCheck_1659_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_traces_1641_);
lean_inc(v_recoveredErrors_1640_);
lean_inc(v_cache_1639_);
lean_inc(v_pos_1638_);
lean_inc(v_lhsPrec_1637_);
lean_inc(v_stxStack_1636_);
lean_dec(v_s_1635_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1659_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; uint8_t v___x_1650_; 
v___x_1645_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1646_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1646_, 0, v_tk_1632_);
lean_ctor_set(v___x_1646_, 1, v___x_1645_);
lean_ctor_set(v___x_1646_, 2, v_ex_1623_);
lean_inc_ref(v___x_1646_);
v___x_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
v___x_1648_ = lean_array_get_size(v_traces_1641_);
v___x_1649_ = lean_unsigned_to_nat(0u);
v___x_1650_ = lean_nat_dec_eq(v___x_1648_, v___x_1649_);
if (v___x_1650_ == 0)
{
lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1654_; 
lean_inc(v_pos_1638_);
v___x_1651_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1646_);
lean_ctor_set(v___x_1651_, 1, v_pos_1638_);
v___x_1652_ = lean_array_push(v_traces_1641_, v___x_1651_);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 6, v___x_1652_);
lean_ctor_set(v___x_1643_, 4, v___x_1647_);
v___x_1654_ = v___x_1643_;
goto v_reusejp_1653_;
}
else
{
lean_object* v_reuseFailAlloc_1655_; 
v_reuseFailAlloc_1655_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1655_, 0, v_stxStack_1636_);
lean_ctor_set(v_reuseFailAlloc_1655_, 1, v_lhsPrec_1637_);
lean_ctor_set(v_reuseFailAlloc_1655_, 2, v_pos_1638_);
lean_ctor_set(v_reuseFailAlloc_1655_, 3, v_cache_1639_);
lean_ctor_set(v_reuseFailAlloc_1655_, 4, v___x_1647_);
lean_ctor_set(v_reuseFailAlloc_1655_, 5, v_recoveredErrors_1640_);
lean_ctor_set(v_reuseFailAlloc_1655_, 6, v___x_1652_);
v___x_1654_ = v_reuseFailAlloc_1655_;
goto v_reusejp_1653_;
}
v_reusejp_1653_:
{
v___y_1626_ = v___x_1654_;
goto v___jp_1625_;
}
}
else
{
lean_object* v___x_1657_; 
lean_dec_ref_known(v___x_1646_, 3);
if (v_isShared_1644_ == 0)
{
lean_ctor_set(v___x_1643_, 4, v___x_1647_);
v___x_1657_ = v___x_1643_;
goto v_reusejp_1656_;
}
else
{
lean_object* v_reuseFailAlloc_1658_; 
v_reuseFailAlloc_1658_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_1658_, 0, v_stxStack_1636_);
lean_ctor_set(v_reuseFailAlloc_1658_, 1, v_lhsPrec_1637_);
lean_ctor_set(v_reuseFailAlloc_1658_, 2, v_pos_1638_);
lean_ctor_set(v_reuseFailAlloc_1658_, 3, v_cache_1639_);
lean_ctor_set(v_reuseFailAlloc_1658_, 4, v___x_1647_);
lean_ctor_set(v_reuseFailAlloc_1658_, 5, v_recoveredErrors_1640_);
lean_ctor_set(v_reuseFailAlloc_1658_, 6, v_traces_1641_);
v___x_1657_ = v_reuseFailAlloc_1658_;
goto v_reusejp_1656_;
}
v_reusejp_1656_:
{
v___y_1626_ = v___x_1657_;
goto v___jp_1625_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedTokenError(lean_object* v_s_1667_, lean_object* v_msg_1668_, lean_object* v_iniPos_1669_){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1670_ = lean_box(0);
v___x_1671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1671_, 0, v_msg_1668_);
lean_ctor_set(v___x_1671_, 1, v___x_1670_);
v___x_1672_ = l_Lean_Parser_ParserState_mkUnexpectedTokenErrors(v_s_1667_, v___x_1671_, v_iniPos_1669_);
return v___x_1672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object* v_s_1673_, lean_object* v_msg_1674_, lean_object* v_pos_1675_){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; uint8_t v___x_1678_; lean_object* v___x_1679_; 
v___x_1676_ = l_Lean_Parser_ParserState_setPos(v_s_1673_, v_pos_1675_);
v___x_1677_ = lean_box(0);
v___x_1678_ = 1;
v___x_1679_ = l_Lean_Parser_ParserState_mkUnexpectedError(v___x_1676_, v_msg_1674_, v___x_1677_, v___x_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(lean_object* v_ctx_1681_, lean_object* v_as_1682_, size_t v_sz_1683_, size_t v_i_1684_, lean_object* v_b_1685_){
_start:
{
uint8_t v___x_1686_; 
v___x_1686_ = lean_usize_dec_lt(v_i_1684_, v_sz_1683_);
if (v___x_1686_ == 0)
{
lean_dec_ref(v_ctx_1681_);
return v_b_1685_;
}
else
{
lean_object* v_a_1687_; lean_object* v_snd_1688_; lean_object* v_fst_1689_; lean_object* v_snd_1690_; lean_object* v_errStr_1692_; lean_object* v_errStr_1703_; uint8_t v___x_1704_; 
v_a_1687_ = lean_array_uget_borrowed(v_as_1682_, v_i_1684_);
v_snd_1688_ = lean_ctor_get(v_a_1687_, 1);
v_fst_1689_ = lean_ctor_get(v_a_1687_, 0);
v_snd_1690_ = lean_ctor_get(v_snd_1688_, 1);
v_errStr_1703_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1704_ = lean_string_dec_eq(v_b_1685_, v_errStr_1703_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___closed__0));
v___x_1706_ = lean_string_append(v_b_1685_, v___x_1705_);
v_errStr_1692_ = v___x_1706_;
goto v___jp_1691_;
}
else
{
v_errStr_1692_ = v_b_1685_;
goto v___jp_1691_;
}
v___jp_1691_:
{
lean_object* v_fileName_1693_; lean_object* v_fileMap_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; size_t v___x_1700_; size_t v___x_1701_; 
v_fileName_1693_ = lean_ctor_get(v_ctx_1681_, 1);
v_fileMap_1694_ = lean_ctor_get(v_ctx_1681_, 2);
lean_inc_ref(v_fileMap_1694_);
v___x_1695_ = l_Lean_FileMap_toPosition(v_fileMap_1694_, v_fst_1689_);
lean_inc(v_snd_1690_);
v___x_1696_ = l_Lean_Parser_Error_toString(v_snd_1690_);
v___x_1697_ = lean_box(0);
lean_inc_ref(v_fileName_1693_);
v___x_1698_ = l_Lean_mkErrorStringWithPos(v_fileName_1693_, v___x_1695_, v___x_1696_, v___x_1697_, v___x_1697_, v___x_1697_);
lean_dec_ref(v___x_1696_);
v___x_1699_ = lean_string_append(v_errStr_1692_, v___x_1698_);
lean_dec_ref(v___x_1698_);
v___x_1700_ = ((size_t)1ULL);
v___x_1701_ = lean_usize_add(v_i_1684_, v___x_1700_);
v_i_1684_ = v___x_1701_;
v_b_1685_ = v___x_1699_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0___boxed(lean_object* v_ctx_1707_, lean_object* v_as_1708_, lean_object* v_sz_1709_, lean_object* v_i_1710_, lean_object* v_b_1711_){
_start:
{
size_t v_sz_boxed_1712_; size_t v_i_boxed_1713_; lean_object* v_res_1714_; 
v_sz_boxed_1712_ = lean_unbox_usize(v_sz_1709_);
lean_dec(v_sz_1709_);
v_i_boxed_1713_ = lean_unbox_usize(v_i_1710_);
lean_dec(v_i_1710_);
v_res_1714_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(v_ctx_1707_, v_as_1708_, v_sz_boxed_1712_, v_i_boxed_1713_, v_b_1711_);
lean_dec_ref(v_as_1708_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserState_toErrorMsg(lean_object* v_ctx_1715_, lean_object* v_s_1716_){
_start:
{
lean_object* v_errStr_1717_; lean_object* v___x_1718_; size_t v_sz_1719_; size_t v___x_1720_; lean_object* v___x_1721_; 
v_errStr_1717_ = ((lean_object*)(l_Lean_Parser_instInhabitedInputContext___closed__0));
v___x_1718_ = l_Lean_Parser_ParserState_allErrors(v_s_1716_);
v_sz_1719_ = lean_array_size(v___x_1718_);
v___x_1720_ = ((size_t)0ULL);
v___x_1721_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Parser_ParserState_toErrorMsg_spec__0(v_ctx_1715_, v___x_1718_, v_sz_1719_, v___x_1720_, v_errStr_1717_);
lean_dec_ref(v___x_1718_);
return v___x_1721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0(lean_object* v_x_1722_, lean_object* v_s_1723_){
_start:
{
lean_inc_ref(v_s_1723_);
return v_s_1723_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserFn___lam__0___boxed(lean_object* v_x_1724_, lean_object* v_s_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l_Lean_Parser_instInhabitedParserFn___lam__0(v_x_1724_, v_s_1725_);
lean_dec_ref(v_s_1725_);
lean_dec_ref(v_x_1724_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx(lean_object* v_x_1729_){
_start:
{
switch(lean_obj_tag(v_x_1729_))
{
case 0:
{
lean_object* v___x_1730_; 
v___x_1730_ = lean_unsigned_to_nat(0u);
return v___x_1730_;
}
case 1:
{
lean_object* v___x_1731_; 
v___x_1731_ = lean_unsigned_to_nat(1u);
return v___x_1731_;
}
case 2:
{
lean_object* v___x_1732_; 
v___x_1732_ = lean_unsigned_to_nat(2u);
return v___x_1732_;
}
default: 
{
lean_object* v___x_1733_; 
v___x_1733_ = lean_unsigned_to_nat(3u);
return v___x_1733_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorIdx___boxed(lean_object* v_x_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = l_Lean_Parser_FirstTokens_ctorIdx(v_x_1734_);
lean_dec(v_x_1734_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___redArg(lean_object* v_t_1736_, lean_object* v_k_1737_){
_start:
{
switch(lean_obj_tag(v_t_1736_))
{
case 2:
{
lean_object* v_a_1738_; lean_object* v___x_1739_; 
v_a_1738_ = lean_ctor_get(v_t_1736_, 0);
lean_inc(v_a_1738_);
lean_dec_ref_known(v_t_1736_, 1);
v___x_1739_ = lean_apply_1(v_k_1737_, v_a_1738_);
return v___x_1739_;
}
case 3:
{
lean_object* v_a_1740_; lean_object* v___x_1741_; 
v_a_1740_ = lean_ctor_get(v_t_1736_, 0);
lean_inc(v_a_1740_);
lean_dec_ref_known(v_t_1736_, 1);
v___x_1741_ = lean_apply_1(v_k_1737_, v_a_1740_);
return v___x_1741_;
}
default: 
{
lean_dec(v_t_1736_);
return v_k_1737_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim(lean_object* v_motive_1742_, lean_object* v_ctorIdx_1743_, lean_object* v_t_1744_, lean_object* v_h_1745_, lean_object* v_k_1746_){
_start:
{
lean_object* v___x_1747_; 
v___x_1747_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1744_, v_k_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_ctorElim___boxed(lean_object* v_motive_1748_, lean_object* v_ctorIdx_1749_, lean_object* v_t_1750_, lean_object* v_h_1751_, lean_object* v_k_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_Parser_FirstTokens_ctorElim(v_motive_1748_, v_ctorIdx_1749_, v_t_1750_, v_h_1751_, v_k_1752_);
lean_dec(v_ctorIdx_1749_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim___redArg(lean_object* v_t_1754_, lean_object* v_epsilon_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1754_, v_epsilon_1755_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_epsilon_elim(lean_object* v_motive_1757_, lean_object* v_t_1758_, lean_object* v_h_1759_, lean_object* v_epsilon_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1758_, v_epsilon_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim___redArg(lean_object* v_t_1762_, lean_object* v_unknown_1763_){
_start:
{
lean_object* v___x_1764_; 
v___x_1764_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1762_, v_unknown_1763_);
return v___x_1764_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_unknown_elim(lean_object* v_motive_1765_, lean_object* v_t_1766_, lean_object* v_h_1767_, lean_object* v_unknown_1768_){
_start:
{
lean_object* v___x_1769_; 
v___x_1769_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1766_, v_unknown_1768_);
return v___x_1769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim___redArg(lean_object* v_t_1770_, lean_object* v_tokens_1771_){
_start:
{
lean_object* v___x_1772_; 
v___x_1772_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1770_, v_tokens_1771_);
return v___x_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_tokens_elim(lean_object* v_motive_1773_, lean_object* v_t_1774_, lean_object* v_h_1775_, lean_object* v_tokens_1776_){
_start:
{
lean_object* v___x_1777_; 
v___x_1777_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1774_, v_tokens_1776_);
return v___x_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim___redArg(lean_object* v_t_1778_, lean_object* v_optTokens_1779_){
_start:
{
lean_object* v___x_1780_; 
v___x_1780_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1778_, v_optTokens_1779_);
return v___x_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_optTokens_elim(lean_object* v_motive_1781_, lean_object* v_t_1782_, lean_object* v_h_1783_, lean_object* v_optTokens_1784_){
_start:
{
lean_object* v___x_1785_; 
v___x_1785_ = l_Lean_Parser_FirstTokens_ctorElim___redArg(v_t_1782_, v_optTokens_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedFirstTokens_default(void){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_box(0);
return v___x_1786_;
}
}
static lean_object* _init_l_Lean_Parser_instInhabitedFirstTokens(void){
_start:
{
lean_object* v___x_1787_; 
v___x_1787_ = lean_box(0);
return v___x_1787_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_seq(lean_object* v_x_1788_, lean_object* v_x_1789_){
_start:
{
switch(lean_obj_tag(v_x_1788_))
{
case 0:
{
return v_x_1789_;
}
case 3:
{
switch(lean_obj_tag(v_x_1789_))
{
case 3:
{
lean_object* v_a_1790_; lean_object* v_a_1791_; lean_object* v___x_1793_; uint8_t v_isShared_1794_; uint8_t v_isSharedCheck_1799_; 
v_a_1790_ = lean_ctor_get(v_x_1788_, 0);
lean_inc(v_a_1790_);
lean_dec_ref_known(v_x_1788_, 1);
v_a_1791_ = lean_ctor_get(v_x_1789_, 0);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_x_1789_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1793_ = v_x_1789_;
v_isShared_1794_ = v_isSharedCheck_1799_;
goto v_resetjp_1792_;
}
else
{
lean_inc(v_a_1791_);
lean_dec(v_x_1789_);
v___x_1793_ = lean_box(0);
v_isShared_1794_ = v_isSharedCheck_1799_;
goto v_resetjp_1792_;
}
v_resetjp_1792_:
{
lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1795_ = l_List_appendTR___redArg(v_a_1790_, v_a_1791_);
if (v_isShared_1794_ == 0)
{
lean_ctor_set(v___x_1793_, 0, v___x_1795_);
v___x_1797_ = v___x_1793_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
case 2:
{
lean_object* v_a_1800_; lean_object* v_a_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1809_; 
v_a_1800_ = lean_ctor_get(v_x_1788_, 0);
lean_inc(v_a_1800_);
lean_dec_ref_known(v_x_1788_, 1);
v_a_1801_ = lean_ctor_get(v_x_1789_, 0);
v_isSharedCheck_1809_ = !lean_is_exclusive(v_x_1789_);
if (v_isSharedCheck_1809_ == 0)
{
v___x_1803_ = v_x_1789_;
v_isShared_1804_ = v_isSharedCheck_1809_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_a_1801_);
lean_dec(v_x_1789_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1809_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1807_; 
v___x_1805_ = l_List_appendTR___redArg(v_a_1800_, v_a_1801_);
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 0, v___x_1805_);
v___x_1807_ = v___x_1803_;
goto v_reusejp_1806_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v___x_1805_);
v___x_1807_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1806_;
}
v_reusejp_1806_:
{
return v___x_1807_;
}
}
}
case 1:
{
lean_dec_ref_known(v_x_1788_, 1);
return v_x_1789_;
}
default: 
{
lean_dec(v_x_1789_);
return v_x_1788_;
}
}
}
default: 
{
lean_dec(v_x_1789_);
return v_x_1788_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toOptional(lean_object* v_x_1810_){
_start:
{
if (lean_obj_tag(v_x_1810_) == 2)
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
v_a_1811_ = lean_ctor_get(v_x_1810_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v_x_1810_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v_x_1810_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v_x_1810_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
lean_ctor_set_tag(v___x_1813_, 3);
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
else
{
return v_x_1810_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_merge(lean_object* v_x_1819_, lean_object* v_x_1820_){
_start:
{
lean_object* v_s_u2081_1822_; lean_object* v_s_u2082_1823_; 
switch(lean_obj_tag(v_x_1819_))
{
case 0:
{
lean_object* v___x_1826_; 
v___x_1826_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1820_);
return v___x_1826_;
}
case 2:
{
switch(lean_obj_tag(v_x_1820_))
{
case 0:
{
lean_object* v___x_1827_; 
v___x_1827_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1819_);
return v___x_1827_;
}
case 2:
{
lean_object* v_a_1828_; lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1837_; 
v_a_1828_ = lean_ctor_get(v_x_1819_, 0);
lean_inc(v_a_1828_);
lean_dec_ref_known(v_x_1819_, 1);
v_a_1829_ = lean_ctor_get(v_x_1820_, 0);
v_isSharedCheck_1837_ = !lean_is_exclusive(v_x_1820_);
if (v_isSharedCheck_1837_ == 0)
{
v___x_1831_ = v_x_1820_;
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v_x_1820_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1837_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1833_ = l_List_appendTR___redArg(v_a_1828_, v_a_1829_);
if (v_isShared_1832_ == 0)
{
lean_ctor_set(v___x_1831_, 0, v___x_1833_);
v___x_1835_ = v___x_1831_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1836_; 
v_reuseFailAlloc_1836_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1836_, 0, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1836_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
return v___x_1835_;
}
}
}
case 3:
{
lean_object* v_a_1838_; lean_object* v_a_1839_; 
v_a_1838_ = lean_ctor_get(v_x_1819_, 0);
lean_inc(v_a_1838_);
lean_dec_ref_known(v_x_1819_, 1);
v_a_1839_ = lean_ctor_get(v_x_1820_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v_x_1820_, 1);
v_s_u2081_1822_ = v_a_1838_;
v_s_u2082_1823_ = v_a_1839_;
goto v___jp_1821_;
}
default: 
{
lean_object* v___x_1840_; 
lean_dec_ref_known(v_x_1819_, 1);
lean_dec(v_x_1820_);
v___x_1840_ = lean_box(1);
return v___x_1840_;
}
}
}
case 3:
{
switch(lean_obj_tag(v_x_1820_))
{
case 0:
{
lean_object* v___x_1841_; 
v___x_1841_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1819_);
return v___x_1841_;
}
case 3:
{
lean_object* v_a_1842_; lean_object* v_a_1843_; 
v_a_1842_ = lean_ctor_get(v_x_1819_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v_x_1819_, 1);
v_a_1843_ = lean_ctor_get(v_x_1820_, 0);
lean_inc(v_a_1843_);
lean_dec_ref_known(v_x_1820_, 1);
v_s_u2081_1822_ = v_a_1842_;
v_s_u2082_1823_ = v_a_1843_;
goto v___jp_1821_;
}
case 2:
{
lean_object* v_a_1844_; lean_object* v_a_1845_; 
v_a_1844_ = lean_ctor_get(v_x_1819_, 0);
lean_inc(v_a_1844_);
lean_dec_ref_known(v_x_1819_, 1);
v_a_1845_ = lean_ctor_get(v_x_1820_, 0);
lean_inc(v_a_1845_);
lean_dec_ref_known(v_x_1820_, 1);
v_s_u2081_1822_ = v_a_1844_;
v_s_u2082_1823_ = v_a_1845_;
goto v___jp_1821_;
}
default: 
{
lean_object* v___x_1846_; 
lean_dec_ref_known(v_x_1819_, 1);
lean_dec(v_x_1820_);
v___x_1846_ = lean_box(1);
return v___x_1846_;
}
}
}
default: 
{
if (lean_obj_tag(v_x_1820_) == 0)
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Lean_Parser_FirstTokens_toOptional(v_x_1819_);
return v___x_1847_;
}
else
{
lean_object* v___x_1848_; 
lean_dec(v_x_1820_);
lean_dec(v_x_1819_);
v___x_1848_ = lean_box(1);
return v___x_1848_;
}
}
}
v___jp_1821_:
{
lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1824_ = l_List_appendTR___redArg(v_s_u2081_1822_, v_s_u2082_1823_);
v___x_1825_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1825_, 0, v___x_1824_);
return v___x_1825_;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(lean_object* v_x_1849_, lean_object* v_x_1850_){
_start:
{
if (lean_obj_tag(v_x_1850_) == 0)
{
return v_x_1849_;
}
else
{
lean_object* v_head_1851_; lean_object* v_tail_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
v_head_1851_ = lean_ctor_get(v_x_1850_, 0);
v_tail_1852_ = lean_ctor_get(v_x_1850_, 1);
v___x_1853_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_Error_expectedToString___closed__1));
v___x_1854_ = lean_string_append(v_x_1849_, v___x_1853_);
v___x_1855_ = lean_string_append(v___x_1854_, v_head_1851_);
v_x_1849_ = v___x_1855_;
v_x_1850_ = v_tail_1852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0___boxed(lean_object* v_x_1857_, lean_object* v_x_1858_){
_start:
{
lean_object* v_res_1859_; 
v_res_1859_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(v_x_1857_, v_x_1858_);
lean_dec(v_x_1858_);
return v_res_1859_;
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(lean_object* v_x_1863_){
_start:
{
if (lean_obj_tag(v_x_1863_) == 0)
{
lean_object* v___x_1864_; 
v___x_1864_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__0));
return v___x_1864_;
}
else
{
lean_object* v_tail_1865_; 
v_tail_1865_ = lean_ctor_get(v_x_1863_, 1);
if (lean_obj_tag(v_tail_1865_) == 0)
{
lean_object* v_head_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; lean_object* v___x_1870_; 
v_head_1866_ = lean_ctor_get(v_x_1863_, 0);
v___x_1867_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1));
v___x_1868_ = lean_string_append(v___x_1867_, v_head_1866_);
v___x_1869_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__2));
v___x_1870_ = lean_string_append(v___x_1868_, v___x_1869_);
return v___x_1870_;
}
else
{
lean_object* v_head_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; uint32_t v___x_1875_; lean_object* v___x_1876_; 
v_head_1871_ = lean_ctor_get(v_x_1863_, 0);
v___x_1872_ = ((lean_object*)(l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___closed__1));
v___x_1873_ = lean_string_append(v___x_1872_, v_head_1871_);
v___x_1874_ = l_List_foldl___at___00List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0_spec__0(v___x_1873_, v_tail_1865_);
v___x_1875_ = 93;
v___x_1876_ = lean_string_push(v___x_1874_, v___x_1875_);
return v___x_1876_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0___boxed(lean_object* v_x_1877_){
_start:
{
lean_object* v_res_1878_; 
v_res_1878_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_x_1877_);
lean_dec(v_x_1877_);
return v_res_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr(lean_object* v_x_1882_){
_start:
{
switch(lean_obj_tag(v_x_1882_))
{
case 0:
{
lean_object* v___x_1883_; 
v___x_1883_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__0));
return v___x_1883_;
}
case 1:
{
lean_object* v___x_1884_; 
v___x_1884_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__1));
return v___x_1884_;
}
case 2:
{
lean_object* v_a_1885_; lean_object* v___x_1886_; 
v_a_1885_ = lean_ctor_get(v_x_1882_, 0);
v___x_1886_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_a_1885_);
return v___x_1886_;
}
default: 
{
lean_object* v_a_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; 
v_a_1887_ = lean_ctor_get(v_x_1882_, 0);
v___x_1888_ = ((lean_object*)(l_Lean_Parser_FirstTokens_toStr___closed__2));
v___x_1889_ = l_List_toString___at___00Lean_Parser_FirstTokens_toStr_spec__0(v_a_1887_);
v___x_1890_ = lean_string_append(v___x_1888_, v___x_1889_);
lean_dec_ref(v___x_1889_);
return v___x_1890_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_FirstTokens_toStr___boxed(lean_object* v_x_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = l_Lean_Parser_FirstTokens_toStr(v_x_1891_);
lean_dec(v_x_1891_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0(lean_object* v___y_1895_){
_start:
{
lean_inc(v___y_1895_);
return v___y_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__0___boxed(lean_object* v___y_1896_){
_start:
{
lean_object* v_res_1897_; 
v_res_1897_ = l_Lean_Parser_instInhabitedParserInfo_default___lam__0(v___y_1896_);
lean_dec(v___y_1896_);
return v_res_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1(lean_object* v___y_1898_){
_start:
{
lean_inc_ref(v___y_1898_);
return v___y_1898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_instInhabitedParserInfo_default___lam__1___boxed(lean_object* v___y_1899_){
_start:
{
lean_object* v_res_1900_; 
v_res_1900_ = l_Lean_Parser_instInhabitedParserInfo_default___lam__1(v___y_1899_);
lean_dec_ref(v___y_1899_);
return v_res_1900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withFn(lean_object* v_f_1914_, lean_object* v_p_1915_){
_start:
{
lean_object* v_info_1916_; lean_object* v_fn_1917_; lean_object* v___x_1919_; uint8_t v_isShared_1920_; uint8_t v_isSharedCheck_1925_; 
v_info_1916_ = lean_ctor_get(v_p_1915_, 0);
v_fn_1917_ = lean_ctor_get(v_p_1915_, 1);
v_isSharedCheck_1925_ = !lean_is_exclusive(v_p_1915_);
if (v_isSharedCheck_1925_ == 0)
{
v___x_1919_ = v_p_1915_;
v_isShared_1920_ = v_isSharedCheck_1925_;
goto v_resetjp_1918_;
}
else
{
lean_inc(v_fn_1917_);
lean_inc(v_info_1916_);
lean_dec(v_p_1915_);
v___x_1919_ = lean_box(0);
v_isShared_1920_ = v_isSharedCheck_1925_;
goto v_resetjp_1918_;
}
v_resetjp_1918_:
{
lean_object* v___x_1921_; lean_object* v___x_1923_; 
v___x_1921_ = lean_apply_1(v_f_1914_, v_fn_1917_);
if (v_isShared_1920_ == 0)
{
lean_ctor_set(v___x_1919_, 1, v___x_1921_);
v___x_1923_ = v___x_1919_;
goto v_reusejp_1922_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v_info_1916_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v___x_1921_);
v___x_1923_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1922_;
}
v_reusejp_1922_:
{
return v___x_1923_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withTraceNodeFn(lean_object* v_descr_1926_, lean_object* v_f_1927_, lean_object* v_c_1928_, lean_object* v_s_1929_){
_start:
{
lean_object* v_traces_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; uint8_t v___x_1933_; 
v_traces_1930_ = lean_ctor_get(v_s_1929_, 6);
v___x_1931_ = lean_array_get_size(v_traces_1930_);
v___x_1932_ = lean_unsigned_to_nat(0u);
v___x_1933_ = lean_nat_dec_eq(v___x_1931_, v___x_1932_);
if (v___x_1933_ == 0)
{
lean_object* v___x_1934_; lean_object* v___x_1935_; 
v___x_1934_ = lean_apply_1(v_f_1927_, v_c_1928_);
v___x_1935_ = l___private_Lean_Parser_Types_0__Lean_Parser_ParserState_withTraceNode_slow(v_s_1929_, v_descr_1926_, v___x_1934_);
return v___x_1935_;
}
else
{
lean_object* v___x_1936_; 
lean_dec_ref(v_descr_1926_);
v___x_1936_ = lean_apply_2(v_f_1927_, v_c_1928_, v_s_1929_);
return v___x_1936_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withTraceNode(lean_object* v_descr_1937_, lean_object* v_p_1938_){
_start:
{
lean_object* v_info_1939_; lean_object* v_fn_1940_; lean_object* v___x_1942_; uint8_t v_isShared_1943_; uint8_t v_isSharedCheck_1948_; 
v_info_1939_ = lean_ctor_get(v_p_1938_, 0);
v_fn_1940_ = lean_ctor_get(v_p_1938_, 1);
v_isSharedCheck_1948_ = !lean_is_exclusive(v_p_1938_);
if (v_isSharedCheck_1948_ == 0)
{
v___x_1942_ = v_p_1938_;
v_isShared_1943_ = v_isSharedCheck_1948_;
goto v_resetjp_1941_;
}
else
{
lean_inc(v_fn_1940_);
lean_inc(v_info_1939_);
lean_dec(v_p_1938_);
v___x_1942_ = lean_box(0);
v_isShared_1943_ = v_isSharedCheck_1948_;
goto v_resetjp_1941_;
}
v_resetjp_1941_:
{
lean_object* v___x_1944_; lean_object* v___x_1946_; 
v___x_1944_ = lean_alloc_closure((void*)(l_Lean_Parser_withTraceNodeFn), 4, 2);
lean_closure_set(v___x_1944_, 0, v_descr_1937_);
lean_closure_set(v___x_1944_, 1, v_fn_1940_);
if (v_isShared_1943_ == 0)
{
lean_ctor_set(v___x_1942_, 1, v___x_1944_);
v___x_1946_ = v___x_1942_;
goto v_reusejp_1945_;
}
else
{
lean_object* v_reuseFailAlloc_1947_; 
v_reuseFailAlloc_1947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1947_, 0, v_info_1939_);
lean_ctor_set(v_reuseFailAlloc_1947_, 1, v___x_1944_);
v___x_1946_ = v_reuseFailAlloc_1947_;
goto v_reusejp_1945_;
}
v_reusejp_1945_:
{
return v___x_1946_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContextFn(lean_object* v_f_1949_, lean_object* v_p_1950_, lean_object* v_c_1951_, lean_object* v_s_1952_){
_start:
{
lean_object* v_toInputContext_1953_; lean_object* v_toParserModuleContext_1954_; lean_object* v_toCacheableParserContext_1955_; lean_object* v_tokens_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1965_; 
v_toInputContext_1953_ = lean_ctor_get(v_c_1951_, 0);
v_toParserModuleContext_1954_ = lean_ctor_get(v_c_1951_, 1);
v_toCacheableParserContext_1955_ = lean_ctor_get(v_c_1951_, 2);
v_tokens_1956_ = lean_ctor_get(v_c_1951_, 3);
v_isSharedCheck_1965_ = !lean_is_exclusive(v_c_1951_);
if (v_isSharedCheck_1965_ == 0)
{
v___x_1958_ = v_c_1951_;
v_isShared_1959_ = v_isSharedCheck_1965_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_tokens_1956_);
lean_inc(v_toCacheableParserContext_1955_);
lean_inc(v_toParserModuleContext_1954_);
lean_inc(v_toInputContext_1953_);
lean_dec(v_c_1951_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1965_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1960_; lean_object* v___x_1962_; 
v___x_1960_ = lean_apply_1(v_f_1949_, v_toCacheableParserContext_1955_);
if (v_isShared_1959_ == 0)
{
lean_ctor_set(v___x_1958_, 2, v___x_1960_);
v___x_1962_ = v___x_1958_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1964_; 
v_reuseFailAlloc_1964_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1964_, 0, v_toInputContext_1953_);
lean_ctor_set(v_reuseFailAlloc_1964_, 1, v_toParserModuleContext_1954_);
lean_ctor_set(v_reuseFailAlloc_1964_, 2, v___x_1960_);
lean_ctor_set(v_reuseFailAlloc_1964_, 3, v_tokens_1956_);
v___x_1962_ = v_reuseFailAlloc_1964_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
lean_object* v___x_1963_; 
v___x_1963_ = lean_apply_2(v_p_1950_, v___x_1962_, v_s_1952_);
return v___x_1963_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptCacheableContext(lean_object* v_f_1966_, lean_object* v_p_1967_){
_start:
{
lean_object* v_info_1968_; lean_object* v_fn_1969_; lean_object* v___x_1971_; uint8_t v_isShared_1972_; uint8_t v_isSharedCheck_1977_; 
v_info_1968_ = lean_ctor_get(v_p_1967_, 0);
v_fn_1969_ = lean_ctor_get(v_p_1967_, 1);
v_isSharedCheck_1977_ = !lean_is_exclusive(v_p_1967_);
if (v_isSharedCheck_1977_ == 0)
{
v___x_1971_ = v_p_1967_;
v_isShared_1972_ = v_isSharedCheck_1977_;
goto v_resetjp_1970_;
}
else
{
lean_inc(v_fn_1969_);
lean_inc(v_info_1968_);
lean_dec(v_p_1967_);
v___x_1971_ = lean_box(0);
v_isShared_1972_ = v_isSharedCheck_1977_;
goto v_resetjp_1970_;
}
v_resetjp_1970_:
{
lean_object* v___x_1973_; lean_object* v___x_1975_; 
v___x_1973_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptCacheableContextFn), 4, 2);
lean_closure_set(v___x_1973_, 0, v_f_1966_);
lean_closure_set(v___x_1973_, 1, v_fn_1969_);
if (v_isShared_1972_ == 0)
{
lean_ctor_set(v___x_1971_, 1, v___x_1973_);
v___x_1975_ = v___x_1971_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v_info_1968_);
lean_ctor_set(v_reuseFailAlloc_1976_, 1, v___x_1973_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(lean_object* v_drop_1978_, lean_object* v_p_1979_, lean_object* v_c_1980_, lean_object* v_s_1981_){
_start:
{
lean_object* v_stxStack_1982_; lean_object* v_lhsPrec_1983_; lean_object* v_pos_1984_; lean_object* v_cache_1985_; lean_object* v_errorMsg_1986_; lean_object* v_recoveredErrors_1987_; lean_object* v_traces_1988_; lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_2028_; 
v_stxStack_1982_ = lean_ctor_get(v_s_1981_, 0);
v_lhsPrec_1983_ = lean_ctor_get(v_s_1981_, 1);
v_pos_1984_ = lean_ctor_get(v_s_1981_, 2);
v_cache_1985_ = lean_ctor_get(v_s_1981_, 3);
v_errorMsg_1986_ = lean_ctor_get(v_s_1981_, 4);
v_recoveredErrors_1987_ = lean_ctor_get(v_s_1981_, 5);
v_traces_1988_ = lean_ctor_get(v_s_1981_, 6);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_s_1981_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_1990_ = v_s_1981_;
v_isShared_1991_ = v_isSharedCheck_2028_;
goto v_resetjp_1989_;
}
else
{
lean_inc(v_traces_1988_);
lean_inc(v_recoveredErrors_1987_);
lean_inc(v_errorMsg_1986_);
lean_inc(v_cache_1985_);
lean_inc(v_pos_1984_);
lean_inc(v_lhsPrec_1983_);
lean_inc(v_stxStack_1982_);
lean_dec(v_s_1981_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_2028_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v_raw_1992_; lean_object* v_drop_1993_; lean_object* v___x_1995_; uint8_t v_isShared_1996_; uint8_t v_isSharedCheck_2027_; 
v_raw_1992_ = lean_ctor_get(v_stxStack_1982_, 0);
v_drop_1993_ = lean_ctor_get(v_stxStack_1982_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_stxStack_1982_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_1995_ = v_stxStack_1982_;
v_isShared_1996_ = v_isSharedCheck_2027_;
goto v_resetjp_1994_;
}
else
{
lean_inc(v_drop_1993_);
lean_inc(v_raw_1992_);
lean_dec(v_stxStack_1982_);
v___x_1995_ = lean_box(0);
v_isShared_1996_ = v_isSharedCheck_2027_;
goto v_resetjp_1994_;
}
v_resetjp_1994_:
{
lean_object* v___x_1998_; 
if (v_isShared_1996_ == 0)
{
lean_ctor_set(v___x_1995_, 1, v_drop_1978_);
v___x_1998_ = v___x_1995_;
goto v_reusejp_1997_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v_raw_1992_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v_drop_1978_);
v___x_1998_ = v_reuseFailAlloc_2026_;
goto v_reusejp_1997_;
}
v_reusejp_1997_:
{
lean_object* v___x_2000_; 
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 0, v___x_1998_);
v___x_2000_ = v___x_1990_;
goto v_reusejp_1999_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_1998_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_lhsPrec_1983_);
lean_ctor_set(v_reuseFailAlloc_2025_, 2, v_pos_1984_);
lean_ctor_set(v_reuseFailAlloc_2025_, 3, v_cache_1985_);
lean_ctor_set(v_reuseFailAlloc_2025_, 4, v_errorMsg_1986_);
lean_ctor_set(v_reuseFailAlloc_2025_, 5, v_recoveredErrors_1987_);
lean_ctor_set(v_reuseFailAlloc_2025_, 6, v_traces_1988_);
v___x_2000_ = v_reuseFailAlloc_2025_;
goto v_reusejp_1999_;
}
v_reusejp_1999_:
{
lean_object* v_s_2001_; lean_object* v_stxStack_2002_; lean_object* v_lhsPrec_2003_; lean_object* v_pos_2004_; lean_object* v_cache_2005_; lean_object* v_errorMsg_2006_; lean_object* v_recoveredErrors_2007_; lean_object* v_traces_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2024_; 
v_s_2001_ = lean_apply_2(v_p_1979_, v_c_1980_, v___x_2000_);
v_stxStack_2002_ = lean_ctor_get(v_s_2001_, 0);
v_lhsPrec_2003_ = lean_ctor_get(v_s_2001_, 1);
v_pos_2004_ = lean_ctor_get(v_s_2001_, 2);
v_cache_2005_ = lean_ctor_get(v_s_2001_, 3);
v_errorMsg_2006_ = lean_ctor_get(v_s_2001_, 4);
v_recoveredErrors_2007_ = lean_ctor_get(v_s_2001_, 5);
v_traces_2008_ = lean_ctor_get(v_s_2001_, 6);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_s_2001_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_2010_ = v_s_2001_;
v_isShared_2011_ = v_isSharedCheck_2024_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_traces_2008_);
lean_inc(v_recoveredErrors_2007_);
lean_inc(v_errorMsg_2006_);
lean_inc(v_cache_2005_);
lean_inc(v_pos_2004_);
lean_inc(v_lhsPrec_2003_);
lean_inc(v_stxStack_2002_);
lean_dec(v_s_2001_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2024_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v_raw_2012_; lean_object* v___x_2014_; uint8_t v_isShared_2015_; uint8_t v_isSharedCheck_2022_; 
v_raw_2012_ = lean_ctor_get(v_stxStack_2002_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v_stxStack_2002_);
if (v_isSharedCheck_2022_ == 0)
{
lean_object* v_unused_2023_; 
v_unused_2023_ = lean_ctor_get(v_stxStack_2002_, 1);
lean_dec(v_unused_2023_);
v___x_2014_ = v_stxStack_2002_;
v_isShared_2015_ = v_isSharedCheck_2022_;
goto v_resetjp_2013_;
}
else
{
lean_inc(v_raw_2012_);
lean_dec(v_stxStack_2002_);
v___x_2014_ = lean_box(0);
v_isShared_2015_ = v_isSharedCheck_2022_;
goto v_resetjp_2013_;
}
v_resetjp_2013_:
{
lean_object* v___x_2017_; 
if (v_isShared_2015_ == 0)
{
lean_ctor_set(v___x_2014_, 1, v_drop_1993_);
v___x_2017_ = v___x_2014_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_raw_2012_);
lean_ctor_set(v_reuseFailAlloc_2021_, 1, v_drop_1993_);
v___x_2017_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
lean_object* v___x_2019_; 
if (v_isShared_2011_ == 0)
{
lean_ctor_set(v___x_2010_, 0, v___x_2017_);
v___x_2019_ = v___x_2010_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2017_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v_lhsPrec_2003_);
lean_ctor_set(v_reuseFailAlloc_2020_, 2, v_pos_2004_);
lean_ctor_set(v_reuseFailAlloc_2020_, 3, v_cache_2005_);
lean_ctor_set(v_reuseFailAlloc_2020_, 4, v_errorMsg_2006_);
lean_ctor_set(v_reuseFailAlloc_2020_, 5, v_recoveredErrors_2007_);
lean_ctor_set(v_reuseFailAlloc_2020_, 6, v_traces_2008_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
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
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn___lam__0(lean_object* v_p_2029_, lean_object* v_c_2030_, lean_object* v_s_2031_){
_start:
{
lean_object* v_cache_2032_; lean_object* v_stxStack_2033_; lean_object* v_lhsPrec_2034_; lean_object* v_pos_2035_; lean_object* v_errorMsg_2036_; lean_object* v_recoveredErrors_2037_; lean_object* v_traces_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2079_; 
v_cache_2032_ = lean_ctor_get(v_s_2031_, 3);
v_stxStack_2033_ = lean_ctor_get(v_s_2031_, 0);
v_lhsPrec_2034_ = lean_ctor_get(v_s_2031_, 1);
v_pos_2035_ = lean_ctor_get(v_s_2031_, 2);
v_errorMsg_2036_ = lean_ctor_get(v_s_2031_, 4);
v_recoveredErrors_2037_ = lean_ctor_get(v_s_2031_, 5);
v_traces_2038_ = lean_ctor_get(v_s_2031_, 6);
v_isSharedCheck_2079_ = !lean_is_exclusive(v_s_2031_);
if (v_isSharedCheck_2079_ == 0)
{
v___x_2040_ = v_s_2031_;
v_isShared_2041_ = v_isSharedCheck_2079_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_traces_2038_);
lean_inc(v_recoveredErrors_2037_);
lean_inc(v_errorMsg_2036_);
lean_inc(v_cache_2032_);
lean_inc(v_pos_2035_);
lean_inc(v_lhsPrec_2034_);
lean_inc(v_stxStack_2033_);
lean_dec(v_s_2031_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2079_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v_tokenCache_2042_; lean_object* v_parserCache_2043_; lean_object* v___x_2045_; uint8_t v_isShared_2046_; uint8_t v_isSharedCheck_2078_; 
v_tokenCache_2042_ = lean_ctor_get(v_cache_2032_, 0);
v_parserCache_2043_ = lean_ctor_get(v_cache_2032_, 1);
v_isSharedCheck_2078_ = !lean_is_exclusive(v_cache_2032_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2045_ = v_cache_2032_;
v_isShared_2046_ = v_isSharedCheck_2078_;
goto v_resetjp_2044_;
}
else
{
lean_inc(v_parserCache_2043_);
lean_inc(v_tokenCache_2042_);
lean_dec(v_cache_2032_);
v___x_2045_ = lean_box(0);
v_isShared_2046_ = v_isSharedCheck_2078_;
goto v_resetjp_2044_;
}
v_resetjp_2044_:
{
lean_object* v___x_2047_; lean_object* v___x_2049_; 
v___x_2047_ = lean_obj_once(&l_Lean_Parser_initCacheForInput___closed__2, &l_Lean_Parser_initCacheForInput___closed__2_once, _init_l_Lean_Parser_initCacheForInput___closed__2);
if (v_isShared_2046_ == 0)
{
lean_ctor_set(v___x_2045_, 1, v___x_2047_);
v___x_2049_ = v___x_2045_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_tokenCache_2042_);
lean_ctor_set(v_reuseFailAlloc_2077_, 1, v___x_2047_);
v___x_2049_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
lean_object* v___x_2051_; 
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 3, v___x_2049_);
v___x_2051_ = v___x_2040_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2076_; 
v_reuseFailAlloc_2076_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2076_, 0, v_stxStack_2033_);
lean_ctor_set(v_reuseFailAlloc_2076_, 1, v_lhsPrec_2034_);
lean_ctor_set(v_reuseFailAlloc_2076_, 2, v_pos_2035_);
lean_ctor_set(v_reuseFailAlloc_2076_, 3, v___x_2049_);
lean_ctor_set(v_reuseFailAlloc_2076_, 4, v_errorMsg_2036_);
lean_ctor_set(v_reuseFailAlloc_2076_, 5, v_recoveredErrors_2037_);
lean_ctor_set(v_reuseFailAlloc_2076_, 6, v_traces_2038_);
v___x_2051_ = v_reuseFailAlloc_2076_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
lean_object* v_s_x27_2052_; lean_object* v_cache_2053_; lean_object* v_stxStack_2054_; lean_object* v_lhsPrec_2055_; lean_object* v_pos_2056_; lean_object* v_errorMsg_2057_; lean_object* v_recoveredErrors_2058_; lean_object* v_traces_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2075_; 
v_s_x27_2052_ = lean_apply_2(v_p_2029_, v_c_2030_, v___x_2051_);
v_cache_2053_ = lean_ctor_get(v_s_x27_2052_, 3);
v_stxStack_2054_ = lean_ctor_get(v_s_x27_2052_, 0);
v_lhsPrec_2055_ = lean_ctor_get(v_s_x27_2052_, 1);
v_pos_2056_ = lean_ctor_get(v_s_x27_2052_, 2);
v_errorMsg_2057_ = lean_ctor_get(v_s_x27_2052_, 4);
v_recoveredErrors_2058_ = lean_ctor_get(v_s_x27_2052_, 5);
v_traces_2059_ = lean_ctor_get(v_s_x27_2052_, 6);
v_isSharedCheck_2075_ = !lean_is_exclusive(v_s_x27_2052_);
if (v_isSharedCheck_2075_ == 0)
{
v___x_2061_ = v_s_x27_2052_;
v_isShared_2062_ = v_isSharedCheck_2075_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_traces_2059_);
lean_inc(v_recoveredErrors_2058_);
lean_inc(v_errorMsg_2057_);
lean_inc(v_cache_2053_);
lean_inc(v_pos_2056_);
lean_inc(v_lhsPrec_2055_);
lean_inc(v_stxStack_2054_);
lean_dec(v_s_x27_2052_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2075_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v_tokenCache_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2073_; 
v_tokenCache_2063_ = lean_ctor_get(v_cache_2053_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v_cache_2053_);
if (v_isSharedCheck_2073_ == 0)
{
lean_object* v_unused_2074_; 
v_unused_2074_ = lean_ctor_get(v_cache_2053_, 1);
lean_dec(v_unused_2074_);
v___x_2065_ = v_cache_2053_;
v_isShared_2066_ = v_isSharedCheck_2073_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_tokenCache_2063_);
lean_dec(v_cache_2053_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2073_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2068_; 
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 1, v_parserCache_2043_);
v___x_2068_ = v___x_2065_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_tokenCache_2063_);
lean_ctor_set(v_reuseFailAlloc_2072_, 1, v_parserCache_2043_);
v___x_2068_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
lean_object* v___x_2070_; 
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 3, v___x_2068_);
v___x_2070_ = v___x_2061_;
goto v_reusejp_2069_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v_stxStack_2054_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_lhsPrec_2055_);
lean_ctor_set(v_reuseFailAlloc_2071_, 2, v_pos_2056_);
lean_ctor_set(v_reuseFailAlloc_2071_, 3, v___x_2068_);
lean_ctor_set(v_reuseFailAlloc_2071_, 4, v_errorMsg_2057_);
lean_ctor_set(v_reuseFailAlloc_2071_, 5, v_recoveredErrors_2058_);
lean_ctor_set(v_reuseFailAlloc_2071_, 6, v_traces_2059_);
v___x_2070_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2069_;
}
v_reusejp_2069_:
{
return v___x_2070_;
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
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCacheFn(lean_object* v_p_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_){
_start:
{
lean_object* v___f_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; 
v___f_2083_ = lean_alloc_closure((void*)(l_Lean_Parser_withResetCacheFn___lam__0), 3, 1);
lean_closure_set(v___f_2083_, 0, v_p_2080_);
v___x_2084_ = lean_unsigned_to_nat(0u);
v___x_2085_ = l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(v___x_2084_, v___f_2083_, v_a_2081_, v_a_2082_);
return v___x_2085_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withResetCache(lean_object* v_p_2086_){
_start:
{
lean_object* v_info_2087_; lean_object* v_fn_2088_; lean_object* v___x_2090_; uint8_t v_isShared_2091_; uint8_t v_isSharedCheck_2096_; 
v_info_2087_ = lean_ctor_get(v_p_2086_, 0);
v_fn_2088_ = lean_ctor_get(v_p_2086_, 1);
v_isSharedCheck_2096_ = !lean_is_exclusive(v_p_2086_);
if (v_isSharedCheck_2096_ == 0)
{
v___x_2090_ = v_p_2086_;
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
else
{
lean_inc(v_fn_2088_);
lean_inc(v_info_2087_);
lean_dec(v_p_2086_);
v___x_2090_ = lean_box(0);
v_isShared_2091_ = v_isSharedCheck_2096_;
goto v_resetjp_2089_;
}
v_resetjp_2089_:
{
lean_object* v___x_2092_; lean_object* v___x_2094_; 
v___x_2092_ = lean_alloc_closure((void*)(l_Lean_Parser_withResetCacheFn), 3, 1);
lean_closure_set(v___x_2092_, 0, v_fn_2088_);
if (v_isShared_2091_ == 0)
{
lean_ctor_set(v___x_2090_, 1, v___x_2092_);
v___x_2094_ = v___x_2090_;
goto v_reusejp_2093_;
}
else
{
lean_object* v_reuseFailAlloc_2095_; 
v_reuseFailAlloc_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2095_, 0, v_info_2087_);
lean_ctor_set(v_reuseFailAlloc_2095_, 1, v___x_2092_);
v___x_2094_ = v_reuseFailAlloc_2095_;
goto v_reusejp_2093_;
}
v_reusejp_2093_:
{
return v___x_2094_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn___lam__0(lean_object* v_f_2097_, lean_object* v_p_2098_, lean_object* v_c_2099_, lean_object* v_s_2100_){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; 
v___x_2101_ = lean_apply_1(v_f_2097_, v_c_2099_);
v___x_2102_ = lean_apply_2(v_p_2098_, v___x_2101_, v_s_2100_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object* v_f_2103_, lean_object* v_p_2104_, lean_object* v_a_2105_, lean_object* v_a_2106_){
_start:
{
lean_object* v___f_2107_; lean_object* v___x_2108_; 
v___f_2107_ = lean_alloc_closure((void*)(l_Lean_Parser_adaptUncacheableContextFn___lam__0), 4, 2);
lean_closure_set(v___f_2107_, 0, v_f_2103_);
lean_closure_set(v___f_2107_, 1, v_p_2104_);
v___x_2108_ = l_Lean_Parser_withResetCacheFn(v___f_2107_, v_a_2105_, v_a_2106_);
return v___x_2108_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(lean_object* v_a_2109_, lean_object* v_x_2110_){
_start:
{
if (lean_obj_tag(v_x_2110_) == 0)
{
uint8_t v___x_2111_; 
v___x_2111_ = 0;
return v___x_2111_;
}
else
{
lean_object* v_key_2112_; lean_object* v_tail_2113_; uint8_t v___x_2114_; 
v_key_2112_ = lean_ctor_get(v_x_2110_, 0);
v_tail_2113_ = lean_ctor_get(v_x_2110_, 2);
v___x_2114_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_2112_, v_a_2109_);
if (v___x_2114_ == 0)
{
v_x_2110_ = v_tail_2113_;
goto _start;
}
else
{
return v___x_2114_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg___boxed(lean_object* v_a_2116_, lean_object* v_x_2117_){
_start:
{
uint8_t v_res_2118_; lean_object* v_r_2119_; 
v_res_2118_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_2116_, v_x_2117_);
lean_dec(v_x_2117_);
lean_dec_ref(v_a_2116_);
v_r_2119_ = lean_box(v_res_2118_);
return v_r_2119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_2120_, lean_object* v_x_2121_){
_start:
{
if (lean_obj_tag(v_x_2121_) == 0)
{
return v_x_2120_;
}
else
{
lean_object* v_key_2122_; lean_object* v_value_2123_; lean_object* v_tail_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2154_; 
v_key_2122_ = lean_ctor_get(v_x_2121_, 0);
v_value_2123_ = lean_ctor_get(v_x_2121_, 1);
v_tail_2124_ = lean_ctor_get(v_x_2121_, 2);
v_isSharedCheck_2154_ = !lean_is_exclusive(v_x_2121_);
if (v_isSharedCheck_2154_ == 0)
{
v___x_2126_ = v_x_2121_;
v_isShared_2127_ = v_isSharedCheck_2154_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_tail_2124_);
lean_inc(v_value_2123_);
lean_inc(v_key_2122_);
lean_dec(v_x_2121_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2154_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v_parserName_2128_; lean_object* v_pos_2129_; lean_object* v___x_2130_; uint64_t v___x_2131_; uint64_t v___y_2133_; 
v_parserName_2128_ = lean_ctor_get(v_key_2122_, 1);
v_pos_2129_ = lean_ctor_get(v_key_2122_, 2);
v___x_2130_ = lean_array_get_size(v_x_2120_);
v___x_2131_ = l_String_instHashableRaw_hash(v_pos_2129_);
if (lean_obj_tag(v_parserName_2128_) == 0)
{
uint64_t v___x_2152_; 
v___x_2152_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2133_ = v___x_2152_;
goto v___jp_2132_;
}
else
{
uint64_t v_hash_2153_; 
v_hash_2153_ = lean_ctor_get_uint64(v_parserName_2128_, sizeof(void*)*2);
v___y_2133_ = v_hash_2153_;
goto v___jp_2132_;
}
v___jp_2132_:
{
uint64_t v___x_2134_; uint64_t v___x_2135_; uint64_t v___x_2136_; uint64_t v_fold_2137_; uint64_t v___x_2138_; uint64_t v___x_2139_; uint64_t v___x_2140_; size_t v___x_2141_; size_t v___x_2142_; size_t v___x_2143_; size_t v___x_2144_; size_t v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2148_; 
v___x_2134_ = lean_uint64_mix_hash(v___x_2131_, v___y_2133_);
v___x_2135_ = 32ULL;
v___x_2136_ = lean_uint64_shift_right(v___x_2134_, v___x_2135_);
v_fold_2137_ = lean_uint64_xor(v___x_2134_, v___x_2136_);
v___x_2138_ = 16ULL;
v___x_2139_ = lean_uint64_shift_right(v_fold_2137_, v___x_2138_);
v___x_2140_ = lean_uint64_xor(v_fold_2137_, v___x_2139_);
v___x_2141_ = lean_uint64_to_usize(v___x_2140_);
v___x_2142_ = lean_usize_of_nat(v___x_2130_);
v___x_2143_ = ((size_t)1ULL);
v___x_2144_ = lean_usize_sub(v___x_2142_, v___x_2143_);
v___x_2145_ = lean_usize_land(v___x_2141_, v___x_2144_);
v___x_2146_ = lean_array_uget_borrowed(v_x_2120_, v___x_2145_);
lean_inc(v___x_2146_);
if (v_isShared_2127_ == 0)
{
lean_ctor_set(v___x_2126_, 2, v___x_2146_);
v___x_2148_ = v___x_2126_;
goto v_reusejp_2147_;
}
else
{
lean_object* v_reuseFailAlloc_2151_; 
v_reuseFailAlloc_2151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2151_, 0, v_key_2122_);
lean_ctor_set(v_reuseFailAlloc_2151_, 1, v_value_2123_);
lean_ctor_set(v_reuseFailAlloc_2151_, 2, v___x_2146_);
v___x_2148_ = v_reuseFailAlloc_2151_;
goto v_reusejp_2147_;
}
v_reusejp_2147_:
{
lean_object* v___x_2149_; 
v___x_2149_ = lean_array_uset(v_x_2120_, v___x_2145_, v___x_2148_);
v_x_2120_ = v___x_2149_;
v_x_2121_ = v_tail_2124_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(lean_object* v_i_2155_, lean_object* v_source_2156_, lean_object* v_target_2157_){
_start:
{
lean_object* v___x_2158_; uint8_t v___x_2159_; 
v___x_2158_ = lean_array_get_size(v_source_2156_);
v___x_2159_ = lean_nat_dec_lt(v_i_2155_, v___x_2158_);
if (v___x_2159_ == 0)
{
lean_dec_ref(v_source_2156_);
lean_dec(v_i_2155_);
return v_target_2157_;
}
else
{
lean_object* v_es_2160_; lean_object* v___x_2161_; lean_object* v_source_2162_; lean_object* v_target_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; 
v_es_2160_ = lean_array_fget(v_source_2156_, v_i_2155_);
v___x_2161_ = lean_box(0);
v_source_2162_ = lean_array_fset(v_source_2156_, v_i_2155_, v___x_2161_);
v_target_2163_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(v_target_2157_, v_es_2160_);
v___x_2164_ = lean_unsigned_to_nat(1u);
v___x_2165_ = lean_nat_add(v_i_2155_, v___x_2164_);
lean_dec(v_i_2155_);
v_i_2155_ = v___x_2165_;
v_source_2156_ = v_source_2162_;
v_target_2157_ = v_target_2163_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(lean_object* v_data_2167_){
_start:
{
lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v_nbuckets_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; 
v___x_2168_ = lean_array_get_size(v_data_2167_);
v___x_2169_ = lean_unsigned_to_nat(2u);
v_nbuckets_2170_ = lean_nat_mul(v___x_2168_, v___x_2169_);
v___x_2171_ = lean_unsigned_to_nat(0u);
v___x_2172_ = lean_box(0);
v___x_2173_ = lean_mk_array(v_nbuckets_2170_, v___x_2172_);
v___x_2174_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(v___x_2171_, v_data_2167_, v___x_2173_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(lean_object* v_a_2175_, lean_object* v_b_2176_, lean_object* v_x_2177_){
_start:
{
if (lean_obj_tag(v_x_2177_) == 0)
{
lean_dec(v_b_2176_);
lean_dec_ref(v_a_2175_);
return v_x_2177_;
}
else
{
lean_object* v_key_2178_; lean_object* v_value_2179_; lean_object* v_tail_2180_; lean_object* v___x_2182_; uint8_t v_isShared_2183_; uint8_t v_isSharedCheck_2192_; 
v_key_2178_ = lean_ctor_get(v_x_2177_, 0);
v_value_2179_ = lean_ctor_get(v_x_2177_, 1);
v_tail_2180_ = lean_ctor_get(v_x_2177_, 2);
v_isSharedCheck_2192_ = !lean_is_exclusive(v_x_2177_);
if (v_isSharedCheck_2192_ == 0)
{
v___x_2182_ = v_x_2177_;
v_isShared_2183_ = v_isSharedCheck_2192_;
goto v_resetjp_2181_;
}
else
{
lean_inc(v_tail_2180_);
lean_inc(v_value_2179_);
lean_inc(v_key_2178_);
lean_dec(v_x_2177_);
v___x_2182_ = lean_box(0);
v_isShared_2183_ = v_isSharedCheck_2192_;
goto v_resetjp_2181_;
}
v_resetjp_2181_:
{
uint8_t v___x_2184_; 
v___x_2184_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_2178_, v_a_2175_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; lean_object* v___x_2187_; 
v___x_2185_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_2175_, v_b_2176_, v_tail_2180_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 2, v___x_2185_);
v___x_2187_ = v___x_2182_;
goto v_reusejp_2186_;
}
else
{
lean_object* v_reuseFailAlloc_2188_; 
v_reuseFailAlloc_2188_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2188_, 0, v_key_2178_);
lean_ctor_set(v_reuseFailAlloc_2188_, 1, v_value_2179_);
lean_ctor_set(v_reuseFailAlloc_2188_, 2, v___x_2185_);
v___x_2187_ = v_reuseFailAlloc_2188_;
goto v_reusejp_2186_;
}
v_reusejp_2186_:
{
return v___x_2187_;
}
}
else
{
lean_object* v___x_2190_; 
lean_dec(v_value_2179_);
lean_dec(v_key_2178_);
if (v_isShared_2183_ == 0)
{
lean_ctor_set(v___x_2182_, 1, v_b_2176_);
lean_ctor_set(v___x_2182_, 0, v_a_2175_);
v___x_2190_ = v___x_2182_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2191_; 
v_reuseFailAlloc_2191_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2191_, 0, v_a_2175_);
lean_ctor_set(v_reuseFailAlloc_2191_, 1, v_b_2176_);
lean_ctor_set(v_reuseFailAlloc_2191_, 2, v_tail_2180_);
v___x_2190_ = v_reuseFailAlloc_2191_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
return v___x_2190_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(lean_object* v_m_2193_, lean_object* v_a_2194_, lean_object* v_b_2195_){
_start:
{
lean_object* v_size_2196_; lean_object* v_buckets_2197_; lean_object* v___x_2199_; uint8_t v_isShared_2200_; uint8_t v_isSharedCheck_2247_; 
v_size_2196_ = lean_ctor_get(v_m_2193_, 0);
v_buckets_2197_ = lean_ctor_get(v_m_2193_, 1);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_m_2193_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2199_ = v_m_2193_;
v_isShared_2200_ = v_isSharedCheck_2247_;
goto v_resetjp_2198_;
}
else
{
lean_inc(v_buckets_2197_);
lean_inc(v_size_2196_);
lean_dec(v_m_2193_);
v___x_2199_ = lean_box(0);
v_isShared_2200_ = v_isSharedCheck_2247_;
goto v_resetjp_2198_;
}
v_resetjp_2198_:
{
lean_object* v_parserName_2201_; lean_object* v_pos_2202_; lean_object* v___x_2203_; uint64_t v___x_2204_; uint64_t v___y_2206_; 
v_parserName_2201_ = lean_ctor_get(v_a_2194_, 1);
v_pos_2202_ = lean_ctor_get(v_a_2194_, 2);
v___x_2203_ = lean_array_get_size(v_buckets_2197_);
v___x_2204_ = l_String_instHashableRaw_hash(v_pos_2202_);
if (lean_obj_tag(v_parserName_2201_) == 0)
{
uint64_t v___x_2245_; 
v___x_2245_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2206_ = v___x_2245_;
goto v___jp_2205_;
}
else
{
uint64_t v_hash_2246_; 
v_hash_2246_ = lean_ctor_get_uint64(v_parserName_2201_, sizeof(void*)*2);
v___y_2206_ = v_hash_2246_;
goto v___jp_2205_;
}
v___jp_2205_:
{
uint64_t v___x_2207_; uint64_t v___x_2208_; uint64_t v___x_2209_; uint64_t v_fold_2210_; uint64_t v___x_2211_; uint64_t v___x_2212_; uint64_t v___x_2213_; size_t v___x_2214_; size_t v___x_2215_; size_t v___x_2216_; size_t v___x_2217_; size_t v___x_2218_; lean_object* v_bkt_2219_; uint8_t v___x_2220_; 
v___x_2207_ = lean_uint64_mix_hash(v___x_2204_, v___y_2206_);
v___x_2208_ = 32ULL;
v___x_2209_ = lean_uint64_shift_right(v___x_2207_, v___x_2208_);
v_fold_2210_ = lean_uint64_xor(v___x_2207_, v___x_2209_);
v___x_2211_ = 16ULL;
v___x_2212_ = lean_uint64_shift_right(v_fold_2210_, v___x_2211_);
v___x_2213_ = lean_uint64_xor(v_fold_2210_, v___x_2212_);
v___x_2214_ = lean_uint64_to_usize(v___x_2213_);
v___x_2215_ = lean_usize_of_nat(v___x_2203_);
v___x_2216_ = ((size_t)1ULL);
v___x_2217_ = lean_usize_sub(v___x_2215_, v___x_2216_);
v___x_2218_ = lean_usize_land(v___x_2214_, v___x_2217_);
v_bkt_2219_ = lean_array_uget_borrowed(v_buckets_2197_, v___x_2218_);
v___x_2220_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_2194_, v_bkt_2219_);
if (v___x_2220_ == 0)
{
lean_object* v___x_2221_; lean_object* v_size_x27_2222_; lean_object* v___x_2223_; lean_object* v_buckets_x27_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; uint8_t v___x_2230_; 
v___x_2221_ = lean_unsigned_to_nat(1u);
v_size_x27_2222_ = lean_nat_add(v_size_2196_, v___x_2221_);
lean_dec(v_size_2196_);
lean_inc(v_bkt_2219_);
v___x_2223_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2223_, 0, v_a_2194_);
lean_ctor_set(v___x_2223_, 1, v_b_2195_);
lean_ctor_set(v___x_2223_, 2, v_bkt_2219_);
v_buckets_x27_2224_ = lean_array_uset(v_buckets_2197_, v___x_2218_, v___x_2223_);
v___x_2225_ = lean_unsigned_to_nat(4u);
v___x_2226_ = lean_nat_mul(v_size_x27_2222_, v___x_2225_);
v___x_2227_ = lean_unsigned_to_nat(3u);
v___x_2228_ = lean_nat_div(v___x_2226_, v___x_2227_);
lean_dec(v___x_2226_);
v___x_2229_ = lean_array_get_size(v_buckets_x27_2224_);
v___x_2230_ = lean_nat_dec_le(v___x_2228_, v___x_2229_);
lean_dec(v___x_2228_);
if (v___x_2230_ == 0)
{
lean_object* v_val_2231_; lean_object* v___x_2233_; 
v_val_2231_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(v_buckets_x27_2224_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v_val_2231_);
lean_ctor_set(v___x_2199_, 0, v_size_x27_2222_);
v___x_2233_ = v___x_2199_;
goto v_reusejp_2232_;
}
else
{
lean_object* v_reuseFailAlloc_2234_; 
v_reuseFailAlloc_2234_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2234_, 0, v_size_x27_2222_);
lean_ctor_set(v_reuseFailAlloc_2234_, 1, v_val_2231_);
v___x_2233_ = v_reuseFailAlloc_2234_;
goto v_reusejp_2232_;
}
v_reusejp_2232_:
{
return v___x_2233_;
}
}
else
{
lean_object* v___x_2236_; 
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v_buckets_x27_2224_);
lean_ctor_set(v___x_2199_, 0, v_size_x27_2222_);
v___x_2236_ = v___x_2199_;
goto v_reusejp_2235_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v_size_x27_2222_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_buckets_x27_2224_);
v___x_2236_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2235_;
}
v_reusejp_2235_:
{
return v___x_2236_;
}
}
}
else
{
lean_object* v___x_2238_; lean_object* v_buckets_x27_2239_; lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2243_; 
lean_inc(v_bkt_2219_);
v___x_2238_ = lean_box(0);
v_buckets_x27_2239_ = lean_array_uset(v_buckets_2197_, v___x_2218_, v___x_2238_);
v___x_2240_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_2194_, v_b_2195_, v_bkt_2219_);
v___x_2241_ = lean_array_uset(v_buckets_x27_2239_, v___x_2218_, v___x_2240_);
if (v_isShared_2200_ == 0)
{
lean_ctor_set(v___x_2199_, 1, v___x_2241_);
v___x_2243_ = v___x_2199_;
goto v_reusejp_2242_;
}
else
{
lean_object* v_reuseFailAlloc_2244_; 
v_reuseFailAlloc_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2244_, 0, v_size_2196_);
lean_ctor_set(v_reuseFailAlloc_2244_, 1, v___x_2241_);
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
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(lean_object* v_a_2248_, lean_object* v_x_2249_){
_start:
{
if (lean_obj_tag(v_x_2249_) == 0)
{
lean_object* v___x_2250_; 
v___x_2250_ = lean_box(0);
return v___x_2250_;
}
else
{
lean_object* v_key_2251_; lean_object* v_value_2252_; lean_object* v_tail_2253_; uint8_t v___x_2254_; 
v_key_2251_ = lean_ctor_get(v_x_2249_, 0);
v_value_2252_ = lean_ctor_get(v_x_2249_, 1);
v_tail_2253_ = lean_ctor_get(v_x_2249_, 2);
v___x_2254_ = l_Lean_Parser_instBEqParserCacheKey_beq(v_key_2251_, v_a_2248_);
if (v___x_2254_ == 0)
{
v_x_2249_ = v_tail_2253_;
goto _start;
}
else
{
lean_object* v___x_2256_; 
lean_inc(v_value_2252_);
v___x_2256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2256_, 0, v_value_2252_);
return v___x_2256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg___boxed(lean_object* v_a_2257_, lean_object* v_x_2258_){
_start:
{
lean_object* v_res_2259_; 
v_res_2259_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2257_, v_x_2258_);
lean_dec(v_x_2258_);
lean_dec_ref(v_a_2257_);
return v_res_2259_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(lean_object* v_m_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_buckets_2262_; lean_object* v_parserName_2263_; lean_object* v_pos_2264_; lean_object* v___x_2265_; uint64_t v___x_2266_; uint64_t v___y_2268_; 
v_buckets_2262_ = lean_ctor_get(v_m_2260_, 1);
v_parserName_2263_ = lean_ctor_get(v_a_2261_, 1);
v_pos_2264_ = lean_ctor_get(v_a_2261_, 2);
v___x_2265_ = lean_array_get_size(v_buckets_2262_);
v___x_2266_ = l_String_instHashableRaw_hash(v_pos_2264_);
if (lean_obj_tag(v_parserName_2263_) == 0)
{
uint64_t v___x_2283_; 
v___x_2283_ = lean_uint64_once(&l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0, &l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Parser_SyntaxNodeKindSet_insert_spec__0_spec__0_spec__2___redArg___closed__0);
v___y_2268_ = v___x_2283_;
goto v___jp_2267_;
}
else
{
uint64_t v_hash_2284_; 
v_hash_2284_ = lean_ctor_get_uint64(v_parserName_2263_, sizeof(void*)*2);
v___y_2268_ = v_hash_2284_;
goto v___jp_2267_;
}
v___jp_2267_:
{
uint64_t v___x_2269_; uint64_t v___x_2270_; uint64_t v___x_2271_; uint64_t v_fold_2272_; uint64_t v___x_2273_; uint64_t v___x_2274_; uint64_t v___x_2275_; size_t v___x_2276_; size_t v___x_2277_; size_t v___x_2278_; size_t v___x_2279_; size_t v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; 
v___x_2269_ = lean_uint64_mix_hash(v___x_2266_, v___y_2268_);
v___x_2270_ = 32ULL;
v___x_2271_ = lean_uint64_shift_right(v___x_2269_, v___x_2270_);
v_fold_2272_ = lean_uint64_xor(v___x_2269_, v___x_2271_);
v___x_2273_ = 16ULL;
v___x_2274_ = lean_uint64_shift_right(v_fold_2272_, v___x_2273_);
v___x_2275_ = lean_uint64_xor(v_fold_2272_, v___x_2274_);
v___x_2276_ = lean_uint64_to_usize(v___x_2275_);
v___x_2277_ = lean_usize_of_nat(v___x_2265_);
v___x_2278_ = ((size_t)1ULL);
v___x_2279_ = lean_usize_sub(v___x_2277_, v___x_2278_);
v___x_2280_ = lean_usize_land(v___x_2276_, v___x_2279_);
v___x_2281_ = lean_array_uget_borrowed(v_buckets_2262_, v___x_2280_);
v___x_2282_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2261_, v___x_2281_);
return v___x_2282_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg___boxed(lean_object* v_m_2285_, lean_object* v_a_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_m_2285_, v_a_2286_);
lean_dec_ref(v_a_2286_);
lean_dec_ref(v_m_2285_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCacheFn(lean_object* v_parserName_2288_, lean_object* v_p_2289_, lean_object* v_c_2290_, lean_object* v_s_2291_){
_start:
{
lean_object* v_cache_2292_; lean_object* v_toCacheableParserContext_2293_; lean_object* v_stxStack_2294_; lean_object* v_pos_2295_; lean_object* v_recoveredErrors_2296_; lean_object* v_traces_2297_; lean_object* v___x_2299_; uint8_t v_isShared_2300_; uint8_t v_isSharedCheck_2354_; 
v_cache_2292_ = lean_ctor_get(v_s_2291_, 3);
lean_inc_ref(v_cache_2292_);
v_toCacheableParserContext_2293_ = lean_ctor_get(v_c_2290_, 2);
v_stxStack_2294_ = lean_ctor_get(v_s_2291_, 0);
v_pos_2295_ = lean_ctor_get(v_s_2291_, 2);
v_recoveredErrors_2296_ = lean_ctor_get(v_s_2291_, 5);
v_traces_2297_ = lean_ctor_get(v_s_2291_, 6);
v_isSharedCheck_2354_ = !lean_is_exclusive(v_s_2291_);
if (v_isSharedCheck_2354_ == 0)
{
lean_object* v_unused_2355_; lean_object* v_unused_2356_; lean_object* v_unused_2357_; 
v_unused_2355_ = lean_ctor_get(v_s_2291_, 4);
lean_dec(v_unused_2355_);
v_unused_2356_ = lean_ctor_get(v_s_2291_, 3);
lean_dec(v_unused_2356_);
v_unused_2357_ = lean_ctor_get(v_s_2291_, 1);
lean_dec(v_unused_2357_);
v___x_2299_ = v_s_2291_;
v_isShared_2300_ = v_isSharedCheck_2354_;
goto v_resetjp_2298_;
}
else
{
lean_inc(v_traces_2297_);
lean_inc(v_recoveredErrors_2296_);
lean_inc(v_pos_2295_);
lean_inc(v_stxStack_2294_);
lean_dec(v_s_2291_);
v___x_2299_ = lean_box(0);
v_isShared_2300_ = v_isSharedCheck_2354_;
goto v_resetjp_2298_;
}
v_resetjp_2298_:
{
lean_object* v_parserCache_2301_; lean_object* v_key_2302_; lean_object* v___x_2303_; 
v_parserCache_2301_ = lean_ctor_get(v_cache_2292_, 1);
lean_inc(v_pos_2295_);
lean_inc_ref(v_toCacheableParserContext_2293_);
v_key_2302_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_key_2302_, 0, v_toCacheableParserContext_2293_);
lean_ctor_set(v_key_2302_, 1, v_parserName_2288_);
lean_ctor_set(v_key_2302_, 2, v_pos_2295_);
v___x_2303_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_parserCache_2301_, v_key_2302_);
if (lean_obj_tag(v___x_2303_) == 1)
{
lean_object* v_val_2304_; lean_object* v___y_2306_; lean_object* v___x_2315_; lean_object* v___x_2316_; uint8_t v___x_2317_; 
lean_dec(v_pos_2295_);
lean_dec_ref(v_c_2290_);
lean_dec_ref(v_p_2289_);
v_val_2304_ = lean_ctor_get(v___x_2303_, 0);
lean_inc(v_val_2304_);
lean_dec_ref_known(v___x_2303_, 1);
v___x_2315_ = lean_array_get_size(v_traces_2297_);
v___x_2316_ = lean_unsigned_to_nat(0u);
v___x_2317_ = lean_nat_dec_eq(v___x_2315_, v___x_2316_);
if (v___x_2317_ == 0)
{
lean_object* v___x_2318_; lean_object* v___x_2319_; 
lean_inc(v_val_2304_);
v___x_2318_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_2318_, 0, v_key_2302_);
lean_ctor_set(v___x_2318_, 1, v_val_2304_);
v___x_2319_ = lean_array_push(v_traces_2297_, v___x_2318_);
v___y_2306_ = v___x_2319_;
goto v___jp_2305_;
}
else
{
lean_dec_ref_known(v_key_2302_, 3);
v___y_2306_ = v_traces_2297_;
goto v___jp_2305_;
}
v___jp_2305_:
{
lean_object* v_stx_2307_; lean_object* v_lhsPrec_2308_; lean_object* v_newPos_2309_; lean_object* v_errorMsg_2310_; lean_object* v___x_2311_; lean_object* v___x_2313_; 
v_stx_2307_ = lean_ctor_get(v_val_2304_, 0);
lean_inc(v_stx_2307_);
v_lhsPrec_2308_ = lean_ctor_get(v_val_2304_, 1);
lean_inc(v_lhsPrec_2308_);
v_newPos_2309_ = lean_ctor_get(v_val_2304_, 2);
lean_inc(v_newPos_2309_);
v_errorMsg_2310_ = lean_ctor_get(v_val_2304_, 3);
lean_inc(v_errorMsg_2310_);
lean_dec(v_val_2304_);
v___x_2311_ = l_Lean_Parser_SyntaxStack_push(v_stxStack_2294_, v_stx_2307_);
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 6, v___y_2306_);
lean_ctor_set(v___x_2299_, 4, v_errorMsg_2310_);
lean_ctor_set(v___x_2299_, 2, v_newPos_2309_);
lean_ctor_set(v___x_2299_, 1, v_lhsPrec_2308_);
lean_ctor_set(v___x_2299_, 0, v___x_2311_);
v___x_2313_ = v___x_2299_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2311_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_lhsPrec_2308_);
lean_ctor_set(v_reuseFailAlloc_2314_, 2, v_newPos_2309_);
lean_ctor_set(v_reuseFailAlloc_2314_, 3, v_cache_2292_);
lean_ctor_set(v_reuseFailAlloc_2314_, 4, v_errorMsg_2310_);
lean_ctor_set(v_reuseFailAlloc_2314_, 5, v_recoveredErrors_2296_);
lean_ctor_set(v_reuseFailAlloc_2314_, 6, v___y_2306_);
v___x_2313_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
return v___x_2313_;
}
}
}
else
{
lean_object* v_raw_2320_; lean_object* v_initStackSz_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2325_; 
lean_dec(v___x_2303_);
v_raw_2320_ = lean_ctor_get(v_stxStack_2294_, 0);
v_initStackSz_2321_ = lean_array_get_size(v_raw_2320_);
v___x_2322_ = lean_unsigned_to_nat(0u);
v___x_2323_ = lean_box(0);
if (v_isShared_2300_ == 0)
{
lean_ctor_set(v___x_2299_, 4, v___x_2323_);
lean_ctor_set(v___x_2299_, 1, v___x_2322_);
v___x_2325_ = v___x_2299_;
goto v_reusejp_2324_;
}
else
{
lean_object* v_reuseFailAlloc_2353_; 
v_reuseFailAlloc_2353_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2353_, 0, v_stxStack_2294_);
lean_ctor_set(v_reuseFailAlloc_2353_, 1, v___x_2322_);
lean_ctor_set(v_reuseFailAlloc_2353_, 2, v_pos_2295_);
lean_ctor_set(v_reuseFailAlloc_2353_, 3, v_cache_2292_);
lean_ctor_set(v_reuseFailAlloc_2353_, 4, v___x_2323_);
lean_ctor_set(v_reuseFailAlloc_2353_, 5, v_recoveredErrors_2296_);
lean_ctor_set(v_reuseFailAlloc_2353_, 6, v_traces_2297_);
v___x_2325_ = v_reuseFailAlloc_2353_;
goto v_reusejp_2324_;
}
v_reusejp_2324_:
{
lean_object* v_s_2326_; lean_object* v_cache_2327_; lean_object* v_stxStack_2328_; lean_object* v_lhsPrec_2329_; lean_object* v_pos_2330_; lean_object* v_errorMsg_2331_; lean_object* v_recoveredErrors_2332_; lean_object* v_traces_2333_; lean_object* v___x_2335_; uint8_t v_isShared_2336_; uint8_t v_isSharedCheck_2352_; 
v_s_2326_ = l___private_Lean_Parser_Types_0__Lean_Parser_withStackDrop(v_initStackSz_2321_, v_p_2289_, v_c_2290_, v___x_2325_);
v_cache_2327_ = lean_ctor_get(v_s_2326_, 3);
v_stxStack_2328_ = lean_ctor_get(v_s_2326_, 0);
v_lhsPrec_2329_ = lean_ctor_get(v_s_2326_, 1);
v_pos_2330_ = lean_ctor_get(v_s_2326_, 2);
v_errorMsg_2331_ = lean_ctor_get(v_s_2326_, 4);
v_recoveredErrors_2332_ = lean_ctor_get(v_s_2326_, 5);
v_traces_2333_ = lean_ctor_get(v_s_2326_, 6);
v_isSharedCheck_2352_ = !lean_is_exclusive(v_s_2326_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2335_ = v_s_2326_;
v_isShared_2336_ = v_isSharedCheck_2352_;
goto v_resetjp_2334_;
}
else
{
lean_inc(v_traces_2333_);
lean_inc(v_recoveredErrors_2332_);
lean_inc(v_errorMsg_2331_);
lean_inc(v_cache_2327_);
lean_inc(v_pos_2330_);
lean_inc(v_lhsPrec_2329_);
lean_inc(v_stxStack_2328_);
lean_dec(v_s_2326_);
v___x_2335_ = lean_box(0);
v_isShared_2336_ = v_isSharedCheck_2352_;
goto v_resetjp_2334_;
}
v_resetjp_2334_:
{
lean_object* v_tokenCache_2337_; lean_object* v_parserCache_2338_; lean_object* v___x_2340_; uint8_t v_isShared_2341_; uint8_t v_isSharedCheck_2351_; 
v_tokenCache_2337_ = lean_ctor_get(v_cache_2327_, 0);
v_parserCache_2338_ = lean_ctor_get(v_cache_2327_, 1);
v_isSharedCheck_2351_ = !lean_is_exclusive(v_cache_2327_);
if (v_isSharedCheck_2351_ == 0)
{
v___x_2340_ = v_cache_2327_;
v_isShared_2341_ = v_isSharedCheck_2351_;
goto v_resetjp_2339_;
}
else
{
lean_inc(v_parserCache_2338_);
lean_inc(v_tokenCache_2337_);
lean_dec(v_cache_2327_);
v___x_2340_ = lean_box(0);
v_isShared_2341_ = v_isSharedCheck_2351_;
goto v_resetjp_2339_;
}
v_resetjp_2339_:
{
lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2346_; 
v___x_2342_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_2328_);
lean_inc(v_errorMsg_2331_);
lean_inc(v_pos_2330_);
lean_inc(v_lhsPrec_2329_);
v___x_2343_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2343_, 0, v___x_2342_);
lean_ctor_set(v___x_2343_, 1, v_lhsPrec_2329_);
lean_ctor_set(v___x_2343_, 2, v_pos_2330_);
lean_ctor_set(v___x_2343_, 3, v_errorMsg_2331_);
v___x_2344_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(v_parserCache_2338_, v_key_2302_, v___x_2343_);
if (v_isShared_2341_ == 0)
{
lean_ctor_set(v___x_2340_, 1, v___x_2344_);
v___x_2346_ = v___x_2340_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v_tokenCache_2337_);
lean_ctor_set(v_reuseFailAlloc_2350_, 1, v___x_2344_);
v___x_2346_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2348_; 
if (v_isShared_2336_ == 0)
{
lean_ctor_set(v___x_2335_, 3, v___x_2346_);
v___x_2348_ = v___x_2335_;
goto v_reusejp_2347_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_stxStack_2328_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_lhsPrec_2329_);
lean_ctor_set(v_reuseFailAlloc_2349_, 2, v_pos_2330_);
lean_ctor_set(v_reuseFailAlloc_2349_, 3, v___x_2346_);
lean_ctor_set(v_reuseFailAlloc_2349_, 4, v_errorMsg_2331_);
lean_ctor_set(v_reuseFailAlloc_2349_, 5, v_recoveredErrors_2332_);
lean_ctor_set(v_reuseFailAlloc_2349_, 6, v_traces_2333_);
v___x_2348_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2347_;
}
v_reusejp_2347_:
{
return v___x_2348_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(lean_object* v_00_u03b2_2358_, lean_object* v_m_2359_, lean_object* v_a_2360_){
_start:
{
lean_object* v___x_2361_; 
v___x_2361_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___redArg(v_m_2359_, v_a_2360_);
return v___x_2361_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0___boxed(lean_object* v_00_u03b2_2362_, lean_object* v_m_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0(v_00_u03b2_2362_, v_m_2363_, v_a_2364_);
lean_dec_ref(v_a_2364_);
lean_dec_ref(v_m_2363_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1(lean_object* v_00_u03b2_2366_, lean_object* v_m_2367_, lean_object* v_a_2368_, lean_object* v_b_2369_){
_start:
{
lean_object* v___x_2370_; 
v___x_2370_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1___redArg(v_m_2367_, v_a_2368_, v_b_2369_);
return v___x_2370_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(lean_object* v_00_u03b2_2371_, lean_object* v_a_2372_, lean_object* v_x_2373_){
_start:
{
lean_object* v___x_2374_; 
v___x_2374_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___redArg(v_a_2372_, v_x_2373_);
return v___x_2374_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2375_, lean_object* v_a_2376_, lean_object* v_x_2377_){
_start:
{
lean_object* v_res_2378_; 
v_res_2378_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Parser_withCacheFn_spec__0_spec__0(v_00_u03b2_2375_, v_a_2376_, v_x_2377_);
lean_dec(v_x_2377_);
lean_dec_ref(v_a_2376_);
return v_res_2378_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(lean_object* v_00_u03b2_2379_, lean_object* v_a_2380_, lean_object* v_x_2381_){
_start:
{
uint8_t v___x_2382_; 
v___x_2382_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___redArg(v_a_2380_, v_x_2381_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2383_, lean_object* v_a_2384_, lean_object* v_x_2385_){
_start:
{
uint8_t v_res_2386_; lean_object* v_r_2387_; 
v_res_2386_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__2(v_00_u03b2_2383_, v_a_2384_, v_x_2385_);
lean_dec(v_x_2385_);
lean_dec_ref(v_a_2384_);
v_r_2387_ = lean_box(v_res_2386_);
return v_r_2387_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3(lean_object* v_00_u03b2_2388_, lean_object* v_data_2389_){
_start:
{
lean_object* v___x_2390_; 
v___x_2390_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3___redArg(v_data_2389_);
return v___x_2390_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4(lean_object* v_00_u03b2_2391_, lean_object* v_a_2392_, lean_object* v_b_2393_, lean_object* v_x_2394_){
_start:
{
lean_object* v___x_2395_; 
v___x_2395_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__4___redArg(v_a_2392_, v_b_2393_, v_x_2394_);
return v___x_2395_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2396_, lean_object* v_i_2397_, lean_object* v_source_2398_, lean_object* v_target_2399_){
_start:
{
lean_object* v___x_2400_; 
v___x_2400_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4___redArg(v_i_2397_, v_source_2398_, v_target_2399_);
return v___x_2400_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_2401_, lean_object* v_x_2402_, lean_object* v_x_2403_){
_start:
{
lean_object* v___x_2404_; 
v___x_2404_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Parser_withCacheFn_spec__1_spec__3_spec__4_spec__5___redArg(v_x_2402_, v_x_2403_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_withCache(lean_object* v_parserName_2405_, lean_object* v_p_2406_){
_start:
{
lean_object* v_info_2407_; lean_object* v_fn_2408_; lean_object* v___x_2410_; uint8_t v_isShared_2411_; uint8_t v_isSharedCheck_2416_; 
v_info_2407_ = lean_ctor_get(v_p_2406_, 0);
v_fn_2408_ = lean_ctor_get(v_p_2406_, 1);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_p_2406_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2410_ = v_p_2406_;
v_isShared_2411_ = v_isSharedCheck_2416_;
goto v_resetjp_2409_;
}
else
{
lean_inc(v_fn_2408_);
lean_inc(v_info_2407_);
lean_dec(v_p_2406_);
v___x_2410_ = lean_box(0);
v_isShared_2411_ = v_isSharedCheck_2416_;
goto v_resetjp_2409_;
}
v_resetjp_2409_:
{
lean_object* v___x_2412_; lean_object* v___x_2414_; 
v___x_2412_ = lean_alloc_closure((void*)(l_Lean_Parser_withCacheFn), 4, 2);
lean_closure_set(v___x_2412_, 0, v_parserName_2405_);
lean_closure_set(v___x_2412_, 1, v_fn_2408_);
if (v_isShared_2411_ == 0)
{
lean_ctor_set(v___x_2410_, 1, v___x_2412_);
v___x_2414_ = v___x_2410_;
goto v_reusejp_2413_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v_info_2407_);
lean_ctor_set(v_reuseFailAlloc_2415_, 1, v___x_2412_);
v___x_2414_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2413_;
}
v_reusejp_2413_:
{
return v___x_2414_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1(){
_start:
{
lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; 
v___x_2424_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__1));
v___x_2425_ = ((lean_object*)(l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___closed__2));
v___x_2426_ = l_Lean_addBuiltinDocString(v___x_2424_, v___x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1___boxed(lean_object* v_a_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_ParserFn_run(lean_object* v_p_2433_, lean_object* v_ictx_2434_, lean_object* v_pmctx_2435_, lean_object* v_tokens_2436_, lean_object* v_s_2437_){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; 
v___x_2438_ = ((lean_object*)(l_Lean_Parser_ParserFn_run___closed__0));
v___x_2439_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2439_, 0, v_ictx_2434_);
lean_ctor_set(v___x_2439_, 1, v_pmctx_2435_);
lean_ctor_set(v___x_2439_, 2, v___x_2438_);
lean_ctor_set(v___x_2439_, 3, v_tokens_2436_);
v___x_2440_ = lean_apply_2(v_p_2433_, v___x_2439_, v_s_2437_);
return v___x_2440_;
}
}
lean_object* runtime_initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_OrderInstances(uint8_t builtin);
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
res = runtime_initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_maxPrec = _init_l_Lean_Parser_maxPrec();
lean_mark_persistent(l_Lean_Parser_maxPrec);
l_Lean_Parser_argPrec = _init_l_Lean_Parser_argPrec();
lean_mark_persistent(l_Lean_Parser_argPrec);
l_Lean_Parser_leadPrec = _init_l_Lean_Parser_leadPrec();
lean_mark_persistent(l_Lean_Parser_leadPrec);
l_Lean_Parser_minPrec = _init_l_Lean_Parser_minPrec();
lean_mark_persistent(l_Lean_Parser_minPrec);
l_Lean_Parser_instInhabitedInputContext = _init_l_Lean_Parser_instInhabitedInputContext();
lean_mark_persistent(l_Lean_Parser_instInhabitedInputContext);
l_Lean_Parser_instInhabitedFirstTokens_default = _init_l_Lean_Parser_instInhabitedFirstTokens_default();
lean_mark_persistent(l_Lean_Parser_instInhabitedFirstTokens_default);
l_Lean_Parser_instInhabitedFirstTokens = _init_l_Lean_Parser_instInhabitedFirstTokens();
lean_mark_persistent(l_Lean_Parser_instInhabitedFirstTokens);
res = l___private_Lean_Parser_Types_0__Lean_Parser_withCache___regBuiltin_Lean_Parser_withCache_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Parser_InputContext_endPos__valid___autoParam = _init_l_Lean_Parser_InputContext_endPos__valid___autoParam();
lean_mark_persistent(l_Lean_Parser_InputContext_endPos__valid___autoParam);
l_Lean_Parser_InputContext_mk___auto__1 = _init_l_Lean_Parser_InputContext_mk___auto__1();
lean_mark_persistent(l_Lean_Parser_InputContext_mk___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Data_Trie(uint8_t builtin);
lean_object* initialize_Lean_DocString_Extension(uint8_t builtin);
lean_object* initialize_Init_Data_String_OrderInstances(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Types(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Data_Trie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Extension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_OrderInstances(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Types(builtin);
}
#ifdef __cplusplus
}
#endif
