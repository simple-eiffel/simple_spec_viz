/*
 * Code for class SIMPLE_JSON_OBJECT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si129.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON_OBJECT}.make */
void F155_2089 (EIF_REFERENCE Current)
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
	
	RTEAA("make", 154, Current, 1, 0, 2104);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1086, 0x01).id, 1086, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1087_8077(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	(nstcall = 0, F155_2091(Current, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON_OBJECT}.make_with_json_object */
void F155_2090 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_with_json_object", 154, Current, 0, 1, 2105);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F155_2091(Current, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("json_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(Current);
		if ((EIF_BOOLEAN)(tr1 == arg1)) {
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
}

/* {SIMPLE_JSON_OBJECT}.make_value */
void F155_2091 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("make_value", 154, Current, 2, 1, 2106);
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
		RTCT("value_is_object", EX_PRE);
		loc1 = arg1;
		loc1 = RTRV(eif_new_type(1086, 0x01),loc1);
		RTTE(EIF_TEST(loc1), label_2);
		RTCK;
		RTJB;
label_2:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTCT0("attached {JSON_OBJECT} a_value as l_object", EX_CHECK);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1086, 0x01),loc2);
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

/* {SIMPLE_JSON_OBJECT}.json_value */
EIF_REFERENCE F155_2092 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {SIMPLE_JSON_OBJECT}.count */
EIF_INTEGER_32 F155_2093 (EIF_REFERENCE Current)
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
	
	RTEAA("count", 154, Current, 0, 0, 2108);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	ti4_1 = (nstcall = 1, F1087_8104(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.is_empty */
EIF_BOOLEAN F155_2094 (EIF_REFERENCE Current)
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
	
	RTEAA("is_empty", 154, Current, 0, 0, 2109);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1087_8106(RTCW(tr1)));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.has_key */
EIF_BOOLEAN F155_2095 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("has_key", 154, Current, 1, 1, 2110);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tb1 = (nstcall = 1, F1087_8093(RTCW(tr1), loc1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.item */
EIF_REFERENCE F155_2096 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("item", 154, Current, 2, 1, 2111);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1087_8095(RTCW(tr1), loc1));
	loc2 = tr2;
	if (EIF_TEST(loc2)) {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.string_item */
EIF_REFERENCE F155_2097 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("string_item", 154, Current, 1, 1, 2112);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2058(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F154_2065(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.integer_item */
EIF_INTEGER_64 F155_2098 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("integer_item", 154, Current, 1, 1, 2113);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2059(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		ti8_1 = (nstcall = 1, F154_2067(loc1));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.real_item */
EIF_REAL_64 F155_2099 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("real_item", 154, Current, 1, 1, 2114);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2059(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr8_1 = (nstcall = 1, F154_2069(loc1));
		Result = (EIF_REAL_64) tr8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.decimal_item */
EIF_REFERENCE F155_2100 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("decimal_item", 154, Current, 1, 1, 2115);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2059(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F154_2072(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.boolean_item */
EIF_BOOLEAN F155_2101 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLIU(4);
	
	RTEAA("boolean_item", 154, Current, 1, 1, 2116);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2061(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tb1 = (nstcall = 1, F154_2074(loc1));
		Result = (EIF_BOOLEAN) tb1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.object_item */
EIF_REFERENCE F155_2102 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("object_item", 154, Current, 1, 1, 2117);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2063(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F154_2076(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.array_item */
EIF_REFERENCE F155_2103 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("array_item", 154, Current, 1, 1, 2118);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 0, F155_2096(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		tb2 = (nstcall = 1, F154_2064(loc1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F154_2078(loc1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.integer_32_item */
EIF_INTEGER_32 F155_2104 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("integer_32_item", 154, Current, 0, 1, 2119);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti8_1 = (nstcall = 0, F155_2098(Current, arg1));
	ti4_1 = (EIF_INTEGER_32) ti8_1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.natural_32_item */
EIF_NATURAL_32 F155_2105 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("natural_32_item", 154, Current, 0, 1, 2120);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti8_1 = (nstcall = 0, F155_2098(Current, arg1));
	tu4_1 = (EIF_NATURAL_32) ti8_1;
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.optional_string */
EIF_REFERENCE F155_2106 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,Result);
	RTLIU(4);
	
	RTEAA("optional_string", 154, Current, 0, 1, 2121);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 0, F155_2095(Current, arg1));
	if (tb1) {
		RTHOOK(4);
		tr1 = (nstcall = 0, F155_2097(Current, arg1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.optional_integer */
EIF_INTEGER_64 F155_2107 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_64 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("optional_integer", 154, Current, 0, 2, 2122);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 0, F155_2095(Current, arg1));
	if (tb1) {
		RTHOOK(4);
		ti8_1 = (nstcall = 0, F155_2098(Current, arg1));
		Result = (EIF_INTEGER_64) ti8_1;
	} else {
		RTHOOK(5);
		Result = (EIF_INTEGER_64) arg2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.optional_boolean */
EIF_BOOLEAN F155_2108 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("optional_boolean", 154, Current, 0, 2, 2123);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 0, F155_2095(Current, arg1));
	if (tb1) {
		RTHOOK(4);
		tb1 = (nstcall = 0, F155_2101(Current, arg1));
		Result = (EIF_BOOLEAN) tb1;
	} else {
		RTHOOK(5);
		Result = (EIF_BOOLEAN) arg2;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.has_all_keys */
EIF_BOOLEAN F155_2109 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("has_all_keys", 154, Current, 2, 1, 2124);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F778_5439(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc1));
		if (tb2) break;
		RTHOOK(2);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb3 = (nstcall = 0, F155_2095(Current, tr1));
		tb1 = tb3;
		(nstcall = 1, F421_4818(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 1, F778_5439(RTCW(arg1)));
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, F421_4812(loc2));
			if (tb2) break;
			RTHOOK(4);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tb3 = (nstcall = 0, F155_2095(Current, tr1));
			tb1 = tb3;
			(nstcall = 1, F421_4818(loc2));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {SIMPLE_JSON_OBJECT}.has_any_key */
EIF_BOOLEAN F155_2110 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("has_any_key", 154, Current, 2, 1, 2125);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 1, F778_5439(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	tb1 = EIF_FALSE;
	for (;;) {
		if (tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc1));
		if (tb2) break;
		RTHOOK(2);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb3 = (nstcall = 0, F155_2095(Current, tr1));
		tb1 = tb3;
		(nstcall = 1, F421_4818(loc1));
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 1, F778_5439(RTCW(arg1)));
		loc2 = (EIF_REFERENCE) tr1;
		tb1 = EIF_FALSE;
		for (;;) {
			if (tb1) break;
			tb2 = (nstcall = 1, F421_4812(loc2));
			if (tb2) break;
			RTHOOK(4);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tb3 = (nstcall = 0, F155_2095(Current, tr1));
			tb1 = tb3;
			(nstcall = 1, F421_4818(loc2));
		}
		if ((EIF_BOOLEAN)(Result == tb1)) {
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

/* {SIMPLE_JSON_OBJECT}.missing_keys */
EIF_REFERENCE F155_2111 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN tb4;
	EIF_BOOLEAN tb5;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,loc4);
	RTLIU(8);
	
	RTEAA("missing_keys", 154, Current, 4, 1, 2126);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	ti4_1 = (nstcall = 1, F778_5442(RTCW(arg1)));
	(nstcall = -1, F867_5785(RTCW(tr1), ti4_1));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F778_5439(RTCW(arg1)));
	loc1 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb2 = (nstcall = 0, F155_2095(Current, tr1));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F421_4803(loc1));
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R4401[Dtype(RTCW(Result))-663])(Result, tr1));
		}
		RTHOOK(5);
		(nstcall = 1, F421_4818(loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("no_void_elements", EX_POST);
		tr1 = (nstcall = 1, F867_5799(RTCW(Result)));
		loc2 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, F421_4812(loc2));
			if (tb3) break;
			RTHOOK(7);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tb2 = (EIF_BOOLEAN)(tr1 != NULL);
			(nstcall = 1, F421_4818(loc2));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("all_missing", EX_POST);
		tr1 = (nstcall = 1, F867_5799(RTCW(Result)));
		loc3 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, F421_4812(loc3));
			if (tb3) break;
			RTHOOK(9);
			tr1 = (nstcall = 1, F421_4803(loc3));
			tb4 = (nstcall = 0, F155_2095(Current, tr1));
			tb2 = (EIF_BOOLEAN) !tb4;
			(nstcall = 1, F421_4818(loc3));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("none_extra", EX_POST);
		tr1 = (nstcall = 1, F778_5439(RTCW(arg1)));
		loc4 = (EIF_REFERENCE) tr1;
		tb2 = EIF_TRUE;
		for (;;) {
			if (!tb2) break;
			tb3 = (nstcall = 1, F421_4812(loc4));
			if (tb3) break;
			RTHOOK(11);
			tb4 = '\01';
			tr1 = (nstcall = 1, F421_4803(loc4));
			tb5 = (nstcall = 0, F155_2095(Current, tr1));
			if (!tb5) {
				tr1 = (nstcall = 1, F421_4803(loc4));
				tb5 = (nstcall = 1, F867_5797(RTCW(Result), tr1));
				tb4 = tb5;
			}
			tb2 = tb4;
			(nstcall = 1, F421_4818(loc4));
		}
		if (tb2) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_string */
EIF_REFERENCE F155_2112 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg2);
	RTLR(1,arg1);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Current);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLIU(8);
	
	RTEAA("put_string", 154, Current, 3, 2, 2127);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("value_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 10000000L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8085(RTCW(tr1), loc2, loc1));
	RTHOOK(7);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("value_stored", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F155_2097(Current, arg2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, F1083_7924(loc3, arg1));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_integer */
EIF_REFERENCE F155_2113 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("put_integer", 154, Current, 1, 2, 2128);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8087(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("value_stored", EX_POST);
		ti8_1 = (nstcall = 0, F155_2098(Current, arg2));
		if ((EIF_BOOLEAN)(ti8_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_real */
EIF_REFERENCE F155_2114 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("put_real", 154, Current, 1, 2, 2129);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8089(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
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

/* {SIMPLE_JSON_OBJECT}.put_decimal */
EIF_REFERENCE F155_2115 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,arg1);
	RTLR(5,Current);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("put_decimal", 154, Current, 2, 2, 2130);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1092, 0x01).id, 1092, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1093_8204(RTCW(tr1), arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8085(RTCW(tr1), loc2, loc1));
	RTHOOK(6);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_boolean */
EIF_REFERENCE F155_2116 (EIF_REFERENCE Current, EIF_BOOLEAN arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("put_boolean", 154, Current, 1, 2, 2131);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8090(RTCW(tr1), arg1, loc1));
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("value_stored", EX_POST);
		tb1 = (nstcall = 0, F155_2101(Current, arg2));
		if ((EIF_BOOLEAN)(tb1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_null */
EIF_REFERENCE F155_2117 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,Current);
	RTLR(5,Result);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("put_null", 154, Current, 3, 1, 2132);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8085(RTCW(tr1), loc2, loc1));
	RTHOOK(6);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("is_null", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F155_2096(Current, arg1));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, F154_2062(loc3));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_object */
EIF_REFERENCE F155_2118 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLIU(9);
	
	RTEAA("put_object", 154, Current, 3, 2, 2133);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F1087_8085(RTCW(tr1), tr2, loc1));
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_object", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F155_2096(Current, arg2));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = (nstcall = 1, F154_2063(loc2));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("nested_count", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F155_2102(Current, arg2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = (nstcall = 1, F155_2093(loc3));
			ti4_2 = (nstcall = 1, F155_2093(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_array */
EIF_REFERENCE F155_2119 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLR(7,loc2);
	RTLR(8,loc3);
	RTLIU(9);
	
	RTEAA("put_array", 154, Current, 3, 2, 2134);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F1087_8085(RTCW(tr1), tr2, loc1));
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("is_array", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F155_2096(Current, arg2));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			tb2 = (nstcall = 1, F154_2064(loc2));
			tb1 = tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("nested_count", EX_POST);
		tb1 = '\01';
		tr1 = (nstcall = 0, F155_2103(Current, arg2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			ti4_1 = (nstcall = 1, F156_2131(loc3));
			ti4_2 = (nstcall = 1, F156_2131(RTCW(arg1)));
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}.put_value */
EIF_REFERENCE F155_2120 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg2);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,Current);
	RTLR(4,arg1);
	RTLR(5,tr2);
	RTLR(6,Result);
	RTLIU(7);
	
	RTEAA("put_value", 154, Current, 1, 2, 2135);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1));
	(nstcall = 1, F1087_8085(RTCW(tr1), tr2, loc1));
	RTHOOK(5);
	Result = (EIF_REFERENCE) Current;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("result_is_current", EX_POST);
		if ((EIF_BOOLEAN)(Result == Current)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("key_exists", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg2));
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

/* {SIMPLE_JSON_OBJECT}.remove */
void F155_2121 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc1);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("remove", 154, Current, 1, 1, 2136);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("key_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTHOOK(2);
		RTCT("key_reasonable_length", EX_PRE);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ((EIF_INTEGER_32) 1024L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (nstcall = 0, F155_2093(Current));
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(3);
	tr2 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr2), arg1));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(4);
	tr2 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8091(RTCW(tr2), loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("key_removed", EX_POST);
		tb1 = (nstcall = 0, F155_2095(Current, arg1));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("count_decreased", EX_POST);
		ti4_2 = (nstcall = 0, F155_2093(Current));
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 <= ti4_1)) {
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

/* {SIMPLE_JSON_OBJECT}.wipe_out */
void F155_2122 (EIF_REFERENCE Current)
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
	
	RTEAA("wipe_out", 154, Current, 0, 0, 2137);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	(nstcall = 1, F1087_8092(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tb1 = (nstcall = 0, F155_2094(Current));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("count_zero", EX_POST);
		ti4_1 = (nstcall = 0, F155_2093(Current));
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

/* {SIMPLE_JSON_OBJECT}.keys */
EIF_REFERENCE F155_2123 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,Result);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("keys", 154, Current, 3, 0, 2138);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current);
	tr2 = (nstcall = 1, F1087_8102(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,777,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 777, _OBJSIZ_1_1_0_2_0_0_0_0_);
	}
	tr2 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(tr2)));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
	(nstcall = -1, F778_5430(RTCW(tr1), tr2, ti4_1, ti4_2));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	if (~in_assertion) {
		RTHOOK(4);
		RTCT("valid_index", EX_LINV);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
			tb1 = (EIF_BOOLEAN) (loc2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("copied_elements", EX_LINV);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
		ti4_2 = (nstcall = 1, F778_5442(RTCW(loc1)));
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 - ti4_1) <= ti4_2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("result_attached", EX_LINV);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("result_same_bounds", EX_LINV);
		tb1 = '\0';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
		ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
		if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("copied_keys_valid", EX_LINV);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
		tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
		*(EIF_INTEGER_32 *)tr1 = ti4_1;
		tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
		tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
		loc3 = (EIF_REFERENCE) tr1;
		tb1 = EIF_TRUE;
		for (;;) {
			if (!tb1) break;
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
			if (tb2) break;
			RTHOOK(9);
			ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
			tr1 = (nstcall = 1, F778_5435(RTCW(Result), ti4_1));
			tb1 = (EIF_BOOLEAN)(tr1 != NULL);
			(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(10);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc2 > ti4_1)) break;
		RTHOOK(11);
		tr1 = (nstcall = 1, F778_5435(RTCW(loc1), loc2));
		tr2 = (nstcall = 1, F1089_8134(RTCW(tr1)));
		(nstcall = 1, F778_5454(RTCW(Result), tr2, loc2));
		RTHOOK(12);
		loc2++;
		if (~in_assertion) {
			RTHOOK(4);
			RTCT("valid_index", EX_LINV);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
			if ((EIF_BOOLEAN) (loc2 >= ti4_1)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
				tb1 = (EIF_BOOLEAN) (loc2 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(5);
			RTCT("copied_elements", EX_LINV);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
			ti4_2 = (nstcall = 1, F778_5442(RTCW(loc1)));
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 - ti4_1) <= ti4_2)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(6);
			RTCT("result_attached", EX_LINV);
			if ((EIF_BOOLEAN)(Result != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(7);
			RTCT("result_same_bounds", EX_LINV);
			tb1 = '\0';
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_1_);
			ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
			if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_0_);
				ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_0_);
				tb1 = (EIF_BOOLEAN)(ti4_1 == ti4_2);
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(8);
			RTCT("copied_keys_valid", EX_LINV);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_1_);
			tr1 = RTLNS(eif_new_type(1005, 0x00).id, 1005, _OBJSIZ_0_0_0_1_0_0_0_0_);
			*(EIF_INTEGER_32 *)tr1 = ti4_1;
			tr2 = (nstcall = 1, F1004_6720(RTCW(tr1), (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
			tr1 = (nstcall = 1, F750_5385(RTCW(tr2)));
			loc3 = (EIF_REFERENCE) tr1;
			tb1 = EIF_TRUE;
			for (;;) {
				if (!tb1) break;
				tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
				if (tb2) break;
				RTHOOK(9);
				ti4_1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_INTEGER_32 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
				tr1 = (nstcall = 1, F778_5435(RTCW(Result), ti4_1));
				tb1 = (EIF_BOOLEAN)(tr1 != NULL);
				(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON_OBJECT}._invariant */
void F155_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTLD;
	
	RTLI(8);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,loc3);
	RTLR(6,loc4);
	RTLR(7,loc5);
	RTLIU(8);
	RTEAINV(l_feature_name, 128, Current, 5, 0);
	RTIT("json_value_is_object", Current);
	tr1 = *(EIF_REFERENCE *)(Current);
	loc1 = tr1;
	if ((EIF_TRUE)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("count_non_negative", Current);
	ti4_1 = (nstcall = 0, F155_2093(Current));
	if ((EIF_BOOLEAN) (ti4_1 >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("empty_definition", Current);
	tb1 = (nstcall = 0, F155_2094(Current));
	ti4_1 = (nstcall = 0, F155_2093(Current));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("keys_match_count", Current);
	tr1 = (nstcall = 0, F155_2123(Current));
	ti4_1 = (nstcall = 1, F778_5442(RTCW(tr1)));
	ti4_2 = (nstcall = 0, F155_2093(Current));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_void_keys", Current);
	tr1 = (nstcall = 0, F155_2123(Current));
	tr2 = (nstcall = 1, F778_5439(RTCW(tr1)));
	loc2 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc2));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc2));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		(nstcall = 1, F421_4818(loc2));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_empty_keys", Current);
	tr1 = (nstcall = 0, F155_2123(Current));
	tr2 = (nstcall = 1, F778_5439(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc3));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc3));
		tb3 = (nstcall = 1, F667_4976(RTCW(tr1)));
		tb1 = (EIF_BOOLEAN) !tb3;
		(nstcall = 1, F421_4818(loc3));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("every_key_exists", Current);
	tr1 = (nstcall = 0, F155_2123(Current));
	tr2 = (nstcall = 1, F778_5439(RTCW(tr1)));
	loc4 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc4));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc4));
		tb3 = (nstcall = 0, F155_2095(Current, tr1));
		tb1 = tb3;
		(nstcall = 1, F421_4818(loc4));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("every_key_has_value", Current);
	tr1 = (nstcall = 0, F155_2123(Current));
	tr2 = (nstcall = 1, F778_5439(RTCW(tr1)));
	loc5 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc5));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc5));
		tr1 = (nstcall = 0, F155_2096(Current, tr1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		(nstcall = 1, F421_4818(loc5));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit129 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
