/*
 * Code for class EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ex191.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F217_2487 (EIF_REFERENCE Current)
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
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Result);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("last_exception", 216, Current, 0, 0, 2492);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	tr1 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R2334[Dtype(RTCW(tr2))-216])(tr2));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTION_MANAGER}.raise */
void F217_2488 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("raise", 216, Current, 0, 1, 2493);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_exception_is_raisable", EX_PRE);
		tb1 = (nstcall = 1, F178_2384(RTCW(arg1)));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2335[Dtype(RTCW(tr2))-216])(tr2, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {EXCEPTION_MANAGER}.ignore */
void F217_2489 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("ignore", 216, Current, 0, 1, 2494);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_ignorable", EX_PRE);
		RTTE((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2339[dtype-216])(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2336[Dtype(RTCW(tr2))-216])(tr2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_caught", EX_POST);
		if ((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2341[dtype-216])(Current, arg1))) {
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

/* {EXCEPTION_MANAGER}.catch */
void F217_2490 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("catch", 216, Current, 0, 1, 2495);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R2337[Dtype(RTCW(tr2))-216])(tr2, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_ignored", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2341[dtype-216])(Current, arg1))) {
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

/* {EXCEPTION_MANAGER}.set_is_ignored */
void F217_2491 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("set_is_ignored", 216, Current, 0, 2, 2496);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_exception_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_ignored_implies_is_ignorable", EX_PRE);
		tb1 = '\01';
		if (arg2) {
			tb1 = (nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2339[dtype-216])(Current, arg1));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE, EIF_BOOLEAN)) R2338[Dtype(RTCW(tr2))-216])(tr2, arg1, arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("is_ignored_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2341[dtype-216])(Current, arg1)) == arg2)) {
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

/* {EXCEPTION_MANAGER}.is_ignorable */
EIF_BOOLEAN F217_2492 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("is_ignorable", 216, Current, 0, 1, 2497);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2339[Dtype(RTCW(tr2))-216])(tr2, arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTION_MANAGER}.is_raisable */
EIF_BOOLEAN F217_2493 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("is_raisable", 216, Current, 0, 1, 2498);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2340[Dtype(RTCW(tr2))-216])(tr2, arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F217_2494 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("is_ignored", 216, Current, 0, 1, 2499);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2341[Dtype(RTCW(tr2))-216])(tr2, arg1));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_caught", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2342[dtype-216])(Current, arg1)))) {
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

/* {EXCEPTION_MANAGER}.is_caught */
EIF_BOOLEAN F217_2495 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,arg1);
	RTLR(3,Current);
	RTLIU(4);
	
	RTEAA("is_caught", 216, Current, 0, 1, 2500);
	RTSA(dtype);
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(176, 0x01).id, 176, _OBJSIZ_0_0_0_0_0_0_0_0_);
	tr2 = RTOUCR(29,(nstcall = 1, F177_2365), (RTCW(tr1)));
	tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2342[Dtype(RTCW(tr2))-216])(tr2, arg1));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_ignored", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE)) R2341[dtype-216])(Current, arg1)))) {
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

/* {EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F217_2496 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("type_of_code", 216, Current, 0, 1, 2501);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

/* {EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F217_2497 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("exception_from_code", 216, Current, 0, 1, 2502);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return (EIF_REFERENCE) 0;
}

void EIF_Minit191 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
