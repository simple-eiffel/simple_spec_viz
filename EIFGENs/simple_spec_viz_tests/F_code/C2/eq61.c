/*
 * Code for class EQA_ENVIRONMENT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "eq61.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EQA_ENVIRONMENT}.item */
EIF_REFERENCE F79_1260 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
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
	
	RTEAA("item", 78, Current, 0, 1, 1376);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTOUCR(40,(nstcall = 0, F79_1266), (Current));
	(nstcall = 1, F886_5944(RTCW(tr1), arg1));
	RTHOOK(3);
	tr1 = RTOUCR(40,(nstcall = 0, F79_1266), (Current));
	tb1 = (nstcall = 1, F886_5934(RTCW(tr1)));
	if (tb1) {
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(40,(nstcall = 0, F79_1266), (Current))));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.item_attached */
EIF_REFERENCE F79_1261 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("item_attached", 78, Current, 1, 2, 1377);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F79_1260(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		Result = (EIF_REFERENCE) loc1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 1, F1076_7660(RTCW(arg1)));
		tr2 = RTMS32_EX_H(" \000\000\000n\000\000\000o\000\000\000t\000\000\000 \000\000\000d\000\000\000e\000\000\000f\000\000\000i\000\000\000n\000\000\000e\000\000\000d\000\000\000",12,1578321764);
		tr2 = (nstcall = 1, F1085_8031(RTCW(tr1), tr2));
		(nstcall = 1, F112_1585(RTCW(arg2), tr2, (EIF_BOOLEAN) 0));
		RTHOOK(6);
		Result = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F1076_7601(RTCW(Result)));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_ENVIRONMENT}.item_not_empty */
EIF_REFERENCE F79_1262 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,Result);
	RTLR(4,tr1);
	RTLR(5,tr2);
	RTLIU(6);
	
	RTEAA("item_not_empty", 78, Current, 0, 2, 1378);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (nstcall = 0, F79_1261(Current, arg1, arg2));
	RTHOOK(4);
	tr1 = (nstcall = 1, F1076_7660(RTCW(arg1)));
	tr2 = RTMS32_EX_H(" \000\000\000i\000\000\000s\000\000\000 \000\000\000e\000\000\000m\000\000\000p\000\000\000t\000\000\000y\000\000\000",9,1563366009);
	tr2 = (nstcall = 1, F1085_8031(RTCW(tr1), tr2));
	tb1 = (nstcall = 1, F1084_7968(RTCW(Result)));
	(nstcall = 1, F112_1585(RTCW(arg2), tr2, (EIF_BOOLEAN) !tb1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.get */
EIF_REFERENCE F79_1263 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLIU(5);
	
	RTEAA("get", 78, Current, 1, 1, 1379);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F79_1260(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(3);
		Result = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
		tr1 = (nstcall = 1, F1076_7657(loc1));
		(nstcall = -1, F1079_7733(RTCW(Result), tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.get_attached */
EIF_REFERENCE F79_1264 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("get_attached", 78, Current, 0, 2, 1380);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr1 = (nstcall = 0, F79_1261(Current, arg1, arg2));
	tr2 = (nstcall = 1, F1076_7657(RTCW(tr1)));
	(nstcall = -1, F1079_7733(RTCW(Result), tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("result_attached", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_ENVIRONMENT}.get_not_empty */
EIF_REFERENCE F79_1265 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("get_not_empty", 78, Current, 0, 2, 1381);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("an_asserter_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = RTLNS(eif_new_type(1079, 0x01).id, 1079, _OBJSIZ_1_0_0_4_0_0_0_0_);
	tr1 = (nstcall = 0, F79_1262(Current, arg1, arg2));
	tr2 = (nstcall = 1, F1076_7657(RTCW(tr1)));
	(nstcall = -1, F1079_7733(RTCW(Result), tr2));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.table */
static EIF_REFERENCE F79_1266_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(40)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("table", 78, Current, 0, 0, 1382);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,892,0xFF01,1083,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 892, _OBJSIZ_7_4_0_7_0_0_0_0_);
	}
	(nstcall = -1, F886_5902(RTCW(tr1), ((EIF_INTEGER_32) 10L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F79_1266 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(40,F79_1266_body,(Current));
}

/* {EQA_ENVIRONMENT}.put */
void F79_1267 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc2);
	RTLR(3,loc1);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,loc3);
	RTLIU(7);
	
	RTEAA("put", 78, Current, 3, 2, 1383);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_value_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_key_attached", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc2 = arg1;
	loc2 = RTRV(eif_new_type(1083, 0x01),loc2);
	if (EIF_TEST(loc2)) {
		RTHOOK(4);
		loc1 = (EIF_REFERENCE) loc2;
	} else {
		RTHOOK(5);
		loc1 = RTLNS(eif_new_type(1083, 0x01).id, 1083, _OBJSIZ_1_0_0_4_0_0_0_0_);
		(nstcall = -1, F1084_7950(RTCW(loc1), arg1));
	}
	RTHOOK(6);
	tr1 = RTOUCR(40,(nstcall = 0, F79_1266), (Current));
	(nstcall = 1, F886_5949(RTCW(tr1), loc1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("set", EX_POST);
		tb1 = '\0';
		tr1 = (nstcall = 0, F79_1260(Current, arg2));
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R6152[Dtype(RTCW(arg1))-1079])(arg1, loc3));
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
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {EQA_ENVIRONMENT}.reset */
void F79_1268 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("reset", 78, Current, 0, 0, 1384);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(40,(nstcall = 0, F79_1266), (Current));
	(nstcall = 1, F886_5956(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EQA_ENVIRONMENT}.is_identifier_char */
EIF_BOOLEAN F79_1269 (EIF_REFERENCE Current, EIF_CHARACTER_32 arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_identifier_char", 78, Current, 0, 1, 1385);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\01';
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
	if ((EIF_BOOLEAN) (arg1 >= tw1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!tb3) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (arg1 >= tw1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	if (!tb1) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '_';
		Result = (EIF_BOOLEAN)(arg1 == tw1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EQA_ENVIRONMENT}.substitute_recursive */
EIF_REFERENCE F79_1270 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc2 = (EIF_BOOLEAN) 0;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("substitute_recursive", 78, Current, 2, 1, 1386);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1085_7973(RTCW(Result), arg1));
	for (;;) {
		RTHOOK(3);
		tb1 = '\01';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '$';
		tb2 = (nstcall = 1, F1083_7931(RTCW(Result), tw1));
		if (!(EIF_BOOLEAN) !tb2) {
			tb1 = loc2;
		}
		if (tb1) break;
		RTHOOK(4);
		loc1 = (nstcall = 0, F79_1271(Current, Result));
		RTHOOK(5);
		tb2 = (nstcall = 1, F1083_7924(RTCW(loc1), Result));
		if (tb2) {
			RTHOOK(6);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
		} else {
			RTHOOK(7);
			loc2 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(8);
			Result = (EIF_REFERENCE) loc1;
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {EQA_ENVIRONMENT}.substitute */
EIF_REFERENCE F79_1271 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_CHARACTER_32 loc4 = (EIF_CHARACTER_32) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc6 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN loc7 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLR(3,loc5);
	RTLR(4,tr1);
	RTLR(5,loc8);
	RTLIU(6);
	
	RTEAA("substitute", 78, Current, 8, 1, 1371);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("line_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	(nstcall = -1, F1083_7897(RTCW(Result), ti4_1));
	RTHOOK(3);
	ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R6146[Dtype(RTCW(arg1))-1079])(arg1));
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
		loc4 = (EIF_CHARACTER_32) tw1;
		RTHOOK(7);
		if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_32) 36U)) {
			RTHOOK(8);
			if (loc6) {
				RTHOOK(9);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				RTHOOK(10);
				(nstcall = 1, F1085_8026(RTCW(Result), loc4));
			} else {
				RTHOOK(11);
				loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			}
		} else {
			RTHOOK(12);
			if (loc6) {
				RTHOOK(13);
				if ((EIF_BOOLEAN)(loc4 == (EIF_CHARACTER_32) 40U)) {
					RTHOOK(14);
					loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				} else {
					RTHOOK(15);
					loc3 = (EIF_INTEGER_32) loc1;
					for (;;) {
						RTHOOK(16);
						tb1 = '\01';
						if (!(EIF_BOOLEAN) (loc1 > loc2)) {
							tw1 = (nstcall = 1, (FUNCTION_CAST(EIF_CHARACTER_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6110[Dtype(RTCW(arg1))-1079])(arg1, loc1));
							tb1 = (EIF_BOOLEAN) !(nstcall = 0, F79_1269(Current, tw1));
						}
						if (tb1) break;
						RTHOOK(17);
						loc1++;
					}
					RTHOOK(18);
					loc1--;
					RTHOOK(19);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, loc3, loc1));
					loc5 = (EIF_REFERENCE) tr1;
					RTHOOK(20);
					tr1 = (nstcall = 0, F79_1260(Current, loc5));
					loc8 = tr1;
					if (EIF_TEST(loc8)) {
						RTHOOK(21);
						(nstcall = 1, F1085_8012(RTCW(Result), loc8));
					} else {
						RTHOOK(22);
						(nstcall = 1, F1085_8026(RTCW(Result), (EIF_CHARACTER_32) 36U));
						RTHOOK(23);
						(nstcall = 1, F1085_8011(RTCW(Result), loc5));
					}
					RTHOOK(24);
					if (loc7) {
						RTHOOK(25);
						loc7 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
						RTHOOK(26);
						loc1++;
					}
					RTHOOK(27);
					loc6 = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
				}
			} else {
				RTHOOK(28);
				(nstcall = 1, F1085_8026(RTCW(Result), loc4));
			}
		}
		RTHOOK(29);
		loc1++;
	}
	RTHOOK(30);
	if (loc6) {
		RTHOOK(31);
		(nstcall = 1, F1085_8026(RTCW(Result), loc4));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(32);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit61 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
