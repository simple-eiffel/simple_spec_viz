/*
 * Code for class MA_DECIMAL_TEXT_PARSER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma248.h"
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

/* {MA_DECIMAL_TEXT_PARSER}.sign */
EIF_INTEGER_32 F298_3788 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_);
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_sign */
EIF_INTEGER_32 F298_3789 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_);
}


/* {MA_DECIMAL_TEXT_PARSER}.state */
EIF_INTEGER_32 F298_3790 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_);
}


/* {MA_DECIMAL_TEXT_PARSER}.error_code */
EIF_INTEGER_32 F298_3791 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_);
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_begin */
EIF_INTEGER_32 F298_3792 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_);
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_end */
EIF_INTEGER_32 F298_3793 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_);
}


/* {MA_DECIMAL_TEXT_PARSER}.coefficient_count */
EIF_INTEGER_32 F298_3794 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("coefficient_count", 297, Current, 0, 0, 3906);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (Result - ti4_1) + ((EIF_INTEGER_32) 1L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.fractional_part_count */
EIF_INTEGER_32 F298_3795 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("fractional_part_count", 297, Current, 0, 0, 3907);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_) > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(2);
		Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_);
		ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_);
		Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (Result - ti4_1);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.exponent_as_double */
EIF_REAL_64 F298_3796 (EIF_REFERENCE Current)
{
	return *(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_);
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_begin */
EIF_INTEGER_32 F298_3797 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_6_);
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_end */
EIF_INTEGER_32 F298_3798 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_7_);
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_significant_digits */
EIF_INTEGER_32 F298_3799 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_8_);
}


/* {MA_DECIMAL_TEXT_PARSER}.exponent_count */
EIF_INTEGER_32 F298_3800 (EIF_REFERENCE Current)
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
	
	RTEAA("exponent_count", 297, Current, 0, 0, 3912);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_8_);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_point_index */
EIF_INTEGER_32 F298_3801 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_);
}


/* {MA_DECIMAL_TEXT_PARSER}.last_parsed */
EIF_REFERENCE F298_3802 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {MA_DECIMAL_TEXT_PARSER}.error */
EIF_BOOLEAN F298_3803 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("error", 297, Current, 0, 0, 3915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 14L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.is_comma_allowed */
EIF_BOOLEAN F298_3804 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
}


/* {MA_DECIMAL_TEXT_PARSER}.is_infinity */
EIF_BOOLEAN F298_3805 (EIF_REFERENCE Current)
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
	
	RTEAA("is_infinity", 297, Current, 0, 0, 3917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 5L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.is_nan */
EIF_BOOLEAN F298_3806 (EIF_REFERENCE Current)
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
	
	RTEAA("is_nan", 297, Current, 0, 0, 3918);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 2L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.is_snan */
EIF_BOOLEAN F298_3807 (EIF_REFERENCE Current)
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
	
	RTEAA("is_snan", 297, Current, 0, 0, 3919);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = '\0';
	if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
		Result = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 3L));
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.has_point */
EIF_BOOLEAN F298_3808 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_point", 297, Current, 0, 0, 3920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.has_exponent */
EIF_BOOLEAN F298_3809 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("has_exponent", 297, Current, 0, 0, 3921);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_6_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_point_is_comma */
EIF_BOOLEAN F298_3810 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_);
}


/* {MA_DECIMAL_TEXT_PARSER}.parse */
void F298_3811 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
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
	
	RTEAA("parse", 297, Current, 0, 1, 3923);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_string_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_string_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = (nstcall = 0, F128_1763(Current));
	(nstcall = 0, F298_3813(Current, arg1, tr1, (EIF_BOOLEAN) 0));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL);
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_parsed_string_affected", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
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

/* {MA_DECIMAL_TEXT_PARSER}.parse_with_decimal_point_comma */
void F298_3812 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("parse_with_decimal_point_comma", 297, Current, 0, 1, 3924);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	tr1 = (nstcall = 0, F128_1763(Current));
	(nstcall = 0, F298_3813(Current, arg1, tr1, (EIF_BOOLEAN) 1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("no_mode_change", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("last_parsed_string_affected", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL);
		}
		if (tb2) {
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

/* {MA_DECIMAL_TEXT_PARSER}.parse_ctx */
void F298_3813 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2, EIF_BOOLEAN arg3)
{
	GTCX
	RTEX;
	EIF_BOOLEAN loc1 = (EIF_BOOLEAN) 0;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,arg2);
	RTLIU(3);
	
	RTEAA("parse_ctx", 297, Current, 1, 3, 3925);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_empty", EX_PRE);
		tb1 = (nstcall = 1, F666_4976(RTCW(arg1)));
		RTTE((EIF_BOOLEAN) !tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
		in_assertion = 0;
	}
	RTHOOK(3);
	loc1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_);
	RTHOOK(4);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) arg3;
	RTHOOK(5);
	(nstcall = 0, F298_3814(Current, arg1, arg2));
	RTHOOK(6);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) = (EIF_BOOLEAN) loc1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(7);
		RTCT("no_mode_change", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_) == tb1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("last_parsed_string_affected", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("last_decimal_not_void_when_no_error", EX_POST);
		tb2 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
			tb2 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL);
		}
		if (tb2) {
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
}

/* {MA_DECIMAL_TEXT_PARSER}.parse_and_create_last_decimal */
void F298_3814 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,arg2);
	RTLIU(4);
	
	RTEAA("parse_and_create_last_decimal", 297, Current, 0, 2, 3926);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F298_3815(Current, arg1));
	RTHOOK(2);
	if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
		RTHOOK(3);
		tr1 = RTLNSMART(eif_new_type(1124, 0).id);
		(nstcall = -1, F1125_8852(RTCW(tr1), Current, arg2));
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) tr1;
	} else {
		RTHOOK(4);
		*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) NULL;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("last_parsed_is_s", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("last_decimal_created_if_no_error", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) != NULL);
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
}

/* {MA_DECIMAL_TEXT_PARSER}.decimal_parse */
void F298_3815 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_CHARACTER_8 loc1 = (EIF_CHARACTER_8) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_CHARACTER_8 tc1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("decimal_parse", 297, Current, 3, 1, 3927);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(5);
	tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
	*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_) = (EIF_REAL_64) tr8_1;
	RTHOOK(6);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(7);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	loc3 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(8);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(9);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(10);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_6_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(11);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_7_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(12);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(13);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	RTHOOK(14);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	for (;;) {
		RTHOOK(15);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 14L)) || (EIF_BOOLEAN) (loc2 > loc3))) break;
		RTHOOK(16);
		tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
		loc1 = (EIF_CHARACTER_8) tc1;
		RTHOOK(17);
		switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_)) {
			case 1L:
				RTHOOK(18);
				(nstcall = 0, F298_3816(Current, loc1, loc2, arg1));
				break;
			case 10L:
				RTHOOK(19);
				(nstcall = 0, F298_3818(Current, loc1, loc2, arg1));
				break;
			case 6L:
				RTHOOK(20);
				(nstcall = 0, F298_3819(Current, loc1, loc2));
				break;
			case 4L:
				RTHOOK(21);
				(nstcall = 0, F298_3820(Current, loc1, loc2));
				break;
			case 7L:
				RTHOOK(22);
				(nstcall = 0, F298_3821(Current, loc1, loc2));
				break;
			case 11L:
				RTHOOK(23);
				(nstcall = 0, F298_3822(Current, loc1, loc2));
				break;
			case 8L:
				RTHOOK(24);
				(nstcall = 0, F298_3823(Current, loc1, loc2));
				break;
			case 12L:
				RTHOOK(25);
				(nstcall = 0, F298_3824(Current, loc1, loc2));
				break;
			case 13L:
				RTHOOK(26);
				(nstcall = 0, F298_3825(Current, loc1, loc2));
				break;
			case 9L:
				RTHOOK(27);
				(nstcall = 0, F298_3826(Current, loc1, loc2));
				break;
			case 2L:
			case 3L:
			case 5L:
				RTHOOK(28);
				loc2 = (EIF_INTEGER_32) loc3;
				break;
			default:
				RTHOOK(29);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
				break;
		}
		RTHOOK(30);
		loc2++;
	}
	RTHOOK(31);
	switch (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_)) {
		case 1L:
		case 4L:
		case 10L:
		case 11L:
		case 12L:
		case 13L:
			RTHOOK(32);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			break;
	}
	RTHOOK(33);
	if ((EIF_BOOLEAN) (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) && (EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_2_0_))) {
		RTHOOK(34);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
	}
	RTHOOK(35);
	RTAR(Current, arg1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(36);
		RTCT("last_parsed_is_s", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(37);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_start */
void F298_3816 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLR(2,tr1);
	RTLIU(3);
	
	RTEAA("process_start", 297, Current, 0, 3, 3928);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_start", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 1L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(8);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(9);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(10);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_0_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(11);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 10L);
			break;
		case (EIF_CHARACTER_8) 'N':
		case (EIF_CHARACTER_8) 'n':
			RTHOOK(12);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3)+ _LNGOFF_1_1_0_2_);
			tr1 = RTMS_EX_H("an",2,24942);
			if ((nstcall = 0, F298_3827(Current, arg3, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), ti4_1, tr1))) {
				RTHOOK(13);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
			} else {
				RTHOOK(14);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
				RTHOOK(15);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
			}
			break;
		case (EIF_CHARACTER_8) 'S':
		case (EIF_CHARACTER_8) 's':
			RTHOOK(16);
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3)+ _LNGOFF_1_1_0_2_);
			tr1 = RTMS_EX_H("nan",3,7233902);
			if ((nstcall = 0, F298_3827(Current, arg3, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), ti4_1, tr1))) {
				RTHOOK(17);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
			} else {
				RTHOOK(18);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
				RTHOOK(19);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
			}
			break;
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'i':
			RTHOOK(20);
			(nstcall = 0, F298_3817(Current, arg3, arg2));
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(21);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) arg2;
			RTHOOK(22);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_) = (EIF_INTEGER_32) arg2;
			RTHOOK(23);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_) = (EIF_INTEGER_32) arg2;
			RTHOOK(24);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			break;
		default:
			RTHOOK(25);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(26);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
			break;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(27);
		RTCT("next_state", EX_POST);
		tb1 = '\01';
		if (!(nstcall = 0, F298_3803(Current))) {
			tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) != ((EIF_INTEGER_32) 1L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(28);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.handle_i */
void F298_3817 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("handle_i", 297, Current, 0, 2, 3929);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTMS_EX_H("nf",2,28262);
	if ((nstcall = 0, F298_3827(Current, arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 1L)), (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 2L)), tr1))) {
		RTHOOK(4);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN)((EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 - arg2) + ((EIF_INTEGER_32) 1L)) == ((EIF_INTEGER_32) 3L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tr1 = RTMS_EX_H("inity",5,1853211257);
			tb1 = (nstcall = 0, F298_3827(Current, arg1, (EIF_INTEGER_32) (arg2 + ((EIF_INTEGER_32) 3L)), ti4_1, tr1));
		}
		if (tb1) {
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
		} else {
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
		}
	} else {
		RTHOOK(8);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
		RTHOOK(9);
		*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 101L);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("definition", EX_POST);
		tb1 = '\01';
		if ((EIF_BOOLEAN) !(nstcall = 0, F298_3803(Current))) {
			tb2 = '\0';
			if ((nstcall = 0, F298_3805(Current))) {
				tb2 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 5L));
			}
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
}

/* {MA_DECIMAL_TEXT_PARSER}.process_sign */
void F298_3818 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2, EIF_REFERENCE arg3)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,arg3);
	RTLIU(2);
	
	RTEAA("process_sign", 297, Current, 0, 3, 3930);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_sign", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 10L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg3 != NULL), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("index_in_s", EX_PRE);
		tb1 = '\0';
		if ((EIF_BOOLEAN) (arg2 > ((EIF_INTEGER_32) 0L))) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg3)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN) (arg2 <= ti4_1);
		}
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'I':
		case (EIF_CHARACTER_8) 'i':
			RTHOOK(5);
			(nstcall = 0, F298_3817(Current, arg3, arg2));
			break;
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_) = (EIF_INTEGER_32) arg2;
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(9);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_) = (EIF_INTEGER_32) arg2;
			RTHOOK(11);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_) = (EIF_INTEGER_32) arg2;
			RTHOOK(12);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
			break;
		default:
			RTHOOK(13);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(14);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_integer_part */
void F298_3819 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_integer_part", 297, Current, 0, 2, 3931);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_integer_part", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 6L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_))++;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
			break;
		case (EIF_CHARACTER_8) '.':
			RTHOOK(5);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_))++;
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_) = (EIF_INTEGER_32) arg2;
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
			break;
		case (EIF_CHARACTER_8) ',':
			RTHOOK(8);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_))++;
			RTHOOK(9);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_9_) = (EIF_INTEGER_32) arg2;
			RTHOOK(10);
			*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			RTHOOK(11);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 11L);
			break;
		default:
			RTHOOK(12);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(13);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 103L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_starting_point */
void F298_3820 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_starting_point", 297, Current, 0, 2, 3932);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_starting_point", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 4L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_4_) = (EIF_INTEGER_32) arg2;
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		default:
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_point */
void F298_3821 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_point", 297, Current, 0, 2, 3933);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_point", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 7L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_))++;
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
			break;
		default:
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(8);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_comma */
void F298_3822 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_comma", 297, Current, 0, 2, 3934);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_comma", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 11L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_))++;
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
			break;
		default:
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 102L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_fractional_part */
void F298_3823 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_fractional_part", 297, Current, 0, 2, 3935);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_fractional_part", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 8L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_5_))++;
			break;
		case (EIF_CHARACTER_8) 'E':
		case (EIF_CHARACTER_8) 'e':
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 12L);
			break;
		default:
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(6);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 104L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_start_exponent */
void F298_3824 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_start_exponent", 297, Current, 0, 2, 3936);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_start_exponent", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 12L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_) = (EIF_REAL_64) tr8_1;
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_6_) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_7_) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_), tr8_1)) {
				RTHOOK(7);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
			RTHOOK(9);
			if ((EIF_BOOLEAN)(arg1 == (EIF_CHARACTER_8) '-')) {
				RTHOOK(10);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) -1L);
			} else {
				RTHOOK(11);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_1_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(12);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 13L);
			break;
		default:
			RTHOOK(13);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(14);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_exponent_sign */
void F298_3825 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_exponent_sign", 297, Current, 0, 2, 3937);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_exponent_sign", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 13L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_1 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_) = (EIF_REAL_64) tr8_1;
			RTHOOK(4);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_6_) = (EIF_INTEGER_32) arg2;
			RTHOOK(5);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_7_) = (EIF_INTEGER_32) arg2;
			RTHOOK(6);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_), tr8_1)) {
				RTHOOK(7);
				*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_8_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
			}
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		default:
			RTHOOK(9);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(10);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(11);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.process_exponent */
void F298_3826 (EIF_REFERENCE Current, EIF_CHARACTER_8 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_REAL_64 tr8_3;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("process_exponent", 297, Current, 0, 2, 3938);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("state_exponent", EX_PRE);
		RTTE((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) == ((EIF_INTEGER_32) 9L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	switch (arg1) {
		case (EIF_CHARACTER_8) '0':
		case (EIF_CHARACTER_8) '1':
		case (EIF_CHARACTER_8) '2':
		case (EIF_CHARACTER_8) '3':
		case (EIF_CHARACTER_8) '4':
		case (EIF_CHARACTER_8) '5':
		case (EIF_CHARACTER_8) '6':
		case (EIF_CHARACTER_8) '7':
		case (EIF_CHARACTER_8) '8':
		case (EIF_CHARACTER_8) '9':
			RTHOOK(3);
			tr8_1 = *(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_);
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 10L));
			ti4_1 = (EIF_INTEGER_32) (arg1);
			ti4_2 = (EIF_INTEGER_32) ((EIF_CHARACTER_8) '0');
			tr8_3 = (EIF_REAL_64) ((EIF_INTEGER_32) (ti4_1 - ti4_2));
			*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_) = (EIF_REAL_64) (EIF_REAL_64) ((EIF_REAL_64) (tr8_1 * tr8_2) + tr8_3);
			RTHOOK(4);
			(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_7_))++;
			RTHOOK(5);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) 0L));
			if ((EIF_BOOLEAN) eif_is_greater_real_64 (*(EIF_REAL_64 *)(Current+ _R64OFF_2_2_0_10_0_0_0_0_), tr8_1)) {
				RTHOOK(6);
				(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_8_))++;
			}
			RTHOOK(7);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 9L);
			break;
		default:
			RTHOOK(8);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 14L);
			RTHOOK(9);
			*(EIF_INTEGER_32 *)(Current+ _LNGOFF_2_2_0_3_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 105L);
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(10);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_TEXT_PARSER}.case_insensitive_substring_equal */
EIF_BOOLEAN F298_3827 (EIF_REFERENCE Current, EIF_REFERENCE arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_REFERENCE arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,arg4);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("case_insensitive_substring_equal", 297, Current, 2, 4, 3939);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("s_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("t_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg4 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	loc1 = (EIF_INTEGER_32) arg2;
	RTHOOK(4);
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	for (;;) {
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if (!(EIF_BOOLEAN) (loc1 > ti4_1)) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_1_1_0_2_);
			tb3 = (EIF_BOOLEAN) (loc2 > ti4_1);
		}
		if (!tb3) {
			tb2 = (EIF_BOOLEAN) (loc1 > arg3);
		}
		if (!tb2) {
			tr1 = RTOUCR(408,(nstcall = 0, F134_1860), (Current));
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc1));
			tc1 = (nstcall = 1, F130_1772(RTCW(tr1), tc1));
			tr1 = RTOUCR(408,(nstcall = 0, F134_1860), (Current));
			tc2 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg4))-776])(arg4, loc2));
			tc2 = (nstcall = 1, F130_1772(RTCW(tr1), tc2));
			tb1 = (EIF_BOOLEAN)(tc1 != tc2);
		}
		if (tb1) break;
		RTHOOK(6);
		loc1++;
		RTHOOK(7);
		loc2++;
	}
	RTHOOK(8);
	Result = '\0';
	if ((EIF_BOOLEAN) (loc1 > arg3)) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg4)+ _LNGOFF_1_1_0_2_);
		Result = (EIF_BOOLEAN) (loc2 > ti4_1);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("definition", EX_POST);
		tr1 = RTOUCR(401,(nstcall = 0, F297_3787), (Current));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32, EIF_INTEGER_32)) R6187[Dtype(RTCW(arg1))-1079])(arg1, arg2, arg3));
		tr3 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6168[Dtype(RTCW(tr2))-1079])(tr2));
		tr2 = (nstcall = 1, (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) R6168[Dtype(RTCW(arg4))-1079])(arg4));
		tb2 = (nstcall = 1, F862_5656(RTCW(tr1), tr3, tr2));
		if ((EIF_BOOLEAN)(Result == tb2)) {
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

/* {MA_DECIMAL_TEXT_PARSER}._invariant */
void F298_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_BOOLEAN tb1;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTEAINV(l_feature_name, 247, Current, 0, 0);
	RTIT("decimal_point_is_comma_implies_has_fractional_part", Current);
	tb1 = '\01';
	if (*(EIF_BOOLEAN *)(Current+ _CHROFF_2_1_)) {
		tb1 = (nstcall = 0, F298_3808(Current));
	}
	if (tb1) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit248 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
