/*
 * Code for class SIMPLE_JSON_VALUE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si128.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_VALUE}.make */
void F154_2056 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("make", 153, Current, 0, 1, 2100);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_VALUE}.json_value */
EIF_REFERENCE F154_2057 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_JSON_VALUE}.is_string */
EIF_BOOLEAN F154_2058 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_string", 153, Current, 0, 0, 2102);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6391[Dtype(RTCW(tr1))-1086])(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.is_number */
EIF_BOOLEAN F154_2059 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_number", 153, Current, 0, 0, 2069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6392[Dtype(RTCW(tr1))-1086])(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.is_integer */
EIF_BOOLEAN F154_2060 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_integer", 153, Current, 1, 0, 2070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1091, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tb1 = (nstcall = 1, F1092_8193(loc1));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.is_boolean */
EIF_BOOLEAN F154_2061 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_boolean", 153, Current, 1, 0, 2071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1087, 0x01),loc1);
	Result = (EIF_BOOLEAN) EIF_TEST(loc1);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.is_null */
EIF_BOOLEAN F154_2062 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_null", 153, Current, 0, 0, 2072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6395[Dtype(RTCW(tr1))-1086])(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.is_object */
EIF_BOOLEAN F154_2063 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_object", 153, Current, 0, 0, 2073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6393[Dtype(RTCW(tr1))-1086])(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.is_array */
EIF_BOOLEAN F154_2064 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("is_array", 153, Current, 0, 0, 2074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6394[Dtype(RTCW(tr1))-1086])(tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_string_32 */
EIF_REFERENCE F154_2065 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("as_string_32", 153, Current, 1, 0, 2075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_string", EX_PRE);
		tb1 = (nstcall = 0, F154_2058(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1088, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F1089_8134(loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		(nstcall = -1, F1076_7601(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.string_value */
EIF_REFERENCE F154_2066 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("string_value", 153, Current, 0, 0, 2076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_string", EX_PRE);
		tb1 = (nstcall = 0, F154_2058(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F154_2065(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_integer */
EIF_INTEGER_64 F154_2067 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("as_integer", 153, Current, 1, 0, 2077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1091, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		ti8_1 = (nstcall = 1, F1092_8189(loc1));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_natural */
EIF_NATURAL_64 F154_2068 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_64 tu8_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("as_natural", 153, Current, 1, 0, 2078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1091, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tu8_1 = (nstcall = 1, F1092_8190(loc1));
		Result = (EIF_NATURAL_64) tu8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_real */
EIF_REAL_64 F154_2069 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("as_real", 153, Current, 1, 0, 2079);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1091, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr8_1 = (nstcall = 1, F1092_8192(loc1));
		Result = (EIF_REAL_64) tr8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.integer_value */
EIF_INTEGER_64 F154_2070 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("integer_value", 153, Current, 0, 0, 2080);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti8_1 = (nstcall = 0, F154_2067(Current));
	Result = (EIF_INTEGER_64) ti8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.real_value */
EIF_REAL_64 F154_2071 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("real_value", 153, Current, 0, 0, 2081);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr8_1 = (nstcall = 0, F154_2069(Current));
	Result = (EIF_REAL_64) tr8_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_decimal */
EIF_REFERENCE F154_2072 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("as_decimal", 153, Current, 1, 0, 2082);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1091, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
		tr2 = (nstcall = 1, F1092_8188(loc1));
		(nstcall = -1, F1098_8211(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(1097, 0x01).id, 1097, _OBJSIZ_3_0_0_0_0_0_0_0_);
		(nstcall = -1, F1098_8216(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.decimal_value */
EIF_REFERENCE F154_2073 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("decimal_value", 153, Current, 0, 0, 2083);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_number", EX_PRE);
		tb1 = (nstcall = 0, F154_2059(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F154_2072(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_boolean */
EIF_BOOLEAN F154_2074 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("as_boolean", 153, Current, 1, 0, 2084);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_boolean", EX_PRE);
		tb1 = (nstcall = 0, F154_2061(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1087, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tb1 = *(EIF_BOOLEAN *)(loc1+ _CHROFF_0_0_);
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.boolean_value */
EIF_BOOLEAN F154_2075 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("boolean_value", 153, Current, 0, 0, 2085);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_boolean", EX_PRE);
		tb1 = (nstcall = 0, F154_2061(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = (nstcall = 0, F154_2074(Current));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_object */
EIF_REFERENCE F154_2076 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("as_object", 153, Current, 1, 0, 2086);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_object", EX_PRE);
		tb1 = (nstcall = 0, F154_2063(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1086, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F155_2090(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F155_2089(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.object_value */
EIF_REFERENCE F154_2077 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("object_value", 153, Current, 0, 0, 2087);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_object", EX_PRE);
		tb1 = (nstcall = 0, F154_2063(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F154_2076(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_array */
EIF_REFERENCE F154_2078 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("as_array", 153, Current, 1, 0, 2088);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_array", EX_PRE);
		tb1 = (nstcall = 0, F154_2064(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1090, 0x01),loc1);
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F156_2128(RTCW(tr1), loc1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F156_2127(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.array_value */
EIF_REFERENCE F154_2079 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("array_value", 153, Current, 0, 0, 2089);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_array", EX_PRE);
		tb1 = (nstcall = 0, F154_2064(Current));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F154_2078(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_json */
EIF_REFERENCE F154_2080 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("as_json", 153, Current, 0, 0, 2090);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6400[Dtype(RTCW(tr1))-1086])(tr1));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.as_json_32 */
EIF_REFERENCE F154_2081 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("as_json_32", 153, Current, 0, 0, 2091);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6400[Dtype(RTCW(tr1))-1086])(tr1));
	tr1 = (nstcall = 0, F154_2088(Current, tr2));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.to_json_string */
EIF_REFERENCE F154_2082 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("to_json_string", 153, Current, 1, 0, 2092);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6400[Dtype(RTCW(tr1))-1086])(tr1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr1 = (nstcall = 0, F154_2088(Current, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.representation */
EIF_REFERENCE F154_2083 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLIU(3);
	
	RTEAA("representation", 153, Current, 0, 0, 2093);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F154_2082(Current));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.to_pretty_json */
EIF_REFERENCE F154_2084 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_pretty_json", 153, Current, 1, 0, 2094);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(243, 0x01).id, 243, _OBJSIZ_2_0_0_1_0_0_0_0_);
	(nstcall = -1, F244_2974(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = (nstcall = 1, F244_2981(RTCW(loc1), tr1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.to_pretty_json_with_indent */
EIF_REFERENCE F154_2085 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("to_pretty_json_with_indent", 153, Current, 1, 1, 2095);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("indent_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("indent_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(243, 0x01).id, 243, _OBJSIZ_2_0_0_1_0_0_0_0_);
	(nstcall = -1, F244_2975(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = (nstcall = 1, F244_2981(RTCW(loc1), tr1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.to_pretty_json_with_tabs */
EIF_REFERENCE F154_2086 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_pretty_json_with_tabs", 153, Current, 1, 0, 2096);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(243, 0x01).id, 243, _OBJSIZ_2_0_0_1_0_0_0_0_);
	(nstcall = -1, F244_2974(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 1, F244_2977(RTCW(loc1)));
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = (nstcall = 1, F244_2981(RTCW(loc1), tr1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.to_pretty_json_with_spaces */
EIF_REFERENCE F154_2087 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("to_pretty_json_with_spaces", 153, Current, 1, 1, 2097);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("positive_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("reasonable_count", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 8L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(243, 0x01).id, 243, _OBJSIZ_2_0_0_1_0_0_0_0_);
	(nstcall = -1, F244_2974(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	(nstcall = 1, F244_2978(RTCW(loc1), arg1));
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr1 = (nstcall = 1, F244_2981(RTCW(loc1), tr1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}.utf_8_to_string_32 */
EIF_REFERENCE F154_2088 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("utf_8_to_string_32", 153, Current, 1, 1, 2098);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(365, 0x01).id, 365, _OBJSIZ_2_0_0_1_0_0_0_0_);
	(nstcall = -1, F366_4675(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F366_4695(RTCW(loc1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_VALUE}._invariant */
void F154_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_BOOLEAN tb6;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,loc2);
	RTLIU(4);
	RTEAINV(l_feature_name, 127, Current, 2, 0);
	RTIT("json_value_attached", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_json_type", Current);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	tb4 = '\01';
	tb5 = '\01';
	tb6 = (nstcall = 0, F154_2058(Current));
	if (!tb6) {
		tb6 = (nstcall = 0, F154_2059(Current));
		tb5 = tb6;
	}
	if (!tb5) {
		tb5 = (nstcall = 0, F154_2061(Current));
		tb4 = tb5;
	}
	if (!tb4) {
		tb4 = (nstcall = 0, F154_2062(Current));
		tb3 = tb4;
	}
	if (!tb3) {
		tb3 = (nstcall = 0, F154_2063(Current));
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = (nstcall = 0, F154_2064(Current));
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("string_excludes_others", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F154_2058(Current));
	if (tb2) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = (nstcall = 0, F154_2059(Current));
		if ((EIF_BOOLEAN) !tb6) {
			tb6 = (nstcall = 0, F154_2061(Current));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) {
			tb5 = (nstcall = 0, F154_2062(Current));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tb4 = (nstcall = 0, F154_2063(Current));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = (nstcall = 0, F154_2064(Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("number_excludes_others", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F154_2059(Current));
	if (tb2) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = (nstcall = 0, F154_2058(Current));
		if ((EIF_BOOLEAN) !tb6) {
			tb6 = (nstcall = 0, F154_2061(Current));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) {
			tb5 = (nstcall = 0, F154_2062(Current));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tb4 = (nstcall = 0, F154_2063(Current));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = (nstcall = 0, F154_2064(Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("boolean_excludes_others", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F154_2061(Current));
	if (tb2) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = (nstcall = 0, F154_2058(Current));
		if ((EIF_BOOLEAN) !tb6) {
			tb6 = (nstcall = 0, F154_2059(Current));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) {
			tb5 = (nstcall = 0, F154_2062(Current));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tb4 = (nstcall = 0, F154_2063(Current));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = (nstcall = 0, F154_2064(Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("null_excludes_others", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F154_2062(Current));
	if (tb2) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = (nstcall = 0, F154_2058(Current));
		if ((EIF_BOOLEAN) !tb6) {
			tb6 = (nstcall = 0, F154_2059(Current));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) {
			tb5 = (nstcall = 0, F154_2061(Current));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tb4 = (nstcall = 0, F154_2063(Current));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = (nstcall = 0, F154_2064(Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("object_excludes_others", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F154_2063(Current));
	if (tb2) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = (nstcall = 0, F154_2058(Current));
		if ((EIF_BOOLEAN) !tb6) {
			tb6 = (nstcall = 0, F154_2059(Current));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) {
			tb5 = (nstcall = 0, F154_2061(Current));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tb4 = (nstcall = 0, F154_2062(Current));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = (nstcall = 0, F154_2064(Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("array_excludes_others", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F154_2064(Current));
	if (tb2) {
		tb2 = '\0';
		tb3 = '\0';
		tb4 = '\0';
		tb5 = '\0';
		tb6 = (nstcall = 0, F154_2058(Current));
		if ((EIF_BOOLEAN) !tb6) {
			tb6 = (nstcall = 0, F154_2059(Current));
			tb5 = (EIF_BOOLEAN) !tb6;
		}
		if (tb5) {
			tb5 = (nstcall = 0, F154_2061(Current));
			tb4 = (EIF_BOOLEAN) !tb5;
		}
		if (tb4) {
			tb4 = (nstcall = 0, F154_2062(Current));
			tb3 = (EIF_BOOLEAN) !tb4;
		}
		if (tb3) {
			tb3 = (nstcall = 0, F154_2063(Current));
			tb2 = (EIF_BOOLEAN) !tb3;
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("string_type_accurate", Current);
	tb1 = (nstcall = 0, F154_2058(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	loc1 = RTRV(eif_new_type(1088, 0x01),loc1);
	if ((EIF_BOOLEAN)(tb1 == EIF_TEST(loc1))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("number_type_accurate", Current);
	tb1 = (nstcall = 0, F154_2059(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6392[Dtype(RTCW(tr1))-1086])(tr1));
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("boolean_type_accurate", Current);
	tb1 = (nstcall = 0, F154_2061(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	loc2 = tr1;
	loc2 = RTRV(eif_new_type(1087, 0x01),loc2);
	if ((EIF_BOOLEAN)(tb1 == EIF_TEST(loc2))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("null_type_accurate", Current);
	tb1 = (nstcall = 0, F154_2062(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6395[Dtype(RTCW(tr1))-1086])(tr1));
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("object_type_accurate", Current);
	tb1 = (nstcall = 0, F154_2063(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6393[Dtype(RTCW(tr1))-1086])(tr1));
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("array_type_accurate", Current);
	tb1 = (nstcall = 0, F154_2064(Current));
	tr1 = *(EIF_REFERENCE *)(Current);
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R6394[Dtype(RTCW(tr1))-1086])(tr1));
	if ((EIF_BOOLEAN)(tb1 == tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit128 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
