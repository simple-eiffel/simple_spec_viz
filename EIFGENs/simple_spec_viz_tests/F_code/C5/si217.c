/*
 * Code for class SIMPLE_JSON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "si217.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SIMPLE_JSON}.parse */
EIF_REFERENCE F245_2995 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("parse", 244, Current, 6, 1, 2999);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.decode */
EIF_REFERENCE F245_2996 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("decode", 244, Current, 6, 1, 3000);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.deserialize */
EIF_REFERENCE F245_2997 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("deserialize", 244, Current, 6, 1, 3001);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.load_json */
EIF_REFERENCE F245_2998 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("load_json", 244, Current, 6, 1, 3002);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.from_string */
EIF_REFERENCE F245_2999 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("from_string", 244, Current, 6, 1, 3003);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.parse_response */
EIF_REFERENCE F245_3000 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("parse_response", 244, Current, 6, 1, 3004);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.decode_payload */
EIF_REFERENCE F245_3001 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("decode_payload", 244, Current, 6, 1, 3005);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.parse_message */
EIF_REFERENCE F245_3002 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc5);
	RTLR(6,Result);
	RTLR(7,loc3);
	RTLR(8,tr2);
	RTLR(9,loc6);
	RTLR(10,loc4);
	RTLIU(11);
	
	RTEAA("parse_message", 244, Current, 6, 1, 3006);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = '\0';
	tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	if (tb2) {
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1) + _REFACS_2_);
		loc5 = tr1;
		tb1 = EIF_TEST(loc5);
	}
	if (tb1) {
		RTHOOK(8);
		tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc5));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = '\0';
		tb2 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		if (tb2) {
			tr1 = (nstcall = 1, F1113_8553(RTCW(loc1)));
			loc6 = tr1;
			tb1 = EIF_TEST(loc6);
		}
		if (tb1) {
			RTHOOK(13);
			loc4 = (EIF_REFERENCE) loc6;
			RTHOOK(14);
			ti4_1 = (nstcall = 1, F1091_8166(RTCW(loc4)));
			if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
				RTHOOK(15);
				tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
				tr2 = (nstcall = 1, F1091_8161(RTCW(loc4), ((EIF_INTEGER_32) 1L)));
				(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, tr2));
				Result = (EIF_REFERENCE) tr1;
			}
		} else {
			RTHOOK(16);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(17);
		RTCT("errors_cleared_on_success", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN)(Result != NULL)) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.parse_file */
EIF_REFERENCE F245_3003 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("parse_file", 244, Current, 2, 1, 3007);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F745_5288(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc1))-310])(loc1));
	if (tb2) {
		tb2 = (nstcall = 1, F743_5045(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, F743_5077(RTCW(loc1)));
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3768[Dtype(RTCW(loc1))-310])(loc1, ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr1 = (nstcall = 0, F245_3060(Current, tr1));
		tr1 = (nstcall = 0, F245_3059(Current, tr1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, F743_5094(RTCW(loc1)));
		RTHOOK(9);
		tr1 = (nstcall = 0, F245_2995(Current, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
		tr2 = RTMS_EX_H("Cannot read file: ",18,819028000);
		tr3 = (nstcall = 1, F1076_7654(RTCW(arg1)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F20_389(RTCW(tr1), tr2));
		(nstcall = 0, F245_3054(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.load_config */
EIF_REFERENCE F245_3004 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("load_config", 244, Current, 2, 1, 3008);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F745_5288(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc1))-310])(loc1));
	if (tb2) {
		tb2 = (nstcall = 1, F743_5045(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, F743_5077(RTCW(loc1)));
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3768[Dtype(RTCW(loc1))-310])(loc1, ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr1 = (nstcall = 0, F245_3060(Current, tr1));
		tr1 = (nstcall = 0, F245_3059(Current, tr1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, F743_5094(RTCW(loc1)));
		RTHOOK(9);
		tr1 = (nstcall = 0, F245_2995(Current, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
		tr2 = RTMS_EX_H("Cannot read file: ",18,819028000);
		tr3 = (nstcall = 1, F1076_7654(RTCW(arg1)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F20_389(RTCW(tr1), tr2));
		(nstcall = 0, F245_3054(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.read_json_file */
EIF_REFERENCE F245_3005 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("read_json_file", 244, Current, 2, 1, 3009);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F745_5288(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc1))-310])(loc1));
	if (tb2) {
		tb2 = (nstcall = 1, F743_5045(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, F743_5077(RTCW(loc1)));
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3768[Dtype(RTCW(loc1))-310])(loc1, ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr1 = (nstcall = 0, F245_3060(Current, tr1));
		tr1 = (nstcall = 0, F245_3059(Current, tr1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, F743_5094(RTCW(loc1)));
		RTHOOK(9);
		tr1 = (nstcall = 0, F245_2995(Current, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
		tr2 = RTMS_EX_H("Cannot read file: ",18,819028000);
		tr3 = (nstcall = 1, F1076_7654(RTCW(arg1)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F20_389(RTCW(tr1), tr2));
		(nstcall = 0, F245_3054(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.load_from_file */
EIF_REFERENCE F245_3006 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("load_from_file", 244, Current, 2, 1, 3010);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F745_5288(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc1))-310])(loc1));
	if (tb2) {
		tb2 = (nstcall = 1, F743_5045(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, F743_5077(RTCW(loc1)));
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3768[Dtype(RTCW(loc1))-310])(loc1, ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr1 = (nstcall = 0, F245_3060(Current, tr1));
		tr1 = (nstcall = 0, F245_3059(Current, tr1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, F743_5094(RTCW(loc1)));
		RTHOOK(9);
		tr1 = (nstcall = 0, F245_2995(Current, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
		tr2 = RTMS_EX_H("Cannot read file: ",18,819028000);
		tr3 = (nstcall = 1, F1076_7654(RTCW(arg1)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F20_389(RTCW(tr1), tr2));
		(nstcall = 0, F245_3054(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.deserialize_file */
EIF_REFERENCE F245_3007 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLIU(8);
	
	RTEAA("deserialize_file", 244, Current, 2, 1, 3011);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(744, 0x01).id, 744, _OBJSIZ_5_7_2_4_1_1_2_1_);
	(nstcall = -1, F745_5288(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R3712[Dtype(RTCW(loc1))-310])(loc1));
	if (tb2) {
		tb2 = (nstcall = 1, F743_5045(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		(nstcall = 1, F743_5077(RTCW(loc1)));
		RTHOOK(6);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R4435[Dtype(RTCW(loc1))-743])(loc1));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_INTEGER_32)) R3768[Dtype(RTCW(loc1))-310])(loc1, ti4_1));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(loc1));
		tr1 = (nstcall = 0, F245_3060(Current, tr1));
		tr1 = (nstcall = 0, F245_3059(Current, tr1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, F743_5094(RTCW(loc1)));
		RTHOOK(9);
		tr1 = (nstcall = 0, F245_2995(Current, loc2));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
		tr2 = RTMS_EX_H("Cannot read file: ",18,819028000);
		tr3 = (nstcall = 1, F1076_7654(RTCW(arg1)));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr2)-1079])(tr2, tr3));
		tr2 = (nstcall = 1, F1076_7660(RTCW(tr3)));
		(nstcall = -1, F20_389(RTCW(tr1), tr2));
		(nstcall = 0, F245_3054(Current, tr1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.is_valid_json */
EIF_BOOLEAN F245_3008 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,loc2);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("is_valid_json", 244, Current, 3, 1, 3012);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	(nstcall = 0, F245_3015(Current));
	RTHOOK(3);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3058(Current, arg1));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
	(nstcall = -1, F1113_8536(RTCW(tr1), loc2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F1113_8556(RTCW(loc1)));
	RTHOOK(7);
	tb1 = (nstcall = 1, F1113_8540(RTCW(loc1)));
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(8);
	if ((EIF_BOOLEAN) !Result) {
		RTHOOK(9);
		tr1 = RTMS_EX_H("[",1,91);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, loc2));
		tr1 = RTMS_EX_H("]",1,93);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = RTLNS(eif_new_type(1112, 0x01).id, 1112, _OBJSIZ_9_2_0_3_0_0_0_0_);
		(nstcall = -1, F1113_8536(RTCW(tr1), loc3));
		loc1 = (EIF_REFERENCE) tr1;
		RTHOOK(11);
		(nstcall = 1, F1113_8556(RTCW(loc1)));
		RTHOOK(12);
		tb1 = (nstcall = 1, F1113_8540(RTCW(loc1)));
		Result = (EIF_BOOLEAN) tb1;
		RTHOOK(13);
		if ((EIF_BOOLEAN) !Result) {
			RTHOOK(14);
			(nstcall = 0, F245_3055(Current, loc1, arg1));
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("valid_implies_no_errors", EX_POST);
		tb1 = '\01';
		if (Result) {
			tb2 = (nstcall = 0, F245_3009(Current));
			tb1 = (EIF_BOOLEAN) !tb2;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(16);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.has_errors */
EIF_BOOLEAN F245_3009 (EIF_REFERENCE Current)
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
	
	RTEAA("has_errors", 244, Current, 0, 0, 3013);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F245_3010(Current));
	tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F245_3010(Current));
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !tb1)) {
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

/* {SIMPLE_JSON}.last_errors */
static EIF_REFERENCE F245_3010_body (EIF_REFERENCE Current)
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
	
	RTEAA("last_errors", 244, Current, 0, 0, 3014);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,19,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

EIF_REFERENCE F245_3010 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current);
	if (!r) {
		GTCX
		RTLD;
		RTLI(1);
		RTLR(0,Current);
		RTLIU(1);
		r = (F245_3010_body (Current));
		*(EIF_REFERENCE *)(Current) = r;
		RTAR(Current, r);
		RTLE;
	}
	return r;
}


/* {SIMPLE_JSON}.error_count */
EIF_INTEGER_32 F245_3011 (EIF_REFERENCE Current)
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
	
	RTEAA("error_count", 244, Current, 0, 0, 3015);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F245_3010(Current));
	ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		tr1 = (nstcall = 0, F245_3010(Current));
		ti4_1 = (nstcall = 1, F867_5806(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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

/* {SIMPLE_JSON}.first_error */
EIF_REFERENCE F245_3012 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
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
	
	RTEAA("first_error", 244, Current, 0, 0, 3016);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F245_3010(Current));
	tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F245_3010(Current));
		tr2 = (nstcall = 1, F867_5793(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr2;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("has_error_implies_result", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 0, F245_3009(Current));
		if (tb2) {
			tb1 = (EIF_BOOLEAN)(Result != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("no_error_implies_void", EX_POST);
		tb1 = '\01';
		tb2 = (nstcall = 0, F245_3009(Current));
		if ((EIF_BOOLEAN) !tb2) {
			tb1 = (EIF_BOOLEAN)(Result == NULL);
		}
		if (tb1) {
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

/* {SIMPLE_JSON}.errors_as_string */
EIF_REFERENCE F245_3013 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("errors_as_string", 244, Current, 1, 0, 3017);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F245_3010(Current));
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tb2 = (nstcall = 1, F667_4976(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012",1,10)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		}
		RTHOOK(5);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = (nstcall = 1, F20_398(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		RTHOOK(6);
		(nstcall = 1, F421_4818(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.detailed_errors */
EIF_REFERENCE F245_3014 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	
	RTEAA("detailed_errors", 244, Current, 1, 0, 3018);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 0, F245_3010(Current));
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc1));
		if (tb1) break;
		RTHOOK(3);
		tb2 = (nstcall = 1, F667_4976(RTCW(Result)));
		if ((EIF_BOOLEAN) !tb2) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012\012",2,2570)));
			(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		}
		RTHOOK(5);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("Error ",6,2056441376)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(6);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = (nstcall = 1, F1_25(RTCW(tr1)));
		tr1 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(7);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H(":",1,58)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(8);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("\012",1,10)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr1));
		RTHOOK(9);
		tr1 = (nstcall = 1, F421_4803(loc1));
		tr2 = (nstcall = 1, F20_399(RTCW(tr1)));
		(nstcall = 1, F1085_8012(RTCW(Result), tr2));
		RTHOOK(10);
		(nstcall = 1, F421_4818(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.clear_errors */
void F245_3015 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("clear_errors", 244, Current, 0, 0, 3019);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F245_3010(Current));
	(nstcall = 1, F867_5844(RTCW(tr1)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("no_errors", EX_POST);
		tb1 = (nstcall = 0, F245_3009(Current));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("empty_list", EX_POST);
		tr1 = (nstcall = 0, F245_3010(Current));
		tb1 = (nstcall = 1, F665_4976(RTCW(tr1)));
		if (tb1) {
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

/* {SIMPLE_JSON}.new_object */
EIF_REFERENCE F245_3016 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("new_object", 244, Current, 0, 0, 3020);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.create_object */
EIF_REFERENCE F245_3017 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("create_object", 244, Current, 0, 0, 3021);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.empty_object */
EIF_REFERENCE F245_3018 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("empty_object", 244, Current, 0, 0, 3022);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_object */
EIF_REFERENCE F245_3019 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("json_object", 244, Current, 0, 0, 3023);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.build_object */
EIF_REFERENCE F245_3020 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("build_object", 244, Current, 0, 0, 3024);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.map */
EIF_REFERENCE F245_3021 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("map", 244, Current, 0, 0, 3025);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.dictionary */
EIF_REFERENCE F245_3022 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("dictionary", 244, Current, 0, 0, 3026);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(154, 0x01).id, 154, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F155_2089(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.new_array */
EIF_REFERENCE F245_3023 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("new_array", 244, Current, 0, 0, 3027);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F156_2127(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.create_array */
EIF_REFERENCE F245_3024 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("create_array", 244, Current, 0, 0, 3028);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F156_2127(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.empty_array */
EIF_REFERENCE F245_3025 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("empty_array", 244, Current, 0, 0, 3029);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F156_2127(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_array */
EIF_REFERENCE F245_3026 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("json_array", 244, Current, 0, 0, 3030);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F156_2127(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.list */
EIF_REFERENCE F245_3027 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("list", 244, Current, 0, 0, 3031);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F156_2127(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.collection */
EIF_REFERENCE F245_3028 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("collection", 244, Current, 0, 0, 3032);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(155, 0x01).id, 155, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F156_2127(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.string_value */
EIF_REFERENCE F245_3029 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("string_value", 244, Current, 1, 1, 3033);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.text_value */
EIF_REFERENCE F245_3030 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("text_value", 244, Current, 1, 1, 3034);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.str */
EIF_REFERENCE F245_3031 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("str", 244, Current, 1, 1, 3035);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_string */
EIF_REFERENCE F245_3032 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("json_string", 244, Current, 1, 1, 3036);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1088, 0x01).id, 1088, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F1089_8122(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.number_value */
EIF_REFERENCE F245_3033 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("number_value", 244, Current, 1, 1, 3037);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.float_value */
EIF_REFERENCE F245_3034 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("float_value", 244, Current, 1, 1, 3038);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.real_value */
EIF_REFERENCE F245_3035 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("real_value", 244, Current, 1, 1, 3039);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.double_value */
EIF_REFERENCE F245_3036 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("double_value", 244, Current, 1, 1, 3040);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_number */
EIF_REFERENCE F245_3037 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("json_number", 244, Current, 1, 1, 3041);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8180(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.integer_value */
EIF_REFERENCE F245_3038 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("integer_value", 244, Current, 1, 1, 3042);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.int_value */
EIF_REFERENCE F245_3039 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("int_value", 244, Current, 1, 1, 3043);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.whole_number */
EIF_REFERENCE F245_3040 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("whole_number", 244, Current, 1, 1, 3044);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_integer */
EIF_REFERENCE F245_3041 (EIF_REFERENCE Current, EIF_INTEGER_64 arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("json_integer", 244, Current, 1, 1, 3045);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1091, 0x01).id, 1091, _OBJSIZ_1_0_0_1_0_0_0_0_);
	(nstcall = -1, F1092_8178(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.boolean_value */
EIF_REFERENCE F245_3042 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("boolean_value", 244, Current, 1, 1, 3046);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.bool_value */
EIF_REFERENCE F245_3043 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("bool_value", 244, Current, 1, 1, 3047);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.flag_value */
EIF_REFERENCE F245_3044 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("flag_value", 244, Current, 1, 1, 3048);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_boolean */
EIF_REFERENCE F245_3045 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("json_boolean", 244, Current, 1, 1, 3049);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1087, 0x01).id, 1087, _OBJSIZ_0_1_0_0_0_0_0_0_);
	(nstcall = -1, F1088_8112(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.null_value */
EIF_REFERENCE F245_3046 (EIF_REFERENCE Current)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("null_value", 244, Current, 1, 0, 3050);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.nothing_value */
EIF_REFERENCE F245_3047 (EIF_REFERENCE Current)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("nothing_value", 244, Current, 1, 0, 3051);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_null */
EIF_REFERENCE F245_3048 (EIF_REFERENCE Current)
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
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("json_null", 244, Current, 1, 0, 3052);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1089, 0x01).id, 1089, _OBJSIZ_0_0_0_0_0_0_0_0_);
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(153, 0x01).id, 153, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2000[Dtype(RTCW(tr1))-153])(tr1, loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.query_string */
EIF_REFERENCE F245_3049 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("query_string", 244, Current, 1, 2, 3053);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F245_3061(Current, arg1, arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (nstcall = 1, F154_2058(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		tr1 = (nstcall = 1, F154_2065(RTCW(loc1)));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.query_integer */
EIF_INTEGER_64 F245_3050 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLIU(5);
	
	RTEAA("query_integer", 244, Current, 1, 2, 3054);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F245_3061(Current, arg1, arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (nstcall = 1, F154_2060(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(5);
		ti8_1 = (nstcall = 1, F154_2067(RTCW(loc1)));
		Result = (EIF_INTEGER_64) ti8_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.query_strings */
EIF_REFERENCE F245_3051 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,tr2);
	RTLIU(8);
	
	RTEAA("query_strings", 244, Current, 2, 2, 3055);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3062(Current, arg1, arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = (nstcall = 1, F867_5799(RTCW(loc1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(6);
		tr1 = (nstcall = 1, F421_4803(loc2));
		tb2 = (nstcall = 1, F154_2058(RTCW(tr1)));
		if (tb2) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F421_4803(loc2));
			tr2 = (nstcall = 1, F154_2065(RTCW(tr1)));
			(nstcall = 1, F867_5825(RTCW(Result), tr2));
		}
		RTHOOK(8);
		(nstcall = 1, F421_4818(loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.query_integers */
EIF_REFERENCE F245_3052 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_64 ti8_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLIU(7);
	
	RTEAA("query_integers", 244, Current, 2, 2, 3056);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,878,1002,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 878, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F879_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3062(Current, arg1, arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	tr1 = (nstcall = 1, F867_5799(RTCW(loc1)));
	loc2 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, F421_4812(loc2));
		if (tb1) break;
		RTHOOK(6);
		tr1 = (nstcall = 1, F421_4803(loc2));
		tb2 = (nstcall = 1, F154_2060(RTCW(tr1)));
		if (tb2) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F421_4803(loc2));
			ti8_1 = (nstcall = 1, F154_2067(RTCW(tr1)));
			(nstcall = 1, F879_5825(RTCW(Result), ti8_1));
		}
		RTHOOK(8);
		(nstcall = 1, F421_4818(loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.last_json_text */
EIF_REFERENCE F245_3053 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {SIMPLE_JSON}.add_error */
void F245_3054 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("add_error", 244, Current, 0, 1, 3058);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("error_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F245_3010(Current));
	(nstcall = 1, F867_5825(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("error_added", EX_POST);
		tr1 = (nstcall = 0, F245_3010(Current));
		tb1 = (nstcall = 1, F867_5797(RTCW(tr1), arg1));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("has_errors", EX_POST);
		tb1 = (nstcall = 0, F245_3009(Current));
		if (tb1) {
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
}

/* {SIMPLE_JSON}.capture_parser_errors */
void F245_3055 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc4);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,loc2);
	RTLR(6,tr3);
	RTLR(7,Current);
	RTLR(8,loc1);
	RTLIU(9);
	
	RTEAA("capture_parser_errors", 244, Current, 4, 2, 3059);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("parser_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("json_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = (nstcall = 1, F857_5546(RTCW(tr1)));
	loc4 = (EIF_REFERENCE) tr2;
	for (;;) {
		tb1 = (nstcall = 1, F414_4792(loc4));
		if (tb1) break;
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
		tr2 = (nstcall = 1, F414_4791(loc4));
		tr3 = (nstcall = 1, F1076_7660(RTCW(tr2)));
		(nstcall = -1, F1083_7899(RTCW(tr1), tr3));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		ti4_1 = (nstcall = 0, F245_3056(Current, loc2));
		loc3 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc3 > ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
			tr2 = (nstcall = 0, F245_3057(Current, loc2));
			(nstcall = -1, F20_390(RTCW(tr1), tr2, arg2, loc3));
			loc1 = (EIF_REFERENCE) tr1;
		} else {
			RTHOOK(8);
			tr1 = RTLNS(eif_new_type(19, 0x01).id, 19, _OBJSIZ_1_0_0_3_0_0_0_0_);
			(nstcall = -1, F20_389(RTCW(tr1), loc2));
			loc1 = (EIF_REFERENCE) tr1;
		}
		RTHOOK(9);
		(nstcall = 0, F245_3054(Current, loc1));
		RTHOOK(10);
		(nstcall = 1, F414_4794(loc4));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON}.extract_position_from_error */
EIF_INTEGER_32 F245_3056 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,loc3);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("extract_position_from_error", 244, Current, 3, 1, 3060);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("error_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H("(position: ",11,596468768);
	ti4_1 = (nstcall = 1, F1083_7914(RTCW(arg1), tr1, ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		loc1 += ((EIF_INTEGER_32) 11L);
		RTHOOK(5);
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ')';
		ti4_1 = (nstcall = 1, F1083_7909(RTCW(arg1), tw1, loc1));
		loc2 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(6);
		if ((EIF_BOOLEAN) (loc2 > loc1)) {
			RTHOOK(7);
			tr1 = (nstcall = 1, F1085_8059(RTCW(arg1), loc1, (EIF_INTEGER_32) (loc2 - ((EIF_INTEGER_32) 1L))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(8);
			(nstcall = 1, F1085_7996(RTCW(loc3)));
			RTHOOK(9);
			(nstcall = 1, F1085_7997(RTCW(loc3)));
			RTHOOK(10);
			tb1 = (nstcall = 1, F1076_7632(RTCW(loc3)));
			if (tb1) {
				RTHOOK(11);
				ti4_1 = (nstcall = 1, F1076_7666(RTCW(loc3)));
				Result = (EIF_INTEGER_32) ti4_1;
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("non_negative", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.remove_position_from_message */
EIF_REFERENCE F245_3057 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("remove_position_from_message", 244, Current, 1, 1, 3061);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("error_text_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTMS_EX_H(" (position: ",12,1385097760);
	ti4_1 = (nstcall = 1, F1083_7914(RTCW(arg1), tr1, ((EIF_INTEGER_32) 1L)));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	if ((EIF_BOOLEAN) (loc1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F1085_8059(RTCW(arg1), ((EIF_INTEGER_32) 1L), (EIF_INTEGER_32) (loc1 - ((EIF_INTEGER_32) 1L))));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = (nstcall = 1, F1_14(arg1));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.string_32_to_utf_8 */
EIF_REFERENCE F245_3058 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("string_32_to_utf_8", 244, Current, 1, 1, 3062);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(365, 0x01).id, 365, _OBJSIZ_2_0_0_1_0_0_0_0_);
	(nstcall = -1, F366_4673(RTCW(tr1), arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = (nstcall = 1, F366_4697(RTCW(loc1)));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.utf_8_to_string_32 */
EIF_REFERENCE F245_3059 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("utf_8_to_string_32", 244, Current, 1, 1, 3063);
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

/* {SIMPLE_JSON}.strip_utf8_bom */
EIF_REFERENCE F245_3060 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLR(3,Result);
	RTLR(4,Current);
	RTLIU(5);
	
	RTEAA("strip_utf8_bom", 244, Current, 1, 1, 3064);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(21, 0x01).id, 21, _OBJSIZ_0_0_0_0_0_0_0_0_);
	(nstcall = -1, F22_409(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tb1 = (nstcall = 1, F22_412(RTCW(loc1), arg1));
	if (tb1) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 4L), ti4_1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		Result = (EIF_REFERENCE) arg1;
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

/* {SIMPLE_JSON}.query_single_value */
EIF_REFERENCE F245_3061 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,loc2);
	RTLR(6,loc3);
	RTLR(7,Result);
	RTLIU(8);
	
	RTEAA("query_single_value", 244, Current, 3, 2, 3065);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F245_3063(Current, arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	loc2 = (EIF_REFERENCE) arg1;
	RTHOOK(5);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(loc1))-365])(loc1));
	loc3 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc3)-334])(loc3));
		if (tb1) break;
		RTHOOK(6);
		if ((EIF_BOOLEAN)(loc2 == NULL)) break;
		RTHOOK(7);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc3)-334])(loc3));
		tr1 = (nstcall = 0, F245_3064(Current, loc2, tr1));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc3)-334])(loc3));
	}
	RTHOOK(9);
	Result = (EIF_REFERENCE) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.query_multiple_values */
EIF_REFERENCE F245_3062 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc1);
	RTLR(6,loc2);
	RTLR(7,loc7);
	RTLR(8,loc5);
	RTLR(9,loc3);
	RTLR(10,loc8);
	RTLR(11,loc6);
	RTLR(12,loc4);
	RTLIU(13);
	
	RTEAA("query_multiple_values", 244, Current, 8, 2, 3066);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,153,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 0, F245_3063(Current, arg2));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,153,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	(nstcall = 1, F867_5825(RTCW(loc2), arg1));
	RTHOOK(7);
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4236[Dtype(RTCW(loc1))-365])(loc1));
	loc7 = (EIF_REFERENCE) tr1;
	for (;;) {
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R4124[Dtype(loc7)-334])(loc7));
		if (tb1) break;
		RTHOOK(8);
		tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R4123[Dtype(loc7)-334])(loc7));
		loc5 = (EIF_REFERENCE) tr1;
		RTHOOK(9);
		{
			static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,153,0xFFFF};
			EIF_TYPE typres0;
			static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
			
			typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
			tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
		}
		(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
		loc3 = (EIF_REFERENCE) tr1;
		RTHOOK(10);
		tr1 = (nstcall = 1, F867_5799(RTCW(loc2)));
		loc8 = (EIF_REFERENCE) tr1;
		for (;;) {
			tb2 = (nstcall = 1, F421_4812(loc8));
			if (tb2) break;
			RTHOOK(11);
			tr1 = (nstcall = 1, F421_4803(loc8));
			loc6 = (EIF_REFERENCE) tr1;
			RTHOOK(12);
			tb3 = (nstcall = 0, F245_3065(Current, loc5));
			if (tb3) {
				RTHOOK(13);
				(nstcall = 0, F245_3066(Current, loc6, loc3));
			} else {
				RTHOOK(14);
				tr1 = (nstcall = 0, F245_3064(Current, loc6, loc5));
				loc4 = (EIF_REFERENCE) tr1;
				RTHOOK(15);
				if ((EIF_BOOLEAN)(loc4 != NULL)) {
					RTHOOK(16);
					(nstcall = 1, F867_5825(RTCW(loc3), loc4));
				}
			}
			RTHOOK(17);
			(nstcall = 1, F421_4818(loc8));
		}
		RTHOOK(18);
		loc2 = (EIF_REFERENCE) loc3;
		RTHOOK(19);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE)) R4125[Dtype(loc7)-334])(loc7));
	}
	RTHOOK(20);
	Result = (EIF_REFERENCE) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(21);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.parse_json_path */
EIF_REFERENCE F245_3063 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc4 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc5 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_CHARACTER_32 tw1;
	EIF_CHARACTER_32 tw2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(9);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc3);
	RTLR(6,tr2);
	RTLR(7,tr3);
	RTLR(8,Result);
	RTLIU(9);
	
	RTEAA("parse_json_path", 244, Current, 5, 1, 3067);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("path_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,866,0xFF01,1084,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 866, _OBJSIZ_1_1_0_1_0_0_0_0_);
	}
	(nstcall = -1, F867_5785(RTCW(tr1), ((EIF_INTEGER_32) 5L)));
	loc2 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tr1 = (nstcall = 1, F1_14(arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(4);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("$.",2,9262)));
	tb1 = (nstcall = 1, F1083_7932(RTCW(loc1), tr1));
	if (tb1) {
		RTHOOK(5);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F1085_8059(RTCW(loc1), ((EIF_INTEGER_32) 3L), ti4_1));
		loc1 = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(6);
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("$",1,36)));
		tb1 = (nstcall = 1, F1083_7932(RTCW(loc1), tr1));
		if (tb1) {
			RTHOOK(7);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
			tr1 = (nstcall = 1, F1085_8059(RTCW(loc1), ((EIF_INTEGER_32) 2L), ti4_1));
			loc1 = (EIF_REFERENCE) tr1;
		}
	}
	RTHOOK(8);
	tr1 = RTLNS(eif_new_type(1084, 0x01).id, 1084, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1076_7601(RTCW(tr1)));
	loc3 = (EIF_REFERENCE) tr1;
	RTHOOK(9);
	loc4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	if (~in_assertion) {
		RTHOOK(10);
		RTCT("valid_outer_index", EX_LINV);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 1L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (loc4 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("segments_attached", EX_LINV);
		if ((EIF_BOOLEAN)(loc2 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(12);
		RTCT("segment_attached", EX_LINV);
		if ((EIF_BOOLEAN)(loc3 != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("examined_chars", EX_LINV);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)) <= ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	for (;;) {
		RTHOOK(14);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN) (loc4 > ti4_1)) break;
		RTHOOK(15);
		tw1 = (nstcall = 1, F1085_7979(RTCW(loc1), loc4));
		tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '.';
		if ((EIF_BOOLEAN)(tw1 == tw2)) {
			RTHOOK(16);
			tb1 = (nstcall = 1, F667_4976(RTCW(loc3)));
			if ((EIF_BOOLEAN) !tb1) {
				RTHOOK(17);
				tr1 = (nstcall = 1, F1_14(loc3));
				(nstcall = 1, F867_5825(RTCW(loc2), tr1));
				RTHOOK(18);
				(nstcall = 1, F1085_8041(RTCW(loc3)));
			}
		} else {
			RTHOOK(19);
			tw1 = (nstcall = 1, F1085_7979(RTCW(loc1), loc4));
			tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '[';
			if ((EIF_BOOLEAN)(tw1 == tw2)) {
				RTHOOK(20);
				tb1 = (nstcall = 1, F667_4976(RTCW(loc3)));
				if ((EIF_BOOLEAN) !tb1) {
					RTHOOK(21);
					tr1 = (nstcall = 1, F1_14(loc3));
					(nstcall = 1, F867_5825(RTCW(loc2), tr1));
					RTHOOK(22);
					(nstcall = 1, F1085_8041(RTCW(loc3)));
				}
				RTHOOK(23);
				loc5 = (EIF_INTEGER_32) loc4;
				RTHOOK(24);
				loc4++;
				if (~in_assertion) {
					RTHOOK(25);
					RTCT("valid_nested_index", EX_LINV);
					tb1 = '\0';
					if ((EIF_BOOLEAN) (loc4 >= (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)))) {
						ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
						tb1 = (EIF_BOOLEAN) (loc4 <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
					}
					if (tb1) {
						RTCK;
					} else {
						RTCF;
					}
					RTHOOK(26);
					RTCT("searching_for_bracket", EX_LINV);
					if ((EIF_BOOLEAN) (loc4 > loc5)) {
						RTCK;
					} else {
						RTCF;
					}
					RTHOOK(27);
					RTCT("nested_segment_attached", EX_LINV);
					if ((EIF_BOOLEAN)(loc3 != NULL)) {
						RTCK;
					} else {
						RTCF;
					}
				}
				for (;;) {
					RTHOOK(28);
					tb1 = '\01';
					ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
					if (!(EIF_BOOLEAN) (loc4 > ti4_2)) {
						tw1 = (nstcall = 1, F1085_7979(RTCW(loc1), loc4));
						tw2 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) ']';
						tb1 = (EIF_BOOLEAN)(tw1 == tw2);
					}
					if (tb1) break;
					RTHOOK(29);
					tw1 = (nstcall = 1, F1085_7979(RTCW(loc1), loc4));
					(nstcall = 1, F1085_8025(RTCW(loc3), tw1));
					RTHOOK(30);
					loc4++;
					if (~in_assertion) {
						RTHOOK(25);
						RTCT("valid_nested_index", EX_LINV);
						tb1 = '\0';
						if ((EIF_BOOLEAN) (loc4 >= (EIF_INTEGER_32) (loc5 + ((EIF_INTEGER_32) 1L)))) {
							ti4_2 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
							tb1 = (EIF_BOOLEAN) (loc4 <= (EIF_INTEGER_32) (ti4_2 + ((EIF_INTEGER_32) 1L)));
						}
						if (tb1) {
							RTCK;
						} else {
							RTCF;
						}
						RTHOOK(26);
						RTCT("searching_for_bracket", EX_LINV);
						if ((EIF_BOOLEAN) (loc4 > loc5)) {
							RTCK;
						} else {
							RTCF;
						}
						RTHOOK(27);
						RTCT("nested_segment_attached", EX_LINV);
						if ((EIF_BOOLEAN)(loc3 != NULL)) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
				RTHOOK(31);
				tb2 = (nstcall = 1, F667_4976(RTCW(loc3)));
				if ((EIF_BOOLEAN) !tb2) {
					RTHOOK(32);
					tr1 = RTMS_EX_H("[",1,91);
					tr2 = (nstcall = 1, F1_14(loc3));
					tr3 = (nstcall = 1, F1076_7654(RTCW(tr2)));
					tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(tr1)-1079])(tr1, tr3));
					tr1 = RTMS_EX_H("]",1,93);
					tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_REFERENCE)) R6259[Dtype(RTCW(tr2))-1079])(tr2, tr1));
					tr2 = (nstcall = 1, F1076_7660(RTCW(tr1)));
					(nstcall = 1, F867_5825(RTCW(loc2), tr2));
					RTHOOK(33);
					(nstcall = 1, F1085_8041(RTCW(loc3)));
				}
			} else {
				RTHOOK(34);
				tw1 = (nstcall = 1, F1085_7979(RTCW(loc1), loc4));
				(nstcall = 1, F1085_8025(RTCW(loc3), tw1));
			}
		}
		RTHOOK(35);
		loc4++;
		if (~in_assertion) {
			RTHOOK(10);
			RTCT("valid_outer_index", EX_LINV);
			tb1 = '\0';
			if ((EIF_BOOLEAN) (loc4 >= ((EIF_INTEGER_32) 1L))) {
				ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
				tb1 = (EIF_BOOLEAN) (loc4 <= (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 1L)));
			}
			if (tb1) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(11);
			RTCT("segments_attached", EX_LINV);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(12);
			RTCT("segment_attached", EX_LINV);
			if ((EIF_BOOLEAN)(loc3 != NULL)) {
				RTCK;
			} else {
				RTCF;
			}
			RTHOOK(13);
			RTCT("examined_chars", EX_LINV);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(loc1)+ _LNGOFF_1_1_0_2_);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc4 - ((EIF_INTEGER_32) 1L)) <= ti4_1)) {
				RTCK;
			} else {
				RTCF;
			}
		}
	}
	RTHOOK(36);
	tb2 = (nstcall = 1, F667_4976(RTCW(loc3)));
	if ((EIF_BOOLEAN) !tb2) {
		RTHOOK(37);
		(nstcall = 1, F867_5825(RTCW(loc2), loc3));
	}
	RTHOOK(38);
	Result = (EIF_REFERENCE) loc2;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(39);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.navigate_segment */
EIF_REFERENCE F245_3064 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,Result);
	RTLR(6,Current);
	RTLIU(7);
	
	RTEAA("navigate_segment", 244, Current, 2, 2, 3068);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("segment_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = '\0';
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("[",1,91)));
	tb2 = (nstcall = 1, F1083_7932(RTCW(arg2), tr1));
	if (tb2) {
		tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("]",1,93)));
		tb2 = (nstcall = 1, F1083_7933(RTCW(arg2), tr1));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg2)+ _LNGOFF_1_1_0_2_);
		tr1 = (nstcall = 1, F1085_8059(RTCW(arg2), ((EIF_INTEGER_32) 2L), (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L))));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tb1 = (nstcall = 1, F1076_7632(RTCW(loc2)));
		if (tb1) {
			RTHOOK(6);
			ti4_1 = (nstcall = 1, F1076_7666(RTCW(loc2)));
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(7);
			tb1 = (nstcall = 1, F154_2064(RTCW(arg1)));
			if (tb1) {
				RTHOOK(8);
				tr1 = (nstcall = 1, F154_2078(RTCW(arg1)));
				tb1 = (nstcall = 1, F156_2141(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
				if (tb1) {
					RTHOOK(9);
					tr1 = (nstcall = 1, F154_2078(RTCW(arg1)));
					tr2 = (nstcall = 1, F156_2133(RTCW(tr1), (EIF_INTEGER_32) (loc1 + ((EIF_INTEGER_32) 1L))));
					Result = (EIF_REFERENCE) tr2;
				}
			}
		}
	} else {
		RTHOOK(10);
		tb1 = (nstcall = 1, F154_2063(RTCW(arg1)));
		if (tb1) {
			RTHOOK(11);
			tr1 = (nstcall = 1, F154_2076(RTCW(arg1)));
			tr2 = (nstcall = 1, F155_2096(RTCW(tr1), arg2));
			Result = (EIF_REFERENCE) tr2;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.is_wildcard_segment */
EIF_BOOLEAN F245_3065 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("is_wildcard_segment", 244, Current, 0, 1, 3069);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("segment_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("[*]",3,5974621)));
	tb1 = (nstcall = 1, F1083_7921(RTCW(arg1), tr1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.expand_wildcard */
void F245_3066 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,loc2);
	RTLR(4,tr2);
	RTLR(5,Current);
	RTLIU(6);
	
	RTEAA("expand_wildcard", 244, Current, 2, 2, 3070);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("value_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("result_list_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tb1 = (nstcall = 1, F154_2064(RTCW(arg1)));
	if (tb1) {
		RTHOOK(4);
		loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(5);
			tr1 = (nstcall = 1, F154_2078(RTCW(arg1)));
			ti4_1 = (nstcall = 1, F156_2131(RTCW(tr1)));
			if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
			RTHOOK(6);
			tr1 = (nstcall = 1, F154_2078(RTCW(arg1)));
			tb1 = (nstcall = 1, F156_2141(RTCW(tr1), loc1));
			if (tb1) {
				RTHOOK(7);
				tr1 = (nstcall = 1, F154_2078(RTCW(arg1)));
				tr2 = (nstcall = 1, F156_2133(RTCW(tr1), loc1));
				loc2 = (EIF_REFERENCE) tr2;
				RTHOOK(8);
				if ((EIF_BOOLEAN)(loc2 != NULL)) {
					RTHOOK(9);
					(nstcall = 1, F867_5825(RTCW(arg2), loc2));
				}
			}
			RTHOOK(10);
			loc1++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {SIMPLE_JSON}.create_patch */
EIF_REFERENCE F245_3067 (EIF_REFERENCE Current)
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
	RTLR(0,tr1);
	RTLR(1,Result);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("create_patch", 244, Current, 0, 0, 3071);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(22, 0x01).id, 22, _OBJSIZ_1_0_0_0_0_0_0_0_);
	(nstcall = -1, F23_422(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("empty", EX_POST);
		tb1 = (nstcall = 1, F23_426(RTCW(Result)));
		if (tb1) {
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

/* {SIMPLE_JSON}.parse_patch */
EIF_REFERENCE F245_3068 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc9 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc11 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc12 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc13 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(16);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,Result);
	RTLR(5,loc2);
	RTLR(6,loc10);
	RTLR(7,loc3);
	RTLR(8,loc11);
	RTLR(9,loc4);
	RTLR(10,loc12);
	RTLR(11,loc5);
	RTLR(12,loc7);
	RTLR(13,loc6);
	RTLR(14,loc13);
	RTLR(15,loc8);
	RTLIU(16);
	
	RTEAA("parse_patch", 244, Current, 13, 1, 3072);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("patch_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = (nstcall = 0, F245_2995(Current, arg1));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		tb2 = (nstcall = 1, F154_2064(RTCW(loc1)));
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		tr1 = RTLNS(eif_new_type(22, 0x01).id, 22, _OBJSIZ_1_0_0_0_0_0_0_0_);
		(nstcall = -1, F23_422(RTCW(tr1)));
		Result = (EIF_REFERENCE) tr1;
		RTHOOK(5);
		tr1 = (nstcall = 1, F154_2078(RTCW(loc1)));
		loc2 = (EIF_REFERENCE) tr1;
		RTHOOK(6);
		loc9 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		for (;;) {
			RTHOOK(7);
			ti4_1 = (nstcall = 1, F156_2131(RTCW(loc2)));
			if ((EIF_BOOLEAN) (loc9 > ti4_1)) break;
			RTHOOK(8);
			tr1 = (nstcall = 1, F156_2133(RTCW(loc2), loc9));
			loc10 = (EIF_REFERENCE) tr1;
			RTHOOK(9);
			tb1 = (nstcall = 1, F154_2063(RTCW(loc10)));
			if (tb1) {
				RTHOOK(10);
				tr1 = (nstcall = 1, F154_2076(RTCW(loc10)));
				loc3 = (EIF_REFERENCE) tr1;
				RTHOOK(11);
				tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("op",2,28528)));
				tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
				loc11 = tr1;
				if (EIF_TEST(loc11)) {
					RTHOOK(12);
					loc4 = (EIF_REFERENCE) loc11;
					RTHOOK(13);
					tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("path",4,1885434984)));
					tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
					loc12 = tr1;
					if (EIF_TEST(loc12)) {
						RTHOOK(14);
						loc5 = (EIF_REFERENCE) loc12;
						RTHOOK(15);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("value",5,1635404133)));
						tr1 = (nstcall = 1, F155_2096(RTCW(loc3), tr1));
						loc7 = (EIF_REFERENCE) tr1;
						RTHOOK(16);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("",0,0)));
						loc6 = (EIF_REFERENCE) tr1;
						RTHOOK(17);
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("from",4,1718775661)));
						tr1 = (nstcall = 1, F155_2097(RTCW(loc3), tr1));
						loc13 = tr1;
						if (EIF_TEST(loc13)) {
							RTHOOK(18);
							loc6 = (EIF_REFERENCE) loc13;
						}
						RTHOOK(19);
						loc8 = (EIF_REFERENCE) NULL;
						RTHOOK(20);
						tb1 = '\0';
						tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("add",3,6382692)));
						tb2 = (nstcall = 1, F1083_7921(RTCW(loc4), tr1));
						if (tb2) {
							tb1 = (EIF_BOOLEAN)(loc7 != NULL);
						}
						if (tb1) {
							RTHOOK(21);
							tr1 = RTLNS(eif_new_type(247, 0x01).id, 247, _OBJSIZ_3_0_0_0_0_0_0_0_);
							(nstcall = -1, F248_3094(RTCW(tr1), loc5, loc7));
							loc8 = (EIF_REFERENCE) tr1;
						} else {
							RTHOOK(22);
							tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("remove",6,2060930149)));
							tb1 = (nstcall = 1, F1083_7921(RTCW(loc4), tr1));
							if (tb1) {
								RTHOOK(23);
								tr1 = RTLNS(eif_new_type(251, 0x01).id, 251, _OBJSIZ_3_0_0_0_0_0_0_0_);
								(nstcall = -1, F252_3123(RTCW(tr1), loc5));
								loc8 = (EIF_REFERENCE) tr1;
							} else {
								RTHOOK(24);
								tb1 = '\0';
								tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("replace",7,1413879909)));
								tb2 = (nstcall = 1, F1083_7921(RTCW(loc4), tr1));
								if (tb2) {
									tb1 = (EIF_BOOLEAN)(loc7 != NULL);
								}
								if (tb1) {
									RTHOOK(25);
									tr1 = RTLNS(eif_new_type(250, 0x01).id, 250, _OBJSIZ_3_0_0_0_0_0_0_0_);
									(nstcall = -1, F251_3117(RTCW(tr1), loc5, loc7));
									loc8 = (EIF_REFERENCE) tr1;
								} else {
									RTHOOK(26);
									tb1 = '\0';
									tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("test",4,1952805748)));
									tb2 = (nstcall = 1, F1083_7921(RTCW(loc4), tr1));
									if (tb2) {
										tb1 = (EIF_BOOLEAN)(loc7 != NULL);
									}
									if (tb1) {
										RTHOOK(27);
										tr1 = RTLNS(eif_new_type(249, 0x01).id, 249, _OBJSIZ_3_0_0_0_0_0_0_0_);
										(nstcall = -1, F250_3110(RTCW(tr1), loc5, loc7));
										loc8 = (EIF_REFERENCE) tr1;
									} else {
										RTHOOK(28);
										tb1 = '\0';
										tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("move",4,1836021349)));
										tb2 = (nstcall = 1, F1083_7921(RTCW(loc4), tr1));
										if (tb2) {
											tb2 = (nstcall = 1, F667_4976(RTCW(loc6)));
											tb1 = (EIF_BOOLEAN) !tb2;
										}
										if (tb1) {
											RTHOOK(29);
											tr1 = RTLNS(eif_new_type(246, 0x01).id, 246, _OBJSIZ_3_0_0_0_0_0_0_0_);
											(nstcall = -1, F247_3088(RTCW(tr1), loc6, loc5));
											loc8 = (EIF_REFERENCE) tr1;
										} else {
											RTHOOK(30);
											tb1 = '\0';
											tr1 = (nstcall = 1, F1076_7660(RTMS_EX_H("copy",4,1668247673)));
											tb2 = (nstcall = 1, F1083_7921(RTCW(loc4), tr1));
											if (tb2) {
												tb2 = (nstcall = 1, F667_4976(RTCW(loc6)));
												tb1 = (EIF_BOOLEAN) !tb2;
											}
											if (tb1) {
												RTHOOK(31);
												tr1 = RTLNS(eif_new_type(248, 0x01).id, 248, _OBJSIZ_3_0_0_0_0_0_0_0_);
												(nstcall = -1, F249_3104(RTCW(tr1), loc6, loc5));
												loc8 = (EIF_REFERENCE) tr1;
											}
										}
									}
								}
							}
						}
						RTHOOK(32);
						tb1 = '\0';
						if ((EIF_BOOLEAN)(loc8 != NULL)) {
							tb2 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE)) R2884[Dtype(RTCW(loc8))-246])(loc8));
							tb1 = tb2;
						}
						if (tb1) {
							RTHOOK(33);
							tr1 = *(EIF_REFERENCE *)(RTCW(Result));
							(nstcall = 1, F867_5825(RTCW(tr1), loc8));
						}
					}
				}
			}
			RTHOOK(34);
			loc9++;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(35);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.apply_patch */
EIF_REFERENCE F245_3069 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
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
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,Result);
	RTLR(6,tr2);
	RTLIU(7);
	
	RTEAA("apply_patch", 244, Current, 1, 2, 3073);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("document_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("patch_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F667_4976(RTCW(arg2)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F245_3068(Current, arg2));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(4);
		tr1 = (nstcall = 1, F23_433(loc1, arg1));
		Result = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(5);
		tr1 = RTLNS(eif_new_type(20, 0x01).id, 20, _OBJSIZ_2_1_0_0_0_0_0_0_);
		tr2 = (nstcall = 1, F1076_7660(RTMS_EX_H("Failed to parse patch document",30,1523889524)));
		(nstcall = -1, F21_402(RTCW(tr1), tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
}

/* {SIMPLE_JSON}.json_value_typeref */
static EIF_REFERENCE F245_3070_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_value_typeref", 244, Current, 0, 0, 3074);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_3070 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	if (!r) {
		if (RTAT(eif_new_type(153, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_3070_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_2_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_JSON}.json_object_typeref */
static EIF_REFERENCE F245_3071_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_object_typeref", 244, Current, 0, 0, 3075);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_3071 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_3_);
	if (!r) {
		if (RTAT(eif_new_type(154, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_3071_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_3_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_JSON}.json_array_typeref */
static EIF_REFERENCE F245_3072_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_array_typeref", 244, Current, 0, 0, 3076);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_3072 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_4_);
	if (!r) {
		if (RTAT(eif_new_type(155, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_3072_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_4_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_JSON}.json_error_typeref */
static EIF_REFERENCE F245_3073_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_error_typeref", 244, Current, 0, 0, 3077);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_3073 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_5_);
	if (!r) {
		if (RTAT(eif_new_type(19, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_3073_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_5_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_JSON}.json_patch_typeref */
static EIF_REFERENCE F245_3074_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_patch_typeref", 244, Current, 0, 0, 3078);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_3074 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_6_);
	if (!r) {
		if (RTAT(eif_new_type(22, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_3074_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_6_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_JSON}.json_patch_result_typeref */
static EIF_REFERENCE F245_3075_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("json_patch_result_typeref", 244, Current, 0, 0, 3079);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("type_ref_only_never_call", EX_PRE);
		RTTE((EIF_BOOLEAN) 0, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

EIF_REFERENCE F245_3075 (EIF_REFERENCE Current)
{
	EIF_REFERENCE r;
	r = *(EIF_REFERENCE *)(Current + _REFACS_7_);
	if (!r) {
		if (RTAT(eif_new_type(20, 0))) {
			GTCX
			RTLD;
			RTLI(1);
			RTLR(0,Current);
			RTLIU(1);
			r = (F245_3075_body (Current));
			*(EIF_REFERENCE *)(Current + _REFACS_7_) = r;
			RTAR(Current, r);
			RTLE;
		}
	}
	return r;
}


/* {SIMPLE_JSON}._invariant */
void F245_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTLD;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,loc1);
	RTLR(3,tr2);
	RTLIU(4);
	RTEAINV(l_feature_name, 216, Current, 1, 0);
	RTIT("last_errors_attached", Current);
	tr1 = (nstcall = 0, F245_3010(Current));
	if ((EIF_BOOLEAN)(tr1 != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("has_errors_definition", Current);
	tb1 = (nstcall = 0, F245_3009(Current));
	tr1 = (nstcall = 0, F245_3010(Current));
	tb2 = (nstcall = 1, F665_4976(RTCW(tr1)));
	if ((EIF_BOOLEAN)(tb1 == (EIF_BOOLEAN) !tb2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("error_count_definition", Current);
	ti4_1 = (nstcall = 0, F245_3011(Current));
	tr1 = (nstcall = 0, F245_3010(Current));
	ti4_2 = (nstcall = 1, F867_5806(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 == ti4_2)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_void_errors", Current);
	tr1 = (nstcall = 0, F245_3010(Current));
	tr2 = (nstcall = 1, F867_5799(RTCW(tr1)));
	loc1 = (EIF_REFERENCE) tr2;
	tb1 = EIF_TRUE;
	for (;;) {
		if (!tb1) break;
		tb2 = (nstcall = 1, F421_4812(loc1));
		if (tb2) break;
		tr1 = (nstcall = 1, F421_4803(loc1));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
		(nstcall = 1, F421_4818(loc1));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("has_errors_implies_first_error", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F245_3009(Current));
	if (tb2) {
		tr1 = (nstcall = 0, F245_3012(Current));
		tb1 = (EIF_BOOLEAN)(tr1 != NULL);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("no_errors_implies_no_first_error", Current);
	tb1 = '\01';
	tb2 = (nstcall = 0, F245_3009(Current));
	if ((EIF_BOOLEAN) !tb2) {
		tr1 = (nstcall = 0, F245_3012(Current));
		tb1 = (EIF_BOOLEAN)(tr1 == NULL);
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit217 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
