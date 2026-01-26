/*
 * Code for class SIMPLE_JSON_ARRAY
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si130.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_ARRAY}.make */
void F156_2127 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("make", 155, Current, 1, 0, 2167);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1090, 0x01).id, 1090, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1091_8158(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 0, F156_2129(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_ARRAY}.make_with_json_array */
void F156_2128 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("make_with_json_array", 155, Current, 0, 1, 2168);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("array_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F156_2129(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_ARRAY}.make_value */
void F156_2129 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,loc2);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("make_value", 155, Current, 2, 1, 2169);
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
		RTCK;
		RTHOOK(2);
		RTCT("value_is_array", EX_PRE);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1090, 0x01),loc1);
		RTTE(EIF_TEST(loc1), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("attached {JSON_ARRAY} a_value as l_array", EX_CHECK);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1090, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTCK0;
	} else {
		RTCF0;
	}
	RTHOOK(4);
	RTAR(Current, loc2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) loc2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("value_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
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
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_ARRAY}.json_value */
EIF_REFERENCE F156_2130 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_JSON_ARRAY}.count */
EIF_INTEGER_32 F156_2131 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("count", 155, Current, 0, 0, 2143);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F1091_8166(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.is_empty */
EIF_BOOLEAN F156_2132 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 155, Current, 0, 0, 2144);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1091_8167(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.item */
EIF_REFERENCE F156_2133 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("item", 155, Current, 0, 1, 2145);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = (nstcall = 1, F1091_8161(RTCW(tr2), arg1));
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr3));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.string_item */
EIF_REFERENCE F156_2134 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("string_item", 155, Current, 1, 1, 2146);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2058(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F154_2065(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.integer_item */
EIF_INTEGER_64 F156_2135 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("integer_item", 155, Current, 1, 1, 2147);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2059(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		ti8_1 = (nstcall = 1, F154_2067(loc1));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.real_item */
EIF_REAL_64 F156_2136 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("real_item", 155, Current, 1, 1, 2148);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2059(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr8_1 = (nstcall = 1, F154_2069(loc1));
		Result = (EIF_REAL_64) tr8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.decimal_item */
EIF_REFERENCE F156_2137 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("decimal_item", 155, Current, 1, 1, 2149);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2059(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F154_2072(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.boolean_item */
EIF_BOOLEAN F156_2138 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("boolean_item", 155, Current, 1, 1, 2150);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2061(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tb1 = (nstcall = 1, F154_2074(loc1));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.object_item */
EIF_REFERENCE F156_2139 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("object_item", 155, Current, 1, 1, 2151);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2063(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F154_2076(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.array_item */
EIF_REFERENCE F156_2140 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("array_item", 155, Current, 1, 1, 2152);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_index", EX_PRE);
		tb1 = (nstcall = 0, F156_2141(Current, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = (nstcall = 0, F156_2133(Current, arg1));
	loc1 = tr1;
	if ((EIF_TRUE)) {
		tb2 = (nstcall = 1, F154_2064(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = (nstcall = 1, F154_2078(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.valid_index */
EIF_BOOLEAN F156_2141 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("valid_index", 155, Current, 0, 1, 2153);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1091_8168(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_string */
EIF_REFERENCE F156_2142 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("add_string", 155, Current, 1, 1, 2154);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 10000000L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tr2 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr2), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(3);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8170(RTCW(tr2), loc1));
	RTHOOK(4);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("last_is_string", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2058(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_integer */
EIF_REFERENCE F156_2143 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("add_integer", 155, Current, 1, 1, 2155);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(tr2), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8170(RTCW(tr2), loc1));
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_is_number", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2059(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("last_value", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti8_1 = (nstcall = 0, F156_2135(Current, ti4_2));
		if ((EIF_BOOLEAN)(ti8_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_real */
EIF_REFERENCE F156_2144 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("add_real", 155, Current, 1, 1, 2156);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(tr2), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8170(RTCW(tr2), loc1));
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_is_number", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2059(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_decimal */
EIF_REFERENCE F156_2145 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("add_decimal", 155, Current, 1, 1, 2157);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = RTLNS(eif_new_type(1092, 0x01).id, 1092, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1093_8204(RTCW(tr2), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8170(RTCW(tr2), loc1));
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_is_number", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2059(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_boolean */
EIF_REFERENCE F156_2146 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("add_boolean", 155, Current, 1, 1, 2158);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(tr2), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8170(RTCW(tr2), loc1));
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_is_boolean", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2061(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("last_value", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tb1 = (nstcall = 0, F156_2138(Current, ti4_2));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_null */
EIF_REFERENCE F156_2147 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("add_null", 155, Current, 1, 0, 2159);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8170(RTCW(tr2), loc1));
	RTHOOK(3);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_is_null", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2062(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_object */
EIF_REFERENCE F156_2148 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTEAA("add_object", 155, Current, 1, 1, 2160);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F1091_8170(RTCW(tr2), tr3));
	RTHOOK(2);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_is_object", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2063(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("nested_count", EX_POST);
		tb1 = '\01';
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2139(Current, ti4_2));
		loc1 = tr2;
		if (EIF_TEST(loc1)) {
			ti4_2 = (nstcall = 1, F155_2093(loc1));
			ti4_3 = (nstcall = 1, F155_2093(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_array */
EIF_REFERENCE F156_2149 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 ti4_3;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLR(6,loc1);
	RTLIU(7);
	
	RTEAA("add_array", 155, Current, 1, 1, 2161);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F1091_8170(RTCW(tr2), tr3));
	RTHOOK(2);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_is_array", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2133(Current, ti4_2));
		tb1 = (nstcall = 1, F154_2064(RTCW(tr2)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("nested_count", EX_POST);
		tb1 = '\01';
		ti4_2 = (nstcall = 0, F156_2131(Current));
		tr2 = (nstcall = 0, F156_2140(Current, ti4_2));
		loc1 = tr2;
		if (EIF_TEST(loc1)) {
			ti4_2 = (nstcall = 1, F156_2131(loc1));
			ti4_3 = (nstcall = 1, F156_2131(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_2 == ti4_3);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.add_value */
EIF_REFERENCE F156_2150 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg1);
	RTLR(4,tr3);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("add_value", 155, Current, 0, 1, 2162);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F156_2131(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tr2 = *(EIF_REFERENCE *)(Current);
	tr3 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F1091_8170(RTCW(tr2), tr3));
	RTHOOK(2);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("count_increased", EX_POST);
		ti4_2 = (nstcall = 0, F156_2131(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN)(ti4_2 == (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_ARRAY}.wipe_out */
void F156_2151 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("wipe_out", 155, Current, 0, 0, 2163);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1091_8173(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tb1 = (nstcall = 0, F156_2132(Current));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("count_zero", EX_POST);
		ti4_1 = (nstcall = 0, F156_2131(Current));
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
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

/* {SIMPLE_JSON_ARRAY}._invariant */
void F156_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLIU(6);
	RTEAINV(l_feature_name, 129, Current, 3, 0);
	RTIT("json_value_is_array", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_non_negative", Current);
	ti4_1 = (nstcall = 0, F156_2131(Current));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_definition", Current);
	tb1 = (nstcall = 0, F156_2132(Current));
	ti4_1 = (nstcall = 0, F156_2131(Current));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("valid_index_lower_bound", Current);
	ti4_1 = (nstcall = 0, F156_2131(Current));
	tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_1));
	tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
	loc2 = (EIF_REFERENCE) tr1;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc2)-334])(loc2));
		if (tb2) break;
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc2)-334])(loc2));
		tb3 = (nstcall = 0, F156_2141(Current, ti4_1));
		tb1 = tb3;
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc2)-334])(loc2));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("invalid_index_zero", Current);
	tb1 = (nstcall = 0, F156_2141(Current, ((EIF_INTEGER_32) 0L)));
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("invalid_index_beyond_count", Current);
	ti4_1 = (nstcall = 0, F156_2131(Current));
	tb1 = (nstcall = 0, F156_2141(Current, (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L))));
	if ((EIF_BOOLEAN) !tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("every_index_has_value", Current);
	ti4_1 = (nstcall = 0, F156_2131(Current));
	tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
	*(EIF_INTEGER_32 *)tr1 = ((EIF_INTEGER_32) 1L);
	tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), ti4_1));
	tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
	loc3 = (EIF_REFERENCE) tr1;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
		if (tb2) break;
		tr1 = *(EIF_REFERENCE *)(Current);
		ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
		tr2 = (nstcall = 1, F1091_8161(RTCW(tr1), ti4_1));
		tb1 = (EIF_BOOLEAN)(tr2 != NULL);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit130 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
