/*
 * Code for class UC_UTF16_ROUTINES
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"
#include "../E1/eoffsets.h"

#include "uc289.h"
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

/* {UC_UTF16_ROUTINES}.valid_utf16 */
EIF_BOOLEAN F861_5603 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_utf16", 860, Current, 3, 1, 8624);
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
		RTCT("a_string_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
	RTHOOK(4);
	tb1 = '\0';
	if (Result) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(5);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 1L)));
		tu4_2 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(arg1))-1079])(arg1, ((EIF_INTEGER_32) 2L)));
		if ((nstcall = 0, F861_5611(Current, tu4_1, tu4_2))) {
			RTHOOK(6);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		} else {
			RTHOOK(7);
			loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		}
		RTHOOK(8);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(9);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(10);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(11);
			if ((nstcall = 0, F861_5614(Current, loc1))) {
				RTHOOK(12);
				loc2 += ((EIF_INTEGER_32) 2L);
				RTHOOK(13);
				Result = '\0';
				if ((nstcall = 0, F861_5615(Current, loc1))) {
					tb1 = '\0';
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tb1 = (nstcall = 0, F861_5616(Current, ti4_1));
					}
					Result = tb1;
				}
			}
			RTHOOK(14);
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(15);
		RTCT("empty_is_true", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(16);
		RTCT("utf16_even_count", EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(17);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF16_ROUTINES}.valid_utf16be */
EIF_BOOLEAN F861_5604 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_utf16be", 860, Current, 3, 1, 8625);
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
		RTCT("a_string_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
	RTHOOK(4);
	tb1 = '\0';
	if (Result) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
		RTHOOK(6);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		loc3 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(7);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(8);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(9);
			if ((nstcall = 0, F861_5614(Current, loc1))) {
				RTHOOK(10);
				loc2 += ((EIF_INTEGER_32) 2L);
				RTHOOK(11);
				Result = '\0';
				if ((nstcall = 0, F861_5615(Current, loc1))) {
					tb1 = '\0';
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tb1 = (nstcall = 0, F861_5616(Current, ti4_1));
					}
					Result = tb1;
				}
			}
			RTHOOK(12);
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(13);
		RTCT("empty_is_true", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(14);
		RTCT("utf16_even_count", EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF16_ROUTINES}.valid_utf16le */
EIF_BOOLEAN F861_5605 (EIF_REFERENCE Current, EIF_REFERENCE arg1)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,arg1);
	RTLR(1,tr1);
	RTLR(2,Current);
	RTLIU(3);
	
	RTEAA("valid_utf16le", 860, Current, 3, 1, 8626);
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
		RTCT("a_string_is_string", EX_PRE);
		tr1 = RTMS_EX_H("",0,0);
		tb1 = (nstcall = 1, F1_7(arg1, tr1));
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
	RTHOOK(4);
	tb1 = '\0';
	if (Result) {
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		tb1 = (EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L));
	}
	if (tb1) {
		RTHOOK(5);
		loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
		for (;;) {
			RTHOOK(6);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || (EIF_BOOLEAN) !Result)) break;
			RTHOOK(7);
			tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
			ti4_1 = (EIF_INTEGER_32) (tc1);
			loc1 = (EIF_INTEGER_32) ti4_1;
			RTHOOK(8);
			if ((nstcall = 0, F861_5614(Current, loc1))) {
				RTHOOK(9);
				loc2 += ((EIF_INTEGER_32) 2L);
				RTHOOK(10);
				Result = '\0';
				if ((nstcall = 0, F861_5615(Current, loc1))) {
					tb1 = '\0';
					if ((EIF_BOOLEAN) (loc2 <= loc3)) {
						tc1 = (nstcall = 1, eif_optimize_return = 1, *(EIF_CHARACTER_8 *)(FUNCTION_CAST(EIF_REFERENCE, (EIF_REFERENCE, EIF_INTEGER_32)) R4657[Dtype(RTCW(arg1))-776])(arg1, loc2));
						ti4_1 = (EIF_INTEGER_32) (tc1);
						tb1 = (nstcall = 0, F861_5616(Current, ti4_1));
					}
					Result = tb1;
				}
			}
			RTHOOK(11);
			loc2 += ((EIF_INTEGER_32) 2L);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(12);
		RTCT("empty_is_true", EX_POST);
		tb1 = '\01';
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 0L))) {
			tb1 = Result;
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(13);
		RTCT("utf16_even_count", EX_POST);
		tb1 = '\01';
		if (Result) {
			ti4_1 = *(EIF_INTEGER_32 *)(RTCW(arg1)+ _LNGOFF_1_1_0_2_);
			tb1 = (EIF_BOOLEAN)((EIF_INTEGER_32) (ti4_1 % ((EIF_INTEGER_32) 2L)) == ((EIF_INTEGER_32) 0L));
		}
		if (tb1) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(14);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF16_ROUTINES}.bom_be */
static EIF_REFERENCE F861_5606_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(463)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bom_be", 860, Current, 0, 0, 8627);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = RTMS_EX_H("\376\377",2,65279);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bom_be_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("two_bytes", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("first_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 254U))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("second_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 2L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 255U))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F861_5606 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(463,F861_5606_body,(Current));
}

/* {UC_UTF16_ROUTINES}.bom_le */
static EIF_REFERENCE F861_5607_body (EIF_REFERENCE Current)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOUDR(440)

	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("bom_le", 860, Current, 0, 0, 8628);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	Result = RTMS_EX_H("\377\376",2,65534);
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("bom_le_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(3);
		RTCT("two_bytes", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(RTCW(Result)+ _LNGOFF_1_1_0_2_);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 2L))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(4);
		RTCT("first_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 1L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 255U))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("second_byte", EX_POST);
		tu4_1 = (nstcall = 1, (FUNCTION_CAST(EIF_NATURAL_32, (EIF_REFERENCE, EIF_INTEGER_32)) R6109[Dtype(RTCW(Result))-1079])(Result, ((EIF_INTEGER_32) 2L)));
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 254U))) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(6);
	RTLE;
	RTEE;
	return Result;
#undef Result
}

EIF_REFERENCE F861_5607 (EIF_REFERENCE Current)
{
	GTCX
	return RTOUCR(440,F861_5607_body,(Current));
}

/* {UC_UTF16_ROUTINES}.is_endian_detection_character_most_first */
EIF_BOOLEAN F861_5608 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("is_endian_detection_character_most_first", 860, Current, 0, 2, 8629);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 254L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 255L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		if ((nstcall = 0, F861_5612(Current, arg1, arg2))) {
			tb1 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 254L));
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

/* {UC_UTF16_ROUTINES}.is_endian_detection_character_most_first_natural_32 */
EIF_BOOLEAN F861_5609 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
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
	
	RTEAA("is_endian_detection_character_most_first_natural_32", 860, Current, 0, 2, 8595);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5621(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5621(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 254U)) && (EIF_BOOLEAN)(arg2 == ((EIF_NATURAL_32) 255U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		if ((nstcall = 0, F861_5613(Current, arg1, arg2))) {
			tb1 = (EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 254U));
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

/* {UC_UTF16_ROUTINES}.is_endian_detection_character_least_first */
EIF_BOOLEAN F861_5610 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("is_endian_detection_character_least_first", 860, Current, 0, 2, 8596);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 255L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 254L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		if ((nstcall = 0, F861_5612(Current, arg1, arg2))) {
			tb1 = (EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 255L));
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

/* {UC_UTF16_ROUTINES}.is_endian_detection_character_least_first_natural_32 */
EIF_BOOLEAN F861_5611 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
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
	
	RTEAA("is_endian_detection_character_least_first_natural_32", 860, Current, 0, 2, 8597);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5621(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5621(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 255U)) && (EIF_BOOLEAN)(arg2 == ((EIF_NATURAL_32) 254U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		if ((nstcall = 0, F861_5613(Current, arg1, arg2))) {
			tb1 = (EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 255U));
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

/* {UC_UTF16_ROUTINES}.is_endian_detection_character */
EIF_BOOLEAN F861_5612 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_endian_detection_character", 860, Current, 0, 2, 8598);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 254L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 255L))) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_INTEGER_32) 255L)) && (EIF_BOOLEAN)(arg2 == ((EIF_INTEGER_32) 254L))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		ti4_1 = eif_min_int32 (arg1,arg2);
		if ((EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 254L))) {
			ti4_1 = eif_max_int32 (arg1,arg2);
			tb1 = (EIF_BOOLEAN)(ti4_1 == ((EIF_INTEGER_32) 255L));
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

/* {UC_UTF16_ROUTINES}.is_endian_detection_character_natural_32 */
EIF_BOOLEAN F861_5613 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1, EIF_NATURAL_32 arg2)
{
	GTCX
	RTEX;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("is_endian_detection_character_natural_32", 860, Current, 0, 2, 8599);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("a_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5621(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("other_byte_is_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5621(Current, arg2)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 254U)) && (EIF_BOOLEAN)(arg2 == ((EIF_NATURAL_32) 255U))) || (EIF_BOOLEAN) ((EIF_BOOLEAN)(arg1 == ((EIF_NATURAL_32) 255U)) && (EIF_BOOLEAN)(arg2 == ((EIF_NATURAL_32) 254U))));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("definition", EX_POST);
		tb1 = '\0';
		tu4_1 = eif_min_uint32 (arg1,arg2);
		if ((EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 254U))) {
			tu4_1 = eif_max_uint32 (arg1,arg2);
			tb1 = (EIF_BOOLEAN)(tu4_1 == ((EIF_NATURAL_32) 255U));
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

/* {UC_UTF16_ROUTINES}.is_surrogate */
EIF_BOOLEAN F861_5614 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_surrogate", 860, Current, 0, 1, 8600);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 216L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 224L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF16_ROUTINES}.is_high_surrogate */
EIF_BOOLEAN F861_5615 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_high_surrogate", 860, Current, 0, 1, 8601);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 216L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 220L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF16_ROUTINES}.is_low_surrogate */
EIF_BOOLEAN F861_5616 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_low_surrogate", 860, Current, 0, 1, 8602);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 220L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 224L)));
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTLE;
	RTEE;
	return Result;
}

/* {UC_UTF16_ROUTINES}.least_10_bits */
EIF_INTEGER_32 F861_5617 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("least_10_bits", 860, Current, 0, 2, 8603);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("msb_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("lsb_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("surrogate", EX_PRE);
		RTTE((nstcall = 0, F861_5614(Current, arg1)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(4);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) ((EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 % ((EIF_INTEGER_32) 4L)) * ((EIF_INTEGER_32) 256L)) + arg2);
	if (RTAL & CK_ENSURE) {
		RTHOOK(5);
		RTCT("ten_bits", EX_POST);
		if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (Result < ((EIF_INTEGER_32) 1024L)))) {
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

/* {UC_UTF16_ROUTINES}.surrogate */
EIF_INTEGER_32 F861_5618 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2)
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
	
	RTEAA("surrogate", 860, Current, 0, 2, 8604);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("high_10", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 1024L))), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("low_10", EX_PRE);
		RTTE((EIF_BOOLEAN) ((EIF_BOOLEAN) (arg2 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg2 < ((EIF_INTEGER_32) 1024L))), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (((EIF_INTEGER_32) 65536L) + (EIF_INTEGER_32) ((EIF_INTEGER_32) (arg1 * ((EIF_INTEGER_32) 1024L)) + arg2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("more_than_16bits", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 65536L))) {
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

/* {UC_UTF16_ROUTINES}.surrogate_from_bytes */
EIF_INTEGER_32 F861_5619 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1, EIF_INTEGER_32 arg2, EIF_INTEGER_32 arg3, EIF_INTEGER_32 arg4)
{
	GTCX
	RTEX;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	
	RTEAA("surrogate_from_bytes", 860, Current, 0, 4, 8605);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("surrogate_high", EX_PRE);
		RTTE((nstcall = 0, F861_5615(Current, arg1)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("high_least_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg2)), label_1);
		RTCK;
		RTHOOK(3);
		RTCT("surrogate_low", EX_PRE);
		RTTE((nstcall = 0, F861_5616(Current, arg3)), label_1);
		RTCK;
		RTHOOK(4);
		RTCT("low_least_byte", EX_PRE);
		RTTE((nstcall = 0, F861_5620(Current, arg4)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(5);
	ti4_1 = (nstcall = 0, F861_5617(Current, arg1, arg2));
	ti4_2 = (nstcall = 0, F861_5617(Current, arg3, arg4));
	Result = (nstcall = 0, F861_5618(Current, ti4_1, ti4_2));
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("more_than_16bits", EX_POST);
		if ((EIF_BOOLEAN) (Result >= ((EIF_INTEGER_32) 65536L))) {
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

/* {UC_UTF16_ROUTINES}.is_byte */
EIF_BOOLEAN F861_5620 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("is_byte", 860, Current, 0, 1, 8606);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_INTEGER_32) 256L))))) {
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

/* {UC_UTF16_ROUTINES}.is_byte_natural_32 */
EIF_BOOLEAN F861_5621 (EIF_REFERENCE Current, EIF_NATURAL_32 arg1)
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
	
	RTEAA("is_byte_natural_32", 860, Current, 0, 1, 8607);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	RTHOOK(1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 256U)));
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("definition", EX_POST);
		if ((EIF_BOOLEAN)(Result == (EIF_BOOLEAN) ((EIF_BOOLEAN) (arg1 >= (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L)) && (EIF_BOOLEAN) (arg1 < ((EIF_NATURAL_32) 256U))))) {
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

/* {UC_UTF16_ROUTINES}.supplementary_to_high_surrogate */
EIF_INTEGER_32 F861_5622 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
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
	
	RTEAA("supplementary_to_high_surrogate", 860, Current, 0, 1, 8608);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("code_high_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 65535L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("code_low_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1114111L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4668(RTCW(tr1), arg1, ((EIF_INTEGER_32) 10L)));
	Result = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 + ((EIF_INTEGER_32) 55232L));
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("high_surrogate", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 256L) * ((EIF_INTEGER_32) 216L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_too_big", EX_POST);
		if ((EIF_BOOLEAN) (Result < (EIF_INTEGER_32) (((EIF_INTEGER_32) 256L) * ((EIF_INTEGER_32) 220L)))) {
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

/* {UC_UTF16_ROUTINES}.supplementary_to_low_surrogate */
EIF_INTEGER_32 F861_5623 (EIF_REFERENCE Current, EIF_INTEGER_32 arg1)
{
	GTCX
	RTEX;
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	
	RTEAA("supplementary_to_low_surrogate", 860, Current, 0, 1, 8609);
	RTSA(Dtype(Current));
	RTSC;
	RTGC;
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("code_high_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 > ((EIF_INTEGER_32) 65535L)), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("code_low_enough", EX_PRE);
		RTTE((EIF_BOOLEAN) (arg1 <= ((EIF_INTEGER_32) 1114111L)), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	tr1 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	tr2 = RTOUCR(378,(nstcall = 0, F859_5585), (Current));
	ti4_1 = (nstcall = 1, F350_4663(RTCW(tr2), arg1, ((EIF_INTEGER_32) 1023L)));
	ti4_1 = (nstcall = 1, F350_4664(RTCW(tr1), ti4_1, ((EIF_INTEGER_32) 56320L)));
	Result = (EIF_INTEGER_32) ti4_1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("low_surrogate", EX_POST);
		if ((EIF_BOOLEAN) (Result >= (EIF_INTEGER_32) (((EIF_INTEGER_32) 256L) * ((EIF_INTEGER_32) 220L)))) {
			RTCK;
		} else {
			RTCF;
		}
		RTHOOK(5);
		RTCT("not_too_big", EX_POST);
		if ((EIF_BOOLEAN) (Result < (EIF_INTEGER_32) (((EIF_INTEGER_32) 256L) * ((EIF_INTEGER_32) 224L)))) {
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

void EIF_Minit289 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
