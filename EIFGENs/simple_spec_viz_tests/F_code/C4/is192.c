/*
 * Code for class ISE_EXCEPTION_MANAGER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "is192.h"
#include "eif_built_in.h"
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

/* {ISE_EXCEPTION_MANAGER}.last_exception */
EIF_REFERENCE F218_2498 (EIF_REFERENCE Current)
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
	
	RTEAA("last_exception", 217, Current, 0, 0, 2503);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(23,(nstcall = 0, F218_2516), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.raise */
void F218_2499 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLIU(4);
	
	RTEAA("raise", 217, Current, 3, 1, 2504);
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
	tb1 = (nstcall = 1, F178_2385(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(4);
		if ((nstcall = 0, F218_2524(Current))) {
			RTHOOK(5);
			tr1 = (nstcall = 0, F218_2498(Current));
			(nstcall = 1, F178_2389(RTCW(arg1), tr1));
		}
		RTHOOK(6);
		(nstcall = 0, F218_2510(Current, arg1));
		RTHOOK(7);
		loc1 = (nstcall = 0, F1_33(Current));
		RTHOOK(8);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(9);
			tp1 = (nstcall = 1, F238_2771(loc3));
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(10);
			loc2 = (nstcall = 0, F1_33(Current));
		}
		RTHOOK(11);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2276[Dtype(RTCW(arg1))-177])(arg1));
		(nstcall = 0, F218_2523(Current, ti4_1, loc1, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.ignore */
void F218_2500 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("ignore", 217, Current, 1, 1, 2505);
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
		RTCT("is_ignorable", EX_PRE);
		RTTE((nstcall = 0, F218_2503(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (nstcall = 1, F966_6341(arg1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = RTOUCR(24,(nstcall = 0, F218_2512), (Current));
	(nstcall = 1, F890_5949(RTCW(tr1), loc1, loc1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("is_caught", EX_POST);
		if ((nstcall = 0, F218_2505(Current, arg1))) {
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
}

/* {ISE_EXCEPTION_MANAGER}.catch */
void F218_2501 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("catch", 217, Current, 0, 1, 2506);
	RTSA(Dtype(Current));
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
	tr1 = RTOUCR(24,(nstcall = 0, F218_2512), (Current));
	ti4_1 = (nstcall = 1, F966_6341(arg1));
	(nstcall = 1, F890_5954(RTCW(tr1), ti4_1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("is_ignored", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F218_2505(Current, arg1))) {
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

/* {ISE_EXCEPTION_MANAGER}.set_is_ignored */
void F218_2502 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_BOOLEAN arg2)
{
	GTCX
	RTEX;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("set_is_ignored", 217, Current, 0, 2, 2507);
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
		RTCT("a_ignored_implies_is_ignorable", EX_PRE);
		tb1 = '\01';
		if (arg2) {
			tb1 = (nstcall = 0, F218_2503(Current, arg1));
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	if (arg2) {
		RTHOOK(4);
		(nstcall = 0, F218_2500(Current, arg1));
	} else {
		RTHOOK(5);
		(nstcall = 0, F218_2501(Current, arg1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_ignored_set", EX_POST);
		if ((EIF_BOOLEAN)((nstcall = 0, F218_2505(Current, arg1)) == arg2)) {
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

/* {ISE_EXCEPTION_MANAGER}.is_ignorable */
EIF_BOOLEAN F218_2503 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_ignorable", 217, Current, 0, 1, 2508);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(25,(nstcall = 0, F218_2513), (Current));
	ti4_1 = (nstcall = 1, F966_6341(arg1));
	tb1 = (nstcall = 1, F890_5910(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.is_raisable */
EIF_BOOLEAN F218_2504 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_raisable", 217, Current, 0, 1, 2509);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(26,(nstcall = 0, F218_2514), (Current));
	ti4_1 = (nstcall = 1, F966_6341(arg1));
	tb1 = (nstcall = 1, F890_5910(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.is_ignored */
EIF_BOOLEAN F218_2505 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_ignored", 217, Current, 0, 1, 2510);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(24,(nstcall = 0, F218_2512), (Current));
	ti4_1 = (nstcall = 1, F966_6341(arg1));
	tb1 = (nstcall = 1, F890_5910(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_caught", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, F218_2506(Current, arg1)))) {
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

/* {ISE_EXCEPTION_MANAGER}.is_caught */
EIF_BOOLEAN F218_2506 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("is_caught", 217, Current, 0, 1, 2511);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(24,(nstcall = 0, F218_2512), (Current));
	ti4_1 = (nstcall = 1, F966_6341(arg1));
	tb1 = (nstcall = 1, F890_5910(RTCW(tr1), ti4_1));
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) !tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("not_is_ignored", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) !(nstcall = 0, F218_2505(Current, arg1)))) {
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

/* {ISE_EXCEPTION_MANAGER}.type_of_code */
EIF_REFERENCE F218_2507 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("type_of_code", 217, Current, 0, 1, 2512);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			tr1 = RTLNTY2(eif_new_type(205, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 2L:
			RTHOOK(3);
			tr1 = RTLNTY2(eif_new_type(196, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 3L:
			RTHOOK(4);
			tr1 = RTLNTY2(eif_new_type(215, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 4L:
			RTHOOK(5);
			tr1 = RTLNTY2(eif_new_type(214, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 5L:
			RTHOOK(6);
			tr1 = RTLNTY2(eif_new_type(181, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 6L:
			RTHOOK(7);
			tr1 = RTLNTY2(eif_new_type(213, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 7L:
			RTHOOK(8);
			tr1 = RTLNTY2(eif_new_type(212, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 8L:
			RTHOOK(9);
			tr1 = RTLNTY2(eif_new_type(204, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 9L:
			RTHOOK(10);
			tr1 = RTLNTY2(eif_new_type(203, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 10L:
			RTHOOK(11);
			tr1 = RTLNTY2(eif_new_type(211, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 11L:
			RTHOOK(12);
			tr1 = RTLNTY2(eif_new_type(210, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 12L:
			RTHOOK(13);
			tr1 = RTLNTY2(eif_new_type(185, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 13L:
			RTHOOK(14);
			tr1 = RTLNTY2(eif_new_type(191, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 14L:
			RTHOOK(15);
			tr1 = RTLNTY2(eif_new_type(189, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 15L:
			RTHOOK(16);
			tr1 = RTLNTY2(eif_new_type(196, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 16L:
			RTHOOK(17);
			tr1 = RTLNTY2(eif_new_type(188, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 17L:
			RTHOOK(18);
			tr1 = RTLNTY2(eif_new_type(207, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 18L:
			RTHOOK(19);
			tr1 = RTLNTY2(eif_new_type(195, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 19L:
			RTHOOK(20);
			tr1 = RTLNTY2(eif_new_type(202, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 20L:
			RTHOOK(21);
			tr1 = RTLNTY2(eif_new_type(187, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 21L:
			RTHOOK(22);
			tr1 = RTLNTY2(eif_new_type(199, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 22L:
			RTHOOK(23);
			tr1 = RTLNTY2(eif_new_type(183, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 23L:
			RTHOOK(24);
			tr1 = RTLNTY2(eif_new_type(198, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 24L:
			RTHOOK(25);
			tr1 = RTLNTY2(eif_new_type(178, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 25L:
			RTHOOK(26);
			tr1 = RTLNTY2(eif_new_type(191, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 26L:
			RTHOOK(27);
			tr1 = RTLNTY2(eif_new_type(208, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 27L:
			RTHOOK(28);
			tr1 = RTLNTY2(eif_new_type(199, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 28L:
			RTHOOK(29);
			tr1 = RTLNTY2(eif_new_type(184, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 29L:
			RTHOOK(30);
			tr1 = RTLNTY2(eif_new_type(212, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 30L:
			RTHOOK(31);
			tr1 = RTLNTY2(eif_new_type(192, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		case 31L:
			RTHOOK(32);
			tr1 = RTLNTY2(eif_new_type(200, 0x01), 0x01);
			Result = (EIF_REFERENCE) tr1;
			break;
		default:
			RTHOOK(33);
			Result = (EIF_REFERENCE) NULL;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(34);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_code */
EIF_REFERENCE F218_2508 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Result);
	RTLR(1,loc3);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,loc1);
	RTLR(5,loc2);
	RTLIU(6);
	
	RTEAA("exception_from_code", 217, Current, 3, 1, 2513);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case 1L:
			RTHOOK(2);
			Result = RTLNS(eif_new_type(205, 0x01).id, 205, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 2L:
			RTHOOK(3);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(27,(nstcall = 0, F218_2517), (Current))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(4);
			(nstcall = 1, F197_2445(RTCW(loc3), ((EIF_INTEGER_32) 2L)));
			RTHOOK(5);
			Result = (EIF_REFERENCE) loc3;
			break;
		case 3L:
			RTHOOK(6);
			Result = RTLNS(eif_new_type(215, 0x01).id, 215, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 4L:
			RTHOOK(7);
			Result = RTLNS(eif_new_type(214, 0x01).id, 214, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 5L:
			RTHOOK(8);
			Result = RTLNS(eif_new_type(181, 0x01).id, 181, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 6L:
			RTHOOK(9);
			Result = RTLNS(eif_new_type(213, 0x01).id, 213, _OBJSIZ_5_2_0_1_0_0_0_0_);
			break;
		case 7L:
			RTHOOK(10);
			Result = RTLNS(eif_new_type(212, 0x01).id, 212, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 8L:
			RTHOOK(11);
			Result = RTLNS(eif_new_type(204, 0x01).id, 204, _OBJSIZ_7_1_0_1_0_0_0_0_);
			break;
		case 9L:
			RTHOOK(12);
			Result = RTLNS(eif_new_type(203, 0x01).id, 203, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 10L:
			RTHOOK(13);
			Result = RTLNS(eif_new_type(211, 0x01).id, 211, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 11L:
			RTHOOK(14);
			Result = RTLNS(eif_new_type(210, 0x01).id, 210, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 12L:
			RTHOOK(15);
			Result = RTLNS(eif_new_type(185, 0x01).id, 185, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 13L:
			RTHOOK(16);
			loc1 = RTLNS(eif_new_type(191, 0x01).id, 191, _OBJSIZ_5_1_0_2_0_0_0_0_);
			RTHOOK(17);
			(nstcall = 1, F192_2437(RTCW(loc1), ((EIF_INTEGER_32) 13L)));
			RTHOOK(18);
			Result = (EIF_REFERENCE) loc1;
			break;
		case 14L:
			RTHOOK(19);
			Result = RTLNS(eif_new_type(189, 0x01).id, 189, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 15L:
			RTHOOK(20);
			tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(27,(nstcall = 0, F218_2517), (Current))));
			loc3 = (EIF_REFERENCE) tr1;
			RTHOOK(21);
			(nstcall = 1, F197_2445(RTCW(loc3), ((EIF_INTEGER_32) 15L)));
			RTHOOK(22);
			Result = (EIF_REFERENCE) loc3;
			break;
		case 16L:
			RTHOOK(23);
			Result = RTLNS(eif_new_type(188, 0x01).id, 188, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 17L:
			RTHOOK(24);
			Result = RTLNS(eif_new_type(207, 0x01).id, 207, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 18L:
			RTHOOK(25);
			Result = RTLNS(eif_new_type(195, 0x01).id, 195, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 19L:
			RTHOOK(26);
			Result = RTLNS(eif_new_type(202, 0x01).id, 202, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 20L:
			RTHOOK(27);
			Result = RTLNS(eif_new_type(187, 0x01).id, 187, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 21L:
			RTHOOK(28);
			loc2 = RTLNS(eif_new_type(199, 0x01).id, 199, _OBJSIZ_5_1_0_3_0_0_0_0_);
			RTHOOK(29);
			(nstcall = 1, F200_2453(RTCW(loc2), ((EIF_INTEGER_32) 21L)));
			RTHOOK(30);
			Result = (EIF_REFERENCE) loc2;
			break;
		case 22L:
			RTHOOK(31);
			Result = RTLNS(eif_new_type(183, 0x01).id, 183, _OBJSIZ_5_1_0_2_0_0_0_0_);
			break;
		case 23L:
			RTHOOK(32);
			Result = RTLNS(eif_new_type(198, 0x01).id, 198, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 24L:
			RTHOOK(33);
			Result = RTLNS(eif_new_type(178, 0x01).id, 178, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 25L:
			RTHOOK(34);
			loc1 = RTLNS(eif_new_type(191, 0x01).id, 191, _OBJSIZ_5_1_0_2_0_0_0_0_);
			RTHOOK(35);
			(nstcall = 1, F192_2437(RTCW(loc1), ((EIF_INTEGER_32) 25L)));
			RTHOOK(36);
			Result = (EIF_REFERENCE) loc1;
			break;
		case 26L:
			RTHOOK(37);
			Result = RTLNS(eif_new_type(208, 0x01).id, 208, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 27L:
			RTHOOK(38);
			loc2 = RTLNS(eif_new_type(199, 0x01).id, 199, _OBJSIZ_5_1_0_3_0_0_0_0_);
			RTHOOK(39);
			(nstcall = 1, F200_2453(RTCW(loc2), ((EIF_INTEGER_32) 27L)));
			RTHOOK(40);
			Result = (EIF_REFERENCE) loc2;
			break;
		case 28L:
			RTHOOK(41);
			Result = RTLNS(eif_new_type(184, 0x01).id, 184, _OBJSIZ_6_1_0_3_0_0_0_0_);
			break;
		case 29L:
			RTHOOK(42);
			Result = RTLNS(eif_new_type(212, 0x01).id, 212, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 30L:
			RTHOOK(43);
			Result = RTLNS(eif_new_type(192, 0x01).id, 192, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
		case 31L:
			RTHOOK(44);
			Result = RTLNS(eif_new_type(200, 0x01).id, 200, _OBJSIZ_5_1_0_1_0_0_0_0_);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(45);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_data */
EIF_REFERENCE F218_2509 (EIF_REFERENCE Current)
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
	
	RTEAA("exception_data", 217, Current, 0, 0, 2514);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(28,(nstcall = 0, F218_2515), (Current))));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.set_last_exception */
void F218_2510 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,arg1);
	RTLIU(3);
	
	RTEAA("set_last_exception", 217, Current, 0, 1, 2515);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(23,(nstcall = 0, F218_2516), (Current));
	(nstcall = 1, F115_1624(RTCW(tr1), arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("last_exception_set", EX_POST);
		tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(23,(nstcall = 0, F218_2516), (Current))));
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

/* {ISE_EXCEPTION_MANAGER}.set_exception_data */
void F218_2511 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_BOOLEAN arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4, EIF_REFERENCE arg5, EIF_REFERENCE arg6, EIF_REFERENCE arg7, EIF_REFERENCE arg8, EIF_REFERENCE arg9, EIF_REFERENCE arg10, EIF_INTEGER_32 arg11, EIF_BOOLEAN arg12)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(11);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,arg5);
	RTLR(4,arg6);
	RTLR(5,arg7);
	RTLR(6,arg8);
	RTLR(7,arg9);
	RTLR(8,arg10);
	RTLR(9,loc1);
	RTLR(10,loc2);
	RTLIU(11);
	
	RTEAA("set_exception_data", 217, Current, 2, 12, 2516);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(28,(nstcall = 0, F218_2515), (Current));
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,11,996,1002,1002,1002,0xFF01,1080,0xFF01,1080,0xFF01,1080,0xFF01,1080,0xFF01,1080,0xFF01,1080,1002,1035,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNTS(typres0.id, 12, 0);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = arg1;
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = arg3;
	((EIF_TYPED_VALUE *)tr2+3)->it_i4 = arg4;
	((EIF_TYPED_VALUE *)tr2+4)->it_r = arg5;
	RTAR(tr2,arg5);
	((EIF_TYPED_VALUE *)tr2+5)->it_r = arg6;
	RTAR(tr2,arg6);
	((EIF_TYPED_VALUE *)tr2+6)->it_r = arg7;
	RTAR(tr2,arg7);
	((EIF_TYPED_VALUE *)tr2+7)->it_r = arg8;
	RTAR(tr2,arg8);
	((EIF_TYPED_VALUE *)tr2+8)->it_r = arg9;
	RTAR(tr2,arg9);
	((EIF_TYPED_VALUE *)tr2+9)->it_r = arg10;
	RTAR(tr2,arg10);
	((EIF_TYPED_VALUE *)tr2+10)->it_i4 = arg11;
	((EIF_TYPED_VALUE *)tr2+11)->it_b = arg12;
	(nstcall = 1, F115_1624(RTCW(tr1), tr2));
	RTHOOK(2);
	if (arg2) {
		RTHOOK(3);
		tr1 = (nstcall = 0, F218_2519(Current));
		loc1 = tr1;
		if (EIF_TEST(loc1)) {
			RTHOOK(4);
			(nstcall = 0, F218_2510(Current, loc1));
		}
	} else {
		RTHOOK(5);
		RTCT0("last_exception_attached", EX_CHECK);
		tr1 = (nstcall = 0, F218_2498(Current));
		loc2 = tr1;
		if (EIF_TEST(loc2)) {
			RTCK0;
		} else {
			RTCF0;
		}
		RTHOOK(6);
		(nstcall = 1, F178_2396(loc2, arg10));
		RTHOOK(7);
		(nstcall = 1, F178_2390(loc2, arg6));
		RTHOOK(8);
		(nstcall = 1, F178_2394(loc2, arg7));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.ignored_exceptions */
static EIF_REFERENCE F218_2512_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(24)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("ignored_exceptions", 217, Current, 0, 0, 2517);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,889,1002,1002,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 889, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F890_5902(RTCW(tr1), ((EIF_INTEGER_32) 0L)));
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

EIF_REFERENCE F218_2512 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(24,F218_2512_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unignorable_exceptions */
static EIF_REFERENCE F218_2513_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(25)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("unignorable_exceptions", 217, Current, 1, 0, 2518);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,889,1002,1002,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 889, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F890_5902(RTCW(tr1), ((EIF_INTEGER_32) 1L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(205, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F966_6341(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 1, F890_5949(RTCW(Result), loc1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F218_2513 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(25,F218_2513_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.unraisable_exceptions */
static EIF_REFERENCE F218_2514_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(26)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("unraisable_exceptions", 217, Current, 1, 0, 2519);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,889,1002,1002,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 889, _OBJSIZ_4_3_0_10_0_0_0_0_);
	}
	(nstcall = -1, F890_5902(RTCW(tr1), ((EIF_INTEGER_32) 2L)));
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	tr1 = RTLNTY2(eif_new_type(204, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F966_6341(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	(nstcall = 1, F890_5949(RTCW(Result), loc1, loc1));
	RTHOOK(4);
	tr1 = RTLNTY2(eif_new_type(192, 0x01), 0x01);
	ti4_1 = (nstcall = 1, F966_6341(tr1));
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(5);
	(nstcall = 1, F890_5949(RTCW(Result), loc1, loc1));
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F218_2514 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(26,F218_2514_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.exception_data_cell */
static EIF_REFERENCE F218_2515_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(28)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("exception_data_cell", 217, Current, 0, 0, 2520);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,114,0xFFF9,11,996,1002,1002,1002,0xFF01,1080,0xFF01,1080,0xFF01,1080,0xFF01,1080,0xFF01,1080,0xFF01,1080,1002,1035,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 114, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F115_1624(RTCW(tr1), NULL));
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

EIF_REFERENCE F218_2515 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(28,F218_2515_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.last_exception_cell */
static EIF_REFERENCE F218_2516_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(23)

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("last_exception_cell", 217, Current, 0, 0, 2521);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,114,177,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 114, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F115_1624(RTCW(tr1), NULL));
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

EIF_REFERENCE F218_2516 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(23,F218_2516_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.no_memory_exception_object_cell */
static EIF_REFERENCE F218_2517_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(27)

	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("no_memory_exception_object_cell", 217, Current, 1, 0, 2522);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(196, 0x01).id, 196, _OBJSIZ_5_1_0_2_0_0_0_0_);
	RTHOOK(2);
	tr1 = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(tr1), ((EIF_INTEGER_32) 4096L)));
	(nstcall = 1, F178_2396(RTCW(loc1), tr1));
	RTHOOK(3);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,114,0xFF01,196,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLNS(typres0.id, 114, _OBJSIZ_1_0_0_0_0_0_0_0_);
	}
	(nstcall = -1, F115_1624(RTCW(tr1), loc1));
	Result = (EIF_REFERENCE) tr1;
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F218_2517 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(27,F218_2517_body,(Current));
}

/* {ISE_EXCEPTION_MANAGER}.is_code_ignored */
EIF_BOOLEAN F218_2518 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("is_code_ignored", 217, Current, 1, 1, 2523);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = (nstcall = 0, F218_2507(Current, arg1));
	loc1 = tr1;
	if (EIF_TEST(loc1)) {
		RTHOOK(2);
		Result = (nstcall = 0, F218_2505(Current, loc1));
	} else {
		RTHOOK(3);
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.exception_from_data */
EIF_REFERENCE F218_2519 (EIF_REFERENCE Current)
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
	EIF_REFERENCE loc9 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc10 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(13);
	RTLR(0,loc2);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,loc3);
	RTLR(4,loc4);
	RTLR(5,loc1);
	RTLR(6,loc5);
	RTLR(7,loc6);
	RTLR(8,loc7);
	RTLR(9,loc8);
	RTLR(10,loc9);
	RTLR(11,loc10);
	RTLR(12,Result);
	RTLIU(13);
	
	RTEAA("exception_from_data", 217, Current, 10, 0, 2524);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\0';
	tr1 = (nstcall = 0, F218_2509(Current));
	loc2 = tr1;
	if (EIF_TEST(loc2)) {
		ti4_1 = eif_integer_32_item(loc2,1);
		tr1 = (nstcall = 0, F218_2508(Current, ti4_1));
		loc3 = tr1;
		tb1 = EIF_TEST(loc3);
	}
	if (tb1) {
		RTHOOK(2);
		loc4 = loc3;
		loc4 = RTRV(eif_new_type(204, 0x01),loc4);
		if (EIF_TEST(loc4)) {
			RTHOOK(3);
			loc1 = (nstcall = 0, F218_2498(Current));
			RTHOOK(4);
			if ((EIF_BOOLEAN)(loc1 != NULL)) {
				RTHOOK(5);
				(nstcall = 1, F178_2389(loc3, loc1));
			}
			RTHOOK(6);
			tr1 = eif_boxed_item(loc2,7);
			(nstcall = 1, F205_2465(loc4, tr1));
			RTHOOK(7);
			tr1 = eif_boxed_item(loc2,8);
			(nstcall = 1, F205_2466(loc4, tr1));
		} else {
			RTHOOK(8);
			loc5 = loc3;
			loc5 = RTRV(eif_new_type(192, 0x01),loc5);
			if (EIF_TEST(loc5)) {
				RTHOOK(9);
				loc1 = (nstcall = 0, F218_2498(Current));
				RTHOOK(10);
				if ((EIF_BOOLEAN)(loc1 != NULL)) {
					RTHOOK(11);
					(nstcall = 1, F178_2389(loc3, loc1));
				}
			} else {
				RTHOOK(12);
				loc6 = loc3;
				loc6 = RTRV(eif_new_type(213, 0x01),loc6);
				if (EIF_TEST(loc6)) {
					RTHOOK(13);
					tb1 = eif_boolean_item(loc2,11);
					(nstcall = 1, F214_2480(loc6, tb1));
				} else {
					RTHOOK(14);
					loc7 = loc3;
					loc7 = RTRV(eif_new_type(185, 0x01),loc7);
					if (EIF_TEST(loc7)) {
						RTHOOK(15);
						ti4_1 = eif_integer_32_item(loc2,2);
						(nstcall = 1, F186_2428(loc7, ti4_1));
					} else {
						RTHOOK(16);
						loc8 = loc3;
						loc8 = RTRV(eif_new_type(199, 0x01),loc8);
						if (EIF_TEST(loc8)) {
							RTHOOK(17);
							ti4_1 = eif_integer_32_item(loc2,3);
							(nstcall = 1, F200_2452(loc8, ti4_1));
						} else {
							RTHOOK(18);
							loc9 = loc3;
							loc9 = RTRV(eif_new_type(183, 0x01),loc9);
							if (EIF_TEST(loc9)) {
								RTHOOK(19);
								ti4_1 = eif_integer_32_item(loc2,3);
								(nstcall = 1, F184_2405(loc9, ti4_1));
							} else {
								RTHOOK(20);
								loc10 = loc3;
								loc10 = RTRV(eif_new_type(184, 0x01),loc10);
								if (EIF_TEST(loc10)) {
									RTHOOK(21);
									ti4_1 = eif_integer_32_item(loc2,2);
									(nstcall = 1, F185_2410(loc10, ti4_1));
									RTHOOK(22);
									tr1 = eif_boxed_item(loc2,4);
									(nstcall = 1, F185_2415(loc10, tr1));
								}
							}
						}
					}
				}
				RTHOOK(23);
				if ((nstcall = 0, F218_2524(Current))) {
					RTHOOK(24);
					loc1 = (nstcall = 0, F218_2498(Current));
				}
				RTHOOK(25);
				if ((EIF_BOOLEAN)(loc1 == NULL)) {
					RTHOOK(26);
					loc1 = (EIF_REFERENCE) loc3;
				}
				RTHOOK(27);
				(nstcall = 1, F178_2389(loc3, loc1));
			}
		}
		RTHOOK(28);
		tr1 = eif_boxed_item(loc2,9);
		(nstcall = 1, F178_2396(loc3, tr1));
		RTHOOK(29);
		tr1 = eif_boxed_item(loc2,4);
		(nstcall = 1, F178_2382(loc3, tr1));
		RTHOOK(30);
		tr1 = eif_boxed_item(loc2,5);
		(nstcall = 1, F178_2390(loc3, tr1));
		RTHOOK(31);
		tr1 = eif_boxed_item(loc2,6);
		(nstcall = 1, F178_2394(loc3, tr1));
		RTHOOK(32);
		Result = (EIF_REFERENCE) loc3;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(33);
	RTLE;
	RTEE;
	return Result;
}

/* {ISE_EXCEPTION_MANAGER}.once_raise */
void F218_2520 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_POINTER loc1 = (EIF_POINTER) 0;
	EIF_POINTER loc2 = (EIF_POINTER) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_POINTER tp1;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc3);
	RTLIU(5);
	
	RTEAA("once_raise", 217, Current, 3, 1, 2525);
	RTSA(Dtype(Current));
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
	tb1 = (nstcall = 1, F178_2385(RTCW(arg1)));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		if ((nstcall = 0, F218_2524(Current))) {
			RTHOOK(4);
			tr1 = (nstcall = 1, F178_2375(RTCW(arg1)));
			tr2 = (nstcall = 0, F218_2498(Current));
			(nstcall = 1, F178_2389(RTCW(tr1), tr2));
		}
		RTHOOK(5);
		(nstcall = 0, F218_2510(Current, arg1));
		RTHOOK(6);
		loc1 = (nstcall = 0, F1_33(Current));
		RTHOOK(7);
		tr1 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_3_);
		loc3 = tr1;
		if (EIF_TEST(loc3)) {
			RTHOOK(8);
			tp1 = (nstcall = 1, F238_2771(loc3));
			loc2 = (EIF_POINTER) tp1;
		} else {
			RTHOOK(9);
			loc2 = (nstcall = 0, F1_33(Current));
		}
		RTHOOK(10);
		ti4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_INTEGER_32, (EIF_REFERENCE)) R2276[Dtype(RTCW(arg1))-177])(arg1));
		(nstcall = 0, F218_2523(Current, ti4_1, loc1, loc2));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.init_exception_manager */
void F218_2521 (EIF_REFERENCE Current)
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
	
	RTEAA("init_exception_manager", 217, Current, 0, 0, 2526);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(24,(nstcall = 0, F218_2512), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(2);
	tr1 = RTOUCR(25,(nstcall = 0, F218_2513), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(3);
	tr1 = RTOUCR(26,(nstcall = 0, F218_2514), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(4);
	tr1 = RTOUCR(28,(nstcall = 0, F218_2515), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(5);
	tr1 = RTOUCR(23,(nstcall = 0, F218_2516), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTHOOK(6);
	tr1 = RTOUCR(27,(nstcall = 0, F218_2517), (Current));
	(nstcall = 1, F1_31(RTCW(tr1)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.free_preallocated_trace */
void F218_2522 (EIF_REFERENCE Current)
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
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("free_preallocated_trace", 217, Current, 1, 0, 2527);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(RTCV(RTOUCR(27,(nstcall = 0, F218_2517), (Current))));
	loc1 = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(3);
		(nstcall = 1, F178_2382(RTCW(loc1), NULL));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.developer_raise */
void F218_2523 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_POINTER arg2, EIF_POINTER arg3)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("developer_raise", 217, Current, 0, 3, 2528);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);
	eif_builtin_ISE_EXCEPTION_MANAGER_developer_raise__i4_p_p_ (arg1, arg2, arg3);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
}

/* {ISE_EXCEPTION_MANAGER}.in_rescue */
EIF_BOOLEAN F218_2524 (EIF_REFERENCE Current)
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
	
	RTEAA("in_rescue", 217, Current, 0, 0, 2529);
	RTSA(Dtype(Current));
	RTSC;
	RTIV(Current, RTAL);Result = (EIF_BOOLEAN) EIF_TEST(eif_is_in_rescue());
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTLE;
	RTEE;
	return Result;
}

void EIF_Minit192 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
