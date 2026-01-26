/*
 * Code for class MA_DECIMAL_CONTEXT
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma399.h"
#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MA_DECIMAL_CONTEXT}.make_default */
void F1126_8969 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("make_default", 1125, Current, 1, 0, 15895);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	ti4_1 = RTOUCB(EIF_INTEGER_32,394,(nstcall = 0, F1124_8837), (Current));
	(nstcall = 0, F1126_8973(Current, ((EIF_INTEGER_32) 9L), ti4_1));
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(395,(nstcall = 0, F1124_8836), (Current)))+ _LNGOFF_1_1_0_1_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(395,(nstcall = 0, F1124_8836), (Current)))+ _LNGOFF_1_1_0_0_);
		if ((EIF_BOOLEAN) (loc1 > ti4_1)) break;
		RTHOOK(4);
		tr1 = RTOUCR(395,(nstcall = 0, F1124_8836), (Current));
		ti4_2 = (nstcall = 1, F780_5435(RTCW(tr1), loc1));
		(nstcall = 0, F1126_8990(Current, ti4_2));
		RTHOOK(5);
		loc1++;
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("default_digits", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == ((EIF_INTEGER_32) 9L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("default_rounding_mode", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == RTOUCB(EIF_INTEGER_32,394,(nstcall = 0, F1124_8837), (Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("trap_division_by_zero", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("trap_invalid_operation", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 3L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("trap_overflow", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 5L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("trap_underflow", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 7L)))) {
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
}

/* {MA_DECIMAL_CONTEXT}.make_double */
void F1126_8970 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_double", 1125, Current, 0, 0, 15896);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1126_8969(Current));
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 9L)) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("default_digits", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 9L)) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_rounding_mode", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == RTOUCB(EIF_INTEGER_32,394,(nstcall = 0, F1124_8837), (Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("trap_division_by_zero", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("trap_invalid_operation", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 3L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(7);
		RTCT("trap_overflow", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 5L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(8);
		RTCT("trap_underflow", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, ((EIF_INTEGER_32) 7L)))) {
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
}

/* {MA_DECIMAL_CONTEXT}.make_extended */
void F1126_8971 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_extended", 1125, Current, 0, 0, 15897);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1126_8973(Current, ((EIF_INTEGER_32) 9L), ((EIF_INTEGER_32) 6L)));
	RTHOOK(2);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("default_digits", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == ((EIF_INTEGER_32) 9L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_rounding_mode", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 6L))) {
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

/* {MA_DECIMAL_CONTEXT}.make_double_extended */
void F1126_8972 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("make_double_extended", 1125, Current, 0, 0, 15898);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	(nstcall = 0, F1126_8971(Current));
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 9L)) + ((EIF_INTEGER_32) 1L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("default_digits", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == (EIF_INTEGER_32) ((EIF_INTEGER_32) (((EIF_INTEGER_32) 2L) * ((EIF_INTEGER_32) 9L)) + ((EIF_INTEGER_32) 1L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("default_rounding_mode", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 6L))) {
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

/* {MA_DECIMAL_CONTEXT}.make */
void F1126_8973 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("make", 1125, Current, 0, 2, 15899);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_digits_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 999999999L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_rounding_mode_valid", EX_PRE);
		tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
		tr2 = RTOUCR(397,(nstcall = 0, F1124_8842), (Current));
		tb1 = (nstcall = 1, F347_4644(RTCW(tr1), tr2, arg2));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) arg1;
	RTHOOK(4);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) = (EIF_INTEGER_32) arg2;
	RTHOOK(5);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,780,1035,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F781_5430(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 8L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr1;
	RTHOOK(6);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,780,1035,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLNSMART(typres0.id);
	}
	(nstcall = -1, F781_5430(RTCW(tr1), (EIF_BOOLEAN) 0, ((EIF_INTEGER_32) 1L), ((EIF_INTEGER_32) 8L)));
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr1;
	RTHOOK(7);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 999999999L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("digits_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(9);
		RTCT("rounding_mode_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == arg2)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("exponent_limit", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) == ((EIF_INTEGER_32) 999999999L))) {
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

/* {MA_DECIMAL_CONTEXT}.digits */
EIF_INTEGER_32 F1126_8974 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
}


/* {MA_DECIMAL_CONTEXT}.precision */
EIF_INTEGER_32 F1126_8975 (EIF_REFERENCE Current)
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
	
	RTEAA("precision", 1125, Current, 0, 0, 15901);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("synonym_of_digits", EX_POST);
		if ((EIF_BOOLEAN)(Result == *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_))) {
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

/* {MA_DECIMAL_CONTEXT}.rounding_mode */
EIF_INTEGER_32 F1126_8976 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_);
}


/* {MA_DECIMAL_CONTEXT}.reason */
EIF_REFERENCE F1126_8977 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current);
}


/* {MA_DECIMAL_CONTEXT}.exponent_limit */
EIF_INTEGER_32 F1126_8978 (EIF_REFERENCE Current)
{
	return *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_);
}


/* {MA_DECIMAL_CONTEXT}.e_tiny */
EIF_INTEGER_32 F1126_8979 (EIF_REFERENCE Current)
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
	
	RTEAA("e_tiny", 1125, Current, 0, 0, 15905);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) -Result - (EIF_INTEGER_32) (ti4_1 - ((EIF_INTEGER_32) 1L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_CONTEXT}.default_context */
static EIF_REFERENCE F1126_8980_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(398)

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	
	RTEAA("default_context", 1125, Current, 0, 0, 15906);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLNS(eif_new_type(1125, 0x01).id, 1125, _OBJSIZ_3_2_0_3_0_0_0_0_);
	(nstcall = -1, F1126_8969(RTCW(tr1)));
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_context_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1126_8980 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(398,F1126_8980_body,(Current));
}

/* {MA_DECIMAL_CONTEXT}.is_flagged */
EIF_BOOLEAN F1126_8981 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_flagged", 1125, Current, 0, 1, 15907);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	tb1 = (nstcall = 1, F781_5435(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_CONTEXT}.is_trapped */
EIF_BOOLEAN F1126_8982 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_trapped", 1125, Current, 0, 1, 15908);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	tb1 = (nstcall = 1, F781_5435(RTCW(tr1), arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_CONTEXT}.valid_signal */
EIF_BOOLEAN F1126_8983 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("valid_signal", 1125, Current, 0, 1, 15909);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
	tr2 = RTOUCR(399,(nstcall = 0, F1124_8844), (Current));
	tb1 = (nstcall = 1, F347_4644(RTCW(tr1), tr2, arg1));
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
	return Result;
}

/* {MA_DECIMAL_CONTEXT}.is_extended */
EIF_BOOLEAN F1126_8984 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_);
}


/* {MA_DECIMAL_CONTEXT}.exception_on_trap */
EIF_BOOLEAN F1126_8985 (EIF_REFERENCE Current)
{
	return *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
}


/* {MA_DECIMAL_CONTEXT}.set_digits */
void F1126_8986 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_digits", 1125, Current, 0, 1, 15912);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("some_digits_valid", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 1L)) && (EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 999999999L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("digits_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == arg1)) {
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

/* {MA_DECIMAL_CONTEXT}.set_exponent_limit */
void F1126_8987 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_exponent_limit", 1125, Current, 0, 1, 15913);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("limit_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("limit_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) == arg1)) {
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

/* {MA_DECIMAL_CONTEXT}.enable_exception_on_trap */
void F1126_8988 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("enable_exception_on_trap", 1125, Current, 0, 0, 15914);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_CONTEXT}.disable_exception_on_trap */
void F1126_8989 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("disable_exception_on_trap", 1125, Current, 0, 0, 15915);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_CONTEXT}.enable_trap */
void F1126_8990 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("enable_trap", 1125, Current, 0, 1, 15916);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F781_5454(RTCW(tr1), (EIF_BOOLEAN) 1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("trapped_signal", EX_POST);
		if ((nstcall = 0, F1126_8982(Current, arg1))) {
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

/* {MA_DECIMAL_CONTEXT}.disable_trap */
void F1126_8991 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("disable_trap", 1125, Current, 0, 1, 15917);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	(nstcall = 1, F781_5454(RTCW(tr1), (EIF_BOOLEAN) 0, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("not_trapped_signal", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F1126_8982(Current, arg1))) {
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

/* {MA_DECIMAL_CONTEXT}.set_flag */
void F1126_8992 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("set_flag", 1125, Current, 0, 1, 15918);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F781_5454(RTCW(tr1), (EIF_BOOLEAN) 1, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("flagged_signal", EX_POST);
		if ((nstcall = 0, F1126_8981(Current, arg1))) {
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

/* {MA_DECIMAL_CONTEXT}.reset_flag */
void F1126_8993 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("reset_flag", 1125, Current, 0, 1, 15919);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	(nstcall = 1, F781_5454(RTCW(tr1), (EIF_BOOLEAN) 0, arg1));
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("unflagged_signal", EX_POST);
		if ((EIF_BOOLEAN) !(nstcall = 0, F1126_8981(Current, arg1))) {
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

/* {MA_DECIMAL_CONTEXT}.reset_flags */
void F1126_8994 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	
	RTEAA("reset_flags", 1125, Current, 2, 0, 15920);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_1_);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(2);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(4);
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		(nstcall = 1, F781_5454(RTCW(tr1), (EIF_BOOLEAN) 0, loc1));
		RTHOOK(5);
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTLE;
	RTEE;
}

/* {MA_DECIMAL_CONTEXT}.set_rounding_mode */
void F1126_8995 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("set_rounding_mode", 1125, Current, 0, 1, 15921);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_mode", EX_PRE);
		tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
		tr2 = RTOUCR(397,(nstcall = 0, F1124_8842), (Current));
		tb1 = (nstcall = 1, F347_4644(RTCW(tr1), tr2, arg1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("rounding_mode_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == arg1)) {
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

/* {MA_DECIMAL_CONTEXT}.set_extended */
void F1126_8996 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_extended", 1125, Current, 0, 0, 15922);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("extended", EX_POST);
		if (*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_)) {
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

/* {MA_DECIMAL_CONTEXT}.set_normal */
void F1126_8997 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("set_normal", 1125, Current, 0, 0, 15923);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("normal", EX_POST);
		if ((EIF_BOOLEAN) !*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_)) {
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

/* {MA_DECIMAL_CONTEXT}.out */
EIF_REFERENCE F1126_8998 (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,Result);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("out", 1125, Current, 0, 0, 15924);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = RTLNS(eif_new_type(1080, 0x01).id, 1080, _OBJSIZ_1_1_0_3_0_0_0_0_);
	(nstcall = -1, F1079_7731(RTCW(Result), ((EIF_INTEGER_32) 30L)));
	RTHOOK(2);
	tr1 = RTMS_EX_H("digits=",7,768601405);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
	tr1 = eif_out__i4_s1(ti4_1);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(4);
	tr1 = RTMS_EX_H(" rounding_mode=",15,18743101);
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr1));
	RTHOOK(5);
	tr1 = RTOUCR(400,(nstcall = 0, F1124_8843), (Current));
	ti4_1 = *(EIF_INTEGER_32 *)(RTCV(RTOUCR(400,(nstcall = 0, F1124_8843), (Current)))+ _LNGOFF_1_1_0_1_);
	ti4_2 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_);
	tr2 = (nstcall = 1, F778_5435(RTCW(tr1), (EIF_INTEGER_32) (ti4_1 + ti4_2)));
	(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(Result))-1080])(Result, tr2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("out_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
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

/* {MA_DECIMAL_CONTEXT}.is_equal */
EIF_BOOLEAN F1126_8999 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("is_equal", 1125, Current, 0, 1, 15925);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	ti4_1 = *(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_);
	ti4_2 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_0_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(ti4_1 == ti4_2);
	RTHOOK(3);
	tb1 = '\0';
	if (Result) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_3_1_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_) == tb2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(4);
	tb1 = '\0';
	if (Result) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_2_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_2_) == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(5);
	tb1 = '\0';
	if (Result) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
		tb2 = (nstcall = 1, F781_5445(RTCW(tr1), tr2));
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(6);
	tb1 = '\0';
	if (Result) {
		tb2 = *(EIF_BOOLEAN *)(RTCW(arg1)+ _CHROFF_3_0_);
		tb1 = (EIF_BOOLEAN)(*(EIF_BOOLEAN *)(Current+ _CHROFF_3_0_) == tb2);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(7);
	tb1 = '\0';
	if (Result) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_3_2_0_1_);
		tb1 = (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTHOOK(8);
	tb1 = '\0';
	if (Result) {
		tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
		tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
		tb2 = (nstcall = 1, F781_5445(RTCW(tr1), tr2));
		tb1 = tb2;
	}
	Result = (EIF_BOOLEAN) tb1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(9);
		RTCT("symmetric", EX_POST);
		if ((!(Result) || (RTEQ(arg1, Current)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(10);
		RTCT("consistent", EX_POST);
		tb1 = '\01';
		if ((nstcall = 0, F1_9(Current, arg1))) {
			tb1 = Result;
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

/* {MA_DECIMAL_CONTEXT}.signal */
void F1126_9000 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_REFERENCE arg2)
{
	GTCX
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(6);
	RTLR(0,Current);
	RTLR(1,arg2);
	RTLR(2,loc1);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLIU(6);
	
	RTEAA("signal", 1125, Current, 1, 2, 15926);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_signal", EX_PRE);
		RTTE((nstcall = 0, F1126_8983(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("a_message_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg2 != NULL), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F1126_8992(Current, arg1));
	RTHOOK(4);
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current) = (EIF_REFERENCE) arg2;
	RTHOOK(5);
	tb1 = '\0';
	if ((nstcall = 0, F1126_8982(Current, arg1))) {
		tb1 = *(EIF_BOOLEAN *)(Current+ _CHROFF_3_1_);
	}
	if (tb1) {
		RTHOOK(6);
		tr1 = RTOUCR(401,(nstcall = 0, F297_3787), (Current));
		tr2 = RTOUCR(402,(nstcall = 0, F1124_8845), (Current));
		tr3 = (nstcall = 1, F778_5435(RTCW(tr2), arg1));
		tr2 = (nstcall = 1, F862_5663(RTCW(tr1), tr3));
		loc1 = (EIF_REFERENCE) tr2;
		RTHOOK(7);
		tr1 = RTMS_EX_H(" : ",3,2112032);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(loc1))-1080])(loc1, tr1));
		RTHOOK(8);
		(nstcall = 1, (FUNCTION_CAST(void, (EIF_REFERENCE, EIF_REFERENCE)) R6295[Dtype(RTCW(loc1))-1080])(loc1, arg2));
		RTHOOK(9);
		tr1 = RTOUCR(403,(nstcall = 0, F90_1348), (Current));
		(nstcall = 1, F222_2629(RTCW(tr1), loc1));
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(10);
		RTCT("flagged_signal", EX_POST);
		if ((nstcall = 0, F1126_8981(Current, arg1))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(11);
		RTCT("reason_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current) == arg2)) {
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
}

/* {MA_DECIMAL_CONTEXT}.copy */
void F1126_9001 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	
	RTEAA("copy", 1125, Current, 0, 1, 15927);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("other_not_void", EX_PRE);
		RTTE((EIF_BOOLEAN)(arg1 != NULL), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("type_identity", EX_PRE);
		RTTE((nstcall = 0, F1_7(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	(nstcall = 0, F1_16(Current, arg1));
	RTHOOK(4);
	tr1 = RTOUCR(404,(nstcall = 0, F135_1863), (Current));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_1_);
	tr2 = (nstcall = 1, F348_4647(RTCW(tr1), tr2));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_1_) = (EIF_REFERENCE) tr2;
	RTHOOK(5);
	tr1 = RTOUCR(404,(nstcall = 0, F135_1863), (Current));
	tr2 = *(EIF_REFERENCE *)(RTCW(arg1) + _REFACS_2_);
	tr2 = (nstcall = 1, F348_4647(RTCW(tr1), tr2));
	RTAR(Current, tr2);
	*(EIF_REFERENCE *)(Current + _REFACS_2_) = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("is_equal", EX_POST);
		if (RTEQ(Current, arg1)) {
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

/* {MA_DECIMAL_CONTEXT}.flags */
EIF_REFERENCE F1126_9002 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_1_);
}


/* {MA_DECIMAL_CONTEXT}.traps */
EIF_REFERENCE F1126_9003 (EIF_REFERENCE Current)
{
	return *(EIF_REFERENCE *)(Current + _REFACS_2_);
}


/* {MA_DECIMAL_CONTEXT}.force_digits */
void F1126_9004 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("force_digits", 1125, Current, 0, 1, 15930);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("d_positive", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(3);
		RTCT("digits_set", EX_POST);
		if ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) == arg1)) {
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

/* {MA_DECIMAL_CONTEXT}._invariant */
void F1126_1 (EIF_REFERENCE Current, int where)
{
	GTCX
	char *l_feature_name = "_invariant";
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTLD;
	
	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTEAINV(l_feature_name, 398, Current, 0, 0);
	RTIT("positive_digits", Current);
	if ((EIF_BOOLEAN) (*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_0_) >= ((EIF_INTEGER_32) 0L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("rounding_mode_valid", Current);
	if ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 2L)) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 1L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 3L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 5L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 6L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 4L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 7L))) || (EIF_BOOLEAN)(*(EIF_INTEGER_32 *)(Current+ _LNGOFF_3_2_0_1_) == ((EIF_INTEGER_32) 0L)))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("flags_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_1_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("flags_lower", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_1_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("flags_upper", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_1_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("traps_not_void", Current);
	if ((EIF_BOOLEAN)(*(EIF_REFERENCE *)(Current + _REFACS_2_) != NULL)) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("traps_lower", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_1_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 1L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTIT("traps_upper", Current);
	tr1 = *(EIF_REFERENCE *)(Current + _REFACS_2_);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(tr1)+ _LNGOFF_1_1_0_0_);
	if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 8L))) {
		RTCK;
	} else {
		RTCF;
	}
	RTLE;
	RTEE;
}

void EIF_Minit399 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
