/*
 * Code for class MA_DECIMAL_CONTEXT_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "ma397.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.minimum_integer_as_decimal */
static EIF_REFERENCE F1124_8833_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(412)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("minimum_integer_as_decimal", 1123, Current, 0, 0, 15757);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(391,(nstcall = 0, F136_1868), (Current));
	tr2 = RTOUCR(392,(nstcall = 1, F132_1795), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("minimum_integer_not_void", EX_POST);
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

EIF_REFERENCE F1124_8833 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(412,F1124_8833_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.maximum_integer_as_decimal */
static EIF_REFERENCE F1124_8834_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(413)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("maximum_integer_as_decimal", 1123, Current, 0, 0, 15758);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTOUCR(391,(nstcall = 0, F136_1868), (Current));
	tr2 = RTOUCR(393,(nstcall = 1, F132_1796), (RTCW(tr1)));
	Result = (EIF_REFERENCE) tr2;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("maximum_integer_not_void", EX_POST);
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

EIF_REFERENCE F1124_8834 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(413,F1124_8834_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.default_traps */
static EIF_REFERENCE F1124_8836_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(395)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("default_traps", 1123, Current, 0, 0, 15760);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {900,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 4L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 4L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F901_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("default_traps_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("has_division_by_zero", EX_POST);
		tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
		tb1 = (nstcall = 1, F347_4644(RTCW(tr1), Result, ((EIF_INTEGER_32) 1L)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("has_invalid_operation", EX_POST);
		tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
		tb1 = (nstcall = 1, F347_4644(RTCW(tr1), Result, ((EIF_INTEGER_32) 3L)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("has_overflow", EX_POST);
		tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
		tb1 = (nstcall = 1, F347_4644(RTCW(tr1), Result, ((EIF_INTEGER_32) 5L)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(6);
		RTCT("has_underflow", EX_POST);
		tr1 = RTOUCR(396,(nstcall = 0, F135_1862), (Current));
		tb1 = (nstcall = 1, F347_4644(RTCW(tr1), Result, ((EIF_INTEGER_32) 7L)));
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(7);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1124_8836 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(395,F1124_8836_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.default_rounding_mode */
static EIF_INTEGER_32 F1124_8837_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRB(EIF_INTEGER_32)
	RTOUDB(EIF_INTEGER_32, 394)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("default_rounding_mode", 1123, Current, 0, 0, 15761);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == ((EIF_INTEGER_32) 4L))) {
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

EIF_INTEGER_32 F1124_8837 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCB(EIF_INTEGER_32,394,F1124_8837_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.rounds */
static EIF_REFERENCE F1124_8842_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(397)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("rounds", 1123, Current, 0, 0, 15766);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {900,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 8L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 8L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F901_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("rounds_not_void", EX_POST);
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

EIF_REFERENCE F1124_8842 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(397,F1124_8842_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.round_words */
static EIF_REFERENCE F1124_8843_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(400)

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("round_words", 1123, Current, 0, 0, 15767);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {898,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 8L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 8L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("Round_up",8,1967400816);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_down",10,606957422);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_ceiling",13,177165159);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_floor",11,711713650);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_half_up",13,437109616);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_half_down",15,897387630);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_half_even",15,914618990);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("Round_unnecessary",17,1193904249);
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F899_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("round_word_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("no_void_round_words", EX_POST);
		tr1 = RTOUCR(414,(nstcall = 0, F135_1861), (Current));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4209[Dtype(RTCW(tr1))-345])(tr1, Result, NULL));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1124_8843 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(400,F1124_8843_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.signals */
static EIF_REFERENCE F1124_8844_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(399)

	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("signals", 1123, Current, 0, 0, 15768);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {900,1005,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,0,((EIF_INTEGER_32) 8L),sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr2) = 8L;
	}
	*((EIF_INTEGER_32 *)tr2+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	*((EIF_INTEGER_32 *)tr2+1) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	*((EIF_INTEGER_32 *)tr2+2) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	*((EIF_INTEGER_32 *)tr2+3) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	*((EIF_INTEGER_32 *)tr2+4) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 5L);
	*((EIF_INTEGER_32 *)tr2+5) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 6L);
	*((EIF_INTEGER_32 *)tr2+6) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 7L);
	*((EIF_INTEGER_32 *)tr2+7) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 8L);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F901_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("signals_not_void", EX_POST);
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

EIF_REFERENCE F1124_8844 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(399,F1124_8844_body,(Current));
}

/* {MA_DECIMAL_CONTEXT_CONSTANTS}.signal_words */
static EIF_REFERENCE F1124_8845_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(402)

	RTLI(4);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLIU(4);
	
	RTEAA("signal_words", 1123, Current, 0, 0, 15769);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	{
		static EIF_TYPE_INDEX typarr0[] = {898,0xFF01,1080,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr2 = RTLNSP2(typres0.id,EO_REF,((EIF_INTEGER_32) 8L),sizeof(EIF_REFERENCE), EIF_FALSE);
		RT_SPECIAL_COUNT(tr2) = 8L;
		memset(tr2, 0, RT_SPECIAL_VISIBLE_SIZE(tr2));
	}
	tr3 = RTMS_EX_H("division_by_zero",16,1417965935);
	*((EIF_REFERENCE *)tr2+0) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("inexact",7,1397928052);
	*((EIF_REFERENCE *)tr2+1) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("invalid_operation",17,528819310);
	*((EIF_REFERENCE *)tr2+2) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("lost_digits",11,331316083);
	*((EIF_REFERENCE *)tr2+3) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("overflow",8,1205316471);
	*((EIF_REFERENCE *)tr2+4) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("rounded",7,1467330660);
	*((EIF_REFERENCE *)tr2+5) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("underflow",9,1193810039);
	*((EIF_REFERENCE *)tr2+6) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr3 = RTMS_EX_H("subnormal",9,289885292);
	*((EIF_REFERENCE *)tr2+7) = (EIF_REFERENCE) tr3;
	RTAR(tr2,tr3);
	tr1 = (FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE)) F899_6145)(tr2);
	Result = (EIF_REFERENCE) tr1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("signal_words_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("no_void_signal_words", EX_POST);
		tr1 = RTOUCR(414,(nstcall = 0, F135_1861), (Current));
		tb1 = (nstcall = 1, (FUNCTION_CAST(EIF_BOOLEAN, (EIF_REFERENCE, EIF_REFERENCE, EIF_REFERENCE)) R4209[Dtype(RTCW(tr1))-345])(tr1, Result, NULL));
		if ((EIF_BOOLEAN) !tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(4);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F1124_8845 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(402,F1124_8845_body,(Current));
}

void EIF_Minit397 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
