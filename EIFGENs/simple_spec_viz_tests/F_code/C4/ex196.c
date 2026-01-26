/*
 * Code for class EXCEPTIONS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex196.h"
#include "eif_except.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTIONS}.meaning */
EIF_REFERENCE F222_2611 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("meaning", 221, Current, 1, 1, 2618);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2344[Dtype(RTCW(tr1))-216])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2271[Dtype(loc1)-177])(loc1));
		tr1 = RTLNS(eif_new_type(77, 0x00).id, 77, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F78_1198(RTCW(tr1), tr2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.assertion_violation */
EIF_BOOLEAN F222_2612 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("assertion_violation", 221, Current, 2, 0, 2619);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2375(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(209, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_developer_exception */
EIF_BOOLEAN F222_2613 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_developer_exception", 221, Current, 2, 0, 2620);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2375(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(178, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_developer_exception_of_name */
EIF_BOOLEAN F222_2614 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_developer_exception_of_name", 221, Current, 0, 1, 2621);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((nstcall = 0, F222_2613(Current))) {
		RTHOOK(2);
		tr1 = (nstcall = 0, F222_2615(Current));
		Result = (EIF_BOOLEAN) RTEQ(tr1, arg1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.developer_exception_name */
EIF_REFERENCE F222_2615 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("developer_exception_name", 221, Current, 2, 0, 2622);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("applicable", EX_PRE);
		RTTE((nstcall = 0, F222_2613(Current)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2375(loc1));
		tr2 = (nstcall = 1, F178_2371(RTCW(tr1)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(3);
		tr1 = RTLNS(eif_new_type(77, 0x00).id, 77, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F78_1204(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_signal */
EIF_BOOLEAN F222_2616 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLIU(5);
	
	RTEAA("is_signal", 221, Current, 2, 0, 2623);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2375(loc1));
		loc2 = tr1;
		loc2 = RTRV(eif_new_type(185, 0x01),loc2);
		Result = EIF_TEST(loc2);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.is_system_exception */
EIF_BOOLEAN F222_2617 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,loc3);
	RTLIU(6);
	
	RTEAA("is_system_exception", 221, Current, 3, 0, 2624);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2344[Dtype(RTCW(tr1))-216])(tr1, ((EIF_INTEGER_32) 18L)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		Result = '\01';
		tr1 = (nstcall = 1, F178_2375(loc1));
		tb1 = (nstcall = 1, F1_6(tr1, loc2));
		if (!tb1) {
			tr1 = (nstcall = 1, F178_2375(loc1));
			loc3 = tr1;
			loc3 = RTRV(eif_new_type(183, 0x01),loc3);
			Result = EIF_TEST(loc3);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.tag_name */
EIF_REFERENCE F222_2618 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("tag_name", 221, Current, 2, 0, 2625);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2371(loc1));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(77, 0x00).id, 77, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F78_1204(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.recipient_name */
EIF_REFERENCE F222_2619 (EIF_REFERENCE Current)
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
	
	RTEAA("recipient_name", 221, Current, 1, 0, 2626);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.class_name */
EIF_REFERENCE F222_2620 (EIF_REFERENCE Current)
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
	
	RTEAA("class_name", 221, Current, 1, 0, 2627);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = *(EIF_REFERENCE *)(loc1 + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.exception */
EIF_INTEGER_32 F222_2621 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("exception", 221, Current, 1, 0, 2628);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2276[Dtype(loc1)-177])(loc1));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.exception_trace */
EIF_REFERENCE F222_2622 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("exception_trace", 221, Current, 2, 0, 2629);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2375(loc1));
		tr2 = (nstcall = 1, F178_2373(RTCW(tr1)));
		loc2 = tr2;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(77, 0x00).id, 77, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F78_1204(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_tag_name */
EIF_REFERENCE F222_2623 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc2);
	RTLR(5,Result);
	RTLIU(6);
	
	RTEAA("original_tag_name", 221, Current, 2, 0, 2630);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		tr1 = (nstcall = 1, F178_2376(loc1));
		tr2 = (nstcall = 1, F178_2375(RTCW(tr1)));
		tr1 = (nstcall = 1, F178_2371(RTCW(tr2)));
		loc2 = tr1;
		tb1 = EIF_TEST(loc2);
	}
	if (tb1) {
		RTHOOK(2);
		tr1 = RTLNS(eif_new_type(77, 0x00).id, 77, _OBJSIZ_0_0_0_0_0_0_0_0_);
		Result = (nstcall = 0, F78_1204(RTCW(tr1), loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_exception */
EIF_INTEGER_32 F222_2624 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("original_exception", 221, Current, 1, 0, 2631);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F178_2376(loc1));
		tr2 = (nstcall = 1, F178_2375(RTCW(tr1)));
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2276[Dtype(RTCW(tr2))-177])(tr2));
		Result = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_recipient_name */
EIF_REFERENCE F222_2625 (EIF_REFERENCE Current)
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
	
	RTEAA("original_recipient_name", 221, Current, 1, 0, 2632);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F178_2376(loc1));
		tr2 = (nstcall = 1, F178_2375(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2));
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.original_class_name */
EIF_REFERENCE F222_2626 (EIF_REFERENCE Current)
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
	
	RTEAA("original_class_name", 221, Current, 1, 0, 2633);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr1))-216])(tr1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = (nstcall = 1, F178_2376(loc1));
		tr2 = (nstcall = 1, F178_2375(RTCW(tr1)));
		tr1 = *(EIF_REFERENCE *)(RTCW(tr2) + _REFACS_1_);
		Result = (EIF_REFERENCE) tr1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTIONS}.catch */
void F222_2627 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("catch", 221, Current, 1, 1, 2634);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2343[Dtype(RTCW(tr1))-216])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2337[Dtype(RTCW(tr1))-216])(tr1, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.ignore */
void F222_2628 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("ignore", 221, Current, 1, 1, 2635);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2343[Dtype(RTCW(tr1))-216])(tr1, arg1));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2336[Dtype(RTCW(tr1))-216])(tr1, loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.raise */
void F222_2629 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,arg1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("raise", 221, Current, 1, 1, 2636);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(178, 0x01).id, 178, _OBJSIZ_5_1_0_1_0_0_0_0_);
	RTHOOK(2);
	(nstcall = 1, F178_2382(RTCW(loc1), arg1));
	RTHOOK(3);
	(nstcall = 1, F178_2367(RTCW(loc1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.raise_retrieval_exception */
void F222_2630 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,arg1);
	RTLIU(5);
	
	RTEAA("raise_retrieval_exception", 221, Current, 1, 1, 2637);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(29,(nstcall = 0, F177_2365), (Current));
	tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R2344[Dtype(RTCW(tr1))-216])(tr1, ((EIF_INTEGER_32) 31L)));
	loc1 = tr2;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		(nstcall = 1, F178_2382(loc1, arg1));
		RTHOOK(3);
		(nstcall = 1, F178_2367(loc1));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.die */
void F222_2631 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("die", 221, Current, 0, 1, 2638);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);esdie(arg1);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.new_die */
void F222_2632 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("new_die", 221, Current, 0, 1, 2639);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);esdie(arg1);
	
	if (RTAL & CK_ENSURE) {
		RTHOOK(1);
		RTCT("False", EX_POST);
			RTCF;
	}
	RTEC (EN_POST);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.message_on_failure */
void F222_2633 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("message_on_failure", 221, Current, 0, 0, 2640);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F222_2635(Current, (EIF_BOOLEAN) 1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.no_message_on_failure */
void F222_2634 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("no_message_on_failure", 221, Current, 0, 0, 2641);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F222_2635(Current, (EIF_BOOLEAN) 0));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {EXCEPTIONS}.c_trace_exception */
void F222_2635 (EIF_REFERENCE Current, EIF_BOOLEAN arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("c_trace_exception", 221, Current, 0, 1, 2617);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);eetrace(arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

void EIF_Minit196 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
