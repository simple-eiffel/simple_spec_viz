/*
 * Code for class KL_DOUBLE_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "kl105.h"
#include <math.h>
#include "eif_helpers.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {KL_DOUBLE_ROUTINES}.log */
EIF_REAL_64 F131_1774 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("log", 130, Current, 0, 1, 1804);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F104_1451(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.log2 */
EIF_REAL_64 F131_1775 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("log2", 130, Current, 0, 1, 1805);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F104_1442(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.log10 */
EIF_REAL_64 F131_1776 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("log10", 130, Current, 0, 1, 1806);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) eif_is_greater_real_64 (arg1, (EIF_REAL_64) 0.0), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (nstcall = 0, F104_1452(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.exp */
EIF_REAL_64 F131_1777 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("exp", 130, Current, 0, 1, 1807);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (nstcall = 0, F104_1450(Current, arg1));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.nth_root */
EIF_REAL_64 F131_1778 (EIF_REFERENCE Current, EIF_REAL_64 arg1, EIF_REAL_64 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	EIF_REAL_64 Result = ((EIF_REAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("nth_root", 130, Current, 0, 2, 1808);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("divisible", EX_PRE);
		tr2 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr2 = arg2;
		tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = (EIF_REAL_64) 1.0;
		tb1 = (nstcall = 1, F1025_7354(RTCW(tr1), tr2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_REAL_64) (EIF_REAL_64) pow ((EIF_REAL_64) (arg1), (EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) ((EIF_REAL_64) 1.0) /  (EIF_REAL_64) (arg2))));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.truncated_to_integer */
EIF_INTEGER_32 F131_1779 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("truncated_to_integer", 130, Current, 0, 1, 1809);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,429,(nstcall = 1, F264_3369), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,381,(nstcall = 1, F264_3370), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.rounded_to_integer */
EIF_INTEGER_32 F131_1780 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("rounded_to_integer", 130, Current, 0, 1, 1810);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr8_1 = eif_abs_real64 (arg1);
		tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,429,(nstcall = 1, F264_3369), (RTCW(tr1)));
		tr8_2 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5), tr8_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr8_1 = eif_abs_real64 (arg1);
		tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,381,(nstcall = 1, F264_3370), (RTCW(tr1)));
		tr8_2 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 ((EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5), (EIF_REAL_64) (tr8_2 + (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	ti4_1 = (nstcall = 1, F1025_7367(RTCW(tr1)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = arg1;
		ti4_1 = (nstcall = 1, F1025_7341(RTCW(tr1)));
		tr8_1 = eif_abs_real64 (arg1);
		if ((EIF_BOOLEAN)(Result == (EIF_INTEGER_32) (ti4_1 * (nstcall = 0, F131_1781(Current, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 0.5)))))) {
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

/* {KL_DOUBLE_ROUTINES}.floor_to_integer */
EIF_INTEGER_32 F131_1781 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("floor_to_integer", 130, Current, 0, 1, 1811);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_large_enough", EX_PRE);
		tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,429,(nstcall = 1, F264_3369), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_greater_equal_real_64 (arg1, tr8_1), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("d_small_enough", EX_PRE);
		tr1 = RTOUCR(380,(nstcall = 0, F129_1767), (Current));
		ti4_1 = RTOUCB(EIF_INTEGER_32,381,(nstcall = 1, F264_3370), (RTCW(tr1)));
		tr8_1 = (EIF_REAL_64) (ti4_1);
		RTTE((EIF_BOOLEAN) eif_is_less_real_64 (arg1, (EIF_REAL_64) (tr8_1 + (EIF_REAL_64) 1.0)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = (EIF_INTEGER_32) arg1;
	Result = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
	*(EIF_REAL_64 *)tr1 = arg1;
	ti4_1 = (nstcall = 1, F1025_7366(RTCW(tr1)));
	if ((EIF_BOOLEAN)(ti4_1 != Result)) {
		RTHOOK(5);
		Result--;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("definition", EX_POST);
		tr1 = RTLNS(eif_new_type(1026, 0x00).id, 1026, _OBJSIZ_0_0_0_0_0_0_0_1_);
		*(EIF_REAL_64 *)tr1 = arg1;
		ti4_1 = (nstcall = 1, F1025_7366(RTCW(tr1)));
		if ((EIF_BOOLEAN)(Result == ti4_1)) {
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

/* {KL_DOUBLE_ROUTINES}.is_nan */
EIF_BOOLEAN F131_1782 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("is_nan", 130, Current, 0, 1, 1812);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_nan_real_64 (arg1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.is_plus_infinity */
EIF_BOOLEAN F131_1783 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("is_plus_infinity", 130, Current, 0, 1, 1813);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_positive_infinity_real_64 (arg1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.is_minus_infinity */
EIF_BOOLEAN F131_1784 (EIF_REFERENCE Current, EIF_REAL_64 arg1)
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
	
	RTEAA("is_minus_infinity", 130, Current, 0, 1, 1814);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = eif_is_negative_infinity_real_64 (arg1);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {KL_DOUBLE_ROUTINES}.plus_infinity */
static EIF_REAL_64 F131_1785_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 432)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("plus_infinity", 130, Current, 1, 0, 1815);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc1), ((EIF_INTEGER_32) 8L)));
	RTHOOK(2);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(5);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 3L)));
	RTHOOK(6);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(7);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 5L)));
	RTHOOK(8);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L), ((EIF_INTEGER_32) 6L)));
	RTHOOK(9);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 127L), ((EIF_INTEGER_32) 7L)));
	RTHOOK(10);
	tr8_1 = (nstcall = 1, F303_3933(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("positive", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_greater_real_64 (Result, tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F131_1785 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,432,F131_1785_body,(Current));
}

/* {KL_DOUBLE_ROUTINES}.minus_infinity */
static EIF_REAL_64 F131_1786_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REAL_64 tr8_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_REAL_64)
	RTOUDB(EIF_REAL_64, 433)

	RTLI(2);
	RTLR(0,loc1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("minus_infinity", 130, Current, 1, 0, 1816);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	loc1 = RTLNS(eif_new_type(302, 0x01).id, 302, _OBJSIZ_0_1_0_1_0_1_1_0_);
	(nstcall = -1, F303_3908(RTCW(loc1), ((EIF_INTEGER_32) 8L)));
	RTHOOK(2);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 0L)));
	RTHOOK(3);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 1L)));
	RTHOOK(4);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 2L)));
	RTHOOK(5);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 3L)));
	RTHOOK(6);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 4L)));
	RTHOOK(7);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 0L), ((EIF_INTEGER_32) 5L)));
	RTHOOK(8);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 240L), ((EIF_INTEGER_32) 6L)));
	RTHOOK(9);
	(nstcall = 1, F303_3939(RTCW(loc1), (EIF_NATURAL_8) ((EIF_INTEGER_32) 255L), ((EIF_INTEGER_32) 7L)));
	RTHOOK(10);
	tr8_1 = (nstcall = 1, F303_3933(RTCW(loc1), ((EIF_INTEGER_32) 0L)));
	Result = (EIF_REAL_64) tr8_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(11);
		RTCT("negative", EX_POST);
		tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
		if ((EIF_BOOLEAN) eif_is_less_real_64 (Result, tr8_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(12);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REAL_64 F131_1786 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_REAL_64,433,F131_1786_body,(Current));
}

void EIF_Minit105 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
