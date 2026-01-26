/*
 * Code for class ISE_RUNTIME
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is58.h"
#include "eif_memory_analyzer.h"
#include "eif_traverse.h"
#include "eif_built_in.h"
#include "eif_copy.h"
#include "eif_project.h"
#include "eif_cecil.h"
#include "eif_eiffel.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F76_1078
static EIF_REFERENCE inline_F76_1078 (EIF_INTEGER_32 arg1)
{
	return c_generator_of_type(eif_decoded_type(arg1));
	;
}
#define INLINE_F76_1078
#endif
#ifndef INLINE_F76_1079
static EIF_REFERENCE inline_F76_1079 (EIF_INTEGER_32 arg1)
{
	return c_generator_of_type(eif_decoded_type(arg1));
	;
}
#define INLINE_F76_1079
#endif
#ifndef INLINE_F76_1083
static int inline_F76_1083 (void)
{
	GTCX;	/* Needed in multithreaded mode as `in_assertion' is a per-thread data. */
return EIF_TEST(in_assertion!=0);
	;
}
#define INLINE_F76_1083
#endif
#ifndef INLINE_F76_1084
static EIF_REFERENCE inline_F76_1084 (EIF_INTEGER_32 arg1)
{
	return eif_once_objects_of_result_type(eif_decoded_type(arg1));
	;
}
#define INLINE_F76_1084
#endif
#ifndef INLINE_F76_1088
static int inline_F76_1088 (void)
{
	return eif_pre_ecma_mapping();
	;
}
#define INLINE_F76_1088
#endif
#ifndef INLINE_F76_1089
static void inline_F76_1089 (EIF_BOOLEAN arg1)
{
	eif_set_pre_ecma_mapping(arg1)
	;
}
#define INLINE_F76_1089
#endif
#ifndef INLINE_F76_1100
static EIF_REFERENCE inline_F76_1100 (EIF_INTEGER_32 arg1)
{
	const char *l_version = System(To_dtype(eif_decoded_type(arg1).id)).cn_version;
if (l_version && (l_version[0] != (char) 0)) {
	return RTMS(l_version);
} else {
	return NULL;
}
	;
}
#define INLINE_F76_1100
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {ISE_RUNTIME}.generator_of_type */
EIF_REFERENCE F76_1078 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("generator_of_type", 75, Current, 0, 1, 1166);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F76_1078 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.generator_8_of_type */
EIF_REFERENCE F76_1079 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("generator_8_of_type", 75, Current, 0, 1, 1167);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F76_1079 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.check_assert */
EIF_BOOLEAN F76_1080 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("check_assert", 75, Current, 0, 1, 1168);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(c_check_assert(arg1));
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.generating_type_of_type */
EIF_REFERENCE F76_1081 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("generating_type_of_type", 75, Current, 0, 1, 1169);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_generating_type_of_type__i4_s1 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.generating_type_8_of_type */
EIF_REFERENCE F76_1082 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("generating_type_8_of_type", 75, Current, 0, 1, 1170);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_generating_type_of_type__i4_s1 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.in_assertion */
EIF_BOOLEAN F76_1083 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("in_assertion", 75, Current, 0, 0, 1171);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F76_1083 ());
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.once_objects */
EIF_REFERENCE F76_1084 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("once_objects", 75, Current, 0, 1, 1172);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F76_1084 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.type_conforms_to */
EIF_BOOLEAN F76_1085 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("type_conforms_to", 75, Current, 0, 2, 1173);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_type_conforms_to__i4_i4_b (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.type_id_from_name */
EIF_INTEGER_32 F76_1086 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("type_id_from_name", 75, Current, 0, 1, 1174);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) eif_type_id((char*) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.dynamic_type */
EIF_INTEGER_32 F76_1087 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN uarg1;
	EIF_BOOLEAN uarg;
	RTS_SD;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg1);
	RTLIU(2);
	
	RTEAA("dynamic_type", 75, Current, 0, 1, 1175);
	RTSA(Dtype(Current));
	RTSC;
	uarg1 = (EIF_BOOLEAN) RTS_OU (arg1);
	uarg = uarg1;
	if (uarg) {
		RTS_RC;
		RTS_RS (arg1);
		RTS_RW;
	}
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_dynamic_type__o_i4 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	if (uarg) {
		RTS_RD;
	}
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.pre_ecma_mapping_status */
EIF_BOOLEAN F76_1088 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pre_ecma_mapping_status", 75, Current, 0, 0, 1176);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = EIF_TEST(inline_F76_1088 ());
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.set_pre_ecma_mapping */
void F76_1089 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_pre_ecma_mapping", 75, Current, 0, 1, 1177);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	inline_F76_1089 ((EIF_BOOLEAN) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.new_instance_of */
EIF_REFERENCE F76_1090 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_instance_of", 75, Current, 0, 1, 1178);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_new_instance_of__i4_o (arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.new_special_of_reference_instance_of */
EIF_REFERENCE F76_1091 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_special_of_reference_instance_of", 75, Current, 0, 2, 1179);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_new_special_of_reference_instance_of__i4_i4_s (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.new_tuple_instance_of */
EIF_REFERENCE F76_1092 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_tuple_instance_of", 75, Current, 0, 1, 1180);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_new_tuple_instance_of__i4_u (arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.new_type_instance_of */
EIF_REFERENCE F76_1093 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("new_type_instance_of", 75, Current, 0, 1, 1181);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_new_type_instance_of__i4_t (arg1);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_attached_type */
EIF_BOOLEAN F76_1094 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_attached_type", 75, Current, 0, 1, 1182);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_attached_type__i4_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.detachable_type */
EIF_INTEGER_32 F76_1095 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("detachable_type", 75, Current, 0, 1, 1183);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_detachable_type__i4_i4 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.attached_type */
EIF_INTEGER_32 F76_1096 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("attached_type", 75, Current, 0, 1, 1184);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_attached_type__i4_i4 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_field_transient_of_type */
EIF_BOOLEAN F76_1097 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_field_transient_of_type", 75, Current, 0, 2, 1185);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_field_transient_of_type__i4_i4_b (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_field_expanded_of_type */
EIF_BOOLEAN F76_1098 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_field_expanded_of_type", 75, Current, 0, 2, 1186);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_field_expanded_of_type__i4_i4_b (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.persistent_field_count_of_type */
EIF_INTEGER_32 F76_1099 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("persistent_field_count_of_type", 75, Current, 0, 1, 1187);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_persistent_field_count_of_type__i4_i4 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.storable_version_of_type */
EIF_REFERENCE F76_1100 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("storable_version_of_type", 75, Current, 0, 1, 1188);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = inline_F76_1100 ((EIF_INTEGER_32) arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.compiler_version */
EIF_INTEGER_32 F76_1101 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("compiler_version", 75, Current, 0, 0, 1189);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) egc_compiler_tag;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.reference_field_at_offset */
EIF_REFERENCE F76_1102 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Result);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("reference_field_at_offset", 75, Current, 0, 2, 1190);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_reference_field_at_offset__p_i4_o (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	if (!Result) {RTEC(EN_FAIL);}
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.raw_reference_field_at_offset */
EIF_POINTER F76_1103 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("raw_reference_field_at_offset", 75, Current, 0, 2, 1191);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) eif_builtin_ISE_RUNTIME_raw_reference_field_at_offset__p_i4_p (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.dynamic_type_at_offset */
EIF_INTEGER_32 F76_1104 (EIF_REFERENCE Current, EIF_POINTER arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("dynamic_type_at_offset", 75, Current, 0, 2, 1192);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_dynamic_type_at_offset__p_i4_i4 (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_copy_semantics_field */
EIF_BOOLEAN F76_1105 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_copy_semantics_field", 75, Current, 0, 3, 1193);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_copy_semantics_field__i4_p_i4_b (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_special_copy_semantics_item */
EIF_BOOLEAN F76_1106 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_copy_semantics_item", 75, Current, 0, 2, 1194);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_special_copy_semantics_item__i4_p_b (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.field_count_of_type */
EIF_INTEGER_32 F76_1107 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_count_of_type", 75, Current, 0, 1, 1195);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_field_count_of_type__i4_i4 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.field_offset_of_type */
EIF_INTEGER_32 F76_1108 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_offset_of_type", 75, Current, 0, 2, 1196);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_field_offset_of_type__i4_i4_i4 (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.object_size */
EIF_NATURAL_64 F76_1109 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("object_size", 75, Current, 0, 1, 1197);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_64) eif_builtin_ISE_RUNTIME_object_size__p_u8 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.field_name_of_type */
EIF_POINTER F76_1110 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_name_of_type", 75, Current, 0, 2, 1198);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) eif_builtin_ISE_RUNTIME_field_name_of_type__i4_i4_p (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.field_type_of_type */
EIF_INTEGER_32 F76_1111 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_type_of_type", 75, Current, 0, 2, 1199);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_field_type_of_type__i4_i4_i4 (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.field_static_type_of_type */
EIF_INTEGER_32 F76_1112 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("field_static_type_of_type", 75, Current, 0, 2, 1200);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_field_static_type_of_type__i4_i4_i4 (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.reference_field */
EIF_REFERENCE F76_1113 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("reference_field", 75, Current, 0, 3, 1201);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_reference_field__i4_p_i4_o (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.character_8_field */
EIF_CHARACTER_8 F76_1114 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_field", 75, Current, 0, 3, 1202);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_CHARACTER_8) eif_builtin_ISE_RUNTIME_character_8_field__i4_p_i4_c1 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.character_32_field */
EIF_CHARACTER_32 F76_1115 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_field", 75, Current, 0, 3, 1203);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_CHARACTER_32) eif_builtin_ISE_RUNTIME_character_32_field__i4_p_i4_c4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.boolean_field */
EIF_BOOLEAN F76_1116 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_field", 75, Current, 0, 3, 1204);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_boolean_field__i4_p_i4_b (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_8_field */
EIF_NATURAL_8 F76_1117 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_field", 75, Current, 0, 3, 1205);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) eif_builtin_ISE_RUNTIME_natural_8_field__i4_p_i4_u1 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_16_field */
EIF_NATURAL_16 F76_1118 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_field", 75, Current, 0, 3, 1206);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_16) eif_builtin_ISE_RUNTIME_natural_16_field__i4_p_i4_u2 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_32_field */
EIF_NATURAL_32 F76_1119 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_field", 75, Current, 0, 3, 1207);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_32) eif_builtin_ISE_RUNTIME_natural_32_field__i4_p_i4_u4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_64_field */
EIF_NATURAL_64 F76_1120 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_field", 75, Current, 0, 3, 1208);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_64) eif_builtin_ISE_RUNTIME_natural_64_field__i4_p_i4_u8 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_8_field */
EIF_INTEGER_8 F76_1121 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_field", 75, Current, 0, 3, 1209);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_8) eif_builtin_ISE_RUNTIME_integer_8_field__i4_p_i4_i1 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_16_field */
EIF_INTEGER_16 F76_1122 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_field", 75, Current, 0, 3, 1210);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_16) eif_builtin_ISE_RUNTIME_integer_16_field__i4_p_i4_i2 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_32_field */
EIF_INTEGER_32 F76_1123 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_32_field", 75, Current, 0, 3, 1211);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_integer_32_field__i4_p_i4_i4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_64_field */
EIF_INTEGER_64 F76_1124 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_field", 75, Current, 0, 3, 1212);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_64) eif_builtin_ISE_RUNTIME_integer_64_field__i4_p_i4_i8 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.real_32_field */
EIF_REAL_32 F76_1125 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_field", 75, Current, 0, 3, 1213);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_32) eif_builtin_ISE_RUNTIME_real_32_field__i4_p_i4_r4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.pointer_field */
EIF_POINTER F76_1126 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_field", 75, Current, 0, 3, 1214);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) eif_builtin_ISE_RUNTIME_pointer_field__i4_p_i4_p (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.real_64_field */
EIF_REAL_64 F76_1127 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_field", 75, Current, 0, 3, 1215);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_64) eif_builtin_ISE_RUNTIME_real_64_field__i4_p_i4_r8 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.reference_field_at */
EIF_REFERENCE F76_1128 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,Result);
	RTLIU(2);
	
	RTEAA("reference_field_at", 75, Current, 0, 3, 1216);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REFERENCE) eif_builtin_ISE_RUNTIME_reference_field_at__i4_p_i4_o (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.raw_reference_field_at */
EIF_POINTER F76_1129 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("raw_reference_field_at", 75, Current, 0, 3, 1217);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) eif_builtin_ISE_RUNTIME_raw_reference_field_at__i4_p_i4_p (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.character_8_field_at */
EIF_CHARACTER_8 F76_1130 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 Result = ((EIF_CHARACTER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_8_field_at", 75, Current, 0, 3, 1218);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_CHARACTER_8) eif_builtin_ISE_RUNTIME_character_8_field_at__i4_p_i4_c1 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.character_32_field_at */
EIF_CHARACTER_32 F76_1131 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 Result = ((EIF_CHARACTER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("character_32_field_at", 75, Current, 0, 3, 1219);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_CHARACTER_32) eif_builtin_ISE_RUNTIME_character_32_field_at__i4_p_i4_c4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.boolean_field_at */
EIF_BOOLEAN F76_1132 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_field_at", 75, Current, 0, 3, 1220);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_boolean_field_at__i4_p_i4_b (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_8_field_at */
EIF_NATURAL_8 F76_1133 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_8 Result = ((EIF_NATURAL_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_8_field_at", 75, Current, 0, 3, 1221);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_8) eif_builtin_ISE_RUNTIME_natural_8_field_at__i4_p_i4_u1 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_16_field_at */
EIF_NATURAL_16 F76_1134 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_16 Result = ((EIF_NATURAL_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_16_field_at", 75, Current, 0, 3, 1222);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_16) eif_builtin_ISE_RUNTIME_natural_16_field_at__i4_p_i4_u2 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_32_field_at */
EIF_NATURAL_32 F76_1135 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_32_field_at", 75, Current, 0, 3, 1223);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_32) eif_builtin_ISE_RUNTIME_natural_32_field_at__i4_p_i4_u4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.natural_64_field_at */
EIF_NATURAL_64 F76_1136 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("natural_64_field_at", 75, Current, 0, 3, 1224);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_NATURAL_64) eif_builtin_ISE_RUNTIME_natural_64_field_at__i4_p_i4_u8 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_8_field_at */
EIF_INTEGER_8 F76_1137 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_8 Result = ((EIF_INTEGER_8) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_8_field_at", 75, Current, 0, 3, 1225);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_8) eif_builtin_ISE_RUNTIME_integer_8_field_at__i4_p_i4_i1 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_16_field_at */
EIF_INTEGER_16 F76_1138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_16 Result = ((EIF_INTEGER_16) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_16_field_at", 75, Current, 0, 3, 1226);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_16) eif_builtin_ISE_RUNTIME_integer_16_field_at__i4_p_i4_i2 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_32_field_at */
EIF_INTEGER_32 F76_1139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_32_field_at", 75, Current, 0, 3, 1227);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_integer_32_field_at__i4_p_i4_i4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.integer_64_field_at */
EIF_INTEGER_64 F76_1140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_64_field_at", 75, Current, 0, 3, 1228);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_64) eif_builtin_ISE_RUNTIME_integer_64_field_at__i4_p_i4_i8 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.real_32_field_at */
EIF_REAL_32 F76_1141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REAL_32 Result = ((EIF_REAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_32_field_at", 75, Current, 0, 3, 1118);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_32) eif_builtin_ISE_RUNTIME_real_32_field_at__i4_p_i4_r4 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.pointer_field_at */
EIF_POINTER F76_1142 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("pointer_field_at", 75, Current, 0, 3, 1119);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_POINTER) eif_builtin_ISE_RUNTIME_pointer_field_at__i4_p_i4_p (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.real_64_field_at */
EIF_REAL_64 F76_1143 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3)
{
	GTCX
	RTEX;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_64_field_at", 75, Current, 0, 3, 1120);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_REAL_64) eif_builtin_ISE_RUNTIME_real_64_field_at__i4_p_i4_r8 (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_special */
EIF_BOOLEAN F76_1144 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special", 75, Current, 0, 1, 1121);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_special__p_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_special_of_expanded */
EIF_BOOLEAN F76_1145 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_expanded", 75, Current, 0, 1, 1122);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_special_of_expanded__p_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_special_of_reference */
EIF_BOOLEAN F76_1146 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_reference", 75, Current, 0, 1, 1123);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_special_of_reference__p_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_expanded */
EIF_BOOLEAN F76_1147 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_expanded", 75, Current, 0, 1, 1124);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_expanded__p_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_tuple */
EIF_BOOLEAN F76_1148 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple", 75, Current, 0, 1, 1125);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_tuple__p_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_special_of_reference_type */
EIF_BOOLEAN F76_1149 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_reference_type", 75, Current, 0, 1, 1126);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_special_of_reference_type__i4_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_special_of_reference_or_basic_type */
EIF_BOOLEAN F76_1150 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_special_of_reference_or_basic_type", 75, Current, 0, 1, 1127);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_special_of_reference_or_basic_type__i4_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.is_tuple_type */
EIF_BOOLEAN F76_1151 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_tuple_type", 75, Current, 0, 1, 1128);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_tuple_type__i4_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.set_reference_field */
void F76_1152 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg4);
	RTLIU(2);
	
	RTEAA("set_reference_field", 75, Current, 0, 4, 1129);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_reference_field__i4_p_i4_o_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_real_64_field */
void F76_1153 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_64_field", 75, Current, 0, 4, 1130);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_real_64_field__i4_p_i4_r8_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_character_8_field */
void F76_1154 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_8_field", 75, Current, 0, 4, 1131);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_character_8_field__i4_p_i4_c1_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_character_32_field */
void F76_1155 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_32_field", 75, Current, 0, 4, 1132);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_character_32_field__i4_p_i4_c4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_boolean_field */
void F76_1156 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_boolean_field", 75, Current, 0, 4, 1133);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_boolean_field__i4_p_i4_b_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_8_field */
void F76_1157 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_8_field", 75, Current, 0, 4, 1134);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_8_field__i4_p_i4_u1_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_16_field */
void F76_1158 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_16_field", 75, Current, 0, 4, 1135);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_16_field__i4_p_i4_u2_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_32_field */
void F76_1159 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_32_field", 75, Current, 0, 4, 1136);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_32_field__i4_p_i4_u4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_64_field */
void F76_1160 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_64_field", 75, Current, 0, 4, 1137);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_64_field__i4_p_i4_u8_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_8_field */
void F76_1161 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_8_field", 75, Current, 0, 4, 1138);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_8_field__i4_p_i4_i1_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_16_field */
void F76_1162 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_16_field", 75, Current, 0, 4, 1139);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_16_field__i4_p_i4_i2_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_32_field */
void F76_1163 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_32_field", 75, Current, 0, 4, 1140);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_32_field__i4_p_i4_i4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_64_field */
void F76_1164 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_64_field", 75, Current, 0, 4, 1141);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_64_field__i4_p_i4_i8_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_real_32_field */
void F76_1165 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_32_field", 75, Current, 0, 4, 1142);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_real_32_field__i4_p_i4_r4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_pointer_field */
void F76_1166 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_pointer_field", 75, Current, 0, 4, 1143);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_pointer_field__i4_p_i4_p_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_reference_field_at */
void F76_1167 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg4);
	RTLIU(2);
	
	RTEAA("set_reference_field_at", 75, Current, 0, 4, 1144);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_reference_field_at__i4_p_i4_o_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_real_64_field_at */
void F76_1168 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_REAL_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_64_field_at", 75, Current, 0, 4, 1145);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_real_64_field_at__i4_p_i4_r8_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_character_8_field_at */
void F76_1169 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_8 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_8_field_at", 75, Current, 0, 4, 1146);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_character_8_field_at__i4_p_i4_c1_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_character_32_field_at */
void F76_1170 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_CHARACTER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_character_32_field_at", 75, Current, 0, 4, 1147);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_character_32_field_at__i4_p_i4_c4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_boolean_field_at */
void F76_1171 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_BOOLEAN arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_boolean_field_at", 75, Current, 0, 4, 1148);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_boolean_field_at__i4_p_i4_b_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_8_field_at */
void F76_1172 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_8 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_8_field_at", 75, Current, 0, 4, 1149);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_8_field_at__i4_p_i4_u1_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_16_field_at */
void F76_1173 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_16 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_16_field_at", 75, Current, 0, 4, 1150);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_16_field_at__i4_p_i4_u2_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_32_field_at */
void F76_1174 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_32_field_at", 75, Current, 0, 4, 1151);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_32_field_at__i4_p_i4_u4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_natural_64_field_at */
void F76_1175 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_NATURAL_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_natural_64_field_at", 75, Current, 0, 4, 1152);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_natural_64_field_at__i4_p_i4_u8_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_8_field_at */
void F76_1176 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_8 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_8_field_at", 75, Current, 0, 4, 1153);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_8_field_at__i4_p_i4_i1_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_16_field_at */
void F76_1177 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_16 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_16_field_at", 75, Current, 0, 4, 1154);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_16_field_at__i4_p_i4_i2_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_32_field_at */
void F76_1178 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_32_field_at", 75, Current, 0, 4, 1155);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_32_field_at__i4_p_i4_i4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_integer_64_field_at */
void F76_1179 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_64 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_integer_64_field_at", 75, Current, 0, 4, 1156);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_integer_64_field_at__i4_p_i4_i8_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_real_32_field_at */
void F76_1180 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_REAL_32 arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_real_32_field_at", 75, Current, 0, 4, 1157);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_real_32_field_at__i4_p_i4_r4_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.set_pointer_field_at */
void F76_1181 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_INTEGER_32 arg3, EIF_POINTER arg4)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_pointer_field_at", 75, Current, 0, 4, 1158);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_set_pointer_field_at__i4_p_i4_p_ (arg1, arg2, arg3, arg4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.generic_parameter_count */
EIF_INTEGER_32 F76_1182 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("generic_parameter_count", 75, Current, 0, 1, 1159);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_generic_parameter_count__i4_i4 (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.eif_gen_param_id */
EIF_INTEGER_32 F76_1183 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("eif_gen_param_id", 75, Current, 0, 2, 1160);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_INTEGER_32) eif_builtin_ISE_RUNTIME_eif_gen_param_id__i4_i4_i4 (arg1, arg2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.lock_marking */
void F76_1184 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("lock_marking", 75, Current, 0, 0, 1161);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	EIF_ENTER_C;eif_lock_marking();
	
	EIF_EXIT_C;
	RTGC;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.unlock_marking */
void F76_1185 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("unlock_marking", 75, Current, 0, 0, 1162);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eif_unlock_marking();
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.is_object_marked */
EIF_BOOLEAN F76_1186 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_object_marked", 75, Current, 0, 1, 1163);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	Result = (EIF_BOOLEAN) eif_builtin_ISE_RUNTIME_is_object_marked__p_b (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_RUNTIME}.unmark_object */
void F76_1187 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("unmark_object", 75, Current, 0, 1, 1164);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_unmark_object__p_ (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_RUNTIME}.mark_object */
void F76_1188 (EIF_REFERENCE Current, EIF_POINTER arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("mark_object", 75, Current, 0, 1, 1165);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_RUNTIME_mark_object__p_ (arg1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit58 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
